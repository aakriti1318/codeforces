//https://codeforces.com/problemset/problem/271/A
//Beautiful Year 271A

#include <bits/stdc++.h> 
using namespace std; 
int countDistinct(int n) 
{ 
	int arr[10] = { 0 }; 
	int count = 0; 
	while (n) { 
		int r = n % 10; 
		arr[r] = 1; 
		n /= 10; 
	}  
	for (int i = 0; i < 10; i++) { 
		if (arr[i]) 
			count++; 
	} 
	return count; 
} 
int countDigit(int n) 
{ 
	int c = 0; 
	while (n) { 
		int r = n % 10; 
		c++; 
		n /= 10; 
	} 
	return c; 
} 

int nextNumberDistinctDigit(int n) 
{ 
	while (n < INT_MAX) { 
		int distinct_digits = countDistinct(n + 1); 
		int total_digits = countDigit(n + 1); 

		if (distinct_digits == total_digits) { 
			return n + 1; 
		} 

		else
			n++; 
	} 
	return -1; 
} 
int main() { 
	int n;
    cin>>n;
	cout << nextNumberDistinctDigit(n); 
	return 0; 
} 
