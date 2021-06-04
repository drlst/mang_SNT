#include "iostream"
#include "cmath"
using std::cout;
using std::cin;
bool isPrime(int n) {
    for (int i = 2; i < n; i++)
        if (n % i == 0) {
            // n chia hết cho số khác 1 và chính nó.
            return false;
        }
    return n > 1;
}
bool isPrime(int n) {
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;//ko la so ng to
    return n > 1;
}
int main() {
    int n;
    cin>>n;
    if(isPrime(n)==0)
        cout<<"khong la so ng to";
    else
        cout<<"la so ng to";
    return 0;
}
