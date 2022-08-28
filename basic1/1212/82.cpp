#include <iostream>
#include <string>

using namespace std;

int main(void) {

	string oct;
	string two[8] = { "000", "001", "010", "011", "100", "101", "110", "111" };
	int temp;

	cin >> oct;

	for (int i = 0; i < oct.length(); i++) {

		temp = oct[i] - '0';
		if (i == 0) cout << stoi(two[temp]);
		else cout << two[temp];
	}
}