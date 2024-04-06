#include <stdio.h>

int print_sign(int n) {
    if (n > 0) {
        printf("%s", "+\n");
        return (1);
    } else if (n < 0) {
        printf("%s", "/\n");
        return (-1);
    } else {
        printf("%s", "0\n");
        return (0);
    }
}
