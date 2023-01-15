/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharraz <akharraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 02:16:03 by akharraz          #+#    #+#             */
/*   Updated: 2023/01/15 03:49:48 by akharraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
void f_huuc()
{
    
    return ;
}
struct main_test
{
    int a;
}typedef t_main;

// int main()
// {
//     // int k = f_huuc(); cannot happen;
//     t_main *ll;
    
//     ll = new (t_main);
//     ll->a = 99;
//     (void)ll;
//     ll->a;
//     std::cout << ll->a <<  " hello"<< std::endl;
// }

int main()
{
    void*   ptr;
    while (1)
    {    
        ptr = malloc(11);
        system("leaks main");
        sleep(1);
    }
}