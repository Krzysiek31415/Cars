#include "catch_amalgamated.hpp"
#include "../InvalidGear.hpp"
#include "../PetrolEngine.hpp"
#include "../Engine.hpp"


SCENARIO( "shifting gears", "[GEARS]" ) {

    GIVEN( "PetrolEngine Object: engine(100_hp, 2000, 5)" ) {
        PetrolEngine engine{100_hp, 1900_ccm, 5};

        WHEN( "after definition" ) {
            THEN( "number of gears = 5" ) {
                REQUIRE( engine.getGears() == 5 );
            }
            THEN( "current gear = 0" ) {
                REQUIRE( engine.getCurrentGear() == 0 );
            }
        }

        WHEN( "change current gear form 0 to 3" ) {
            REQUIRE_NOTHROW( engine.changeGear(3));
            THEN( "current gear = 3" ) {
                REQUIRE( engine.getCurrentGear() == 3 );
            }
        }

        WHEN( "change current gear to 5" ) {
            THEN( "throw InvalidGear exception" ) {
                REQUIRE_THROWS_AS( engine.changeGear(5), InvalidGear);
            }
        }

        WHEN( "from 5 to -1" ) {
            engine.changeGear(4);
            THEN( "throw InvalidGear exception" ) {
                REQUIRE_THROWS_AS( engine.changeGear(-1), InvalidGear);
            }
        }
        
    }
}






