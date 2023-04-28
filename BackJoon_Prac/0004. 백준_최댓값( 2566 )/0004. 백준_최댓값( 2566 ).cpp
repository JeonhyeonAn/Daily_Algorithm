// 0004. 백준_최댓값( 2566 ).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;


int main()
{
	// 9 X 9 

	// 최댓값

	// max 좌표값
	

	int max = 0;

	int N = 0;
	int M = 0;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			int temp;
			cin >> temp;

			if (temp >= max)
			{
				max = temp;
				N = i + 1;
				M = j + 1;
			}
		}
	}




	cout << max << endl;
	cout << N << " " << M;








}

