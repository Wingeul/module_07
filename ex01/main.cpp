/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <paul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 15:12:47 by paul              #+#    #+#             */
/*   Updated: 2025/10/16 13:25:25 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"


void multiplyByTen(int &n)
{
    n *= 10;
}

void printElement(const int &n)
{
    std::cout << n << " ";
}

int main()
{
    int arr[] = {1, 7, 3, 3, 5};
    size_t length = sizeof(arr) / sizeof(arr[0]);

   
    iter(arr, length, printElement);
    std::cout << std::endl;

    iter(arr, length, multiplyByTen);

    iter(arr, length, printElement);
    std::cout << std::endl;

    return 0;
}