// Copyright (c) 2018-2024 TU Delft 3D geoinformation group, Ravi Peters (3DGI),
// and Balazs Dukai (3DGI)

// This file is part of roofer (https://github.com/3DBAG/roofer)

// geoflow-roofer was created as part of the 3DBAG project by the TU Delft 3D
// geoinformation group (3d.bk.tudelf.nl) and 3DGI (3dgi.nl)

// geoflow-roofer is free software: you can redistribute it and/or modify it
// under the terms of the GNU General Public License as published by the Free
// Software Foundation, either version 3 of the License, or (at your option) any
// later version. geoflow-roofer is distributed in the hope that it will be
// useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
// Public License for more details. You should have received a copy of the GNU
// General Public License along with geoflow-roofer. If not, see
// <https://www.gnu.org/licenses/>.

// Author(s):
// Ravi Peters

#pragma once

#include <roofer/common/ptinpoly.h>

#include <roofer/common/common.hpp>
#include <roofer/common/datastructures.hpp>
#include <vector>

namespace roofer {

  class GridPIPTester {
    pGridSet ext_gridset;
    std::vector<pGridSet> hole_gridsets;
    int Grid_Resolution = 20;

   public:
    GridPIPTester(const LinearRing& polygon);
    GridPIPTester(const GridPIPTester&) = delete;
    ~GridPIPTester();
    bool test(const arr3f& p);
  };

}  // namespace roofer
