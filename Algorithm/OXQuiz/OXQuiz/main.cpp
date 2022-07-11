//
//  main.cpp
//  OXQuiz
//
//  Created by 김진원 on 2022/07/11.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    char check[80];
    int score = 0;
    int stack = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        scanf("%s", check);
        for (int j = 0; j < 80; j++) {
            if (check[j] == '\0') break;
            if (check[j] == 'O') {
                stack++;
                score = score + stack;
            } else if (check[j] == 'X') {
                stack = 0;
            }
        }
        cout << score << endl;
        // 문자열 배열 비우기
        check[0] = '\0';
        score = 0;
        stack = 0;
    }
    return 0;
}
