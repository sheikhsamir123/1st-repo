#include<iostream>
//#include<conio.h>
using namespace std;

class time1{
public:
int sec, minute, hr, day;

public:
void input(){
    cout<<"enter the value of sec minute hr and day"<<endl;
    cin>>sec>>minute>>hr>>day;
}

time1 operator *(time1 t1){
time1 t;
t.sec = sec + t1.sec;
t.minute = minute + t1.minute + t.sec / 60;
t.hr = hr + t1.hr + t.minute / 60;
t.day = day + t1.day + t.hr / 24;
t.sec = t.sec % 60;
t.minute = t.minute % 60;
t.hr = t.hr % 24;

return(t);
}

void display(){
    cout<<"day="<<day<<"\nhr="<<hr<<"\nminute="<<minute<<"\nsec="<<sec<<endl;
}
};

int main(){
    time1 t2,t3,t4;
    t2.input();
    t3.input();
    t4 = t2*t3;
    t4.display();
    cout<<"the value is "<<endl;
    cout<<"day="<<t4.day<<"\nhr="<<t4.hr<<"\nminute="<<t4.minute<<"\nsec="<<t4.sec<<endl;
    //getch();
    return 0;
}