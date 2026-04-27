#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool allEven = true;

    while(n>0) {
        if((n%10)%2!=0) {
            allEven = false;
            break;
        }
        n/=10;
    }

    cout << (allEven ? "Yes" : "No");
}
