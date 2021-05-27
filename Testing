#include <algorithm>
#include <cstddef>
#include <memory>
#include <regex>
#include <string>
#include <type_traits>
#include <utility>
#include <vector>

#include "MockFake.h"
#include <catch.hpp>
#include <catch2/trompeloeil.h>

TEST_CASE("[TEST CASE] Discrete Interface", "[Interface]") {

    MockFake m;
    SECTION("Proof of Concept")
    {
        TROMPELOEIL_ALLOW_CALL_V(m, test(), .RETURN(3));
        int n = m.test();
        REQUIRE(n==3);
    }
}
