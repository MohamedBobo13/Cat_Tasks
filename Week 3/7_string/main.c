#include <stdio.h>
void copystring(char *str1, char *str2);
int main() {
    char str1[100],str2[100];
    printf("enter a string :");
    fgets(str1, sizeof(str1),stdin);
    copystring(str1,str2);
    printf("copied string : %s\n",str2 );
}

void copystring(char *str1, char *str2){
    while ((*str2++ = *str1++));
}