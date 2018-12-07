#include <iostream>
#include <iomanip>
#include "Headers/Client.h"

#include "Headers/request.h"
#include "Headers/Client.h"
#include "Headers/types.h"
#include "Headers/hotel.h"

using namespace std;
 
int main() {
    Hotel <Lux, Standart, HalfLux, President> hotel({}, {}, {}, {});
    Request request("lux", 2, 2);
    if(hotel.freeNow(request)){
        Client Sasha("Sasha Deliieva", "0603157500", request, "money", "000005878");
        hotel.takeRoom(request);
        hotel.leftRoom(request, 300);
        Bill bill(Sasha, 300);
        bill.pay("dlkfj");
    }
    cout << "Earnings::" << endl;
    for(int i = 0; i < 4; i++){
        cout <<"    " << types[i] << ":  " << money[i] << endl;
    }
    return 0;
}

