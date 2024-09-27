using namespace std;
#include <iostream>


int main()
{
	










	//srand(time(NULL));
	//int size1, size2, commonSize;
	//cout << "Enter the size of the first array:" << endl;
	//cin >> size1;
	//cout << "Enter the siize of the second array: " << endl;
	//cin >> size2;
	//int* parr1 = new int[size1];
	//int* parr2 = new int[size2];

	//for (int i = 0; i < size1; i++)
	//{
	//	*(parr1 + i) = rand() % 100;
	//}
	//for (int i = 0; i < size2; i++)
	//{
	//	*(parr2 + i) = rand() % 100;
	//}


	//for (int i = 0; i < size1; i++)
	//{
	//	cout << *(parr1 + i) << " " << endl;
	//}
	//for (int i = 0; i < size2; i++)
	//{
	//	cout << *(parr2 + i) << " " << endl;
	//}

	//commonSize = size1 + size2;
	//int* pcommon = new int[commonSize];
	//for (int i = 0; i < size1; i++)
	//{
	//	*(pcommon + i) = *(parr1 + i);
	//}
	//for (int i = 0; i < commonSize; i++)
	//{
	//	*(pcommon + i) = *(parr2 + i - size1);
	//}
	//for (int i = 0; i < commonSize; i++)
	//{
	//	cout << *(pcommon + i) << " ";
	//}cout << endl;


	//delete[]parr1;
	//delete[]parr2;

	/*int size1, size2, commonSize = 0;
	cout << "Enter the size of the first array:" << endl;
	cin >> size1;
	cout << "Enter the size of the second array:" << endl;
	cin >> size2;

	int* parr1 = new int[size1];
	int* parr2 = new int[size2];

	for (int i = 0; i < size1; i++) {
		cin >> *(parr1 + i);
	}

	for (int i = 0; i < size2; i++) {
		cin >> *(parr2 + i);
	}

	cout << "First array: ";
	for (int i = 0; i < size1; i++) {
		cout << *(parr1 + i) << " ";
	}
	cout << endl;

	cout << "Second array: ";
	for (int i = 0; i < size2; i++) {
		cout << *(parr2 + i) << " ";
	}
	cout << endl;

	int* pcommon = new int[(size1 < size2) ? size1 : size2];

	for (int i = 0; i < size1; i++) {
	for (int j = 0; j < size2; j++) {
	if (*(parr1 + i) == *(parr2 + j)) {
	int k;
	for (k = 0; k < commonSize; k++) {
	if (*(pcommon + k) == *(parr1 + i)) {
	break;
	}
	  }
	if (k == commonSize) {
		*(pcommon + commonSize) = *(parr1 + i);
		commonSize++;
				}
			}
		}
	}

	cout << "Common elements without duplicates: ";
	for (int i = 0; i < commonSize; i++) {
		cout << *(pcommon + i) << " ";
	}
	cout << endl;

	delete[] parr1;
	delete[] parr2;
	delete[] pcommon;*/






}

