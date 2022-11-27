/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 09:27:28 by cwesseli      #+#    #+#                 */
/*   Updated: 2022/10/21 11:04:20 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*checker;
	char	to_check;

	checker = (char *)s;
	to_check = (char)c;
	while (*checker != to_check && *checker != '\0')
		checker++;
	if (*checker != to_check)
		return (0);
	return (checker);
}

// DESCRIPTION 
//        The strchr() function returns a pointer to the first occurrence
//        of the character c in the string s.
//        The strrchr() function returns a pointer to the last occurrence
//        of the character c in the string s.
//        The strchrnul() function is like strchr() except that if c is not
//        found in s, then it returns a pointer to the null byte at the end
//        of s, rather than NULL.
//        Here "character" means "byte"; these functions do not work with
//        wide or multibyte characters.
// RETURN VALUE  
//        The strchr() and strrchr() functions return a pointer to the
//        matched character or NULL if the character is not found.  The
//        terminating null byte is considered part of the string, so that
//        if c is specified as '\0', these functions return a pointer to
//        the terminator.
//        The strchrnul() function returns a pointer to the matched
//        character, or a pointer to the null byte at the end of s (i.e.,
//        s+strlen(s)) if the character is not found.
