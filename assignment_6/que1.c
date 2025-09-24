//Que1
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];

   
    printf("Length of str1 = %lu\n", strlen(str1));

   
    strcpy(str3, str1);
    printf("After strcpy, str3 = %s\n", str3);

   
    strcat(str1, str2);
    printf("After strcat, str1 = %s\n", str1);

    
    printf("strcmp(str1, str2) = %d\n", strcmp(str1, str2));

   
    printf("strcasecmp(\"hello\", \"HELLO\") = %d\n", strcasecmp("hello", "HELLO"));

   
    char temp[50] = "Sunbeam";
    strrev(temp);   
    printf("Reversed string = %s\n", temp);

    
    char *ptr = strchr(str2, 'o');
    if(ptr) printf("First occurrence of 'o' in str2 = %s\n", ptr);

    
    char str4[50] = "This is a test";
    char *substr = strstr(str4, "is");
    if(substr) printf("Substring 'is' found at: %s\n", substr);

   
    strncpy(str3, str2, 3);
    str3[3] = '\0';
    printf("After strncpy = %s\n", str3);

   
    strncat(str2, "12345", 3);
    printf("After strncat = %s\n", str2);

    
    printf("strncmp(\"abc\", \"abd\", 2) = %d\n", strncmp("abc", "abd", 2));

   
    char str5[50] = "one,two,three";
    char *token = strtok(str5, ",");
    while(token != NULL) {
        printf("Token = %s\n", token);
        token = strtok(NULL, ",");
    }

    return 0;
}



















