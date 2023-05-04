// 0006. 백준_중앙 이동 알고리즘 ( 2903 ).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int main()
{

	while (true)
	{
		int N = 0;

		cin >> N;

		int l = 3;

		for (int i = 1; i < N; i++)
		{
			l = l * 2 - 1; 
		}

		int count = l * l;

		cout << count << endl;;

	}
}

