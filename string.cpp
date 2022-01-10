// Check whether a string is palindrome is or not

#include <string.h>
#include<stdio.h>
 
int main()
{
    char s[1000];  
    int i,n,c=0;
 
    printf("Enter  the string : ");  //madam
    gets(s);
    n=strlen(s);     
 
    for(i=0;i<n/2;i++)    //  i=1;i<2 s[1]==s[3] 2      
    {
    	if(s[i]==s[n-i-1])   // i=0;i<5/2;i=0;      if(s[0]==s[5-0-1]) s[0]==s[4]

    	c++;                             // 1          
 
 	}
 	if(c==i)                                      // 1=0
 	    printf("string is palindrome");
    else
        printf("string is not palindrome");
 
 	 
     
    return 0;
}

