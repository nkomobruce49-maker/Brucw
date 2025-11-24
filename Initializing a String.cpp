#include<stdio.h>

int main()
{
char str1[] = "Bruce";

char str2[6] = "Bruce";

char str3[6] = {'B','r','u','c','e','\0'};
char str4[] = {'B','r','u','c','e','\0'};
printf("%s\n",str1);  
printf("%s\n",str2);  
printf("%s\n",str3);  
printf("%s\n",str4);
return 0;
}

