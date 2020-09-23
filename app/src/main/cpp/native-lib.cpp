#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_demo3_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_demo3_MainActivity_messageFromCPP(JNIEnv *env, jobject thiz) {
    std::string message = "測試中文";
    return env->NewStringUTF(message.c_str());
}
extern "C"
JNIEXPORT jint JNICALL
Java_com_example_demo3_MainActivity_readSensorFromCPP(JNIEnv *env, jobject thiz) {
    return 356;
}