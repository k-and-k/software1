#include <stdio.h>

int main() {
    printf("Start program\n");
    int i, j, k;

    for (i = 0; i <= 10; i++) {
        for (j = 0; j <= 10; j++) {
            for (k = 0; k <= 10; k++) {

                if (i == 7 && j == 7 && k == 7) {
                    goto END;
                }

                printf("i=%d j=%d k=%d\n", i, j, k);
            }
        }
    }

END:
    printf("Loop terminated at 7,7,7\n");

    return 0;
}
