// ДЗ  8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//void show(int from, int to) {
    //if (from <= to) {
    //    cout << from << " ";  
        // show(from + 1, to);
   // }
    
//}

//int main()
//{
   // int n = 5;
   // show(1, n);
   // cout << "\n";
//}


//void show(int from, int to) {
    //if (from >= to){
        //cout << from << " ";
        //show( from - 1, to);
   // }
//}
//int main() {
   // int A = 5;
   // int B = 1;
   // show(A, B);
   // cout << "\n";
//}


//void chek(int N) {
   // if (N == 1) {
     //   cout << "Yes\n";
      //  return;
   // }
  //  if(N % 2 != 0 || N == 0){
  //      cout << "No\n";
  //      return;
  //  }
  //  chek(N / 2);
//}

//int main() {
  //  int A = 3;
  //  int B = 8;
  //  chek(A);
  //  chek(B);
//}


//int sum(int N) {

   // if (N == 0) return 0;
   // return (N % 10) + sum(N / 10);
//}

    
 
//int main() {
   // int N = 179;
  //  sum(N);
//}


//void show(int N) {
   // cout << N % 10 << " ";
   // if (N >= 10) {
    //    show(N / 10);
    //}
       
//}

//int main() {
   // int N = 179;
  //  show(N);
  // return 0;
//}

//void show(int N) {
    
   // if (N >= 10) {
   //     show(N / 10);
   // }
   // cout << N % 10 << " ";
//}

//int main() {
    //int N = 179;
   // show(N);
   // return 0;
//}


//int reverse(int N, int revers = 0) {
    //if (N == 0) {
      // return revers;
   // }
  //  return reverse(N / 10, revers * 10 + N % 10);
//}
//int main() {
   // int N = 179;
   // cout<<reverse(N)<<"\n";
   // return 0;
//}



//int fib(int N) {
   // if (N == 0) return 0;
   // if (N == 1) return 1;
   // return fib(N - 1) + fib(N - 2);
//}
//int main() {
   // int N;
   // cin >> N;
  //  cout << fib(N) << "\n";
//}



//int fun(int N, int a) {
   // if (N == 0)return 1;
   // return N * fun(N, a - 1);
//}
//int main() {

  //  int a, b;
  //  cin >> a >> b;
  //  cout << fun(a, b) << "\n";
//}


//int sum(int a, int b) {
    //if (a > b) return 0;
   // return a + sum(a + 1, b);
//}
//int main() {
   // int a, b;
   // cin >> a >> b;
   // cout << sum(a,b) << "\n";
//}

int rec(int a, int b) {
    if (b == 0)return a;
    return rec(b, a % b);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << rec(a, b) << "\n";
}