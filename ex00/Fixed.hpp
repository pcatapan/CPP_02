/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcatapan <pcatapan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 18:54:36 by pcatapan          #+#    #+#             */
/*   Updated: 2023/05/27 18:54:37 by pcatapan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	public:
		Fixed();
		Fixed(Fixed const &f);
		~Fixed();
		int getRawBits() const;
		void setRawBits(int const raw);
		void operator=(Fixed &f);

	private:
		const static int bits_nbr = 8;
		int	rawBits;
};

#endif
