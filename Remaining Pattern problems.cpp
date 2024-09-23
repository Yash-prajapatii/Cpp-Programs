//pattern3
#include <iostream>
using namespace std;

void p3(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cin >> n;
    p3(n);
    return 0;
}
//output
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
---------------------------------------------------------
//pattern4
#include <iostream>
using namespace std;

void p4(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cin >> n;
    p4(n);
    return 0;
}
//output
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
-----------------------------------------------------------
//pattern5
#include <iostream>
using namespace std;

void p5(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i+1; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cin >> n;
    p5(n);
    return 0;
}
//output
* * * * * 
* * * * 
* * * 
* * 
* 
------------------------------------------------------------
//pattern6
#include <iostream>
using namespace std;

void p6(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <=n - i + 1; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cin >> n;
    p6(n);
    return 0;
}
//output
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 
------------------------------------------------------------
//pattern7
#include <iostream>
using namespace std;

void p7(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            cout << " ";
        }for(int j = 0; j < 2 * i + 1; j++){
            cout << "*";
        }for(int j = 0; j < n - i - 1; j++){
            cout << " ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cin >> n;
    p7(n);
    return 0;
}
//output
    *    
   ***   
  *****  
 ******* 
*********
------------------------------------------------------------
//pattern8
#include <iostream>
using namespace std;

void p8(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j <  i; j++){
            cout << " ";
        }for(int j = 0; j < 2*n - (2*i+1); j++){
            cout << "*";
        }for(int j = 0; j < i; j++){
            cout << " ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cin >> n;
    p8(n);
    return 0;
}
//output
*********
 ******* 
  *****  
   ***   
    * 
------------------------------------------------------------
//pattern9
#include <iostream>
using namespace std;

void p9(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            cout << " ";
        }for(int j = 0; j < 2 * i + 1; j++){
            cout << "*";
        }for(int j = 0; j < n - i - 1; j++){
            cout << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j <  i; j++){
            cout << " ";
        }for(int j = 0; j < 2*n - (2*i+1); j++){
            cout << "*";
        }for(int j = 0; j < i; j++){
            cout << " ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cin >> n;
    p9(n);
    return 0;
}
//output
    *    
   ***   
  *****  
 ******* 
*********
*********
 ******* 
  *****  
   ***   
    *  
------------------------------------------------------------
//pattern10
#include <iostream>
using namespace std;
void p10(int n){
    for(int i = 1; i <= 2*n - 1; i++){
        int stars = i;
        if(i > n) stars = 2*n - i;
        for(int j = 1; j <= stars; j++){
            cout << "*";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cin >> n;
    p10(n);
    return 0;
}
//output
*
**
***
****
*****
****
***
**
*
