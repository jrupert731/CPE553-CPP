int main() {
  int a = -1;
  int b = 3;
  int* r = &b;
  (*r)++;  //b=4
  int* p = &a;
  int x[7] = {1, 0, 3, 2};
  p = x+3; // p = &x[3] (the number 2)
  *p-- += 2; // x[3] = 4   p = &x[2]
  cout << *--p << '\n'; 		// p = &x[1] print out 0
  int q = *p--; // q=0  p = &x[0]
  int* s = &q;
  *s = 14;      // q = 14
  *p-- = 19;    // x[0] = 19  p = &x[-1]
  *++p = 3;     // p = &x[0]   x[0] = 3
  *p++ -= 2;    // x[0] = 1 p = &x[1]
  int j = ++*p; // x[1] = 1 p = &x[1] j = 1
  cout << j << ‘\n’;		// 1_____________________
  for (int i = 0; i < b; i++)
    cout << x[i] << ',';		//1,1,3,4___________________________________
  cout << ‘\n’;
}