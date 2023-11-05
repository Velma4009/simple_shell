#include "main.h"

/**
* main - entry piont
* Description: make our own shell
* Return: 0 (success)
*/

int main(void)
{
char command[100];
int status;
pid_t pid;
write(1, "Enter command", 100); /*Display prompt*/
pid_t pid = fork(); /* wait the user */
if (pid == -1)
{
perror("error");
exit(1);
}
else 
{
wait(status);
my_putchar('\n');
}
if (command == 0)
{
perror("command not found");
}
if (command == 4) /* if user enter ctrl+D */
{
exit(1);
}
return (0);
}
