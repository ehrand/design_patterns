///
/// @file
/// @brief 	This file contains definition of class NotifierStdOut.
/// @author	Andrei Ehrlich
///

#pragma once

#include <iostream>

///
/// @class  NotifierStdOut
/// @brief  This class provides an implementation for sending a notification
///         to stdout backend.
///
class NotifierStdOut {
public:
  void notify(std::string_view msg) {
    std::cout << _notificationBackend << ": " << msg << std::endl;
  }

private:
  const std::string _notificationBackend{"NotifierStdOut"};
};
