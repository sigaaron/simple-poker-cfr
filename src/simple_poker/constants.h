#ifndef PYKER_CONSTANTS_H
#define PYKER_CONSTANTS_H


#include <string>
#include <array>
#include <vector>


// The betting round works like this:
//
// |       Sequential Actions       |            Payoff             |
// |----------+----------+----------|-------------------------------|
// | Player 1 | Player 2 | Player 1 |                               |
// |----------|----------|----------|-------------------------------|
// | pass     | pass     |          | +1 to player with better hand |
// | pass     | bet      | pass     | +1 to player 2                |
// | pass     | bet      | bet      | +2 to player with better hand |
// | bet      | pass     |          | +1 to player 1                |
// | bet      | bet      |          | +2 to player with better hand |


const int NUM_ACTIONS = 2;
enum Action: uint8_t {
    /// check or fold
    PASS = 0,
    /// call or raise
    BET = 1,
};


typedef uint8_t Card;
/// This is shuffled, then player 1 gets card deck[0] and player 2 gets card card[1]. card[2] is the community card.
typedef std::array<Card, 13> Deck;
typedef std::vector<Action> History;


#endif //PYKER_CONSTANTS_H
