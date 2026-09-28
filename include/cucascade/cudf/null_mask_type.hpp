#pragma once

#include <cudf/null_mask.hpp>

#if CUCASCADE_CUDF_NEW_NULL_MASK
#include <rapids/cuda/buffer>
#else
#include <rmm/device_buffer.hpp>
#endif

namespace cucascade::cudf_compat {
#if CUCASCADE_CUDF_NEW_NULL_MASK
using null_mask_buffer = ::cuda::device_buffer<std::byte>;
#else
using null_mask_buffer = rmm::device_buffer;
#endif
}  // namespace cucascade::cudf_compat
