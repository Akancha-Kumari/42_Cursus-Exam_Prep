#include <unistd.h>

int main(int argc, char *argv[])
{
	if(argc == 2)
	{
		int i = 0;
		char ch;
		while(argv[1][i])
		{
			if(argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				write(1, "_", 1);
				ch = argv[1][i] + 32;
				write(1, &ch, 1);
			}
			else 
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}