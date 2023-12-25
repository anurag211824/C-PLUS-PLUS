//  write a program to week days according to their number
#include<iostream>

using namespace std;

int main(){
    int day_number;
    cout<<"enter the day number:";
    cin>>day_number;
    switch(day_number){
        case 1:
        cout<<"monday";
        break;
        case 2:
        cout<<"tuesday";
        break;
        case 3:
        cout<<"wedday";
        break;
        case 4:
        cout<<"thursday";
        break;
        case 5:
        cout<<"friday";
        break;
         case 6:
        cout<<"saturday";
        break;
         case 7:
        cout<<"sunday";
        break;
    }
    
return 0;
}