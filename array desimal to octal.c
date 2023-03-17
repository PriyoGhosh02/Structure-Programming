#include <stdio.h>
#include <math.h>


int c(int dec);

int main() {

    int dec;

    printf("Enter a decimal number: ");
    scanf("%d", &dec);

    printf("%d in decimal = %d in octal", dec, c(dec));

    return 0;
}

int c(int dec) {
    int octNum = 0, i = 1;

    while (dec != 0) {
        octNum += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }

    return octNum;
}
