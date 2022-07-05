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
    char tmp;
    
    scanf("%s", str);
    
    for (int i = 0; i < 1000000; i++) {
        if (str[i] == '\0') break;
        if (str[i] >= 65 && str[i] <= 97) {
            arr[i + 65 - str[i]] = arr[i + 65 - str[i]] + 1;
        }
    }
    
    for (int i = 0; i < 26; i++) {
        tmp = arr[i];
        if (tmp > arr[i+1]) {
            
        }
    }
    
    return 0;
}
