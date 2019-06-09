//
// Created by vashon on 2019/6/9.
//
#include "jni.h"

#ifndef _Included_com_example_hellojni_SayHello
#define _Included_com_example_hellojni_SayHello
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_example_test2_HelloWorld
 * Method:    sayHello
 * Signature:
 */
JNIEXPORT jstring JNICALL Java_com_example_hellojni_SayHello_sayHello
        (JNIEnv *env, jclass clasz){
    return env->NewStringUTF("Hello From JNI!");
}

#ifdef __cplusplus
}
#endif
#endif

