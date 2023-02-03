#include <stdio.h>

void decimalToBinary(int decimal)
{
    /*  ALGORITHM
     *  ----------
     1) Divide number by 2, store remainder in array
     2) Repeat until number is zero, store remainder in array
     3) Print
    */
    if (decimal == 0) {
        printf("0");
        return;
    }

    // Stores binary number in  (remainder)
    int binaryNumber[32] // 32-bit integer
    int i=0;

    for (;decimal>0;) {
        binaryNumber[i++] = decimal % 2;
        decimal /= 2;
    }

    // Print array in reverse order
    for (int j=i-1; j>=0; j--) {
        printf("%d", binaryNumber[j]);
    }
}

int main()
{
    return ;
}
