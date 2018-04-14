/*Assignment 4: Calculator 2
*Adrianna Smith
*/

// -*- C++ -*-
// $Id: Stack.h 380 2010-02-08 05:10:33Z hillj $

//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _CS507_CALCULATOR_H_
#define _CS507_CALCULATOR_H_

#include <exception>

/**
 * @class Calculator
 *
 * Basic calculator that evaluates given expressions
 */
//template <typename T>
class Calculator
{
public:
  /// Type definition of the type.
 // typedef T type;

  /**
   * @class empty_exception
   *
   * Exception thrown to indicate the stack is empty.
   */
  class empty_exception : public std::exception
  {
  public:
    /// Default constructor.
    empty_exception (void)
      : std::exception () { }

    /**
     * Initializing constructor.
     *
     * @param[in]      msg         Error message.
     */
    empty_exception (const char * msg)
      : std::exception (msg) { }
  };

  /// Default constructor.
  Calculator (void);


  /// Destructor.
  ~Calculator (void);



  /**
   * Push a new \a element onto the calculator. The element is inserted
   * before all the other elements in the list.
   *
   * @param[in]      element       Element to add to the list
   */
  void push (T element);

  /**
   * Remove the top-most element from the calculator.
   *
   * @exception      empty_exception    The calculator is empty.
   */
  void pop (void);

  /**
   * Get the top-most element on the Calculator. If there are no element 
   * on the calculator, then the calculator_is_empty exception is thrown.
   *
   * @return         Element on top of the calculator.
   * @exception      empty_exception    The stack is empty
   */
  T top (void) const;
  
  /**
  *Find numbers in the given expression.
  @param		Given expression char *exp
  *@return 		The integer found
  */
  int numFind(char *exp);
  
  /**
  *Find operand in the given expression
  *@param		Given expression char* exp
  *@return		The character found for the operand
  */
  
  char opFind(char *exp);
  
  /**
  *Evaluate expression and give solution
  @param		first found number
  @param		second found number
  @param		found operand for expression
  *@return		Solution to the expression
  */
  
  int evalExp(int a, int b, char op);

  /**
   * Test if the Calculator is empty
   *
   * @retval         true          The calculator is empty
   * @retval         false         The calculator is not empty
   */
  bool is_empty (void) const;

 

  /// Remove all elements from the calculator.
  void clear (void);

private:
  // add member variable here
};

// include the inline files
//#include "Calculator.inl"

// include the source file since template class
#include "Calculator.cpp"

#endif  // !defined _CS507_STACK_H_
