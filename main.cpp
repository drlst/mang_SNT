#include "iostream"
#include "cmath"
using std::cout;
using std::cin;

/*bool isPrime(int n) {
    for (int i = 2; i < n; i++)
        if (n % i == 0) {
            // n chia hết cho số khác 1 và chính nó.
            return false;
        }
    return n > 1;
}*/
bool isPrime1(int n) {
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;//ko la so ng to
    return n > 1;
}

void sieve(int N) {
    bool isPrime[N+1];
    for(int i = 0; i <= N;++i) {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i * i <= N; ++i) {
        if(isPrime[i] == true) {
            // Mark all the multiples of i as composite numbers
            for(int j = i * i; j <= N; j += i)
                isPrime[j] = false;
        }
    }
    for (int i = 1; i <=N ; ++i) {
        if(isPrime[i]){
            cout<<"\n"<<i<<"la so ngto";
        }
    }
}

int main() {
    int n;
    cin>>n;
    sieve(n);
    return 0;
}
