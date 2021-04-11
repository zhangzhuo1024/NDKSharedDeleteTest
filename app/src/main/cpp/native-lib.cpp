#include <jni.h>
#include <string>

extern "C" {    //注意在 C++ 中调用 C 语言方法 , 需要做兼容设置
extern int deleteNum(int a, int b);
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_quarkboom_ndkshareddeletetest_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}extern "C"
JNIEXPORT jint JNICALL
Java_com_quarkboom_ndkshareddeletetest_MainActivity_deleteNumber(JNIEnv *env, jobject thiz, jint a,
                                                                 jint b) {
    return deleteNum(a, b);
}