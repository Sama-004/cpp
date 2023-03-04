#include <iostream>
using namespace std;


int number(){
    cout << "Enter an integer\t";
    int num{};
    cin >> num;
    return num;
}


int main (){
    int x{number()};
    int y{number()};
    cout << x << "+" << y << "=" << x+y << '\n';

    return 0;
}