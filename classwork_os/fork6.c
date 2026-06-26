#include<stdio.h>
#include<unistd.h>
int main()
{
printf("program started...!!!\n");
int ret = fork();

if(ret == 0)
{
//child process
for(int i=1;i<=15;i++)
{
printf("child(%d): i= %d\n",getpid(),i);
sleep(1);
}
}
else
{
for(int i=15;i>=1;i--)
{
printf("parent(%d) : i=%d\n",getpid(),i);
sleep(1);
}
}
printf("program finished...!!!\n");
return 0;
}
