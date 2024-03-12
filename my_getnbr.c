/*
** EPITECH PROJECT, 2021
** my_getnbr
** File description:
** get a number from a char*
*/

int check_digits(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

int my_getnbr(char const *str)
{
    int i = 0;
    int x = 0;
    int count = 0;

    while (str[i] != '\0' && (str[i] == '-' || str[i] == '+')) {
        if (str[i] == '-')
            count++;
        i++;
    }
    while (str[i] != '\0' && check_digits(str[i])) {
        x = str[i] - 48 + (x * 10);
        i++;
    }
    if ((count % 2) == 1)
        x = x * (-1);
    return (x);
}
