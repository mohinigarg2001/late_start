// time complexity is O(log m +log n )

#include<iostream>
using namespace std;

bool colSearch(int arr[][3], int n , int m , int row, int target){
	int s = 0;
	int e = m-1;
	int mid = s+(e-s)/2;
	while(s<=e){
		if(arr[row][mid]==target){
			cout<<row<<" "<< mid<<endl;
			return true;
		}
		// right side
		if(arr[row][mid]<target){
			s = mid+1;
			
		}
		
		// left side
		else{
			e = mid-1;
		}
		mid = s+(e-s)/2;
	}
	return false;
}
bool search(int arr[][3], int n , int m , int target){
	// find row 
	int  s= 0;
	int  e =n -1;
	int  mid = s+(e-s)/2;
	 
	 while(s<=e){
	 	
	 	// check starting element of mid row
	    if(arr[mid][0]== target){
	 		cout<<mid<<" "<<0<<endl;
	 		return true;
		 }
		 
		 // check ending element of mid row
		if(arr[mid][m-1]== target){
			cout<<mid<<" "<<m-1<<endl;
		}
		
		// in between of mid row
		if(target>arr[mid][0] && target<arr[mid][m-1]){
			
			// then apply binary search on column
			bool ans = colSearch(arr, n, m,mid , target);
			return ans;
		}
		
		// check lower part
		if(arr[mid][m-1]< target){
			s = mid+1;
		}
		// upper part
		else{
			e = mid -1;
		}
		mid = s+(e-s)/2;
		
	 }
	 return false;
	 
}

int main(){
	int arr[3][3]={1,5,9,14,20,23,30,34, 43};
	int n = 3;
	int m= 3;
	int target= 3;
	cout<<search(arr, n ,m , target)<<endl;
}
