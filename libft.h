#ifndef FT_LIBFT_H
# define FT_LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

char		*ft_strdup(const char *s);
char		*ft_strcpy(char *dest, const char *src);
char		*ft_strncpy(char *dest, const char *src, size_t n);
char		*ft_strcat(char *dest, const char *src);
char		*ft_strncat(char *dest, const char *src, size_t n);
char		*ft_strchr(const char *s, int c);
int			ft_strcmp(const char *str1, const char *str2);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		ft_bzero(void *source, size_t nombre);
void		ft_putchar(char c);
void		ft_putstr(char const *str);
void		*ft_memccpy(void *dest, const void *src, int seek, size_t howmany);
void		*ft_memchr(const void *src, int seek, size_t howmany);
void		*ft_memcpy(void *dest, const void *src, size_t howmany);
void		*ft_memmove(void *dest, const void *src, size_t howmany);
void		*ft_memset(void *str, int charac, size_t howmany);
size_t		ft_strlen(const char *str);
size_t		ft_strlcat(char *dest, const char *src, size_t size);

#endif