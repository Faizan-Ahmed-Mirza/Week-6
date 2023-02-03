#include<iostream>
using namespace std ; 

main(){
int arrivalhour , arrivalminute , examminute , examhour  , totallatemin , latemin , latehour , arrivalhourmin , examhourmin ;
cout <<"Exam starting time(hours): " ;
cin >> examhour ;
cout << "Exam starting time(minutes) :" ;
cin >> examminute ;
cout <<"Enter the hour of arrival: " ;
cin  >> arrivalhour ;
cout <<"Enter minutes of arrival :" ;
cin >> arrivalminute ;

examhourmin = examhour*60 + examminute ;
arrivalhourmin = arrivalhour*60 + arrivalminute ;
totallatemin = arrivalhourmin - examhourmin ;


if(arrivalhourmin>examhourmin){
	if(totallatemin < 60){
		cout <<"Late!  " << totallatemin << "mins after the exam." << endl ; } 
	else if(totallatemin >= 60){
		latemin = totallatemin % 60 ;
		latehour = totallatemin/60 ;
		cout <<"Late!  " << latehour << "hrs and " << latemin << "mins after the exam." << endl ; }}

else if((examhourmin>arrivalhourmin)){
	totallatemin = totallatemin*(-1) ;
	if((totallatemin < 60) && (totallatemin > 30)){
		cout <<"Early!  " << totallatemin << "mins before the exam." << endl ; } 

	else if(totallatemin >= 60){
		latemin = totallatemin % 60 ;
		latehour = totallatemin/60 ;
		cout <<"Early!  " << latehour << "hrs and " << latemin << "mins before the exam." << endl ; }

	else if(totallatemin < 60 && totallatemin <= 30){
		cout <<"On time!  " << totallatemin << "mins before the exam." << endl ; } }



	



}
		
	
