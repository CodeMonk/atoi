#include <stdio.h>
#include "atoi.h"
#include "itoa.h"
#include "test.h"

int main() {
    char dest[180];

    TestEqualInt (atoi("123") , 123);
    TestEqualInt (atoi("-123") , -123);
    TestEqualInt (atoi("   -123") , -123);
    TestEqualInt (atoi("   123") , 123);
    TestEqualInt (atoi("   12h3") , 12);
    TestEqualInt (atoi(" -  12h3") , 0);
    TestEqualInt (atoi(" -12h3") , -12);
    TestEqualInt (atoi("") , -0);
    TestEqualInt (atoi("Fred") , -0);

    printf("Atoi Tests finished.  Any errors would have been logged above.\n");

    TestEqualString (itoarl(123,dest, sizeof(dest)) , "123");
    TestEqualString (itoarl(-123,dest, sizeof(dest)) , "-123");
    TestEqualString (itoarl(12345,dest, sizeof(dest)) , "12345");
    TestEqualString (itoarl(-12345123,dest, sizeof(dest)) , "-12345123");
    printf("Itoa LR Tests finished.  Any errors would have been logged above.\n");

    TestEqualString (itoalr(123,dest, sizeof(dest)) , "123");
    TestEqualString (itoalr(-123,dest, sizeof(dest)) , "-123");
    TestEqualString (itoalr(12345,dest, sizeof(dest)) , "12345");
    TestEqualString (itoalr(-12345123,dest, sizeof(dest)) , "-12345123");

    printf("Itoa RL Tests finished.  Any errors would have been logged above.\n");

    return 0;
}
