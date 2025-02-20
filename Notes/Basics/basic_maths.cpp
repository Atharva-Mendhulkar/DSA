#include <bits/stdc++.h>
using namespace std;

int count_digits(int t){
	int count=0;
	if(t==0) return 1;

	while(t>0){
		t=t/10;
		count++;
	}
	return count;
}

int odd_digits(int t){
	int count =0;

	while(t>0){
		int k = t%10;
		if(k%2==1){
			count++;
		}
		t=t/10;
	}
	return count;	
}	

int reverse(int t){
	int q=0;

	while(t>0){
		q=q*10+t%10;
		t=t/10;
	}
	return q;
}

int pallindrome(int t){
	if(t==reverse(t)){
		return true;
	}
	else{
		return false;
	}
}

int max_digit(int t){
	int max=0;
	while(t>0){
		int k = t%10;
		if(k>=max){
			max=k;
		}
		t=t/10;
	}
	return max;
}

int factorial(int t){
	int fact=1;
	while(t>0){
		fact*=t;
		t--;
	}
	return fact;
}

int armstrong(int t){
	int arm=0;
	int k=t;
	while (t>0){
		arm+=pow(t%10,3);
		t=t/10;
	}
	if(arm==k){
		return true;
	}
	else{
		return false;
	}
}

int perfect(int t){
	int sum=0;
	for(int i=1;i<t;i++){
		if(t%i==0){
			sum+=i;
		}
	}
	if(sum==t){
		return true;
	}
	else{
		return false;
	}
}

bool isPrime(int t) {
    if (t < 2) return false; // 0 and 1 are not prime
    for (int i = 2; i <= sqrt(t); i++) {
        if (t % i == 0) {
            return false;
        }
    }
    return true;
}

void displayPrimes(int t) {
    for (int i = 2; i <= t; i++) {
        if (isPrime(i)) {
            cout << i << ",";
        }
    }
    cout << endl;
}

int gcd(int t, int q){
	int largest =1;
	int k = min(t,q);
	for(int i=2;i<=k;i++){
		if(t%i==0 && q%i==0){
			largest=i;
		}
	}
	return largest;

}

int main() {
    int t,q;
    cin >> t>> q;
    int ans = gcd(t,q);
    cout<<ans;
    return 0;
}
