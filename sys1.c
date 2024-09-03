#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main()
{
	char buff[2000];
	int fd=open("/home/stc/program/text.txt",O_RDONLY);
	int n;
	for(;;)
	{
		n=read(fd,buff,1000);
		if(n<=0)
		{
			close(fd);
			return 0;
		}
		write(1,buff,n);
	}
	return 0;
}
