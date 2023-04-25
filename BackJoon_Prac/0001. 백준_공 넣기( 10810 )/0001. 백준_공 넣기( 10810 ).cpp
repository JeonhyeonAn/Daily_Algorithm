// 0001. 백준_공 넣기( 10810 ).cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>

using namespace std;




int main()
{
    // 바구니 갯수
    int N = 0;
    // 실행 회수
    int M = 0;

    // N, M 입력
    cin >> N;
    cin >> M;

    // 바구니 벡터 선언 ( idx = 0~N-1  but, 입력 idx = 1 ~ N )
    vector<int> arr;
    // 벡터 초기값 입력
    for (int i = 0; i < N; i++)
    {
        arr.push_back(0);
    }

    //    for (auto i : arr)
    //        cout << arr[i] << endl;


    vector<int> temp(3);

    for (int i = 0; i < M; i++)
    {
        cin >> temp[0] >> temp[1] >> temp[2];

        for (int k = temp[0] - 1; k < temp[1] ; k++)
            arr[k] = temp[2];
    }


    // output
    
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";
    
    


}

