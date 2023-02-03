#include<iostream>
using namespace std ;

bool samenum(int x , int y , int z){
	if(x==y==z){
		return true ; }
	else{
		return false ;}}


main(){
float x , y , z;
cout <<"Enter 1st num:" ;
cin >> x ;
cout <<"Enter 2nd num:" ;
cin >> y ;
cout <<"Enter 3rd num:" ;
cin >> z ;
bool r = samenum(x,y,z) ;

if(r==true){
	cout <<"Yes!" ; }
else{
	cout <<"No!" ; }

} 