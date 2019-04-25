#include <iostream>
#include <bits/stdc++.h>
#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;
///Take a risk dont always play it safe or you will die wondering !!
class Solution {
public:
    int fib(int N) {
     int fibArray[N+1];
     if(N==0) return 0;
     if(N==1 || N==2)return 1;
     fibArray[0]=0;
     fibArray[1]=1;
     fibArray[2]=1;
     for(int i=3;i<=N;i++){
         fibArray[i]=fibArray[i-1]+fibArray[i-2];
     }
     return fibArray[N];
    }
};



