#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main()
{
int status;
printf("program started...!!!\n");
int ret = fork();

if(ret == 0)
{
for(int i =1; i<=15 ;i++)
{
printf("child(%d) : i = %d\n ",getpid(),i);
}
}

else
{
for(int i = 15 ; i >= 1 ; i--)
{
if(i==5)
{
wait(&status);
waitpid(ret,&status,0);
printf("exit status of child = %d\n",WEXITSTATUS(status));
}
printf("parent(%d) : i = %d\n",getpid(),i);
sleep(1);
}
}
printf("program finished...!!!\n");
return 0;
}
