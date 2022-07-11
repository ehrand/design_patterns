///
/// @file
/// @brief 	This file contains definition of class NotifierStdOut.
/// @author	Andrei Ehrlich
///

#pragma once

#include "Notifier.hpp"

#include <iostream>

///
/// @class  NotifierStdOut
/// @brief  This class provides an implementation for sending a notification
///         to stdout backend.
///
class NotifierStdOut : public Notifier<NotifierStdOut> {
private:
  void doNotify(std::string_view msg);

  const std::string _notificationBackend{"NotifierStdOut"};
  friend Notifier<NotifierStdOut>;
};
