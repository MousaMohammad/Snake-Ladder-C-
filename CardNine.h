#pragma once
#include "Card.h"
class CardNine :public Card
{
	CellPosition celltomoveto;

public:
	CardNine(const CellPosition& pos); // A Constructor takes card position

	virtual void ReadCardParameters(Grid* pGrid); // Reads the parameters of CardOne which is: walletAmount

	virtual void Apply(Grid* pGrid, Player* pPlayer); // Applies the effect of CardOne on the passed Player

	virtual ~CardNine(); // A Virtual Destructor


};

