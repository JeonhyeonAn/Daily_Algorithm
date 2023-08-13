// 0019. 백준_삼각형 외우기 (10101).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;


int main()
{
    while (true)
    {

    int A, B, C;

    cin >> A >> B >> C;

    if (A == 60 && B == 60 && C == 60 )
    {
        cout << "Equilateral" << endl;
        return 0;
    }

    if (A + B + C == 180)
    {
        if (A != B && A != C && B != C)
            cout << "Scalene" << endl;
        else
            cout << "Isosceles" << endl;
    }
    else
        cout << "Error" << endl;
    
	}

}

