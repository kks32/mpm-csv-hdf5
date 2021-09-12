#ifndef CSV_HDF5_IO_H_
#define CSV_HDF5_IO_H_

#include <string>

std::string get_filename(const std::string& s) {

   size_t i = s.rfind('.', s.length());
   if (i != std::string::npos) {
     return(s.substr(0, i));
   }
   return("");
}

#endif  // CSV_HDF5_IO_H_
