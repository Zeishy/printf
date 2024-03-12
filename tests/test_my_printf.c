/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-cedric.hoarau-de-boisvilliers
** File description:
** test_my_printf.c
*/

# include <criterion/criterion.h>
# include <criterion/redirect.h>
# include "../my.h"
#include "../ps.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(main, simple_string, .init = redirect_all_std)
{
    my_printf("%s", "hello world");
    cr_assert_stdout_eq_str("hello world");
}

Test(main, simple_int, .init = redirect_all_std)
{
    my_printf("%d", 12);
    cr_assert(12);
}

Test(main, simple_negative_int, .init = redirect_all_std)
{
    my_printf("%d", -12);
    cr_assert(-12);
}

Test(main, simple_int_with_iflag, .init = redirect_all_std)
{
    my_printf("%i", 12);
    cr_assert(12);
}

Test(main, simple_char, .init = redirect_all_std)
{
    my_printf("%c", 'a');
    cr_assert('a');
}

Test(main, octalflag, .init = redirect_all_std)
{
    my_printf("%o", 112);
    cr_assert(160);
}

Test(main, hexaflag, .init = redirect_all_std)
{
    my_printf("%x", 112);
    cr_assert(70);
}

Test(main, hexaflag_with_X, .init = redirect_all_std)
{
    my_printf("%X", 112);
    cr_assert(70);
}

Test(main, binaryflag, .init = redirect_all_std)
{
    my_printf("%b", 112);
    cr_assert(1110000);
}

Test(main, binaryflag2, .init = redirect_all_std)
{
    my_printf("%b", 1);
    cr_assert(1);
}

Test(main, binaryflag3, .init = redirect_all_std)
{
    my_printf("%b", 3);
    cr_assert(11);
}

Test(main, sflag, .init = redirect_all_std)
{
    my_printf("%S", "Hello\t");
    cr_assert("Hello\011");
}

Test(main, sflag2, .init = redirect_all_std)
{
    my_printf("%S", "\t\32 !z \142\127");
    cr_assert("\011\040 !z \216\177");
}

Test(main, uflag, .init = redirect_all_std)
{
    my_printf("%u", 64535);
    cr_assert_stdout_eq_str("64535");
}

Test(main, consecutive_modulo, .init = redirect_all_std)
{
    my_printf("%%%%d", 12);
    cr_assert_stdout_eq_str("%%d");
}

Test(main, consecutive_modulo_2, .init = redirect_all_std)
{
    my_printf("%%%%%d", 12);
    cr_assert_stdout_eq_str("%%12");
}

Test(check_format, consecutive_modulo3, .init = redirect_all_std)
{
    int i = check_format("%%", 1);
    cr_assert(1);
}

Test(main, consecutive_modulo4, .init = redirect_all_std)
{
    my_printf("%%coucou");
    cr_assert_stdout_eq_str("%coucou");
}

Test (my_printf, test_for_modulo, .init = redirect_all_std)
{
    my_printf("%d%%s", 12, "hello world");
    cr_assert_stdout_eq_str("12%s");
}

Test(main, main_test)
{
    my_printf("d", 12);
    cr_assert("");
}

Test (my_intlen, simple_test)
{
    int i = my_intlen(2);
    cr_assert_eq(i, 1);
}

Test (my_intlen, simple_test2)
{
    int i = my_intlen(5);
    cr_assert_eq(i, 1);
}

Test (my_intlen, simple_test3)
{
    int i = my_intlen(15);
    cr_assert_eq(i, 2);
}

Test (check_digits, simple_test2)
{
    char c = '0';
    check_digits(c);
    cr_assert(1);
}

Test (check_digits, simple_test3)
{
    char c = '4';
    check_digits(c);
    cr_assert(1);
}


Test (check_digits, simple_test4)
{
    char c = '9';
    check_digits(c);
    cr_assert(1);
}

Test (check_digits, simple_test5)
{
    char c = 'Z';
    int i = check_digits(c);
    cr_assert_eq(i, 0);
}

Test (check_digits, simple_test6)
{
    char c = '!';
    int i = check_digits(c);
    cr_assert_eq(i, 0);
}

Test (my_getnbr, test_for_negnb)
{
    my_getnbr("-42");
    cr_assert(-42);
}

Test (my_getnbr, simple_test)
{
    my_getnbr("+42");
    cr_assert(42);
}

Test (my_getnbr, simple_test2)
{
    my_getnbr("42e");
    cr_assert(42);
}

Test (my_getnbr, simple_test3)
{
    my_getnbr("--42");
    cr_assert(42);
}

Test (my_getnbr, simple_test4)
{
    my_getnbr("-+-42e");
    cr_assert(42);
}
