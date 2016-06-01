#ifndef BOOST_NETWORK_PROTOCOL_HTTP_MESSAGE_TRAITS_VERSION_HPP_20100903
#define BOOST_NETWORK_PROTOCOL_HTTP_MESSAGE_TRAITS_VERSION_HPP_20100903

// Copyright Dean Michael Berris 2010.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#include <future>
#include <string>
#include <boost/network/support/is_async.hpp>
#include <boost/network/support/is_sync.hpp>

namespace boost {
namespace network {
namespace http {

namespace traits {

template <class Tag>
struct unsupported_tag;

template <class Message, class Enable = void>
struct version {
  typedef unsupported_tag<typename Message::tag> type;
};

template <class Message>
struct version<Message,
               typename enable_if<is_async<typename Message::tag> >::type> {
  typedef std::shared_future<std::string> type;
};

template <class Message>
struct version<Message,
               typename enable_if<is_sync<typename Message::tag> >::type> {
  typedef std::string type;
};

}  // namespace traits
 /* traits */

}  // namespace http
 /* http */
}  // namespace network
 /* network */
}  // namespace boost
 /* boost */

#endif
