/*
LoverCase and UperCase 

when we to convert any character into lowercase there is one method 

tolower();

and to convert character into upper case there is one method

toupper();

but both methods are connected with ctype header file

  e.g  #include<ctype.h>
*/

#include<stdio.h>
#include<string.h>
void main()
{
	int i;
    char n1[30];
    printf("enter a name:");
    gets(n1);
    for(i=0;i<strlen(n1);i++)
	{
		if(n1[i] <= 'a' || n1[i]<='z'){
			n1[i]=n1[i]+32;
		}
	}
	printf("\nname :%s",n1);        
}


