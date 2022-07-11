//
//  main.cpp
//  summation
//
//  Created by 김진원 on 2022/07/11.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int num[100];
    char inp[100];
    int n;
    int sum = 0;
    
    cin >> n;
    scanf("%s", inp);
    
    for (int i = 0; i < n; i++) {
        if(inp[i] == '\0') break;
        num[i] = (int)(inp[i] - 48);
        sum = sum + num[i];
    }
    
    cout << sum << endl;
    
    return 0;
}
