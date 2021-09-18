//unique_ptr sınıfının T* parametreli kurucu işlevi explicit

#include <memory>
#include "triple.h"

std::unique_ptr<Triple> foo()
{
	return new Triple; //gecersiz
}
