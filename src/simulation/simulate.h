#ifndef SIMPLE_POKER_CFR_SIMULATE_H
#define SIMPLE_POKER_CFR_SIMULATE_H


#include "player.h"


/// Simulates multiple games, where the starting player alternates between player1 and player2.
///
/// Information for interactive games will be printed if verbose is true.
/// This is recommended if one of the players is a CliPlayer.
///
/// @return Total utility for player1 over all games.
double simulate_games(Player* player1, Player* player2, int num_games, bool verbose);

/// Simulates one game with the given deck.
/// The deck should be shuffled beforehand.
///
/// Information for an interactive game will be printed if verbose is true.
/// This is recommended if one of the players is a CliPlayer
///
/// @param starting_player 0 if player1 should go first, 1 if player2 should go first.
/// @return utility (= number of chips won or lost) for player1.
[[nodiscard]] double simulate_game(Player* player1, Player* player2, Deck& deck, size_t starting_player, bool verbose);


#endif //SIMPLE_POKER_CFR_SIMULATE_H
