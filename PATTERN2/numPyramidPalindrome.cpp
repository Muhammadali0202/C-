//    1
//   121
//  12321 
// 1234321

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter No. of Rows: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        //spaces
        for(int j = 1; j<= n-i;j++){
            cout << " ";
        }
        for(int k = 1; k<= i;k++){
            cout << k;
        }
        for(int l = i-1; l>=1;l--){
            cout << l;
        }
        cout << endl;
    }
}