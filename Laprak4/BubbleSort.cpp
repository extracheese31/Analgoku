/* 
Nama 		: Natasya Rizky Maharani 
NPM 		: 140810180004
Kelas		: B 
Deskripsi	: Program ini menampilkan program Bubblesort
*/ 

#include <iostream>

using namespace std;


int main(){
	int arr[100],n,temp;
	cout << "\n================================================"<<endl;
	cout<<"Input Element : ";cin>>n;
	cout << "\n------------------------------------------------" << endl;
	
	for(int i=0;i<n;++i){
		cout<<"Input Element ke-"<<i+1<<" : ";cin>>arr[i];
	}
	
	for(int i=1;i<n;i++){
		for(int j=0;j<(n-1);j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout << "------------------------------------------------" << endl;
	cout<<"\nBubble Sort : "<<endl;
	for(int i=0;i<n;i++){
		cout<<" "<<arr[i];
	}
	cout << "\n================================================"<<endl;
}
