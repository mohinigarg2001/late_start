#include<iostream>
using namespace std;


void printArray(int arr[], int n){
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
}


void reverseArray(int arr[], int size){
	int start =0;
	int end = size-1;
	while(start<=end){
	
		swap(arr[start],arr[end]) ;
		start ++;
		end --;
		
	}
}
int main(){

	int arr[6]={1,3,13,6,23,12};
	reverseArray(arr, 6);
	printArray(arr,6);
	
}
