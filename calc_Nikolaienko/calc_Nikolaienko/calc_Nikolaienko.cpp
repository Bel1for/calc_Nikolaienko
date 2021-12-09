#include <iostream>
#include <iostream>
int funcPluc(int a, int b)
{
    return a + b;
}
int funcMinus(int a, int b)
{
    return a - b;
}
int funcUmn(int a, int b)
{
    return a * b;
}
int funcDel(int a, int b)
{
    return a / b;
}
int funcBol (int a, int b)
{
    if (a > b)
        return a;
}
int funcMen(int a, int b)
{
    if (a < b)
        return b;
}
int funcDiv(int a, int b)
{
    if (b > 0)
        return a / b;
    else
        return 0;
}
int main()
{
    std::cout << funcPluc(18, 12)<<"\n";
    std::cout << funcMinus(18, 12) << "\n";
    std::cout << funcUmn(2, 4) << "\n";
    std::cout << funcDel(4, 2) << "\n";
    std::cout << funcBol(2, 4)<<"\n";
    std::cout << funcMen(4, 2)<<"\n";
    std::cout << funcDiv(4, 0) << "\n";
}
