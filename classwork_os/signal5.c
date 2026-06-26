#include<stdio.h>
#include<unistd.h>
#include<signal.h>

void sigint_handler(int sig)
{
printf("sigint is cought:%d\n");

}
int main(void)
{
struct sigaction sa;


sa.sa_handler =  sigint_handler;
sigaction (SIGINT,&sa,null);

for(i=0; ;i++)
{
printf("i = %d\n",pid);
sleep(2);
}

return 0;
}
