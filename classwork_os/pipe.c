#include<stdio.h>
#include<unistd.h>
#include<string.h>

int main(void)
{
	int arr[2];
	char str1[64]="welcome vaishnavi...",str2[64];
	int ret = pipe(arr);
	if(ret == -1)
	{
	printf("the pipe is failed..\n");
	_exit(ret);

	}
	write(arr[1],str1,64);
	printf("data is write into pipe \n",str1);
	read(arr[0],str2,64);
	printf("data is read from pipe..\n",str2);
	close(arr[1]);
	closr(arr[2]);

}
