#include <iostream>
using namespace std;

int main() {
    int a=5,b=10;

    int t=a;
    a=b;
    b=t;

    cout << a << " " << b;
}
