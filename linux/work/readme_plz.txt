I made links and links2 hard-linked, meaning they both have the same inode number.
ls -i and see
Appending links file with directory listing, and viewing the contents of the links fiile:

ls >> links

cat links (to see contents)


cat links2

Updating the contents of the link2 file and track its changes back to links:
ls .. >> links2

(appended the links2 file with the contents of the parent directory

)

After removing the links file:
ln -s links2 links3

Then I do this: rm links2
cat links2
rm links2
cat links3

ls -l

total 16
-rw-r--r--  1 whitney  staff   33 Feb  8 19:33 links2
lrwxr-xr-x  1 whitney  staff    6 Feb  8 19:39 links3 -> links2
-rw-r--r--  1 whitney  staff  527 Feb  8 19:41 readme_plz.txt



find / -name work 2> /dev/null


total 16
drwxr-xr-x  2 whitney  staff   64 Feb  9 09:41 dir1
-rw-r--r--  1 whitney  staff    0 Feb  9 09:41 file1
-rw-r--r--  1 whitney  staff   33 Feb  8 19:33 links2
lrwxr-xr-x  1 whitney  staff    6 Feb  8 19:39 links3 -> links2
-rw-r--r--  1 whitney  staff  752 Feb  8 19:47 readme_plz.txt

After creating dir1 and file1 (touch) 


Chaning umask to 007: (I scared... ε=ε=ε=ε=ε=ヾ(;ﾟﾛﾟ)ﾉ  

total 16
drwxr-xr-x  2 whitney  staff    64 Feb  9 09:41 dir1
-rw-r--r--  1 whitney  staff     0 Feb  9 09:41 file1
-rw-r--r--  1 whitney  staff    33 Feb  8 19:33 links2
lrwxr-xr-x  1 whitney  staff     6 Feb  8 19:39 links3 -> links2
-rw-r--r--  1 whitney  staff  1160 Feb  9 09:52 readme_plz.txt

umask 007
007

mkdir dir2
touch file2

total 16
drwxr-xr-x  2 whitney  staff    64 Feb  9 09:41 dir1
drwxrwx---  2 whitney  staff    64 Feb  9 09:53 dir2
-rw-r--r--  1 whitney  staff     0 Feb  9 09:41 file1
-rw-rw----  1 whitney  staff     0 Feb  9 09:53 file2
-rw-r--r--  1 whitney  staff    33 Feb  8 19:33 links2
lrwxr-xr-x  1 whitney  staff     6 Feb  8 19:39 links3 -> links2
-rw-r--r--  1 whitney  staff  1499 Feb  9 09:53 readme_plz.txt
