#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

void *thread1_func(void *parameter)
{
for(int i=1;i<=10;i++)
{
printf("table is :%d\n",i*5);
sleep(1);

}
return NULL;
}

void *thread2_func(void *parameter)
{
for(int i=1;i<=10;i++)
{
printf("the table is :%d\n",i*6);
sleep(1);

}
return NULL;
}
int main(void)
{

printf("the main function is started...");
getchar();
pthread_t t1,t2;
pthread_create(&t1,NULL,thread1_func,NULL);
pthread_create(&t2,NULL,thread2_func,NULL);

printf("press enter to continue the thread...");


printf("the main function is finished...");

return 0;
}

