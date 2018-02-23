/*
 * Declaration of class DeckOfCards:
 * a) An array of Cards named deck to store the Cards.
 * b) An integer currentCard representing the next card to deal.
 * c) A default constructor that initializes the Cards in the deck.
 * d) A shuffle function that shuffles the Cards in the deck. The shuffle
 *    algorithm should iterate through the array of Cards. For each Card,
 *    randomly select another Card in the deck and swap the two cards.
 * e) A dealCard function that returns the next Card object from the deck.
 * f) A moreCards function that returns a bool value indicating whether
 *    there are more Cards to deal.
 */
#ifndef _DECK_OF_CARDS_H_
#define _DECK_OF_CARDS_H_

#include <random>    // default_random_engine
#include <ctime>     // time
#include <vector>    // vector
#include <utility>   // swap
#include <algorithm> // shuffle

#include "card.h"

// DeckOfCards class definition.
class DeckOfCards {
public:
	// Constants for a deck of cards.
	static const unsigned numberOfCards{ 52 };
	static const unsigned numberOfSuits{ 4 };
	static const unsigned numberOfFaces{ 13 };

	// Constructor initializes deck.
	DeckOfCards();

	// Shuffles cards in deck.
	void shuffle();
	
	// Return true if cards remain in deck.
	bool moreCards();
	
	// Deal a crad from the deck.
	Card dealCard();

private:
	// An array of Cards named deck to store the Cards.
	std::vector<Card> deck;
	// Integer representing the next card to deal.
	unsigned currentCard;
};
#endif
