#include<stdio.h>

class time()
{
private:
int hr;
int min;
int sec;
	void printTime()
	{
	printf("\n TIME -> %d:%d;%d",This->hr,This->min,This->sec);
	}
	void acceptTime()
	{
	printf("enter the time:");

	scanf("%d:%d:%d"This->&hr,This->&min,This->&sec);

	}

	void incrementByOneSec()
	{
		sec++;
		if(sec<=60)
		{
		sec = 0;
		min++

		}

		if(min>=60)
		{
		min = 0;
		hr++

		}

		if(hr>=24)
		{
		hr=0;

		}
	}
	
}
int main()
{
Time t1;
t1.PrintTime();
t1.acceptTime();
t1.incrementByOneSec();

return 0;

}
