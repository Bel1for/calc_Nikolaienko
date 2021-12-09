#include <iostream>
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
int main()
{
    std::cout << funcBol(2, 4)<<"\n";
    std::cout << funcMen(4, 2)<<"\n";
}
