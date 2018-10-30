#include <jni.h>
#include <string>

extern "C" JNIEXPORT jint JNICALL
Java_com_example_ramharshini_myapplication_MainActivity_clickCount(
        JNIEnv *env,
        jobject) {
    static int count;
        return ++count;
}
