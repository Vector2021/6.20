#include <iostream>
#include<Stack>
#include<vector>
using namespace std;

//class solution {
	//void hanoi(vector<int>& A, vector<int>& B, vector<int>& C)
	//{
	//	int n = A.size();
	//	move(n, A, B, C);
	//}

	//void move(int n, vector<int>& A, vector<int>& B, vector<int>& C)
	//{
	//	if (n == 1) {
	//		C.push_back(A.back());
	//		A.pop_back();
	//	}
	//	else {
	//		move(n - 1, A, C, B);
	//		C.push_back(A.back());
	//		A.pop_back();
	//		move(n - 1, B, A, C);
	//	}
	//}
//};

void move(char A, char B)
{
	cout << A << "-->" << B << endl;
}

void hanoi(int n, char A, char B, char C)
{
	if (n == 1)
		move(A, B);
	else
	{
		hanoi(n - 1, A, B, C);
		move(A, B);
		hanoi(n - 1, C, A, B);
	}
}

int main()
{
	int m;
	cout << "Enter the number of A:";
	cin >> m;
	cout << "the steps to moving" << m << "A:" << endl;
	hanoi(m,'A','B','C');
	return 0;
}