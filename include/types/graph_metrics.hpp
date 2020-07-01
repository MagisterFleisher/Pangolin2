#ifndef NET5_GRAPHMETRICS_HPP
#define NET5_GRAPHMETRICS_HPP

#include <unordered_map>
#include "id.hpp"

typedef struct{ std::unordered_map<ID,std::uint64_t> simple_degree;
                std::unordered_map<ID,std::uint64_t> in_degree;
                std::unordered_map<ID,std::uint64_t> out_degree;
                std::unordered_map<ID,std::uint64_t> betweenness;
                std::unordered_map<ID,std::uint64_t> eigencentrality;
                std::unordered_map<ID,std::uint64_t> page_rank;
                std::unordered_map<ID,std::uint64_t> closeness;
                std::unordered_map<ID,std::uint64_t> katz;
                std::unordered_map<ID,std::uint64_t> reach;
                std::unordered_map<ID,std::uint64_t> reach_efficiency;
                std::unordered_map<ID,std::uint64_t> micmac;
                std::unordered_map<ID,std::uint64_t> hits_hubs;
                std::unordered_map<ID,std::uint64_t> hits_authorities;
                std::unordered_map<ID,std::uint64_t> alpha;
                std::unordered_map<ID,std::uint64_t> power;
                std::unordered_map<ID,std::uint64_t> flow_betweenness;
                std::unordered_map<ID,std::uint64_t> load;
                std::unordered_map<ID,std::uint64_t> gil_schmidt;
                std::unordered_map<ID,std::uint64_t> information_centrality;
                std::unordered_map<ID,std::uint64_t> stress_centrality;
                std::unordered_map<ID,std::uint64_t> eccentricity;
                std::unordered_map<ID,std::uint64_t> radiality;
                std::unordered_map<ID,std::uint64_t> delta;
                /** many more **/
                std::uint64_t density;
                std::uint64_t radius;
                std::uint64_t circumfirance;
                }  GraphMetrics;
#endif//NET5_GRAPHMETRICS_HPP