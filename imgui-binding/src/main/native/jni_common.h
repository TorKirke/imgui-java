#include <jni.h>
#include <imgui.h>

#ifndef JNI_COMMON_H
#define JNI_COMMON_H

namespace Jni
{
    void InitCommon(JNIEnv* env);

    JNIEnv* GetEnv();

    void ImVec2Cpy(JNIEnv* env, ImVec2* src, jobject dst);
    void ImVec2Cpy(JNIEnv* env, ImVec2 src, jobject dst);

    void ImVec2Cpy(JNIEnv* env, jobject src, ImVec2* dst);

    void ImVec4Cpy(JNIEnv* env, ImVec4* src, jobject dst);
    void ImVec4Cpy(JNIEnv* env, ImVec4 src, jobject dst);
}

#endif
