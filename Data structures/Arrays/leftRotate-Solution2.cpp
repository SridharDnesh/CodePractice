#include <iostream>
using namespace std;

int main(){
	int n, d;
	cin>>n;
	cin>>d;
	int inputArray[n];
	for(int i = 0; i < n; i++){
		cin>>inputArray[(i+n-d)%n];
	}
	
	for(int i = 0; i < n; i++){
		cout<<inputArray[i]<<" ";
	}
}
