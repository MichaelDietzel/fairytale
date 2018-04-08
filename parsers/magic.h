/*
  This file is part of the Fairytale project

  Copyright (C) 2018 Andrew Epstein

  This library is free software: you can redistribute it and/or modify
  it under the terms of the GNU Lesser General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef MAGIC_H
#define MAGIC_H

#include "../parser.h"

class MagicParser : public Parser<ParserType::Fuzzy> {
private:
  uint8_t buffer[GENERIC_BUFFER_SIZE];
  off_t position;

public:
  explicit MagicParser(void);
  bool parse(Block* block, ParseData* data, StorageManager* manager);
};

#endif
