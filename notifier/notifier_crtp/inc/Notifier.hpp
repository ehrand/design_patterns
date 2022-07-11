///
/// @file
/// @brief  This file contains definition of class Notifier.
/// @author Andrei Ehrlich
///

#pragma once

#include <string_view>

///
/// @class  Notifier
/// @brief  This class provides an interface for sending a notification.
///         Compared to polymorphic implementation using virtual methods this
///         variant resolves implementation to be called at compile time.
///
template <typename Impl> class Notifier {
public:
  void notify(std::string_view msg) { impl().doNotify(msg); }

private:
  ///
  /// @brief  Resolve interface implementation at compile time.
  /// @return Interface implementation.
  ///
  Impl &impl() { return static_cast<Impl &>(*this); }
};
