//
//  main.cpp
//  maxVal
//
//  Created by 김진원 on 2022/07/11.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int num[9];
    int max = -1;
    int idx;
    
    for (int i = 0; i < 9; i++) {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < 9; i++) {
        if (num[i] > max) {
            max = num[i];
            idx = i + 1;
        }
    }
    
    cout << max << "\n" << idx << endl;
    
    return 0;
}
