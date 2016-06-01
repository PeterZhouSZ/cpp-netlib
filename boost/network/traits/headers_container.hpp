// Copyright (c) Glyn Matthews 2009.
// Copyright 2013 Google, Inc.
// Copyright 2013 Dean Michael Berris <dberris@google.com>
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_NETWORK_TRAITS_HEADERS_CONTAINER_INC
#define BOOST_NETWORK_TRAITS_HEADERS_CONTAINER_INC

#include <map>
#include <string>

namespace boost {
namespace network {
template <class Tag>
struct headers_container {
  typedef std::multimap<std::string, std::string> type;
};
}  // namespace network
}  // namespace boost

#endif  // __BOOST_NETWORK_TRAITS_HEADERS_CONTAINER_INC__
