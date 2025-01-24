#include<stdio.h>
int main(){
    char str1[50],str2[50];
    int i;
    printf("\nEnter any string:");
    gets(str1);
    
for(i=0;str1[i] !='\0'; i++){
    if (str1[i]>='a'&&str1[i] <='z'){
        str2[i] = str1[i]-32;
    }else {
        str2[i]=str1[i];
    }
}
str2[i]='\0';
printf("Uppercase string: %s\n",str2);
return 0;
}