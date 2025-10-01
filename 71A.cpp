#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    
    string word[100];
    for (int i = 0; i < n; i++){
        cin >> word[i];
    }

    for (int i = 0; i < n; i ++){
        if (word[i].length() <= 10){
            cout << word[i] << endl;
        }
        else{
            int counter = word[i].length() - 2;
            cout << word[i][0] << counter << word[i][word[i].length() - 1] << endl;
        }
    }
    
    return 0;
}