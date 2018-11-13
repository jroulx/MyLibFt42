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
char		*ft_strrchr(const char *s, int c);
char		*ft_strstr(const char *meule_de_foin, const char *aiguille);
char		*ft_strnstr(const char *meule_de_foin, const char *aiguille, size_t len);
char		*ft_strnew(size_t size);
char		*ft_strmap(char const *s, char (*f)(char));
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_strsub(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s);
char		**ft_strsplit(char const *s, char c);
int			ft_strcmp(const char *str1, const char *str2);
int			ft_strncmp(const char *str1, const char *str2, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
int			ft_atoi(const char *nptr);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_strequ(char const *s1, char const *s2);
int			ft_strnequ(char const *s1, char const *s2, size_t n);
void		ft_bzero(void *source, size_t nombre);
void		ft_putchar(char c);
void		ft_putchar_fd(char c, int fd);
void		ft_putnbr_fd(int nbr, int fd);
void		ft_putnbr(int nbr);
void		ft_putstr(char const *str);
void		ft_memdel(void **ap);
void		ft_strdel(char **as);
void		ft_strclr(char *s);
void 		ft_striter(char *s, void (*f)(char *));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
void		*ft_memccpy(void *dest, const void *src, int seek, size_t howmany);
void		*ft_memchr(const void *src, int seek, size_t howmany);
void		*ft_memcpy(void *dest, const void *src, size_t howmany);
void		*ft_memmove(void *dest, const void *src, size_t howmany);
void		*ft_memset(void *str, int charac, size_t howmany);
void		*ft_memalloc(size_t size);
size_t		ft_strlen(const char *str);
size_t		ft_strlcat(char *dest, const char *src, size_t size);

#endif