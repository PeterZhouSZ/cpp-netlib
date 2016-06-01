#ifndef BOOST_NETWORK_CONSTANTS_HPP_20100808
#define BOOST_NETWORK_CONSTANTS_HPP_20100808

// Copyright 2010 (C) Dean Michael Berris
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

namespace boost {
namespace network {
template <class Tag>
struct constants {

  static char const* crlf() {
    static char crlf_[] = "\r\n";
    return crlf_;
  }

  static char const* dot() {
    static char dot_[] = ".";
    return dot_;
  }

  static char dot_char() { return '.'; }

  static char const* http_slash() {
    static char http_slash_[] = "HTTP/";
    return http_slash_;
  }

  static char const* space() {
    static char space_[] = " ";
    return space_;
  }

  static char space_char() { return ' '; }

  static char const* slash() {
    static char slash_[] = "/";
    return slash_;
  }

  static char slash_char() { return '/'; }

  static char const* host() {
    static char host_[] = "Host";
    return host_;
  }

  static char const* colon() {
    static char colon_[] = ":";
    return colon_;
  }

  static char colon_char() { return ':'; }

  static char const* accept() {
    static char accept_[] = "Accept";
    return accept_;
  }

  static char const* default_accept_mime() {
    static char mime_[] = "*/*";
    return mime_;
  }

  static char const* accept_encoding() {
    static char accept_encoding_[] = "Accept-Encoding";
    return accept_encoding_;
  }

  static char const* default_accept_encoding() {
    static char default_accept_encoding_[] = "identity;q=1.0, *;q=0";
    return default_accept_encoding_;
  }

  static char const* user_agent() {
    static char user_agent_[] = "User-Agent";
    return user_agent_;
  }

  static char const* cpp_netlib_slash() {
    static char cpp_netlib_slash_[] = "cpp-netlib/";
    return cpp_netlib_slash_;
  }

  static char question_mark_char() { return '?'; }

  static char hash_char() { return '#'; }

  static char const* connection() {
    static char connection_[] = "Connection";
    return connection_;
  }

  static char const* close() {
    static char close_[] = "Close";
    return close_;
  }

  static char const* https() {
    static char https_[] = "https";
    return https_;
  }
};
}  // namespace network
}  // namespace boost

#endif  // BOOST_NETWORK_CONSTANTS_HPP_20100808
