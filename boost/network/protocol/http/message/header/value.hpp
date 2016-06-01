#ifndef BOOST_NETWORK_PROTOCOL_HTTP_MESSAGE_HEADER_VALUE_HPP_20101028
#define BOOST_NETWORK_PROTOCOL_HTTP_MESSAGE_HEADER_VALUE_HPP_20101028

// Copyright 2010 Dean Michael Berris.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#include <utility>

namespace boost {
namespace network {
namespace http {

struct request_header;
struct response_header;

template <class T1, class T2>
T1& value(std::pair<T1, T2> const& p) {
  return p.second;
}

inline request_header::string_type const& value(request_header const& h) {
  return h.value;
}

inline response_header::string_type const& value(response_header const& h) {
  return h.value;
}
} // namespace http
 /* http */

} // namespace network
 /* network */

}  // namespace boost
 /* boost */

#endif /* BOOST_NETWORK_PROTOCOL_HTTP_MESSAGE_HEADER_VALUE_HPP_20101028 */
