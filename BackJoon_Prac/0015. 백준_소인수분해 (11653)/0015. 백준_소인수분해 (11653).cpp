// 0015. 백준_소인수분해 (11653).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int main()
{
	int N;

	cin >> N;

	while (N != 1) 
	{
		for (int i = 2; i <= N; i++)
		{
			if (N % i == 0)
			{
				N /= i;
				cout << i << endl;
				break;
			}
		}

	}
}

