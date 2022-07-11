//
//  main.cpp
//  star-1
//
//  Created by 김진원 on 2022/07/11.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        for (int j = n-1-i; j > 0; j --) {
            printf(" ");
        }
        for (int k = 0; k < i + 1; k ++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
