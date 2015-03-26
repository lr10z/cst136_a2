//
// CST 136 - Assignment #2
//
// Author: Leander Rodriguez
//
// File: main.cpp
//
// Due date:  Sunday, April 28th by 11:59pm
//



#include  <iostream>
#include  "array.h"


using  namespace  std;



void safeArrayCLASStests()
{

	cout <<  endl
		 <<  "These are the SafeArray class tests"  
		 <<  endl  
		 <<  endl;

	SafeArray a( 100 );

	a.set( 18, 21 );
	cout  <<  a.get( 18 )  <<  " ";


	cout <<  endl
		 <<  endl;



	
	// Check within bounds
	a.set( 40, 36 );
	a.set( 45, 37 );
	a.set( 50, 38 );

	cout  <<  a.get( 40 )  
		  <<  " "  
		  <<  a.get( 45 )  
		  <<  " "
		  <<  a.get( 50 ) 
		  <<  endl;

	cout <<  endl;


	
	// Check copy constructor
	SafeArray c(a);


	int x = c.get(40) ;

	// Check within bounds
	cout  <<  x
		  <<  " "  
		  <<  c.get( 45 )  
		  <<  " "
		  <<  c.get( 50 ) 
		  <<  endl
		  <<  endl;
	

	// Check copy set out of bounds
	//c.set( 39, 36 );
	//c.set( 51, 36 );
	

	// Check copy get out of bounds
	//cout  <<  c.get( 39 )  <<  endl;
	//cout  <<  c.get( 51 )  <<  endl;
	
}




void arrayCLASStests()
{
	
	cout <<  endl
		 <<  "These are the Array class tests"  
		 <<  endl  
		 <<  endl;
	
	
	Array a( 20, 10 );

	
	a.set( 18, 20 );
	cout  <<  a.get( 18 )  <<  " ";
	
	cout <<  endl  <<  endl;
	
	Array b( 30, 10 );

	b.set( 28, 27 );
	cout  <<  b.get( 28 )  <<  endl;

}



int main()
{
	arrayCLASStests();

	safeArrayCLASStests();

	return 0;
}