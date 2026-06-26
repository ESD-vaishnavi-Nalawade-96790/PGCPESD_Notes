#include<stdio.h>
#include<unistd.h>


void fun1(void)
{
for(int i=1;i<=10;i++)
printf("table of is:%d\n",i*5);
}

void fun2(void)
{
for(int i=1;i<=10;i++)
printf("table is:%d\n",i*6);
}
int main()
{
printf("the main function is started...");
fun1();
fun2();
printf("the main funcation is finished....");



return 0;
}
