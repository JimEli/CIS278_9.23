# Pima CC CIS278 Week #11 
## Exercise  9.23 on page 444
### Card Shuffling and Dealing
C++ How to Program, 10/e, Deitel

Create a program to shuffle and deal a deck of cards. The program should consist of class Card, class DeckofCards and a driver program. Class Card should provide:
* Data members face and suit—use enumerations to represent the faces and suits.
* A constructor that receives two enumeration constants representing the face and suit and uses them to initialize the data members.
* Two static arrays of strings representing the faces and suits
* A toString function that returns the Card as a string in the form of "face of suit". You can use the + operator to concatenate strings.

Class DeckofCards should contain:
* An array of Cards named deck to store the Cards.
* An integer currentCard representing the next card to deal.
* A default constructor that initializes the Cards in the deck.
* A shuffle function that shuffles the Cards in the deck. The shuffle algorithm should iterate through the array of Cards. For each Card, randomly select another Card in the deck and swap the two cards.
* A dealCard function that returns the next Card object from the deck.
* A moreCards function that returns a bool value indicating whether there are more Cards to deal.

The driver program should create a DeckofCards object, shuffle the cards, then deal the 52 cards—the output should be similar to Fig 9.31.
```Text
  Six of Spades     Eight of Spades  Six of Clubs    Nine of Hearts
  Queen of Hearts   Seven of Clubs   Nine of Sppades King of Hearts
  . . .
  Three of Diamonds Duece of Clubs   Ace of Hearts   Ten of Spades
  Three of Spades   Five of Diamonds Four of Hearts  Queen of Diamonds
```

Notes:
* Compiled with MS Visual Studio 2017 Community (v141).
* Submitted in partial fulfillment of the requirements of PCC CIS-278.
