#include<stdio.h>
#include<unistd.h>
#include<signal.h>
#include<stdlib.h>

void sigint_handler(int sig)
{
printf("SIGINT signal is caught:%d\n",sig);
}
void sigterm_handler(int sig)
{
printf("SIGTERM signal is cought: %d\n",sig);
}
void sigsegv_handler(int sig)
{
printf("SIGSEGV signal is cought: %d\n",sig);
exit(1);
}
void sigalrm_handler(int sig)
{
printf("SIGALRM signal is cought :%d\n",sig);
}
int main(void)
{
int i;
signal(SIGINT,sigint_handler);
signal(SIGTERM,sigterm_handler);
signal(SIGSEGV,sigsegv_handler);
signal(SIGALRM,sigalrm_handler);
alarm(5);
for(int i=0; ;i++)
{
printf("i = %d\n",i);
sleep(2);
}

return 0;
}

