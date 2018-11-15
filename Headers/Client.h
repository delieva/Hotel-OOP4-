#ifndef OOP4_CLIENT_H
#define OOP4_CLIENT_H

#include "request.h"
using namespace std;

class Client {
    string name;
    string telephone;
    string deposit;  //залог,
    string passp;     //паспорт
    Request request;
public:
    int payment;
    Client() = default;
    Client(string nam, string tel, Request req, string dep, string pass)
            : name(nam), telephone(tel), request(req), deposit(dep), passp(pass){}
    void depositr(){ //возвращение депозита
        this->deposit = "";
    }
};



#endif //OOP4_CLIENT_H
