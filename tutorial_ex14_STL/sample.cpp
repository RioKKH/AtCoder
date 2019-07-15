#include <bits/stdc++.h>
using namespace std;

int sample1(void);
int sample2(void);

int sample1(void) {
	int a= 10, b = 5;

	int answer; 
	if (a < b) {
		answer = a;
	}
	else {
		answer = b;
	}

	cout << answer << endl;
}

int sample2(void) {
	int a = 10, b = 5;
	
	int answer = min(a, b); // min関数

	cout << answer << endl;
}

int main(void) {
	sample1();
	sample2();
}
