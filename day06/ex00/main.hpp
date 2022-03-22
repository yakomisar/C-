#ifndef MAIN_HPP
# define MAIN_HPP

#include <iomanip>
#include <iostream>

int		ft_atoi(const char *str);
int		is_float(std::string str);
int		is_double(std::string str);
int		is_int(std::string str);
int		ft_isdigit(char c);
int		check_digit(char c);
int		check_printable(int c);
int		no_dot(std::string str);
int		only_zeros(std::string str);
int		check_zero(std::string str);
int		check_symbol(std::string str);
int		check_pseudo(std::string str);
void	check_int(std::string str);
void	check_char(std::string str);
void	check_float(std::string str);
void	check_double(std::string str);

# endif