///
/// @file
/// @brief 	This file contains definition of class NotifierNull.
/// @author	Andrei Ehrlich
///

#pragma once

#include "Notifier.hpp"

///
/// @class	NotifierNull.
/// @brief	This Notifier provides a empty notifier implementation.
///
class NotifierNull : public Notifier<NotifierNull> {
private:
  void doNotify(std::string_view /*unused*/);

  friend Notifier<NotifierNull>;
};
