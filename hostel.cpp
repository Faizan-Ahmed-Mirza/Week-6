#include<iostream>
using namespace std ;

main(){
string month ; int days ;
cout <<"Enter the month: " ;
cin >> month ;
cout <<"Enter number of days to stay: " ;
cin >> days ;
float rate1 , rate2 , price1 , price2 , total1 , total2 , discount1 , discount2 ;

if(month=="may" || month == "october"){
	rate1 = 50 ; rate2 = 65;
	price1 = days*rate1 ; price2 = days*rate2 ;
	if (days > 14){
		discount1 = price1*30/100 ;
		total1 = price1-discount1 ;
		discount2 = price2*10/100 ; 
		total2 = price2 - discount2 ; }
	else if(days>7){
		discount1 = price1*5/100 ;
		total1 = price1-discount1 ;}
	else{
		total1 = price1 ;
		total2 = price2 ; }    }

if(month=="june" || month == "september"){
	rate1 = 75.2 ; rate2 = 68.7;
	price1 = days*rate1 ; price2 = days*rate2 ;
	if (days > 14){
		discount1 = price1*20/100 ;
		total1 = price1-discount1 ;
		discount2 = price2*10/100 ; 
		total2 = price2 - discount2 ; }

	else{
		total1 = price1 ;
		total2 = price2 ; }    }


if(month=="july" || month == "august"){
	rate1 = 76 ; rate2 = 77;
	price1 = days*rate1 ; price2 = days*rate2 ;
	if (days > 14){
		total1 = price1 ;
		discount2 = price2*10/100 ; 
		total2 = price2 - discount2 ; }
	else{
		total1 = price1 ;
		total2 = price2 ; }    }


cout <<"For Studio: " << total1 <<"$     For apartment: " << total2 << "$" ; 

}
