/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbouguet <lbouguet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2027/02/20 10:15:58 by lbouguet          #+#    #+#             */
/*   Updated: 2024/02/29 11:21:49 by lbouguet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../incs/Fixed.hpp"
# include "../incs/funcOperator.hpp"
# include <iostream>

int main( void ) 
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);
	// Ces lignes decrivent le comportement de 
	// l'instrution suivante
	
	// I )Construction de l'objet temporaire : 
	// L'instruction Fixed(1234.4321f) appelle le constructeur 
	// de votre classe Fixed qui prend un float en paramètre. 
	// Ce constructeur est responsable de convertir 
	// la valeur flottante en une représentation à virgule fixe 
	// et de stocker cette valeur dans l'attribut 
	// integer de l'objet Fixed créé. 
	// La chaîne "Float constructor called" sera affichée 
	// dans la console à ce moment, indiquant que ce constructeur a été appelé.
	
	// II) Opération d'affectation : 
	// Après la construction de l'objet temporaire, 
	// l'opérateur d'affectation (=) est appelé 
	// pour assigner la valeur de l'objet temporaire à l'objet a. 
	// Si a est déjà initialisé, 
	// c'est l'opérateur de surcharge = qui est invoqué 
	// pour copier la valeur de l'attribut integer 
	// de l'objet temporaire dans a. 
	// La chaîne "Copy assignment operator called for Fixed" 
	// sera affichée, indiquant que cet opérateur a été utilisé.
	a = Fixed(1234.4321f);
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return (0);
}