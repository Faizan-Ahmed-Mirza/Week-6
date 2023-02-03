#include<iostream>
using namespace std ;

main(){
	int h , x , y ;
	cout <<"Enter value of h(integer): " ;
	cin >> h ;
	cout <<"Enter X-coordinate of point: " ;
	cin >> x ;
	cout <<"Enter Y-coordinates: " ;
	cin >> y ;

	if((x == 1*h || x == 2*h || (x == 0 && y <= h)) || (y == 1*h || y == 4*h || (y == 0 && x <= 3*h))){
		cout <<"Point is on the boundary." ; }
		
	else if(((x < 3*h && y < h) && (x > 0 && y > 0)) || (x > h && x < 2*h) && (y > 0 && y < 4*h)){
		cout <<"Point is inside the block." ; }

	else if((x > 2*h || y > 4*h) || (x < 1*h || y < 1*h)){
		cout <<"Point is outside the block." ;
	}

	
	

	

}
