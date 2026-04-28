#include<iostream>
using namespace std;

struct abdi_func{
int age,year;
float cgpa,hight;
string name,dep;};

void abdis_record(abdi_func arr){
    for(int i=0; i<4; i++){
            cout<<"name:"<<" "<<arr.name<<" "<<"dep:"<<" "<<arr.dep<<" "<<"Age:"<<" "<<arr.age<<" "<<"CGPA"<<" "<<arr.cgpa<<" "<<"Year:"<<" "<<arr.year<<" "<<"Hight:"<<" "<<arr.hight<<endl;}
    cout<<endl;}

int main(){
    abdi_func arr[4];

    for(int i=0; i<4 ;i++){
        cout<<"Enter name:"<<endl;
        getline(cin>>ws,arr[i].name);
        cout<<endl;
        cout<<"Enter dep:"<<endl;
        getline(cin>>ws,arr[i].dep);
        cout<<endl;
        cout<<"Enter age:"<<endl;
        cin>>arr[i].age;
        cout<<endl;
        cout<<"Enter cgpa:"<<endl;
        cin>>arr[i].cgpa;
        cout<<endl;
        cout<<"Enter year:"<<endl;
        cin>>arr[i].year;
        cout<<endl;
        cout<<"Enter hight:"<<endl;
        cin>>arr[i].hight;
        cout<<endl<<endl;}

for(int i=0; i<4; i++){
    abdis_record(arr[i]);


}

/*output is
name: Abdi dep: ELC Age: 20 CGPA 3.7 Year: 3 Hight: 1.75
name: Abdi dep: ELC Age: 20 CGPA 3.7 Year: 3 Hight: 1.75
name: Abdi dep: ELC Age: 20 CGPA 3.7 Year: 3 Hight: 1.75
name: Abdi dep: ELC Age: 20 CGPA 3.7 Year: 3 Hight: 1.75

name: kalid dep: CSE Age: 25 CGPA 3.5 Year: 4 Hight: 1.65
name: kalid dep: CSE Age: 25 CGPA 3.5 Year: 4 Hight: 1.65
name: kalid dep: CSE Age: 25 CGPA 3.5 Year: 4 Hight: 1.65
name: kalid dep: CSE Age: 25 CGPA 3.5 Year: 4 Hight: 1.65

name: hasan dep: MEC Age: 25 CGPA 3.8 Year: 5 Hight: 1.8
name: hasan dep: MEC Age: 25 CGPA 3.8 Year: 5 Hight: 1.8
name: hasan dep: MEC Age: 25 CGPA 3.8 Year: 5 Hight: 1.8
name: hasan dep: MEC Age: 25 CGPA 3.8 Year: 5 Hight: 1.8

name: keyro dep: SOE Age: 23 CGPA 3.5 Year: 5 Hight: 1.4
name: keyro dep: SOE Age: 23 CGPA 3.5 Year: 5 Hight: 1.4
name: keyro dep: SOE Age: 23 CGPA 3.5 Year: 5 Hight: 1.4
name: keyro dep: SOE Age: 23 CGPA 3.5 Year: 5 Hight: 1.4*/

return 0;}