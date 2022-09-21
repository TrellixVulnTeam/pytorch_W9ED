#pragma once

/**
 * Diagnostic rules for PyTorch ONNX export.
 *
 * This file is generated by gen_diagnostics.py. Do not edit directly.
 * See tools/onnx/gen_diagnostics.py for more information.
 */

namespace torch {
namespace onnx {
namespace diagnostics {

enum class Rule : uint32_t {
  /**
   * @brief Node is missing ONNX shape inference.
   */
  kNodeMissingOnnxShapeInference,

  /**
   * @brief Missing symbolic function for custom PyTorch operator, cannot
   * translate node to ONNX.
   */
  kMissingCustomSymbolicFunction,

  /**
   * @brief Missing symbolic function for standard PyTorch operator, cannot
   * translate node to ONNX.
   */
  kMissingStandardSymbolicFunction,

  /**
   * @brief Operator is supported in newer opset version.
   */
  kOperatorSupportedInNewerOpsetVersion,
};

static constexpr const char* const kPyRuleNames[] = {
    "node_missing_onnx_shape_inference",
    "missing_custom_symbolic_function",
    "missing_standard_symbolic_function",
    "operator_supported_in_newer_opset_version",
};

} // namespace diagnostics
} // namespace onnx
} // namespace torch
