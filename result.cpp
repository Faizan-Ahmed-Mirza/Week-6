#include<iostream>
using namespace std ;

main(){
float n1 , n2 , n3 ,n4 , n5 ; string name , grade ;
cout << "Enter the 5 subjects marks(press enter after each subjects marks: " ;
cin >> n1 ; cin >> n2 ; cin >> n3 ; cin >>n4 ;cin >>n5 ;
cout <<"Enter student name: " ;
cin >> name ;

float t = n1+n2+n3+n4+n5 ;
int p = t*100/500 ; 

if(p >= 90){
	cout << "Grade : A+ " << endl ; }
if(90 > p && p >= 80){
	cout << "Grade : A " << endl ; }
if(80 > p && p >= 70){
	cout << "Grade : B+ " << endl ; }
if(70 > p && p >= 60){
	cout << "Grade : B " << endl ; }
if(60 > p && p >= 50){
	cout << "Grade : C " << endl ; }
if(50 > p && p >= 40){
	cout << "Grade : D " << endl ; }
if(40 > p){
	cout << "Grade : F " << endl ; }

cout<<"Total marks : " << t << endl ;
cout << "pcentage : "<< p << endl ;  }
