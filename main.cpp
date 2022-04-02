#include <iostream>
using namespace std;

int main() {
          float a; float b; float x; float y;
          cin >> a >> b >> x >> y;

          if(x<0 and y>0){
              float z=(a*x)-(b*y);
          cout << z << endl;

          }else if(x>=0 and y<=0){
              float z=(a*x*x)-(b*y);
          cout << z <<endl;
          }else{
              float z=(a*x)+(b*y*y);
          cout << z <<endl;
          }
   return 0;
}
