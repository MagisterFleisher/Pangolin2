#ifndef NET5_WRITE_CSV_HPP
#define NET5_WRITE_CSV_HPP
#include <fstream>
#include <iostream>
#include <memory>
#include <sstream>
#include <string>

std::uint8_t WriteGraphStream_CSV(std::stringstream &stream_buffer, const std::string& file_name) {
    std::cout << "\tCalled WriteGraphStream_CSV\n";
    std::ofstream                       outCSVFile          ( file_name, std::ios::out );
    const std::string                   file_buffer         ( stream_buffer.str() );
    if( outCSVFile.is_open()) {
        outCSVFile.write( file_buffer.c_str(),sizeof( file_buffer.c_str()) );
        outCSVFile.close();
        return 0; } else { std::cerr << "WriteGraphStream_CSV: Error opening" << file_name << " file for write."; return 1; }   }

std::uint8_t WriteGraph_CSV(std::unique_ptr<Graph>& g, const std::string& file_name) { 
    std::cout << "\tCalled WriteGraph_CSV\n";
    std::stringstream                   edges_stream_buffer;
    std::stringstream                   nodes_stream_buffer;
    const std::string                   file_nodes_save     ( MakeIOName("data/", file_name, "_nodes.csv"));
    const std::string                   file_edges_save     ( MakeIOName("data/", file_name, "_edges.csv"));
    for( const auto& edge : g->edges ) {
        edges_stream_buffer << edge.id << "," << edge.from << "," << edge.to << "\n"; }
    const auto& edge_err = WriteGraphStream_CSV( edges_stream_buffer, file_edges_save);
    if(edge_err > 0) { std::cerr << "WriteGraph_CSV: Error writing Edges CSV list."; return 1; }
    for( const auto& node : g->nodes ) {
        nodes_stream_buffer << node << "\n"; }
    const auto& node_err = WriteGraphStream_CSV( nodes_stream_buffer, file_edges_save);
    if(node_err > 0) { std::cerr << "WriteGraph_CSV: Error writing Nodes CSV list."; return 1; }
    return 0; }

#endif//NET5_WRITE_CSV_HPP