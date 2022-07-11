//
//  main.cpp
//  scale
//
//  Created by 김진원 on 2022/07/11.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int inp[8];
    int ascending[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int descending[8] = {8, 7, 6, 5, 4, 3, 2, 1};
    int cnt = 0;
    
    for(int i = 0; i < 7; i++) {
        cin >> inp[i];
    }
    
    for (int i = 0; i < 7; i++) {
        if(inp[i] == ascending[i]) {
            cnt++;
        }
        if (cnt == 7) {
            cout << "ascending" << endl;
            return 0;
        }
    }
    
    cnt = 0;
    
    for (int i = 0; i < 7; i++) {
        if(inp[i] == descending[i]) {
            cnt++;
        }
        if (cnt == 7) {
            cout << "descending" << endl;
            return 0;
        }
    }
    
    cout << "mixed" << endl;
    
    return 0;
}
