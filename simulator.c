#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define k 9000000000
#define G 0.00000000006674
int main() 
{
	double q1, q2, r, m1, m2, giventime, someconstant1, someconstant2, t, s1, s2, s3, s4, a1, a2, position1, position2, u1=0, u2=0, position3, position4, t1, t2, p1, p2, v1, v2;
	printf("enter value of charge  of first particle , charge of second particle , distance between them , time till which simulation should run , mass of first particle and mass of second particle (warning:-please put values in order or it may give wrong results also keep in mind that input is less than 6 digit and if your value is more or less than that you may use other unit and output will also be in that also keep in mind that the distance which will come out would be relative to the point in between them)\n");
	scanf("%lf %lf %lf %lf %lf %lf",&q1,&q2,&r,&giventime,&m1,&m2);
	printf("please tell at how many time intervals should we calculate:- ");
	scanf("%lf",&t2);
	getch();
	someconstant1=(k*q1*q2+G*m1*m2)/(m1);
	someconstant2=(k*q1*q2+G*m1*m2)/(m2);
	for(t=0;t<=giventime;t=t+t2)
	{
		u1=u1+someconstant1*t2/(r*r);
		u2=u2+someconstant2*t2/(r*r);
	    a1=someconstant1/(r*r);
		s1=u1*t2+1/2*a1*t2*t2;
		a2=someconstant2/(r*r);
		s2=u2*t2+1/2*a2*t2*t2;
		position1=s1-r/2;
		position2=r/2-s2;
		if(position1>=0)
		{
			printf("the particles have crossed each others path or went through each other or just had a collision at t= %lf last position value we got was %lf of object 1 and %lf of object 2",t1,position3,position4);
			v1=(2*m2*u2/(m1+m2))+((m1-m2)*u1/(m1+m2));
			v2=(2*m1*u1/(m1+m2))-((m1-m2)*u2/(m1+m2));
			getch();
			return 0;
	    }
		if(position2<=0)
		{
			printf("the particles have crossed each others path or went through each other or just had a collision at t= %lf last position value we got was %lf of object 1 and %lf of object 2",t1,position3,position4);
			v1=(2*m2*u2/(m1+m2))+((m1-m2)*u1/(m1+m2));
			v2=(2*m1*u1/(m1+m2))-((m1-m2)*u2/(m1+m2));
			getch();
			return 0;
	    }
	    else
	    {
	    printf("\nobject1:-\nposition:- %lf\nvelocity:- %lf\nobject2:-\nposition:- %lf\nvelocity:- %lf\ntime:- %lf\n",position1,u1,position2,u2,t);
		s3=s3+s1;
		s4=s4+s2;
		r=r-s1-s2;
		t1=t;
		position3=position1;
		position4=position2;
		}
	}
	getch();
	return (0);
}
