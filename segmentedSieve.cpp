#include<iostream>
#include <vector>
#include <cmath>
using namespace std;
vector <long long> prime;
void segSieve(int l, int h){
    long long sq = sqrt(h);
    sieve(sq);
    vector<bool> isPrime(h-l+1, true);
    for(long long p: prime){
        long long sm = (l/p)*p;
        if(sm<l){
            sm+ = p;
        }
    }

}
int main(){}