#ifndef OOP4_TYPES_H
#define OOP4_TYPES_H

#include "request.h"


using namespace std;


int money[] = {0, 0, 0, 0};
string types[] = {"lux", "standart", "president", "halfLux"};

class Lux {
    int lux[4];
public:
    Lux(){
        for (int i = 0; i < 4; i++){
            lux[i] = 3;
        }
    }
    bool freeLux(Request request){
        return bool(lux[request.guests-1]);
    };
    void takeLux(Request request){
        if(freeLux(request)){
            lux[request.guests-1] -= 1;
        }
    }
    void leftLux(Request request, int pay){
        lux[request.guests-1] += 1;
        money[0] += pay;
    }
};

class HalfLux {
    int halflux[4];
public:
    HalfLux(){
        for (int i = 0; i < 4; i++){
            halflux[i] = 3;
        }
    }
    bool freeHalfLux(Request request){
        return bool(halflux[request.guests-1]);
    };
    void takeHalfLux(Request request){
        if(freeHalfLux(request)){
            halflux[request.guests-1] -= 1;
        }
    }
    void leftHalfLux(Request request, int pay){
        halflux[request.guests-1] += 1;
        money[0] += pay;
    }
};

class President {
    int president[4];
public:
    President(){
        for (int i = 0; i < 4; i++){
            president[i] = 3;
        }
    }
    bool freePresident(Request request){
        return bool(president[request.guests-1]);
    };
    void takePresident(Request request){
        if(freePresident(request)){
            president[request.guests-1] -= 1;
        }
    }
    void leftPresident(Request request, int pay){
        president[request.guests-1] += 1;
        money[0] += pay;
    }
};

class Standart {
    int standart[4];
public:
    Standart(){
        for (int i = 0; i < 4; i++){
            standart[i] = 3;
        }
    }
    bool freeStandart(Request request){
        return bool(standart[request.guests-1]);
    };
    void takeStandart(Request request){
        if(freeStandart(request)){
            standart[request.guests-1] -= 1;
        }
    }
    void leftStandart(Request request, int pay){
        standart[request.guests-1] += 1;
        money[0] += pay;
    }
};


#endif //OOP4_TYPES_H