#include<iostream>
using namespace std ;

main(){
string m ;  int d ;
cout <<"Enter the month of birth :" ;
cin >> m ;
cout << "Enter date :" ;
cin >> d ;

if((m=="march" && d>=21)||(m=="april" && d <=19 )){
	cout <<"The Ram" ; }

if((m=="april" && d>=20)||(m=="may" && d <=20 )){
	cout <<"The Bull" ; }

if((m=="may" && d>=21)||(m=="june" && d <= 20)){
	cout <<"The Twins" ; }

if((m=="june" && d>=21)||(m=="july" && d <=22 )){
	cout <<"The Crab" ; }

if((m=="july" && d>=23)||(m=="august" && d <=22 )){
	cout <<"The Lion" ; }

if((m=="august" && d>=23)||(m=="september" && d <=22 )){
	cout <<"The Virgin" ; }

if((m=="september" && d>=23)||(m=="october" && d <=22 )){
	cout <<"The Scales" ; }

if((m=="october" && d>=23)||(m=="november" && d <=21 )){
	cout <<"The Scorpion" ; }

if((m=="november" && d>=22)||(m=="december" && d <=21 )){
	cout <<"The Archer" ; }

if((m=="december" && d>=22)||(m=="january" && d <=19 )){
	cout <<"The Goat" ; }

if((m=="january" && d>=20)||(m=="feburary" && d <=18 )){
	cout <<"The Water Bearer" ; }

if((m=="feburary" && d>=19)||(m=="march" && d <=20 )){
	cout <<"The Fishes" ; }
   
}