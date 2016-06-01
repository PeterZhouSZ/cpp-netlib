//            Copyright (c) Glyn Matthews 2009.
//         Copyright (c) Dean Michael Berris 2009.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_NETWORK_TRAITS_ISTRINGSTREAM_INC
#define BOOST_NETWORK_TRAITS_ISTRINGSTREAM_INC

#include <boost/network/tags.hpp>
#include <sstream>

namespace boost {
namespace network {
template <class Tag, class Enable = void>
struct istringstream {
  typedef std::istringstream type;
};
}  // namespace network
}  // namespace boost

#endif  // BOOST_NETWORK_TRAITS_ISTRINGSTREAM_INC
