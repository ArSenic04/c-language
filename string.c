#include <stdio.h>
#include <string.h>

int main()
{ /*unsigned int count=0;
    char str[14];
    gets(str);
    printf("using printf %s\n", str);
    puts(str);
    count=strlen(str);
    printf("String Lenght is %d",count);*/
    char s1[] = "SHIVAM";
    char s2[] = "ARDESHNA";
    puts(strrev(s1));
    printf("the length of string one and two is %d , %d\n", strlen(s1), strlen(s2));
    printf("the strcamp for s1,s2 returned is %d\n", strcmp(s1, s2));
    puts(strcat(s1, s2));

    return 0;
}//strcmp(s1,s2); =>> To compare the strings[If equale print 0;If not it will print 1;If ascii value difference is negative it will print -1.]
//strcpy(s1,s2); =>> To copy s2 to s1.
//strlen(s1); =>> To check the length of the string.
//The strcat(first_string, second_string) function concatenates two strings and result is returned to first_string.
//strlwr(s)->> to return the given string in lowercase
