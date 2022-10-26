/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_limits.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomeno <tkomeno@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:49:26 by tkomeno           #+#    #+#             */
/*   Updated: 2022/10/26 14:56:37 by tkomeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIMITS_H
# define FT_LIMITS_H

# define INT_MAX ((int)(~(unsigned int)0 >> 1))
# define INT_MIN (-INT_MAX - 1)
# define UINT_MAX ((unsigned int)(~(unsigned int)0))
# define LONG_MAX ((long)(~(unsigned long)0 >> 1))
# define LONG_MIN (-LONG_MAX - 1)
# define ULONG_MAX ((unsigned long)(~(unsigned long)0))
# define LLONG_MAX ((long long)(~(unsigned long long)0 >> 1))
# define LLONG_MIN (-LLONG_MAX - 1)
# define ULLONG_MAX ((unsigned long long)(~(unsigned long long)0))
# define SSIZE_MAX ((ssize_t)(~(size_t)0 >> 1))
# define SSIZE_MIN (-SSIZE_MAX - 1)
# define SIZE_MAX ((size_t)(~(size_t)0))

#endif
