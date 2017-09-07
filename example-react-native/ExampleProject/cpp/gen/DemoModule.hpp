// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from main.djinni

#pragma once

#include "JavascriptArray.hpp"
#include "JavascriptCallback.hpp"
#include "JavascriptMap.hpp"
#include "JavascriptPromise.hpp"
#include "ReactBridge.hpp"
#include <cstdint>
#include <memory>
#include <string>

class DemoModule {
public:
    virtual ~DemoModule() {}

    static std::string const EVENT_NAME;

    static std::string const STRING_CONSTANT;

    static int32_t const INT_CONSTANT;

    static double const DOUBLE_CONSTANT;

    static bool const BOOL_CONSTANT;

    static std::shared_ptr<DemoModule> create(const std::shared_ptr<::ReactBridge> & bridge);

    virtual void testPromise(const std::shared_ptr<::JavascriptPromise> & promise) = 0;

    virtual void testCallback(const std::shared_ptr<::JavascriptCallback> & callback) = 0;

    virtual void testMap(const std::shared_ptr<::JavascriptMap> & map, const std::shared_ptr<::JavascriptPromise> & promise) = 0;

    virtual void testArray(const std::shared_ptr<::JavascriptArray> & array, const std::shared_ptr<::JavascriptCallback> & callback) = 0;

    virtual void testBool(bool value, const std::shared_ptr<::JavascriptPromise> & promise) = 0;

    virtual void testPrimitives(int32_t i, double d, const std::shared_ptr<::JavascriptCallback> & callback) = 0;

    virtual void testString(const std::string & value, const std::shared_ptr<::JavascriptPromise> & promise) = 0;

    virtual void testEventWithArray(const std::shared_ptr<::JavascriptArray> & value) = 0;

    virtual void testEventWithMap(const std::shared_ptr<::JavascriptMap> & value) = 0;
};
