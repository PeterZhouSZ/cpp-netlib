#ifndef BOOST_NETWORK_TRAITS_OSTREAM_ITERATOR_HPP_20100815
#define BOOST_NETWORK_TRAITS_OSTREAM_ITERATOR_HPP_20100815

// Copyright 2010 (C) Dean Michael Berris
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#include <iterator>

namespace boost {
namespace network {
template <class Tag, class Input>
struct ostream_iterator
    : std::ostream_iterator<Input, char> {};
}  // namespace network
}  // namespace boost

#endif  // BOOST_NETWORK_TRAITS_OSTREAM_ITERATOR_HPP_20100815
