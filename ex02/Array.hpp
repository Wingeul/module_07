/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <paul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 15:38:43 by paul              #+#    #+#             */
/*   Updated: 2025/07/17 16:04:24 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T> class Array
{
private:
    T* _array;
    unsigned int _size;
public:
    Array(unsigned int size = 0);
    Array(const Array& other);
    ~Array();

    Array& operator=(const Array& other);

    T& operator[](unsigned int index);

    unsigned int size() const
    {
        return _size;
    }
};

#include "Array.tpp"

#endif