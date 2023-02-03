#include<iostream>
using namespace std ;

main(){
char t ; float m , s , p , a , k , l;
cout <<"Enter the service type(R/P): " ;
cin >> t ;
cout <<"Enter total usage of service(in minutes): " ;
cin >> m;

if(t=='r' || t == 'R'){
	s = 10 ; }
else if(t=='p' || t=='P'){
	s = 25 ; } 
else{
	cout<<"Error" ; return 0 ; }

if(s==10 && m > 50){
	a = m -50 ;
	p = 10+(a*0.2) ; }

else if(s==10 && m<50){
	p = 10 ; }

if(s==25){
	cout << "Enter time(Day(D)/Night(N)) :" ;
	char time ;
	cin >> time ;
	if (time =='d' || 'D'){
		 l = 0.1 ;  k = 75 ; }
	else if(time=='n' || 'N'){
		 l =0.05 ;  k = 100 ; }
	else{
		cout <<"Error" ; }
	if(m >k){
		a = m - k ;
		p = 25 +(a*l);}
	else{
		p =25 ;}


}

cout <<"Your charges are: " << p << "$." ;


}


