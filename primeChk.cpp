#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int N = 82;
    int isPrime = true;

    if(N ==0 || N==1) isPrime = false;

    for(int i = 2;i<N;i++){
        if(N%i==0) {
            isPrime = false;
            cout<< i << ":" << N/i <<endl;
            break;
        }
            
    }

    cout<<"isPrime:" << isPrime <<endl;
    
    return 0;
}