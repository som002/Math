# include <iostream>
using namespace std;

int main() {
                   
    char str[] = "eeerrrwerr";
    //size
    cout << str - *(&str-1) << endl;
    int N = sizeof(str)/sizeof(str[0])-1;
    int k=0,m=0;
    int count[N]= {0};
    int hash[N] = {0};
    while(k<N){
        
        char temp = str[k] ;
        m=k+1;
        while(m<N){
            if(temp == str[m] && !hash[m]){
              count[k]++;  
              hash[m] = 1;
            }
            m++;
        }
        k++;
    }
    cout << endl;
    
    int t=0;
    while(t<N){
        if(!hash[t]) cout<<str[t] << ":" << count[t]+1 <<" @ "<< t << endl;
        t++;
    }
    
    return 0;
}