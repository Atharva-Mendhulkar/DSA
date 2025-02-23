#include <bits/stdc++.h>
using namespace std;

int sum_arr(int arr[], int n){
	int sum=0;
	for(int i=0; i<n;i++){
		sum+=arr[i];
	}
	return sum;
}

int sum_odd_arr(int arr[], int n){
	int odd=0;
	for(int i =0; i<n;i++){
		if(arr[i]%2==1){
			odd+=arr[i];
		}
	}
	return odd;
}

void reverse(int arr[], int n) {
    int arrr[n];
    int k = 0;

    for (int i = n - 1; i >= 0; i--) {
        arrr[k] = arr[i];
        k++;
    }

    // Printing the reversed array
    for (int i = 0; i < n; i++) {
        cout << arrr[i];
        if (i != n - 1) cout << ",";
    }
    cout << endl;
}

bool issorted(int arr[], int n) {
    bool sort = true;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            sort = false;
            break;
        }
    }
    return sort;
}

int main() {
    int n;
    cin >> n;  // Size of array
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (issorted(arr, n)) {
        cout << "Array is sorted in ascending order." << endl;
    } else {
        cout << "Array is NOT sorted in ascending order." << endl;
    }

    return 0;
}