# Libft - C Library

## Description
**Libft** is a custom implementation of several standard C library functions, along with additional utility functions. This project aims to reinforce understanding of C language fundamentals by re-implementing essential functions. All the functions have been coded from scratch following the standards provided by the project requirements.

## Functions Overview

### Mandatory Functions
- **`ft_isalpha`**: Checks if the character is an alphabetic letter.
- **`ft_isdigit`**: Checks if the character is a digit (0-9).
- **`ft_isalnum`**: Checks if the character is alphanumeric.
- **`ft_isascii`**: Checks if the character is an ASCII character.
- **`ft_isprint`**: Checks if the character is printable.
- **`ft_strlen`**: Computes the length of the string.
- **`ft_memset`**: Fills memory with a constant byte.
- **`ft_bzero`**: Sets memory to zero.
- **`ft_memcpy`**: Copies memory area.
- **`ft_memmove`**: Moves memory area.
- **`ft_strlcpy`**: Copies a string with size limit.
- **`ft_strlcat`**: Concatenates strings with size limit.
- **`ft_toupper`**: Converts a character to uppercase.
- **`ft_tolower`**: Converts a character to lowercase.
- **`ft_strchr`**: Locates a character in a string.
- **`ft_strrchr`**: Locates a character in a string from the end.
- **`ft_strncmp`**: Compares two strings up to a given number of characters.
- **`ft_memchr`**: Scans memory for a byte.
- **`ft_memcmp`**: Compares memory areas.
- **`ft_strnstr`**: Locates a substring in a string.
- **`ft_calloc`**: Allocates memory and sets it to zero.
- **`ft_strdup`**: Duplicates a string.
- **`ft_atoi`**: Converts a string to an integer.

### Additional Utility Functions
- **`ft_substr`**: Extracts a substring from a given string.
- **`ft_strjoin`**: Concatenates two strings into a newly allocated string.
- **`ft_strtrim`**: Trims characters from the beginning and end of a string.
- **`ft_split`**: Splits a string into an array of substrings based on a specified delimiter.
- **`ft_itoa`**: Converts an integer value to a null-terminated string.
- **`ft_strmapi`**: Applies a function to each character of a string.
- **`ft_striteri`**: Applies a function to each character of a string with its index.
- **`ft_putchar_fd`**: Outputs a character to a file descriptor.
- **`ft_putstr_fd`**: Outputs a string to a file descriptor.
- **`ft_putendl_fd`**: Outputs a string to a file descriptor followed by a newline.
- **`ft_putnbr_fd`**: Outputs an integer to a file descriptor.

### Bonus Functions (Linked Lists)
These functions manage the `t_list` structure for simple linked lists.

| Function | Description |
| :--- | :--- |
| **`ft_lstnew`** | Creates a new list node. |
| **`ft_lstadd_front`** | Adds a node to the beginning of the list. |
| **`ft_lstsize`** | Counts the number of nodes in the list. |
| **`ft_lstlast`** | Returns the last node of the list. |
| **`ft_lstadd_back`** | Adds a node to the end of the list. |
| **`ft_lstdelone`** | Frees a single node and its content using a deletion function. |
| **`ft_lstclear`** | Deletes and frees all nodes in the list, setting the list pointer to NULL. |
| **`ft_lstiter`** | Iterates the list and applies a function to the content of each node. |
| **`ft_lstmap`** | Creates a new list resulting from applying a function to the content of every node in the original list. |

## Compilation and Usage
To compile the library, simply run the following command:
```bash
make
```
## Additional Resources

If you’d like to see detailed explanations and notes for each function, you can visit my Notion page here:  
👉 [Libft – Notion Detailed Guide](https://www.notion.so/Libft-1086a32e0f34803f8e52d78621cf1a8f?source=copy_link)
