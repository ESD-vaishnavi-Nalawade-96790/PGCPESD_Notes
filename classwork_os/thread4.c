#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

void *thread_func(void *para)
{
for(int i=1;i<=10;i++)
{
printf("table is :%d\n",i*5);
sleep(1);
}
return NULL;
}

int main(void)
{
printf("The main function is started...");

pthread_t t1,t2,t3,t4;
pthread_create(&t1,NULL,thread_func,NULL);
pthread_create(&t2,NULL,thread_func,NULL);
pthread_create(&t3,NULL,thread_func,NULL);
pthread_create(&t4,NULL,thread_func,NULL);

pthread_join(t1,NULL);
pthread_join(t2,NULL);
pthread_join(t3,NULL);
pthread_join(t4,NULL);


printf("the main function is finished...");
return 0;

}
