#include <iostream>
using namespace std;
int main(){
int ageA;
int ageB;
string nameA;
string nameB;
int Aolder;
int Bolder;
cout << "What is user 1 name? ";
cin >> nameA;
cout << "How old is user 1? ";
cin >> ageA;

cout << "What is user 2 name? ";
cin >> nameB;
cout << "How old is user 2? ";
cin >> ageB;

Aolder = ageA-ageB;
Bolder = ageB-ageA;

if (ageA == ageB){
    cout<< nameA << " is the same age as " << nameB;
}

else if (ageA > ageB){
    cout << nameA << " is " << Aolder << " years older than " << nameB ;
}

else{
    cout << nameB << " is " << Bolder << " years older than " << nameA ;
}

}