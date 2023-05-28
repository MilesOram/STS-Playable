# CMakeList.txt : CMake project for BaseSTS, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (BaseSTS    "enemies.cpp" "enemies.h" "events.cpp" "events.h"
"gamestate.h" "gamestate1.cpp" "gamestate2.cpp" "gamestate3.cpp" "ic_cards.cpp" "ic_cards.h"
"pc_info.cpp" "pc_info.h" "top.cpp" "top.h" "card.cpp" "card.h" "character.cpp" 
"character.h" "effects_triggers.cpp" "effects_triggers.h" "potions.h" "visuals.h"
"savestate.h" "potions.cpp" "relic.cpp"  "visuals.cpp" "savestate.cpp" "Main.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET BaseSTS PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
