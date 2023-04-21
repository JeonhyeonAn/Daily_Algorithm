// BackJoon_Prac.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>

using namespace std;



int main()
{
	vector<int> arr;
	int n;
	cin >> n;

	int x;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		arr.push_back(x);
	}

	int value;
	cin >> value;

	int count = 0;
	for (auto it : arr)
	{
		if (it == value)
			count++;
	}

	cout << count;

}