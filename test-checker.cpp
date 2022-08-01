#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "typewise-alert.h"

//createCoolingLimitsVector();
//createalertTargetFuncPtrVector();
TEST_CASE("infers the breach according to limits") {
	REQUIRE(inferBreach(12, 20, 30) == TOO_LOW);
	REQUIRE(inferBreach(40, 20, 30) == TOO_HIGH);
	REQUIRE(inferBreach(25, 20, 30) == NORMAL);
}
