#include <bits/stdc++.h>
using namespace std;

void buildmatrix(short int arr[],short int r,short int c){
	
	for(short int i=0; i<r; i++){
        for(short int j=0; j<c; j++){
            cin >> arr[i*c + j];
		}
	}
	return;
}

void display(short int arr1[],short int arr2[],short int r,short int c){
	for(short int i=0; i<r; i++){
        for(short int j=0; j<c; j++)
            cout << arr1[i*c + j] + arr2[i*c + j]<< " ";
		cout << endl;
	}
	cout << endl;
	return;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	short int r, c;
	cin >> r >> c;
	
	short int *arr1 = new short int[c*r];
	short int *arr2 = new short int[c*r];

	buildmatrix(arr1, r, c);
	buildmatrix(arr2, r, c);
	display(arr1, arr2, r, c);
	
	delete[] arr1;
	delete[] arr2;
	
	return 0;
}
	
	
