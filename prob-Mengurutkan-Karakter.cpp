#include <iostream>
#include <string>
using namespace std;


int main(){
    int N;
    cin >> N;
    string A;
    string B;
    cin >> A;
    cin >> B;
    int count = 0;
    for (int i= 0; i < N; i++){
        char temp;
        bool isSwap = false;
        for (int j=i; j < N; j++){
            if (A[j] >= B[j]){
                temp = A[j];
                A[j] = B[j];
                B[j] = temp;
                isSwap = true;
        }
        }
        if (isSwap == true){
            count +=1;
        }

    }
    cout << count << endl;


    return 0;
}
