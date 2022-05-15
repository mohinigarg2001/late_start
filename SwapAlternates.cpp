#include<iostream>
using namespace std;

void printArray(int arr[], int size){
	for(int i =0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void swapAlterantes(int arr[], int size){
	for(int i= 0;i<size;i+=2){
		int temp =0;
		if(i+1<size){
			//swap(arr[i], arr[i+1]);
			temp = arr[i];
			arr[i]= arr[i+1];
			arr[i+1]=temp;
		}
	}
}
int main(){
	
	int even[6] = {2,4,13,54,23,27};
	int odd[7] = {4,22,7,34,5,32,76};
	
	swapAlterantes(even, 6);
	swapAlterantes(odd, 7);
	printArray(even , 6);
	printArray(odd , 7);
	
}
