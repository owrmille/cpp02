/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iatopchu <iatopchu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 17:13:55 by iatopchu          #+#    #+#             */
/*   Updated: 2025/06/02 14:50:14 by iatopchu         ###   ########.fr       */
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
    Fixed b(a);
    Fixed c;

    c = b;

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

	printTestTitle("Extra: Test for setRawBits");
	
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;

    a.setRawBits(42);
	b.setRawBits(42);
	c.setRawBits(42);
	
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    
    return (0);
}
