#include <iostream>
using namespace std;
int main() {
	int N, mn = 1001, mx = -1;
	cin >> N;
	int Arr[100];;
	for (int i = 0;i < N;i++) {
		cin >> Arr[i];
	}
	for (int i = 0;i < N;i++) {
		if (Arr[i] > mx) {
			mx = Arr[i];
		}
		else if (Arr[i] < mn) { mn = Arr[i]; }

	}
	cout << mn << ' ' << mx;
	return 0;
}