/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsmidrka <jsmidrka@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:27:37 by jsmidrka          #+#    #+#             */
/*   Updated: 2023/12/08 18:00:22 by jsmidrka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>	// for malloc
#include "libft.h"

// void	*ft_memset(void *s, int c, size_t n)
// {
// 	while (n > 0)
// 		*((unsigned char *)s + (--n)) = (unsigned char)c;
// 	return (s);
// }

/*
NAME
malloc, free, calloc, realloc, reallocarray - allocate and free dynamic memory

SYNOPSIS
#include <stdlib.h>

void *malloc(size_t size);
void free(void *ptr);
void *calloc(size_t nmemb, size_t size);
void *realloc(void *ptr, size_t size);
void *reallocarray(void *ptr, size_t nmemb, size_t size);

Feature Test Macro Requirements for glibc (see feature_test_macros(7)):

reallocarray():
	Since glibc 2.29:
	_DEFAULT_SOURCE
	Glibc 2.28 and earlier:
	_GNU_SOURCE

DESCRIPTION
The malloc() function allocates size bytes and returns a pointer to the 
allocated memory.  The memory is not initialized.  If size is 0, then malloc()
returns  either  NULL,  or  a  unique pointer value that can later be
successfully passed to free().

The free() function frees the memory space pointed to by ptr, which must have
been returned by a previous call to malloc(), calloc(), or realloc().  
Otherwise, or if free(ptr)  has  already been called before, undefined behavior
occurs.  If ptr is NULL, no operation is performed.

The  calloc()  function allocates memory for an array of nmemb elements of
size bytes each and returns a pointer to the allocated memory.  The memory
is set to zero.  If nmemb or size is 0, then  calloc()  returns  either NULL,
or a unique pointer value that can later be successfully passed to free().  
If the multiplication of nmemb and size would result in  integer  overflow,
then calloc() returns an error.  By contrast, an integer overflow would not
be detected in the following call to malloc(), with the result that an 
incorrectly sized block of memory would be allocated:

	malloc(nmemb * size);

The  realloc()  function changes the size of the memory block pointed to by
ptr to size bytes. The contents will be unchanged in the range from the start
of the region up to the minimum  of the old and new sizes.  If the new size 
is larger than the old size, the added memory will not be initialized.  If
ptr is NULL, then the call is equivalent to malloc(size), for  all  values
of  size;  if  size  is  equal  to  zero,  and ptr is not NULL, then the 
call is equivalent to free(ptr).  Unless ptr is NULL, it must have been returned
by an  earlier  call  to  malloc(), calloc(), or realloc().  If the area pointed
to was moved, a free(ptr) is done.

The reallocarray() function changes the size of the memory block pointed to
by ptr to be large enough for an array of nmemb elements, each of which is 
size bytes.  It is equivalent  to  the call

https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc
-calloc-free-and-realloc/
C calloc() method
“calloc” or “contiguous allocation” method in C is used to dynamically 
allocate the specified number of blocks of memory of the specified type. 
it is very much similar to malloc() but has two different points and
these are:
It initializes each block with a default value ‘0’.
It has two parameters or arguments as compare to malloc().
Syntax of calloc() in C
ptr = (cast-type*)calloc(n, element-size);
here, n is the no. of elements and element-size is the size of each element.

For Example: 

ptr = (float*) calloc(25, sizeof(float));
This statement allocates contiguous space in memory for 25 elements each
with the size of the float.
*/

/*	This should not be commented as to emulate builtin calloc
	but errno calls function which is deemed forbidden by Moulinette
#include <errno.h>
	if (total_bytes / size != nmemb)
	{
		errno = ENOMEM;
		return (NULL);
	}
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	all_bytes;
	void	*res;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	all_bytes = nmemb * size;
	if (all_bytes / size != nmemb)
		return (NULL);
	res = malloc(all_bytes);
	if (res == NULL)
		return (NULL);
	ft_memset(res, 0, all_bytes);
	return (res);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	// This pointer will hold the
	// base address of the block created
	int*	ptr;
	int	n, i;

	// Get the number of elements for the array
	n = 5;
	printf("Enter number of elements: %d\n", n);

	// Dynamically allocate memory using calloc()
	ptr = (int*)calloc(n, sizeof(int));

	// Check if the memory has been successfully
	// allocated by calloc or not
	if (ptr == NULL)
	{
		printf("Memory not allocated.\n");
		exit(0);
	}
	else
	{
		// Memory has been successfully allocated
		printf("Memory successfully allocated using calloc.\n");

		// Get the elements of the array
		for (i = 0; i < n; ++i) {
			ptr[i] = i + 1;
		}

		// Print the elements of the array
		printf("The elements of the array are: ");
		for (i = 0; i < n; ++i) {
			printf("%d, ", ptr[i]);
		}
	}
	return (0);
}
*/