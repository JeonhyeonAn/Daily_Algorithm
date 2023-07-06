// 0011. 백준_약수 구하기 (2501).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;


int main()
{

    int N, K, Result = 0;
    cin >> N >> K;

    int Count = 0;
    for (int i = 1; i < N; i++)
    {
        if (N % i == 0)
        {
            Count++;
            if (Count == K)
            {
                Result = i;
                break;
            }
        }
    }


    std::cout << Result;
}

