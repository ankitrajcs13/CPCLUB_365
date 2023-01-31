#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x, y, z;
        cin >> x >> y >> z;

        int b[++x][++y][++z] = {0};
        // to iterate in loop
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {
                for (int k = 0; k < z; k++) {
                    if(k == 0 || j == 0 || i == 0) {
                        b[i][j][k] = 0;
                    }
                    else {
                        cin >> b[i][j][k];
                    }
                }
            }
        }
        
        for (int i = 1; i < x; i++) {
            for (int j = 1; j < y; j++) {
                for (int k = 1; k < z; k++) {
                    cout << b[i][j][k] 
                        - b[i - 1][j][k] - b[i][j - 1][k] - b[i][j][k - 1] 
                        - b[i - 1][j - 1][k - 1]
                        + b[i - 1][j - 1][k] + b[i - 1][j][k - 1] + b[i][j - 1][k - 1] 
                        << " ";
                }
                cout << endl;
            }
        }
	}
	return 0;
}
