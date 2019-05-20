#include <iostream>
using namespace std;

int main(){
	short int n, min;
	cin >> n;
	int *arr = new int[n];
	
	for(short int i=0; i<n; i++){
		cin >> arr[i];
		if(i==0)
			min = 0;
		else if(arr[min] > arr[i])
			min = i; 
	}
	cout<<arr[min]<<" "<<min+1;
	delete[] arr;
	return 0;
}
		
	
