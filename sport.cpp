#include<iostream>
using namespace std;

main(){
string t , h ;
cout <<"Enter temperature(warm/cold): " ;
cin >> t ;
cout <<"Enter humidity(dry/humid): " ;
cin >> h ;

if(t=="warm" && h =="dry"){
	cout <<"Play Tenis" ; }

if(t=="warm" && h =="humid"){
	cout <<"Swim" ; }

if(t=="cold" && h =="dry"){
	cout <<"Play basketball" ; }

if(t=="cold" && h =="humid"){
	cout <<"Watch tv" ; }  }