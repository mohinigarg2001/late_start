#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter any number:"<<" ";
	cin>>n;
	int ans = 0;
	int i =0;
	while(n!=0){
		int digit = n&1;
		ans = ans+(digit*pow(10,i));
		n = n>>1;
		i++;
	}
	cout<<ans;
}
