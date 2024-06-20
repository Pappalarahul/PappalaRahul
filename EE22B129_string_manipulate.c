  #include<stdio.h>
#define MAXLENGTH 1000
int my_strlen(char*input)//functional operation for the first question
{
int x=0;
while(*(input+x)!='\0')
{
x++;
}
return x;
}

int my_strcpy(char*input,int y,char*output)//functional operation for the second question
{
int length=my_strlen(input);
int x,value;
if (y> length)value=0;
else
{
for(int x=0;x<y;x++)
{
*(output+x)=*(input+x);
}
output[y]='\0';//ending the string
value=1;
}
return value;//the second function ends
}

int my_strcmp(char*input1,char*input2,int y)//functional operation of the thrid question
{
int find = 1,x;
for(x=0;x<y;x++)
{
if(*(input1+x)==*(input2+x))
{
find*= 1;
}
else 
{
find = 0;
break;
}
}
return find;//returns to 1 or 0 acccording to match or no match

}
int getline1(char s[], int lim)
{
int z,x;
x=0;
while(--lim>0&&(z=getchar())!=EOF&&z !='\n')
s[x++]=z;
if(x=='\n')
s[x]=z;
s[x]='\0';
return x;
}

int main()
{
int p1,p2,p3,x,find,value;
char input[MAXLENGTH],
input2[MAXLENGTH],
input3[MAXLENGTH],
input4[MAXLENGTH],
output[MAXLENGTH];//fixing the variables
char*pointer,*pointer2,*output2,*pointer3,*pointer4;
printf("enter a sentence\n");
getline1(input,MAXLENGTH);

pointer=input;
output2=output;

p1=my_strlen(pointer);//connecting it to the 1st part of the question

printf("enter the required number of characters that are to be copied:\n");
scanf("%d",&p2);
 getchar();//getchar is used for the consideration of '/n'
 value=my_strcpy(pointer,p2,output2);
 if(value=1)
 {
printf("%s\n",output2);
 }
else
printf("the used string has exceeded the maximum length limit\a\n");


printf("first string:\n");
getline1(input3,MAXLENGTH);
pointer3=input3;

printf("required number of charecters that are to be compared:\n");
scanf("%d",&p3);

if(p3>my_strlen(input3)||p3>my_strlen(input4))
printf("the value has exceeded the actual length\a\n");//wrong case
else
{
find=my_strcmp(pointer3,pointer4,p3);
printf("%d",find);
}
return 0;
}