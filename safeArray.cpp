//
// CST 136 - Assignment #2
//
// Author: Leander Rodriguez
//
// File: safeArray.cpp
//
// Due date:  Sunday, April 28th by 11:59pm
//



#include  <iostream>
#include  <string>
#include  <stdlib.h>
#include  "array.h"


using  namespace  std;



//
// Constructor
//
SafeArray::SafeArray( const int upperB, 
					  const int lowerB ) : Array( upperB, 
												  lowerB )
{

}



//
// Allows the caller to place an element value at a specific
// index position in the array; if index position is valid
//
void SafeArray::set( const int indexPosition, ELEMENT_TYPE elementValue)
{

	if( upperBound() >= indexPosition  &&  indexPosition >= lowerBound() )
	{

		Array::set(  indexPosition, elementValue );
		
	}
	else
	{
		cout  <<  "Error, you are trying to set an index position that is out of range!"  
			  <<  endl
			  <<  endl;

		exit( EXIT_FAILURE );
	}
	
}



//
// Allows the caller to fetch an element value from a specific
// index position within the array; if index position is valid
//
ELEMENT_TYPE SafeArray::get( const int indexPosition ) const
{

	if( upperBound() >= indexPosition  &&  indexPosition >= lowerBound() )
	{

		return Array::get( indexPosition );

	}
	else
	{

		cout  <<  "Error, you are fetching an array index position that is out of range!"  
			  <<  endl
			  <<  endl;

		exit( EXIT_FAILURE );

	}

}


