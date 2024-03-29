/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcalvie <lcalvie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:46:32 by lcalvie           #+#    #+#             */
/*   Updated: 2022/04/20 12:37:39 by lcalvie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& copy) :Form("ShrubberyCreationForm", 145, 137), _target(copy._target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const& copy)
{
	_is_signed = copy._is_signed;
        _target = copy._target;
        return *this;
}

void ShrubberyCreationForm::execute_form(Bureaucrat const & executor) const
{
	(void) executor;
        std::ofstream fd_out((_target+"_shrubbery").c_str());
	if (!fd_out)
		std::cout << "Impossible to create or open the file named : " << _target + "_shrubbery" << std::endl;
	else
	{
		fd_out << "  ..  ..  ..  ..  ..  ...  ..  ..  ..  ..  ..  ..  ..  ..  ..  ..  ..  ..  ...  " << std::endl;
		fd_out << "..  ..  ..  ..  ..  ..   .   ..  ..  ..  ..  ..  ..  ..  ..  ..  ..  ..   .   .." << std::endl;
		fd_out << "  ..  ..  ..  ..  ..  ...  ..  ..  ..  ..  ..  ..  ..  ..  ..  ..  ..  ..  ...  " << std::endl;
		fd_out << "..  ..  ..  ..  ..  ..   .   ..  ..  ..  ..  ..  ..  ..  ..  ..  ..  ..   .   .." << std::endl;
		fd_out << "..  ..  ..  ..  ..  ..   .   .,@@@@@@@@@@@@@@@@@@@@@@..  ..  ..  ..  ..   .   .." << std::endl;
		fd_out << "  ..  ..  ..  ..  ..  ...  ..@@@@//////////////////@@  ..  ..  ..  ..  ..  ...  " << std::endl;
		fd_out << "..  ..  ..  ..  ..  ..   .#@@@@//////////////////////@@  ..  ..  ..  ..   .   .." << std::endl;
		fd_out << "  ..  ..  ..  ..  ..  ... (@@////////////////////////@@..  ..  ..  ..  ..  ...  " << std::endl;
		fd_out << "  ..  ..  ..  ..  ..  ..*@%////////////////////////////@@  ..  ..  ..  ..  ...  " << std::endl;
		fd_out << "..  ..  ..  ..  ..  ..  ,@%////////////////////////////@@..  ..  ..  ..   .   .." << std::endl;
		fd_out << "  ..  ..  ..  ..  ..  @@&//////////////////////////////@@  ..  ..  ..  ..  ...  " << std::endl;
		fd_out << "..  ..  ..  ..  ..  ..@@&//////////////////////##//////@@..  ..  ..  ..   .   .." << std::endl;
		fd_out << "                    */%%#//////////////////////##//////@@                       " << std::endl;
		fd_out << "  ..  ..  ..  ..  ..%@///////////////////////((((((////@@  ..  ..  ..  ..  ...  " << std::endl;
		fd_out << "..  ..  ..  ..  ..  %@/////////////////////((((((((((//@@..  ..  ..  ..   .   .." << std::endl;
		fd_out << "  ..  ..  ..  ..  ..%@/////////////////////((((((((((//@@  ..  ..  ..  ..  ...  " << std::endl;
		fd_out << "..  ..  ..  ..  ..  %@///////////////////////((((((////@@..  ..  ..  ..   .   .." << std::endl;
		fd_out << "..  ..  ..  ..  ..@@#//////////////////////////////////@@..  ..  ..  ..   .   .." << std::endl;
		fd_out << "  ..  ..  ..  ..  @@#/////(##//////////////////////////@@  ..  ..  ..  ..  ...  " << std::endl;
		fd_out << "..  ..  ..  ..  ..@@#/////(##//////////////////////////@@..  ..  ..  ..   .   .." << std::endl;
		fd_out << "  ..  ..  ..  ..  @@#////((((((////////////////////////@@  ..  ..  ..  ..  ...  " << std::endl;
		fd_out << "..  ..  ..  ..  ..@@#/(((((((((((//////////////////////@@..  ..  ..  ..   .   .." << std::endl;
		fd_out << "..  ..  ..  ..  ..@@#/(((((((((//////////////////////@@  ..  ..  ..  ..   .   .." << std::endl;
		fd_out << "  ..  ..  ..  ..  ..%@///((((((//////////////////////@@..  ..  ..  ..  ..  ...  " << std::endl;
		fd_out << "..  ..  ..  ..  ..  %@///////////////////////////////@@  ..  ..  ..  ..   .   .." << std::endl;
		fd_out << "  ..  ..  ..  ..  ..%@///////////////////////////////@@..  ..  ..  ..  ..  ...  " << std::endl;
		fd_out << "  ..  ..  ..  ..  ..%@/////////////////////////////@@  ..  ..  ..  ..  ..  ...  " << std::endl;
		fd_out << "..  ..  ..  ..  ..  ..@@&////////@@////////////////@@..  ..  ..  ..  ..   .   .." << std::endl;
		fd_out << "  ..  ..  ..  ..  ..  @@&////////@@@@@@@@@@@@@@@@@@..  ..  ..  ..  ..  ..  ...  " << std::endl;
		fd_out << "..  ..  ..  ..  ..  ..  ,@%//////@@##########@@@@@@  ..  ..  ..  ..  ..   .   .." << std::endl;
		fd_out << "  ..  ..  ..  ..  ..  ..*&#((((//@@##########@@&&  ..  ..  ..  ..  ..  ..  ...  " << std::endl;
		fd_out << "  ..  ..  ..  ..  ..  ...  .. .@@@@##########@@..  ..  ..  ..  ..  ..  ..  ...  " << std::endl;
		fd_out << "..  ..  ..  ..  ..  ..   .   ..  @@##########@@  ..  ..  ..  ..  ..  ..   .   .." << std::endl;
		fd_out << "  ..  ..  ..  ..  ..  ...  ..  ..@@##########@@..  ..  ..  ..  ..  ..  ..  ...  " << std::endl;
		fd_out << "..  ..  ..  ..  ..  ..   .   ..  @@##########@@  ..  ..  ..  ..  ..  ..   .   .." << std::endl;
		fd_out << "..  ..  ..  ..  ..  ..   .   ..  @@########@@..  ..  ..  ..  ..  ..  ..   .   .." << std::endl;
		fd_out << "  ..  ..  ..  ..  ..  ...  ..  ..@@########@@  ..  ..  ..  ..  ..  ..  ..  ...  " << std::endl;
		fd_out << "..  ..  ..  ..  ..  ..   .   ..  @@########@@..  ..  ..  ..  ..  ..  ..   .   .." << std::endl;
		fd_out << "  ..  ..  ..  ..  ..  ...  ..  ..@@########@@  ..  ..  ..  ..  ..  ..  ..  ...  " << std::endl;
		fd_out << "..  ..  ..  ..  ..  ..   .   ..  @@######@@  ..  ..  ..  ..  ..  ..  ..   .   .." << std::endl;
		fd_out << "..  ..  ..  ..  ..  ..   .   ..  @@######@@  ..  ..  ..  ..  ..  ..  ..   .   .." << std::endl;
		fd_out << "  ..  ..  ..  ..  ..  ...  ..  ..@@####@@  ..  ..  ..  ..  ..  ..  ..  ..  ...  " << std::endl;
		fd_out << "..  ..  ..  ..  ..  ..   .   ..  @@####@@..  ..  ..  ..  ..  ..  ..  ..   .   .." << std::endl;
		fd_out << "  ..  ..  ..  ..  ..  ...  ..  ..@@####@@  ..  ..  ..  ..  ..  ..  ..  ..  ...  " << std::endl;
		fd_out << "  ..  ..  ..  ..  ..  ...  .. .@@######@@  ..  ..  ..  ..  ..  ..  ..  ..  ...  " << std::endl;
		fd_out << "..  ..  ..  ..  ..  ..   .   .,@@######@@..  ..  ..  ..  ..  ..  ..  ..   .   .." << std::endl;
		fd_out << "  ..  ..  ..  ..  ..  ...  .. .@@######@@  ..  ..  ..  ..  ..  ..  ..  ..  ...  " << std::endl;
		fd_out << "..  ..  ..  ..  ..  ..   .   .,@@######@@..  ..  ..  ..  ..  ..  ..  ..   .   .." << std::endl;
		fd_out << "  ..  ..  ..  ..  ..  ...  .. .@@######@@  ..  ..  ..  ..  ..  ..  ..  ..  ...  " << std::endl;
		fd_out << "  ..  ..  ..  ..  ..  ...  .. .@@######@@  ..  ..  ..  ..  ..  ..  ..  ..  ...  " << std::endl;
		fd_out << "..  ..  ..  ..  ..  ..   .   .,@@######@@..  ..  ..  ..  ..  ..  ..  ..   .   .." << std::endl;
		fd_out << "  ..  ..  ..  ..  ..  ///((((((@@%%####@@##((**..  ..  ..  ..  ..  ..  ..  ...  " << std::endl;
		fd_out << "..  ..  ..  ..  ..  /(((///((//@@######@@((##%%**..  ..  ..  ..  ..  ..   .   .." << std::endl;
		fd_out << "..  ..  ..  ..  //**#%###(/**//@@######@@//**//((((((((**//  ..  ..  ..   .   .." << std::endl;
		fd_out << "  ..  ..  ..  ((((((((//***//**@@######@@**//**((((//((%%  ..  ..  ..  ..  ...  " << std::endl;
		fd_out << "..  ..  ..  ..((((((//***/***//@@######@@//**//**((((//##//  ..  ..  ..   .   .." << std::endl;
		fd_out << "  ..  ..  ..##//((//**..,**//**@@######@@**//**//((((**((**..  ..  ..  ..  ...  " << std::endl;
		fd_out << "..  ..  ..**%%((((**..  ./***//@@%%##@@**//**//**((((((**//  ..  ..  ..   .   .." << std::endl;
		fd_out << "..  ..  ..((((((//((((***/***//@@%%@@//**//**((((((**//**//  ..  ..  ..   .   .." << std::endl;
		fd_out << "  ..  ..**//((%%(((((((((**//**@@@@@@**//**((((((((((  //  ..  ..  ..  ..  ...  " << std::endl;
		fd_out << "..  ..  //**//##//((//((//***//**((((((**//**((((((**//**..  ..  ..  ..   .   .." << std::endl;
		fd_out << "  ..  ..**..**((##((**((((///**//**//**//((((%%%%((//  ..  ..  ..  ..  ..  ...  " << std::endl;
		fd_out << "          ,,,,//**////##(////////((##((##((((******,,,,,,                       " << std::endl;
		fd_out << "..  ..  ..  ..**((###((((((((((((((**//**//**//  ..  ..  ..  ..  ..  ..   .   .." << std::endl;
		fd_out << "  ..  ..  ..  ..  //**//***//**//**..  ..  ..  ..  ..  ..  ..  ..  ..  ..  ...  " << std::endl;
		fd_out << "..  ..  ..  ..  ..  ..   .   ..  ..  ..  ..  ..  ..  ..  ..  ..  ..  ..   .   .." << std::endl;
		fd_out << "  ..  ..  ..  ..  ..  ...  ..  ..  ..  ..  ..  ..  ..  ..  ..  ..  ..  ..  ...  " << std::endl;
		fd_out << "  ..  ..  ..  ..  ..  ...  ..  ..  ..  ..  ..  ..  ..  ..  ..  ..  ..  ..  ...  " << std::endl;
	}
}
