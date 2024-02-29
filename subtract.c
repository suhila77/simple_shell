#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int x = 12;
	int y = 6;
	int diff = x - y;
	pid_t ppid;

	printf("difference is %d\n", diff);

	ppid = getppid();

	printf("my ppid is %u\n", ppid);

	return 0;
}
