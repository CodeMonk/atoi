#ifndef _TEST_H_
#define _TEST_H_

#define TestEqualInt( X, Y ) do { \
    if (X != Y) { \
        printf("FAILED TestEqualInt(%s, %s) failed! (%d != %d)\n",\
            #X, #Y, X, Y); \
    }\
} while (0)
#endif // _TEST_H_
