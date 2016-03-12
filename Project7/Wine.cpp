#include "Wine.h"
#include <string.h>
#include <iostream>

void Wine::getName(){
	 
	 
	 
	char* fin=name;
	
	 char st[6]={0};
	 st[0]=year/1000+48;
     st[1]=year/100%10+48;
	 st[2]=year/10%10+48;
	 st[3]=year%10+48;
	 //st[4]=")";
	 strcat(st,")");
	// printf("%d %d :: %s",strlen(st),sizeof(st),st);
	// strcat(fin,"(year ");
	 char f[100]={0};
	 strcpy(f,fin);
	 strcat(f,"(year ");
	 strcat(f,st);
	// int i=strlen(fin);
	
	
	 printf("%s",f);
	 //return f;

	 

 }

void Wine::prepare(){
	printf("currently testing");
}

Wine::~Wine(void)
{
}
