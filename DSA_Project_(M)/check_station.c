// check_station.c

#include "check_station.h"
#include <string.h>
#include <stdio.h>

int Check_Station(char *a, char *b) {
    int n1 = strlen(a);
    int n2 = strlen(b);

    int count = 0;

    for (int i = 0; i < n1; i++) {
        int flag = 0;

        for (int j = i - 2; j <= i + 2; j++) {
            if (j >= 0 && j < n2) {
                char p[2] = {a[i], '\0'};
                char q[2] = {b[j], '\0'};

                int decidechar = strcasecmp(p, q);

                if (decidechar == 0) {
                    flag = 1;
                    break;
                }
            }
        }

        if (flag == 1) {
            count++;
        }
    }

    if (count >= (n1 / 1.2)) {
        return 1;
    } else {
        return 0;
    }
}
