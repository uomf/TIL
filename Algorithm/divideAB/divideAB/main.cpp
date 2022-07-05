//
//  main.cpp
//  divideAB
//
//  Created by 김진원 on 2022/07/06.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int a, b;
    cin >> a >> b;
    // 9자리만 출력하게끔 설정
    cout.precision(9);
    // 소수점만 9자리로 나오게끔 설정
    cout << fixed;
    cout << (double)a/b << endl;
    return 0;
}
