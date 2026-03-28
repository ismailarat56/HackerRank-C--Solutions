// HackerRank Soru Adı: Solve Me First
// Zorluk: Kolay (Easy)
// Çözüm Dili: C++
// Bu kod, verilen iki tam sayının toplamını hesaplar ve ekrana yazdırır.


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//----- BENİM ÇÖZÜMÜM BURADAN BAŞLIYOR -----
int solveMeFirst(int a, int b) {

  return a+b;
}
//-------- BENİM ÇÖZÜMÜM BURADA BİTİYOR --------
int main() {
  int num1, num2;
  int sum;
  cin>>num1>>num2;
  sum = solveMeFirst(num1,num2);
  cout<<sum;
  return 0;
}
