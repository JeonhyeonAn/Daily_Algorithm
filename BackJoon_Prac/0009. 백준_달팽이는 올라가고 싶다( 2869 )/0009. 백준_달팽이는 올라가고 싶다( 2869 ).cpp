// 0009. 백준_달팽이는 올라가고 싶다( 2869 ).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;


int main()
{
	int A, B, V;

	cin >> A >> B >> V;

	int Day = 1;

	Day += (V - A) / (A - B);

	if ((V - A) % (A - B) != 0)
		Day += 1;
	
	cout << Day;
}

