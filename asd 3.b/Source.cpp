#include <iostream>
#include <time.h>
using namespace std;
void rev(int* arr, int n) {
	for (int i = 0,j=n/2-1;i < j;i++,j--) {
			int tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
	
	}
	for (int i = n/2,j=n-1;i <j;i++,j--) {
			int tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
		
	}
	
}
int main() {
	int* a;
	int x, n;
	srand(time(NULL));
	cout << "Enter the size of the array: " << endl;
	cin >> n;
	if (n % 2 == 0) {
		a = new int[n];
		for (int j = 0;j < n;j++) {
			x = rand() % 50;
			a[j] = x;
		}
		cout << "Array: " << endl;
		for (int j = 0; j < n;j++)
		{
			cout << "arr[" << j << "]= " << a[j] << endl;
		}
		cout << endl;
		cout << "Reverse array: " << endl;
		rev(a, n);
		for (int j = 0; j < n;j++)
		{
			cout << "arr[" << j << "]= " << a[j] << endl;
		}
		cout << endl;
		delete[] a;
	}
	else cout << "Size array not even!!!" << endl;
	system("pause");
	return 0;
}