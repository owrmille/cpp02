#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int val) {
    //std::cout << "Int constructor called" << std::endl;
    _value = val * (1 << _fractionalBits);
}

Fixed::Fixed(const float val) {
    //std::cout << "Float constructor called" << std::endl;
    _value = roundf(val * (1 << _fractionalBits));
}

Fixed& Fixed::operator=(const Fixed& other) {
    //std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        _value = other.getRawBits();
    }
    return *this;
}

Fixed::Fixed(const Fixed& other) {
    //std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::~Fixed() {
    //std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    return _value;
}

void Fixed::setRawBits(int const raw) {
    _value = raw;
}

float Fixed::toFloat(void) const {
    return static_cast<float>(_value) / (1 << _fractionalBits);
}

int Fixed::toInt(void) const {
    return _value / (1 << _fractionalBits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}

bool Fixed::operator>(const Fixed& other) const {
    return _value > other.getRawBits();
}

bool Fixed::operator<(const Fixed& other) const {
    return _value < other.getRawBits();
}

bool Fixed::operator<=(const Fixed& other) const {
    return _value <= other.getRawBits();
}

bool Fixed::operator>=(const Fixed& other) const {
    return _value >= other.getRawBits();
}

bool Fixed::operator==(const Fixed& other) const {
    return _value == other.getRawBits();
}

bool Fixed::operator!=(const Fixed& other) const {
    return _value != other.getRawBits();
}

Fixed Fixed::operator+(const Fixed& other) const {
    return Fixed(toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const {
    return Fixed(toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const {
    return Fixed(toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const {
    return Fixed(toFloat() / other.toFloat());
}

Fixed& Fixed::operator++() {
    ++_value;
    return *this;
}

Fixed& Fixed::operator--() {
    --_value;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp = *this;
    ++_value;
    return temp;
}

Fixed Fixed::operator--(int) {
    Fixed temp = *this;
    --_value;
    return temp;
}

Fixed& Fixed::min(Fixed& x, Fixed& y) {
    if (x <= y) {
        return x;
    } else {
        return y;
    }
}

Fixed& Fixed::max(Fixed&x, Fixed& y) {
    if (x >= y) {
        return x;
    } else {
        return y;
    }
}

const Fixed& Fixed::min(const Fixed& x, const Fixed& y) {
    if (x <= y) {
        return x;
    } else {
        return y;
    }
}

const Fixed& Fixed::max(const Fixed&x, const Fixed& y) {
    if (x >= y) {
        return x;
    } else {
        return y;
    }
}