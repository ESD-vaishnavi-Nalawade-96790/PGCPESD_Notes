#include<stdio.h>
#include<unistd.h>
#include<signal.h>

void sigint_handler(int sig)
{
printf("SIGINT is caught : %d\n",sig);
}

int main(void)
{
signal(SIGINT,sigint_handler);
for(int i=0; ;i++)
{
printf("i = %d\n",i);
sleep(2);

}
return 0;
}
