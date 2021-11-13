// d62_q3b_kheap_height : Height of K-Ary Heap
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long n;
    int k;
    cin >> n >> k;
    if (k-1 != 0){
       cout << floor((log(n)+log(k-1))/log(k));
    }
    else {
        cout << n-1; 
    }
}