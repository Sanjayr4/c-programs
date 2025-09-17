#include<stdio.h>
#include<string.h>

int main()
{
    char str[101]; // initiate the string;
    scanf("%s",str); // get the string;
    int n = strlen(str); // get the length of the string as n;
    int palindrome = 1; // assume the given string is palindrome  where 0 > any number is always true;;
    for (int i = 0;i<n/2;i++) // itirate through the string 
    { // we only go through the half of the length of the given string 
        if (str[i] != str[n - i - 1]) // it will compare the 1st and the last character of the string
        {
            palindrome = 0; // if not same then palindrome become 1 to 0 which means false ;
            break; // break the loop exite the loop ;
        }
    }
    printf (palindrome ? "Palindrome": "NotPalindrome"); // print palindrome if the given is 1;
}
