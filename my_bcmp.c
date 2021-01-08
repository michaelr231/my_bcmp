/**
Autor : Michael Riversky
Version : 1.0beta
The program called my_bcmp,
the program gets byte length, 2 indexes and a string as a input from the user,
and compare the number of bytes that start from the first index and the second index,
up to the byte length.
if the memory block are the same and equals the output is "0",
and if the block not match the output will be "-1".
**/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_LEN 512
int my_bcmp(const void *,const void *,size_t);
int main()
{
float len ,b1 ,b2;
char str[MAX_LEN];
int start;
printf("Enter here the number of bytes that you want to compare\n");
scanf("%f",&len);
/**
this 3 if's check if the length that 
the user put is a positive intger 
between 0 to 512
**/
	if(len!=(int)len)
	return printf("ERROR : please enter only integers\n");
	if(len < 0)
	return printf("ERROR : you can enter only positive digits\n");
	if(len>MAX_LEN)
	return printf("ERROR : Only up to 512 bytes can compare.\n");
printf("Enter here the first index\n");
scanf("%f",&b1);
/**
this 3 if's check if the length that 
the user put is a positive intger 
between 0 to 512
**/
	if(b1!=(int)b1)
	return printf("ERROR : please enter only integers\n");
	if(b1 < 0)
	return printf("ERROR : you can enter only positive digits\n");
	if(b1 > MAX_LEN)
	return printf("ERROR : Only up to 512 bytes can compare.\n");

printf("Enter here the second index\n");
scanf("%f",&b2);
/**
this 3 if's check if the length that 
the user put is a positive intger 
between 0 to 512
**/
	if(b2!=(int)b2)
	return printf("ERROR : please enter only integers\n");
	if(b2 < 0)
	return printf("ERROR : you can enter only positive digits\n");
	if(b2 > MAX_LEN)
	return printf("ERROR : Only up to 512 bytes can compare.\n");
getchar();
printf("Enter here the string\n");
fgets(str,MAX_LEN +1,stdin);
/** 
this if , check if the 2 indexes that the user put
is overflow the system and there is no indexes 
on the string, other words is the string is shorter from the indexes
**/
	if(b1 + len > strlen(str) || b2 + len > strlen(str))
	return printf("The indexes you inserted is bigger from the string length, try again.\n");
printf("The details are:\n");
printf("Bytes length to compare: %d\n",(int)len);
printf("First index: %d\n",(int)b1);
printf("Second index: %d\n",(int)b2);
printf("String: %s",str);
/**
start the function work and return
the output 0 if the blocks are same or they diffrent and returns -1
**/
start=my_bcmp(str+(int)b1,str+(int)b2,(size_t)len);
printf("The output is: %d\n",start);

return 0;
}

int my_bcmp(const void *b1,const void *b2,size_t len)
{
	int i;
	char *p1,*p2;
	p1=(char*)b1;
	p2=(char*)b2;
        for(i=0;i<len;i++)
	{
		/**
		this checks if the p1[i] byte equals to p2[i] byte,
		if they not equals the system return -1,
		but if they are equals its returns 0.
		**/
		if(*(p1+i)!=*(p2+i))
		return -1;
	}
	return 0;
}



