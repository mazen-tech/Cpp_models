/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <jotavare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 17:22:46 by pidsig            #+#    #+#             */
/*   Updated: 2024/05/09 17:25:08 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

/*
 * truncate a string to a specified width
 * @param str - the string to truncate
 * @return the truncated string
 */
std::string PhoneBook::truncateString(const std::string &str)
{
  static const int width = 10;
  if (str.length() > width)//if string width > the defult 
    return str.substr(0, width - 1) + '.';//we extract the first 9 chars of the str starting from index 0
  return str;//retunr the new str after shorting it 
}

/*
 * print phonebook menu options
 */
void PhoneBook::printMessage()
{
  std::cout << GREEN"#################### Phonebook ####################\n"RESET;
  std::cout << GREEN"##                                               ##\n"RESET;
  std::cout << GREEN"##     ADD - Add a new contact.                  ##\n"RESET;
  std::cout << GREEN"##     SEARCH - Display contact info.            ##\n"RESET;
  std::cout << GREEN"##     EXIT - Exit phonebook.                    ##\n"RESET;
  std::cout << GREEN"##                                               ##\n"RESET;
  std::cout << GREEN"###################################################\n"RESET;
}

/*
 * clear the console screen
 * plataform specific (windows, linux, macOS)
 */
void PhoneBook::clear()
{
#if defined _WIN32
  system("cls");//cls calls the system command to clear the screen in windows
#elif defined(__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
  system("clear");
#elif defined(__APPLE__)
  system("clear");
#endif
}

/*
_win32 -> macro indicating the program is running on windows OS
_linux_ -> macro indicating the program is running on linux os
_Apple_ -> macro indicating the program is running on apple os
*/