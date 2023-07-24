#include <iostream>
using namespace std;
class Test
{    static int x;
     public:
     void setX()
     {
      x++;
     }
    static int getX()
     {
      return x;
     }
};
int Test::x ;
int main(){
    cout << Test::getX() << " ";
    Test t[5];
    for(int i=0;i<5;i++)
    {
        t[i].setX();
    }
    cout << Test::getX();
}



