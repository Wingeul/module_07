/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <paul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 15:38:43 by paul              #+#    #+#             */
/*   Updated: 2025/10/16 13:50:53 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< typename T>

class Array
{
	private:
		T				*_array;
		unsigned int	_size;

	public:
		Array(): _size(0)
		{
			std::cout << "Default Constructor called: created empty Array of size 0" << std::endl;
			this->_array = new T[this->_size];
		}

		Array(unsigned int size): _size(size)
		{
			std::cout << "Constructor for an Array of size " << size << " called" << std::endl;
			this->_array = new T[this->_size];
		}

		Array(const Array &src): _size(src.size())
		{
			std::cout << "Copy Constuctor called" << std::endl;
			this->_array = NULL;
			*this = src;
		}

		~Array()
		{
            std::cout << "Destructor called" << std::endl;
			if (this->_array != NULL)
				delete [] this->_array;
		}

		Array &operator=(const Array &src)
		{
			if (this->_array != NULL)
				delete [] this->_array;
			if (src.size() != 0)
			{
				this->_size = src.size();
				this->_array = new T[this->_size];
				for (unsigned int i = 0; i < this->size(); i++)
					this->_array[i] = src._array[i];
			}
			return (*this);
		}

		T &operator[]( unsigned int index )
		{
			if (index >= this->_size || this->_array == NULL)
			{
				std::cout << "index: " << index << std::endl;
				throw Array<T>::InvalidIndexException();
			}
			return (this->_array[index]);
		}


		class	InvalidIndexException : public std::exception
		{
		public:
			virtual const char	*what() const throw();
		};
        
		unsigned int size() const
		{
			return (this->_size);
		}

};

template< typename T >
const char	*Array<T>::InvalidIndexException::what() const throw()
{
	return ("Error: Invalid index");
}