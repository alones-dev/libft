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