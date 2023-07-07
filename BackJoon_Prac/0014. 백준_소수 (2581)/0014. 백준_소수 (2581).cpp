// 0014. 백준_소수 (2581).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using std::cin;
using std::cout;

int main()
{
	int M, N;
	int Sum = 0;
	int Min = 0;

	cin >> M >> N;

	for (int i = M; i <= N; i++)
	{
		if (i == 0 || i == 1)
			continue;

		bool IsPrime = true;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				IsPrime = false;
				break;
			}
		}

		if (IsPrime)
		{
			Sum += i;

			if (Min == 0)
				Min = i;
		}

	}

	if (Sum == 0)
	{
		cout << "-1";
	}
	else
	{
		cout << Sum << std::endl;
		cout << Min << std::endl;
	}

}
