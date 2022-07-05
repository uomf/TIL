//
//  main.cpp
//  numberOfWords
//
//  Created by 김진원 on 2022/07/05.
//

#include <iostream>

using namespace std;

int main() {
    char str[1000000];
    // 배열은 주소를 담고있는 값을 갖기 때문에, &을 쓰지 않음
    // 공백까지 입력을 받아야 하기 때문에 서식지정자로 "%[^\n]s" 사용
    scanf("%[^\n]s", str);
    int cnt = 0;
    int strLen = 0;
    for (int i = 0; i < 1000000; i++) {
        if (str[i] == '\0') break;
        else if (str[i] == ' ') cnt++;
        strLen++;
    }
    if (str[0] == ' ') cnt = cnt - 1;
    if (str[strLen - 1] == ' ') cnt = cnt - 1;
    cout << cnt + 1 << endl;
    return 0;
}
