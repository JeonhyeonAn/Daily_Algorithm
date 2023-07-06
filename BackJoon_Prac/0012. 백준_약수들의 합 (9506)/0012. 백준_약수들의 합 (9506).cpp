// 0012. 백준_약수들의 합 (9506).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	while (true)
	{
		int N;
		cin >> N;
		if (N == -1)
			break;

		vector<int> Arr;
		int Sum = 0;
		for (int i = 1; i < N; i++)
		{
			if (N % i == 0)
			{
				Arr.push_back(i);
				Sum += i;
// 				if (Sum > N)
// 				{
// 					cout << N << " is NOT perfect." << endl;
// 					break;
// 				}
			}
		}

		if (Sum == N)
		{
			cout << N << " = ";
			cout << 1;
			for (int i = 1; i < Arr.size(); i++)
			{
				cout << " + " << Arr[i];
			}
			cout << endl;
		}
		else
			cout << N << " is NOT perfect." << endl;

	}
}
