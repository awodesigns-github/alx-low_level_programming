#include <unistd.h>
#include <string.h>

/**
* main - Main entry point
* Return: returns 1
*/
int main(void)
{
	char* msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", strlen(msg));
	return (1);
}
