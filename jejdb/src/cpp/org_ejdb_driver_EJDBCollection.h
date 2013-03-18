/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_ejdb_driver_EJDBCollection */

#ifndef _Included_org_ejdb_driver_EJDBCollection
#define _Included_org_ejdb_driver_EJDBCollection
#ifdef __cplusplus
extern "C" {
#endif
#undef org_ejdb_driver_EJDBCollection_JBIDXDROP
#define org_ejdb_driver_EJDBCollection_JBIDXDROP 1L
#undef org_ejdb_driver_EJDBCollection_JBIDXDROPALL
#define org_ejdb_driver_EJDBCollection_JBIDXDROPALL 2L
#undef org_ejdb_driver_EJDBCollection_JBIDXOP
#define org_ejdb_driver_EJDBCollection_JBIDXOP 4L
#undef org_ejdb_driver_EJDBCollection_JBIDXREBLD
#define org_ejdb_driver_EJDBCollection_JBIDXREBLD 8L
#undef org_ejdb_driver_EJDBCollection_JBIDXNUM
#define org_ejdb_driver_EJDBCollection_JBIDXNUM 16L
#undef org_ejdb_driver_EJDBCollection_JBIDXSTR
#define org_ejdb_driver_EJDBCollection_JBIDXSTR 32L
#undef org_ejdb_driver_EJDBCollection_JBIDXARR
#define org_ejdb_driver_EJDBCollection_JBIDXARR 64L
#undef org_ejdb_driver_EJDBCollection_JBIDXISTR
#define org_ejdb_driver_EJDBCollection_JBIDXISTR 128L
/*
 * Class:     org_ejdb_driver_EJDBCollection
 * Method:    ensureDB
 * Signature: (Lorg/ejdb/driver/EJDBCollection/Options;)V
 */
JNIEXPORT void JNICALL Java_org_ejdb_driver_EJDBCollection_ensureDB
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_ejdb_driver_EJDBCollection
 * Method:    dropDB
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_ejdb_driver_EJDBCollection_dropDB
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     org_ejdb_driver_EJDBCollection
 * Method:    syncDB
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_ejdb_driver_EJDBCollection_syncDB
  (JNIEnv *, jobject);

/*
 * Class:     org_ejdb_driver_EJDBCollection
 * Method:    loadDB
 * Signature: (Lorg/bson/types/ObjectId;)Lorg/bson/BSONObject;
 */
JNIEXPORT jobject JNICALL Java_org_ejdb_driver_EJDBCollection_loadDB
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_ejdb_driver_EJDBCollection
 * Method:    saveDB
 * Signature: (Lorg/bson/BSONObject;)Lorg/bson/types/ObjectId;
 */
JNIEXPORT jobject JNICALL Java_org_ejdb_driver_EJDBCollection_saveDB
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_ejdb_driver_EJDBCollection
 * Method:    removeDB
 * Signature: (Lorg/bson/types/ObjectId;)V
 */
JNIEXPORT void JNICALL Java_org_ejdb_driver_EJDBCollection_removeDB
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_ejdb_driver_EJDBCollection
 * Method:    setIndexDB
 * Signature: (Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_org_ejdb_driver_EJDBCollection_setIndexDB
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     org_ejdb_driver_EJDBCollection
 * Method:    txControlDB
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_ejdb_driver_EJDBCollection_txControlDB
  (JNIEnv *, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
