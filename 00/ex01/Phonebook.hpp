/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: signacia <signacia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 23:24:23 by signacia          #+#    #+#             */
/*   Updated: 2021/12/15 00:47:59 by signacia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class Phonebook
{
private:
	Contact contacts[8];
public:
	static int	id;
	Phonebook(void);
	~Phonebook(void);
	void	addContact(void);
	void	searchContact(void);
};




#endif