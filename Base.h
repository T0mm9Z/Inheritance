/*
 * Base.h
 *
 *  Created on: Dec 18, 2022
 *      Author: kali-linux
 */

#ifndef BASE_H_
#define BASE_H_

#include <string>
#include <iostream>

class Base
{
public:
//	Base();
//	Base(std::string txt, uint8_t val);

  Base () : txt_ ("no text"), val_ (0)
  {
  }
  Base (std::string str, uint8_t val) : txt_ (str), val_ (0)
  {
  }
  virtual
  ~Base ();

  void printSomething ();
  void setText (std::string txt);

protected:

  std::string txt_;
  uint8_t val_;
};

#endif /* BASE_H_ */
