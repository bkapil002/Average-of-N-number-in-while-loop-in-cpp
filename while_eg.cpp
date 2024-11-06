#include<iostream>
using namespace std;

int main(){
    int n , i = 1;
    double num , sum = 0;
    cout<<"Enter your Number: ";
    cin>>n;

    while(i <=n){
        cout << "Enter the number: " << i << ": ";
        cin >> num;
        sum += num;
        i++;
    }
    double average = sum / n;
    cout<<"The average is: "<<average << endl;

    return 0;  

}