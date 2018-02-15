/**
 * Copyright (c) 2011-2018 libbitcoin developers (see AUTHORS)
 *
 * This file is part of libbitcoin.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef LIBBITCOIN_BASE_32_HPP
#define LIBBITCOIN_BASE_32_HPP

#include <string>
#include <bitcoin/bitcoin/define.hpp>
#include <bitcoin/bitcoin/utility/data.hpp>

namespace libbitcoin {

/**
 * Encode data as base32.
 * @return the base32 encoded string.
 */
BC_API std::string encode_base32(const std::string& hr_part, const data_chunk& data_part);

/**
 * Decode base32 data.
 * @param in base32 string to decode.
 * @param hr_part The decoded human-readable part.
 * @param values The decoded values.
 * @return false if the input is not a valid base32 encoded string.
 */
BC_API bool decode_base32(std::string& hr_part, data_chunk& values, const std::string& in);

} // namespace libbitcoin

#endif

