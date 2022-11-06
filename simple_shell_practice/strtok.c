#include "shell.h"

char **_strtok(char *av)
{
	char *token1, *str;
	char **save;
	int buf_size;
	int i = 0;

	buf_size = 1024;
	str = "\t\n\r\a";
	save = malloc(buf_size * sizeof(char*));
	if (save == NULL)
	{
		dprintf(2, "Error: failed to allocate memory\n");
		return (NULL);
	}

	token1 = strtok(av, str);
	while (token1 != NULL)
	{
		save[i] = token1;
		i++;
		
		if (i >= buf_size)
		{
			buf_size += 1024;
			save = realloc(save, buf_size * sizeof(char*));
			if (save == NULL)
			{
				dprintf(2, "Error: Can't reallocate memory");
				return (NULL);
			}
		}
		token1 = strtok(NULL, str);
	}
	save[i] = NULL;
	return (save);
}
