/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeorgin <tgeorgin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 02:06:23 by tgeorgin          #+#    #+#             */
/*   Updated: 2022/12/21 20:17:25 by tgeorgin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CPP
# define PHONEBOOK_CPP

#include <iostream>
#include <iomanip>
#include <sstream>
#include "Contact.hpp"

class PhoneBook {
	public :
		PhoneBook();
		void ADD(void);
		void SEARCH(void);
		void EXIT(void);


	private :
		Contact contacts[8];
		int		idx;
};

#endif