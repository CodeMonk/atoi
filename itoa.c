#include <stdio.h>
#include <math.h>
#include "itoa.h"

char *itoarl(int64_t num, char *dest, int destlen) {
    char buf[60];
    int neg = num < 0;
    int bufind = 0;
    int i;

    if (neg) {
        num *= -1;
    }

    // Now, scrub off the digits
    while (num > 0) {
        int digit = num%10;
        buf[bufind++] = '0'+digit;
        num /= 10;
    }
    if (neg) {
        buf[bufind++] = '-';
    }

    buf[bufind]='\0';

    if (bufind > destlen) {
        return (char*)0;
    }

    // Now we have it reversed -- reverse it back into the dest.
    dest[bufind]=buf[bufind];
    bufind--;
    for (i=0; bufind >= 0; i++, bufind--) {
        dest[bufind] = buf[i];
    }
    return dest;
}

int64_t Pow(num, exp) {
    int64_t result = 1;

    for (; exp > 0; exp--) {
        result *= num;
    }

    return result;
}

char *itoalr(int64_t num, char *dest, int destlen) {
    int neg = num < 0;
    int bufind = 0;

    if (neg) {
        num *= -1;
        dest[bufind++]='-';
    }

    // How many digits are in the string?
    float fnumDigits = log10(num);
    int numDigits = (int)fnumDigits;

    if ((float)numDigits != fnumDigits) 
        numDigits ++;

    //printf("Num: %lld  Digits: %d (fDigits): %f\n", num, numDigits, fnumDigits);

    // Now walk through
    for (int exp = numDigits -1; exp >= 0; exp--) {
        int64_t mask = Pow(10, exp);
        int digit = num / mask;
        int64_t sub = digit * mask;

        num -= sub;
        dest[bufind++] = '0'+digit;
    }
    dest[bufind]='\0';
    return dest;
}

char *itoa(int64_t num, char *dest, int destlen) {
    return itoarl(num, dest, destlen);
}
