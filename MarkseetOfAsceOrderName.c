#include<stdio.h>
#include<string.h>
#define SZ 10
int main()
{
    char sName[SZ][50];
    int marks[SZ][5],j,i;
    int rollNo[SZ];
    int totalMarks;
    float percentage;
    char division[100];   
    char subNames[5][25]={"Hindi","English","Math","Science","S.Science"};
    for(i=0; i<SZ; i++)
    {
        printf("Enter name of student %d: ", i+1);
        gets(sName[i]);
        printf("Enter Student Roll No.: ");
        scanf("%d", &rollNo[i]);
        for(j=0; j<5; j++)
        {
            do {
                printf("Enter marks of %s: ", subNames[j]);
                scanf("%d", &marks[i][j]);
                if (marks[i][j] > 100 || marks[i][j] < 0) {
                    printf("Marks should be between 0 and 100\n");
                }
            } while (marks[i][j] > 100 || marks[i][j] < 0);
        }
        fflush(stdin); 
        printf("\n");
    }        
    // Display result
    printf("\n%8s|%15s|%8s", "Sr.No.", "Name", "Roll No.");
    for(i=0; i<5; i++)
        printf("|%8.8s", subNames[i]);
    
    printf("|%8s|%8s|%8s\n", "Total", "Percentage", "Division");
    for(i=0; i<120; i++)
        printf("%c", 205);   
    //  name in ascending order using Bubble Sort
    for(i=0; i<SZ-1; i++)
    {
        for(j=0; j<SZ-i-1; j++)
        {
            if(strcmp(sName[j], sName[j+1]) > 0)
            {
                char tempName[50];
                int tempRoll;
                int tempMarks[5];

                strcpy(tempName, sName[j]);
                strcpy(sName[j], sName[j+1]);
                strcpy(sName[j+1], tempName);

                tempRoll = rollNo[j];
                rollNo[j] = rollNo[j+1];
                rollNo[j+1] = tempRoll;

                for(int k=0; k<5; k++)
                {
                    tempMarks[k] = marks[j][k];
                    marks[j][k] = marks[j+1][k];
                    marks[j+1][k] = tempMarks[k];
                }
            }
        }
    }
    for(i=0; i<SZ; i++)
    {
        // Find total marks
        totalMarks=0;
        for(j=0; j<5; j++)
            totalMarks += marks[i][j];
        
        // Find percentage
        percentage = (totalMarks / (5.0 * 100)) * 100;
        
        // Find division
        if(percentage >= 60)
            strcpy(division,"Pass(1st Div)");    
        else if(percentage >= 50)
            strcpy(division,"Pass(2nd Div)");
        else if(percentage >= 45)
            strcpy(division,"Pass(3rd Div)");
        else
            strcpy(division,"Fail");
        
        // Print on display
        printf("\n%8d|%15s|%8d|", i+1, strupr(sName[i]), rollNo[i]);
        for(j=0; j<5; j++)
        {
            printf("%8d|", marks[i][j]);
        }
        printf("%8d|%8.2f%%|%15s\n", totalMarks, percentage, division);
    
        for(j=0; j<120; j++)
            printf("%c", 205);    
    }
    return 0;
}

