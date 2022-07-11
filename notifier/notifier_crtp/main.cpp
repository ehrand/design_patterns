#include <iostream>
#include <istream>
#include <string_view>

#include <NotifierEmail.hpp>
#include <NotifierNull.hpp>
#include <NotifierStdOut.hpp>

int main(int /*argc*/, char * /*argv*/[]) {

  NotifierEmail email;
  email.notify("Sending a message...");

  NotifierStdOut stdout;
  stdout.notify("Sending a message...");

  NotifierNull null;
  null.notify("Sending a message ...");

  return 0;
}
