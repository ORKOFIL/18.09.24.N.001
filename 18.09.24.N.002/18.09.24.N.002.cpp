#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	const int length(9);
	int array[length] = { 7, 5, 6, 4, 9, 8, 2, 1, 3 };
	for (int first = 0; first < length; first++) {
		for (int second = first + 1; second < length; second++) {
			if (array[first] < array[second]) {
				swap(array[first], array[second]);
			}
		}
	}
	for (int index = 0; index < length; index++) {
		cout << array[index];
	}
}
