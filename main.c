#include "get_next_line.h"

int   main(int ac, char **av)
{
  char  *line;
  int   fd1;

  fd1 = open(av[1], O_RDONLY);
  while ((get_next_line(fd1, &line)) != 0)
	  printf(RED"%s\n"END, line);
  close(fd1);
  return (0);
}
