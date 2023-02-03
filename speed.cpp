#include <iostream>
using namespace std ;

main(){
float s ;
cout <<"Enter Speed : " ;
cin >> s ;  cout << endl;
if(s <= 10 ){
	cout << "Slow" ; }
if(s > 10 && s <= 50){
	cout << "average" ; }
if(s > 50 && s <= 150){
	cout << "fast" ; }
if(s > 150 && s <= 1000){
	cout << "ultra-fast" ; }
if(s > 1000){
	cout << "extremely fast" ; }

}