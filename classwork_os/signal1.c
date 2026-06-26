#include<stdio.h>
#include<unistd.h>
#include<signal.h>

//impliment handler
void sigint_handler(int sig)
{
printf("SIGINT signal is caught :%d\n,sig");

}
int main(void)
{
int i=0;
//step 2 register signal handler

while(1)
{
printf("i= %d\n",i++);
sleep(2);
}
return 0;
}
