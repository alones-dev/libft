/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaumont <kdaumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:12:15 by kdaumont          #+#    #+#             */
/*   Updated: 2023/11/06 15:12:58 by kdaumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int countWords(char *s, char c)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (s[i])
    {
        if (s[i] == c || s[i+1] == '\0')
            count++;
        i++;
    }
    return (count);
}

char **ft_split(char const *s, char c)
{

}

int main()
{
    printf("%d\n", countWords("salut-les-gars", '-'));
}