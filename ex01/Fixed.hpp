#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream> 

class Fixed
{
private:
    int _value;
    static const int _fractionalBits = 8;
public:
    Fixed();
    Fixed(const int val);
    Fixed(const float val);
    Fixed& operator=(const Fixed& other);
    Fixed(const Fixed&other);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream& operator<<(std::ostream &os, const Fixed& fixed);

#endif