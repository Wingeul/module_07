/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <paul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 15:16:26 by paul              #+#    #+#             */
/*   Updated: 2025/10/16 13:25:09 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

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

template <typename T, typename F> void iter(T *array, size_t length, F func)
{
    for (size_t i = 0; i < length; ++i)
    {
        func(array[i]);
    }
}

#endif