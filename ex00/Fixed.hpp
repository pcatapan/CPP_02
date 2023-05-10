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
