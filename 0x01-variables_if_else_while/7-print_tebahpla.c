#include <stdio.h>
#include <unistd.h>

int main()
{
	int hh;

	hh = 'z';
	
	while( hh >= 'a')
	{
		write(1, &hh, 1);
			hh--;
	}
		putchar('\n');
		
		return (0);
}
