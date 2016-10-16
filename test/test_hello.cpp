#include <gtest/gtest.h>
#include "hello.h"

TEST(Hello1, get_message)
{
  std::string m = get_message();
  ASSERT_EQ("Hello, World!", m);
}

TEST(Hello2, ex_parfor)
{
  int nCores = ex_parfor();
  ASSERT_GT(nCores, 1);
}
