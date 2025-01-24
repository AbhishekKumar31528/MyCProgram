#include<stdio.h>
#include<string.h>
int toUpperCase(char name[]);
int toLowerCase(char name[]);
int toToggleCase(char name[]);
int toTitlecase(char name[]);
int main() {
    char name[50];
    int choice;

    printf("Enter any word: ");
    gets(name);
    printf("Input String: %s\n", name);
	printf("Choose an operation:\n");
    printf("1: Upper case\n");
    printf("2: Lower case\n");
    printf("3: Toggle Case\n");
    printf("4: Title Case\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            toUpperCase(name);
            break;
        case 2:
            toLowerCase(name);
            break;
        case 3:
            toToggleCase(name);
            break;
        case 4:
			 toTitleCase(name);
            break;
        default:
            printf("Invalid name\n");
    }

    printf("%s\n", name);
    
    return 0;
}

int toUpperCase(char name[]) {
    int i = 0;
    while (name[i]!='\0') {
        if (name[i]>='a'&&name[i]<='z') {
            name[i]=name[i]- 32;
        }
        i++;
    }
    return 0;
}

int toLowerCase(char name[]) {
    int i = 0;
    while (name[i]!='\0') {
        if (name[i]>='A'&&name[i]<='Z') {
            name[i]=name[i]+32;
        }
        i++;
    }
    return 0;
}
int toToggleCase(char name[]) {
    int i = 0;
    while (name[i]!='\0') {
        if (name[i]>='a'&&name[i]<='z') {
            name[i]=name[i]-32;
        }
        else if(name[i]>='A'&&name[i]<='Z') {
            name[i]=name[i]+32;
        i++;
    }
    return 0;
}
}
int toTitleCase(char name[]) {
    int i = 0;
    if (name[0] >= 'a' && name[0] <= 'z') {
        name[0] -= 32;
    }
    while (name[i]!='\0') {
        if (name[i]>='a'&&name[i]<='z') {
            name[i]=name[i]-32;
        }
        else if(name[i]>='A'&&name[i]<='Z') {
            name[i]=name[i]+32;
        i++;
    return 0;
}
	}
	}