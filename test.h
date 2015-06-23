#ifndef _TEST_H_
#define _TEST_H_

#include <string.h>

#define TestEqualInt( X, Y ) do { \
    if (X != Y) { \
        printf("FAILED TestEqualInt(%s, %s) failed! (%d != %d)\n",\
            #X, #Y, X, Y); \
    }\
} while (0)

#define TestEqualString( X, Y ) do { \
    if (strcmp(X , Y)) { \
        printf("FAILED TestEqualString(%s, %s) failed! (%s != %s)\n",\
            #X, #Y, X, Y); \
    }\
} while (0)
#endif // _TEST_H_
