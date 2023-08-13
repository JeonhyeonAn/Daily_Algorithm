// 0018. 백준_대지.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>

using namespace std;


int main()
{
	int N;
	cin >> N;
	
	//vector<unsigned int> Arr;
	int Xmax, Xmin, Ymax, Ymin;
	bool bDoOnce = false;

	for (int i = 0; i < N; i++)
	{
		if (N <= 1)
		{
			cout << "0";
			return 0;
		}

		int TempX, TempY;
		cin >> TempX >> TempY;

		if (!bDoOnce)
		{
			Xmax = TempX;
			Xmin = TempX;
			Ymax = TempY;
			Ymin = TempY;

			bDoOnce = true;
		}

		if (TempX > Xmax)
			Xmax = TempX;
		else if (TempX < Xmin)
			Xmin = TempX;

		if (TempY > Ymax)
			Ymax = TempY;
		else if (TempY < Ymin)
			Ymin = TempY;
	}

	auto Result = (Xmax - Xmin) * (Ymax - Ymin);
	cout << Result;
}
