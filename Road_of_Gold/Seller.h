#pragma once

#include"Casket.h"
#include"Wallet.h"

struct Wallet;

struct Seller
{
	int		walletID;	//振り込み先
	Casket	casket;
	int		timer;		//売る期間

	Seller(int _walletID, Casket _casket, int _timer)
		: walletID(_walletID)
		, casket(_casket)
		, timer(_timer + 1)
	{}
	Wallet&	wallet() const { return wallets[walletID]; }
};