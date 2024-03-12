/*
** EPITECH PROJECT, 2020
** my_put_nbr
** File description:
** displays the number given as a parameter
*/

void my_putchar(char c);

int my_put_nbr(int nbr)
{
    int x = 1;

    if (nbr < 0) {
        nbr = nbr * -1;
        my_putchar('-');
    }
    while ((nbr / x) >= 10) {
        x *= 10;
    }
    while (x > 0) {
        my_putchar((nbr / x) % 10 + '0');
        x /= 10;
    }
    return 0;
}
