#include<iostream>
using namespace std;

class animal {
public:
    string color;
    void eating() {
        cout << "eating" << endl;
    }
    void waking() {
        cout << "waking" << endl;
    }
    void breathing() {
        cout << "breathing" << endl;
    }
};
 class bird{
    public:
   void flying(){
    cout<<"flying"<<endl;
   }
 };
 class pengvin:public animal , public bird{// multiple inheritance
    public:
    void donotfly(){
        cout<<"donotfly"<< endl;
    }
 };
// multilevel inheritance
class snack : public animal {
public:
    void crawl() {
        cout << "crawl" << endl;
    }
};
class dog:public animal{
    public:
    void barking(){
        cout<<"barking"<<endl;
    }
    void tail(){
        cout<<"tail"<<endl;
    }
};

int main() {
    snack s1;       // ✅ Correct object creation  //single inheritance
    s1.crawl();     // ✅ Correct function call
    s1.eating();    // inherited function
    s1.waking();    // inherited function
    s1.breathing();
    dog d1;
    d1.barking();
    d1.tail();
    d1.eating();    // inherited function  //multilevel inheritance
    d1.waking();    // inherited function
    d1.breathing(); 
    
    pengvin p1;
     p1.eating();    // inherited function //multiple inheritance
     p1.waking();    // inherited function
     p1.breathing();
     p1.donotfly();
     p1.flying();// inherited function
    return 0;
}
