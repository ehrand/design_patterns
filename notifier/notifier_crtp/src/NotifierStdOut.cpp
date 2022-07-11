///
/// @file
/// @brief 	This file contains implementation of class NotifierStdOut.
/// @author	Andrei Ehrlich
///

#include "NotifierStdOut.hpp"

void NotifierStdOut::doNotify(std::string_view msg) {
  std::cout << _notificationBackend << ": " << msg << std::endl;
}
