// Copyright Doug Moen 2016.
// Distributed under The MIT License.
// See accompanying file LICENSE.md or https://opensource.org/licenses/MIT

#ifndef CURV_FILE_H
#define CURV_FILE_H

#include <curv/frame.h>
#include <curv/script.h>

namespace curv {

/// A concrete Script class that represents a file.
struct File_Script : public String_Script
{
    // TODO: Should File_Script use mmap() to load the file into memory?
    File_Script(Shared<const String> filename, Frame* f);
};

} // namespace curv
#endif // header guard