#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n, a, b, nom;
    cin >> nom >> n;
    int Q[nom];
    for(int i = 0; i < nom; i++){
            cin >> Q[i];
    }
    a=0; 
    sort(Q, Q + nom);
     
    for(int i = nom - 1; i >= 0; i--){
        b = Q[i];
        a += n / b; 
        n = n % b;  
 }
 if(n > 0){
        a = -1;
 }
     cout << a;
     return 0;
}
