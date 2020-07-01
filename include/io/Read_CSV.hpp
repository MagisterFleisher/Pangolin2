#ifndef NET5_READ_CSV_HPP
#define NET5_READ_CSV_HPP

#include <string>
#include <memory>
#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
#include "../types/types.hpp"

Edge ParseCSVLineToEdge(const std::string& line) {
    Edge                edge;
    std::stringstream   stream_it       (line);
    std::string         h;
    std::uint8_t        i               (0);
    while(getline(stream_it,h, ',')){                           /* Divide single line using commas. */
        switch(i) {                                             /* Add data into edge one by one.   */
            case 0: {   edge.id         = ToID(h); ++i; continue; };
            case 1: {   edge.from       = ToID(h); ++i; continue; };
            case 2: {   edge.to         = ToID(h); ++i; continue; };
            default:  break; }}
    return edge; }                                              /* return Edge struct               */

Graph Read_CSV(std::string file_name) {
    std::cout << "Called CSVToGraph\n";
    const auto&     data_path       ("data/");
    const auto&     csv_ext         ("_edges.csv");
    std::ifstream   CSV_FILE        ((data_path + file_name) + csv_ext);
    std::string     line;
    Graph           graph;
    std::vector<ID> nodes;
    if(CSV_FILE.fail())     { 
        std::cerr << "CSVToGraph: Error opening file " << ((data_path + file_name) + csv_ext); 
        exit(1);                                                                } /* * @Check if file can open.  Exit with error if not.  */
    if(ignore_header > 0)   {
        for(int i = 0; i < ignore_header; i++) { CSV_FILE.ignore(10,'\n'); }    } /* * When specified, @Ignore the first n lines of the CSV file. */
    while(CSV_FILE >> line) { 
        graph.edges.emplace_back( ParseCSVLineToEdge(line)) ;                   } /* * @Create graph structure with vector of edges */
    CSV_FILE.close();
    graph.nodes = CreateNodeList( graph.edges );
    return graph; }

#endif//NET5_READ_CSV_HPP