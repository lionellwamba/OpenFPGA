#ifndef ARCH_BITSTREAM_WRITER_H
#define ARCH_BITSTREAM_WRITER_H

/********************************************************************
 * Include header files that are required by function declaration
 *******************************************************************/
#include <string>
#include "bitstream_manager.h"

/********************************************************************
 * Function declaration
 *******************************************************************/

/* begin namespace openfpga */
namespace openfpga {

void write_arch_independent_bitstream_to_xml_file(const BitstreamManager& bitstream_manager,
                                                  const std::string& top_block_name, 
                                                  const std::string& fname);

} /* end namespace openfpga */

#endif