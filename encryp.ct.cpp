#include<stdio.h>
void encrypt( char *c)
{
char *ptr=c;
while(*ptr!='\0')
{
	*ptr=*ptr-1;
	ptr++;
}
   }
   int main()
   {
   	char c[]=" xfmdpnf!up!nz!zpvuvcf!diboofm";
   	encrypt(c);
   	printf("encrypted string is %s",c);
   	return 0;
	 }  

