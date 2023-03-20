#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("create.txt","w",stdout);
    const int N = 500000; // Số phần tử của mảng
    float arr[N]; // Khai báo mảng các số thực
    srand(time(0)); // Khởi tạo bộ sinh số ngẫu nhiên
    for (int i = 0; i < N; i++)
    {
        arr[i] = rand() / (float) RAND_MAX + rand(); // Sinh số thực ngẫu nhiên trong đoạn [0, 1] và lưu vào mảng
    }
    sort(arr,arr+N);

    // In ra các phần tử của mảng
    for (int i = N-1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }


    return 0;
}
