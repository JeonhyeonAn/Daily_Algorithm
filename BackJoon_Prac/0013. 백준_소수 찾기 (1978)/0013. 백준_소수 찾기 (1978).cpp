// 0013. 백준_소수 찾기 (1978).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>

using namespace std;


int main()
{
	int N;
	vector<int> PrimeArr;
	int PrimeCount = 0;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int Num;
		cin >> Num;
		PrimeArr.push_back(Num);
	}

	for (int Element : PrimeArr)
	{
		if (Element == 0 || Element == 1)
			continue;

		bool IsPrime = true;
		for (int i = 2; i < Element; i++)
		{
			if (Element % i == 0)
			{
				IsPrime = false;
				break;
			}
		}

		if (IsPrime)
			PrimeCount++;
	}

	cout << PrimeCount << endl;

}

