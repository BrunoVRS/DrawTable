#ifndef GAMEDATA_HPP_
#define GAMEDATA_HPP_

#include <bitset>

enum class State { Playing, NotPlaying};
enum class Input { draw, DontDraw };

struct GameData {
  State m_state{State::NotPlaying};
  std::bitset<2> m_input;  // [drawing, not drawing]
};

#endif