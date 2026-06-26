#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

void *thread_func(void*param)
{
long num = (long)param;
long fact = 1;
for(int i=1;i<=num;i++)
fact=fact*i;
return(void*)fact;
}
int main(void)
{
pthread_t t1;
pthread_create(&t1,NULL,thread_func,(void*)5);
void*ret;
pthread_join(t1,&ret);

printf("factorial:%ld\n",(long)ret);

printf("the main function is finishesd...\n");

return 0;

}
