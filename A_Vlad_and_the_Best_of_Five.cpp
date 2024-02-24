#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;  

    for (int i = 0; i < t; ++i) {
        string s;
        cin >> s;  

        int count_a = 0, count_b = 0;
          
        for (int i =0;i<s.length();i++) {
            if (s[i]== 'A') {
                ++count_a;
            } else {
                ++count_b;
            }
        }
          if (count_a > count_b)
          {
            cout<<'A'<<endl;
          }
          else{
            cout<<'B'<<endl;
          }
          
    }

    return 0;
}
