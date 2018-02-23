/*
 * Class Card provides:
 *   a) Data members face and suit—use enumerations to represent the faces
 *      and suits.
 *   b) A constructor that receives two enumeration constants representing
 *      the face and suit and uses them to initialize the data members.
 *   c) Two static arrays of strings representing the faces and suits
 *   d) A toString function that returns the Card as a string in the form of
 *      "face of suit". You can use the + operator to concatenate strings.
 */
#ifndef _CARD_H_
#define _CARD_H_

#include <iostream> // ostream
#include <string>   // string

 // Enumerations for suits and faces (per instructions).
enum class Suits { clubs = 0, hearts, diamonds, spades };
enum class Faces { ace = 0, duece, three, four, five, six, seven, eight, nine, ten, jack, queen, king };

class Card {
public:
	// Constructor.
	Card(Suits s, Faces f) : suit{ s }, face{ f } { }

	// Print a card. 
	friend std::ostream& operator<< (std::ostream& os, const Card& card)
	{
		// String representation of card faces and suits.
		static std::string suits[4]{ "Clubs", "Hearts", "Diamonds", "Spades" };

		static std::string faces[13]{ "Ace", "Duece", "Three", "Four", "Five",
			"Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

		return os << faces[static_cast<int>(card.face)] + " of " + suits[static_cast<int>(card.suit)];
	}

private:
	// Private member data.
	Faces face;
	Suits suit;
};

#endif

