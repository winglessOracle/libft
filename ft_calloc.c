/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 09:26:30 by cwesseli      #+#    #+#                 */
/*   Updated: 2022/10/17 12:24:08 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// DESCRIPTION         top
///        The calloc() function shall allocate unused space for an array of
//        nelem elements each of whose size in bytes is elsize.  The space
//        shall be initialized to all bits 0.

//        The order and contiguity of storage allocated by successive calls
//        to calloc() is unspecified. The pointer returned if the
//        allocation succeeds shall be suitably aligned so that it may be
//        assigned to a pointer to any type of object and then used to
//        access such an object or an array of such objects in the space
//        allocated (until the space is explicitly freed or reallocated).
//        Each such allocation shall yield a pointer to an object disjoint
//        from any other object. The pointer returned shall point to the
//        start (lowest byte address) of the allocated space. If the space
//        cannot be allocated, a null pointer shall be returned. If the
//        size of the space requested is 0, the behavior is implementation-
//        defined: either a null pointer shall be returned, or the behavior
//        shall be as if the size were some non-zero value, except that the
//        behavior is undefined if the returned pointer is used to access
//        an object.
// RETURN VALUE         top
//        Upon successful completion with both nelem and elsize non-zero,
//        calloc() shall return a pointer to the allocated space. If either
//        nelem or elsize is 0, then either:

//         *  A null pointer shall be returned and errno may be set to an
//            implementation-defined value, or

//         *  A pointer to the allocated space shall be returned. The
//            application shall ensure that the pointer is not used to
//            access an object.

//        Otherwise, it shall return a null pointer and set errno to
//        indicate the error.
// ERRORS         top