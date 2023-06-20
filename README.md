# Libft - Recoding C Standard Library Functions

Libft is a project that rewrites a set of functions from the standard C library. The purpose is to deepen understanding of the basics, including data types, loops, control structures, pointers, memory allocation, macros, and the makefile utility.

## Description

The functions created in this project have the same prototypes and behaviors as their libc counterparts, with the only difference being their names, which are prefixed with `ft_` (e.g., strlen becomes `ft_strlen`).

This repository is divided into two main parts:

### Part 1: Recoding a set of libc functions. 

|          |          |          |
|----------|----------|----------|
| isalpha  | isdigit  | isalnum  |
| isascii  | isprint  | strlen   |
| memset   | bzero    | memcpy   |
| memmove  | strlcpy  | strlcat  |
| toupper  | tolower  | strchr   |
| strrchr  | strncmp  | memchr   |
| memcmp   | strnstr  | atoi     |

### Part 2: Developing a set of functions that are either not included in the libc, or that exist but in a different form:

|          |          |          |
|----------|----------|----------|
| ft_substr    | ft_strjoin | ft_strtrim |
| ft_split     | ft_itoa    | ft_strmapi |
| ft_striteri  | ft_putchar_fd | ft_putstr_fd |
| ft_putendl_fd | ft_putnbr_fd |  |

There is also a bonus part, which includes functions for manipulating lists:

|          |          |          |
|----------|----------|----------|
| ft_lstnew | ft_lstadd_front | ft_lstsize |
| ft_lstlast | ft_lstadd_back | ft_lstdelone |
| ft_lstclear | ft_lstiter | ft_lstmap |

> Note: The bonus part will only be evaluated if the mandatory part is completed perfectly. "Perfect" means that all requirements of the mandatory part have been completed and work without issues.

## Usage

Run `make` to compile the libft library, `libft.a`.

If you want to compile the bonus functions as well, run `make bonus`.
