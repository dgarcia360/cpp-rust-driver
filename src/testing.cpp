/*
  Copyright (c) DataStax, Inc.

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

  http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
*/

#include "testing.hpp"

#include "address.hpp"
#include "external.hpp"
#include "get_time.hpp"
#include "logger.hpp"
#include "murmur3.hpp"

namespace datastax { namespace internal { namespace testing {

using namespace core;

String get_host_from_future(CassFuture* future) {
  throw std::runtime_error("Unimplemented 'get_host_from_future'!");
}

StringVec get_attempted_hosts_from_future(CassFuture* future) {
  throw std::runtime_error("Unimplemented 'get_attempted_hosts_from_future'!");
}

unsigned get_connect_timeout_from_cluster(CassCluster* cluster) {
  throw std::runtime_error("Unimplemented 'get_connect_timeout_from_cluster'!");
}

int get_port_from_cluster(CassCluster* cluster) {
  throw std::runtime_error("Unimplemented 'get_port_from_cluster'!");
}

String get_contact_points_from_cluster(CassCluster* cluster) {
  throw std::runtime_error("Unimplemented 'get_contact_points_from_cluster'!");
}

int64_t create_murmur3_hash_from_string(const String& value) {
  return MurmurHash3_x64_128(value.data(), value.size(), 0);
}

uint64_t get_time_since_epoch_in_ms() { return internal::get_time_since_epoch_ms(); }

uint64_t get_host_latency_average(CassSession* session, String ip_address, int port) {
  throw std::runtime_error("Unimplemented 'get_host_latency_average'!");
}

CassConsistency get_consistency(const CassStatement* statement) {
  throw std::runtime_error("Unimplemented 'get_consistency'!");
}

CassConsistency get_serial_consistency(const CassStatement* statement) {
  throw std::runtime_error("Unimplemented 'get_serial_consistency'!");
}

uint64_t get_request_timeout_ms(const CassStatement* statement) {
  throw std::runtime_error("Unimplemented 'get_request_timeout_ms'!");
}

const CassRetryPolicy* get_retry_policy(const CassStatement* statement) {
  throw std::runtime_error("Unimplemented 'get_retry_policy'!");
}

String get_server_name(CassFuture* future) {
  throw std::runtime_error("Unimplemented 'get_server_name'!");
}

void set_record_attempted_hosts(CassStatement* statement, bool enable) {
  throw std::runtime_error("Unimplemented 'set_record_attempted_hosts'!");
}

}}} // namespace datastax::internal::testing
