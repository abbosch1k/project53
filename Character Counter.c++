#include <iostream>
using namespace std;

int main() {
    string s;
    char c;
    cin >> s >> c;

    int count=0;

    for(char ch:s)
        if(ch==c) count++;

    cout << count;
}
