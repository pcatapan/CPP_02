/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcatapan <pcatapan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 18:53:27 by pcatapan          #+#    #+#             */
/*   Updated: 2023/05/28 16:48:56 by pcatapan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 
#include "Fixed.hpp"

void	subject_test()
{
	Fixed a;
	Fixed b;
	Fixed const c( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "++a : " << ++a << std::endl;
	std::cout << "--b ; "<< --b << std::endl;
	std::cout << "a : "<< a << std::endl;
	std::cout << "b : "<< b << std::endl;
	std::cout << "a++ : "<< a++ << std::endl;
	std::cout << "b-- : "<< b-- << std::endl;
	std::cout << "a : " <<a << std::endl;
	std::cout << "b : " << b << std::endl;
	
	std::cout << "c = 5.05 * 2 : " << c << std::endl;
	
	std::cout <<"max a,c : " << Fixed::max( a, c ) << std::endl;
	std::cout <<"min a,c : " << Fixed::min( a, c ) << std::endl;
}

void	my_test()
{
	Fixed a(24);
	Fixed b(42);
	Fixed const c( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "++a : " << ++a << std::endl;
	std::cout << "--b ; "<< --b << std::endl;
	std::cout << "a : "<< a << std::endl;
	std::cout << "b : "<< b << std::endl;
	std::cout << "a++ : "<< a++ << std::endl;
	std::cout << "b-- : "<< b-- << std::endl;
	std::cout << "a : " <<a << std::endl;
	std::cout << "b : " << b << std::endl;
	
	std::cout << "c = 5.05 * 2 : " << c << std::endl;
	
	std::cout <<"max a,c : " << Fixed::max( a, c ) << std::endl;
	std::cout <<"min a,c : " << Fixed::min( a, c ) << std::endl;
}


int main( void ) {

	std::cout << "***Subject Test***" << std::endl;
	subject_test();
	std::cout << "\n\n";
	std::cout << "***My Test***" << std::endl;
	my_test();
	return 0;
}
