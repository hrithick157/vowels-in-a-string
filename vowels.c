#include<stdio.h>
#include<conio.h>
void main()
{
	char a[100];
	int len,i,vowels=0;
	printf("\n Enter the string name: ");
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
        if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
		vowels=vowels+1;
	}
	printf("\n no of vowels %d",vowels);
	getch();
}
