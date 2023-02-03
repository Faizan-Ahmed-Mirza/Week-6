#include<iostream>
using namespace std;

main(){
string t ; float n ,a ; float b , transport , ticketprice ;
cout <<"Enter ticket category(vip/normal): " ;
cin >> t ;
cout <<"Enter number of people in group: " ;
cin >> n;
cout <<"Enter budget(QR): " ;
cin >> b ; 

if(t == "vip"){
	ticketprice = n*499.99 ; }

if(t=="normal"){
	ticketprice = n*249.99 ; }


if(4>=n && n>=1){
	transport = (75*b)/100 ;
	a = b - transport-ticketprice ;
	if(a > 0){
		cout <<"Yes! You have "<< a <<"(QR) left!" << endl ; }
	if(a < 0){
		cout <<"No! You lack "<< -1*a <<"(QR)" << endl ; }
	if(a == 0){
		cout <<"Yes! You have "<< a <<"(QR) left!" << endl ; } }

if(9>=n && n>=5){
	transport = (60*b)/100 ;
	a = b - transport-ticketprice ;
	if(a > 0){
		cout <<"Yes! You have "<< a <<"(QR) left!" << endl ; }
	if(a < 0){
		cout <<"No! You lack "<< -1*a <<"(QR)" << endl ; }
	if(a == 0){
		cout <<"Yes! You have "<< a <<"(QR) left!" << endl ; } }

if(24>=n && n>=10){
	transport = (50*b)/100 ;
	a = b - transport -ticketprice ;
	if(a > 0){
		cout <<"Yes! You have "<< a <<"(QR) left!" << endl ; }
	if(a < 0){
		cout <<"No! You lack "<< -1*a <<"(QR)" << endl ; }
	if(a == 0){
		cout <<"Yes! You have "<< a <<"(QR) left!" << endl ; } }

if(49>=n && n>=25){
	transport = (40*b)/100 ;
	a = b - transport - ticketprice ;
	if(a > 0){
		cout <<"Yes! You have "<< a <<"(QR) left!" << endl ; }
	if(a < 0){
		cout <<"No! You lack "<< -1*a <<"(QR)" << endl ; }
	if(a == 0){
		cout <<"Yes! You have "<< a <<"(QR) left!" << endl ; } }

if(n >=50){
	transport = (25*b)/100 ;
	a = b - transport -ticketprice ;
	if(a > 0){
		cout <<"Yes! You have "<< a <<"(QR) left!" << endl ; }
	if(a < 0){
		cout <<"No! You lack "<< -1*a <<"(QR)" << endl ; }
	if(a == 0){
		cout <<"Yes! You have "<< a <<"(QR) left!" << endl ; } }
	
		
	}
	
