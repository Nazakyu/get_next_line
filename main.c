#include "get_next_line.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int     main(void)
{
  int   ret = 1;
  char  *line;
  int   fd;

  line = NULL;
  fd = open("test", O_RDONLY);
  while (ret != 0)
  {
    ft_memdel((void**)&line);
    ret = get_next_line(fd, &line);
    ft_putstr(line);
    ft_putchar('\n');
  }
  return (0);
}
