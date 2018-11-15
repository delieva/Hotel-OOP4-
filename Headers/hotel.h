#ifndef OOP4_HOTEL_H
#define OOP4_HOTEL_H

#include "request.h"
#include "Client.h"
#include "types.h"

using namespace std;

template <class... Infos>
class Hotel : public Infos...{
public:
    Hotel(const Infos&&... infos) : Infos(infos)... {}
    bool freeNow(Request request){
        if( request.guests < 1 || request.guests > 4){  //если количество людей больше допустимого или некоректное
            cout << "We can't have this quantity of guests" << endl;
            return false;
        }
        else if(request.type == "president"){
            return(President::freePresident(request));
        }
        else if(request.type == "standart"){
            return(Standart::freeStandart(request));
        }
        else if(request.type == "lux"){
            return(Lux::freeLux(request));
        }
        else if(request.type == "halfLux"){
            return(HalfLux::freeHalfLux(request));
        }
        else{
            return false;    //если тип номера некоректен
        }
    }
    void takeRoom(Request request){  //занять комнату
        if(freeNow(request)){
            if(request.type == "president"){
                President::takePresident(request);
            }
            else if(request.type == "standart"){
                Standart::takeStandart(request);
            }
            else if(request.type == "lux"){
                Lux::takeLux(request);
            }
            else if(request.type == "halfLux"){
                HalfLux::takeHalfLux(request);
            }
        }
    }
    void leftRoom(Request request, int money){
        if(request.type == "president"){
            President::leftPresident(request, money);
        }
        else if(request.type == "standart"){
            Standart::leftStandart(request, money);
        }
        else if(request.type == "lux"){
            Lux::leftLux(request, money);
        }
        else if(request.type == "halfLux"){
            HalfLux::leftHalfLux(request, money);
        }
    }
};


class Bill {
    Client client;
public:
    bool payed;
    Bill() = default;
    Bill(Client cli, bool paid = false){
        this->client = cli;
        this->payed = paid;
    }
    bool pay(string bank){
        if(bank == "Privat"){
            this->payed = true;
            client.depositr();
            return true;
        }
        else{
            cout << "This Bank isn't our partner, you should choose Privat" << endl;
            return false;
        }
    }
};

#endif //OOP4_HOTEL_H
