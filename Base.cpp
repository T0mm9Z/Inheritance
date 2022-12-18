/*
 * Base.cpp
 *
 *  Created on: Dec 18, 2022
 *      Author: kali-linux
 */

#include "Base.h"




Base::~Base() {
	// TODO Auto-generated destructor stub
}

void Base::printSomething()
{
	std::cout << txt_ << std::endl;
}

void Base::setText(std::string txt)
{
	txt_ = txt;
}
