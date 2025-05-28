/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iatopchu <iatopchu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 17:14:23 by iatopchu          #+#    #+#             */
/*   Updated: 2025/05/28 17:14:24 by iatopchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) {
    std::cout << "---------------------------------" << std::endl;
    std::cout << "-----Tests from the subject------" << std::endl;
    std::cout << "---------------------------------" << std::endl;

    Fixed a;
    Fixed const b(Fixed( 5.05f ) * Fixed( 2 ));

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;

    std::cout << "                                 " << std::endl;
    std::cout << "---------------------------------" << std::endl;
    std::cout << "------------My tests-------------" << std::endl;
    std::cout << "---------------------------------" << std::endl;
    std::cout << "                                 " << std::endl;
    
    Fixed c(1.5f);
    Fixed d(2);
    Fixed e(2);
    std::cout << "-------------Values-------------" << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "-------------Operations---------" << std::endl;
    std::cout << "c + d = " << c + d << std::endl;
    std::cout << "c - d = " << c - d << std::endl;
    std::cout << "c * d = " << c * d << std::endl;
    std::cout << "c / d = " << c / d << std::endl;

    std::cout << "-------------Values-------------" << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "e = " << e << std::endl;
    std::cout << "-------------Operations---------" << std::endl;
    std::cout << "c > d: " << (c > d) << std::endl;
    std::cout << "c < d: " << (c < d) << std::endl;
    std::cout << "c >= d: " << (c >= d) << std::endl;
    std::cout << "c <= d: " << (c <= d) << std::endl;
    std::cout << "c == d: " << (c == d) << std::endl;
    std::cout << "c != d: " << (c != d) << std::endl;
    std::cout << "d > e: " << (d > e) << std::endl;
    std::cout << "d < e: " << (d < e) << std::endl;
    std::cout << "d >= e: " << (d >= e) << std::endl;
    std::cout << "d <= e: " << (d <= e) << std::endl;
    std::cout << "d == e: " << (d == e) << std::endl;
    std::cout << "d != e: " << (d != e) << std::endl;

    std::cout << "-------------Values-------------" << std::endl;   
    std::cout << "c = " << c << std::endl;
    std::cout << "-------------Operations---------" << std::endl;
    std::cout << "c++ = " << c++ << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "++c = " << ++c << std::endl;
    std::cout << "c = " << c << std::endl;    
    std::cout << "c-- = " << c-- << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "--c = " << --c << std::endl;
    std::cout << "c = " << c << std::endl;  

    std::cout << "-------------Values-------------" << std::endl;   
    std::cout << "d = " << d << std::endl;
    std::cout << "-------------Operations---------" << std::endl;
    std::cout << "d++ = " << d++ << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "++d = " << ++d << std::endl;
    std::cout << "d = " << d << std::endl;    
    std::cout << "d-- = " << d-- << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "--d = " << --d << std::endl;
    std::cout << "d = " << d << std::endl; 

    std::cout << "-------------Values-------------" << std::endl;   
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "-------------Operations---------" << std::endl;
    std::cout << "min(c, d) = " << Fixed::min(c, d) << std::endl;
    std::cout << "max(c, d) = " << Fixed::max(c, d) << std::endl;   

    Fixed const f(1.5f);
    Fixed const g(2);
    std::cout << "-------------Values-------------" << std::endl;   
    std::cout << "f = " << f << std::endl;
    std::cout << "g = " << g << std::endl;
    std::cout << "-------------Operations---------" << std::endl;
    std::cout << "min(f, g) = " << Fixed::min(f, g) << std::endl;
    std::cout << "max(f, g) = " << Fixed::max(f, g) << std::endl;

    // example to understand the problem with floating point numbers
    // std::cout << "---------------------------------------------" << std::endl;
    // std::cout << "Problem with floating point numbers (example)" << std::endl;
    // std::cout << "---------------------------------------------" << std::endl;
    // std::cout << std::setprecision(17);
    // std::cout << "0.1 + 0.2 = " << (0.1 + 0.2) << std::endl;
    // std::cout << "0.3 = " << 0.3 << std::endl;
    // std::cout << "0.1 + 0.2 == 0.3: " << ((0.1 + 0.2) == 0.3) << std::endl;

    return (0); 
}