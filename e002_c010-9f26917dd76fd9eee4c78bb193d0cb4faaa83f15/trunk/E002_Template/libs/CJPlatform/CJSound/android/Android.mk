LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := CJSound_static

LOCAL_MODULE_FILENAME := libCJSound

LOCAL_SRC_FILES := CJNarrationSound.cpp \
		   jni/CJNarrationSoundJNI.cpp

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/../include

LOCAL_C_INCLUDES := $(LOCAL_PATH)/../include \
                    $(LOCAL_PATH)/../../../cocos2dx \
                    $(LOCAL_PATH)/../../../cocos2dx/include \
                    $(LOCAL_PATH)/../../../cocos2dx/platform \
                    $(LOCAL_PATH)/../../../cocos2dx/platform/android \
                    $(LOCAL_PATH)/../../../cocos2dx/platform/android/jni \
		    $(LOCAL_PATH)/../../../cocos2dx/kazmath/include \
		    $(LOCAL_PATH)/../../../CocosDenshion/include \
                    $(LOCAL_PATH)/../../../../Classes/cj_common/include \
		    $(LOCAL_PATH)/../../../../Classes/cj_common/utils \
		    $(LOCAL_PATH)/../../../../Classes/cj_lms/lms_api

include $(BUILD_STATIC_LIBRARY)
