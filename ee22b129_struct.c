 #include <stdio.h>
#include <math.h>
void exitpr(int t);
int addorsub(int t);
int mulordiv(int t);
typedef struct 
	{
		double real;
		double imag;
	}complex_rect;
typedef struct 
	{
		double magn;
		double angle;
	}complex_polar;
complex_polar recttopolar(complex_rect a);
complex_rect polartorect(complex_polar c1);
int main ()
{
	int t;
	printf("**This are the tasks that you can perform by entering the respective number: \n");
	printf("\t1.Sum of two complex numbers.\n\t2.Difference of two complex numbers");
	printf("\n\t3.Multiply two complex numbers.\n\t4.Divide two complex numbers.\n");
	printf("\t0.To EXIT the program.\n");
	printf("Enter a number to perform the respective task :  ");
	scanf("%d",&t);
	if (t==0) exitpr(t);
	else if (t==1 || t==2) addorsub(t);		//calling function to perform add and subtraction.
	else if (t==3 || t==4) mulordiv(t);		//calling function to perform multiplication and division.
	
}
void exitpr(int t)			//This is a function to end the program.
{
	printf("\n=>Program ENDED.\n");
}
int addorsub(int t)			//Defining the function to perform add and substraction. 
{
	
	complex_rect a;
	complex_rect b;
	printf("\n\nLet's input a complex number 1 : \n");		//taking inputs.
	printf("\tThe real part of first complex number 1 : ");
	scanf("%lf",&a.real);
	printf("\tThe imaginary part of first complex number 1 : ");
	scanf("%lf",&a.imag);
	printf("\tThe given complex number 1 is [%lf+i(%lf)]\n\n",a.real,a.imag);
	
	printf("Let's input a complex number 2 : \n");
	printf("\tThe real part of first complex number 2 : ");
	scanf("%lf",&b.real);
	printf("\tThe imaginary part of first complex number 2 : ");
	scanf("%lf",&b.imag);
	printf("\tThe given complex number 2 is [%lf+i(%lf)]\n\n",b.real,b.imag);
	if (t==1)
	{
		printf("The sum of two given complex numbers is [%f+i(%f)]\n\n\n",a.real+b.real,a.imag+b.imag);		//final output of addition.
	}
	else if (t==2)
	{
		//Two possible outcomes of substraction.
		printf("The difference of complex numbers 1 and 2 is [%lf+i(%lf)]\n\n\n",a.real-b.real,a.imag-b.imag);		
		printf("The difference of complex numbers 2 and 1 is [%lf+i(%lf)]\n\n\n",b.real-a.real,b.imag-a.imag);
	}
	main();
}
int mulordiv(int t)
{
	complex_rect a;
	complex_rect b;
	printf("\n\nLet's input a complex number 1 : \n");		//taking inputs.
	printf("\tThe real part of first complex number 1 : ");
		scanf("%lf",&a.real);
	printf("\tThe imaginary part of first complex number 1 : ");
		scanf("%lf",&a.imag);
	printf("\tThe given complex number 1 is [%lf+i(%lf)]\n\n",a.real,a.imag);
	
	printf("Let's input a complex number 2 : \n");
	printf("\tThe real part of first complex number 2 : ");
		scanf("%lf",&b.real);
	printf("\tThe imaginary part of first complex number 2 : ");
		scanf("%lf",&b.imag);
	printf("\tThe given complex number 2 is [%lf+i(%lf)]\n\n",b.real,b.imag);
	
	complex_polar c= recttopolar(a);
	complex_polar d= recttopolar(b);
	complex_polar c1;
	c1.magn=c.magn*d.magn;
	c1.angle=c.angle+d.angle;
	complex_polar c2;
	c2.magn=c.magn/d.magn;
	c2.angle=c.angle-d.angle;
	complex_polar c3;
	c3.magn=d.magn/c.magn;
	c3.angle=d.angle-c.angle;
	complex_rect e;
	e.real = c1.magn * cos(c1.angle);
	e.imag = c1.magn * sin(c1.angle);
	complex_rect f= polartorect(c2);
	complex_rect f1=polartorect(c3);
	
	if (t==3)
	{
		printf("The product of the given two complex numbers is [%lf+i(%lf)]\n\n\n",e.real,e.imag);		//final outcome of product of complex numbers.
	}
	if (t==4)
	{
		if ((a.real==0 && a.imag==0 && b.real==0 && b.imag==0))
		{
			printf("For the given input of complex numbers result of division gives an undefined value, so TRY AGAIN giving some other values\n\n\n");
		}
		else if ((a.real==0 && a.imag==0) || (b.real==0 && b.imag==0))
		{
			if(a.real==0 && a.imag==0)
			{
				printf("when 1st complex number is divided by 2nd complex number the resultant complex is ZERO.\n");
				printf("when 2nd complex number is divided by 1st complex number the resultant complex is NOT DEFINED.\n\n\n");
			}
			else if (b.real==0 && b.imag==0)
			{
				printf("when 1st complex number is divided by 2nd complex number the resultant complex is NOT DEFINED.\n");
				printf("when 2nd complex number is divided by 1st complex number the resultant complex is ZERO.\n\n\n");
			}
		}
		else 
		{
			printf("when 1st complex number is divided by 2nd complex number the resultant complex is [%lf+i(%lf)]\n",f.real,f.imag);
			printf("when 2nd complex number is divided by 1st complex number the resultant complex is [%lf+i(%lf)]\n\n\n",f1.real,f1.imag);
		}
	}
	main();
}
complex_polar recttopolar(complex_rect a)		//defining function to convert rectangular coordnates to polar coordinates.
{
	complex_polar c;
	c.magn=sqrt(pow(a.real,2)+pow(a.imag,2));
	c.angle=atan2(a.imag,a.real);
	return c;
}
complex_rect polartorect(complex_polar c1)		//defining function to convert polar coordinates to rectangular coordinates.
{
	complex_rect e;
	e.real=c1.magn*cos(c1.angle);
	e.imag=c1.magn*sin(c1.angle);
	return e;
}