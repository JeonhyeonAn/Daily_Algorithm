// 0007. 백준_벌집.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	int Num = 0;

	std::cin >> Num;

	if (Num == 1)
	{
		std::cout << Num;
		return 0;
	}
	else if (Num <= 0)
		return 0;
	else
	{
		bool stop = false;

		int Min = 2;
		int Max = 7;
		int N = 1;

		while (!stop)
		{
			if (Num >= Min && Num <= Max)
				stop = true;

			Min += 6 * N;
			N++;
			Max += 6 * N;
		}

		std::cout << N;


		return 0;
	}

	return 0;
}

