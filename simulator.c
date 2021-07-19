#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#define k 9000000000
#define G 0.00000000006674
int main() 
{
	int a,b,d,h, iterations;
	double q1, q2, r, m1, m2, giventime, someconstant1, someconstant2, t, s1, s2, s3, s4, a1, a2, position1, position2, u1=0, u2=0, position3, position4, t1, t2, p1, p2, v1, v2, msec;
	home_page:
	printf("enter value of charge  of first particle , charge of second particle , distance between them , mass of first particle \nand mass of second particle\n");
	scanf("%lf %lf %lf %lf %lf",&q1,&q2,&r,&m1,&m2);
	printf("please tell at how many time intervals should we calculate:- ");
	scanf("%lf",&t2);
	getch();
	someconstant1=(k*q1*q2+G*m1*m2)/(m1);
	someconstant2=(k*q1*q2+G*m1*m2)/(m2);
	for(t=0;t>=0;t=t+t2)
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
			getch();
			return 0;
	    }
		if(position2<=0)
		{
			printf("the particles have crossed each others path or went through each other or just had a collision at t= %lf last position value we got was %lf of object 1 and %lf of object 2",t1,position3,position4);
			getch();
			return 0;
	    }
	    else
	    {
	    	if(kbhit()) {
			char ch=getch();
			if(ch=='p') {
				printf("simulation paused, press any key to continue");
				getch();
			}
			if(ch=='h')
			{
				printf("going to home page in 10 seconds");
				msec=0;
				d=0;
				clock_t before = clock();
				for(a=0;a<10;iterations++)
				{
					clock_t difference = clock() - before;
    				msec = difference * 1000 / CLOCKS_PER_SEC;
    				a=msec/1000;
    				a=a-b;
					if(a!=d)
					{
						h=15-a;
			    		if(a>=10)
			    		{
							printf("program will be executed in %d seconds\r",h);
						}
    					else
    					{
    						printf("program will be executed in %d seconds \r",h);
						}	
					}
				}
				goto home_page;
			}
			if(ch=='e') 
			{
				printf("\nsimulation will end in 10 seconds\n");
				msec=0;
				d=0;
				b=0;
				clock_t before = clock();
				for(a=0;a>0;iterations++)
				{
					clock_t difference = clock() - before;
    				msec = difference * 1000 / CLOCKS_PER_SEC;
    				b=msec/1000;
    				a=a+b;
					if(a!=d)
					{
						h=a;
						printf("program will be executed in %d seconds\r",a);	
					}
				}
				return 0;
			}
		}
		printf("\r");
	    printf("\nobject1:-\nposition:- %lf\nvelocity:- %lf\nobject2:-\nposition:- %lf\nvelocity:- %lf\ntime:- %lf\n",position1,u1,position2,u2,t);
	    printf("\npress p for pause and h to go to home page and e to end");
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
