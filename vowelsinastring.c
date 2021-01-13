#include<stdio.h>
#include<conio.h>
void main()
{
	char a[100];
	int t,i,vow=0;
	printf("\nEnter the string: ");
	gets(a);
        t=strlen(a);
	for(i=0;i<t;i++)
	{
                        if(a[i]=='a' || a[i]=='A' || a[i]=='e' || a[i]=='E' || a[i]=='i' || a[i]=='I' || a[i]=='o' || a[i]=='O' || a[i]=='u' || a[i]=='U')
			vow=vow+1;
	}
	printf("\There are %d vowels in the string",vow);
	getch();
}
