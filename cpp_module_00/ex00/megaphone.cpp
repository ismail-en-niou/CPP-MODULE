/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 22:39:30 by marvin            #+#    #+#             */
/*   Updated: 2025/03/29 22:39:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char const *av[])
{
    int	i = 1;
    if (ac > 1)
    {
        while (av[i])
        {
            int	j = 0;
            while (av[i][j])
            {
                std::cout << (char)toupper(av[i][j]);
                j++;
            }
            i++;
        }
        std::cout << std::endl;
    }
    else
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"
                  << std::endl;
    }
    return 0;
}
