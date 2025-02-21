#include <bits/stdc++.h>
using namespace std;

int sum_arr(int arr[], int n){
	int sum=0;
	for(int i=0; i<n;i++){
		sum+=arr[i];
	}
	return sum;
}

int main(){
	int n;
	cin>>n;
	int arr[n];

	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	int result=sum_arr(arr,n);
	cout<<result;
	return 0;
}	