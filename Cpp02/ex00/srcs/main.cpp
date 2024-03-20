/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2027/02/20 10:15:58 by lbouguet          #+#    #+#             */
/*   Updated: 2024/03/20 16:18:16 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/base.hpp"

int main( void ) 
{
	Fixed a;
	Fixed b(a);
	Fixed c;
	c = b;
	//--------------------------- Float inaccuracy --------------------------//
	float		normValUneven = 9999999 ;
	int			normValAccUneven = 9999999 ;
	
	float		bigValEven = 16777216;
	int			bigValAccEven = 16777216;
	
	float		bigValUneven2 = static_cast<float>(16777217);
	int			bigValAccUneven2 = 16777217;
	
	float		bigValEven3 = 16777218;
	int			bigValAccEven3 = 16777218;
	
	float		bigValUneven4 = static_cast<float>(16777219);
	int			bigValAccUneven4 = 16777219;

	float		decValUneven = 1.10;
	float		decValUneven2 = 1.19;
	float		decValUneven3 = 1.59;
	
	/* Notes on float inaccuracy for whole numbers
	
		Up to 2^24 (16,777,216), whole numbers can be represenseted 
		perfectely accuracy wise.
		Between 2^24 and 2^25, only even whole numbers.
		Between 2^25 (33,554,432) and 2^26, only multiples of 4.
		... and so on ... 
	*/
	std::cout << YELLOW << "\t\tTesting Big Whole Numbers with type float" << END_C << std::endl;
	std::cout << BLUE << "bigValEven :" << END_C << std::endl;
	std::cout << "Accurate value (int): " << bigValAccEven << " turned to (float) => ";
	std::cout << std::fixed << std::setprecision(0) << bigValEven << std::endl;
	
	std::cout << BLUE << "bigValUneven2 :" << END_C << std::endl;
	std::cout << "Accurate value (int): " << bigValAccUneven2 << " turned to (float) => ";
	std::cout << std::fixed << std::setprecision(0) 
	<< bigValUneven2 << std::endl;
	
	std::cout << BLUE << "bigValEven3 :" << END_C << std::endl;
	std::cout << "Accurate value (int): " << bigValAccEven3 << " turned to (float) => ";
	std::cout << std::fixed << std::setprecision(0) 
	<< bigValEven3 << std::endl;
	
	std::cout << BLUE << "bigValUneven4 :" << END_C << std::endl;
	std::cout << "Accurate value (int): " << bigValAccUneven4 << " turned to (float) => ";
	std::cout << std::fixed << std::setprecision(0) 
	<< bigValUneven4 << std::endl;
	
	std::cout << BLUE <<  "normValUneven :" << END_C << std::endl;
	std::cout << "Accurate value (int): " << normValAccUneven << " turned to (float) => ";
	std::cout << std::fixed << std::setprecision(0) 
	<< normValUneven << std::endl;

	std::cout << BLUE << "decValUneven : " << std::fixed << END_C << std::setprecision(0) 
	<< decValUneven << std::endl;
	std::cout << BLUE << "decValUneven2 : " << std::fixed << END_C << std::setprecision(0) 
	<< decValUneven2 << std::endl;
	std::cout << BLUE << "decValUneven3 : " << std::fixed << END_C << std::setprecision(0) 
	<< decValUneven3 << std::endl;

	std::cout << std::endl <<"-------------------- SUBJECT --------------------------------" << std::endl;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return (SUC);
}

