///
/// @file
/// @brief 	This file contains definition of class NotifierNull.
/// @author	Andrei Ehrlich
///

#pragma once

#include <string_view>

///
/// @class	NotifierNull.
/// @brief	This Notifier provides a empty notifier implementation.
///
class NotifierNull {
public:
  void notify(std::string_view /*unused*/) {}
};
