
#ifndef BOOST_NETWORK_TRAITS_ISTREAM_HPP_20100924
#define BOOST_NETWORK_TRAITS_ISTREAM_HPP_20100924

// Copyright 2010 (C) Dean Michael Berris
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#include <istream>

namespace boost {
namespace network {
template <class Tag, class Enable = void>
struct istream {
  typedef std::istream type;
};
}  // namespace network
}  // namespace boost

#endif /* BOOST_NETWORK_TRAITS_ISTREAM_HPP_20100924 */
