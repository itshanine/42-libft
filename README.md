<h1 align="center">
  📕 42-libft
</h1>

<p align="center">
  <b><i>My very first own library</i></b>
</p>

<p align="center">
  <img src="https://img.shields.io/github/directory-file-count/itshanine/42-libft?color=ff595e"/>
  <img src="https://img.shields.io/github/languages/count/itshanine/42-libft?color=ffca3a" />
  <img src="https://img.shields.io/github/languages/top/itshanine/42-libft?color=8ac926" />
  <img src="https://img.shields.io/github/last-commit/itshanine/42-libft?color=1982c4" />
  <img src="https://img.shields.io/github/watchers/itshanine/42-libft?color=6a4c93" />
</p>

---

<h2>
  🛠️ Usage
</h2>

``make`` to compile <b>without</b> bonus functions.

``make bonus`` to compile <b>with</b> bonus functions.

``make clean`` to delete all object files.

``make fclean`` to delete object files and <b>libft.a</b>.

``make re`` to delete everything and rebuild libft.

<h2>
  📚 Table of contents
</h2>

<h3>
  Mandatory functions
</h3>

| File                                                                                   | Summary                                       |
| ---                                                                                    | ---                                           |
| [ft_strnstr.c](https://github.com/itshanine/42-libft/blob/main/ft_strnstr.c)           | Find a substring in a string safely.          |
| [ft_isdigit.c](https://github.com/itshanine/42-libft/blob/main/ft_isdigit.c)           | Check if a character is a digit.              |
| [ft_putstr_fd.c](https://github.com/itshanine/42-libft/blob/main/ft_putstr_fd.c)       | Print a string to a file descriptor.          |
| [ft_strlcpy.c](https://github.com/itshanine/42-libft/blob/main/ft_strlcpy.c)           | Safely copy a string to a buffer.             |
| [ft_strlen.c](https://github.com/itshanine/42-libft/blob/main/ft_strlen.c)             | Calculate the length of a string.             |
| [ft_memcmp.c](https://github.com/itshanine/42-libft/blob/main/ft_memcmp.c)             | Compare two blocks of memory.                |
| [ft_putnbr_fd.c](https://github.com/itshanine/42-libft/blob/main/ft_putnbr_fd.c)       | Print an integer to a file descriptor.       |
| [ft_memcpy.c](https://github.com/itshanine/42-libft/blob/main/ft_memcpy.c)             | Copy memory from one location to another.    |
| [ft_putendl_fd.c](https://github.com/itshanine/42-libft/blob/main/ft_putendl_fd.c)     | Print a string followed by a newline to a file descriptor. |
| [ft_strchr.c](https://github.com/itshanine/42-libft/blob/main/ft_strchr.c)             | Find the first occurrence of a character.    |
| [ft_striteri.c](https://github.com/itshanine/42-libft/blob/main/ft_striteri.c)         | Apply a function to each character in a string with its index. |
| [ft_bzero.c](https://github.com/itshanine/42-libft/blob/main/ft_bzero.c)               | Set a block of memory to zero.               |
| [ft_strjoin.c](https://github.com/itshanine/42-libft/blob/main/ft_strjoin.c)           | Concatenate two strings.                     |
| [ft_isascii.c](https://github.com/itshanine/42-libft/blob/main/ft_isascii.c)           | Check if a character is ASCII.              |
| [ft_isprint.c](https://github.com/itshanine/42-libft/blob/main/ft_isprint.c)           | Check if a character is printable.           |
| [ft_memset.c](https://github.com/itshanine/42-libft/blob/main/ft_memset.c)             | Set a block of memory to a specified value.  |
| [ft_substr.c](https://github.com/itshanine/42-libft/blob/main/ft_substr.c)             | Extract a substring from a string.           |
| [ft_strncmp.c](https://github.com/itshanine/42-libft/blob/main/ft_strncmp.c)           | Compare two strings up to a specified length. |
| [ft_strmapi.c](https://github.com/itshanine/42-libft/blob/main/ft_strmapi.c)           | Apply a function to each character in a string with its index. |
| [ft_strtrim.c](https://github.com/itshanine/42-libft/blob/main/ft_strtrim.c)           | Trim leading and trailing whitespace from a string. |
| [ft_memmove.c](https://github.com/itshanine/42-libft/blob/main/ft_memmove.c)           | Move a block of memory to another location, handling overlap. |
| [ft_strlcat.c](https://github.com/itshanine/42-libft/blob/main/ft_strlcat.c)           | Safely concatenate two strings with a size limit. |
| [ft_calloc.c](https://github.com/itshanine/42-libft/blob/main/ft_calloc.c)             | Allocate and zero-initialize memory.         |
| [ft_strdup.c](https://github.com/itshanine/42-libft/blob/main/ft_strdup.c)             | Duplicate a string.                         |
| [ft_atoi.c](https://github.com/itshanine/42-libft/blob/main/ft_atoi.c)                 | Convert a string to an integer.             |
| [ft_tolower.c](https://github.com/itshanine/42-libft/blob/main/ft_tolower.c)           | Convert a character to lowercase.            |
| [ft_toupper.c](https://github.com/itshanine/42-libft/blob/main/ft_toupper.c)           | Convert a character to uppercase.            |
| [ft_isalnum.c](https://github.com/itshanine/42-libft/blob/main/ft_isalnum.c)           | Check if a character is alphanumeric.        |
| [ft_isalpha.c](https://github.com/itshanine/42-libft/blob/main/ft_isalpha.c)           | Check if a character is alphabetic.          |
| [ft_memchr.c](https://github.com/itshanine/42-libft/blob/main/ft_memchr.c)             | Search for a character in a block of memory. |
| [ft_putchar_fd.c](https://github.com/itshanine/42-libft/blob/main/ft_putchar_fd.c)     | Print a character to a file descriptor.      |
| [ft_itoa.c](https://github.com/itshanine/42-libft/blob/main/ft_itoa.c)                 | Convert an integer to a string.             |
| [ft_split.c](https://github.com/itshanine/42-libft/blob/main/ft_split.c)               | Split a string into an array of substrings.  |

<h3>
  Bonus part
</h3>

| File                                                                                   | Summary                                       |
| ---                                                                                    | ---                                           |
| [ft_lstadd_back.c](https://github.com/itshanine/42-libft/blob/main/ft_lstadd_back.c)   | Add an element to the end of a linked list.   |
| [ft_lstnew.c](https://github.com/itshanine/42-libft/blob/main/ft_lstnew.c)             | Create a new linked list element.             |
| [ft_lstlast.c](https://github.com/itshanine/42-libft/blob/main/ft_lstlast.c)           | Get the last element of a linked list.       |
| [ft_lstclear.c](https://github.com/itshanine/42-libft/blob/main/ft_lstclear.c)         | Clear a linked list and its content.         |
| [ft_lstiter.c](https://github.com/itshanine/42-libft/blob/main/ft_lstiter.c)           | Apply a function to each element of a list.  |
| [ft_lstmap.c](https://github.com/itshanine/42-libft/blob/main/ft_lstmap.c)             | Create a new list by applying a function to each element of a list. |
| [ft_lstsize.c](https://github.com/itshanine/42-libft/blob/main/ft_lstsize.c)           | Get the size of a linked list.              |
| [ft_lstadd_front.c](https://github.com/itshanine/42-libft/blob/main/ft_lstadd_front.c) | Add an element to the beginning of a linked list. |
| [ft_lstdelone.c](https://github.com/itshanine/42-libft/blob/main/ft_lstdelone.c)       | Delete a single element from a linked list.  |

<h2>
  📋 Testing
</h2>

You can use these third-party testers :

* [libft-war-machine](https://github.com/0x050f/libft-war-machine)
* [Tripouille](https://github.com/Tripouille/libftTester)
* [libft-unit-test](https://github.com/alelievr/libft-unit-test)
