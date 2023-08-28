// MIT License
// Copyright (c) 2022 - 傅莘莘
// Source URL: https://github.com/zjhellofss/KuiperInfer
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
// Created by fss on 23-7-26.
//

#ifndef KUIPER_INFER_INCLUDE_MATH_ARMA_SSE
#define KUIPER_INFER_INCLUDE_MATH_ARMA_SSE
#include <armadillo>
#include "data/tensor.hpp"
#include "utils/math/fmath.hpp"
namespace kuiper_infer {
namespace activation {
enum class ActivationType {
  kActivatetionUnknown = -1,
  kActivationRelu = 0,
  kActivationSilu = 1,
  kActivationSigmoid = 2,
  kActivationHardSwish = 3,
  kActivationHardSigmoid = 4,
};

using ActivationFunc = std::function<void(sftensor, sftensor)>;

ActivationFunc ApplySSEActivation(ActivationType act_type);

}  // namespace activation
}  // namespace kuiper_infer
#endif  // KUIPER_INFER_INCLUDE_MATH_ARMA_SSE
