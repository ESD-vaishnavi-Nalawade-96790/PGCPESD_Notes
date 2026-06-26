#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

void *thread1_func(void *para)
{
for(int i=1;i<=10;i++)
{
printf("table is:%d\n",i*5);
sleep(1);

}
return NULL;

}
void *thread2_func(void *para)
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
printf("The main function is started...");
pthread_t t1,t2;
pthread_create(&t1,NULL,thread1_func,NULL);
pthread_create(&t2,NULL,thread2_func,NULL);

printf("press the enter to terminate");

pthread_join(t1,NULL);
pthread_join(t2,NULL);

return 0;


}
