/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <paul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 15:12:47 by paul              #+#    #+#             */
/*   Updated: 2025/07/17 15:29:23 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"


void multiplyByTen(int &n)
{
    n *= 10;
}

int main()
{
    int arr[] = {1, 7, 3, 3, 5};
    size_t length = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array before iterating: ";
    for (size_t i = 0; i < length; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;


    iter(arr, length, multiplyByTen);

    std::cout << "Array after iterating: ";
    for (size_t i = 0; i < length; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    return 0;
}