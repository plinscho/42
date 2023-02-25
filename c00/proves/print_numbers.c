#include <unistd.h>

void ft_putchar(char c);

int main(void)
{
	char a;

	a ='1';
	while (a <= 9)
	{
		ft_putchar(a);
		a++;
	}

	return (0);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}
