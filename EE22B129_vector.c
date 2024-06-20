 #include <stdio.h>
#include <math.h>
float m[3][3];
void program();
float vetrlen();
float unitvec();
float  vetrdotprd();
float vetrcrossprd();
float volumeofvetr();
void end();

int main() 
{ 
	 
	printf("  entries of first vector:\n");
	for(int i=0;i<3;i++)			
	{
		printf("  numerical value for the first vector is m[%d][0] : ",i);		//   first row of matrix is the first vector
		scanf("%f",&m[i][0]);
	}
	printf("\n The  vector of first row is (%f)i +(%f)j +(%f)k\n\n",m[0][0],m[1][0],m[2][0]);
	
	 
	printf(" Entries of second vector are :\n");
	for(int i=0;i<3;i++)
	{	
		printf(" numerical value of second vector is  m[%d][1] : ",i);		//second row matrix is the second vector 
		scanf("%f",&m[i][1]);
	}
	printf("\n The vector of second row  is (%f)i +(%f)j +(%f)k\n\n",m[0][1],m[1][1],m[2][1]);
	
	 
	printf(" Entries of third vector are :\n");
	for(int i=0;i<3;i++)
	{
		printf("  numerical value of third vector is m[%d][2] : ",i);		//Third row matrix is the  third vector. 
		scanf("%f",&m[i][2]);
	}
	printf("\n The vector of third row  is (%f)i +(%f)j +(%f)k\n\n",m[0][2],m[1][2],m[2][2]);
	
 
	printf("%f\t %f\t %f\t \n",m[0][0],m[0][1],m[0][2]);
	printf("%f\t %f\t %f\t \n",m[1][0],m[1][1],m[1][2]);
	printf("%f\t %f\t %f\t \n\n\n",m[2][0],m[2][1],m[2][2]);
	program();
return 0;	
}

float vetrlen()  		 
{
	printf("Enter   the column of defined array to find its length \n");
	int k;
		scanf("%d",&k);
	
	if (k>=0 && k<3)
	{
		float t=sqrt(pow(m[0][k],2)+pow(m[1][k],2)+pow(m[2][k],2));       
		printf("\n  length of given vector from %dth column(%dth index column)  is %f\n\n\n",k+1,k,t);
	}
	else 
	{
		printf("\nEnter a valid   column as we only have 3 columns and their indices 0,1,2 only.\n\n\n");
	}
	program();
return 0;
}

float unitvec()		 
{
	printf("Enter one of the   column of defined array to find its unit vector \n");
	int k;
		scanf("%d",&k);
	
	if (k>=0 && k<3)
	{
		float t=sqrt(pow(m[0][k],2)+pow(m[1][k],2)+pow(m[2][k],2));	
		if (t==0)
		{
			printf("Given vector is a null vector so unit vector does not make sense for this vector");
		}	
		else
		{
		printf("\n The unit vector of given vector from %dth (%dth index column) column is (%fi +%fj +%fk)/%f\n\n\n",k+1,k,m[0][k],m[1][k],m[2][k],t);
		}
	}
	else 
	{
		printf("\nEnter a valid index for column as we only have 3 columns and their indices 0,1,2 only.\n\n\n");
	}
	program();
return 0;
}

float  vetrdotprd()			 //to find dot product between two given vectors.
{
	printf("enter the values of column to find the dot product");
	int a,b;
		scanf("%d",&a);
		scanf("%d",&b);
	if ((a>=0 && a<3) && (b>=0 && b<3))
	{
		float result=m[0][a]*m[0][b]+m[1][a]*m[1][b]+m[2][a]*m[2][b];		  //the result is a value
		printf("  dot product of %dth   column and %dth    column is %f\n\n\n",a,b,result);
	}
	else 
	{
		printf("\nEnter a valid   column as we only have 3 columns and their indices 0,1,2 only.\n\n\n");
	}
	program();	
return 0;
}
	
float  vetrcrossprd()		//to find the resultent vector
{
	printf("Enter the values of   columns  to find the cross product \n");
	int a,b;
		scanf("%d",&a);
		scanf("%d",&b);
	if ((a>=0 && a<3) && (b>=0 && b<3))
	{ 
		float crossi=(m[1][a]*m[2][b])-(m[1][b]*m[2][a]);
		float crossj=(m[0][a]*m[2][b])-(m[0][b]*m[2][a]);
		float crossk=(m[0][a]*m[1][b])-(m[0][b]*m[1][a]);
		printf(" cross product of %dth  column and %dth  column is (%f)i -(%f)j +(%f)k \n\n\n",a,b,crossi,crossj,crossk);
	}
	else 
	{
		printf("\nEnter a valid   column as we only have 3 columns and their indices 0,1,2 only.\n\n\n");
	}
	program();	
return 0;
}

float volumeofvetr()		//to find volume of parellelopipe
{
	float t=m[0][0]*((m[1][1]*m[2][2])-(m[1][2]*m[2][1]))-m[0][1]*((m[1][0]*m[2][2])-(m[2][0]*m[1][2]))+m[0][2]*((m[1][0]*m[2][1])-(m[1][1]*m[2][0]));
 	
	printf("\n volume subtended by the three given vectors(volume of parallelepiped formed by three vectors) is : %f\n\n\n",t);
	
	program();
return 0;
}

void end()
{
	printf("\t\tThe program is ended\n ");
}

void program()		//Defining a function to perform all the required tasks. 
{
	 
	printf(" the performed programs are:\n");
	printf("1.Length of one of the given vectors. \n");
	printf("2.A unit vector of one of the given vectors. \n");
	printf("3.Dot product of any of the given two vectors. \n");
	printf("4.Cross product of any of the given two two vectors. \n");
	printf("5.To find the volume subtended by given three vectors. \n");
	printf("0. To EXIT from the program.\n");
	
	int x;
	printf("Enter the respective number to find out the given results :");
	scanf("%d",&x);
	printf("\n\n");
	switch (x)		//Using switch case to call all the reqiured fuctions.
	{
		case 1:
			 vetrlen();
			break;
		case 2:
			 unitvec();
			break;
		case 3:
			 vetrdotprd();
			break;
		case 4:vetrcrossprd();
		 
			break;
		case 5:volumeofvetr();
			 
			break;
		case 0:
			end();
			break;
		default : 
			printf("Enter a the integers to get the following functions excuted\n");	
	}
}
