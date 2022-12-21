/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeorgin <tgeorgin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 02:06:23 by tgeorgin          #+#    #+#             */
/*   Updated: 2022/12/16 02:21:50 by tgeorgin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CPP
# define PHONEBOOK_CPP

#include <iostream>
#include <iomanip>
#include <sstream>
#include "Contact.hpp"

class Phonebook {
	public :
		Phonebook();



	private :
		Contact users[8];

};

#endif