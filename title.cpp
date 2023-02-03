#include<iostream>
using namespace std ;

string label(string x , int y){
	string p ;
	if(x!="male" && x!="female"){
		cout <<"Invalid input" << endl ; }
	if(x=="male" && y>=16){
		p = "Mr." ; }
	if(x=="male" && y<16){
		p = "Master" ; }
	if(x=="female" && y>=16){
		p = "Ms." ;}
	if(x=="female" && y <16){
		p = "Miss" ; } 
return p ; }
		

main(){
string g ; int a ;
cout <<"Enter your Gender: " << endl ;
cin >> g ; cout << endl ;
cout << "Enter your age: " << endl ;
cin >> a ;
cout << label(g,a) ; }