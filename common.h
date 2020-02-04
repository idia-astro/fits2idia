#ifndef __COMMON_H
#define __COMMON_H

#include <vector>
#include <cmath>
#include <functional>
#include <algorithm>
#include <iostream>
#include <chrono>
#include <sstream>
#include <limits>
#include <memory>

#include <H5Cpp.h>
#include <fitsio.h>

#define SCHEMA_VERSION "0.3"
#define HDF5_CONVERTER "hdf_convert"
#define HDF5_CONVERTER_VERSION "0.1.10"

#define TILE_SIZE (hsize_t)512
#define MIN_MIPMAP_SIZE (hsize_t)128

#endif