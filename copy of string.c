#include<stdio.h>

int main() {
    char str1[50], str2[50];
    int i;
    
    printf("\nEnter any string: ");
    gets(str1);

    // Convert characters to uppercase
    for (i = 0; str1[i] != '\0'; i++) {
        // Check if character is lowercase
        if (str1[i] >= 'a' && str1[i] <= 'z') {
            // Convert to uppercase by subtracting 32 from ASCII value
            str2[i] = str1[i] - 32;
        } else {
            // If not lowercase, keep as it is
            str2[i] = str1[i];
        }
    }
    str2[i] = '\0'; // Add null terminator to the end of the string

    printf("Uppercase string: %s\n", str2);

    return 0;
}
