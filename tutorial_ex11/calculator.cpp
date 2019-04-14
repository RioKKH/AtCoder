#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	int N, A ,B;
	string ope;

	cin >> N >> A;
	for (int i=0; i<N; i++) {
		cin >> ope >> B;
		if (ope == "+") {
			A += B;
		} else if (ope == "-") {
			A -= B;
		} else if (ope == "*") {
			A *= B;
		} else if (ope == "/") {
			if (B == 0) {
				cout << "error" << endl;
				break;
			} else {
				A /= B;
			}
		} else {
			cout << "operetor must be one of followings." << endl;
			cout << "+, -, *, /" << endl;
			exit(1);
		}


		/*switch(ope) {
			case "+":
				A += B;
			case "-":
				A -= B;
			case "*":
				A *= B;
			case "/":
				if (B == 0) {
					cout << "error" << endl;
					exit(1);
				}
				A /= B;
			default:
				cout << "operetor must be one of followings." << endl;
				cout << "+, -, *, /" << endl;
				exit(1);
		}*/
		cout << i+1 << ":" << A << endl;
	}
	return 0;
}
		


