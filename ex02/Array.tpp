/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <paul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 15:45:26 by paul              #+#    #+#             */
/*   Updated: 2025/07/17 16:09:28 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <stdexcept>

template <typename T> Array<T>::Array(unsigned int size) : _size(size)
{
    if (size == 0)
            _array = NULL;
    else
            _array = new T[size];
}

template <typename T> Array<T>::Array(const Array& other) : _size(other._size)
{
    if (_size == 0)
        _array = NULL;
    else
    {
        _array = new T[_size];
        for (unsigned int i = 0; i < _size; ++i)
            _array[i] = other._array[i];
    }
}

template <typename T> Array<T>::~Array()
{
    delete[] _array;
}

template <typename T> Array<T>& Array<T>::operator=(const Array& other)
{
    if (this != &other)
    {
        delete[] _array;
        _size = other._size;
        if (_size == 0)
            _array = NULL;
        else
        {
            _array = new T[_size];
            for (unsigned int i = 0; i < _size; ++i)
                _array[i] = other._array[i];
        }
    }
        return *this;
}

template <typename T> T& Array<T>::operator[](unsigned int index)
{
    if (index >= _size)
        throw std::out_of_range("Index out of bounds");
    return _array[index];
}
    