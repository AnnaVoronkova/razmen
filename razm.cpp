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
    a=0; //количество купюр, которое будем искать
    sort(Q, Q + nom);
     for(int i = 0; i < nom; i++){
            cout << Q[i] << " ";
    }
    for(int i = nom - 1; i >= 0; i--){
        b = Q[i];
        a += n / b; //считаем, сколько раз входит купюра в сумму
        n = n % b;  //сумме присваивается остаток от деления на данную купюру
 }
 if(n > 0){
        a = -1;//проверяем наличие остатка, который банкомат не сможет выдать
 }
     cout << a;
     return 0;
}
