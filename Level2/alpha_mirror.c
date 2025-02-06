#include <unistd.h>
#include <stdio.h>



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
				ch = 'Z' - (argv[1][i] - 'A');
				write(1, &ch, 1);
			}
			else if(argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				ch = 'z' - (argv[1][i] - 'a');
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