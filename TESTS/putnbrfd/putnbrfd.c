#include "libft.h"

int main()
{
    ft_putnbr_fd(0, 1);
    ft_putchar_fd('\n', 1);
    ft_putnbr_fd(42, 1);
    ft_putchar_fd('\n', 1);
    ft_putnbr_fd(-42, 1);
    ft_putchar_fd('\n', 1);
    ft_putnbr_fd(2147483647, 1);
    ft_putchar_fd('\n', 1);
    ft_putnbr_fd(-2147483648, 1);
    ft_putchar_fd('\n', 1);
    ft_putnbr_fd(4242, 2);
    ft_putchar_fd('\n', 2);
}
