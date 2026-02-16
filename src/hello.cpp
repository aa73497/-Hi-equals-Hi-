#include <string>
#include <iostream>
#include <cctype>
using namespace std;

 void strcmp_case_insensitive(const string a, const string b) {

      int check= 0;
         for (int i = 0; i < a.length(); i++) {
            if ( ((tolower(a[i]) != tolower(b[i])) && check == 0)) {
                if ( (tolower(a[i]) < tolower(b[i]))) {
                     check = -1;

                }
                else {
                    check = 1;
                }
            }
         }

     cout << check;
     }




