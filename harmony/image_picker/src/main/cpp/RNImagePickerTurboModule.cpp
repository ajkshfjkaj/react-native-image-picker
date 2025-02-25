/**
 * MIT License
 *
 * Copyright (C) 2023 Huawei Device Co., Ltd.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "RNImagePickerTurboModule.h"

using namespace rnoh;
using namespace facebook;

static jsi::Value __hostFunction_RNImagePickerTurboModule_launchCamera(jsi::Runtime &rt,
                                                                       react::TurboModule &turboModule,
                                                                       const jsi::Value *args, size_t count)
{
    return static_cast<ArkTSTurboModule &>(turboModule).call(rt, "launchCamera", args, count);
}
static jsi::Value __hostFunction_RNImagePickerTurboModule_launchImageLibrary(jsi::Runtime &rt,
                                                                             react::TurboModule &turboModule,
                                                                             const jsi::Value *args, size_t count)
{
    return static_cast<ArkTSTurboModule &>(turboModule).call(rt, "launchImageLibrary", args, count);
}

RNImagePickerTurboModule::RNImagePickerTurboModule(const ArkTSTurboModule::Context ctx, const std::string name)
    : ArkTSTurboModule(ctx, name)
{
    methodMap_["launchCamera"] = MethodMetadata{0, __hostFunction_RNImagePickerTurboModule_launchCamera};
    methodMap_["launchImageLibrary"] = MethodMetadata{0, __hostFunction_RNImagePickerTurboModule_launchImageLibrary};
}