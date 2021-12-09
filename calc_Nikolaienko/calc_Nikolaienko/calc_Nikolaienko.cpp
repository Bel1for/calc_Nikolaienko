#include <iostream>
int funcUmn(int a,int b)
{
    return a * b;
}
int funcDel(int a, int b)
{
    return a / b;
}
int main()
{
    std::cout << funcUmn(2, 4)<<"\n";
    std::cout << funcDel(4, 2)<<"\n";
}
