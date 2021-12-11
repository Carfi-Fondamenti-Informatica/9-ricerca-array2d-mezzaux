#include "lib.h"
int cerca(char a1[10][20], char a2[20]) {

    for (int i = 0; i < 10; i++) {
        bool flag = true;
        for (int j = 0; j < 20; j++) {
            if (a1[i][j] != a2[j]) flag = false;
        }

        if (flag) return i;
    }
    return -1;
}
