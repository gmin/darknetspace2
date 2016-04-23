// Copyright (c) 2011-2016 The Cryptonote developers
// Copyright (c) 2014-2016 darknetspace developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <cstdint>

namespace Crypto {

struct Hash {
  uint8_t data[32];
};

struct PublicKey {
  uint8_t data[32];
};

struct SecretKey {
  uint8_t data[32];
};

struct KeyDerivation {
  uint8_t data[32];
};

struct KeyImage {
  uint8_t data[32];
};

struct Signature {
  uint8_t data[64];
};

struct TimeString {
	uint8_t data[8];
};

struct BufSpendPKey {
	uint8_t data[50];
};

struct BufViewPKey {
	uint8_t data[20];
};

struct BufSpendSKey {
	uint8_t data[21];
};

struct BufViewSKey {
	uint8_t data[20];
};
}
