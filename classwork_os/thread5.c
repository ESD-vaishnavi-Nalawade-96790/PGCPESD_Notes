#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

void *thread_func(void*param)
{
long num = (long)param;
for(int i=1;i<=10;i++)
{
printf("table is :%d\n",i*num);
sleep(1);

}
return NULL;
}

int main(void)
{

printf("The main function is started...");
pthread_t t1,t2,t3;
pthread_create(&t1,NULL,thread_func,(void*)5);
pthread_create(&t2,NULL,thread_func,(void*)6);
pthread_create(&t3,NULL,thread_func,(void*)8);

pthread_join(t1,NULL);
pthread_join(t2,NULL);
pthread_join(t3,NULL);

return 0;

}
