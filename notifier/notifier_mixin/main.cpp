#include <iostream>
#include <string_view>

///
/// @struct NotifierNull.
/// @brief  This struct provides an interface for notification over empty
///         backend.
///
struct NotifierNull {
  void notify(std::string_view /*unused*/) {}
};

///
/// @struct NotifierEmail.
/// @brief  This struct provides an interface for notification over email
///         backend.
///
template <typename Notifier> struct NotifierEmail : public Notifier {
  void notify(std::string_view msg) {
    std::cout << "NotifierEmail: " << msg << std::endl;
    Notifier::notify(msg);
  }
};

///
/// @struct NotifierSms.
/// @brief  This struct provides an interface for notification over sms
///         backend.
///
template <typename Notifier> struct NotifierSms : public Notifier {
  void notify(std::string_view msg) {
    std::cout << "NotifierSms: " << msg << std::endl;
    Notifier::notify(msg);
  }
};

int main(int /*argc*/, char * /*argv*/[]) {
  NotifierEmail<NotifierNull> email;
  email.notify("Notification message");

  std::cout << std::endl;
  NotifierSms<NotifierNull> sms;
  sms.notify("Notification message");

  std::cout << std::endl;
  NotifierSms<NotifierEmail<NotifierNull>> smail;
  smail.notify("Notification message");

  return 0;
}
