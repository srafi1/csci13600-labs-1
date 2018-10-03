#include "catch.hpp"
#include "main.hpp"

TEST_CASE("Twin primes") {
  REQUIRE(isTwinPrime(101));
  REQUIRE(isTwinPrime(1019));
  REQUIRE(isTwinPrime(1031));
  REQUIRE(isTwinPrime(1049));
  REQUIRE(isTwinPrime(1061));
  REQUIRE(isTwinPrime(107));
  REQUIRE(isTwinPrime(1091));
  REQUIRE(isTwinPrime(11));
  REQUIRE(isTwinPrime(1151));
  REQUIRE(isTwinPrime(1229));
  REQUIRE(isTwinPrime(1277));
  REQUIRE(isTwinPrime(1289));
  REQUIRE(isTwinPrime(1301));
  REQUIRE(isTwinPrime(1319));
  REQUIRE(isTwinPrime(137));
  REQUIRE(isTwinPrime(1427));
  REQUIRE(isTwinPrime(1451));
  REQUIRE(isTwinPrime(1481));
  REQUIRE(isTwinPrime(1487));
  REQUIRE(isTwinPrime(149));
  REQUIRE(isTwinPrime(1607));
  REQUIRE(isTwinPrime(17));
  REQUIRE(isTwinPrime(179));
  REQUIRE(isTwinPrime(191));
  REQUIRE(isTwinPrime(197));
  REQUIRE(isTwinPrime(227));
  REQUIRE(isTwinPrime(239));
  REQUIRE(isTwinPrime(269));
  REQUIRE(isTwinPrime(281));
  REQUIRE(isTwinPrime(29));
  REQUIRE(isTwinPrime(3));
  REQUIRE(isTwinPrime(311));
  REQUIRE(isTwinPrime(347));
  REQUIRE(isTwinPrime(41));
  REQUIRE(isTwinPrime(419));
  REQUIRE(isTwinPrime(431));
  REQUIRE(isTwinPrime(461));
  REQUIRE(isTwinPrime(5));
  REQUIRE(isTwinPrime(521));
  REQUIRE(isTwinPrime(569));
  REQUIRE(isTwinPrime(59));
  REQUIRE(isTwinPrime(599));
  REQUIRE(isTwinPrime(617));
  REQUIRE(isTwinPrime(641));
  REQUIRE(isTwinPrime(659));
  REQUIRE(isTwinPrime(71));
  REQUIRE(isTwinPrime(809));
  REQUIRE(isTwinPrime(821));
  REQUIRE(isTwinPrime(827));
  REQUIRE(isTwinPrime(857));
  REQUIRE(isTwinPrime(881));
}