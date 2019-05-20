#include <iostream>
using namespace std;

int main(){
	short int n;
	cin >> n;
	int *arr = new int[n];
	for(short int i=0; i<n; i++){
		cin >> arr[i];
		if(arr[i] > 0)
			arr[i] = 1;
		else if(arr[i] < 0)
			arr[i] = 2;
	}
	for(short int i=0; i<n; i++)
		cout<<arr[i]<<" ";
	delete[] arr;
	return 0;
}
	
