#include <stdio.h>
#include <string.h>
int main() {
    char names[10][50];
    char temp[50];
    printf("Enter 10 names:\n");
    // Accept names from the user
    for (int i = 0; i < 10; i++) {
        printf("Enter name %d: ", i + 1);
        fflush(stdin); 
        gets(names[i]);
    }
    // Sort the names in ascending order using bubble sort
    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    // Print the sorted names in ascending order
    printf("\nNames in ascending order:\n");
    for (int i = 0; i < 10; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}
