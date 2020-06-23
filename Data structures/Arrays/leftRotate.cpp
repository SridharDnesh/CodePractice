#include <iostream>
#include <time.h>
using namespace std;

void printArray(int inputArray[], int n){
	//Printing the array
	for(int i = 0; i < n; i++)
		cout<<inputArray[i]<<" ";
}

int main(){
	clock_t tStart = clock();
	int n,d;
	cin>>n;
	cin>>d;
	int inputArray[n], tempArray[d];
	
	//Get the array input
	for(int i = 0; i < n; i++){
		cin>>inputArray[i];
	}
	if(n == 1){
		printArray(inputArray, n);
	}else if(d<n) {
	cout<<"Before the rotation";
	printArray(inputArray, n);
	
	//Store the d elements in temp array
	for(int i = 0; i < d; i++){
		tempArray[i] = inputArray[i];
	}
	
	//Swap the other elements to the front
	for(int i = d; i < n; i++){
		inputArray[i-d] = inputArray[i];
	}
	
	//Now store the elements from temp array to inputArray
	for(int i = n-d, j = 0; i < n && j < d; i++, j++){
		inputArray[i] = tempArray[j];
	}
	
	cout<<"After the rotation";
	printArray(inputArray, n);
	} else {
		cout<<"D is large";
	}
	cout<<endl;
	printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
}




