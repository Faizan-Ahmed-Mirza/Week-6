#include<iostream>
using namespace std ;

float cheap(int n , string t){
	float p ;
	if(n<=20 && t =="day"){
		return p = n*0.79 + 0.7 ;}
	if(n<=20 && t =="night"){
		return p = n*0.9 + 0.7 ;}

	if(n>20 && n < 100 && (t =="night" || t =="day")){
		return p = n*0.09 ;}

	if(n>=100 && (t =="night" || t =="day")){
		return p = n*0.06 ;}
		}

main(){
int n ; string t ; float p ;
cout << "Enter distance (kilometers) :" << endl ;
cin >> n ;
cout << "Enter time(day/night) : " << endl ;
cin >> t ;
cout << endl << "The chepeast price possible is : " << cheap(n,t) ; }
