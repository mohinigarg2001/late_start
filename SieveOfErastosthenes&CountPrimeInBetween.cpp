#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int soe(int n){
	int cnt = 0;
	
	// initially all numbers are prime
	vector<bool>prime(n+1, true);
	
    // o , 1 ko non prime mark kardo
	prime[0]= prime[1] = false;
	 
	// table wise sbko non prime mark krdo
	for(int i =2; i<n;i++){
		if(prime[i]){
			cnt ++;
			
		}
		for(int j =2*i;j<n;j=j+i){
			prime[j]= 0;
		}
	}
	return cnt;
}

int main(){
	int n ;
	cout<<"Enter any number"<<endl;
	cin>>n;
	cout<<"Count is: "<<soe(n)<<endl;
}
