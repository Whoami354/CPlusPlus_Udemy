#include <iostream>
using namespace std;

void powerofTwo(){
    int numberofpoweroftwo;
    cout<<"Enter a number please: ";
    cin>>numberofpoweroftwo;

    if(numberofpoweroftwo>0){
        while(numberofpoweroftwo%2==0){
            numberofpoweroftwo/=2;
        }
        if(numberofpoweroftwo==1){
            cout<<"Number is power of 2"<<endl;
        }
    }
    if(numberofpoweroftwo==0||numberofpoweroftwo!=1){
        cout<<"Number is not power of 2"<<endl;
    }

}

int main(){
    powerofTwo();

    return 0;
}