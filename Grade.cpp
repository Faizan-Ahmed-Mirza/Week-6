#include<iostream>
using namespace std ;

main(){
float x ;
cout << "Enter your marks :" ;
cin >> x ;

if(x<50){
	cout <<"Your Grade is F" << endl ;}

if(x>=50 && x<=60){
	cout <<"Your Grade is E" << endl ;}

if(x>60 && x<=60){
	cout <<"Your Grade is D" << endl ;}

if(x>70 && x<=80){
	cout <<"Your Grade is C" << endl ;}

if(x>80 && x<=85){
	cout <<"Your Grade is B" << endl ;}

if(x>85){
	cout <<"Your Grade is A" << endl ;}

 }