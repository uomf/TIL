//
//  main.cpp
//  repeatChar
//
//  Created by 김진원 on 2022/07/11.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    char ch[20];
    int testNum;
    int repeatNum;
    
    cin >> testNum;
    
    for (int i = 0; i < testNum; i++) {
        scanf("%d %s", &repeatNum, ch);
        for (int k = 0; k < 20; k++) {
            if (ch[k] == '\0') {
                break;
            }
            for (int j = 0; j < repeatNum; j++) {
                cout << ch[k];
            }
        }
        cout << endl;
    }
    return 0;
}
