#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	const int length(9);
	int array[length] = { 7, 5, 6, 4, 9, 8, 2, 1, 3 };
	int leng = length;
	int swapcount = 0;
	int count = 1;
	int intercount = 0;
	for (int first = 0; first < length; first++) {
		int swaps = swapcount;
		for (int second = 0; second < length-count; second++) {
			if (array[second] > array[second + 1]) {
				swap(array[second], array[second + 1]);
				swapcount++;
			}
		}
		intercount++;
		count++;
		if (swapcount == swaps) {
			break;
		}
	}
	cout << "total swaps: " << swapcount << endl;
	cout << "total interations: " << intercount << endl;
	for (int index = 0; index < length; index++) {
		cout << array[index] << " ";
	}
	cout << endl;
}
