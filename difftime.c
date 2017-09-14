#include <stdio.h>
#include <string.h>

int main()
{
int hr1,hr2,min1,min2,time1,time2,min,sec;
scanf("%d %d",&hr1,&min1);
scanf("%d %d",&hr2,&min2);
time1=(hr1*60)+min1;
time2=(hr2*60)+min2;
min=time2-time1;
sec=min*60;
printf("minutes between%d:%d and %d:%d is %d",hr1,min1,hr2,min2,min);
printf("\nseconds between%d:%d and %d:%d is %d",hr1,min1,hr2,min2,sec);
	return 0;
}
