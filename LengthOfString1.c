#include<stdio.h>
#include<string.h>

int main() {
    char names[3][30];
    char temp[30];
    int i, j;

    // Accept three strings
    printf("Enter three strings:\n");
    for (i = 0; i < 3; i++) {
        printf("Enter string %d: ", i + 1);
        gets(names[i]);
    }

    // Sort the strings based on length using Bubble Sort
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2 - i; j++) {
            if (strlen(names[j]) > strlen(names[j + 1])) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    // Print the sorted strings
    printf("\nStrings in ascending order of length:\n");
    for (i = 0; i < 3; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
