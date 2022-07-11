///
/// @file
/// @brief 	This file contains implementation of class NotifierEmail.
/// @author	Andrei Ehrlich
///

#include "NotifierEmail.hpp"

void NotifierEmail::doNotify(std::string_view msg) {
  std::cout << _notificationBackend << ": " << msg << std::endl;
}
