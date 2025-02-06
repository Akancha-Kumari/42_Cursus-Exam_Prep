#include <unistd.h>

int main(int argc, char *argv[])
{
	if(argc == 4)
	{
		int i = 0;
		int j = 0;
		while(argv[1][i])
		{
			if(argv[1][i] == argv[2][j])
			{
				write(1, &argv[3][j], 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}