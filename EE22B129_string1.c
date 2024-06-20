 #include<stdio.h>
#define MAXLENGTH 1000

int getline1(char InString[],int max);
int my_strcat(char s1[],char s2[]);
int my_strlen(char a[]);
int main()
{
   char InString1[MAXLENGTH], InString2[MAXLENGTH];
   int x = getline1(InString1,MAXLENGTH);
   int y = getline1(InString2,MAXLENGTH);
   printf("Concatenating two strings \n");
   my_strcat(InString1,InString2);
   int len1= my_strlen(InString1)


   printf("\nLength of the first string is %d\n",len1);
   int len2=my_strlen(InString2);
   printf("Length of the second string is %d ",len2);
   
}
int getline1(char s[],int lim)
{
	int c,i = 0;
   	while(--lim > 0 && (c=getchar())!= EOF && c!= '\n')
		s[i++] = c;
	if (c=='\n')
		s[i] = c;
        s[i] = '\0';

    return i;
}
int my_strcat(char s1[],char s2[])
{
     printf("%s",s1);
     printf("%s",s2);
}
int my_strlen(char a[])
{
   int i,j;
   for(i=0;a[i]!='\0';i++);
   return i;
 
}