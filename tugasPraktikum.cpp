#include <iostream>
#include <string>
using namespace std;


class user {
public:
    static int globalId;
    int id;
    string nama;
    string email;

    user(string pNama, string pEmail) : nama(pNama), email(pEmail) {
        id = generateId();
    }

    int generateId() {
        return ++globalId;
    }
};


int user::globalId = 0;


class admin : public user {
public:
    admin(string pNama, string pEmail) : user(pNama, pEmail) {}

    void showAllMember() {
        cout << "Admin " << nama << " melihat semua member..." << endl;
    }

    void toggleActivationMember() {
        cout << "Admin " << nama << " mengubah status aktif member" << endl;
    }
};


class member : public user {
public:
    string status;

   
    member(string pNama, string pEmail, string pStatus) : 
        user(pNama, pEmail), status(pStatus) {}

    void showProfile() {
        cout << "\n=== PROFIL MEMBER ===" << endl;
        cout << "ID     : " << id << endl;
        cout << "Nama   : " << nama << endl;
        cout << "Email  : " << email << endl;
        cout << "Status : " << status << endl;
        cout << "=====================\n" << endl;
    }
};

int main() {
 
    admin admin1("Aswarina", "aswarina@web.id");
    
    
    member member1("Zalfa", "zalfa@mail.com", "Aktif");

    
    member1.showProfile();
    admin1.showAllMember();
    admin1.toggleActivationMember();

    return 0;
} 