/*
  make_exception_ptr bir fonksiyon şablonu.
  template <class E>
  exception_ptr make_exception_ptr (E e) noexcept;

  Fonksiyon kendisilen 

The behavior of this function template is equivalent to:
1
2
3
4
5
6
7
template <class E> exception_ptr make_exception_ptr (E e) noexcept {
  try {
     throw e;
  } catch(...) {
     return current_exception();
  }
}


*/


#include <iostream>   
#include <exception>  
#include <stdexcept>  

int main() 
{
    //...
    auto p = std::make_exception_ptr(std::range_error("aralik disi deger"));

    //...
    try {
        std::rethrow_exception(p);
    }
    catch (const std::exception& e) {
        std::cout << "hata yakalandi: " << e.what() << '\n';
    }
}
