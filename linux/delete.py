#!/usr/bin/env python
import os

# specify the root directory from where to start the search
root_dir = './'

# specify the file names to search
search_files = ['quiz.txt', 'test.txt']

# specify the output file
output_file = 'output.txt'

with open(output_file, 'w') as outfile:
    for dir_path, dir_names, filenames in os.walk(root_dir):
        for filename in filenames:
            if filename in search_files:
                file_path = os.path.join(dir_path, filename)
                # Write the sub-directory name to the output file
                outfile.write(f'Sub-directory: {dir_path}\n')
                with open(file_path, 'r') as infile:
                    outfile.write(infile.read())
                    outfile.write('\n')  # add a newline after each file's contents

print(f'Contents of {search_files} have been copied to {output_file}.')
