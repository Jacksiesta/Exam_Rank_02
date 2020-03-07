/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jherrald <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 22:50:00 by jherrald          #+#    #+#             */
/*   Updated: 2020/03/07 22:59:29 by jherrald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlen(char *s)
{
	size_t	x;

	x = 0;
	while (s[x])
		x++;
	return (x);
}

char	*ft_strdup(const char *s1)
{
	int		x;
	char	*new;

	x = 0;
	if (!(new = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1)))
		return (NULL);
	while (s1[x])
	{
		new[x] = s1[x];
		x++;
	}
	new[x] = '\0';
	retur (new);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int 	x;
	int		y;
	char	*new;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	x = ft_strlen(s1);
	y = ft_strlen(s2);
	if (!(new = (char *)malloc(sizeof(char) * (x + y + 1))))
		return (NULL);
	ft_memmove(new, s1, x);
	y = 0;
	while (s2[y])
	{
		new[x + y] = s2 [y];
		y++;
	}
	new[x + y] = '\0';
	free(s1);
	return (new);
}


int		mini_gnl(char **line, char *buffer, char *temp, char *stat)
{
	
}

int		get_next_line(int fd, char **line)
{
	int			ret;
	char		buffer[BUFFER_SIZE + 1];
	char		temp[BUFFER_SIZE + 1];
	int			x;
	static char	*stat;

	if (fd < 0 || !line || fd >= OPEN_MAX || BUFFER_SIZE <= 0)
		return (-1);
	*line = ft_strdup("");
	if (stat && *stat)
	{

	}
	while ((ret = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[ret] = '\0';
		mini_gnl()

	}
}
