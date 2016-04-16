#include <iostream>

using namespace std;


int main()
{
    int three = 0;
    int counter = 0;
    int target = 999;
    while(target > 0){
        three += target;
        target -= 3;
    }
    target = 995;
    int five = 0;
    while(target > 0){
        five += target;
        target -= 5;
    }
    target = 990;
    int fifteen = 0;
    while(target > 0){
        fifteen += target;
        target -= 15;
    }
    int total = (three + five) - fifteen;
    cout << total << endl;
}
