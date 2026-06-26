#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

void *thread_func(void*param)
{
for(int i=0;i<=10;i++)
{
printf("thread :i =%d\n",i);
sleep(2);
}
return NULL;

}

int main(void)
{
printf("thr main function started....");
pthread_t t1;
size_t size = 1*1024*1024;
pthread_attr_t a;
pthread_attr_init(&a);
pthread_attr_setstacksize(&a,size);

int ret(&t1,&a,thread_func,NULL);
int(ret!=0)
{
perror("pthread_create is failed");
_exit(ret);

}
printf("press enter to cancel the thread");
getchar();
pthread_cancel(t1);

}
