#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    if(n>=1 && n<=9)
    {
        if(n==1)
        {
            std::cout << "one" << endl;
        }
        else if(n == 2)
        {
            std::cout << "two" << endl;
        }
        else if(n == 3)
        {
            std::cout << "three" << endl;
        }
        else if(n == 4)
        {
            std::cout << "four" << endl;
        }
        else if(n == 5)
        {
            std::cout << "five" << endl;
        }   
        else if(n == 6)
        {
            std::cout << "six" << endl;
        }
        else if(n == 7)
        {
            std::cout << "seven" << endl;
        }
        else if(n == 8)
        {
            std::cout << "eight" << endl;
        }
        else if(n == 9)
        {
            std::cout << "nine" << endl;
        }
    }
    else
    {
        std::cout << "Greater than 9" << endl;
    }
    
    return 0;
}
