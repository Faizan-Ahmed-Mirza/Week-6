#include<iostream>
using namespace std ;

void discount(string d , string m , float p){
	float t ;
	if((d=="sunday") && (m=="october" || m=="march" || m=="august")){
		t = p/10 ;
		cout << p -t ; }
	if(d=="monday" && m=="november" || "december" ){
		t = p/20 ;
		cout << p-t ; }
	else{
		cout<< p ; }}

main(){
string d , m ; float p ;
cout << "Enter day: " ;
cin >> d;
cout << "Enter month: " ;
cin >> m ;
cout <<"Enter price: " ;
cin >> p ;
discount(d , m , p) ; }