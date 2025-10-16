/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <paul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 15:10:44 by paul              #+#    #+#             */
/*   Updated: 2025/10/16 13:06:02 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T> void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T> T min(const T &a, const T &b)
{
    if (a < b)
        return a;
    else
        return b;
}

template <typename T> T max(const T &a, const T &b)
{
    if (a > b)
        return a;
    else
        return b;
}

#endif