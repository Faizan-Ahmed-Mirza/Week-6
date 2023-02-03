#include<iostream>
using namespace std ;

float income(string t , int m){
	float p ;
 	if(t=="premiere"){
		return p = m*12 ; }
	if(t=="Normal"){
		return p = m*7.5 ; }
	if(t=="Discount"){
		return p = m*5 ; } 
	else{return 0 ; }}



main(){
int r , c , p; string t ;
cout << "Enter number of rows :" ;
cin >> r ;
cout<< endl <<"Enter number of colums :" << endl;
cin >> c ;
cout<< endl <<"Enter type of Screen:" << endl;
cin >> t ; int m = r*c ;
cout <<"Total income is : " << income(t,m) ;


}