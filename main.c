#include <stdio.h>
#include <assert.h>
#include "atoi.h"

int main() {
    assert (atoi("123") == 123);
    assert (atoi("-123") == -123);
    assert (atoi("   -123") == -123);
    assert (atoi("   123") == 123);
    assert (atoi("   12h3") == 12);
    assert (atoi(" -  12h3") == 0);
    assert (atoi(" -12h3") == -12);
    assert (atoi("") == -0);
    assert (atoi("Fred") == -0);

    printf("All tests passed!\n");
    return 0;
}
