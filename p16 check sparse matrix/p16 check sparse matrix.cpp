#include <iostream>
#include <iomanip>
using namespace std;


int RandomNubers(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

void fill3X3MatrixWithRandomNumbers(int arr[3][3], int Rows, int Colos)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
		{
			arr[i][x] = RandomNubers(0, 1);
		}
	}
}

void printMatrix3X3(int arr[3][3], int Rows, int Colos)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
		{
			cout << setw(3) << arr[i][x] << "	";
			//printf("  %d ", arr[i][x]);
		}
		cout << endl;
	}
	cout << endl;
}

int countNumberInMatrix(int arr[3][3], int Rows, int Colos, int num)
{
	int counter = 0;
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
		{
			if (arr[i][x]==num)
				counter++;
		}
	}
	return counter;
}

void printResult(int arr1[3][3], int Rows, int Colos, int num)
{
	if(countNumberInMatrix(arr1, Rows, Colos, num)>((Rows*Colos)/2))
		cout << "   Yes the matrix is a sparse matrix\n";
	else
		cout << "   No the matrix is not a sparse matrix\n";
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3], num;

	//int arr[3][3] = { {2,0,0},{0, 2, 0},{0, 0, 2} };
	fill3X3MatrixWithRandomNumbers(arr, 3, 3);

	cout << "  The Matrix: \n";
	printMatrix3X3(arr, 3, 3);


	printResult(arr, 3, 3, 0);





	return 0;
}



