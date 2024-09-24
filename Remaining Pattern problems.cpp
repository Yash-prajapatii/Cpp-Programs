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
------------------------------------------------------------
//pattern11
#include <iostream>
using namespace std;

void p11(int n){
    int start = 1;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0) start = 1;
        else start = 0;
        for(int j = 0; j <= i ; j++){
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}
int main() {
    int n;
    cin >> n;
    p11(n);
    return 0;
}
//output
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 
------------------------------------------------------------
//pattern12
#include <iostream>
using namespace std;

void p12(int n){
    int space = 2* (n-1);
    for(int i = 1; i <= n; i++){
        
        for(int j = 1; j <= i ; j++){
            cout << j;
        }
        for(int j = 1; j <= space; j++){
            cout << " ";
        }
        for(int j = i; j >= 1; j--){
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}
int main() {
    int n;
    cin >> n;
    p12(n);
    return 0;
}
//output
1        1
12      21
123    321
1234  4321
1234554321
------------------------------------------------------------
//pattern13
#include <iostream>
using namespace std;

void p13(int n){
    int num = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << num << " ";
            num = num + 1;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    p13(n);
    return 0;
}
//output
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15
------------------------------------------------------------
//pattern14
#include <iostream>
using namespace std;

void p14(int n){
    for(int i = 0; i < n; i++){
        for(char ch = 'A'; ch <= 'A' + i; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    p14(n);
    return 0;
}
//output
A 
A B 
A B C 
A B C D 
A B C D E
------------------------------------------------------------
//pattern15
#include <iostream>
using namespace std;

void p15(int n){
    for(int i = 0; i < n; i++){
        for(char ch = 'A'; ch <= 'A' + (n - i - 1) ; ch++){
            cout << ch << " "; 
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    p15(n);
    return 0;
}
//output
A B C D E 
A B C D 
A B C 
A B 
A
------------------------------------------------------------
//pattern16
#include <iostream>
using namespace std;

void p16(int n){
    for(int i = 0; i < n; i++){
        char ch = 'A' + i;
        for(int j = 0; j <= i; j++){
            cout << ch << " "; 
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    p16(n);
    return 0;
}
//output
A 
B B 
C C C 
D D D D 
E E E E E
------------------------------------------------------------
//pattern17
#include <iostream>
using namespace std;

void p17(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            cout << " ";
        }
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for(int j = 1; j <= 2 * i + 1; j++){
            cout << ch;
            if(j <= breakpoint) ch++;
            else ch--;
        }for(int j = 0; j < n - i - 1; j++){
            cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    p17(n);
    return 0;
}
//output
    A    
   ABA   
  ABCBA  
 ABCDCBA 
ABCDEDCBA
------------------------------------------------------------
//pattern18
#include <iostream>
using namespace std;
void p18(int n){
    for(int i = 0; i < n; i++){
        char ch = 'A';
        ch = ch + (n-i -1);
        for(int j = 0; j <= i; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    p18(n);
    return 0;
}
//output
E 
D E 
C D E 
B C D E 
A B C D E
------------------------------------------------------------
//pattern19
#include <iostream>
using namespace std;

void p19(int n){
    int iniS = 0;
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= n - i; j++){
            cout << "*";
        }for(int j = 0; j < iniS; j++){
            cout << " ";
        }for(int j = 1; j <= n - i; j++){
            cout << "*";
        }
        iniS += 2;
        cout << endl;
    }
    iniS = 2*n - 2;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }for(int j = 0; j < iniS; j++){
            cout << " ";
        }for(int j = 1; j <= i; j++){
            cout << "*";
        }
        iniS -= 2;
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    p19(n);
    return 0;
}
//output
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
------------------------------------------------------------
//pattern20
#include <iostream>
using namespace std;

void p20(int n){
    int spaces = 2*n - 2;
    for(int i = 1; i <= 2*n - 1; i++){
        int stars = i;
        if(i > n) stars = 2*n - i; 
        for(int j = 1; j <= stars; j++){
            cout << "*";
        }for(int j = 1; j <= spaces; j++){
            cout << " ";
        }for(int j = 1; j <= stars; j++){
            cout << "*";
        }
        cout << endl;
        if(i < n) spaces -= 2;
        else spaces += 2;
    }
}

int main() {
    int n;
    cin >> n;
    p20(n);
    return 0;
}
//output
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
------------------------------------------------------------
//pattern21
#include <iostream>
using namespace std;

void p21(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == 0 || j == 0 || i == n-1 || j == n-1){
            cout << "*";
        }
        else cout << " ";
    }
    cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    p21(n);
    return 0;
}
//output
****
*  *
*  *
****
------------------------------------------------------------
//pattern22
#include <iostream>
using namespace std;

void p22(int n){
    for(int i = 0; i <2*n-1; i++){
        for(int j = 0; j <2*n-1; j++){
            int top = i;
            int left = j;
            int right = (2*n - 2) - j;
            int down = (2*n - 2) - i;
            cout << (n - min(min(top, down), min(left, right))) << " ";
        }
    cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    p22(n);
    return 0;
}
//output
4 4 4 4 4 4 4 
4 3 3 3 3 3 4 
4 3 2 2 2 3 4 
4 3 2 1 2 3 4 
4 3 2 2 2 3 4 
4 3 3 3 3 3 4 
4 4 4 4 4 4 4 
