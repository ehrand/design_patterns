///
/// @file
/// @brief 	This file provides definition of class NotifierEmail.
/// @author	Andrei Ehrlich
///
/// Copyright (c) 2022, GS Elektromedizinische Geraete G. Stemple GmbH.
/// All rights reserved.
///

#pragma once

#include "Notifier.hpp"

#include <iostream>

///
/// @class  NotifierEmail
/// @brief  This class provides an implementation for sending a notification
///         to email backend.
///
class NotifierEmail : public Notifier<NotifierEmail> {
private:
  void doNotify(std::string_view msg);

  const std::string _notificationBackend{"NotifierEmail"};
  friend Notifier<NotifierEmail>;
};
