// 0016. 백준_네 번째 점 (3009).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	vector<int> X;
	vector<int> Y;


	for (int i = 0; i < 3; i++)
	{
		int x, y;
		cin >> x >> y;

		X.push_back(x);
		Y.push_back(y);

	}


	int x4 = 0, y4 = 0;

	for ( int i = 1; i < 3; i++)
	{ 
		if (X.size() == 1)
			break;
	

		if (X[0] == X[i])
			X.erase(remove(X.begin(), X.end(), X[0]), X.end());
	}
	x4 = X[0];

	for (int i = 1; i < 3; i++)
	{
		if (Y.size() == 1)
			break;

		if (Y[0] == Y[i])
			Y.erase(remove(Y.begin(), Y.end(), Y[0]), Y.end());
	}
	y4 = Y[0];

	cout << x4 << " " << y4;


}

