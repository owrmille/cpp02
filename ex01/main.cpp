/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iatopchu <iatopchu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 17:14:09 by iatopchu          #+#    #+#             */
/*   Updated: 2025/06/02 15:11:59 by iatopchu         ###   ########.fr       */
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

int main(void) {
	printTestTitle("Test from the subject");
	
    Fixed a;
    Fixed const b(10);
    Fixed const c(42.42f);
    Fixed const d(b);

    a = Fixed(1234.4321f);

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	printTestTitle("Extra: Test for .toFloat()");

	Fixed e;
    Fixed const f(10);
    Fixed const g(42);
    Fixed const h(f);

    e = Fixed(1234);

    std::cout << "e is " << e << std::endl;
    std::cout << "f is " << f << std::endl;
    std::cout << "g is " << g << std::endl;
    std::cout << "h is " << h << std::endl;

    std::cout << "e is " << e.toFloat() << " as float" << std::endl;
    std::cout << "f is " << f.toFloat() << " as float" << std::endl;
    std::cout << "g is " << g.toFloat() << " as float" << std::endl;
    std::cout << "h is " << h.toFloat() << " as float" << std::endl;
    
	// to check that it is float and int indeed:
	// 1) add #include <typeinfo> 
	// 2) uncomment section below
	//
	// printLine();
	// std::cout << "Type of e.toFloat(): " << typeid(e.toFloat()).name() << std::endl;
	// std::cout << "Type of e.toInt(): " << typeid(e.toInt()).name() << std::endl;
	// printLine();
	
    return (0); 
}
