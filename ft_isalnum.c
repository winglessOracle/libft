/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 09:26:37 by cwesseli      #+#    #+#                 */
/*   Updated: 2022/10/12 11:53:39 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	return (0);
}

// DESCRIPTION
//        For isalnum(): The functionality described on this reference page
//        is aligned with the ISO C standard. Any conflict between the
//        requirements described here and the ISO C standard is
//        unintentional. This volume of POSIX.1‐2017 defers to the ISO C
//        standard.

//        The isalnum() and isalnum_l() functions shall test whether c is a
//        character of class alpha or digit in the current locale, or in
//        the locale represented by locale, respectively; see the Base
//        Definitions volume of POSIX.1‐2017, Chapter 7, Locale.

//        The c argument is an int, the value of which the application
//        shall ensure is representable as an unsigned char or equal to the
//        value of the macro EOF. If the argument has any other value, the
//        behavior is undefined.

//        The behavior is undefined if the locale argument to isalnum_l()
//        is the special locale object LC_GLOBAL_LOCALE or is not a valid
//        locale object handle.

// RETURN VALUE
//        The isalnum() and isalnum_l() functions shall return non-zero if
//        c is an alphanumeric character; otherwise, they shall return 0.