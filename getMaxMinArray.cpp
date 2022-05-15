#include<iostream>
using namespace std;

int getMax(int arr[], int size){
	int ans = INT_MIN;
	for(int i= 0;i<size;i++){
		ans = max(ans,arr[i]);
		
	}return ans;
}

int getMin(int arr[], int size){
	int ans = INT_MAX;
	for(int i= 0;i<size;i++){
		ans = min(ans,arr[i]);
		
	}return ans;
}

int main(){
	
	int arr[6]={2,34,54,34,53,5};
	cout<<"Maximum from array"<<getMax(arr,6)<<endl;
	cout<<"Minimum from array"<<getMin(arr,6);
	
}
