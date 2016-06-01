//            Copyright (c) Glyn Matthews 2009.
//         Copyright (c) Dean Michael Berris 2009, 2010.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_NETWORK_TRAITS_OSTRINGSTREAM_INC
#define BOOST_NETWORK_TRAITS_OSTRINGSTREAM_INC

#include <sstream>

namespace boost {
namespace network {
template <class Tag, class Enable = void>
struct ostringstream {
  typedef std::ostringstream type;
};
}  // namespace network
}  // namespace boost

#endif  // BOOST_NETWORK_TRAITS_OSTRINGSTREAM_INC
