/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcatapan <pcatapan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 18:54:00 by pcatapan          #+#    #+#             */
/*   Updated: 2023/05/27 18:54:01 by pcatapan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream> 

class Fixed
{
	public:
		Fixed();
		Fixed(const float n);
		Fixed(const int n);
		Fixed(Fixed const &f);
		~Fixed();

		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits() const;
		void setRawBits(int const raw);
		void operator=(Fixed const &f);

	private:
		const static int bits_nbr = 8;
		int	rawBits;
};

std::ostream& operator<<(std::ostream& ostream, Fixed const &f);

#endif
