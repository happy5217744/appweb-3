/*  
    buildConfig.h -- Build configuration file.
 */ 

    #define BLD_APPWEB_PRODUCT 1
    #define BLD_PRODUCT "appweb"
    #define BLD_NAME "Embedthis Appweb"
    #define BLD_TYPE "DEBUG"
    #define BLD_TUNE MPR_TUNE_SIZE
    #define BLD_DEFAULTS "standard"
    #define BLD_COMPONENTS " winsdk ar cc make nm strip ld mt rc doxygen pkg regexp mpr matrixssl openssl ssl php sqlite ejs appweb"
    #define BLD_EMBEDTHIS 1

    #define BLD_COMPANY "Embedthis"
    #define BLD_DEBUG 1
    #define BLD_DIRS "build obj lib modules bin src test all doc samples projects package releases"
    #define BLD_CLEAN_INSTALL "0"
    #define BLD_LICENSE "gpl"
    #define BLD_COMMERCIAL "0"

    #define BLD_HOST_SYSTEM "i686-pc-win"
    #define BLD_BUILD_SYSTEM "i686-pc-win"
    #define BLD_CROSS "0"

    #define BLD_HOST_OS "WIN"
    #define BLD_HOST_CPU_ARCH MPR_CPU_IX86
    #define BLD_HOST_CPU "i686"
    #define BLD_HOST_CPU_UPPER "I686"
    #define BLD_HOST_CPU_MODEL "i686"
    #define BLD_HOST_DIST "MS"
    #define BLD_HOST_DIST_VER "5"
    #define BLD_HOST_UNIX 0
    #define BLD_HOST_WIN 1

    #define BLD_BUILD_OS "WIN"
    #define BLD_BUILD_CPU_ARCH MPR_CPU_IX86
    #define BLD_BUILD_CPU "i686"
    #define BLD_BUILD_CPU_UPPER "I686"
    #define BLD_BUILD_CPU_MODEL "i686"
    #define BLD_BUILD_UNIX 0
    #define BLD_BUILD_WIN 1

    #define BLD_ROOT_PREFIX "/"
    #define BLD_PREFIX "/Program Files/Embedthis Appweb"
    #define BLD_CFG_PREFIX "/Program Files/Embedthis Appweb"
    #define BLD_BIN_PREFIX "/Program Files/Embedthis Appweb/bin"
    #define BLD_DOC_PREFIX "/Program Files/Embedthis Appweb/doc"
    #define BLD_INC_PREFIX "/Program Files/Embedthis Appweb/include"
    #define BLD_JEM_PREFIX "/Program Files/Embedthis Appweb/jems"
    #define BLD_LIB_PREFIX "/Program Files/Embedthis Appweb/bin"
    #define BLD_LOG_PREFIX "/Program Files/Embedthis Appweb/logs"
    #define BLD_MAN_PREFIX "/Program Files/Embedthis Appweb"
    #define BLD_MOD_PREFIX "/Program Files/Embedthis Appweb/bin"
    #define BLD_PRD_PREFIX "/Program Files/Embedthis Appweb"
    #define BLD_SAM_PREFIX "/Program Files/Embedthis Appweb/samples"
    #define BLD_SRC_PREFIX "/Program Files/Embedthis Appweb/src"
    #define BLD_VER_PREFIX "/Program Files/Embedthis Appweb"
    #define BLD_WEB_PREFIX "/Program Files/Embedthis Appweb/web"

    #define BLD_FEATURE_ASSERT 1
    #define BLD_FEATURE_CMD 1
    #define BLD_FEATURE_COMPLETE_NATIVE 1
    #define BLD_FEATURE_COMPLETE_CROSS 0
    #define BLD_FEATURE_DOC 1
    #define BLD_FEATURE_DEVICE PocketPC2003
    #define BLD_FEATURE_FLOATING_POINT 1
    #define BLD_FEATURE_LEGACY_API 0
    #define BLD_FEATURE_MULTITHREAD 1
    #define BLD_FEATURE_NUM_TYPE double
    #define BLD_FEATURE_NUM_TYPE_STRING "double"
    #define BLD_FEATURE_SAMPLES 1
    #define BLD_FEATURE_TEST 1

    #ifdef STATIC_OVERRIDE
    #define         BLD_FEATURE_STATIC STATIC_OVERRIDE
    #else
    #define         BLD_FEATURE_STATIC 0
    #endif

    #define BLD_FEATURE_ACCESS_LOG 1
    #define BLD_FEATURE_ANGEL 1
    #define BLD_FEATURE_AUTH_DIGEST 1
    #define BLD_FEATURE_AUTH 1
    #define BLD_FEATURE_AUTH_FILE 1
    #define BLD_FEATURE_AUTH_PAM 0
    #define BLD_FEATURE_CGI 1
    #define BLD_FEATURE_CHUNK 1
    #define BLD_FEATURE_CONFIG_FILE 0
    #define BLD_FEATURE_DIR 1
    #define BLD_FEATURE_EJS_ALL_IN_ONE 1
    #define BLD_FEATURE_EJS_AUTO_COMPILE 1
    #define BLD_FEATURE_EJS_CROSS_COMPILER 1
    #define BLD_FEATURE_EJS_DB 1
    #define BLD_FEATURE_EJS_DOC 0
    #define BLD_FEATURE_EJS_E4X 1
    #define BLD_FEATURE_EJS_LANG EJS_LANG_FIXED
    #define BLD_FEATURE_EJS_WEB 1
    #define BLD_FEATURE_EGI 1
    #define BLD_FEATURE_CONFIG template/standard
    #define BLD_FEATURE_CONFIG_PARSE 1
    #define BLD_FEATURE_FILE 1
    #define BLD_FEATURE_HTTP 1
    #define BLD_FEATURE_HTTP_CLIENT 1
    #define BLD_FEATURE_LOG 1
    #define BLD_FEATURE_NET 1
    #define BLD_FEATURE_NUM_TYPE_DOUBLE 1
    #define BLD_FEATURE_RANGE 1
    #define BLD_FEATURE_RUN_AS_SERVICE 1
    #define BLD_FEATURE_SEND 0
    #define BLD_FEATURE_SERVER_ROOT 0
    #define BLD_FEATURE_UPLOAD 1
    #define BLD_FEATURE_XML 1

    #define BLD_HTTP_PORT 7777
    #define BLD_SSL_PORT 4443


    #define BLD_BUILD_ARCH ".a"
    #define BLD_BUILD_EXE ".exe"
    #define BLD_BUILD_OBJ ".obj"
    #define BLD_BUILD_PIOBJ ".obj"
    #define BLD_BUILD_CLASS ".class"
    #define BLD_BUILD_SHLIB ".lib"
    #define BLD_BUILD_SHOBJ ".dll"

    #

    #define 	BUILD_NATIVE_OR_COMPLETE_CROSS 1
    #define 	BUILD_CROSS_OR_COMPLETE_NATIVE 1

    #define 	WIN 1
    #define 	BLD_OS "WIN"
    #define 	BLD_CPU_ARCH MPR_CPU_IX86
    #define 	BLD_CPU "i686"
    #define 	BLD_CPU_UPPER "I686"
    #define 	BLD_CPU_MODEL "i686"
    #define 	BLD_DIST "MS"
    #define 	BLD_DIST_VER "5"
    #define 	BLD_UNIX_LIKE 0
    #define 	BLD_WIN_LIKE 1

    #define 	BLD_CFLAGS ""
    #define 	BLD_DFLAGS ""
    #define 	BLD_IFLAGS ""
    #define 	BLD_LDFLAGS ""
    #define 	BLD_JFLAGS ""
    #define 	BLD_CPPFLAGS ""

    #define 	BLD_ARCH ".a"
    #define 	BLD_EXE ".exe"
    #define 	BLD_CLASS ".class"
    #define 	BLD_SHLIB ".lib"
    #define 	BLD_SHOBJ ".dll"
    #define 	BLD_LIB ".dll"
    #define 	BLD_OBJ ".obj"
    #define 	BLD_PIOBJ ".obj"

    #define     BLD_BIN_NAME "bin"
    #define     BLD_LIB_NAME "bin"
    #define     BLD_OBJ_NAME "obj"
    #define     BLD_MOD_NAME "bin"
    #define     BLD_INC_NAME "src/include"
    #define 	BLD_TOOLS_DIR "${BLD_TOP}/build/bin"
    #define 	BLD_BIN_DIR ${BLD_TOP}/bin
    #define 	BLD_OBJ_DIR ${BLD_TOP}/obj
    #define 	BLD_MOD_DIR ${BLD_TOP}/bin
    #define 	BLD_JEM_DIR ${BLD_TOP}/jlocal
    #define 	BLD_LIB_DIR ${BLD_TOP}/bin
    #define 	BLD_INC_DIR ${BLD_TOP}/src/include

    #define     BLD_FEATURE_ROMFS 0

    #define BLD_FEATURE_WINSDK 1
    #define BLD_WINSDK "C:/Program Files/Microsoft SDKs/Windows/v6.0A"
    #define BLD_WINSDK_BUILTIN 0
    #define BLD_WINSDK_WITH "1"
    #define BLD_CC_MSCL 1

    #define BLD_FEATURE_AR 1
    #define BLD_AR "C:/Program Files/Microsoft Visual Studio 9.0/VC/bin/lib"
    #define BLD_AR_BUILTIN 0
    #define BLD_AR_WITH "1"

    #define BLD_FEATURE_CC 1
    #define BLD_CC "C:/Program Files/Microsoft Visual Studio 9.0/VC/bin/cl"
    #define BLD_CC_BUILTIN 0
    #define BLD_CC_WITH "1"
    #define BLD_CC_CYGWIN 0
    #define BLD_CC_DIAB 0
    #define BLD_CC_DYN_LOAD 1
    #define BLD_CC_MTUNE 0
    #define BLD_CC_MMU 1
    #define BLD_CC_STACK_PROTECTOR 0

    #define BLD_FEATURE_MAKE 1
    #define BLD_MAKE "C:/bin/make"
    #define BLD_MAKE_BUILTIN 0
    #define BLD_MAKE_WITH "1"

    #define BLD_FEATURE_NM 1
    #define BLD_NM "C:/bin/nm"
    #define BLD_NM_BUILTIN 0
    #define BLD_NM_WITH "1"

    #define BLD_FEATURE_LD 1
    #define BLD_LD "C:/Program Files/Microsoft Visual Studio 9.0/VC/bin/link"
    #define BLD_LD_BUILTIN 0
    #define BLD_LD_WITH "1"

    #define BLD_FEATURE_MT 1
    #define BLD_MT "C:/Program Files/Microsoft SDKs/Windows/v6.0A/bin/mt"
    #define BLD_MT_BUILTIN 0
    #define BLD_MT_WITH "1"

    #define BLD_FEATURE_RC 1
    #define BLD_RC "C:/Program Files/Microsoft SDKs/Windows/v6.0A/bin/rc"
    #define BLD_RC_BUILTIN 0
    #define BLD_RC_WITH "1"

    #define BLD_FEATURE_DOXYGEN 1
    #define BLD_DOXYGEN "C:/bin/doxygen"
    #define BLD_DOXYGEN_BUILTIN 0
    #define BLD_DOXYGEN_WITH "1"

    #define BLD_FEATURE_PKG 1
    #define BLD_PKG "C:/Program Files/Inno Setup 5/iscc"
    #define BLD_PKG_BUILTIN 0
    #define BLD_PKG_WITH "1"

    #define BLD_FEATURE_REGEXP 1
    #define BLD_REGEXP "src/regexp"
    #define BLD_REGEXP_BUILTIN 1
    #define BLD_REGEXP_LIBS "pcre"
    #define BLD_REGEXP_WITH "1"

    #define BLD_FEATURE_MPR 1
    #define BLD_MPR "src/mpr"
    #define BLD_MPR_BUILTIN 1
    #define BLD_MPR_LIBS "mpr pcre"
    #define BLD_MPR_OPTIONAL_DEPENDENCIES "regexp"
    #define BLD_MPR_WITH "1"
    #define BLD_MPR_WITHLIBS "pcre"

    #define BLD_FEATURE_SQLITE 1
    #define BLD_SQLITE "src/db/sqlite"
    #define BLD_SQLITE_BUILTIN 1
    #define BLD_SQLITE_DEPENDENCIES "mpr"
    #define BLD_SQLITE_LIBS "sqlite3 mpr pcre"
    #define BLD_SQLITE_WITH "1"
    #define BLD_SQLITE_WITHLIBS "mpr pcre"

    #define BLD_FEATURE_EJS 1
    #define BLD_EJS "src/ejs"
    #define BLD_EJS_BUILTIN 1
    #define BLD_EJS_DEPENDENCIES "mpr"
    #define BLD_EJS_LIBS "ajs sqlite3 mpr pcre"
    #define BLD_EJS_OPTIONAL_DEPENDENCIES "ssl sqlite"
    #define BLD_EJS_WITH "1"
    #define BLD_EJS_WITHLIBS "sqlite3 mpr pcre"

    #define BLD_FEATURE_APPWEB 1
    #define BLD_APPWEB "src/appweb"
    #define BLD_APPWEB_BUILTIN 1
    #define BLD_APPWEB_DEPENDENCIES "mpr"
    #define BLD_APPWEB_LIBS "appweb mpr pcre"
    #define BLD_APPWEB_OPTIONAL_DEPENDENCIES "ssl"
    #define BLD_APPWEB_WITH "1"
    #define BLD_APPWEB_WITHLIBS "mpr pcre"

    #define BLD_FEATURE_MATRIXSSL 0
    #define BLD_FEATURE_OPENSSL 0
    #define BLD_FEATURE_PHP 0
    #define BLD_FEATURE_SSL 0

    #define BLD_VERSION "3.3.2"
    #define BLD_NUMBER "0"
    #define BLD_NUMBER_ONLY "0"
    #define BLD_MAJOR_VERSION 3
    #define BLD_MINOR_VERSION 3
    #define BLD_PATCH_VERSION 2
    #define BLD_VNUM "3003002"
