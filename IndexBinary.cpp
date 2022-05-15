#include<iostream>
using namespace std;
int findIndex(int arr[], int n, int index ){
	int s = 0;
	int e = n-1;
	int mid = s+ (e-s)/2;
	while(s<=e){
		
		if(index == arr[mid]){
			return index;
		}
		else if(arr[mid]>index){
			e = mid-1;
		}
		else{
			s = mid+1;
		}
		mid = s +(e-s)/2;
	}
	return -1;
}
int main(){
	int arr[]= {-10,-5, 0, 3 ,7};
	cout<<findIndex(arr, 5,index );
}
