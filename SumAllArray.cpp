#include<iostream>
using namespace std;

int sumArray(int arr[], int size){
	int sum =0;
	for(int  i=0;i <size;i++){
		cin>>arr[i];
		sum+=arr[i];
	}
	cout<<sum;
}

int main(){
	int n;
	cin>>n;
	int arr[1000];
	sumArray(arr, n);
}
