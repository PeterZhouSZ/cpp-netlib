
// Copyright 2013 Google, Inc.
// Copyright 2008 Dean Michael Berris <dberris@google.com>
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_NETWORK_PROTOCOL_HTTP_MESSAGE_TRAITS_HEADERS_CONTAINER_IPP
#define BOOST_NETWORK_PROTOCOL_HTTP_MESSAGE_TRAITS_HEADERS_CONTAINER_IPP

#include <boost/algorithm/string/case_conv.hpp>
#include <boost/network/traits/headers_container.hpp>
#include <boost/utility/enable_if.hpp>
#include <map>
#include <string>

namespace boost {
namespace network {
namespace impl {

// Moving implementation from original
// message_traits implementation by
// Atomic Labs, Inc.
// --
// returns true if str1 < str2 (ignoring case)
struct is_less_ignore_case {
  inline bool operator()(
      std::string  /*unused*/const& str1,
      std::string const& str2)
      const {
    return to_lower_copy(str1) < to_lower_copy(str2);
  };
};

template <class Tag>
struct headers_container {
  typedef std::multimap<std::string,
                        std::string,
                        is_less_ignore_case> type;
};
}  // namespace impl
}  // namespace network
}  // namespace boost

#endif  // BOOST_NETWORK_PROTOCOL_HTTP_MESSAGE_TRAITS_HEADERS_CONTAINER_IPP
