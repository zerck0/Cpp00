/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgeorgin <tgeorgin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 02:07:37 by tgeorgin          #+#    #+#             */
/*   Updated: 2022/12/21 20:09:44 by tgeorgin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <sstream>

class Contact {
	public :
		Contact();
		int		getId(void);
		void	setContact(int i);
		void	displayFormat(std::string str);
		void	displayContact(void);
		void	displayAllContact(void);

	private :
		int			id;
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;
};

#endif