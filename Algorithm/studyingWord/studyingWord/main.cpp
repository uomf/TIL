//
//  main.cpp
//  studyingWord
//
//  Created by 김진원 on 2022/07/05.
//

#include <iostream>

using namespace std;

int main() {
    char str[1000000];
    int arr[26];
    int max = -1;
    int tmp;
    
    cin >> str;
    
    for(int i = 0; i < 1000000; i++) {
        if (str[i] == '\0') {
            break;
        // A의 ASCII 코드는 65, Z의 ASCII 코드는 90
        } else if (str[i] >= 65 && str[i] <= 90) {
            // 0번 ~ 25번 인덱스에 A~Z의 출현 횟수를 저장
            arr[str[i] - 65] = arr[str[i] - 65] + 1;
        // a의 ASCII 코드는 97, z의 ASCII 코드는 122
        } else if (str[i] >= 97 && str[i] <= 122) {
            // 0번 ~ 25번 인덱스에 a~z의 출현 횟수를 저장
            arr[str[i] - 97] = arr[str[i] - 97] + 1;
        }
    }
    
    for(int i = 0; i < 26; i++) {
        if (arr[i] > max) {
            max = arr[i];
            tmp = i;
        }
    }
    for (int k = tmp + 1; k < 26; k++) {
        if (arr[k] == max) {
            cout << "?" << endl;
            return 0;
        }
    }
    
    cout << (char)(tmp+65) << endl;
    
    return 0;
}
