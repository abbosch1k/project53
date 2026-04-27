#include <iostream>
using namespace std;

int main() {
    int a[5]={1,2,3,4,5};
    int x=3;

    for(int i=0;i<5;i++)
        if(a[i]==x)
            cout << i;
}
