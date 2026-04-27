#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while(n>0) {
        if(n%10!=0) {
            cout<<n%10;
            break;
        }
        n/=10;
    }
}
