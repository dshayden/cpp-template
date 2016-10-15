#include <gflags/gflags.h>
#include <glog/logging.h>

#include <iostream>

#include "hello.h"

using namespace std;

DEFINE_bool(some_flag, false, "flag option with default true value");
DEFINE_string(some_str, "default str", "string option");
DEFINE_double(some_double, 3.1415, "double option");
DEFINE_int32(some_int, 42, "int option");

int main(int argc, char* argv[]) {
  google::InitGoogleLogging(argv[0]);
  gflags::ParseCommandLineFlags(&argc, &argv, true);
  LOG(INFO) << "Running test program logging";
  if (FLAGS_some_flag) cout << "passed some_flag" << endl;
  cout << FLAGS_some_str << ", " << FLAGS_some_double << FLAGS_some_int << endl;

  hello();
  return 0;
}
