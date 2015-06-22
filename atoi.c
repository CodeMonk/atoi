#include <stdio.h>

int isDigit(char c) {
    return (c >= '0') && (c <= '9');
}

int atoi(char *str) {
    int result = 0;
    int neg_multiplier = 1;

    // Scrub leading whitespace
    while (*str && (
            (*str == ' ') ||
            (*str == '\t'))) 
        str++;

    // Check for negative
    if (*str && *str == '-') {
        neg_multiplier = -1;
        str++;
    }

    // Do number
    for (; *str && isDigit(*str); str++) {
        result = (result * 10) + (*str - '0');
    }

    return result * neg_multiplier;
}
