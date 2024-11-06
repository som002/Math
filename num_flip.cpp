// ######### MULTIPLE DIGIT FLIPPING ###########
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int arr[5] = {13,12,37,43539,512};
    for(int i = 0; i < 5; i++){
        int len;
        len = log10(arr[i]); // 2
        int rev=0, temp=0, j=0, holder=0,rem =0;
        do{
            (!temp) ? holder = arr[i] : holder = temp; // 512 51 5
            rem = holder % 10; // 2 1 5
            temp = holder / 10; // 51 5 0
            rev += (rem*(pow(10,len-j))); // 200 + 10 + 5
            j++; // 0 1 2
        }while(temp);
        cout << rev << endl;
        
        //######## two digit flipping ############
        // for(int j = 0; j <len; j++){
        // holder = arr[i]; 
        // rem = holder % 10; 
        // holder = holder / 10; 
        // rev = rem*(pow(10,len-j)) + holder; 
        // cout << rev << endl;
        // }
    }
    return 0;
}