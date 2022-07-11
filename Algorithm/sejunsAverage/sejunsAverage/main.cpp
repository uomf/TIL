//
//  main.cpp
//  sejunsAverage
//
//  Created by 김진원 on 2022/07/11.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int m = -1;
    int subject[1000] = {0,};
    int cnt;
    double sum = 0;
    
    cin >> cnt;
    
    for (int j = 0; j < cnt; j++) {
        cin >> subject[j];
    }

    for (int i = 0; i < cnt; i++) {
        if (subject[i] > m) {
            m = subject[i];
        }
    }
    
    for (int k = 0; k < cnt; k++) {
        sum = sum + (double)subject[k] / m * 100;
    }

    cout.precision(9);
    cout << sum / cnt << endl;
    
    return 0;
}
