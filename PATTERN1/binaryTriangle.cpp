// 1
// 01
// 101
// 0101

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "No. of row: ";
    cin >> n;
    // int a = 1;
    // for(int i = 1; i <= n;i++){
    //     if (i%2 != 0) a =1;
    //     else a = 0;
    //     for(int j=1; j<= i; j++){
    //         cout << a;
    //         if (a==1){
    //             a = 0;
    //         }else {
    //             a = 1;
    //         }
    //     }
    //     cout << endl;
    // }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            if((i+j)%2 == 0  /*i == j || i % 2 != 0 && j%2 != 0*/){
                cout << "1";
            }else{
                cout << "0";
            }
        }
            cout << endl;
    }
}