//
// CST 136 - Assignment #2
//
// Author: Leander Rodriguez
//
// File: array.h
//
// Due date:  Sunday, April 28th by 11:59pm
//



#ifndef  array_H
#define  array_H


//
// Constant data type
//
typedef int ELEMENT_TYPE;



//
// Parent class
//
class  Array
{

  public  :


	//
	// Constructor
	//
	Array( const int upperB, const int lowerB = 0 );


	//
	// Copy Constructor
	//
	// This is needed so that objects of this class type
	// can be copied
	//
	Array( const Array &rhs );



	//
	// Destructor
	//
	~Array() { delete m_values; }
	


	//
	// Methods
	//
	void set( const int indexPosition, const ELEMENT_TYPE elementValue );
	
	ELEMENT_TYPE get( const int indexPosition ) const;

	int lowerBound() const { return  m_lowerBound; }
  
	int upperBound() const { return m_upperBound; }

	int numElements() const { return  m_numElements; }

	int size() const;


  private  :


    //
	// Member variables
	//
	const int m_upperBound;
	const int m_lowerBound;
	const int m_numElements;
	ELEMENT_TYPE *m_values;


	//
	// Methods
	//
	void checkMEMallocation() const;

};




//
// Child class, allows for additional functionality with
// index bound checking
//
class  SafeArray : public Array
{

  public  :


	//
	// Constructor
	//
	SafeArray( int upperB, int lowerB = 0 );
	

	//
	// Methods
	//
	void set( const int indexPosition, const ELEMENT_TYPE elementValue );
	
	ELEMENT_TYPE get( const int indexPosition ) const;
	 
};


#endif
