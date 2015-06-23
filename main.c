#include <stdio.h>
#include "atoi.h"
#include "test.h"

int main() {
    TestEqualInt (atoi("123") , 123);
    TestEqualInt (atoi("-123") , -123);
    TestEqualInt (atoi("   -123") , -123);
    TestEqualInt (atoi("   123") , 123);
    TestEqualInt (atoi("   12h3") , 12);
    TestEqualInt (atoi(" -  12h3") , 0);
    TestEqualInt (atoi(" -12h3") , -12);
    TestEqualInt (atoi("") , -0);
    TestEqualInt (atoi("Fred") , -0);

    printf("Tests finished.  Any errors would have been logged above.\n");

    return 0;
}
