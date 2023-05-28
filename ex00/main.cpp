/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcatapan <pcatapan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 18:54:27 by pcatapan          #+#    #+#             */
/*   Updated: 2023/05/28 16:47:21 by pcatapan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp" 

void	my_test()
{
	Fixed a;
	Fixed b(a);
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	c.setRawBits(42);
	std::cout << c.getRawBits() << std::endl;
}

void	subject_test()
{
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
}

int main( void ) {

	std::cout << "***Subject Test***" << std::endl;
	subject_test();
	std::cout << "\n\n";
	std::cout << "***My Test***" << std::endl;
	my_test();
	return 0;
}
