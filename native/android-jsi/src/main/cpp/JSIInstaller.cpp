
#include <jni.h>
#include <jsi/jsi.h>

#include "Database.h"
#include "JSIInstaller.h"

using namespace facebook;

extern "C" JNIEXPORT void JNICALL Java_com_nozbe_watermelondb_jsi_JSIInstaller_installBinding(JNIEnv *env, jobject thiz, jlong runtimePtr) {
    jsi::Runtime *runtime = (jsi::Runtime *)runtimePtr;
    assert(runtime != nullptr);
    watermelondb::Database::install(runtime);
}
