#include<iostream>
using namespace std;

void func(int arr[], int n){
	int j;
	for(int i=0;i<n;i++){
		if(arr[j]==0 && arr[i]!=0){
			swap(arr[i],arr[j]);
		}
		if(arr[j]!=0){
			j+=1;
		}
	}
}

int main(){
	int arr[]={8,6,0,1,3,0,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Original Array : ";	
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
	func(arr,n);
	cout<<"\nFinal Array : ";
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
	return 0;

}