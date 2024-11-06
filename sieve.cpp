#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int NUM = 100;
    //?              1 2                
    //initialization
    int prime[NUM+1]={0};
    prime[0] = prime[1] = 1;
    // algorithm eratosthenes sieve
    for (int i = 2; i * i <= NUM; i++)
    {
    if(!prime[i]){
        for(int j = i*i; j <= NUM; j+=i){
            prime[j] = 1;
        }
    }
    
    }
    
    int k=0;
    while(k<NUM){
        if(!prime[k]){
        cout << k << " ";
        }
        k++;
    }
    cout << endl ;
    return 0;
}