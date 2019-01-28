#pragma once
#include <Windows.h>
#include "CSpellEntry.h"
#include <vector>
#include <iostream>
#include <map>
#include "SpellSlot.h"
#include "Offsets.h"


class CSpellBook {
public:
	CSpellEntry* GetActiveSpellEntry() {
		return *(CSpellEntry**)((DWORD)this + 0x20);
	}

	SpellSlot* GetSpellSlotByID(int ID) {
		return *(SpellSlot**)((DWORD)this + 0x530 + (0x4 * ID));
	}
};

