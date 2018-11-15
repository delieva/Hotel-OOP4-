#ifndef OOP4_REQUEST_H
#define OOP4_REQUEST_H

using namespace std;

class Request {
    string date;
public:
    string type;
    int longness;
    int guests;
    Request() = default;
    Request(string typ, int longn, int gsts, string dat = "today"): type(typ), longness(longn), guests(gsts), date(dat){}
};
#endif //OOP4_REQUEST_H
