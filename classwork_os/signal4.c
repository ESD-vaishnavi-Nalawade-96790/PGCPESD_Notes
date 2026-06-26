#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

void sigchld_handler(int sig)
{
int status;
printf("SIGCHLD signal is cought :%d\n",sig);
wait(&status);
printf("exit status of child = %d\n",WEXITSTATUS(status));
}
int main(void)
{
printf("program started...!!!\n");
signal(SIGCHLD,sigchld_handler);
int ret = fork();
if(ret==0)
{
for(int i=0;i<=15;i++)
{
printf("child: i=%d\n",getpid(),i);
sleep(1);
}

}
else
{
for(int i == 15;i>=1;i--)
{
printf("parent: i=%d\n",getpid(),i);
sleep(1);


}
}
printf("program finished...!!!");


return 0;
}


