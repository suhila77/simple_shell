#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int x = 6;
	int y = 4;
	pid_t ppid;

	int sum = x + y;


	printf("sum is %d\n", sum);

	ppid = getppid();
	printf("my ppid is %u\n", ppid);

	return 0;
}
