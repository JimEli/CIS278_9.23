/*************************************************************************
* Title: Card Shuffling and Dealing
* File: CIS278_Week11_9.23.cpp
* Author: James Eli
* Date: 2/14/2018
*
* Exercise  9.23 on page 444, Card Shuffling and Dealing
* Create a program to shuffle and deal a deck of cards. The program should
* consist of class Card, class DeckofCards and a driver program. Class Card
* should provide:
*   a) Data members face and suit—use enumerations to represent the faces
*      and suits.
*   b) A constructor that receives two enumeration constants representing
*      the face and suit and uses them to initialize the data members.
*   c) Two static arrays of strings representing the faces and suits
*   d) A toString function that returns the Card as a string in the form of
*      "face of suit". You can use the + operator to concatenate strings.
*
* Class DeckofCards should contain:
*   a) An array of Cards named deck to store the Cards.
*   b) An integer currentCard representing the next card to deal.
*   c) A default constructor that initializes the Cards in the deck.
*   d) A shuffle function that shuffles the Cards in the deck. The shuffle
*      algorithm should iterate through the array of Cards. For each Card,
*      randomly select another Card in the deck and swap the two cards.
*   e) A dealCard function that returns the next Card object from the deck.
*   f) A moreCards function that returns a bool value indicating whether
*      there are more Cards to deal.
*
* The driver program should create a DeckofCards object, shuffle the cards,
* then deal the 52 cards—the output should be similar to Fig 9.31.
*   Six of Spades     Eight of Spades  Six of Clubs    Nine of Hearts
*   Queen of Hearts   Seven of Clubs   Nine of Sppades King of Hearts
*   . . .
*   Three of Diamonds Duece of Clubs   Ace of Hearts   Ten of Spades
*   Three of Spades   Five of Diamonds Four of Hearts  Queen of Diamonds
*
* Notes:
*  (1) Compiled with MS Visual Studio 2017 Community (v141).
*
* Submitted in partial fulfillment of the requirements of PCC CIS-278.
*************************************************************************
* Change Log:
*   02/14/2018: Initial release. JME
*************************************************************************/
#include <iostream>  // cout/endl
#include <iomanip>   // setw/left
#include "deckofcards.h"

using namespace std;

int main()
{
	// Instantiate a new deck of cards.
	DeckOfCards doc;

	// Shuffle deck.
	doc.shuffle();

	try 
	{
		// Deal out all cards from a shuffled deck and display.
		for (int i{ 0 }; i < DeckOfCards::numberOfCards; i++)
			cout << setw(20) << left << doc.dealCard() << ((i + 1) % 4 ? "  " : "\n");
	}
	catch(std::out_of_range)
	{
		cout << "No more cards in deck!\n";
	}

	return 0;
}
