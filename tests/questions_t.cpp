#include "questions/questions.hpp"
#include "catch2/catch.hpp"

using namespace questions;

TEST_CASE( "add_one", "[questions]" ){
  REQUIRE(add_one(0) == 1);
  REQUIRE(add_one(123) == 124);
  REQUIRE(add_one(-1) == 0);
}
