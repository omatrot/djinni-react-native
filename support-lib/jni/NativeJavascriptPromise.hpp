// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from react.djinni

#pragma once

#include "JavascriptPromise.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeJavascriptPromise final : ::djinni::JniInterface<::JavascriptPromise, NativeJavascriptPromise> {
public:
    using CppType = std::shared_ptr<::JavascriptPromise>;
    using CppOptType = std::shared_ptr<::JavascriptPromise>;
    using JniType = jobject;

    using Boxed = NativeJavascriptPromise;

    ~NativeJavascriptPromise();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeJavascriptPromise>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeJavascriptPromise>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeJavascriptPromise();
    friend ::djinni::JniClass<NativeJavascriptPromise>;
    friend ::djinni::JniInterface<::JavascriptPromise, NativeJavascriptPromise>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::JavascriptPromise
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        void resolveNull() override;
        void resolveBoolean(bool value) override;
        void resolveDouble(double value) override;
        void resolveInt(int32_t value) override;
        void resolveString(const std::string & value) override;
        void resolveArray(const std::shared_ptr<::JavascriptArray> & value) override;
        void resolveMap(const std::shared_ptr<::JavascriptMap> & value) override;
        void resolveObject(const std::shared_ptr<::JavascriptObject> & value) override;
        void reject(const std::string & code, const std::string & message) override;

    private:
        friend ::djinni::JniInterface<::JavascriptPromise, ::djinni_generated::NativeJavascriptPromise>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/rushingvise/reactcpp/JavascriptPromise") };
    const jmethodID method_resolveNull { ::djinni::jniGetMethodID(clazz.get(), "resolveNull", "()V") };
    const jmethodID method_resolveBoolean { ::djinni::jniGetMethodID(clazz.get(), "resolveBoolean", "(Z)V") };
    const jmethodID method_resolveDouble { ::djinni::jniGetMethodID(clazz.get(), "resolveDouble", "(D)V") };
    const jmethodID method_resolveInt { ::djinni::jniGetMethodID(clazz.get(), "resolveInt", "(I)V") };
    const jmethodID method_resolveString { ::djinni::jniGetMethodID(clazz.get(), "resolveString", "(Ljava/lang/String;)V") };
    const jmethodID method_resolveArray { ::djinni::jniGetMethodID(clazz.get(), "resolveArray", "(Lcom/rushingvise/reactcpp/JavascriptArray;)V") };
    const jmethodID method_resolveMap { ::djinni::jniGetMethodID(clazz.get(), "resolveMap", "(Lcom/rushingvise/reactcpp/JavascriptMap;)V") };
    const jmethodID method_resolveObject { ::djinni::jniGetMethodID(clazz.get(), "resolveObject", "(Lcom/rushingvise/reactcpp/JavascriptObject;)V") };
    const jmethodID method_reject { ::djinni::jniGetMethodID(clazz.get(), "reject", "(Ljava/lang/String;Ljava/lang/String;)V") };
};

}  // namespace djinni_generated
