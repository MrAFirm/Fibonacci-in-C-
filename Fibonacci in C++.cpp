#include<iostream>
using namespace std;
class myClass {
public:
    int fibonacci(int x)
    {
    while ((x == 1) || (x == 0))
        return(x);
    while (x != '\0')
            return(fibonacci(x - 1) + fibonacci(x - 2));
    }
};
int main(void)
{
myClass myChicken;
    for (int i = 0; i < 10; i++)
        cout << myChicken.fibonacci(i) << "\n";
}