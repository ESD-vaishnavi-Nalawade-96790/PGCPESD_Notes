#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
printf("program started...!!!\n");

int ret = fork();
if(ret == -1)
{
printf("fork is failed\n");
exit(-1);
}
else if(ret == 0)
{
//child process
printf("child : return value = %d\n",ret);
printf("child : pid = %d, ppid = %d",getpid(),getppid());
}

else
{
//parent process
printf("parent : return value = %d\n",ret);
printf("parent : pid = %d, ppid = %d\n",getpid(),getppid());
}

printf("program finished...!!!\n");
sleep(2);
return 0;
}
