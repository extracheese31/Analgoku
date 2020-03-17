/* 
Nama 		: Natasya Rizky Maharani
NPM			: 140810180004
Kelas		: B 
Deskripsi	: Worksheet 1 
*/ 

#include <iostream>
using namespace std;

#define N 10
int CariMaks(int x[]){
    int maks = x[0];
    for(int i = 1; i < N; i++){
        if(x[i] > maks)
            maks = x[i];
    }
    return maks;
}

int main(){
    int x[N] = {5,6,1000,9,7,15,40,6,10,300};
    cout << "Nilai maksimal adalah "<<CariMaks(x);
}

