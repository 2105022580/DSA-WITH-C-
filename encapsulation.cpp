#include <iostream>
using namespace std;

class user {
public:
    string username;

private:
    int id;
    int password;

public:
    // Constructor
    user(string uname, int uid, int pass) {
        username = uname;
        id = uid;
        password = pass;
    }

    // Setter
    void setpassword(int passwordval) {
        password = passwordval;
    }

    // Getter
    int getpassword() {
        return password;
    }
};

int main() {
    user u1("Ajay", 1333, 20507);

    u1.setpassword(20507); // set new password
    cout << u1.getpassword() << endl; // prints 12345

    return 0;
}
