#include<iostream>
using namespace std;
int main(){
	int a;
	int b;
	cin>>a>>b;
	int ans =1;
	for(int i= 0;i<b;i++){
		ans = ans * a;
	}
	cout<<ans;
}
