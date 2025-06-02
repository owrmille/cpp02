/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iatopchu <iatopchu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 17:14:05 by iatopchu          #+#    #+#             */
/*   Updated: 2025/06/02 15:12:13 by iatopchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream> 
#include <cmath>

#define CYAN "\033[96m"
#define GREEN "\033[92m"
#define YELLOW "\033[93m"
#define RESET "\033[0m"

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