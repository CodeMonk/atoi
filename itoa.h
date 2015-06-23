#ifndef _ITOA_H_
#define _ITOA_H_

#include <stdint.h>


#ifndef int64_t
#define int64_t __int64_t
#endif

char *itoa(int64_t num, char *dest, int destlen);
char *itoalr(int64_t num, char *dest, int destlen);
char *itoarl(int64_t num, char *dest, int destlen);

#endif // _ITOA_H_
