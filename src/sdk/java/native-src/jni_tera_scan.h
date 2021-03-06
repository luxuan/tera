/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_baidu_tera_client_TeraScanImpl */

#ifndef _Included_com_baidu_tera_client_TeraScanImpl
#define _Included_com_baidu_tera_client_TeraScanImpl
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_baidu_tera_client_TeraScanImpl
 * Method:    nativeNewScanDesc
 * Signature: ([B[B)J
 */
JNIEXPORT jlong JNICALL Java_com_baidu_tera_client_TeraScanImpl_nativeNewScanDesc(JNIEnv *, jobject,
                                                                                  jbyteArray,
                                                                                  jbyteArray);

/*
 * Class:     com_baidu_tera_client_TeraScanImpl
 * Method:    nativeAddFamily
 * Signature: (J[B)Z
 */
JNIEXPORT jboolean JNICALL
Java_com_baidu_tera_client_TeraScanImpl_nativeAddFamily(JNIEnv *, jobject, jlong, jbyteArray);

/*
 * Class:     com_baidu_tera_client_TeraScanImpl
 * Method:    nativeAddColumn
 * Signature: (J[B[B)Z
 */
JNIEXPORT jboolean JNICALL
Java_com_baidu_tera_client_TeraScanImpl_nativeAddColumn(JNIEnv *, jobject, jlong, jbyteArray,
                                                        jbyteArray);

/*
 * Class:     com_baidu_tera_client_TeraScanImpl
 * Method:    nativeDeleteScanDesc
 * Signature: (J)V
 */
JNIEXPORT void JNICALL
Java_com_baidu_tera_client_TeraScanImpl_nativeDeleteScanDesc(JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
