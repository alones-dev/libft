/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdaumont <kdaumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:12:15 by kdaumont          #+#    #+#             */
/*   Updated: 2023/11/07 11:45:04 by kdaumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

int count_words(char *s, char c)
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

char **ft_split(char *s, char c)
{
    int i;
    char **tbl;

    //tbl = malloc(sizeof(char) * (count_words(s, c) + 1));
    //if (!tbl)
     //   return (NULL);
    
}

int main()
{
    printf("%d\n", count_words("salut-les-gars-tt-", '-'));
}