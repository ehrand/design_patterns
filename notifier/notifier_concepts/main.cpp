#include <iostream>
#include <istream>
#include <string_view>

#include <NotifierEmail.hpp>
#include <NotifierNull.hpp>
#include <NotifierStdOut.hpp>

template <typename Notifier>
concept CanNotify = requires(Notifier notifier) {
  notifier.notify(std::string_view{});
};

template <CanNotify Notifier>
void notificator(Notifier &notifier, std::string_view msg) {
  notifier.notify(msg);
}

int main(int /*argc*/, char * /*argv*/[]) {

  std::cout << std::endl;
  NotifierEmail email;
  notificator(email, "Sending a message...");

  std::cout << std::endl;
  NotifierStdOut stdout;
  notificator(stdout, "Sending a message...");

  std::cout << std::endl;
  NotifierNull null;
  notificator(null, "Sending a message ...");

  return 0;
}
