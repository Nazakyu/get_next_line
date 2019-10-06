#include "get_next_line.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int		main(int argc, char **argv)
{
	int		ret = 1;
	int		ret2 = 1;
	char	*line;
	char	*line2;
	int		fd;
	int		fd2;

	line = NULL;
	line2 = NULL;
	if (argc)
	{
		fd = open(argv[1], O_RDONLY);
		fd2 = open(argv[2], O_RDONLY);
		while (ret != 0 || ret2 != 0)
		{
				if (ret == 1)
					ret = get_next_line(fd, &line);
				if (ret == 1)
				{
					ft_putendl(line);
					ft_memdel((void**)&line);
				}
				if (ret2 == 1)
					ret2 = get_next_line(fd2, &line2);
				if (ret2 == 1)
				{
					ft_putendl(line2);
					ft_memdel((void**)&line2);
				}
		}
	}
	return (0);
}
