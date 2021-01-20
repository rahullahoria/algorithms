/*
String Rotation: Assume you have a method i 5Su b 5 tr ing which checks if one word is a substring
of another. Given two strings, 51 and 52, write code to check if 52 is a rotation of 51 using only one
call to i5Sub5tring (e.g., "waterbottle" is a rotation of"erbottlewat"). 
*/

#include <stdio.h>  
#include <string.h>  
   
int main()  
{  
    char str1[] = "abcde", str2[] = "deabc";  
          
    if(strlen(str1) != strlen(str2)){  
        printf("Second string is not a rotation of first string");  
    }  
    else{  
        //Concatenate str1 with str1 and store it in str1  
        strcat(str1, str1);  
          
        //Check whether str2 is present in str1  
        if(strstr(str1, str2) != NULL)  
            printf("Second string is a rotation of first string");  
        else  
            printf("Second string is not a rotation of first string");  
    }  
   
    return 0;  
} 