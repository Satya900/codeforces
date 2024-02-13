#include <stdio.h>
#include <string.h>

void decodeBorze(char *borzeCode) {
    int len = strlen(borzeCode);

    for (int i = 0; i < len; i++) {
        if (borzeCode[i] == '.') {
            printf("0");
        } else if (borzeCode[i] == '-' && borzeCode[i + 1] == '.') {
            printf("1");
            i++;
        } else if (borzeCode[i] == '-' && borzeCode[i + 1] == '-') {
            printf("2");
            i++;
        }
    }

    printf("\n");
}

int main() {
    char borzeCode[201];

    scanf("%s", borzeCode);

    decodeBorze(borzeCode);

    return 0;
}
