#ifndef NET5_TYPE_ID_HPP
#define NET5_TYPE_ID_HPP
// #include <boost/multiprecision/cpp_int.hpp>
// #include <iostream>

/* ID type.  Used for edge IDs and node IDs.                                            */
// typedef                 ID8     std::uint8_t;    /* 0 to 256                         */
// typedef                 ID16    std::uint16_t;   /* 0 to 65'535                      */
// typedef                 ID32    std::uint32_t;   /* 0 to 4'294'967'295               */
typedef                 ID64    std::uint64_t;      /* 0 to 18'446'744'073'709'551'615  */
//typedef                 IDbig   boost::cpp_int;   /* 0 to inf                         */
using                   ID      ID64;
#endif //NET1_TYPE_ID_HPP