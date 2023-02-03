#include<iostream>
using namespace std ;

main(){
string day , fruit ; float n , p ;
cout << "Enter day : " ;
cin >> day ;
cout <<"Enter fruit: " ;
cin >> fruit ;
cout <<"Enter quantity: " ;
cin >> n ;

if(day=="sunday" || day == "saturday"){
	if(fruit == "banana"){
		p = n*2.7 ;
		cout << p ; }
	
	else if(fruit == "apple"){
		p = n*1.25 ; 
		cout << p ;}
	
	else if(fruit == "orange"){
		p = n*0.9 ; 
		cout << p ;}
	
	else if(fruit == "grapefruit"){
		p = n*1.6 ; 
		cout << p ;}
	
	else if(fruit == "kiwi"){
		p = n*3 ; 
		cout << p ;}
	
	else if(fruit == "pineapple"){
		p = n*5.6 ; 
		cout << p ;}
	
	else if(fruit == "grapes"){
		p = n*4.2 ; 
		cout << p ;}
	else{
		cout <<"Error" ;}}


else if(day=="monday" || day == "tuesday" || day=="wednesday" || day == "thrusday" || day =="friday"){
	if(fruit == "banana"){
		p = n*2.5 ;
		cout << p ;}
	else if(fruit == "apple"){
		p = n*1.2 ;
		cout << p ;}
	else if(fruit == "orange"){
		p = n*0.85 ;
		cout << p ;}
	else if(fruit == "grapefruit"){
		p = n*1.45 ;
		cout << p ;}
	else if(fruit == "kiwi"){
		p = n*2.7 ;
		cout << p ;}
	else if(fruit == "pineapple"){
		p = n*5.5 ;
		cout << p ;}
	else if(fruit == "grapes"){
		p = n*3.85 ; 
		cout << p ;}
	else{
		cout <<"Error" ; }}

else {
	cout<<"Error" << endl ; }


}
	