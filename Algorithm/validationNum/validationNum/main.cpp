//
//  main.cpp
//  validationNum
//
//  Created by 김진원 on 2022/07/11.
//

#include <iostream>

using namespace std;

int main() {
    int num[5];
    int sum = 0;
    int valNum;
    
    for (int i = 0; i < 5; i++) {
        cin >> num[i];
    }
    
    for (int k = 0; k < 5; k++) {
        sum = sum + num[k] * num[k];
    }
    
    valNum = sum % 10;
    
    cout << valNum << endl;
    
    return 0;
}
