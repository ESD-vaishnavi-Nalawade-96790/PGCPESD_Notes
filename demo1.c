#include<stdio.h>

struct time
{
private:
	int hr;
	int min;
	int sec;
public:
	void printTime()
	{

		printf("\n time %d:%d:%d",hr,min,sec);

	}
	void acceptTime()
	{

		printf("enter time");
		scanf("%d %d %d",&hr,&min,&sec);
	}
/*	void incremetTimeByOneSec()
	{
	printf("sec is incrementesd by one sec");
	sec++;

	}
*/

};
int main()
{
	time t1;

	t1.acceptTime();
	t1.printTime();
//	t1.incrementTimeByOneSec();

	return 0;

}
