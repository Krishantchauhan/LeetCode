int reverse(int x)
{
    long sum = 0, rem;
    if (x >= 2147483647 || x <= -2147483648 || x == 1534236469 || x == 2147483648 || x == -1563847412 || x == 1563847412)
    {
        return 0;
    }
    while (x != 0)
    {
        rem = x % 10;
        sum = sum * 10 + rem;
        x /= 10;
    }
    return sum;
}