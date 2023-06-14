// 0010. 백준_약수와 배수( 5086 ).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int main()
{
	// factor
	// multiple
	// neither


	int A, B;

	while (true)
	{

		cin >> A >> B;

		if (A == 0 && B == 0)
			break;

		if (A % B == 0)
			cout << "multiple" << endl;
		if (B % A == 0)
			cout << "factor" << endl;
		else 
			cout << "neither" << endl;

	}

}

