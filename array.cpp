//
// CST 136 - Assignment #2
//
// Author: Leander Rodriguez
//
// File: array.cpp
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
Array::Array( const int upperB, 
			  const int lowerB ) : m_upperBound( upperB ), 
								   m_lowerBound( lowerB ),
								   m_numElements( (m_upperBound - m_lowerBound) + 1 )
{
	
	//
	//  Checks if bounds are valid for use
	//
	if( m_upperBound >= m_lowerBound )
	{

		//
		// Allocates dynamic memory and checks for successful 
		// allocation
		//
		m_values  =  new  ELEMENT_TYPE[m_numElements];

		checkMEMallocation();
		
	}
	else
	{
		cout  <<  "Error, the upper bound is less than the lower bound!"  
			  <<  endl;

		exit( EXIT_FAILURE );
	}

}



//
// Copy constructor
//
Array::Array( const Array &rhs ) : m_upperBound( rhs.upperBound() ),
								   m_lowerBound( rhs.lowerBound() ),
								   m_numElements( rhs.numElements() ),
								   m_values( new ELEMENT_TYPE[rhs.numElements()] )
{

	checkMEMallocation();

	
	for( int idx = 0; idx < rhs.numElements(); ++idx )
	{
		m_values[idx] = rhs.m_values[idx];
	}
	
}



//
// Allows the caller to place an element value at a specific
// index position in the array
//
void Array::set( const int indexPosition, ELEMENT_TYPE elementValue )
{
	m_values[indexPosition - m_lowerBound] = elementValue;
}



//
// Allows the caller to fetch an element value from a specific
// index position within the array
//
ELEMENT_TYPE Array::get( const int indexPosition ) const
{
	return m_values[indexPosition - m_lowerBound];
}



//
// Returns the number of bytes that were allocated to
// hold all the elements
//
int Array::size() const 
{ 
	return  m_numElements * sizeof( ELEMENT_TYPE );
}



//
// Checks if memory was successfully allocated
//
void Array::checkMEMallocation() const
{

	if  ( ! m_values )
		{
			cout  <<  "Memory allocation failure!"  
				  <<  endl;

			exit( EXIT_FAILURE );
		}

}









