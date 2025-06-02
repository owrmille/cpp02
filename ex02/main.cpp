/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iatopchu <iatopchu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 17:14:23 by iatopchu          #+#    #+#             */
/*   Updated: 2025/06/02 14:24:38 by iatopchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void printLine() {
    std::cout << "--------------------------------" << std::endl;
}

void printDoubleLine() {
    std::cout << "=================================" << std::endl;
}

void printTestTitle(const std::string& title) {
    printDoubleLine();
    std::cout << YELLOW << title << RESET << std::endl;
    printDoubleLine();
}

void printSectionTitle(const std::string& section) {
	printLine();
	std::cout << CYAN << section << RESET << std::endl;
}

std::string returnWordForBool(bool val) {
	if (val == true) {
		return "True";
	} else if (val == false) {
		return "False";
	} else {
		return "Unknown";
	}
}

int main(void) {
	printTestTitle("Tests from the subject");

    Fixed a;
    Fixed const b(Fixed( 5.05f ) * Fixed( 2 ));

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;

	printTestTitle("My tests");
    
    Fixed c(1.5f);
    Fixed d(2);
    Fixed e(2);
	
	printSectionTitle("Values");
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
	printSectionTitle("Operations");
    std::cout << "c + d = " << c + d << std::endl;
    std::cout << "c - d = " << c - d << std::endl;
    std::cout << "c * d = " << c * d << std::endl;
    std::cout << "c / d = " << c / d << std::endl;

	
	printSectionTitle("Values");
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "e = " << e << std::endl;
	printSectionTitle("Operations");
	std::cout << "c > d: " << returnWordForBool(c > d) << std::endl;
    std::cout << "c < d: " << returnWordForBool(c < d) << std::endl;
    std::cout << "c >= d: " << returnWordForBool(c >= d) << std::endl;
    std::cout << "c <= d: " << returnWordForBool(c <= d) << std::endl;
    std::cout << "c == d: " << returnWordForBool(c == d) << std::endl;
    std::cout << "c != d: " << returnWordForBool(c != d) << std::endl;
    std::cout << "d > e: " << returnWordForBool(d > e) << std::endl;
    std::cout << "d < e: " << returnWordForBool(d < e) << std::endl;
    std::cout << "d >= e: " << returnWordForBool(d >= e) << std::endl;
    std::cout << "d <= e: " << returnWordForBool(d <= e) << std::endl;
    std::cout << "d == e: " << returnWordForBool(d == e) << std::endl;
    std::cout << "d != e: " << returnWordForBool(d != e) << std::endl;

    printSectionTitle("Values");  
    std::cout << "c = " << c << std::endl;
    printSectionTitle("Operations");
    std::cout << "c++ = " << c++ << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "++c = " << ++c << std::endl;
    std::cout << "c = " << c << std::endl;    
    std::cout << "c-- = " << c-- << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "--c = " << --c << std::endl;
    std::cout << "c = " << c << std::endl;  

    printSectionTitle("Values");  
    std::cout << "d = " << d << std::endl;
    printSectionTitle("Operations");
    std::cout << "d++ = " << d++ << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "++d = " << ++d << std::endl;
    std::cout << "d = " << d << std::endl;    
    std::cout << "d-- = " << d-- << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "--d = " << --d << std::endl;
    std::cout << "d = " << d << std::endl; 

    printSectionTitle("Values"); 
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
    printSectionTitle("Operations");
    std::cout << "min(c, d) = " << Fixed::min(c, d) << std::endl;
    std::cout << "max(c, d) = " << Fixed::max(c, d) << std::endl;   

    Fixed const f(1.5f);
    Fixed const g(2);
    printSectionTitle("Values");  
    std::cout << "f = " << f << std::endl;
    std::cout << "g = " << g << std::endl;
    printSectionTitle("Operations");
    std::cout << "min(f, g) = " << Fixed::min(f, g) << std::endl;
    std::cout << "max(f, g) = " << Fixed::max(f, g) << std::endl;

 
	// TO UNCOMMENT if want to see example to understand the problem with floating point numbers 
	//+ TO UNCOMMENT <iomanip>
	
	// printTestTitle("Well-known example of a problem with floating point numbers");
	// printSectionTitle("Using floaing point numbers");
	// std::cout << std::setprecision(17);
    // std::cout << "0.1 + 0.2 = " << (0.1 + 0.2) << std::endl;
    // std::cout << "0.3 = " << 0.3 << std::endl;
    // std::cout << "0.1 + 0.2 == 0.3: " << returnWordForBool((0.1 + 0.2) == 0.3) << std::endl;

	// printSectionTitle("Using fixed point numbers class");
	// std::cout << std::setprecision(17);
    // std::cout << "0.1 + 0.2 = " << (Fixed(0.1f) + Fixed(0.2f)) << std::endl;
    // std::cout << "0.3 = " << Fixed(0.3f) << std::endl;
    // std::cout << "0.1 + 0.2 == 0.3: " << returnWordForBool(Fixed(0.1f) + Fixed(0.2f) == Fixed(0.3f)) << std::endl;


    return (0); 
}