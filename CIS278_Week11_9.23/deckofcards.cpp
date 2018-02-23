/*
 * Definition of class DeckOfCards:
 * 1) A default constructor that initializes the Cards in the deck.
 * 2) A shuffle function that shuffles the Cards in the deck. The shuffle
 *    algorithm should iterate through the array of Cards. For each Card,
 *    randomly select another Card in the deck and swap the two cards.
 * 3) A dealCard function that returns the next Card object from the deck.
 * 4) A moreCards function that returns a bool value indicating whether
 *    there are more Cards to deal.
*/
#include "deckofcards.h"

// Constructor.
DeckOfCards::DeckOfCards() : currentCard(0)
{
	// Load the deck with a full set of 52 cards.
	for (unsigned s{ 0 }; s < numberOfSuits; s++)
		for (unsigned f{ 0 }; f < numberOfFaces; f++)
			deck.push_back(Card(static_cast<Suits>(s), static_cast<Faces>(f)));
}

// Deal a card from the deck.
Card DeckOfCards::dealCard()
{
	if (moreCards())
		return deck[currentCard++];

	throw std::out_of_range("No more cards");
}

// Shuffle the deck.
void DeckOfCards::shuffle()
{
	// Only shuffle new deck.
	if (currentCard == 0)
	{
		// Seed rng.
		auto rng = std::default_random_engine{ static_cast<size_t>(time(nullptr)) };
		// Shuffle deck.
		std::shuffle(begin(deck), end(deck), rng);

	}
}

// Return true if cards remain in deck.
bool DeckOfCards::moreCards() { return (currentCard < numberOfCards); }

