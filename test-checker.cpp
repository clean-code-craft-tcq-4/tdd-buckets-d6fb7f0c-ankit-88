#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "charging.hpp"

TEST_CASE("passing 2 values") {
	int CurrentValues[2] = [4, 5];
	REQUIRE(getCurrentRangeOccurance(CurrentValues) == "4-5,2");
}

