#ifndef NODEJAVA_CLASSINFO_H
#define NODEJAVA_CLASSINFO_H

#include <jni.h>
#include <v8.h>

class ClassInfo {
public:
    static v8::Local<v8::Value>
    BuildObject(v8::Isolate *isolate, jobject instance);

private:
    ClassInfo() = delete;
};


#endif //NODEJAVA_CLASSINFO_H
