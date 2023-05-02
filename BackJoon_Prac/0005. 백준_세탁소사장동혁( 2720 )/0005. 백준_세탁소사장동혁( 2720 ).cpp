// 0005. 백준_세탁소사장동혁( 2720 ).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>

using namespace std;



int main()
{
 

	int Exchange = 0;
	int Q = 25, D = 10, N = 5, P = 1;
	int Cycle = 0;

	cin >> Cycle;

	vector<int> ExchangeArr(Cycle);

	for (int i = 0; i < Cycle; i++)
	{
		cin >> ExchangeArr[i];
	}
	

	for (int value : ExchangeArr)
	{
		Exchange = value;

		cout << Exchange / Q << " ";
		Exchange = Exchange % Q;

		cout << Exchange / D << " ";
		Exchange = Exchange % D;

		cout << Exchange / N << " ";
		Exchange = Exchange % N;

		cout << Exchange / P << " ";
		Exchange = Exchange % P;

		cout << endl;
	}








}

