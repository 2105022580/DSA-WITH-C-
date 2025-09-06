#include<iostream>
using namespace std;
class shape{
    public:
    virtual void draw()=0;
        
    
      };
class circle :public shape{
    public:
    void draw(){
    cout<<"draw"<<endl;
    }
};
int main(){
    shape s2;
    s2.draw();// abstact function or pure virtual function
    circle c1;
    c1.draw();
    return 0;
}