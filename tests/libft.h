#ifndef LIBFT_H
#define LIBFT_H

#include<stddef.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_strlen(char *s);
void *ft_memset(void *b, int c, unsigned int len);
void ft_bzero(void *s, unsigned int n);
void *ft_memcpy(void *dst, const void *src, unsigned int n);
void *ft_memmove(void *dst, const void *src, unsigned int n);
void *ft_memchr(const void *s, int c, unsigned int n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
int ft_toupper(int c);
#endif
