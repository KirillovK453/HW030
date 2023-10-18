#include <iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	int Arr[100];
	for (int i = 0;i < N;i++) {
		cin >> Arr[i];
	}
	for (int i = 1;i <= N;i++) {
		cout << Arr[N - i] << ' ';
	}
	return 0;
}