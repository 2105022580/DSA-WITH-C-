#include<iostream>
using namespace std;

class complex {
    int real;
    int img;

public:
    // Constructor
    complex(int r, int i) {
        real = r;
        img = i;
    }

    // Display
    void shownum() {
        cout << real << "+" << img << "i" << endl;
    }

    // Operator overloading for +
    complex operator+(complex &o2) {
        int resreal = this->real + o2.real;
        int resimg = this->img + o2.img;
        return complex(resreal, resimg); // return new object
    }
};
 class parent{//virtual function overriding
  public:
  virtual void hello(){
    cout<<"parent"<<endl;
 }
};
 class child :public parent{
    public:
    void hello(){
        cout<<"child hello"<<endl;
    }
 };


int main() {
   // complex o1(1, 2);
    //complex o2(3, 4);

   // o1.shownum();
   // o2.shownum();

    //complex o3 = o1 + o2; // uses overloaded +
    //o3.shownum();   
    child c1;
          c1.hello();

    return 0;
}
