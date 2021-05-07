#include<iostream>
using namespace std;

int gcd(int a, int b) {
    if (a % b == 0) {
        return b;
    }
    else {
        return gcd(b, a % b);
    }
}

int main(void) {
    cout << gcd(78, 52);
    cout << (78 * 52) / gcd(78, 52); //LCM
}