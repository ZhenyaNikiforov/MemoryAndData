#include <iostream>
using namespace std;

int main() {
    
    int a;
    short b;
    long c;
    long long d;
    float e;
    double f;
    long double g;
    bool h;
    
    cout<<"int: "<<&a<<" "<<sizeof(a)<<endl;
    cout<<"short: "<<&b<<" "<<sizeof(b)<<endl;
    cout<<"long: "<<&c<<" "<<sizeof(c)<<endl;
    cout<<"long long: "<<&d<<" "<<sizeof(d)<<endl;
    cout<<"float: "<<&e<<" "<<sizeof(e)<<endl;
    cout<<"double: "<<&f<<" "<<sizeof(f)<<endl;
    cout<<"long double: "<<&g<<" "<<sizeof(g)<<endl;
    cout<<"bool: "<<&h<<" "<<sizeof(h)<<endl;

    return 0;
}