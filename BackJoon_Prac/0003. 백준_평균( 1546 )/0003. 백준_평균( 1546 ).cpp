// 0003. 백준_평균( 1546 ).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0;
    int M = 0;

    cin >> N;

    vector<int> arr(N);

    for (int i = 0; i < N; i++)
    {
        int value;
        cin >> value;

        arr[i] = value;

        if (value >= M)
            M = value;
    }

    float sum = 0;
    for (int i : arr)
    {
        sum += i / M * 100;
    }

    float NN = N;
    
    float everage = sum / N;

    cout << everage;


}

