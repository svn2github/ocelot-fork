# 1 "/tmp/tmpxft_00001939_00000000-1_imageDenoising.cudafe1.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/tmp/tmpxft_00001939_00000000-1_imageDenoising.cudafe1.cpp"
# 1 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu"
# 46 "/usr/local/cuda/bin/../include/device_types.h"
# 149 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 3
typedef long ptrdiff_t;
# 211 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 3
typedef unsigned long size_t;
# 1 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 1 3
# 69 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 3
# 1 "/usr/local/cuda/bin/../include/builtin_types.h" 1 3
# 42 "/usr/local/cuda/bin/../include/builtin_types.h" 3
# 1 "/usr/local/cuda/bin/../include/device_types.h" 1 3
# 46 "/usr/local/cuda/bin/../include/device_types.h" 3
enum cudaRoundMode
{
  cudaRoundNearest,
  cudaRoundZero,
  cudaRoundPosInf,
  cudaRoundMinInf
};
# 43 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/driver_types.h" 1 3
# 96 "/usr/local/cuda/bin/../include/driver_types.h" 3
enum cudaError
{





  cudaSuccess = 0,





  cudaErrorMissingConfiguration = 1,





  cudaErrorMemoryAllocation = 2,





  cudaErrorInitializationError = 3,
# 131 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorLaunchFailure = 4,
# 140 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorPriorLaunchFailure = 5,
# 150 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorLaunchTimeout = 6,
# 159 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorLaunchOutOfResources = 7,





  cudaErrorInvalidDeviceFunction = 8,
# 174 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorInvalidConfiguration = 9,





  cudaErrorInvalidDevice = 10,





  cudaErrorInvalidValue = 11,





  cudaErrorInvalidPitchValue = 12,





  cudaErrorInvalidSymbol = 13,




  cudaErrorMapBufferObjectFailed = 14,




  cudaErrorUnmapBufferObjectFailed = 15,





  cudaErrorInvalidHostPointer = 16,





  cudaErrorInvalidDevicePointer = 17,





  cudaErrorInvalidTexture = 18,





  cudaErrorInvalidTextureBinding = 19,






  cudaErrorInvalidChannelDescriptor = 20,





  cudaErrorInvalidMemcpyDirection = 21,
# 255 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorAddressOfConstant = 22,
# 264 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorTextureFetchFailed = 23,
# 273 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorTextureNotBound = 24,
# 282 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorSynchronizationError = 25,





  cudaErrorInvalidFilterSetting = 26,





  cudaErrorInvalidNormSetting = 27,







  cudaErrorMixedDeviceExecution = 28,







  cudaErrorCudartUnloading = 29,




  cudaErrorUnknown = 30,





  cudaErrorNotYetImplemented = 31,
# 330 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorMemoryValueTooLarge = 32,






  cudaErrorInvalidResourceHandle = 33,







  cudaErrorNotReady = 34,






  cudaErrorInsufficientDriver = 35,
# 365 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorSetOnActiveProcess = 36,





  cudaErrorInvalidSurface = 37,





  cudaErrorNoDevice = 38,





  cudaErrorECCUncorrectable = 39,




  cudaErrorSharedObjectSymbolNotFound = 40,




  cudaErrorSharedObjectInitFailed = 41,





  cudaErrorUnsupportedLimit = 42,





  cudaErrorDuplicateVariableName = 43,





  cudaErrorDuplicateTextureName = 44,





  cudaErrorDuplicateSurfaceName = 45,
# 426 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorDevicesUnavailable = 46,




  cudaErrorInvalidKernelImage = 47,







  cudaErrorNoKernelImageForDevice = 48,
# 448 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorIncompatibleDriverContext = 49,




  cudaErrorStartupFailure = 0x7f,





  cudaErrorApiFailureBase = 10000
};





enum cudaChannelFormatKind
{
  cudaChannelFormatKindSigned = 0,
  cudaChannelFormatKindUnsigned = 1,
  cudaChannelFormatKindFloat = 2,
  cudaChannelFormatKindNone = 3
};





struct cudaChannelFormatDesc
{
  int x;
  int y;
  int z;
  int w;
  enum cudaChannelFormatKind f;
};





struct cudaArray;





enum cudaMemcpyKind
{
  cudaMemcpyHostToHost = 0,
  cudaMemcpyHostToDevice = 1,
  cudaMemcpyDeviceToHost = 2,
  cudaMemcpyDeviceToDevice = 3
};






struct cudaPitchedPtr
{
  void *ptr;
  size_t pitch;
  size_t xsize;
  size_t ysize;
};






struct cudaExtent
{
  size_t width;
  size_t height;
  size_t depth;
};






struct cudaPos
{
  size_t x;
  size_t y;
  size_t z;
};





struct cudaMemcpy3DParms
{
  struct cudaArray *srcArray;
  struct cudaPos srcPos;
  struct cudaPitchedPtr srcPtr;

  struct cudaArray *dstArray;
  struct cudaPos dstPos;
  struct cudaPitchedPtr dstPtr;

  struct cudaExtent extent;
  enum cudaMemcpyKind kind;
};





struct cudaGraphicsResource;





enum cudaGraphicsRegisterFlags
{
  cudaGraphicsRegisterFlagsNone = 0
};





enum cudaGraphicsMapFlags
{
  cudaGraphicsMapFlagsNone = 0,
  cudaGraphicsMapFlagsReadOnly = 1,
  cudaGraphicsMapFlagsWriteDiscard = 2
};





enum cudaGraphicsCubeFace {
  cudaGraphicsCubeFacePositiveX = 0x00,
  cudaGraphicsCubeFaceNegativeX = 0x01,
  cudaGraphicsCubeFacePositiveY = 0x02,
  cudaGraphicsCubeFaceNegativeY = 0x03,
  cudaGraphicsCubeFacePositiveZ = 0x04,
  cudaGraphicsCubeFaceNegativeZ = 0x05
};





struct cudaFuncAttributes
{





   size_t sharedSizeBytes;





   size_t constSizeBytes;




   size_t localSizeBytes;






   int maxThreadsPerBlock;




   int numRegs;






   int ptxVersion;






   int binaryVersion;

   int __cudaReserved[6];
};





enum cudaFuncCache
{
  cudaFuncCachePreferNone = 0,
  cudaFuncCachePreferShared = 1,
  cudaFuncCachePreferL1 = 2
};





enum cudaComputeMode
{
  cudaComputeModeDefault = 0,
  cudaComputeModeExclusive = 1,
  cudaComputeModeProhibited = 2
};





enum cudaLimit
{
    cudaLimitStackSize = 0x00,
    cudaLimitPrintfFifoSize = 0x01,
    cudaLimitMallocHeapSize = 0x02
};





struct cudaDeviceProp
{
  char name[256];
  size_t totalGlobalMem;
  size_t sharedMemPerBlock;
  int regsPerBlock;
  int warpSize;
  size_t memPitch;
  int maxThreadsPerBlock;
  int maxThreadsDim[3];
  int maxGridSize[3];
  int clockRate;
  size_t totalConstMem;
  int major;
  int minor;
  size_t textureAlignment;
  int deviceOverlap;
  int multiProcessorCount;
  int kernelExecTimeoutEnabled;
  int integrated;
  int canMapHostMemory;
  int computeMode;
  int maxTexture1D;
  int maxTexture2D[2];
  int maxTexture3D[3];
  int maxTexture2DArray[3];
  size_t surfaceAlignment;
  int concurrentKernels;
  int ECCEnabled;
  int pciBusID;
  int pciDeviceID;
  int tccDriver;
  int __cudaReserved[21];
};
# 768 "/usr/local/cuda/bin/../include/driver_types.h" 3
typedef enum cudaError cudaError_t;





typedef struct CUstream_st *cudaStream_t;





typedef struct CUevent_st *cudaEvent_t;





typedef struct cudaGraphicsResource *cudaGraphicsResource_t;





typedef struct CUuuid_st cudaUUID_t;
# 44 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/surface_types.h" 1 3
# 63 "/usr/local/cuda/bin/../include/surface_types.h" 3
enum cudaSurfaceBoundaryMode
{
  cudaBoundaryModeZero = 0,
  cudaBoundaryModeClamp = 1,
  cudaBoundaryModeTrap = 2
};





enum cudaSurfaceFormatMode
{
  cudaFormatModeForced = 0,
  cudaFormatModeAuto = 1
};





struct surfaceReference
{



  struct cudaChannelFormatDesc channelDesc;
};
# 45 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/texture_types.h" 1 3
# 63 "/usr/local/cuda/bin/../include/texture_types.h" 3
enum cudaTextureAddressMode
{
  cudaAddressModeWrap = 0,
  cudaAddressModeClamp = 1,
  cudaAddressModeMirror = 2,
  cudaAddressModeBorder = 3
};





enum cudaTextureFilterMode
{
  cudaFilterModePoint = 0,
  cudaFilterModeLinear = 1
};





enum cudaTextureReadMode
{
  cudaReadModeElementType = 0,
  cudaReadModeNormalizedFloat = 1
};





struct textureReference
{



  int normalized;



  enum cudaTextureFilterMode filterMode;



  enum cudaTextureAddressMode addressMode[3];



  struct cudaChannelFormatDesc channelDesc;
  int __cudaReserved[16];
};
# 46 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/vector_types.h" 1 3
# 45 "/usr/local/cuda/bin/../include/vector_types.h" 3
# 1 "/usr/local/cuda/bin/../include/builtin_types.h" 1 3
# 46 "/usr/local/cuda/bin/../include/builtin_types.h" 3
# 1 "/usr/local/cuda/bin/../include/vector_types.h" 1 3
# 46 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 46 "/usr/local/cuda/bin/../include/vector_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/host_defines.h" 1 3
# 47 "/usr/local/cuda/bin/../include/vector_types.h" 2 3
# 75 "/usr/local/cuda/bin/../include/vector_types.h" 3
struct char1
{
  signed char x;
};


struct uchar1
{
  unsigned char x;
};


struct __attribute__((aligned(2))) char2
{
  signed char x, y;
};


struct __attribute__((aligned(2))) uchar2
{
  unsigned char x, y;
};


struct char3
{
  signed char x, y, z;
};


struct uchar3
{
  unsigned char x, y, z;
};


struct __attribute__((aligned(4))) char4
{
  signed char x, y, z, w;
};


struct __attribute__((aligned(4))) uchar4
{
  unsigned char x, y, z, w;
};


struct short1
{
  short x;
};


struct ushort1
{
  unsigned short x;
};


struct __attribute__((aligned(4))) short2
{
  short x, y;
};


struct __attribute__((aligned(4))) ushort2
{
  unsigned short x, y;
};


struct short3
{
  short x, y, z;
};


struct ushort3
{
  unsigned short x, y, z;
};


struct __attribute__((aligned(8))) short4 { short x; short y; short z; short w; };


struct __attribute__((aligned(8))) ushort4 { unsigned short x; unsigned short y; unsigned short z; unsigned short w; };


struct int1
{
  int x;
};


struct uint1
{
  unsigned int x;
};


struct __attribute__((aligned(8))) int2 { int x; int y; };


struct __attribute__((aligned(8))) uint2 { unsigned int x; unsigned int y; };


struct int3
{
  int x, y, z;
};


struct uint3
{
  unsigned int x, y, z;
};


struct __attribute__((aligned(16))) int4
{
  int x, y, z, w;
};


struct __attribute__((aligned(16))) uint4
{
  unsigned int x, y, z, w;
};


struct long1
{
  long int x;
};


struct ulong1
{
  unsigned long x;
};
# 229 "/usr/local/cuda/bin/../include/vector_types.h" 3
struct __attribute__((aligned(2*sizeof(long int)))) long2
{
  long int x, y;
};


struct __attribute__((aligned(2*sizeof(unsigned long int)))) ulong2
{
  unsigned long int x, y;
};




struct long3
{
  long int x, y, z;
};


struct ulong3
{
  unsigned long int x, y, z;
};


struct __attribute__((aligned(16))) long4
{
  long int x, y, z, w;
};


struct __attribute__((aligned(16))) ulong4
{
  unsigned long int x, y, z, w;
};


struct float1
{
  float x;
};


struct __attribute__((aligned(8))) float2 { float x; float y; };


struct float3
{
  float x, y, z;
};


struct __attribute__((aligned(16))) float4
{
  float x, y, z, w;
};


struct longlong1
{
  long long int x;
};


struct ulonglong1
{
  unsigned long long int x;
};


struct __attribute__((aligned(16))) longlong2
{
  long long int x, y;
};


struct __attribute__((aligned(16))) ulonglong2
{
  unsigned long long int x, y;
};


struct longlong3
{
  long long int x, y, z;
};


struct ulonglong3
{
  unsigned long long int x, y, z;
};


struct __attribute__((aligned(16))) longlong4
{
  long long int x, y, z ,w;
};


struct __attribute__((aligned(16))) ulonglong4
{
  unsigned long long int x, y, z, w;
};


struct double1
{
  double x;
};


struct __attribute__((aligned(16))) double2
{
  double x, y;
};


struct double3
{
  double x, y, z;
};


struct __attribute__((aligned(16))) double4
{
  double x, y, z, w;
};
# 366 "/usr/local/cuda/bin/../include/vector_types.h" 3
typedef struct char1 char1;

typedef struct uchar1 uchar1;

typedef struct char2 char2;

typedef struct uchar2 uchar2;

typedef struct char3 char3;

typedef struct uchar3 uchar3;

typedef struct char4 char4;

typedef struct uchar4 uchar4;

typedef struct short1 short1;

typedef struct ushort1 ushort1;

typedef struct short2 short2;

typedef struct ushort2 ushort2;

typedef struct short3 short3;

typedef struct ushort3 ushort3;

typedef struct short4 short4;

typedef struct ushort4 ushort4;

typedef struct int1 int1;

typedef struct uint1 uint1;

typedef struct int2 int2;

typedef struct uint2 uint2;

typedef struct int3 int3;

typedef struct uint3 uint3;

typedef struct int4 int4;

typedef struct uint4 uint4;

typedef struct long1 long1;

typedef struct ulong1 ulong1;

typedef struct long2 long2;

typedef struct ulong2 ulong2;

typedef struct long3 long3;

typedef struct ulong3 ulong3;

typedef struct long4 long4;

typedef struct ulong4 ulong4;

typedef struct float1 float1;

typedef struct float2 float2;

typedef struct float3 float3;

typedef struct float4 float4;

typedef struct longlong1 longlong1;

typedef struct ulonglong1 ulonglong1;

typedef struct longlong2 longlong2;

typedef struct ulonglong2 ulonglong2;

typedef struct longlong3 longlong3;

typedef struct ulonglong3 ulonglong3;

typedef struct longlong4 longlong4;

typedef struct ulonglong4 ulonglong4;

typedef struct double1 double1;

typedef struct double2 double2;

typedef struct double3 double3;

typedef struct double4 double4;
# 469 "/usr/local/cuda/bin/../include/vector_types.h" 3
struct dim3
{
    unsigned int x, y, z;

    dim3(unsigned int vx = 1, unsigned int vy = 1, unsigned int vz = 1) : x(vx), y(vy), z(vz) {}
    dim3(uint3 v) : x(v.x), y(v.y), z(v.z) {}
    operator uint3(void) { uint3 t; t.x = x; t.y = y; t.z = z; return t; }

};


typedef struct dim3 dim3;
# 46 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 70 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 2 3
# 1 "/usr/local/cuda/bin/../include/crt/storage_class.h" 1 3
# 71 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 2 3
# 213 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h" 2 3
# 96 "/usr/local/cuda/bin/../include/driver_types.h"
# 466 "/usr/local/cuda/bin/../include/driver_types.h"
# 478 "/usr/local/cuda/bin/../include/driver_types.h"
# 491 "/usr/local/cuda/bin/../include/driver_types.h"
# 497 "/usr/local/cuda/bin/../include/driver_types.h"
# 510 "/usr/local/cuda/bin/../include/driver_types.h"
# 523 "/usr/local/cuda/bin/../include/driver_types.h"
# 535 "/usr/local/cuda/bin/../include/driver_types.h"
# 546 "/usr/local/cuda/bin/../include/driver_types.h"
# 564 "/usr/local/cuda/bin/../include/driver_types.h"
# 570 "/usr/local/cuda/bin/../include/driver_types.h"
# 579 "/usr/local/cuda/bin/../include/driver_types.h"
# 590 "/usr/local/cuda/bin/../include/driver_types.h"
# 603 "/usr/local/cuda/bin/../include/driver_types.h"
# 656 "/usr/local/cuda/bin/../include/driver_types.h"
# 667 "/usr/local/cuda/bin/../include/driver_types.h"
# 678 "/usr/local/cuda/bin/../include/driver_types.h"
# 689 "/usr/local/cuda/bin/../include/driver_types.h"
# 768 "/usr/local/cuda/bin/../include/driver_types.h"
# 774 "/usr/local/cuda/bin/../include/driver_types.h"
# 780 "/usr/local/cuda/bin/../include/driver_types.h"
# 786 "/usr/local/cuda/bin/../include/driver_types.h"
# 792 "/usr/local/cuda/bin/../include/driver_types.h"
# 63 "/usr/local/cuda/bin/../include/surface_types.h"
# 74 "/usr/local/cuda/bin/../include/surface_types.h"
# 84 "/usr/local/cuda/bin/../include/surface_types.h"
# 63 "/usr/local/cuda/bin/../include/texture_types.h"
# 75 "/usr/local/cuda/bin/../include/texture_types.h"
# 85 "/usr/local/cuda/bin/../include/texture_types.h"
# 95 "/usr/local/cuda/bin/../include/texture_types.h"
# 75 "/usr/local/cuda/bin/../include/vector_types.h"
# 81 "/usr/local/cuda/bin/../include/vector_types.h"
# 87 "/usr/local/cuda/bin/../include/vector_types.h"
# 93 "/usr/local/cuda/bin/../include/vector_types.h"
# 99 "/usr/local/cuda/bin/../include/vector_types.h"
# 105 "/usr/local/cuda/bin/../include/vector_types.h"
# 111 "/usr/local/cuda/bin/../include/vector_types.h"
# 117 "/usr/local/cuda/bin/../include/vector_types.h"
# 123 "/usr/local/cuda/bin/../include/vector_types.h"
# 129 "/usr/local/cuda/bin/../include/vector_types.h"
# 135 "/usr/local/cuda/bin/../include/vector_types.h"
# 141 "/usr/local/cuda/bin/../include/vector_types.h"
# 147 "/usr/local/cuda/bin/../include/vector_types.h"
# 153 "/usr/local/cuda/bin/../include/vector_types.h"
# 159 "/usr/local/cuda/bin/../include/vector_types.h"
# 162 "/usr/local/cuda/bin/../include/vector_types.h"
# 165 "/usr/local/cuda/bin/../include/vector_types.h"
# 171 "/usr/local/cuda/bin/../include/vector_types.h"
# 177 "/usr/local/cuda/bin/../include/vector_types.h"
# 180 "/usr/local/cuda/bin/../include/vector_types.h"
# 183 "/usr/local/cuda/bin/../include/vector_types.h"
# 189 "/usr/local/cuda/bin/../include/vector_types.h"
# 195 "/usr/local/cuda/bin/../include/vector_types.h"
# 201 "/usr/local/cuda/bin/../include/vector_types.h"
# 207 "/usr/local/cuda/bin/../include/vector_types.h"
# 213 "/usr/local/cuda/bin/../include/vector_types.h"
# 229 "/usr/local/cuda/bin/../include/vector_types.h"
# 235 "/usr/local/cuda/bin/../include/vector_types.h"
# 243 "/usr/local/cuda/bin/../include/vector_types.h"
# 249 "/usr/local/cuda/bin/../include/vector_types.h"
# 255 "/usr/local/cuda/bin/../include/vector_types.h"
# 261 "/usr/local/cuda/bin/../include/vector_types.h"
# 267 "/usr/local/cuda/bin/../include/vector_types.h"
# 273 "/usr/local/cuda/bin/../include/vector_types.h"
# 276 "/usr/local/cuda/bin/../include/vector_types.h"
# 282 "/usr/local/cuda/bin/../include/vector_types.h"
# 288 "/usr/local/cuda/bin/../include/vector_types.h"
# 294 "/usr/local/cuda/bin/../include/vector_types.h"
# 300 "/usr/local/cuda/bin/../include/vector_types.h"
# 306 "/usr/local/cuda/bin/../include/vector_types.h"
# 312 "/usr/local/cuda/bin/../include/vector_types.h"
# 318 "/usr/local/cuda/bin/../include/vector_types.h"
# 324 "/usr/local/cuda/bin/../include/vector_types.h"
# 330 "/usr/local/cuda/bin/../include/vector_types.h"
# 336 "/usr/local/cuda/bin/../include/vector_types.h"
# 342 "/usr/local/cuda/bin/../include/vector_types.h"
# 348 "/usr/local/cuda/bin/../include/vector_types.h"
# 354 "/usr/local/cuda/bin/../include/vector_types.h"
# 366 "/usr/local/cuda/bin/../include/vector_types.h"
# 368 "/usr/local/cuda/bin/../include/vector_types.h"
# 370 "/usr/local/cuda/bin/../include/vector_types.h"
# 372 "/usr/local/cuda/bin/../include/vector_types.h"
# 374 "/usr/local/cuda/bin/../include/vector_types.h"
# 376 "/usr/local/cuda/bin/../include/vector_types.h"
# 378 "/usr/local/cuda/bin/../include/vector_types.h"
# 380 "/usr/local/cuda/bin/../include/vector_types.h"
# 382 "/usr/local/cuda/bin/../include/vector_types.h"
# 384 "/usr/local/cuda/bin/../include/vector_types.h"
# 386 "/usr/local/cuda/bin/../include/vector_types.h"
# 388 "/usr/local/cuda/bin/../include/vector_types.h"
# 390 "/usr/local/cuda/bin/../include/vector_types.h"
# 392 "/usr/local/cuda/bin/../include/vector_types.h"
# 394 "/usr/local/cuda/bin/../include/vector_types.h"
# 396 "/usr/local/cuda/bin/../include/vector_types.h"
# 398 "/usr/local/cuda/bin/../include/vector_types.h"
# 400 "/usr/local/cuda/bin/../include/vector_types.h"
# 402 "/usr/local/cuda/bin/../include/vector_types.h"
# 404 "/usr/local/cuda/bin/../include/vector_types.h"
# 406 "/usr/local/cuda/bin/../include/vector_types.h"
# 408 "/usr/local/cuda/bin/../include/vector_types.h"
# 410 "/usr/local/cuda/bin/../include/vector_types.h"
# 412 "/usr/local/cuda/bin/../include/vector_types.h"
# 414 "/usr/local/cuda/bin/../include/vector_types.h"
# 416 "/usr/local/cuda/bin/../include/vector_types.h"
# 418 "/usr/local/cuda/bin/../include/vector_types.h"
# 420 "/usr/local/cuda/bin/../include/vector_types.h"
# 422 "/usr/local/cuda/bin/../include/vector_types.h"
# 424 "/usr/local/cuda/bin/../include/vector_types.h"
# 426 "/usr/local/cuda/bin/../include/vector_types.h"
# 428 "/usr/local/cuda/bin/../include/vector_types.h"
# 430 "/usr/local/cuda/bin/../include/vector_types.h"
# 432 "/usr/local/cuda/bin/../include/vector_types.h"
# 434 "/usr/local/cuda/bin/../include/vector_types.h"
# 436 "/usr/local/cuda/bin/../include/vector_types.h"
# 438 "/usr/local/cuda/bin/../include/vector_types.h"
# 440 "/usr/local/cuda/bin/../include/vector_types.h"
# 442 "/usr/local/cuda/bin/../include/vector_types.h"
# 444 "/usr/local/cuda/bin/../include/vector_types.h"
# 446 "/usr/local/cuda/bin/../include/vector_types.h"
# 448 "/usr/local/cuda/bin/../include/vector_types.h"
# 450 "/usr/local/cuda/bin/../include/vector_types.h"
# 452 "/usr/local/cuda/bin/../include/vector_types.h"
# 454 "/usr/local/cuda/bin/../include/vector_types.h"
# 456 "/usr/local/cuda/bin/../include/vector_types.h"
# 458 "/usr/local/cuda/bin/../include/vector_types.h"
# 460 "/usr/local/cuda/bin/../include/vector_types.h"
# 469 "/usr/local/cuda/bin/../include/vector_types.h"
# 480 "/usr/local/cuda/bin/../include/vector_types.h"
# 115 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadExit();
# 131 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSynchronize();
# 183 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSetLimit(cudaLimit, size_t);
# 207 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadGetLimit(size_t *, cudaLimit);
# 237 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadGetCacheConfig(cudaFuncCache *);
# 278 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSetCacheConfig(cudaFuncCache);
# 330 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetLastError();
# 373 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaPeekAtLastError();
# 387 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" const char *cudaGetErrorString(cudaError_t);
# 418 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDeviceCount(int *);
# 536 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDeviceProperties(cudaDeviceProp *, int);
# 555 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaChooseDevice(int *, const cudaDeviceProp *);
# 579 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDevice(int);
# 597 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDevice(int *);
# 626 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetValidDevices(int *, int);
# 677 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDeviceFlags(unsigned);
# 703 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamCreate(cudaStream_t *);
# 719 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamDestroy(cudaStream_t);
# 753 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamWaitEvent(cudaStream_t, cudaEvent_t, unsigned);
# 771 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamSynchronize(cudaStream_t);
# 789 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamQuery(cudaStream_t);
# 821 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventCreate(cudaEvent_t *);
# 852 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventCreateWithFlags(cudaEvent_t *, unsigned);
# 885 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventRecord(cudaEvent_t, cudaStream_t = 0);
# 914 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventQuery(cudaEvent_t);
# 946 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventSynchronize(cudaEvent_t);
# 966 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventDestroy(cudaEvent_t);
# 1007 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventElapsedTime(float *, cudaEvent_t, cudaEvent_t);
# 1046 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaConfigureCall(dim3, dim3, size_t = (0), cudaStream_t = 0);
# 1073 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetupArgument(const void *, size_t, size_t);
# 1119 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFuncSetCacheConfig(const char *, cudaFuncCache);
# 1154 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaLaunch(const char *);
# 1187 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFuncGetAttributes(cudaFuncAttributes *, const char *);
# 1209 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDoubleForDevice(double *);
# 1231 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDoubleForHost(double *);
# 1263 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc(void **, size_t);
# 1292 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocHost(void **, size_t);
# 1331 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocPitch(void **, size_t *, size_t, size_t);
# 1370 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocArray(cudaArray **, const cudaChannelFormatDesc *, size_t, size_t = (0), unsigned = (0));
# 1394 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFree(void *);
# 1414 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFreeHost(void *);
# 1436 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFreeArray(cudaArray *);
# 1495 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostAlloc(void **, size_t, unsigned);
# 1522 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostGetDevicePointer(void **, void *, unsigned);
# 1541 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostGetFlags(unsigned *, void *);
# 1576 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc3D(cudaPitchedPtr *, cudaExtent);
# 1626 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc3DArray(cudaArray **, const cudaChannelFormatDesc *, cudaExtent, unsigned = (0));
# 1723 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3D(const cudaMemcpy3DParms *);
# 1828 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3DAsync(const cudaMemcpy3DParms *, cudaStream_t = 0);
# 1847 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemGetInfo(size_t *, size_t *);
# 1880 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy(void *, const void *, size_t, cudaMemcpyKind);
# 1913 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToArray(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind);
# 1946 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromArray(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind);
# 1981 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice);
# 2023 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2D(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind);
# 2064 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DToArray(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind);
# 2105 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DFromArray(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind);
# 2144 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice);
# 2179 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToSymbol(const char *, const void *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyHostToDevice);
# 2213 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromSymbol(void *, const char *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyDeviceToHost);
# 2256 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyAsync(void *, const void *, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2298 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2340 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromArrayAsync(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2391 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DAsync(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2441 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2491 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DFromArrayAsync(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2535 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToSymbolAsync(const char *, const void *, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2578 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromSymbolAsync(void *, const char *, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2600 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset(void *, int, size_t);
# 2626 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset2D(void *, size_t, int, size_t, size_t);
# 2665 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset3D(cudaPitchedPtr, int, cudaExtent);
# 2692 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemsetAsync(void *, int, size_t, cudaStream_t = 0);
# 2724 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset2DAsync(void *, size_t, int, size_t, size_t, cudaStream_t = 0);
# 2769 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset3DAsync(cudaPitchedPtr, int, cudaExtent, cudaStream_t = 0);
# 2796 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSymbolAddress(void **, const char *);
# 2819 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSymbolSize(size_t *, const char *);
# 2865 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsUnregisterResource(cudaGraphicsResource_t);
# 2897 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsResourceSetMapFlags(cudaGraphicsResource_t, unsigned);
# 2932 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsMapResources(int, cudaGraphicsResource_t *, cudaStream_t = 0);
# 2963 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsUnmapResources(int, cudaGraphicsResource_t *, cudaStream_t = 0);
# 2992 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsResourceGetMappedPointer(void **, size_t *, cudaGraphicsResource_t);
# 3026 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsSubResourceGetMappedArray(cudaArray **, cudaGraphicsResource_t, unsigned, unsigned);
# 3059 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetChannelDesc(cudaChannelFormatDesc *, const cudaArray *);
# 3094 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaChannelFormatDesc cudaCreateChannelDesc(int, int, int, int, cudaChannelFormatKind);
# 3136 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTexture(size_t *, const textureReference *, const void *, const cudaChannelFormatDesc *, size_t = (((2147483647) * 2U) + 1U));
# 3179 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTexture2D(size_t *, const textureReference *, const void *, const cudaChannelFormatDesc *, size_t, size_t, size_t);
# 3207 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTextureToArray(const textureReference *, const cudaArray *, const cudaChannelFormatDesc *);
# 3228 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaUnbindTexture(const textureReference *);
# 3253 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetTextureAlignmentOffset(size_t *, const textureReference *);
# 3277 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetTextureReference(const textureReference **, const char *);
# 3310 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindSurfaceToArray(const surfaceReference *, const cudaArray *, const cudaChannelFormatDesc *);
# 3328 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSurfaceReference(const surfaceReference **, const char *);
# 3355 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDriverGetVersion(int *);
# 3372 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaRuntimeGetVersion(int *);
# 3377 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetExportTable(const void **, const cudaUUID_t *);
# 93 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template< class T> inline cudaChannelFormatDesc cudaCreateChannelDesc()
# 94 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 95 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone);
# 96 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 98 "/usr/local/cuda/bin/../include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf()
# 99 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 100 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 102 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 103 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 105 "/usr/local/cuda/bin/../include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf1()
# 106 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 107 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 109 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 110 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 112 "/usr/local/cuda/bin/../include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf2()
# 113 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 114 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 116 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat);
# 117 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 119 "/usr/local/cuda/bin/../include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf4()
# 120 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 121 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 123 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat);
# 124 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 126 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char> ()
# 127 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 128 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(char)) * 8);
# 133 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 135 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 137 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> ()
# 138 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 139 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 141 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 142 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 144 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> ()
# 145 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 146 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 148 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 149 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 151 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> ()
# 152 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 153 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 155 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 156 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 158 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> ()
# 159 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 160 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 162 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 163 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 165 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> ()
# 166 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 167 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 169 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 170 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 172 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> ()
# 173 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 174 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 176 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 177 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 179 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> ()
# 180 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 181 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 183 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 184 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 186 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> ()
# 187 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 188 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 190 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 191 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 193 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short> ()
# 194 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 195 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 197 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 198 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 200 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> ()
# 201 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 202 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 204 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 205 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 207 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> ()
# 208 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 209 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 211 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 212 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 214 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> ()
# 215 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 216 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 218 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 219 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 221 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> ()
# 222 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 223 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 225 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 226 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 228 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> ()
# 229 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 230 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 232 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 233 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 235 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> ()
# 236 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 237 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 239 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 240 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 242 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> ()
# 243 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 244 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 246 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 247 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 249 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int> ()
# 250 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 251 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 253 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 254 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 256 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> ()
# 257 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 258 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 260 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 261 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 263 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> ()
# 264 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 265 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 267 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 268 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 270 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> ()
# 271 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 272 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 274 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 275 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 277 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> ()
# 278 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 279 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 281 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 282 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 284 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> ()
# 285 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 286 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 288 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 289 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 291 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> ()
# 292 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 293 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 295 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 296 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 298 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> ()
# 299 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 300 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 302 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 303 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 365 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float> ()
# 366 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 367 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 369 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 370 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 372 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> ()
# 373 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 374 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 376 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 377 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 379 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> ()
# 380 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 381 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 383 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat);
# 384 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 386 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> ()
# 387 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 388 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 390 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat);
# 391 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 65 "/usr/local/cuda/bin/../include/driver_functions.h"
static inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz)
# 66 "/usr/local/cuda/bin/../include/driver_functions.h"
{
# 67 "/usr/local/cuda/bin/../include/driver_functions.h"
cudaPitchedPtr s;
# 69 "/usr/local/cuda/bin/../include/driver_functions.h"
(s.ptr) = d;
# 70 "/usr/local/cuda/bin/../include/driver_functions.h"
(s.pitch) = p;
# 71 "/usr/local/cuda/bin/../include/driver_functions.h"
(s.xsize) = xsz;
# 72 "/usr/local/cuda/bin/../include/driver_functions.h"
(s.ysize) = ysz;
# 74 "/usr/local/cuda/bin/../include/driver_functions.h"
return s;
# 75 "/usr/local/cuda/bin/../include/driver_functions.h"
}
# 92 "/usr/local/cuda/bin/../include/driver_functions.h"
static inline cudaPos make_cudaPos(size_t x, size_t y, size_t z)
# 93 "/usr/local/cuda/bin/../include/driver_functions.h"
{
# 94 "/usr/local/cuda/bin/../include/driver_functions.h"
cudaPos p;
# 96 "/usr/local/cuda/bin/../include/driver_functions.h"
(p.x) = x;
# 97 "/usr/local/cuda/bin/../include/driver_functions.h"
(p.y) = y;
# 98 "/usr/local/cuda/bin/../include/driver_functions.h"
(p.z) = z;
# 100 "/usr/local/cuda/bin/../include/driver_functions.h"
return p;
# 101 "/usr/local/cuda/bin/../include/driver_functions.h"
}
# 118 "/usr/local/cuda/bin/../include/driver_functions.h"
static inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d)
# 119 "/usr/local/cuda/bin/../include/driver_functions.h"
{
# 120 "/usr/local/cuda/bin/../include/driver_functions.h"
cudaExtent e;
# 122 "/usr/local/cuda/bin/../include/driver_functions.h"
(e.width) = w;
# 123 "/usr/local/cuda/bin/../include/driver_functions.h"
(e.height) = h;
# 124 "/usr/local/cuda/bin/../include/driver_functions.h"
(e.depth) = d;
# 126 "/usr/local/cuda/bin/../include/driver_functions.h"
return e;
# 127 "/usr/local/cuda/bin/../include/driver_functions.h"
}
# 55 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline char1 make_char1(signed char x)
# 56 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 57 "/usr/local/cuda/bin/../include/vector_functions.h"
char1 t; (t.x) = x; return t;
# 58 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 60 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uchar1 make_uchar1(unsigned char x)
# 61 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 62 "/usr/local/cuda/bin/../include/vector_functions.h"
uchar1 t; (t.x) = x; return t;
# 63 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 65 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline char2 make_char2(signed char x, signed char y)
# 66 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 67 "/usr/local/cuda/bin/../include/vector_functions.h"
char2 t; (t.x) = x; (t.y) = y; return t;
# 68 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 70 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uchar2 make_uchar2(unsigned char x, unsigned char y)
# 71 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 72 "/usr/local/cuda/bin/../include/vector_functions.h"
uchar2 t; (t.x) = x; (t.y) = y; return t;
# 73 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 75 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline char3 make_char3(signed char x, signed char y, signed char z)
# 76 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 77 "/usr/local/cuda/bin/../include/vector_functions.h"
char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 78 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 80 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z)
# 81 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 82 "/usr/local/cuda/bin/../include/vector_functions.h"
uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 83 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 85 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline char4 make_char4(signed char x, signed char y, signed char z, signed char w)
# 86 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 87 "/usr/local/cuda/bin/../include/vector_functions.h"
char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 88 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 90 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w)
# 91 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 92 "/usr/local/cuda/bin/../include/vector_functions.h"
uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 93 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 95 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline short1 make_short1(short x)
# 96 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 97 "/usr/local/cuda/bin/../include/vector_functions.h"
short1 t; (t.x) = x; return t;
# 98 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 100 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ushort1 make_ushort1(unsigned short x)
# 101 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 102 "/usr/local/cuda/bin/../include/vector_functions.h"
ushort1 t; (t.x) = x; return t;
# 103 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 105 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline short2 make_short2(short x, short y)
# 106 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 107 "/usr/local/cuda/bin/../include/vector_functions.h"
short2 t; (t.x) = x; (t.y) = y; return t;
# 108 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 110 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ushort2 make_ushort2(unsigned short x, unsigned short y)
# 111 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 112 "/usr/local/cuda/bin/../include/vector_functions.h"
ushort2 t; (t.x) = x; (t.y) = y; return t;
# 113 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 115 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline short3 make_short3(short x, short y, short z)
# 116 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 117 "/usr/local/cuda/bin/../include/vector_functions.h"
short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 118 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 120 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z)
# 121 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 122 "/usr/local/cuda/bin/../include/vector_functions.h"
ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 123 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 125 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline short4 make_short4(short x, short y, short z, short w)
# 126 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 127 "/usr/local/cuda/bin/../include/vector_functions.h"
short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 128 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 130 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w)
# 131 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 132 "/usr/local/cuda/bin/../include/vector_functions.h"
ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 133 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 135 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline int1 make_int1(int x)
# 136 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 137 "/usr/local/cuda/bin/../include/vector_functions.h"
int1 t; (t.x) = x; return t;
# 138 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 140 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uint1 make_uint1(unsigned x)
# 141 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 142 "/usr/local/cuda/bin/../include/vector_functions.h"
uint1 t; (t.x) = x; return t;
# 143 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 145 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline int2 make_int2(int x, int y)
# 146 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 147 "/usr/local/cuda/bin/../include/vector_functions.h"
int2 t; (t.x) = x; (t.y) = y; return t;
# 148 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 150 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uint2 make_uint2(unsigned x, unsigned y)
# 151 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 152 "/usr/local/cuda/bin/../include/vector_functions.h"
uint2 t; (t.x) = x; (t.y) = y; return t;
# 153 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 155 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline int3 make_int3(int x, int y, int z)
# 156 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 157 "/usr/local/cuda/bin/../include/vector_functions.h"
int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 158 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 160 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uint3 make_uint3(unsigned x, unsigned y, unsigned z)
# 161 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 162 "/usr/local/cuda/bin/../include/vector_functions.h"
uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 163 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 165 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline int4 make_int4(int x, int y, int z, int w)
# 166 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 167 "/usr/local/cuda/bin/../include/vector_functions.h"
int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 168 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 170 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w)
# 171 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 172 "/usr/local/cuda/bin/../include/vector_functions.h"
uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 173 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 175 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline long1 make_long1(long x)
# 176 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 177 "/usr/local/cuda/bin/../include/vector_functions.h"
long1 t; (t.x) = x; return t;
# 178 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 180 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulong1 make_ulong1(unsigned long x)
# 181 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 182 "/usr/local/cuda/bin/../include/vector_functions.h"
ulong1 t; (t.x) = x; return t;
# 183 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 185 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline long2 make_long2(long x, long y)
# 186 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 187 "/usr/local/cuda/bin/../include/vector_functions.h"
long2 t; (t.x) = x; (t.y) = y; return t;
# 188 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 190 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulong2 make_ulong2(unsigned long x, unsigned long y)
# 191 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 192 "/usr/local/cuda/bin/../include/vector_functions.h"
ulong2 t; (t.x) = x; (t.y) = y; return t;
# 193 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 195 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline long3 make_long3(long x, long y, long z)
# 196 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 197 "/usr/local/cuda/bin/../include/vector_functions.h"
long3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 198 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 200 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z)
# 201 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 202 "/usr/local/cuda/bin/../include/vector_functions.h"
ulong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 203 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 205 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline long4 make_long4(long x, long y, long z, long w)
# 206 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 207 "/usr/local/cuda/bin/../include/vector_functions.h"
long4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 208 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 210 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w)
# 211 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 212 "/usr/local/cuda/bin/../include/vector_functions.h"
ulong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 213 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 215 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline float1 make_float1(float x)
# 216 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 217 "/usr/local/cuda/bin/../include/vector_functions.h"
float1 t; (t.x) = x; return t;
# 218 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 220 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline float2 make_float2(float x, float y)
# 221 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 222 "/usr/local/cuda/bin/../include/vector_functions.h"
float2 t; (t.x) = x; (t.y) = y; return t;
# 223 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 225 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline float3 make_float3(float x, float y, float z)
# 226 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 227 "/usr/local/cuda/bin/../include/vector_functions.h"
float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 228 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 230 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline float4 make_float4(float x, float y, float z, float w)
# 231 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 232 "/usr/local/cuda/bin/../include/vector_functions.h"
float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 233 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 235 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline longlong1 make_longlong1(long long x)
# 236 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 237 "/usr/local/cuda/bin/../include/vector_functions.h"
longlong1 t; (t.x) = x; return t;
# 238 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 240 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulonglong1 make_ulonglong1(unsigned long long x)
# 241 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 242 "/usr/local/cuda/bin/../include/vector_functions.h"
ulonglong1 t; (t.x) = x; return t;
# 243 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 245 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline longlong2 make_longlong2(long long x, long long y)
# 246 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 247 "/usr/local/cuda/bin/../include/vector_functions.h"
longlong2 t; (t.x) = x; (t.y) = y; return t;
# 248 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 250 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulonglong2 make_ulonglong2(unsigned long long x, unsigned long long y)
# 251 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 252 "/usr/local/cuda/bin/../include/vector_functions.h"
ulonglong2 t; (t.x) = x; (t.y) = y; return t;
# 253 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 255 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline longlong3 make_longlong3(long long x, long long y, long long z)
# 256 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 257 "/usr/local/cuda/bin/../include/vector_functions.h"
longlong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 258 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 260 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulonglong3 make_ulonglong3(unsigned long long x, unsigned long long y, unsigned long long z)
# 261 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 262 "/usr/local/cuda/bin/../include/vector_functions.h"
ulonglong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 263 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 265 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline longlong4 make_longlong4(long long x, long long y, long long z, long long w)
# 266 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 267 "/usr/local/cuda/bin/../include/vector_functions.h"
longlong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 268 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 270 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulonglong4 make_ulonglong4(unsigned long long x, unsigned long long y, unsigned long long z, unsigned long long w)
# 271 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 272 "/usr/local/cuda/bin/../include/vector_functions.h"
ulonglong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 273 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 275 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline double1 make_double1(double x)
# 276 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 277 "/usr/local/cuda/bin/../include/vector_functions.h"
double1 t; (t.x) = x; return t;
# 278 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 280 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline double2 make_double2(double x, double y)
# 281 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 282 "/usr/local/cuda/bin/../include/vector_functions.h"
double2 t; (t.x) = x; (t.y) = y; return t;
# 283 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 285 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline double3 make_double3(double x, double y, double z)
# 286 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 287 "/usr/local/cuda/bin/../include/vector_functions.h"
double3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 288 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 290 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline double4 make_double4(double x, double y, double z, double w)
# 291 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 292 "/usr/local/cuda/bin/../include/vector_functions.h"
double4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 293 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 44 "/usr/include/string.h" 3
extern "C" __attribute__((weak)) void *memcpy(void *__restrict__, const void *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 49 "/usr/include/string.h" 3
extern "C" void *memmove(void *, const void *, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 57 "/usr/include/string.h" 3
extern "C" void *memccpy(void *__restrict__, const void *__restrict__, int, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 65 "/usr/include/string.h" 3
extern "C" __attribute__((weak)) void *memset(void *, int, size_t) throw() __attribute__((nonnull(1)));
# 68 "/usr/include/string.h" 3
extern "C" int memcmp(const void *, const void *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 75 "/usr/include/string.h" 3
extern void *memchr(void *, int, size_t) throw() __asm__("memchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 77 "/usr/include/string.h" 3
extern const void *memchr(const void *, int, size_t) throw() __asm__("memchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 104 "/usr/include/string.h" 3
void *rawmemchr(void *, int) throw() __asm__("rawmemchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 106 "/usr/include/string.h" 3
const void *rawmemchr(const void *, int) throw() __asm__("rawmemchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 115 "/usr/include/string.h" 3
void *memrchr(void *, int, size_t) throw() __asm__("memrchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 117 "/usr/include/string.h" 3
const void *memrchr(const void *, int, size_t) throw() __asm__("memrchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 128 "/usr/include/string.h" 3
extern "C" char *strcpy(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 131 "/usr/include/string.h" 3
extern "C" char *strncpy(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 136 "/usr/include/string.h" 3
extern "C" char *strcat(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 139 "/usr/include/string.h" 3
extern "C" char *strncat(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 143 "/usr/include/string.h" 3
extern "C" int strcmp(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 146 "/usr/include/string.h" 3
extern "C" int strncmp(const char *, const char *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 150 "/usr/include/string.h" 3
extern "C" int strcoll(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 153 "/usr/include/string.h" 3
extern "C" size_t strxfrm(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(2)));
# 40 "/usr/include/xlocale.h" 3
extern "C" { typedef
# 28 "/usr/include/xlocale.h" 3
struct __locale_struct {
# 31 "/usr/include/xlocale.h" 3
struct __locale_data *__locales[13];
# 34 "/usr/include/xlocale.h" 3
const unsigned short *__ctype_b;
# 35 "/usr/include/xlocale.h" 3
const int *__ctype_tolower;
# 36 "/usr/include/xlocale.h" 3
const int *__ctype_toupper;
# 39 "/usr/include/xlocale.h" 3
const char *__names[13];
# 40 "/usr/include/xlocale.h" 3
} *__locale_t; }
# 43 "/usr/include/xlocale.h" 3
extern "C" { typedef __locale_t locale_t; }
# 165 "/usr/include/string.h" 3
extern "C" int strcoll_l(const char *, const char *, __locale_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 168 "/usr/include/string.h" 3
extern "C" size_t strxfrm_l(char *, const char *, size_t, __locale_t) throw() __attribute__((nonnull(2))) __attribute__((nonnull(4)));
# 175 "/usr/include/string.h" 3
extern "C" char *strdup(const char *) throw() __attribute__((__malloc__)) __attribute__((nonnull(1)));
# 183 "/usr/include/string.h" 3
extern "C" char *strndup(const char *, size_t) throw() __attribute__((__malloc__)) __attribute__((nonnull(1)));
# 215 "/usr/include/string.h" 3
extern char *strchr(char *, int) throw() __asm__("strchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 217 "/usr/include/string.h" 3
extern const char *strchr(const char *, int) throw() __asm__("strchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 242 "/usr/include/string.h" 3
extern char *strrchr(char *, int) throw() __asm__("strrchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 244 "/usr/include/string.h" 3
extern const char *strrchr(const char *, int) throw() __asm__("strrchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 271 "/usr/include/string.h" 3
char *strchrnul(char *, int) throw() __asm__("strchrnul") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 273 "/usr/include/string.h" 3
const char *strchrnul(const char *, int) throw() __asm__("strchrnul") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 284 "/usr/include/string.h" 3
extern "C" size_t strcspn(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 288 "/usr/include/string.h" 3
extern "C" size_t strspn(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 294 "/usr/include/string.h" 3
extern char *strpbrk(char *, const char *) throw() __asm__("strpbrk") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 296 "/usr/include/string.h" 3
extern const char *strpbrk(const char *, const char *) throw() __asm__("strpbrk") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 321 "/usr/include/string.h" 3
extern char *strstr(char *, const char *) throw() __asm__("strstr") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 323 "/usr/include/string.h" 3
extern const char *strstr(const char *, const char *) throw() __asm__("strstr") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 348 "/usr/include/string.h" 3
extern "C" char *strtok(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(2)));
# 354 "/usr/include/string.h" 3
extern "C" char *__strtok_r(char *__restrict__, const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 359 "/usr/include/string.h" 3
extern "C" char *strtok_r(char *__restrict__, const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 367 "/usr/include/string.h" 3
char *strcasestr(char *, const char *) throw() __asm__("strcasestr") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 369 "/usr/include/string.h" 3
const char *strcasestr(const char *, const char *) throw() __asm__("strcasestr") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 382 "/usr/include/string.h" 3
extern "C" void *memmem(const void *, size_t, const void *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(3)));
# 388 "/usr/include/string.h" 3
extern "C" void *__mempcpy(void *__restrict__, const void *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 391 "/usr/include/string.h" 3
extern "C" void *mempcpy(void *__restrict__, const void *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 399 "/usr/include/string.h" 3
extern "C" size_t strlen(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 406 "/usr/include/string.h" 3
extern "C" size_t strnlen(const char *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 413 "/usr/include/string.h" 3
extern "C" char *strerror(int) throw();
# 438 "/usr/include/string.h" 3
extern "C" char *strerror_r(int, char *, size_t) throw() __attribute__((nonnull(2)));
# 445 "/usr/include/string.h" 3
extern "C" char *strerror_l(int, __locale_t) throw();
# 451 "/usr/include/string.h" 3
extern "C" void __bzero(void *, size_t) throw() __attribute__((nonnull(1)));
# 455 "/usr/include/string.h" 3
extern "C" void bcopy(const void *, void *, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 459 "/usr/include/string.h" 3
extern "C" void bzero(void *, size_t) throw() __attribute__((nonnull(1)));
# 462 "/usr/include/string.h" 3
extern "C" int bcmp(const void *, const void *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 469 "/usr/include/string.h" 3
extern char *index(char *, int) throw() __asm__("index") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 471 "/usr/include/string.h" 3
extern const char *index(const char *, int) throw() __asm__("index") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 497 "/usr/include/string.h" 3
extern char *rindex(char *, int) throw() __asm__("rindex") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 499 "/usr/include/string.h" 3
extern const char *rindex(const char *, int) throw() __asm__("rindex") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 523 "/usr/include/string.h" 3
extern "C" int ffs(int) throw() __attribute__((__const__));
# 528 "/usr/include/string.h" 3
extern "C" int ffsl(long) throw() __attribute__((__const__));
# 530 "/usr/include/string.h" 3
extern "C" int ffsll(long long) throw() __attribute__((__const__));
# 536 "/usr/include/string.h" 3
extern "C" int strcasecmp(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 540 "/usr/include/string.h" 3
extern "C" int strncasecmp(const char *, const char *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 547 "/usr/include/string.h" 3
extern "C" int strcasecmp_l(const char *, const char *, __locale_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 551 "/usr/include/string.h" 3
extern "C" int strncasecmp_l(const char *, const char *, size_t, __locale_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(4)));
# 559 "/usr/include/string.h" 3
extern "C" char *strsep(char **__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 566 "/usr/include/string.h" 3
extern "C" char *strsignal(int) throw();
# 569 "/usr/include/string.h" 3
extern "C" char *__stpcpy(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 571 "/usr/include/string.h" 3
extern "C" char *stpcpy(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 576 "/usr/include/string.h" 3
extern "C" char *__stpncpy(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 579 "/usr/include/string.h" 3
extern "C" char *stpncpy(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 586 "/usr/include/string.h" 3
extern "C" int strverscmp(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 590 "/usr/include/string.h" 3
extern "C" char *strfry(char *) throw() __attribute__((nonnull(1)));
# 593 "/usr/include/string.h" 3
extern "C" void *memfrob(void *, size_t) throw() __attribute__((nonnull(1)));
# 601 "/usr/include/string.h" 3
char *basename(char *) throw() __asm__("basename") __attribute__((nonnull(1)));
# 603 "/usr/include/string.h" 3
const char *basename(const char *) throw() __asm__("basename") __attribute__((nonnull(1)));
# 31 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned char __u_char; }
# 32 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned short __u_short; }
# 33 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __u_int; }
# 34 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __u_long; }
# 37 "/usr/include/bits/types.h" 3
extern "C" { typedef signed char __int8_t; }
# 38 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned char __uint8_t; }
# 39 "/usr/include/bits/types.h" 3
extern "C" { typedef signed short __int16_t; }
# 40 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned short __uint16_t; }
# 41 "/usr/include/bits/types.h" 3
extern "C" { typedef signed int __int32_t; }
# 42 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __uint32_t; }
# 44 "/usr/include/bits/types.h" 3
extern "C" { typedef signed long __int64_t; }
# 45 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __uint64_t; }
# 53 "/usr/include/bits/types.h" 3
extern "C" { typedef long __quad_t; }
# 54 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __u_quad_t; }
# 134 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __dev_t; }
# 135 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __uid_t; }
# 136 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __gid_t; }
# 137 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __ino_t; }
# 138 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __ino64_t; }
# 139 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __mode_t; }
# 140 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __nlink_t; }
# 141 "/usr/include/bits/types.h" 3
extern "C" { typedef long __off_t; }
# 142 "/usr/include/bits/types.h" 3
extern "C" { typedef long __off64_t; }
# 143 "/usr/include/bits/types.h" 3
extern "C" { typedef int __pid_t; }
# 144 "/usr/include/bits/types.h" 3
extern "C" { typedef struct { int __val[2]; } __fsid_t; }
# 145 "/usr/include/bits/types.h" 3
extern "C" { typedef long __clock_t; }
# 146 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __rlim_t; }
# 147 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __rlim64_t; }
# 148 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __id_t; }
# 149 "/usr/include/bits/types.h" 3
extern "C" { typedef long __time_t; }
# 150 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __useconds_t; }
# 151 "/usr/include/bits/types.h" 3
extern "C" { typedef long __suseconds_t; }
# 153 "/usr/include/bits/types.h" 3
extern "C" { typedef int __daddr_t; }
# 154 "/usr/include/bits/types.h" 3
extern "C" { typedef long __swblk_t; }
# 155 "/usr/include/bits/types.h" 3
extern "C" { typedef int __key_t; }
# 158 "/usr/include/bits/types.h" 3
extern "C" { typedef int __clockid_t; }
# 161 "/usr/include/bits/types.h" 3
extern "C" { typedef void *__timer_t; }
# 164 "/usr/include/bits/types.h" 3
extern "C" { typedef long __blksize_t; }
# 169 "/usr/include/bits/types.h" 3
extern "C" { typedef long __blkcnt_t; }
# 170 "/usr/include/bits/types.h" 3
extern "C" { typedef long __blkcnt64_t; }
# 173 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsblkcnt_t; }
# 174 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsblkcnt64_t; }
# 177 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsfilcnt_t; }
# 178 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsfilcnt64_t; }
# 180 "/usr/include/bits/types.h" 3
extern "C" { typedef long __ssize_t; }
# 184 "/usr/include/bits/types.h" 3
extern "C" { typedef __off64_t __loff_t; }
# 185 "/usr/include/bits/types.h" 3
extern "C" { typedef __quad_t *__qaddr_t; }
# 186 "/usr/include/bits/types.h" 3
extern "C" { typedef char *__caddr_t; }
# 189 "/usr/include/bits/types.h" 3
extern "C" { typedef long __intptr_t; }
# 192 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __socklen_t; }
# 60 "/usr/include/time.h" 3
extern "C" { typedef __clock_t clock_t; }
# 76 "/usr/include/time.h" 3
extern "C" { typedef __time_t time_t; }
# 92 "/usr/include/time.h" 3
extern "C" { typedef __clockid_t clockid_t; }
# 104 "/usr/include/time.h" 3
extern "C" { typedef __timer_t timer_t; }
# 120 "/usr/include/time.h" 3
extern "C" { struct timespec {
# 122 "/usr/include/time.h" 3
__time_t tv_sec;
# 123 "/usr/include/time.h" 3
long tv_nsec;
# 124 "/usr/include/time.h" 3
}; }
# 133 "/usr/include/time.h" 3
extern "C" { struct tm {
# 135 "/usr/include/time.h" 3
int tm_sec;
# 136 "/usr/include/time.h" 3
int tm_min;
# 137 "/usr/include/time.h" 3
int tm_hour;
# 138 "/usr/include/time.h" 3
int tm_mday;
# 139 "/usr/include/time.h" 3
int tm_mon;
# 140 "/usr/include/time.h" 3
int tm_year;
# 141 "/usr/include/time.h" 3
int tm_wday;
# 142 "/usr/include/time.h" 3
int tm_yday;
# 143 "/usr/include/time.h" 3
int tm_isdst;
# 146 "/usr/include/time.h" 3
long tm_gmtoff;
# 147 "/usr/include/time.h" 3
const char *tm_zone;
# 152 "/usr/include/time.h" 3
}; }
# 161 "/usr/include/time.h" 3
extern "C" { struct itimerspec {
# 163 "/usr/include/time.h" 3
timespec it_interval;
# 164 "/usr/include/time.h" 3
timespec it_value;
# 165 "/usr/include/time.h" 3
}; }
# 168 "/usr/include/time.h" 3
struct sigevent;
# 174 "/usr/include/time.h" 3
extern "C" { typedef __pid_t pid_t; }
# 183 "/usr/include/time.h" 3
extern "C" __attribute__((weak)) clock_t clock() throw();
# 186 "/usr/include/time.h" 3
extern "C" time_t time(time_t *) throw();
# 189 "/usr/include/time.h" 3
extern "C" double difftime(time_t, time_t) throw() __attribute__((__const__));
# 193 "/usr/include/time.h" 3
extern "C" time_t mktime(tm *) throw();
# 199 "/usr/include/time.h" 3
extern "C" size_t strftime(char *__restrict__, size_t, const char *__restrict__, const tm *__restrict__) throw();
# 207 "/usr/include/time.h" 3
extern "C" char *strptime(const char *__restrict__, const char *__restrict__, tm *) throw();
# 217 "/usr/include/time.h" 3
extern "C" size_t strftime_l(char *__restrict__, size_t, const char *__restrict__, const tm *__restrict__, __locale_t) throw();
# 224 "/usr/include/time.h" 3
extern "C" char *strptime_l(const char *__restrict__, const char *__restrict__, tm *, __locale_t) throw();
# 233 "/usr/include/time.h" 3
extern "C" tm *gmtime(const time_t *) throw();
# 237 "/usr/include/time.h" 3
extern "C" tm *localtime(const time_t *) throw();
# 243 "/usr/include/time.h" 3
extern "C" tm *gmtime_r(const time_t *__restrict__, tm *__restrict__) throw();
# 248 "/usr/include/time.h" 3
extern "C" tm *localtime_r(const time_t *__restrict__, tm *__restrict__) throw();
# 255 "/usr/include/time.h" 3
extern "C" char *asctime(const tm *) throw();
# 258 "/usr/include/time.h" 3
extern "C" char *ctime(const time_t *) throw();
# 266 "/usr/include/time.h" 3
extern "C" char *asctime_r(const tm *__restrict__, char *__restrict__) throw();
# 270 "/usr/include/time.h" 3
extern "C" char *ctime_r(const time_t *__restrict__, char *__restrict__) throw();
# 276 "/usr/include/time.h" 3
extern "C" { extern char *__tzname[2]; }
# 277 "/usr/include/time.h" 3
extern "C" { extern int __daylight; }
# 278 "/usr/include/time.h" 3
extern "C" { extern long __timezone; }
# 283 "/usr/include/time.h" 3
extern "C" { extern char *tzname[2]; }
# 287 "/usr/include/time.h" 3
extern "C" void tzset() throw();
# 291 "/usr/include/time.h" 3
extern "C" { extern int daylight; }
# 292 "/usr/include/time.h" 3
extern "C" { extern long timezone; }
# 298 "/usr/include/time.h" 3
extern "C" int stime(const time_t *) throw();
# 313 "/usr/include/time.h" 3
extern "C" time_t timegm(tm *) throw();
# 316 "/usr/include/time.h" 3
extern "C" time_t timelocal(tm *) throw();
# 319 "/usr/include/time.h" 3
extern "C" int dysize(int) throw() __attribute__((__const__));
# 328 "/usr/include/time.h" 3
extern "C" int nanosleep(const timespec *, timespec *);
# 333 "/usr/include/time.h" 3
extern "C" int clock_getres(clockid_t, timespec *) throw();
# 336 "/usr/include/time.h" 3
extern "C" int clock_gettime(clockid_t, timespec *) throw();
# 339 "/usr/include/time.h" 3
extern "C" int clock_settime(clockid_t, const timespec *) throw();
# 347 "/usr/include/time.h" 3
extern "C" int clock_nanosleep(clockid_t, int, const timespec *, timespec *);
# 352 "/usr/include/time.h" 3
extern "C" int clock_getcpuclockid(pid_t, clockid_t *) throw();
# 357 "/usr/include/time.h" 3
extern "C" int timer_create(clockid_t, sigevent *__restrict__, timer_t *__restrict__) throw();
# 362 "/usr/include/time.h" 3
extern "C" int timer_delete(timer_t) throw();
# 365 "/usr/include/time.h" 3
extern "C" int timer_settime(timer_t, int, const itimerspec *__restrict__, itimerspec *__restrict__) throw();
# 370 "/usr/include/time.h" 3
extern "C" int timer_gettime(timer_t, itimerspec *) throw();
# 374 "/usr/include/time.h" 3
extern "C" int timer_getoverrun(timer_t) throw();
# 390 "/usr/include/time.h" 3
extern "C" { extern int getdate_err; }
# 399 "/usr/include/time.h" 3
extern "C" tm *getdate(const char *);
# 413 "/usr/include/time.h" 3
extern "C" int getdate_r(const char *__restrict__, tm *__restrict__);
# 57 "/usr/local/cuda/bin/../include/common_functions.h"
extern "C" __attribute__((weak)) clock_t clock() throw();
# 59 "/usr/local/cuda/bin/../include/common_functions.h"
extern "C" __attribute__((weak)) void *memset(void *, int, size_t) throw() __attribute__((nonnull(1)));
# 61 "/usr/local/cuda/bin/../include/common_functions.h"
extern "C" __attribute__((weak)) void *memcpy(void *, const void *, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 66 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int abs(int) throw() __attribute__((__const__));
# 68 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long labs(long) throw() __attribute__((__const__));
# 70 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llabs(long long) throw() __attribute__((__const__));
# 72 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fabs(double) throw() __attribute__((__const__));
# 74 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fabsf(float) throw() __attribute__((__const__));
# 77 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int min(int, int);
# 79 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) unsigned umin(unsigned, unsigned);
# 81 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llmin(long long, long long);
# 83 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) unsigned long long ullmin(unsigned long long, unsigned long long);
# 85 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fminf(float, float) throw();
# 87 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fmin(double, double) throw();
# 90 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int max(int, int);
# 92 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) unsigned umax(unsigned, unsigned);
# 94 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llmax(long long, long long);
# 96 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) unsigned long long ullmax(unsigned long long, unsigned long long);
# 98 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fmaxf(float, float) throw();
# 100 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fmax(double, double) throw();
# 103 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double sin(double) throw();
# 105 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float sinf(float) throw();
# 108 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double cos(double) throw();
# 110 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float cosf(float) throw();
# 113 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) void sincos(double, double *, double *) throw();
# 115 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) void sincosf(float, float *, float *) throw();
# 118 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double tan(double) throw();
# 120 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float tanf(float) throw();
# 123 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double sqrt(double) throw();
# 125 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float sqrtf(float) throw();
# 128 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double rsqrt(double);
# 130 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float rsqrtf(float);
# 133 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double exp2(double) throw();
# 135 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float exp2f(float) throw();
# 138 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double exp10(double) throw();
# 140 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float exp10f(float) throw();
# 143 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double expm1(double) throw();
# 145 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float expm1f(float) throw();
# 148 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double log2(double) throw();
# 150 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float log2f(float) throw();
# 153 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double log10(double) throw();
# 155 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float log10f(float) throw();
# 158 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double log(double) throw();
# 160 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float logf(float) throw();
# 163 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double log1p(double) throw();
# 165 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float log1pf(float) throw();
# 168 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double floor(double) throw() __attribute__((__const__));
# 170 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float floorf(float) throw() __attribute__((__const__));
# 173 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double exp(double) throw();
# 175 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float expf(float) throw();
# 178 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double cosh(double) throw();
# 180 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float coshf(float) throw();
# 183 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double sinh(double) throw();
# 185 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float sinhf(float) throw();
# 188 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double tanh(double) throw();
# 190 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float tanhf(float) throw();
# 193 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double acosh(double) throw();
# 195 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float acoshf(float) throw();
# 198 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double asinh(double) throw();
# 200 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float asinhf(float) throw();
# 203 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double atanh(double) throw();
# 205 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float atanhf(float) throw();
# 208 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double ldexp(double, int) throw();
# 210 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float ldexpf(float, int) throw();
# 213 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double logb(double) throw();
# 215 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float logbf(float) throw();
# 218 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int ilogb(double) throw();
# 220 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int ilogbf(float) throw();
# 223 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double scalbn(double, int) throw();
# 225 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float scalbnf(float, int) throw();
# 228 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double scalbln(double, long) throw();
# 230 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float scalblnf(float, long) throw();
# 233 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double frexp(double, int *) throw();
# 235 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float frexpf(float, int *) throw();
# 238 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double round(double) throw() __attribute__((__const__));
# 240 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float roundf(float) throw() __attribute__((__const__));
# 243 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long lround(double) throw();
# 245 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long lroundf(float) throw();
# 248 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llround(double) throw();
# 250 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llroundf(float) throw();
# 253 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double rint(double) throw();
# 255 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float rintf(float) throw();
# 258 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long lrint(double) throw();
# 260 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long lrintf(float) throw();
# 263 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llrint(double) throw();
# 265 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llrintf(float) throw();
# 268 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double nearbyint(double) throw();
# 270 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float nearbyintf(float) throw();
# 273 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double ceil(double) throw() __attribute__((__const__));
# 275 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float ceilf(float) throw() __attribute__((__const__));
# 278 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double trunc(double) throw() __attribute__((__const__));
# 280 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float truncf(float) throw() __attribute__((__const__));
# 283 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fdim(double, double) throw();
# 285 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fdimf(float, float) throw();
# 288 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double atan2(double, double) throw();
# 290 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float atan2f(float, float) throw();
# 293 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double atan(double) throw();
# 295 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float atanf(float) throw();
# 298 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double asin(double) throw();
# 300 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float asinf(float) throw();
# 303 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double acos(double) throw();
# 305 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float acosf(float) throw();
# 308 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double hypot(double, double) throw();
# 310 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float hypotf(float, float) throw();
# 313 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double cbrt(double) throw();
# 315 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float cbrtf(float) throw();
# 318 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double rcbrt(double);
# 320 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float rcbrtf(float);
# 323 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double sinpi(double);
# 325 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float sinpif(float);
# 328 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double pow(double, double) throw();
# 330 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float powf(float, float) throw();
# 333 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double modf(double, double *) throw();
# 335 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float modff(float, float *) throw();
# 338 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fmod(double, double) throw();
# 340 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fmodf(float, float) throw();
# 343 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double remainder(double, double) throw();
# 345 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float remainderf(float, float) throw();
# 348 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double remquo(double, double, int *) throw();
# 350 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float remquof(float, float, int *) throw();
# 353 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double erf(double) throw();
# 355 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float erff(float) throw();
# 358 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double erfinv(double);
# 360 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float erfinvf(float);
# 363 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double erfc(double) throw();
# 365 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float erfcf(float) throw();
# 368 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double erfcinv(double);
# 370 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float erfcinvf(float);
# 373 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double lgamma(double) throw();
# 375 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float lgammaf(float) throw();
# 378 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double tgamma(double) throw();
# 380 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float tgammaf(float) throw();
# 383 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double copysign(double, double) throw() __attribute__((__const__));
# 385 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float copysignf(float, float) throw() __attribute__((__const__));
# 388 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double nextafter(double, double) throw() __attribute__((__const__));
# 390 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float nextafterf(float, float) throw() __attribute__((__const__));
# 393 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double nan(const char *) throw() __attribute__((__const__));
# 395 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float nanf(const char *) throw() __attribute__((__const__));
# 398 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isinf(double) throw() __attribute__((__const__));
# 400 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isinff(float) throw() __attribute__((__const__));
# 403 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isnan(double) throw() __attribute__((__const__));
# 405 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isnanf(float) throw() __attribute__((__const__));
# 419 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __finite(double) throw() __attribute__((__const__));
# 421 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __finitef(float) throw() __attribute__((__const__));
# 423 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __signbit(double) throw() __attribute__((__const__));
# 428 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __signbitf(float) throw() __attribute__((__const__));
# 431 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fma(double, double, double) throw();
# 433 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fmaf(float, float, float) throw();
# 441 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __signbitl(long double) throw() __attribute__((__const__));
# 443 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isinfl(long double) throw() __attribute__((__const__));
# 445 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isnanl(long double) throw() __attribute__((__const__));
# 455 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __finitel(long double) throw() __attribute__((__const__));
# 31 "/usr/include/bits/mathdef.h" 3
extern "C" { typedef float float_t; }
# 32 "/usr/include/bits/mathdef.h" 3
extern "C" { typedef double double_t; }
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double acos(double) throw(); extern "C" double __acos(double) throw();
# 57 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double asin(double) throw(); extern "C" double __asin(double) throw();
# 59 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double atan(double) throw(); extern "C" double __atan(double) throw();
# 61 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double atan2(double, double) throw(); extern "C" double __atan2(double, double) throw();
# 64 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double cos(double) throw(); extern "C" double __cos(double) throw();
# 66 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double sin(double) throw(); extern "C" double __sin(double) throw();
# 68 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double tan(double) throw(); extern "C" double __tan(double) throw();
# 73 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double cosh(double) throw(); extern "C" double __cosh(double) throw();
# 75 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double sinh(double) throw(); extern "C" double __sinh(double) throw();
# 77 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double tanh(double) throw(); extern "C" double __tanh(double) throw();
# 82 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) void sincos(double, double *, double *) throw(); extern "C" void __sincos(double, double *, double *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double acosh(double) throw(); extern "C" double __acosh(double) throw();
# 91 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double asinh(double) throw(); extern "C" double __asinh(double) throw();
# 93 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double atanh(double) throw(); extern "C" double __atanh(double) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double exp(double) throw(); extern "C" double __exp(double) throw();
# 104 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double frexp(double, int *) throw(); extern "C" double __frexp(double, int *) throw();
# 107 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double ldexp(double, int) throw(); extern "C" double __ldexp(double, int) throw();
# 110 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double log(double) throw(); extern "C" double __log(double) throw();
# 113 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double log10(double) throw(); extern "C" double __log10(double) throw();
# 116 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double modf(double, double *) throw(); extern "C" double __modf(double, double *) throw();
# 121 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double exp10(double) throw(); extern "C" double __exp10(double) throw();
# 123 "/usr/include/bits/mathcalls.h" 3
extern "C" double pow10(double) throw(); extern "C" double __pow10(double) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double expm1(double) throw(); extern "C" double __expm1(double) throw();
# 132 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double log1p(double) throw(); extern "C" double __log1p(double) throw();
# 135 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double logb(double) throw(); extern "C" double __logb(double) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double exp2(double) throw(); extern "C" double __exp2(double) throw();
# 145 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double log2(double) throw(); extern "C" double __log2(double) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double pow(double, double) throw(); extern "C" double __pow(double, double) throw();
# 157 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double sqrt(double) throw(); extern "C" double __sqrt(double) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double hypot(double, double) throw(); extern "C" double __hypot(double, double) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double cbrt(double) throw(); extern "C" double __cbrt(double) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double ceil(double) throw() __attribute__((__const__)); extern "C" double __ceil(double) throw() __attribute__((__const__));
# 182 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fabs(double) throw() __attribute__((__const__)); extern "C" double __fabs(double) throw() __attribute__((__const__));
# 185 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double floor(double) throw() __attribute__((__const__)); extern "C" double __floor(double) throw() __attribute__((__const__));
# 188 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fmod(double, double) throw(); extern "C" double __fmod(double, double) throw();
# 193 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isinf(double) throw() __attribute__((__const__));
# 196 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __finite(double) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinf(double) throw() __attribute__((__const__));
# 205 "/usr/include/bits/mathcalls.h" 3
extern "C" int finite(double) throw() __attribute__((__const__));
# 208 "/usr/include/bits/mathcalls.h" 3
extern "C" double drem(double, double) throw(); extern "C" double __drem(double, double) throw();
# 212 "/usr/include/bits/mathcalls.h" 3
extern "C" double significand(double) throw(); extern "C" double __significand(double) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double copysign(double, double) throw() __attribute__((__const__)); extern "C" double __copysign(double, double) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double nan(const char *) throw() __attribute__((__const__)); extern "C" double __nan(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isnan(double) throw() __attribute__((__const__));
# 235 "/usr/include/bits/mathcalls.h" 3
extern "C" int isnan(double) throw() __attribute__((__const__));
# 238 "/usr/include/bits/mathcalls.h" 3
extern "C" double j0(double) throw(); extern "C" double __j0(double) throw();
# 239 "/usr/include/bits/mathcalls.h" 3
extern "C" double j1(double) throw(); extern "C" double __j1(double) throw();
# 240 "/usr/include/bits/mathcalls.h" 3
extern "C" double jn(int, double) throw(); extern "C" double __jn(int, double) throw();
# 241 "/usr/include/bits/mathcalls.h" 3
extern "C" double y0(double) throw(); extern "C" double __y0(double) throw();
# 242 "/usr/include/bits/mathcalls.h" 3
extern "C" double y1(double) throw(); extern "C" double __y1(double) throw();
# 243 "/usr/include/bits/mathcalls.h" 3
extern "C" double yn(int, double) throw(); extern "C" double __yn(int, double) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double erf(double) throw(); extern "C" double __erf(double) throw();
# 251 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double erfc(double) throw(); extern "C" double __erfc(double) throw();
# 252 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double lgamma(double) throw(); extern "C" double __lgamma(double) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double tgamma(double) throw(); extern "C" double __tgamma(double) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" double gamma(double) throw(); extern "C" double __gamma(double) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" double lgamma_r(double, int *) throw(); extern "C" double __lgamma_r(double, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double rint(double) throw(); extern "C" double __rint(double) throw();
# 283 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double nextafter(double, double) throw() __attribute__((__const__)); extern "C" double __nextafter(double, double) throw() __attribute__((__const__));
# 285 "/usr/include/bits/mathcalls.h" 3
extern "C" double nexttoward(double, long double) throw() __attribute__((__const__)); extern "C" double __nexttoward(double, long double) throw() __attribute__((__const__));
# 289 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double remainder(double, double) throw(); extern "C" double __remainder(double, double) throw();
# 293 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double scalbn(double, int) throw(); extern "C" double __scalbn(double, int) throw();
# 297 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int ilogb(double) throw(); extern "C" int __ilogb(double) throw();
# 302 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double scalbln(double, long) throw(); extern "C" double __scalbln(double, long) throw();
# 306 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double nearbyint(double) throw(); extern "C" double __nearbyint(double) throw();
# 310 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double round(double) throw() __attribute__((__const__)); extern "C" double __round(double) throw() __attribute__((__const__));
# 314 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double trunc(double) throw() __attribute__((__const__)); extern "C" double __trunc(double) throw() __attribute__((__const__));
# 319 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double remquo(double, double, int *) throw(); extern "C" double __remquo(double, double, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long lrint(double) throw(); extern "C" long __lrint(double) throw();
# 327 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long long llrint(double) throw(); extern "C" long long __llrint(double) throw();
# 331 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long lround(double) throw(); extern "C" long __lround(double) throw();
# 332 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long long llround(double) throw(); extern "C" long long __llround(double) throw();
# 336 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fdim(double, double) throw(); extern "C" double __fdim(double, double) throw();
# 339 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fmax(double, double) throw(); extern "C" double __fmax(double, double) throw();
# 342 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fmin(double, double) throw(); extern "C" double __fmin(double, double) throw();
# 346 "/usr/include/bits/mathcalls.h" 3
extern "C" int __fpclassify(double) throw() __attribute__((__const__));
# 350 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __signbit(double) throw() __attribute__((__const__));
# 355 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fma(double, double, double) throw(); extern "C" double __fma(double, double, double) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" double scalb(double, double) throw(); extern "C" double __scalb(double, double) throw();
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float acosf(float) throw(); extern "C" float __acosf(float) throw();
# 57 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float asinf(float) throw(); extern "C" float __asinf(float) throw();
# 59 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float atanf(float) throw(); extern "C" float __atanf(float) throw();
# 61 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float atan2f(float, float) throw(); extern "C" float __atan2f(float, float) throw();
# 64 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float cosf(float) throw();
# 66 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float sinf(float) throw();
# 68 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float tanf(float) throw();
# 73 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float coshf(float) throw(); extern "C" float __coshf(float) throw();
# 75 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float sinhf(float) throw(); extern "C" float __sinhf(float) throw();
# 77 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float tanhf(float) throw(); extern "C" float __tanhf(float) throw();
# 82 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) void sincosf(float, float *, float *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float acoshf(float) throw(); extern "C" float __acoshf(float) throw();
# 91 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float asinhf(float) throw(); extern "C" float __asinhf(float) throw();
# 93 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float atanhf(float) throw(); extern "C" float __atanhf(float) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float expf(float) throw();
# 104 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float frexpf(float, int *) throw(); extern "C" float __frexpf(float, int *) throw();
# 107 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float ldexpf(float, int) throw(); extern "C" float __ldexpf(float, int) throw();
# 110 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float logf(float) throw();
# 113 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float log10f(float) throw();
# 116 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float modff(float, float *) throw(); extern "C" float __modff(float, float *) throw();
# 121 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float exp10f(float) throw();
# 123 "/usr/include/bits/mathcalls.h" 3
extern "C" float pow10f(float) throw(); extern "C" float __pow10f(float) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float expm1f(float) throw(); extern "C" float __expm1f(float) throw();
# 132 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float log1pf(float) throw(); extern "C" float __log1pf(float) throw();
# 135 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float logbf(float) throw(); extern "C" float __logbf(float) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float exp2f(float) throw(); extern "C" float __exp2f(float) throw();
# 145 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float log2f(float) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float powf(float, float) throw();
# 157 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float sqrtf(float) throw(); extern "C" float __sqrtf(float) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float hypotf(float, float) throw(); extern "C" float __hypotf(float, float) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float cbrtf(float) throw(); extern "C" float __cbrtf(float) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float ceilf(float) throw() __attribute__((__const__)); extern "C" float __ceilf(float) throw() __attribute__((__const__));
# 182 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fabsf(float) throw() __attribute__((__const__)); extern "C" float __fabsf(float) throw() __attribute__((__const__));
# 185 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float floorf(float) throw() __attribute__((__const__)); extern "C" float __floorf(float) throw() __attribute__((__const__));
# 188 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fmodf(float, float) throw(); extern "C" float __fmodf(float, float) throw();
# 193 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isinff(float) throw() __attribute__((__const__));
# 196 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __finitef(float) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinff(float) throw() __attribute__((__const__));
# 205 "/usr/include/bits/mathcalls.h" 3
extern "C" int finitef(float) throw() __attribute__((__const__));
# 208 "/usr/include/bits/mathcalls.h" 3
extern "C" float dremf(float, float) throw(); extern "C" float __dremf(float, float) throw();
# 212 "/usr/include/bits/mathcalls.h" 3
extern "C" float significandf(float) throw(); extern "C" float __significandf(float) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float copysignf(float, float) throw() __attribute__((__const__)); extern "C" float __copysignf(float, float) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float nanf(const char *) throw() __attribute__((__const__)); extern "C" float __nanf(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isnanf(float) throw() __attribute__((__const__));
# 235 "/usr/include/bits/mathcalls.h" 3
extern "C" int isnanf(float) throw() __attribute__((__const__));
# 238 "/usr/include/bits/mathcalls.h" 3
extern "C" float j0f(float) throw(); extern "C" float __j0f(float) throw();
# 239 "/usr/include/bits/mathcalls.h" 3
extern "C" float j1f(float) throw(); extern "C" float __j1f(float) throw();
# 240 "/usr/include/bits/mathcalls.h" 3
extern "C" float jnf(int, float) throw(); extern "C" float __jnf(int, float) throw();
# 241 "/usr/include/bits/mathcalls.h" 3
extern "C" float y0f(float) throw(); extern "C" float __y0f(float) throw();
# 242 "/usr/include/bits/mathcalls.h" 3
extern "C" float y1f(float) throw(); extern "C" float __y1f(float) throw();
# 243 "/usr/include/bits/mathcalls.h" 3
extern "C" float ynf(int, float) throw(); extern "C" float __ynf(int, float) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float erff(float) throw(); extern "C" float __erff(float) throw();
# 251 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float erfcf(float) throw(); extern "C" float __erfcf(float) throw();
# 252 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float lgammaf(float) throw(); extern "C" float __lgammaf(float) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float tgammaf(float) throw(); extern "C" float __tgammaf(float) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" float gammaf(float) throw(); extern "C" float __gammaf(float) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" float lgammaf_r(float, int *) throw(); extern "C" float __lgammaf_r(float, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float rintf(float) throw(); extern "C" float __rintf(float) throw();
# 283 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float nextafterf(float, float) throw() __attribute__((__const__)); extern "C" float __nextafterf(float, float) throw() __attribute__((__const__));
# 285 "/usr/include/bits/mathcalls.h" 3
extern "C" float nexttowardf(float, long double) throw() __attribute__((__const__)); extern "C" float __nexttowardf(float, long double) throw() __attribute__((__const__));
# 289 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float remainderf(float, float) throw(); extern "C" float __remainderf(float, float) throw();
# 293 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float scalbnf(float, int) throw(); extern "C" float __scalbnf(float, int) throw();
# 297 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int ilogbf(float) throw(); extern "C" int __ilogbf(float) throw();
# 302 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float scalblnf(float, long) throw(); extern "C" float __scalblnf(float, long) throw();
# 306 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float nearbyintf(float) throw(); extern "C" float __nearbyintf(float) throw();
# 310 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float roundf(float) throw() __attribute__((__const__)); extern "C" float __roundf(float) throw() __attribute__((__const__));
# 314 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float truncf(float) throw() __attribute__((__const__)); extern "C" float __truncf(float) throw() __attribute__((__const__));
# 319 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float remquof(float, float, int *) throw(); extern "C" float __remquof(float, float, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long lrintf(float) throw(); extern "C" long __lrintf(float) throw();
# 327 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long long llrintf(float) throw(); extern "C" long long __llrintf(float) throw();
# 331 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long lroundf(float) throw(); extern "C" long __lroundf(float) throw();
# 332 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long long llroundf(float) throw(); extern "C" long long __llroundf(float) throw();
# 336 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fdimf(float, float) throw(); extern "C" float __fdimf(float, float) throw();
# 339 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fmaxf(float, float) throw(); extern "C" float __fmaxf(float, float) throw();
# 342 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fminf(float, float) throw(); extern "C" float __fminf(float, float) throw();
# 346 "/usr/include/bits/mathcalls.h" 3
extern "C" int __fpclassifyf(float) throw() __attribute__((__const__));
# 350 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __signbitf(float) throw() __attribute__((__const__));
# 355 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fmaf(float, float, float) throw(); extern "C" float __fmaf(float, float, float) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" float scalbf(float, float) throw(); extern "C" float __scalbf(float, float) throw();
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" long double acosl(long double) throw(); extern "C" long double __acosl(long double) throw();
# 57 "/usr/include/bits/mathcalls.h" 3
extern "C" long double asinl(long double) throw(); extern "C" long double __asinl(long double) throw();
# 59 "/usr/include/bits/mathcalls.h" 3
extern "C" long double atanl(long double) throw(); extern "C" long double __atanl(long double) throw();
# 61 "/usr/include/bits/mathcalls.h" 3
extern "C" long double atan2l(long double, long double) throw(); extern "C" long double __atan2l(long double, long double) throw();
# 64 "/usr/include/bits/mathcalls.h" 3
extern "C" long double cosl(long double) throw(); extern "C" long double __cosl(long double) throw();
# 66 "/usr/include/bits/mathcalls.h" 3
extern "C" long double sinl(long double) throw(); extern "C" long double __sinl(long double) throw();
# 68 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tanl(long double) throw(); extern "C" long double __tanl(long double) throw();
# 73 "/usr/include/bits/mathcalls.h" 3
extern "C" long double coshl(long double) throw(); extern "C" long double __coshl(long double) throw();
# 75 "/usr/include/bits/mathcalls.h" 3
extern "C" long double sinhl(long double) throw(); extern "C" long double __sinhl(long double) throw();
# 77 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tanhl(long double) throw(); extern "C" long double __tanhl(long double) throw();
# 82 "/usr/include/bits/mathcalls.h" 3
extern "C" void sincosl(long double, long double *, long double *) throw(); extern "C" void __sincosl(long double, long double *, long double *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" long double acoshl(long double) throw(); extern "C" long double __acoshl(long double) throw();
# 91 "/usr/include/bits/mathcalls.h" 3
extern "C" long double asinhl(long double) throw(); extern "C" long double __asinhl(long double) throw();
# 93 "/usr/include/bits/mathcalls.h" 3
extern "C" long double atanhl(long double) throw(); extern "C" long double __atanhl(long double) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" long double expl(long double) throw(); extern "C" long double __expl(long double) throw();
# 104 "/usr/include/bits/mathcalls.h" 3
extern "C" long double frexpl(long double, int *) throw(); extern "C" long double __frexpl(long double, int *) throw();
# 107 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ldexpl(long double, int) throw(); extern "C" long double __ldexpl(long double, int) throw();
# 110 "/usr/include/bits/mathcalls.h" 3
extern "C" long double logl(long double) throw(); extern "C" long double __logl(long double) throw();
# 113 "/usr/include/bits/mathcalls.h" 3
extern "C" long double log10l(long double) throw(); extern "C" long double __log10l(long double) throw();
# 116 "/usr/include/bits/mathcalls.h" 3
extern "C" long double modfl(long double, long double *) throw(); extern "C" long double __modfl(long double, long double *) throw();
# 121 "/usr/include/bits/mathcalls.h" 3
extern "C" long double exp10l(long double) throw(); extern "C" long double __exp10l(long double) throw();
# 123 "/usr/include/bits/mathcalls.h" 3
extern "C" long double pow10l(long double) throw(); extern "C" long double __pow10l(long double) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" long double expm1l(long double) throw(); extern "C" long double __expm1l(long double) throw();
# 132 "/usr/include/bits/mathcalls.h" 3
extern "C" long double log1pl(long double) throw(); extern "C" long double __log1pl(long double) throw();
# 135 "/usr/include/bits/mathcalls.h" 3
extern "C" long double logbl(long double) throw(); extern "C" long double __logbl(long double) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" long double exp2l(long double) throw(); extern "C" long double __exp2l(long double) throw();
# 145 "/usr/include/bits/mathcalls.h" 3
extern "C" long double log2l(long double) throw(); extern "C" long double __log2l(long double) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" long double powl(long double, long double) throw(); extern "C" long double __powl(long double, long double) throw();
# 157 "/usr/include/bits/mathcalls.h" 3
extern "C" long double sqrtl(long double) throw(); extern "C" long double __sqrtl(long double) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" long double hypotl(long double, long double) throw(); extern "C" long double __hypotl(long double, long double) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" long double cbrtl(long double) throw(); extern "C" long double __cbrtl(long double) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ceill(long double) throw() __attribute__((__const__)); extern "C" long double __ceill(long double) throw() __attribute__((__const__));
# 182 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fabsl(long double) throw() __attribute__((__const__)); extern "C" long double __fabsl(long double) throw() __attribute__((__const__));
# 185 "/usr/include/bits/mathcalls.h" 3
extern "C" long double floorl(long double) throw() __attribute__((__const__)); extern "C" long double __floorl(long double) throw() __attribute__((__const__));
# 188 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fmodl(long double, long double) throw(); extern "C" long double __fmodl(long double, long double) throw();
# 193 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isinfl(long double) throw() __attribute__((__const__));
# 196 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __finitel(long double) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinfl(long double) throw() __attribute__((__const__));
# 205 "/usr/include/bits/mathcalls.h" 3
extern "C" int finitel(long double) throw() __attribute__((__const__));
# 208 "/usr/include/bits/mathcalls.h" 3
extern "C" long double dreml(long double, long double) throw(); extern "C" long double __dreml(long double, long double) throw();
# 212 "/usr/include/bits/mathcalls.h" 3
extern "C" long double significandl(long double) throw(); extern "C" long double __significandl(long double) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" long double copysignl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __copysignl(long double, long double) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nanl(const char *) throw() __attribute__((__const__)); extern "C" long double __nanl(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isnanl(long double) throw() __attribute__((__const__));
# 235 "/usr/include/bits/mathcalls.h" 3
extern "C" int isnanl(long double) throw() __attribute__((__const__));
# 238 "/usr/include/bits/mathcalls.h" 3
extern "C" long double j0l(long double) throw(); extern "C" long double __j0l(long double) throw();
# 239 "/usr/include/bits/mathcalls.h" 3
extern "C" long double j1l(long double) throw(); extern "C" long double __j1l(long double) throw();
# 240 "/usr/include/bits/mathcalls.h" 3
extern "C" long double jnl(int, long double) throw(); extern "C" long double __jnl(int, long double) throw();
# 241 "/usr/include/bits/mathcalls.h" 3
extern "C" long double y0l(long double) throw(); extern "C" long double __y0l(long double) throw();
# 242 "/usr/include/bits/mathcalls.h" 3
extern "C" long double y1l(long double) throw(); extern "C" long double __y1l(long double) throw();
# 243 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ynl(int, long double) throw(); extern "C" long double __ynl(int, long double) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" long double erfl(long double) throw(); extern "C" long double __erfl(long double) throw();
# 251 "/usr/include/bits/mathcalls.h" 3
extern "C" long double erfcl(long double) throw(); extern "C" long double __erfcl(long double) throw();
# 252 "/usr/include/bits/mathcalls.h" 3
extern "C" long double lgammal(long double) throw(); extern "C" long double __lgammal(long double) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tgammal(long double) throw(); extern "C" long double __tgammal(long double) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" long double gammal(long double) throw(); extern "C" long double __gammal(long double) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" long double lgammal_r(long double, int *) throw(); extern "C" long double __lgammal_r(long double, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" long double rintl(long double) throw(); extern "C" long double __rintl(long double) throw();
# 283 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nextafterl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __nextafterl(long double, long double) throw() __attribute__((__const__));
# 285 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nexttowardl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __nexttowardl(long double, long double) throw() __attribute__((__const__));
# 289 "/usr/include/bits/mathcalls.h" 3
extern "C" long double remainderl(long double, long double) throw(); extern "C" long double __remainderl(long double, long double) throw();
# 293 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalbnl(long double, int) throw(); extern "C" long double __scalbnl(long double, int) throw();
# 297 "/usr/include/bits/mathcalls.h" 3
extern "C" int ilogbl(long double) throw(); extern "C" int __ilogbl(long double) throw();
# 302 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalblnl(long double, long) throw(); extern "C" long double __scalblnl(long double, long) throw();
# 306 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nearbyintl(long double) throw(); extern "C" long double __nearbyintl(long double) throw();
# 310 "/usr/include/bits/mathcalls.h" 3
extern "C" long double roundl(long double) throw() __attribute__((__const__)); extern "C" long double __roundl(long double) throw() __attribute__((__const__));
# 314 "/usr/include/bits/mathcalls.h" 3
extern "C" long double truncl(long double) throw() __attribute__((__const__)); extern "C" long double __truncl(long double) throw() __attribute__((__const__));
# 319 "/usr/include/bits/mathcalls.h" 3
extern "C" long double remquol(long double, long double, int *) throw(); extern "C" long double __remquol(long double, long double, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" long lrintl(long double) throw(); extern "C" long __lrintl(long double) throw();
# 327 "/usr/include/bits/mathcalls.h" 3
extern "C" long long llrintl(long double) throw(); extern "C" long long __llrintl(long double) throw();
# 331 "/usr/include/bits/mathcalls.h" 3
extern "C" long lroundl(long double) throw(); extern "C" long __lroundl(long double) throw();
# 332 "/usr/include/bits/mathcalls.h" 3
extern "C" long long llroundl(long double) throw(); extern "C" long long __llroundl(long double) throw();
# 336 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fdiml(long double, long double) throw(); extern "C" long double __fdiml(long double, long double) throw();
# 339 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fmaxl(long double, long double) throw(); extern "C" long double __fmaxl(long double, long double) throw();
# 342 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fminl(long double, long double) throw(); extern "C" long double __fminl(long double, long double) throw();
# 346 "/usr/include/bits/mathcalls.h" 3
extern "C" int __fpclassifyl(long double) throw() __attribute__((__const__));
# 350 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __signbitl(long double) throw() __attribute__((__const__));
# 355 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fmal(long double, long double, long double) throw(); extern "C" long double __fmal(long double, long double, long double) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalbl(long double, long double) throw(); extern "C" long double __scalbl(long double, long double) throw();
# 161 "/usr/include/math.h" 3
extern "C" { extern int signgam; }
# 203 "/usr/include/math.h" 3
enum {
# 204 "/usr/include/math.h" 3
FP_NAN,
# 206 "/usr/include/math.h" 3
FP_INFINITE,
# 208 "/usr/include/math.h" 3
FP_ZERO,
# 210 "/usr/include/math.h" 3
FP_SUBNORMAL,
# 212 "/usr/include/math.h" 3
FP_NORMAL
# 214 "/usr/include/math.h" 3
};
# 302 "/usr/include/math.h" 3
extern "C" { typedef
# 296 "/usr/include/math.h" 3
enum {
# 297 "/usr/include/math.h" 3
_IEEE_ = (-1),
# 298 "/usr/include/math.h" 3
_SVID_ = 0,
# 299 "/usr/include/math.h" 3
_XOPEN_,
# 300 "/usr/include/math.h" 3
_POSIX_,
# 301 "/usr/include/math.h" 3
_ISOC_
# 302 "/usr/include/math.h" 3
} _LIB_VERSION_TYPE; }
# 307 "/usr/include/math.h" 3
extern "C" { extern _LIB_VERSION_TYPE _LIB_VERSION; }
# 318 "/usr/include/math.h" 3
extern "C" { struct __exception {
# 323 "/usr/include/math.h" 3
int type;
# 324 "/usr/include/math.h" 3
char *name;
# 325 "/usr/include/math.h" 3
double arg1;
# 326 "/usr/include/math.h" 3
double arg2;
# 327 "/usr/include/math.h" 3
double retval;
# 328 "/usr/include/math.h" 3
}; }
# 331 "/usr/include/math.h" 3
extern "C" int matherr(__exception *) throw();
# 67 "/usr/include/bits/waitstatus.h" 3
extern "C" { union wait {
# 69 "/usr/include/bits/waitstatus.h" 3
int w_status;
# 71 "/usr/include/bits/waitstatus.h" 3
struct {
# 73 "/usr/include/bits/waitstatus.h" 3
unsigned __w_termsig:7;
# 74 "/usr/include/bits/waitstatus.h" 3
unsigned __w_coredump:1;
# 75 "/usr/include/bits/waitstatus.h" 3
unsigned __w_retcode:8;
# 76 "/usr/include/bits/waitstatus.h" 3
unsigned:16;
# 84 "/usr/include/bits/waitstatus.h" 3
} __wait_terminated;
# 86 "/usr/include/bits/waitstatus.h" 3
struct {
# 88 "/usr/include/bits/waitstatus.h" 3
unsigned __w_stopval:8;
# 89 "/usr/include/bits/waitstatus.h" 3
unsigned __w_stopsig:8;
# 90 "/usr/include/bits/waitstatus.h" 3
unsigned:16;
# 97 "/usr/include/bits/waitstatus.h" 3
} __wait_stopped;
# 98 "/usr/include/bits/waitstatus.h" 3
}; }
# 102 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 99 "/usr/include/stdlib.h" 3
struct {
# 100 "/usr/include/stdlib.h" 3
int quot;
# 101 "/usr/include/stdlib.h" 3
int rem;
# 102 "/usr/include/stdlib.h" 3
} div_t; }
# 110 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 107 "/usr/include/stdlib.h" 3
struct {
# 108 "/usr/include/stdlib.h" 3
long quot;
# 109 "/usr/include/stdlib.h" 3
long rem;
# 110 "/usr/include/stdlib.h" 3
} ldiv_t; }
# 122 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 119 "/usr/include/stdlib.h" 3
struct {
# 120 "/usr/include/stdlib.h" 3
long long quot;
# 121 "/usr/include/stdlib.h" 3
long long rem;
# 122 "/usr/include/stdlib.h" 3
} lldiv_t; }
# 140 "/usr/include/stdlib.h" 3
extern "C" size_t __ctype_get_mb_cur_max() throw();
# 145 "/usr/include/stdlib.h" 3
extern "C" double atof(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 148 "/usr/include/stdlib.h" 3
extern "C" int atoi(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 151 "/usr/include/stdlib.h" 3
extern "C" long atol(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 158 "/usr/include/stdlib.h" 3
extern "C" long long atoll(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 165 "/usr/include/stdlib.h" 3
extern "C" double strtod(const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1)));
# 173 "/usr/include/stdlib.h" 3
extern "C" float strtof(const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1)));
# 176 "/usr/include/stdlib.h" 3
extern "C" long double strtold(const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1)));
# 184 "/usr/include/stdlib.h" 3
extern "C" long strtol(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 188 "/usr/include/stdlib.h" 3
extern "C" unsigned long strtoul(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 196 "/usr/include/stdlib.h" 3
extern "C" long long strtoq(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 201 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtouq(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 210 "/usr/include/stdlib.h" 3
extern "C" long long strtoll(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 215 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtoull(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 240 "/usr/include/stdlib.h" 3
extern "C" long strtol_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 244 "/usr/include/stdlib.h" 3
extern "C" unsigned long strtoul_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 250 "/usr/include/stdlib.h" 3
extern "C" long long strtoll_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 256 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtoull_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 261 "/usr/include/stdlib.h" 3
extern "C" double strtod_l(const char *__restrict__, char **__restrict__, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(3)));
# 265 "/usr/include/stdlib.h" 3
extern "C" float strtof_l(const char *__restrict__, char **__restrict__, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(3)));
# 269 "/usr/include/stdlib.h" 3
extern "C" long double strtold_l(const char *__restrict__, char **__restrict__, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(3)));
# 311 "/usr/include/stdlib.h" 3
extern "C" char *l64a(long) throw();
# 314 "/usr/include/stdlib.h" 3
extern "C" long a64l(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 34 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_char u_char; }
# 35 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_short u_short; }
# 36 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_int u_int; }
# 37 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_long u_long; }
# 38 "/usr/include/sys/types.h" 3
extern "C" { typedef __quad_t quad_t; }
# 39 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_quad_t u_quad_t; }
# 40 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsid_t fsid_t; }
# 45 "/usr/include/sys/types.h" 3
extern "C" { typedef __loff_t loff_t; }
# 49 "/usr/include/sys/types.h" 3
extern "C" { typedef __ino_t ino_t; }
# 56 "/usr/include/sys/types.h" 3
extern "C" { typedef __ino64_t ino64_t; }
# 61 "/usr/include/sys/types.h" 3
extern "C" { typedef __dev_t dev_t; }
# 66 "/usr/include/sys/types.h" 3
extern "C" { typedef __gid_t gid_t; }
# 71 "/usr/include/sys/types.h" 3
extern "C" { typedef __mode_t mode_t; }
# 76 "/usr/include/sys/types.h" 3
extern "C" { typedef __nlink_t nlink_t; }
# 81 "/usr/include/sys/types.h" 3
extern "C" { typedef __uid_t uid_t; }
# 87 "/usr/include/sys/types.h" 3
extern "C" { typedef __off_t off_t; }
# 94 "/usr/include/sys/types.h" 3
extern "C" { typedef __off64_t off64_t; }
# 105 "/usr/include/sys/types.h" 3
extern "C" { typedef __id_t id_t; }
# 110 "/usr/include/sys/types.h" 3
extern "C" { typedef __ssize_t ssize_t; }
# 116 "/usr/include/sys/types.h" 3
extern "C" { typedef __daddr_t daddr_t; }
# 117 "/usr/include/sys/types.h" 3
extern "C" { typedef __caddr_t caddr_t; }
# 123 "/usr/include/sys/types.h" 3
extern "C" { typedef __key_t key_t; }
# 137 "/usr/include/sys/types.h" 3
extern "C" { typedef __useconds_t useconds_t; }
# 141 "/usr/include/sys/types.h" 3
extern "C" { typedef __suseconds_t suseconds_t; }
# 151 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned long ulong; }
# 152 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned short ushort; }
# 153 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned uint; }
# 195 "/usr/include/sys/types.h" 3
extern "C" { typedef signed char int8_t; }
# 196 "/usr/include/sys/types.h" 3
extern "C" { typedef short int16_t; }
# 197 "/usr/include/sys/types.h" 3
extern "C" { typedef int int32_t; }
# 198 "/usr/include/sys/types.h" 3
extern "C" { typedef long int64_t; }
# 201 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned char u_int8_t; }
# 202 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned short u_int16_t; }
# 203 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned u_int32_t; }
# 204 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned long u_int64_t; }
# 206 "/usr/include/sys/types.h" 3
extern "C" { typedef int register_t; }
# 24 "/usr/include/bits/sigset.h" 3
extern "C" { typedef int __sig_atomic_t; }
# 32 "/usr/include/bits/sigset.h" 3
extern "C" { typedef
# 30 "/usr/include/bits/sigset.h" 3
struct {
# 31 "/usr/include/bits/sigset.h" 3
unsigned long __val[((1024) / ((8) * sizeof(unsigned long)))];
# 32 "/usr/include/bits/sigset.h" 3
} __sigset_t; }
# 38 "/usr/include/sys/select.h" 3
extern "C" { typedef __sigset_t sigset_t; }
# 75 "/usr/include/bits/time.h" 3
extern "C" { struct timeval {
# 77 "/usr/include/bits/time.h" 3
__time_t tv_sec;
# 78 "/usr/include/bits/time.h" 3
__suseconds_t tv_usec;
# 79 "/usr/include/bits/time.h" 3
}; }
# 55 "/usr/include/sys/select.h" 3
extern "C" { typedef long __fd_mask; }
# 78 "/usr/include/sys/select.h" 3
extern "C" { typedef
# 68 "/usr/include/sys/select.h" 3
struct {
# 72 "/usr/include/sys/select.h" 3
__fd_mask fds_bits[(1024 / (8 * ((int)sizeof(__fd_mask))))];
# 78 "/usr/include/sys/select.h" 3
} fd_set; }
# 85 "/usr/include/sys/select.h" 3
extern "C" { typedef __fd_mask fd_mask; }
# 109 "/usr/include/sys/select.h" 3
extern "C" int select(int, fd_set *__restrict__, fd_set *__restrict__, fd_set *__restrict__, timeval *__restrict__);
# 121 "/usr/include/sys/select.h" 3
extern "C" int pselect(int, fd_set *__restrict__, fd_set *__restrict__, fd_set *__restrict__, const timespec *__restrict__, const __sigset_t *__restrict__);
# 31 "/usr/include/sys/sysmacros.h" 3
extern "C" unsigned gnu_dev_major(unsigned long long) throw();
# 34 "/usr/include/sys/sysmacros.h" 3
extern "C" unsigned gnu_dev_minor(unsigned long long) throw();
# 37 "/usr/include/sys/sysmacros.h" 3
extern "C" unsigned long long gnu_dev_makedev(unsigned, unsigned) throw();
# 229 "/usr/include/sys/types.h" 3
extern "C" { typedef __blksize_t blksize_t; }
# 236 "/usr/include/sys/types.h" 3
extern "C" { typedef __blkcnt_t blkcnt_t; }
# 240 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsblkcnt_t fsblkcnt_t; }
# 244 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsfilcnt_t fsfilcnt_t; }
# 263 "/usr/include/sys/types.h" 3
extern "C" { typedef __blkcnt64_t blkcnt64_t; }
# 264 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsblkcnt64_t fsblkcnt64_t; }
# 265 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsfilcnt64_t fsfilcnt64_t; }
# 50 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef unsigned long pthread_t; }
# 57 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 54 "/usr/include/bits/pthreadtypes.h" 3
union {
# 55 "/usr/include/bits/pthreadtypes.h" 3
char __size[56];
# 56 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 57 "/usr/include/bits/pthreadtypes.h" 3
} pthread_attr_t; }
# 65 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 61 "/usr/include/bits/pthreadtypes.h" 3
struct __pthread_internal_list {
# 63 "/usr/include/bits/pthreadtypes.h" 3
__pthread_internal_list *__prev;
# 64 "/usr/include/bits/pthreadtypes.h" 3
__pthread_internal_list *__next;
# 65 "/usr/include/bits/pthreadtypes.h" 3
} __pthread_list_t; }
# 104 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 77 "/usr/include/bits/pthreadtypes.h" 3
union {
# 78 "/usr/include/bits/pthreadtypes.h" 3
struct __pthread_mutex_s {
# 80 "/usr/include/bits/pthreadtypes.h" 3
int __lock;
# 81 "/usr/include/bits/pthreadtypes.h" 3
unsigned __count;
# 82 "/usr/include/bits/pthreadtypes.h" 3
int __owner;
# 84 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nusers;
# 88 "/usr/include/bits/pthreadtypes.h" 3
int __kind;
# 90 "/usr/include/bits/pthreadtypes.h" 3
int __spins;
# 91 "/usr/include/bits/pthreadtypes.h" 3
__pthread_list_t __list;
# 101 "/usr/include/bits/pthreadtypes.h" 3
} __data;
# 102 "/usr/include/bits/pthreadtypes.h" 3
char __size[40];
# 103 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 104 "/usr/include/bits/pthreadtypes.h" 3
} pthread_mutex_t; }
# 110 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 107 "/usr/include/bits/pthreadtypes.h" 3
union {
# 108 "/usr/include/bits/pthreadtypes.h" 3
char __size[4];
# 109 "/usr/include/bits/pthreadtypes.h" 3
int __align;
# 110 "/usr/include/bits/pthreadtypes.h" 3
} pthread_mutexattr_t; }
# 130 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 116 "/usr/include/bits/pthreadtypes.h" 3
union {
# 118 "/usr/include/bits/pthreadtypes.h" 3
struct {
# 119 "/usr/include/bits/pthreadtypes.h" 3
int __lock;
# 120 "/usr/include/bits/pthreadtypes.h" 3
unsigned __futex;
# 121 "/usr/include/bits/pthreadtypes.h" 3
__extension__ unsigned long long __total_seq;
# 122 "/usr/include/bits/pthreadtypes.h" 3
__extension__ unsigned long long __wakeup_seq;
# 123 "/usr/include/bits/pthreadtypes.h" 3
__extension__ unsigned long long __woken_seq;
# 124 "/usr/include/bits/pthreadtypes.h" 3
void *__mutex;
# 125 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nwaiters;
# 126 "/usr/include/bits/pthreadtypes.h" 3
unsigned __broadcast_seq;
# 127 "/usr/include/bits/pthreadtypes.h" 3
} __data;
# 128 "/usr/include/bits/pthreadtypes.h" 3
char __size[48];
# 129 "/usr/include/bits/pthreadtypes.h" 3
__extension__ long long __align;
# 130 "/usr/include/bits/pthreadtypes.h" 3
} pthread_cond_t; }
# 136 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 133 "/usr/include/bits/pthreadtypes.h" 3
union {
# 134 "/usr/include/bits/pthreadtypes.h" 3
char __size[4];
# 135 "/usr/include/bits/pthreadtypes.h" 3
int __align;
# 136 "/usr/include/bits/pthreadtypes.h" 3
} pthread_condattr_t; }
# 140 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef unsigned pthread_key_t; }
# 144 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef int pthread_once_t; }
# 189 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 151 "/usr/include/bits/pthreadtypes.h" 3
union {
# 154 "/usr/include/bits/pthreadtypes.h" 3
struct {
# 155 "/usr/include/bits/pthreadtypes.h" 3
int __lock;
# 156 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nr_readers;
# 157 "/usr/include/bits/pthreadtypes.h" 3
unsigned __readers_wakeup;
# 158 "/usr/include/bits/pthreadtypes.h" 3
unsigned __writer_wakeup;
# 159 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nr_readers_queued;
# 160 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nr_writers_queued;
# 161 "/usr/include/bits/pthreadtypes.h" 3
int __writer;
# 162 "/usr/include/bits/pthreadtypes.h" 3
int __shared;
# 163 "/usr/include/bits/pthreadtypes.h" 3
unsigned long __pad1;
# 164 "/usr/include/bits/pthreadtypes.h" 3
unsigned long __pad2;
# 167 "/usr/include/bits/pthreadtypes.h" 3
unsigned __flags;
# 168 "/usr/include/bits/pthreadtypes.h" 3
} __data;
# 187 "/usr/include/bits/pthreadtypes.h" 3
char __size[56];
# 188 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 189 "/usr/include/bits/pthreadtypes.h" 3
} pthread_rwlock_t; }
# 195 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 192 "/usr/include/bits/pthreadtypes.h" 3
union {
# 193 "/usr/include/bits/pthreadtypes.h" 3
char __size[8];
# 194 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 195 "/usr/include/bits/pthreadtypes.h" 3
} pthread_rwlockattr_t; }
# 201 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef volatile int pthread_spinlock_t; }
# 210 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 207 "/usr/include/bits/pthreadtypes.h" 3
union {
# 208 "/usr/include/bits/pthreadtypes.h" 3
char __size[32];
# 209 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 210 "/usr/include/bits/pthreadtypes.h" 3
} pthread_barrier_t; }
# 216 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 213 "/usr/include/bits/pthreadtypes.h" 3
union {
# 214 "/usr/include/bits/pthreadtypes.h" 3
char __size[4];
# 215 "/usr/include/bits/pthreadtypes.h" 3
int __align;
# 216 "/usr/include/bits/pthreadtypes.h" 3
} pthread_barrierattr_t; }
# 327 "/usr/include/stdlib.h" 3
extern "C" long random() throw();
# 330 "/usr/include/stdlib.h" 3
extern "C" void srandom(unsigned) throw();
# 336 "/usr/include/stdlib.h" 3
extern "C" char *initstate(unsigned, char *, size_t) throw() __attribute__((nonnull(2)));
# 341 "/usr/include/stdlib.h" 3
extern "C" char *setstate(char *) throw() __attribute__((nonnull(1)));
# 349 "/usr/include/stdlib.h" 3
extern "C" { struct random_data {
# 351 "/usr/include/stdlib.h" 3
int32_t *fptr;
# 352 "/usr/include/stdlib.h" 3
int32_t *rptr;
# 353 "/usr/include/stdlib.h" 3
int32_t *state;
# 354 "/usr/include/stdlib.h" 3
int rand_type;
# 355 "/usr/include/stdlib.h" 3
int rand_deg;
# 356 "/usr/include/stdlib.h" 3
int rand_sep;
# 357 "/usr/include/stdlib.h" 3
int32_t *end_ptr;
# 358 "/usr/include/stdlib.h" 3
}; }
# 360 "/usr/include/stdlib.h" 3
extern "C" int random_r(random_data *__restrict__, int32_t *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 363 "/usr/include/stdlib.h" 3
extern "C" int srandom_r(unsigned, random_data *) throw() __attribute__((nonnull(2)));
# 366 "/usr/include/stdlib.h" 3
extern "C" int initstate_r(unsigned, char *__restrict__, size_t, random_data *__restrict__) throw() __attribute__((nonnull(2))) __attribute__((nonnull(4)));
# 371 "/usr/include/stdlib.h" 3
extern "C" int setstate_r(char *__restrict__, random_data *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 380 "/usr/include/stdlib.h" 3
extern "C" int rand() throw();
# 382 "/usr/include/stdlib.h" 3
extern "C" void srand(unsigned) throw();
# 387 "/usr/include/stdlib.h" 3
extern "C" int rand_r(unsigned *) throw();
# 395 "/usr/include/stdlib.h" 3
extern "C" double drand48() throw();
# 396 "/usr/include/stdlib.h" 3
extern "C" double erand48(unsigned short [3]) throw() __attribute__((nonnull(1)));
# 399 "/usr/include/stdlib.h" 3
extern "C" long lrand48() throw();
# 400 "/usr/include/stdlib.h" 3
extern "C" long nrand48(unsigned short [3]) throw() __attribute__((nonnull(1)));
# 404 "/usr/include/stdlib.h" 3
extern "C" long mrand48() throw();
# 405 "/usr/include/stdlib.h" 3
extern "C" long jrand48(unsigned short [3]) throw() __attribute__((nonnull(1)));
# 409 "/usr/include/stdlib.h" 3
extern "C" void srand48(long) throw();
# 410 "/usr/include/stdlib.h" 3
extern "C" unsigned short *seed48(unsigned short [3]) throw() __attribute__((nonnull(1)));
# 412 "/usr/include/stdlib.h" 3
extern "C" void lcong48(unsigned short [7]) throw() __attribute__((nonnull(1)));
# 418 "/usr/include/stdlib.h" 3
extern "C" { struct drand48_data {
# 420 "/usr/include/stdlib.h" 3
unsigned short __x[3];
# 421 "/usr/include/stdlib.h" 3
unsigned short __old_x[3];
# 422 "/usr/include/stdlib.h" 3
unsigned short __c;
# 423 "/usr/include/stdlib.h" 3
unsigned short __init;
# 424 "/usr/include/stdlib.h" 3
unsigned long long __a;
# 425 "/usr/include/stdlib.h" 3
}; }
# 428 "/usr/include/stdlib.h" 3
extern "C" int drand48_r(drand48_data *__restrict__, double *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 430 "/usr/include/stdlib.h" 3
extern "C" int erand48_r(unsigned short [3], drand48_data *__restrict__, double *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 435 "/usr/include/stdlib.h" 3
extern "C" int lrand48_r(drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 438 "/usr/include/stdlib.h" 3
extern "C" int nrand48_r(unsigned short [3], drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 444 "/usr/include/stdlib.h" 3
extern "C" int mrand48_r(drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 447 "/usr/include/stdlib.h" 3
extern "C" int jrand48_r(unsigned short [3], drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 453 "/usr/include/stdlib.h" 3
extern "C" int srand48_r(long, drand48_data *) throw() __attribute__((nonnull(2)));
# 456 "/usr/include/stdlib.h" 3
extern "C" int seed48_r(unsigned short [3], drand48_data *) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 459 "/usr/include/stdlib.h" 3
extern "C" int lcong48_r(unsigned short [7], drand48_data *) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 471 "/usr/include/stdlib.h" 3
extern "C" void *malloc(size_t) throw() __attribute__((__malloc__));
# 473 "/usr/include/stdlib.h" 3
extern "C" void *calloc(size_t, size_t) throw() __attribute__((__malloc__));
# 485 "/usr/include/stdlib.h" 3
extern "C" void *realloc(void *, size_t) throw() __attribute__((__warn_unused_result__));
# 488 "/usr/include/stdlib.h" 3
extern "C" void free(void *) throw();
# 493 "/usr/include/stdlib.h" 3
extern "C" void cfree(void *) throw();
# 33 "/usr/include/alloca.h" 3
extern "C" void *alloca(size_t) throw();
# 503 "/usr/include/stdlib.h" 3
extern "C" void *valloc(size_t) throw() __attribute__((__malloc__));
# 508 "/usr/include/stdlib.h" 3
extern "C" int posix_memalign(void **, size_t, size_t) throw() __attribute__((nonnull(1)));
# 514 "/usr/include/stdlib.h" 3
extern "C" void abort() throw() __attribute__((__noreturn__));
# 518 "/usr/include/stdlib.h" 3
extern "C" int atexit(void (*)(void)) throw() __attribute__((nonnull(1)));
# 525 "/usr/include/stdlib.h" 3
int at_quick_exit(void (*)(void)) throw() __asm__("at_quick_exit") __attribute__((nonnull(1)));
# 536 "/usr/include/stdlib.h" 3
extern "C" int on_exit(void (*)(int, void *), void *) throw() __attribute__((nonnull(1)));
# 544 "/usr/include/stdlib.h" 3
extern "C" void exit(int) throw() __attribute__((__noreturn__));
# 552 "/usr/include/stdlib.h" 3
extern "C" void quick_exit(int) throw() __attribute__((__noreturn__));
# 560 "/usr/include/stdlib.h" 3
extern "C" void _Exit(int) throw() __attribute__((__noreturn__));
# 567 "/usr/include/stdlib.h" 3
extern "C" char *getenv(const char *) throw() __attribute__((nonnull(1)));
# 572 "/usr/include/stdlib.h" 3
extern "C" char *__secure_getenv(const char *) throw() __attribute__((nonnull(1)));
# 579 "/usr/include/stdlib.h" 3
extern "C" int putenv(char *) throw() __attribute__((nonnull(1)));
# 585 "/usr/include/stdlib.h" 3
extern "C" int setenv(const char *, const char *, int) throw() __attribute__((nonnull(2)));
# 589 "/usr/include/stdlib.h" 3
extern "C" int unsetenv(const char *) throw() __attribute__((nonnull(1)));
# 596 "/usr/include/stdlib.h" 3
extern "C" int clearenv() throw();
# 606 "/usr/include/stdlib.h" 3
extern "C" char *mktemp(char *) throw() __attribute__((nonnull(1)));
# 620 "/usr/include/stdlib.h" 3
extern "C" int mkstemp(char *) __attribute__((nonnull(1)));
# 630 "/usr/include/stdlib.h" 3
extern "C" int mkstemp64(char *) __attribute__((nonnull(1)));
# 642 "/usr/include/stdlib.h" 3
extern "C" int mkstemps(char *, int) __attribute__((nonnull(1)));
# 652 "/usr/include/stdlib.h" 3
extern "C" int mkstemps64(char *, int) __attribute__((nonnull(1)));
# 663 "/usr/include/stdlib.h" 3
extern "C" char *mkdtemp(char *) throw() __attribute__((nonnull(1)));
# 674 "/usr/include/stdlib.h" 3
extern "C" int mkostemp(char *, int) __attribute__((nonnull(1)));
# 684 "/usr/include/stdlib.h" 3
extern "C" int mkostemp64(char *, int) __attribute__((nonnull(1)));
# 694 "/usr/include/stdlib.h" 3
extern "C" int mkostemps(char *, int, int) __attribute__((nonnull(1)));
# 706 "/usr/include/stdlib.h" 3
extern "C" int mkostemps64(char *, int, int) __attribute__((nonnull(1)));
# 717 "/usr/include/stdlib.h" 3
extern "C" int system(const char *);
# 724 "/usr/include/stdlib.h" 3
extern "C" char *canonicalize_file_name(const char *) throw() __attribute__((nonnull(1)));
# 734 "/usr/include/stdlib.h" 3
extern "C" char *realpath(const char *__restrict__, char *__restrict__) throw();
# 742 "/usr/include/stdlib.h" 3
extern "C" { typedef int (*__compar_fn_t)(const void *, const void *); }
# 745 "/usr/include/stdlib.h" 3
extern "C" { typedef __compar_fn_t comparison_fn_t; }
# 749 "/usr/include/stdlib.h" 3
extern "C" { typedef int (*__compar_d_fn_t)(const void *, const void *, void *); }
# 755 "/usr/include/stdlib.h" 3
extern "C" void *bsearch(const void *, const void *, size_t, size_t, __compar_fn_t) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(5)));
# 761 "/usr/include/stdlib.h" 3
extern "C" void qsort(void *, size_t, size_t, __compar_fn_t) __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 764 "/usr/include/stdlib.h" 3
extern "C" void qsort_r(void *, size_t, size_t, __compar_d_fn_t, void *) __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 771 "/usr/include/stdlib.h" 3
extern "C" __attribute__((weak)) int abs(int) throw() __attribute__((__const__));
# 772 "/usr/include/stdlib.h" 3
extern "C" __attribute__((weak)) long labs(long) throw() __attribute__((__const__));
# 776 "/usr/include/stdlib.h" 3
extern "C" __attribute__((weak)) long long llabs(long long) throw() __attribute__((__const__));
# 785 "/usr/include/stdlib.h" 3
extern "C" div_t div(int, int) throw() __attribute__((__const__));
# 787 "/usr/include/stdlib.h" 3
extern "C" ldiv_t ldiv(long, long) throw() __attribute__((__const__));
# 793 "/usr/include/stdlib.h" 3
extern "C" lldiv_t lldiv(long long, long long) throw() __attribute__((__const__));
# 808 "/usr/include/stdlib.h" 3
extern "C" char *ecvt(double, int, int *__restrict__, int *__restrict__) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4)));
# 814 "/usr/include/stdlib.h" 3
extern "C" char *fcvt(double, int, int *__restrict__, int *__restrict__) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4)));
# 820 "/usr/include/stdlib.h" 3
extern "C" char *gcvt(double, int, char *) throw() __attribute__((nonnull(3)));
# 826 "/usr/include/stdlib.h" 3
extern "C" char *qecvt(long double, int, int *__restrict__, int *__restrict__) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4)));
# 829 "/usr/include/stdlib.h" 3
extern "C" char *qfcvt(long double, int, int *__restrict__, int *__restrict__) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4)));
# 832 "/usr/include/stdlib.h" 3
extern "C" char *qgcvt(long double, int, char *) throw() __attribute__((nonnull(3)));
# 838 "/usr/include/stdlib.h" 3
extern "C" int ecvt_r(double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5)));
# 841 "/usr/include/stdlib.h" 3
extern "C" int fcvt_r(double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5)));
# 845 "/usr/include/stdlib.h" 3
extern "C" int qecvt_r(long double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5)));
# 849 "/usr/include/stdlib.h" 3
extern "C" int qfcvt_r(long double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5)));
# 860 "/usr/include/stdlib.h" 3
extern "C" int mblen(const char *, size_t) throw();
# 863 "/usr/include/stdlib.h" 3
extern "C" int mbtowc(wchar_t *__restrict__, const char *__restrict__, size_t) throw();
# 867 "/usr/include/stdlib.h" 3
extern "C" int wctomb(char *, wchar_t) throw();
# 871 "/usr/include/stdlib.h" 3
extern "C" size_t mbstowcs(wchar_t *__restrict__, const char *__restrict__, size_t) throw();
# 874 "/usr/include/stdlib.h" 3
extern "C" size_t wcstombs(char *__restrict__, const wchar_t *__restrict__, size_t) throw();
# 885 "/usr/include/stdlib.h" 3
extern "C" int rpmatch(const char *) throw() __attribute__((nonnull(1)));
# 896 "/usr/include/stdlib.h" 3
extern "C" int getsubopt(char **__restrict__, char *const *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 905 "/usr/include/stdlib.h" 3
extern "C" void setkey(const char *) throw() __attribute__((nonnull(1)));
# 913 "/usr/include/stdlib.h" 3
extern "C" int posix_openpt(int);
# 921 "/usr/include/stdlib.h" 3
extern "C" int grantpt(int) throw();
# 925 "/usr/include/stdlib.h" 3
extern "C" int unlockpt(int) throw();
# 930 "/usr/include/stdlib.h" 3
extern "C" char *ptsname(int) throw();
# 937 "/usr/include/stdlib.h" 3
extern "C" int ptsname_r(int, char *, size_t) throw() __attribute__((nonnull(2)));
# 941 "/usr/include/stdlib.h" 3
extern "C" int getpt();
# 948 "/usr/include/stdlib.h" 3
extern "C" int getloadavg(double [], int) throw() __attribute__((nonnull(1)));
# 69 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {
# 71 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Iterator, class _Container> class __normal_iterator;
# 74 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
}
# 76 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
namespace std __attribute__((visibility("default"))) {
# 78 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __true_type { };
# 79 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __false_type { };
# 81 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< bool __T0>
# 82 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __truth_type {
# 83 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type; };
# 86 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __truth_type< true> {
# 87 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type; };
# 91 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Sp, class _Tp>
# 92 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __traitor {
# 94 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = (((bool)_Sp::__value) || ((bool)_Tp::__value))};
# 95 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef typename __truth_type< __value> ::__type __type;
# 96 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 99 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class , class >
# 100 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __are_same {
# 102 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 103 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 104 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 106 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 107 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __are_same< _Tp, _Tp> {
# 109 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 110 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 111 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 114 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 115 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_void {
# 117 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 118 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 119 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 122 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_void< void> {
# 124 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 125 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 126 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 131 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 132 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_integer {
# 134 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 135 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 136 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 142 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< bool> {
# 144 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 145 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 146 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 149 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< char> {
# 151 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 152 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 153 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 156 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< signed char> {
# 158 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 159 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 160 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 163 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned char> {
# 165 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 166 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 167 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 171 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< wchar_t> {
# 173 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 174 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 175 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 195 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< short> {
# 197 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 198 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 199 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 202 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned short> {
# 204 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 205 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 206 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 209 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< int> {
# 211 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 212 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 213 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 216 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned> {
# 218 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 219 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 220 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 223 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< long> {
# 225 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 226 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 227 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 230 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned long> {
# 232 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 233 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 234 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 237 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< long long> {
# 239 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 240 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 241 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 244 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned long long> {
# 246 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 247 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 248 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 253 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 254 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_floating {
# 256 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 257 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 258 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 262 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_floating< float> {
# 264 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 265 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 266 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 269 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_floating< double> {
# 271 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 272 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 273 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 276 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_floating< long double> {
# 278 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 279 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 280 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 285 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 286 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_pointer {
# 288 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 289 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 290 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 292 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 293 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_pointer< _Tp *> {
# 295 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 296 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 297 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 302 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 303 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_normal_iterator {
# 305 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 306 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 307 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 309 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Iterator, class _Container>
# 310 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_normal_iterator< __gnu_cxx::__normal_iterator< _Iterator, _Container> > {
# 313 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 314 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 315 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 320 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 321 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_arithmetic : public __traitor< __is_integer< _Tp> , __is_floating< _Tp> > {
# 323 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 328 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 329 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_fundamental : public __traitor< __is_void< _Tp> , __is_arithmetic< _Tp> > {
# 331 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 336 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 337 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_scalar : public __traitor< __is_arithmetic< _Tp> , __is_pointer< _Tp> > {
# 339 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 344 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 345 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_char {
# 347 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 348 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 349 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 352 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_char< char> {
# 354 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 355 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 356 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 360 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_char< wchar_t> {
# 362 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 363 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 364 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 367 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 368 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_byte {
# 370 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 371 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 372 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 375 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_byte< char> {
# 377 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 378 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 379 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 382 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_byte< signed char> {
# 384 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 385 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 386 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 389 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_byte< unsigned char> {
# 391 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 392 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 393 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 398 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 399 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_move_iterator {
# 401 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 402 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 403 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 417 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
}
# 37 "/usr/include/c++/4.4/ext/type_traits.h" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {
# 40 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< bool __T1, class >
# 41 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __enable_if {
# 42 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 44 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp>
# 45 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __enable_if< true, _Tp> {
# 46 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef _Tp __type; };
# 50 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< bool _Cond, class _Iftrue, class _Iffalse>
# 51 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __conditional_type {
# 52 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef _Iftrue __type; };
# 54 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Iftrue, class _Iffalse>
# 55 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __conditional_type< false, _Iftrue, _Iffalse> {
# 56 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef _Iffalse __type; };
# 60 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp>
# 61 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __add_unsigned {
# 64 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp> __if_type;
# 67 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type;
# 68 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 71 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< char> {
# 72 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned char __type; };
# 75 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< signed char> {
# 76 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned char __type; };
# 79 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< short> {
# 80 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned short __type; };
# 83 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< int> {
# 84 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned __type; };
# 87 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< long> {
# 88 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned long __type; };
# 91 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< long long> {
# 92 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned long long __type; };
# 96 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< bool> ;
# 99 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< wchar_t> ;
# 103 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp>
# 104 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __remove_unsigned {
# 107 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp> __if_type;
# 110 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type;
# 111 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 114 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< char> {
# 115 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef signed char __type; };
# 118 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned char> {
# 119 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef signed char __type; };
# 122 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned short> {
# 123 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef short __type; };
# 126 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned> {
# 127 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef int __type; };
# 130 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned long> {
# 131 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef long __type; };
# 134 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned long long> {
# 135 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef long long __type; };
# 139 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< bool> ;
# 142 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< wchar_t> ;
# 146 "/usr/include/c++/4.4/ext/type_traits.h" 3
template < typename _Type >
    inline bool
    __is_null_pointer ( _Type * __ptr )
    { return __ptr == 0; }
# 151 "/usr/include/c++/4.4/ext/type_traits.h" 3
template < typename _Type >
    inline bool
    __is_null_pointer ( _Type )
    { return false; }
# 158 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp, bool __T2 = std::__is_integer< _Tp> ::__value>
# 159 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote {
# 160 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef double __type; };
# 162 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp>
# 163 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote< _Tp, false> {
# 164 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef _Tp __type; };
# 166 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp, class _Up>
# 167 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote_2 {
# 170 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 171 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 174 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef __typeof__(__type1() + __type2()) __type;
# 175 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 177 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp, class _Up, class _Vp>
# 178 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote_3 {
# 181 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 182 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 183 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type __type3;
# 186 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef __typeof__((__type1() + __type2()) + __type3()) __type;
# 187 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 189 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp, class _Up, class _Vp, class _Wp>
# 190 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote_4 {
# 193 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 194 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 195 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type __type3;
# 196 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Wp, std::__is_integer< _Wp> ::__value> ::__type __type4;
# 199 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef __typeof__(((__type1() + __type2()) + __type3()) + __type4()) __type;
# 200 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 202 "/usr/include/c++/4.4/ext/type_traits.h" 3
}
# 77 "/usr/include/c++/4.4/cmath" 3
namespace std __attribute__((visibility("default"))) {
# 81 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    _Tp __cmath_power ( _Tp, unsigned int );
# 84 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline _Tp
    __pow_helper ( _Tp __x, int __n )
    {
      return __n < 0
        ? _Tp ( 1 ) / __cmath_power ( __x, - __n )
        : __cmath_power ( __x, __n );
    }
# 94 "/usr/include/c++/4.4/cmath" 3
inline double abs(double __x)
# 95 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabs(__x); }
# 98 "/usr/include/c++/4.4/cmath" 3
inline float abs(float __x)
# 99 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabsf(__x); }
# 102 "/usr/include/c++/4.4/cmath" 3
inline long double abs(long double __x)
# 103 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabsl(__x); }
# 105 "/usr/include/c++/4.4/cmath" 3
using ::acos;
# 108 "/usr/include/c++/4.4/cmath" 3
inline float acos(float __x)
# 109 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_acosf(__x); }
# 112 "/usr/include/c++/4.4/cmath" 3
inline long double acos(long double __x)
# 113 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_acosl(__x); }
# 115 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    acos ( _Tp __x )
    { return __builtin_acos ( __x ); }
# 121 "/usr/include/c++/4.4/cmath" 3
using ::asin;
# 124 "/usr/include/c++/4.4/cmath" 3
inline float asin(float __x)
# 125 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_asinf(__x); }
# 128 "/usr/include/c++/4.4/cmath" 3
inline long double asin(long double __x)
# 129 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_asinl(__x); }
# 131 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    asin ( _Tp __x )
    { return __builtin_asin ( __x ); }
# 137 "/usr/include/c++/4.4/cmath" 3
using ::atan;
# 140 "/usr/include/c++/4.4/cmath" 3
inline float atan(float __x)
# 141 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_atanf(__x); }
# 144 "/usr/include/c++/4.4/cmath" 3
inline long double atan(long double __x)
# 145 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_atanl(__x); }
# 147 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    atan ( _Tp __x )
    { return __builtin_atan ( __x ); }
# 153 "/usr/include/c++/4.4/cmath" 3
using ::atan2;
# 156 "/usr/include/c++/4.4/cmath" 3
inline float atan2(float __y, float __x)
# 157 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_atan2f(__y, __x); }
# 160 "/usr/include/c++/4.4/cmath" 3
inline long double atan2(long double __y, long double __x)
# 161 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_atan2l(__y, __x); }
# 163 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp, typename _Up >
    inline
    typename __gnu_cxx :: __promote_2 <
    typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value
        && __is_arithmetic < _Up > :: __value,
        _Tp > :: __type, _Up > :: __type
    atan2 ( _Tp __y, _Up __x )
    {
      typedef typename __gnu_cxx :: __promote_2 < _Tp, _Up > :: __type __type;
      return atan2 ( __type ( __y ), __type ( __x ) );
    }
# 175 "/usr/include/c++/4.4/cmath" 3
using ::ceil;
# 178 "/usr/include/c++/4.4/cmath" 3
inline float ceil(float __x)
# 179 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_ceilf(__x); }
# 182 "/usr/include/c++/4.4/cmath" 3
inline long double ceil(long double __x)
# 183 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_ceill(__x); }
# 185 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    ceil ( _Tp __x )
    { return __builtin_ceil ( __x ); }
# 191 "/usr/include/c++/4.4/cmath" 3
using ::cos;
# 194 "/usr/include/c++/4.4/cmath" 3
inline float cos(float __x)
# 195 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_cosf(__x); }
# 198 "/usr/include/c++/4.4/cmath" 3
inline long double cos(long double __x)
# 199 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_cosl(__x); }
# 201 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    cos ( _Tp __x )
    { return __builtin_cos ( __x ); }
# 207 "/usr/include/c++/4.4/cmath" 3
using ::cosh;
# 210 "/usr/include/c++/4.4/cmath" 3
inline float cosh(float __x)
# 211 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_coshf(__x); }
# 214 "/usr/include/c++/4.4/cmath" 3
inline long double cosh(long double __x)
# 215 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_coshl(__x); }
# 217 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    cosh ( _Tp __x )
    { return __builtin_cosh ( __x ); }
# 223 "/usr/include/c++/4.4/cmath" 3
using ::exp;
# 226 "/usr/include/c++/4.4/cmath" 3
inline float exp(float __x)
# 227 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_expf(__x); }
# 230 "/usr/include/c++/4.4/cmath" 3
inline long double exp(long double __x)
# 231 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_expl(__x); }
# 233 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    exp ( _Tp __x )
    { return __builtin_exp ( __x ); }
# 239 "/usr/include/c++/4.4/cmath" 3
using ::fabs;
# 242 "/usr/include/c++/4.4/cmath" 3
inline float fabs(float __x)
# 243 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabsf(__x); }
# 246 "/usr/include/c++/4.4/cmath" 3
inline long double fabs(long double __x)
# 247 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabsl(__x); }
# 249 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    fabs ( _Tp __x )
    { return __builtin_fabs ( __x ); }
# 255 "/usr/include/c++/4.4/cmath" 3
using ::floor;
# 258 "/usr/include/c++/4.4/cmath" 3
inline float floor(float __x)
# 259 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_floorf(__x); }
# 262 "/usr/include/c++/4.4/cmath" 3
inline long double floor(long double __x)
# 263 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_floorl(__x); }
# 265 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    floor ( _Tp __x )
    { return __builtin_floor ( __x ); }
# 271 "/usr/include/c++/4.4/cmath" 3
using ::fmod;
# 274 "/usr/include/c++/4.4/cmath" 3
inline float fmod(float __x, float __y)
# 275 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fmodf(__x, __y); }
# 278 "/usr/include/c++/4.4/cmath" 3
inline long double fmod(long double __x, long double __y)
# 279 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fmodl(__x, __y); }
# 281 "/usr/include/c++/4.4/cmath" 3
using ::frexp;
# 284 "/usr/include/c++/4.4/cmath" 3
inline float frexp(float __x, int *__exp)
# 285 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_frexpf(__x, __exp); }
# 288 "/usr/include/c++/4.4/cmath" 3
inline long double frexp(long double __x, int *__exp)
# 289 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_frexpl(__x, __exp); }
# 291 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    frexp ( _Tp __x, int * __exp )
    { return __builtin_frexp ( __x, __exp ); }
# 297 "/usr/include/c++/4.4/cmath" 3
using ::ldexp;
# 300 "/usr/include/c++/4.4/cmath" 3
inline float ldexp(float __x, int __exp)
# 301 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_ldexpf(__x, __exp); }
# 304 "/usr/include/c++/4.4/cmath" 3
inline long double ldexp(long double __x, int __exp)
# 305 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_ldexpl(__x, __exp); }
# 307 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
  ldexp ( _Tp __x, int __exp )
  { return __builtin_ldexp ( __x, __exp ); }
# 313 "/usr/include/c++/4.4/cmath" 3
using ::log;
# 316 "/usr/include/c++/4.4/cmath" 3
inline float log(float __x)
# 317 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_logf(__x); }
# 320 "/usr/include/c++/4.4/cmath" 3
inline long double log(long double __x)
# 321 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_logl(__x); }
# 323 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    log ( _Tp __x )
    { return __builtin_log ( __x ); }
# 329 "/usr/include/c++/4.4/cmath" 3
using ::log10;
# 332 "/usr/include/c++/4.4/cmath" 3
inline float log10(float __x)
# 333 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_log10f(__x); }
# 336 "/usr/include/c++/4.4/cmath" 3
inline long double log10(long double __x)
# 337 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_log10l(__x); }
# 339 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    log10 ( _Tp __x )
    { return __builtin_log10 ( __x ); }
# 345 "/usr/include/c++/4.4/cmath" 3
using ::modf;
# 348 "/usr/include/c++/4.4/cmath" 3
inline float modf(float __x, float *__iptr)
# 349 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_modff(__x, __iptr); }
# 352 "/usr/include/c++/4.4/cmath" 3
inline long double modf(long double __x, long double *__iptr)
# 353 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_modfl(__x, __iptr); }
# 355 "/usr/include/c++/4.4/cmath" 3
using ::pow;
# 358 "/usr/include/c++/4.4/cmath" 3
inline float pow(float __x, float __y)
# 359 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powf(__x, __y); }
# 362 "/usr/include/c++/4.4/cmath" 3
inline long double pow(long double __x, long double __y)
# 363 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powl(__x, __y); }
# 369 "/usr/include/c++/4.4/cmath" 3
inline double pow(double __x, int __i)
# 370 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powi(__x, __i); }
# 373 "/usr/include/c++/4.4/cmath" 3
inline float pow(float __x, int __n)
# 374 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powif(__x, __n); }
# 377 "/usr/include/c++/4.4/cmath" 3
inline long double pow(long double __x, int __n)
# 378 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powil(__x, __n); }
# 381 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp, typename _Up >
    inline
    typename __gnu_cxx :: __promote_2 <
    typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value
        && __is_arithmetic < _Up > :: __value,
        _Tp > :: __type, _Up > :: __type
    pow ( _Tp __x, _Up __y )
    {
      typedef typename __gnu_cxx :: __promote_2 < _Tp, _Up > :: __type __type;
      return pow ( __type ( __x ), __type ( __y ) );
    }
# 393 "/usr/include/c++/4.4/cmath" 3
using ::sin;
# 396 "/usr/include/c++/4.4/cmath" 3
inline float sin(float __x)
# 397 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sinf(__x); }
# 400 "/usr/include/c++/4.4/cmath" 3
inline long double sin(long double __x)
# 401 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sinl(__x); }
# 403 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sin ( _Tp __x )
    { return __builtin_sin ( __x ); }
# 409 "/usr/include/c++/4.4/cmath" 3
using ::sinh;
# 412 "/usr/include/c++/4.4/cmath" 3
inline float sinh(float __x)
# 413 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sinhf(__x); }
# 416 "/usr/include/c++/4.4/cmath" 3
inline long double sinh(long double __x)
# 417 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sinhl(__x); }
# 419 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sinh ( _Tp __x )
    { return __builtin_sinh ( __x ); }
# 425 "/usr/include/c++/4.4/cmath" 3
using ::sqrt;
# 428 "/usr/include/c++/4.4/cmath" 3
inline float sqrt(float __x)
# 429 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sqrtf(__x); }
# 432 "/usr/include/c++/4.4/cmath" 3
inline long double sqrt(long double __x)
# 433 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sqrtl(__x); }
# 435 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sqrt ( _Tp __x )
    { return __builtin_sqrt ( __x ); }
# 441 "/usr/include/c++/4.4/cmath" 3
using ::tan;
# 444 "/usr/include/c++/4.4/cmath" 3
inline float tan(float __x)
# 445 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_tanf(__x); }
# 448 "/usr/include/c++/4.4/cmath" 3
inline long double tan(long double __x)
# 449 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_tanl(__x); }
# 451 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    tan ( _Tp __x )
    { return __builtin_tan ( __x ); }
# 457 "/usr/include/c++/4.4/cmath" 3
using ::tanh;
# 460 "/usr/include/c++/4.4/cmath" 3
inline float tanh(float __x)
# 461 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_tanhf(__x); }
# 464 "/usr/include/c++/4.4/cmath" 3
inline long double tanh(long double __x)
# 465 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_tanhl(__x); }
# 467 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    tanh ( _Tp __x )
    { return __builtin_tanh ( __x ); }
# 473 "/usr/include/c++/4.4/cmath" 3
}
# 492 "/usr/include/c++/4.4/cmath" 3
namespace std __attribute__((visibility("default"))) {
# 494 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    fpclassify ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_fpclassify ( FP_NAN, FP_INFINITE, FP_NORMAL,
      FP_SUBNORMAL, FP_ZERO, __type ( __f ) );
    }
# 504 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isfinite ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isfinite ( __type ( __f ) );
    }
# 513 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isinf ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isinf ( __type ( __f ) );
    }
# 522 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isnan ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isnan ( __type ( __f ) );
    }
# 531 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isnormal ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isnormal ( __type ( __f ) );
    }
# 540 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    signbit ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_signbit ( __type ( __f ) );
    }
# 549 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isgreater ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isgreater ( __type ( __f1 ), __type ( __f2 ) );
    }
# 558 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isgreaterequal ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isgreaterequal ( __type ( __f1 ), __type ( __f2 ) );
    }
# 567 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isless ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isless ( __type ( __f1 ), __type ( __f2 ) );
    }
# 576 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    islessequal ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_islessequal ( __type ( __f1 ), __type ( __f2 ) );
    }
# 585 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    islessgreater ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_islessgreater ( __type ( __f1 ), __type ( __f2 ) );
    }
# 594 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isunordered ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isunordered ( __type ( __f1 ), __type ( __f2 ) );
    }
# 603 "/usr/include/c++/4.4/cmath" 3
}
# 35 "/usr/include/c++/4.4/bits/cmath.tcc" 3
namespace std __attribute__((visibility("default"))) {
# 37 "/usr/include/c++/4.4/bits/cmath.tcc" 3
template < typename _Tp >
    inline _Tp
    __cmath_power ( _Tp __x, unsigned int __n )
    {
      _Tp __y = __n % 2 ? __x : _Tp ( 1 );

      while ( __n >>= 1 )
        {
          __x = __x * __x;
          if ( __n % 2 )
            __y = __y * __x;
        }

      return __y;
    }
# 53 "/usr/include/c++/4.4/bits/cmath.tcc" 3
}
# 49 "/usr/include/c++/4.4/cstddef" 3
namespace std __attribute__((visibility("default"))) {
# 51 "/usr/include/c++/4.4/cstddef" 3
using ::ptrdiff_t;
# 52 "/usr/include/c++/4.4/cstddef" 3
using ::size_t;
# 54 "/usr/include/c++/4.4/cstddef" 3
}
# 100 "/usr/include/c++/4.4/cstdlib" 3
namespace std __attribute__((visibility("default"))) {
# 102 "/usr/include/c++/4.4/cstdlib" 3
using ::div_t;
# 103 "/usr/include/c++/4.4/cstdlib" 3
using ::ldiv_t;
# 105 "/usr/include/c++/4.4/cstdlib" 3
using ::abort;
# 106 "/usr/include/c++/4.4/cstdlib" 3
using ::abs;
# 107 "/usr/include/c++/4.4/cstdlib" 3
using ::atexit;
# 108 "/usr/include/c++/4.4/cstdlib" 3
using ::atof;
# 109 "/usr/include/c++/4.4/cstdlib" 3
using ::atoi;
# 110 "/usr/include/c++/4.4/cstdlib" 3
using ::atol;
# 111 "/usr/include/c++/4.4/cstdlib" 3
using ::bsearch;
# 112 "/usr/include/c++/4.4/cstdlib" 3
using ::calloc;
# 113 "/usr/include/c++/4.4/cstdlib" 3
using ::div;
# 114 "/usr/include/c++/4.4/cstdlib" 3
using ::exit;
# 115 "/usr/include/c++/4.4/cstdlib" 3
using ::free;
# 116 "/usr/include/c++/4.4/cstdlib" 3
using ::getenv;
# 117 "/usr/include/c++/4.4/cstdlib" 3
using ::labs;
# 118 "/usr/include/c++/4.4/cstdlib" 3
using ::ldiv;
# 119 "/usr/include/c++/4.4/cstdlib" 3
using ::malloc;
# 121 "/usr/include/c++/4.4/cstdlib" 3
using ::mblen;
# 122 "/usr/include/c++/4.4/cstdlib" 3
using ::mbstowcs;
# 123 "/usr/include/c++/4.4/cstdlib" 3
using ::mbtowc;
# 125 "/usr/include/c++/4.4/cstdlib" 3
using ::qsort;
# 126 "/usr/include/c++/4.4/cstdlib" 3
using ::rand;
# 127 "/usr/include/c++/4.4/cstdlib" 3
using ::realloc;
# 128 "/usr/include/c++/4.4/cstdlib" 3
using ::srand;
# 129 "/usr/include/c++/4.4/cstdlib" 3
using ::strtod;
# 130 "/usr/include/c++/4.4/cstdlib" 3
using ::strtol;
# 131 "/usr/include/c++/4.4/cstdlib" 3
using ::strtoul;
# 132 "/usr/include/c++/4.4/cstdlib" 3
using ::system;
# 134 "/usr/include/c++/4.4/cstdlib" 3
using ::wcstombs;
# 135 "/usr/include/c++/4.4/cstdlib" 3
using ::wctomb;
# 139 "/usr/include/c++/4.4/cstdlib" 3
inline long abs(long __i) { return labs(__i); }
# 142 "/usr/include/c++/4.4/cstdlib" 3
inline ldiv_t div(long __i, long __j) { return ldiv(__i, __j); }
# 144 "/usr/include/c++/4.4/cstdlib" 3
}
# 157 "/usr/include/c++/4.4/cstdlib" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {
# 160 "/usr/include/c++/4.4/cstdlib" 3
using ::lldiv_t;
# 166 "/usr/include/c++/4.4/cstdlib" 3
using ::_Exit;
# 170 "/usr/include/c++/4.4/cstdlib" 3
inline long long abs(long long __x) { return (__x >= (0)) ? __x : (-__x); }
# 173 "/usr/include/c++/4.4/cstdlib" 3
using ::llabs;
# 176 "/usr/include/c++/4.4/cstdlib" 3
inline lldiv_t div(long long __n, long long __d)
# 177 "/usr/include/c++/4.4/cstdlib" 3
{ lldiv_t __q; (__q.quot) = (__n / __d); (__q.rem) = (__n % __d); return __q; }
# 179 "/usr/include/c++/4.4/cstdlib" 3
using ::lldiv;
# 190 "/usr/include/c++/4.4/cstdlib" 3
using ::atoll;
# 191 "/usr/include/c++/4.4/cstdlib" 3
using ::strtoll;
# 192 "/usr/include/c++/4.4/cstdlib" 3
using ::strtoull;
# 194 "/usr/include/c++/4.4/cstdlib" 3
using ::strtof;
# 195 "/usr/include/c++/4.4/cstdlib" 3
using ::strtold;
# 197 "/usr/include/c++/4.4/cstdlib" 3
}
# 199 "/usr/include/c++/4.4/cstdlib" 3
namespace std __attribute__((visibility("default"))) {
# 202 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::lldiv_t;
# 204 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::_Exit;
# 205 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::abs;
# 207 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::llabs;
# 208 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::div;
# 209 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::lldiv;
# 211 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::atoll;
# 212 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::strtof;
# 213 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::strtoll;
# 214 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::strtoull;
# 215 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::strtold;
# 217 "/usr/include/c++/4.4/cstdlib" 3
}
# 497 "/usr/local/cuda/bin/../include/math_functions.h"
namespace __gnu_cxx {
# 499 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline long long abs(long long) __attribute__((visibility("default")));
# 500 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 502 "/usr/local/cuda/bin/../include/math_functions.h"
namespace std {
# 504 "/usr/local/cuda/bin/../include/math_functions.h"
template< class T> extern inline T __pow_helper(T, int);
# 505 "/usr/local/cuda/bin/../include/math_functions.h"
template< class T> extern inline T __cmath_power(T, unsigned);
# 506 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 508 "/usr/local/cuda/bin/../include/math_functions.h"
using std::abs;
# 509 "/usr/local/cuda/bin/../include/math_functions.h"
using std::fabs;
# 510 "/usr/local/cuda/bin/../include/math_functions.h"
using std::ceil;
# 511 "/usr/local/cuda/bin/../include/math_functions.h"
using std::floor;
# 512 "/usr/local/cuda/bin/../include/math_functions.h"
using std::sqrt;
# 513 "/usr/local/cuda/bin/../include/math_functions.h"
using std::pow;
# 514 "/usr/local/cuda/bin/../include/math_functions.h"
using std::log;
# 515 "/usr/local/cuda/bin/../include/math_functions.h"
using std::log10;
# 516 "/usr/local/cuda/bin/../include/math_functions.h"
using std::fmod;
# 517 "/usr/local/cuda/bin/../include/math_functions.h"
using std::modf;
# 518 "/usr/local/cuda/bin/../include/math_functions.h"
using std::exp;
# 519 "/usr/local/cuda/bin/../include/math_functions.h"
using std::frexp;
# 520 "/usr/local/cuda/bin/../include/math_functions.h"
using std::ldexp;
# 521 "/usr/local/cuda/bin/../include/math_functions.h"
using std::asin;
# 522 "/usr/local/cuda/bin/../include/math_functions.h"
using std::sin;
# 523 "/usr/local/cuda/bin/../include/math_functions.h"
using std::sinh;
# 524 "/usr/local/cuda/bin/../include/math_functions.h"
using std::acos;
# 525 "/usr/local/cuda/bin/../include/math_functions.h"
using std::cos;
# 526 "/usr/local/cuda/bin/../include/math_functions.h"
using std::cosh;
# 527 "/usr/local/cuda/bin/../include/math_functions.h"
using std::atan;
# 528 "/usr/local/cuda/bin/../include/math_functions.h"
using std::atan2;
# 529 "/usr/local/cuda/bin/../include/math_functions.h"
using std::tan;
# 530 "/usr/local/cuda/bin/../include/math_functions.h"
using std::tanh;
# 584 "/usr/local/cuda/bin/../include/math_functions.h"
namespace std {
# 587 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline long abs(long) __attribute__((visibility("default")));
# 588 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float abs(float) __attribute__((visibility("default")));
# 589 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline double abs(double) __attribute__((visibility("default")));
# 590 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float fabs(float) __attribute__((visibility("default")));
# 591 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float ceil(float) __attribute__((visibility("default")));
# 592 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float floor(float) __attribute__((visibility("default")));
# 593 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float sqrt(float) __attribute__((visibility("default")));
# 594 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float pow(float, float) __attribute__((visibility("default")));
# 595 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float pow(float, int) __attribute__((visibility("default")));
# 596 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline double pow(double, int) __attribute__((visibility("default")));
# 597 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float log(float) __attribute__((visibility("default")));
# 598 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float log10(float) __attribute__((visibility("default")));
# 599 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float fmod(float, float) __attribute__((visibility("default")));
# 600 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float modf(float, float *) __attribute__((visibility("default")));
# 601 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float exp(float) __attribute__((visibility("default")));
# 602 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float frexp(float, int *) __attribute__((visibility("default")));
# 603 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float ldexp(float, int) __attribute__((visibility("default")));
# 604 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float asin(float) __attribute__((visibility("default")));
# 605 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float sin(float) __attribute__((visibility("default")));
# 606 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float sinh(float) __attribute__((visibility("default")));
# 607 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float acos(float) __attribute__((visibility("default")));
# 608 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float cos(float) __attribute__((visibility("default")));
# 609 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float cosh(float) __attribute__((visibility("default")));
# 610 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float atan(float) __attribute__((visibility("default")));
# 611 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float atan2(float, float) __attribute__((visibility("default")));
# 612 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float tan(float) __attribute__((visibility("default")));
# 613 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float tanh(float) __attribute__((visibility("default")));
# 616 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 619 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float logb(float a)
# 620 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 621 "/usr/local/cuda/bin/../include/math_functions.h"
return logbf(a);
# 622 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 624 "/usr/local/cuda/bin/../include/math_functions.h"
static inline int ilogb(float a)
# 625 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 626 "/usr/local/cuda/bin/../include/math_functions.h"
return ilogbf(a);
# 627 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 629 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float scalbn(float a, int b)
# 630 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 631 "/usr/local/cuda/bin/../include/math_functions.h"
return scalbnf(a, b);
# 632 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 634 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float scalbln(float a, long b)
# 635 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 636 "/usr/local/cuda/bin/../include/math_functions.h"
return scalblnf(a, b);
# 637 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 639 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float exp2(float a)
# 640 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 641 "/usr/local/cuda/bin/../include/math_functions.h"
return exp2f(a);
# 642 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 644 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float exp10(float a)
# 645 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 646 "/usr/local/cuda/bin/../include/math_functions.h"
return exp10f(a);
# 647 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 649 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float expm1(float a)
# 650 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 651 "/usr/local/cuda/bin/../include/math_functions.h"
return expm1f(a);
# 652 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 654 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float log2(float a)
# 655 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 656 "/usr/local/cuda/bin/../include/math_functions.h"
return log2f(a);
# 657 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 659 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float log1p(float a)
# 660 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 661 "/usr/local/cuda/bin/../include/math_functions.h"
return log1pf(a);
# 662 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 664 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float rsqrt(float a)
# 665 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 666 "/usr/local/cuda/bin/../include/math_functions.h"
return rsqrtf(a);
# 667 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 669 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float acosh(float a)
# 670 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 671 "/usr/local/cuda/bin/../include/math_functions.h"
return acoshf(a);
# 672 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 674 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float asinh(float a)
# 675 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 676 "/usr/local/cuda/bin/../include/math_functions.h"
return asinhf(a);
# 677 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 679 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float atanh(float a)
# 680 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 681 "/usr/local/cuda/bin/../include/math_functions.h"
return atanhf(a);
# 682 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 684 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float hypot(float a, float b)
# 685 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 686 "/usr/local/cuda/bin/../include/math_functions.h"
return hypotf(a, b);
# 687 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 689 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float cbrt(float a)
# 690 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 691 "/usr/local/cuda/bin/../include/math_functions.h"
return cbrtf(a);
# 692 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 694 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float rcbrt(float a)
# 695 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 696 "/usr/local/cuda/bin/../include/math_functions.h"
return rcbrtf(a);
# 697 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 699 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float sinpi(float a)
# 700 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 701 "/usr/local/cuda/bin/../include/math_functions.h"
return sinpif(a);
# 702 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 704 "/usr/local/cuda/bin/../include/math_functions.h"
static inline void sincos(float a, float *sptr, float *cptr)
# 705 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 706 "/usr/local/cuda/bin/../include/math_functions.h"
sincosf(a, sptr, cptr);
# 707 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 709 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float erf(float a)
# 710 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 711 "/usr/local/cuda/bin/../include/math_functions.h"
return erff(a);
# 712 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 714 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float erfinv(float a)
# 715 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 716 "/usr/local/cuda/bin/../include/math_functions.h"
return erfinvf(a);
# 717 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 719 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float erfc(float a)
# 720 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 721 "/usr/local/cuda/bin/../include/math_functions.h"
return erfcf(a);
# 722 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 724 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float erfcinv(float a)
# 725 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 726 "/usr/local/cuda/bin/../include/math_functions.h"
return erfcinvf(a);
# 727 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 729 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float lgamma(float a)
# 730 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 731 "/usr/local/cuda/bin/../include/math_functions.h"
return lgammaf(a);
# 732 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 734 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float tgamma(float a)
# 735 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 736 "/usr/local/cuda/bin/../include/math_functions.h"
return tgammaf(a);
# 737 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 739 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float copysign(float a, float b)
# 740 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 741 "/usr/local/cuda/bin/../include/math_functions.h"
return copysignf(a, b);
# 742 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 744 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double copysign(double a, float b)
# 745 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 746 "/usr/local/cuda/bin/../include/math_functions.h"
return copysign(a, (double)b);
# 747 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 749 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float copysign(float a, double b)
# 750 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 751 "/usr/local/cuda/bin/../include/math_functions.h"
return copysignf(a, (float)b);
# 752 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 754 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float nextafter(float a, float b)
# 755 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 756 "/usr/local/cuda/bin/../include/math_functions.h"
return nextafterf(a, b);
# 757 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 759 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float remainder(float a, float b)
# 760 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 761 "/usr/local/cuda/bin/../include/math_functions.h"
return remainderf(a, b);
# 762 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 764 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float remquo(float a, float b, int *quo)
# 765 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 766 "/usr/local/cuda/bin/../include/math_functions.h"
return remquof(a, b, quo);
# 767 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 769 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float round(float a)
# 770 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 771 "/usr/local/cuda/bin/../include/math_functions.h"
return roundf(a);
# 772 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 774 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long lround(float a)
# 775 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 776 "/usr/local/cuda/bin/../include/math_functions.h"
return lroundf(a);
# 777 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 779 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long long llround(float a)
# 780 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 781 "/usr/local/cuda/bin/../include/math_functions.h"
return llroundf(a);
# 782 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 784 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float trunc(float a)
# 785 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 786 "/usr/local/cuda/bin/../include/math_functions.h"
return truncf(a);
# 787 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 789 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float rint(float a)
# 790 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 791 "/usr/local/cuda/bin/../include/math_functions.h"
return rintf(a);
# 792 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 794 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long lrint(float a)
# 795 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 796 "/usr/local/cuda/bin/../include/math_functions.h"
return lrintf(a);
# 797 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 799 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long long llrint(float a)
# 800 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 801 "/usr/local/cuda/bin/../include/math_functions.h"
return llrintf(a);
# 802 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 804 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float nearbyint(float a)
# 805 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 806 "/usr/local/cuda/bin/../include/math_functions.h"
return nearbyintf(a);
# 807 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 809 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float fdim(float a, float b)
# 810 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 811 "/usr/local/cuda/bin/../include/math_functions.h"
return fdimf(a, b);
# 812 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 814 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float fma(float a, float b, float c)
# 815 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 816 "/usr/local/cuda/bin/../include/math_functions.h"
return fmaf(a, b, c);
# 817 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 819 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float fmax(float a, float b)
# 820 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 821 "/usr/local/cuda/bin/../include/math_functions.h"
return fmaxf(a, b);
# 822 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 824 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float fmin(float a, float b)
# 825 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 826 "/usr/local/cuda/bin/../include/math_functions.h"
return fminf(a, b);
# 827 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 829 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned min(unsigned a, unsigned b)
# 830 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 831 "/usr/local/cuda/bin/../include/math_functions.h"
return umin(a, b);
# 832 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 834 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned min(int a, unsigned b)
# 835 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 836 "/usr/local/cuda/bin/../include/math_functions.h"
return umin((unsigned)a, b);
# 837 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 839 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned min(unsigned a, int b)
# 840 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 841 "/usr/local/cuda/bin/../include/math_functions.h"
return umin(a, (unsigned)b);
# 842 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 844 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long long min(long long a, long long b)
# 845 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 846 "/usr/local/cuda/bin/../include/math_functions.h"
return llmin(a, b);
# 847 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 849 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long min(unsigned long long a, unsigned long long b)
# 850 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 851 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmin(a, b);
# 852 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 854 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long min(long long a, unsigned long long b)
# 855 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 856 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmin((unsigned long long)a, b);
# 857 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 859 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long min(unsigned long long a, long long b)
# 860 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 861 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmin(a, (unsigned long long)b);
# 862 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 864 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float min(float a, float b)
# 865 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 866 "/usr/local/cuda/bin/../include/math_functions.h"
return fminf(a, b);
# 867 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 869 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double min(double a, double b)
# 870 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 871 "/usr/local/cuda/bin/../include/math_functions.h"
return fmin(a, b);
# 872 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 874 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double min(float a, double b)
# 875 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 876 "/usr/local/cuda/bin/../include/math_functions.h"
return fmin((double)a, b);
# 877 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 879 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double min(double a, float b)
# 880 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 881 "/usr/local/cuda/bin/../include/math_functions.h"
return fmin(a, (double)b);
# 882 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 884 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned max(unsigned a, unsigned b)
# 885 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 886 "/usr/local/cuda/bin/../include/math_functions.h"
return umax(a, b);
# 887 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 889 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned max(int a, unsigned b)
# 890 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 891 "/usr/local/cuda/bin/../include/math_functions.h"
return umax((unsigned)a, b);
# 892 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 894 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned max(unsigned a, int b)
# 895 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 896 "/usr/local/cuda/bin/../include/math_functions.h"
return umax(a, (unsigned)b);
# 897 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 899 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long long max(long long a, long long b)
# 900 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 901 "/usr/local/cuda/bin/../include/math_functions.h"
return llmax(a, b);
# 902 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 904 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long max(unsigned long long a, unsigned long long b)
# 905 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 906 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmax(a, b);
# 907 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 909 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long max(long long a, unsigned long long b)
# 910 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 911 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmax((unsigned long long)a, b);
# 912 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 914 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long max(unsigned long long a, long long b)
# 915 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 916 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmax(a, (unsigned long long)b);
# 917 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 919 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float max(float a, float b)
# 920 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 921 "/usr/local/cuda/bin/../include/math_functions.h"
return fmaxf(a, b);
# 922 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 924 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double max(double a, double b)
# 925 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 926 "/usr/local/cuda/bin/../include/math_functions.h"
return fmax(a, b);
# 927 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 929 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double max(float a, double b)
# 930 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 931 "/usr/local/cuda/bin/../include/math_functions.h"
return fmax((double)a, b);
# 932 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 934 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double max(double a, float b)
# 935 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 936 "/usr/local/cuda/bin/../include/math_functions.h"
return fmax(a, (double)b);
# 937 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 60 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
template< class T, int dim = 1>
# 61 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
struct surface : public surfaceReference {
# 63 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
surface()
# 64 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
{
# 65 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
(channelDesc) = cudaCreateChannelDesc< T> ();
# 66 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
}
# 68 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
surface(cudaChannelFormatDesc desc)
# 69 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
{
# 70 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
(channelDesc) = desc;
# 71 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
}
# 72 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
};
# 75 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
template< int dim>
# 76 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
struct surface< void, dim> : public surfaceReference {
# 78 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
surface()
# 79 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
{
# 80 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
(channelDesc) = cudaCreateChannelDesc< void> ();
# 81 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
}
# 82 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
};
# 60 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
template< class T, int dim = 1, cudaTextureReadMode mode = cudaReadModeElementType>
# 61 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
struct texture : public textureReference {
# 63 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
texture(int norm = 0, cudaTextureFilterMode
# 64 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
fMode = cudaFilterModePoint, cudaTextureAddressMode
# 65 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
aMode = cudaAddressModeClamp)
# 66 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
{
# 67 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(normalized) = norm;
# 68 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(filterMode) = fMode;
# 69 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[0]) = aMode;
# 70 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[1]) = aMode;
# 71 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[2]) = aMode;
# 72 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(channelDesc) = cudaCreateChannelDesc< T> ();
# 73 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
}
# 75 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
texture(int norm, cudaTextureFilterMode
# 76 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
fMode, cudaTextureAddressMode
# 77 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
aMode, cudaChannelFormatDesc
# 78 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
desc)
# 79 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
{
# 80 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(normalized) = norm;
# 81 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(filterMode) = fMode;
# 82 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[0]) = aMode;
# 83 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[1]) = aMode;
# 84 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[2]) = aMode;
# 85 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(channelDesc) = desc;
# 86 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
}
# 87 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
};
# 324 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline int mulhi(int a, int b)
# 325 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 327 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 329 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(unsigned a, unsigned b)
# 330 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 332 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 334 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(int a, unsigned b)
# 335 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 337 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 339 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(unsigned a, int b)
# 340 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 342 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 344 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline long long mul64hi(long long a, long long b)
# 345 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 347 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 349 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, unsigned long long b)
# 350 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 352 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 354 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(long long a, unsigned long long b)
# 355 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 357 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 359 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, long long b)
# 360 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 362 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 364 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline int float_as_int(float a)
# 365 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 367 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 369 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline float int_as_float(int a)
# 370 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 372 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 374 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline float saturate(float a)
# 375 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 377 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 379 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline int mul24(int a, int b)
# 380 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 382 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 384 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned umul24(unsigned a, unsigned b)
# 385 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 387 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 389 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void trap()
# 390 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 392 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 394 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void brkpt(int c)
# 395 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 397 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 399 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void syncthreads()
# 400 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 402 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 404 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void prof_trigger(int e)
# 405 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 422 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 424 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void threadfence(bool global = true)
# 425 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 427 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 429 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline int float2int(float a, cudaRoundMode mode = cudaRoundZero)
# 430 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 435 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 437 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned float2uint(float a, cudaRoundMode mode = cudaRoundZero)
# 438 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 443 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 445 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline float int2float(int a, cudaRoundMode mode = cudaRoundNearest)
# 446 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 451 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 453 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline float uint2float(unsigned a, cudaRoundMode mode = cudaRoundNearest)
# 454 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 459 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 102 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicAdd(int *address, int val)
# 103 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 105 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 107 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAdd(unsigned *address, unsigned val)
# 108 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 110 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 112 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicSub(int *address, int val)
# 113 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 115 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 117 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicSub(unsigned *address, unsigned val)
# 118 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 120 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 122 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicExch(int *address, int val)
# 123 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 125 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 127 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicExch(unsigned *address, unsigned val)
# 128 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 130 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 132 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline float atomicExch(float *address, float val)
# 133 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 135 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 137 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicMin(int *address, int val)
# 138 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 140 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 142 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMin(unsigned *address, unsigned val)
# 143 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 145 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 147 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicMax(int *address, int val)
# 148 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 150 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 152 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMax(unsigned *address, unsigned val)
# 153 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 155 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 157 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicInc(unsigned *address, unsigned val)
# 158 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 160 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 162 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicDec(unsigned *address, unsigned val)
# 163 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 165 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 167 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicAnd(int *address, int val)
# 168 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 170 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 172 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAnd(unsigned *address, unsigned val)
# 173 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 175 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 177 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicOr(int *address, int val)
# 178 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 180 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 182 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicOr(unsigned *address, unsigned val)
# 183 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 185 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 187 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicXor(int *address, int val)
# 188 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 190 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 192 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicXor(unsigned *address, unsigned val)
# 193 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 195 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 197 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicCAS(int *address, int compare, int val)
# 198 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 200 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 202 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicCAS(unsigned *address, unsigned compare, unsigned val)
# 203 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 205 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 75 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAdd(unsigned long long *address, unsigned long long val)
# 76 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 78 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 80 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicExch(unsigned long long *address, unsigned long long val)
# 81 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 83 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 85 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicCAS(unsigned long long *address, unsigned long long compare, unsigned long long val)
# 86 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 88 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 90 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline bool any(bool cond)
# 91 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 93 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 95 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline bool all(bool cond)
# 96 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 98 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 170 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double fma(double a, double b, double c, cudaRoundMode mode)
# 171 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 176 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 178 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double dmul(double a, double b, cudaRoundMode mode = cudaRoundNearest)
# 179 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 184 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 186 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double dadd(double a, double b, cudaRoundMode mode = cudaRoundNearest)
# 187 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 192 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 194 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline int double2int(double a, cudaRoundMode mode = cudaRoundZero)
# 195 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 200 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 202 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline unsigned double2uint(double a, cudaRoundMode mode = cudaRoundZero)
# 203 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 208 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 210 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline long long double2ll(double a, cudaRoundMode mode = cudaRoundZero)
# 211 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 216 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 218 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline unsigned long long double2ull(double a, cudaRoundMode mode = cudaRoundZero)
# 219 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 224 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 226 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double ll2double(long long a, cudaRoundMode mode = cudaRoundNearest)
# 227 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 232 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 234 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double ull2double(unsigned long long a, cudaRoundMode mode = cudaRoundNearest)
# 235 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 240 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 242 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double int2double(int a, cudaRoundMode mode = cudaRoundNearest)
# 243 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 245 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 247 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double uint2double(unsigned a, cudaRoundMode mode = cudaRoundNearest)
# 248 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 250 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 252 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double float2double(float a, cudaRoundMode mode = cudaRoundNearest)
# 253 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 255 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 66 "/usr/local/cuda/bin/../include/sm_20_atomic_functions.h"
__attribute__((unused)) static inline float atomicAdd(float *address, float val)
# 67 "/usr/local/cuda/bin/../include/sm_20_atomic_functions.h"
{int volatile ___ = 1;
# 69 "/usr/local/cuda/bin/../include/sm_20_atomic_functions.h"
exit(___);}
# 124 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline unsigned ballot(bool pred)
# 125 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
{int volatile ___ = 1;
# 127 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
exit(___);}
# 129 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline int syncthreads_count(bool pred)
# 130 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
{int volatile ___ = 1;
# 132 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
exit(___);}
# 134 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_and(bool pred)
# 135 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
{int volatile ___ = 1;
# 137 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
exit(___);}
# 139 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_or(bool pred)
# 140 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
{int volatile ___ = 1;
# 142 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
exit(___);}
# 97 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 98 "/usr/local/cuda/bin/../include/surface_functions.h"
surf1Dread(T *res, surface< void, 1> surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 99 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 106 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 108 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T
# 109 "/usr/local/cuda/bin/../include/surface_functions.h"
surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 110 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 116 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 118 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 119 "/usr/local/cuda/bin/../include/surface_functions.h"
surf1Dread(T *res, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 120 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 122 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 125 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 126 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 128 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 131 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline signed char surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 132 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 134 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 137 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned char surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 138 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 140 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 143 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 144 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 146 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 149 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 150 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 152 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 155 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 156 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 160 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 163 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 164 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 166 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 169 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 170 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 174 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 177 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 178 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 180 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 183 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 184 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 186 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 189 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned short surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 190 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 192 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 195 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 196 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 198 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 201 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 202 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 204 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 207 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 208 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 212 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 215 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 216 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 218 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 221 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 222 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 226 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 229 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 230 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 232 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 235 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 236 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 238 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 241 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 242 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 244 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 247 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 248 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 250 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 253 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 254 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 256 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 259 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 260 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 264 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 267 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 268 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 270 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 273 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 274 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 278 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 281 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 282 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 284 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 287 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline long long surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 288 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 290 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 293 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned long long surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 294 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 296 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 299 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline longlong1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 300 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 302 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 305 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 306 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 308 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 311 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline longlong2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 312 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 316 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 319 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 320 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 322 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 385 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 386 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 388 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 391 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 392 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 394 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 397 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 398 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 402 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 405 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 406 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 410 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 457 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 458 "/usr/local/cuda/bin/../include/surface_functions.h"
surf2Dread(T *res, surface< void, 2> surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 459 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 466 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 468 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T
# 469 "/usr/local/cuda/bin/../include/surface_functions.h"
surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 470 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 476 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 478 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 479 "/usr/local/cuda/bin/../include/surface_functions.h"
surf2Dread(T *res, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 480 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 482 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 485 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 486 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 488 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 491 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline signed char surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 492 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 494 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 497 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned char surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 498 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 500 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 503 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 504 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 506 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 509 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 510 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 512 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 515 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 516 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 520 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 523 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 524 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 526 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 529 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 530 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 534 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 537 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 538 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 540 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 543 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 544 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 546 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 549 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned short surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 550 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 552 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 555 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 556 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 558 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 561 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 562 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 564 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 567 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 568 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 572 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 575 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 576 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 578 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 581 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 582 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 586 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 589 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 590 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 592 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 595 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 596 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 598 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 601 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 602 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 604 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 607 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 608 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 610 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 613 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 614 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 616 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 619 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 620 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 624 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 627 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 628 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 630 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 633 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 634 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 638 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 641 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 642 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 644 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 647 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline long long surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 648 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 650 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 653 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned long long surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 654 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 656 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 659 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline longlong1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 660 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 662 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 665 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 666 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 668 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 671 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline longlong2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 672 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 676 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 679 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 680 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 682 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 745 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 746 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 748 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 751 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 752 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 754 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 757 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 758 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 762 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 765 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 766 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 770 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 817 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 818 "/usr/local/cuda/bin/../include/surface_functions.h"
surf1Dwrite(T val, surface< void, 1> surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 819 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 837 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 839 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 840 "/usr/local/cuda/bin/../include/surface_functions.h"
surf1Dwrite(T val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 841 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 843 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 846 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 847 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 849 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 851 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(signed char val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 852 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 854 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 856 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned char val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 857 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 859 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 861 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 862 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 864 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 866 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 867 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 869 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 871 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 872 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 874 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 876 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 877 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 879 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 881 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 882 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 884 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 886 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 887 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 889 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 891 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 892 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 894 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 896 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned short val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 897 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 899 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 901 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 902 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 904 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 906 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 907 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 909 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 911 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 912 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 914 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 916 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 917 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 919 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 921 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 922 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 924 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 926 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 927 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 929 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 931 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 932 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 934 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 936 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 937 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 939 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 941 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 942 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 944 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 946 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 947 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 949 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 951 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 952 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 954 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 956 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 957 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 959 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 961 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 962 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 964 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 966 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 967 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 969 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 971 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(long long val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 972 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 974 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 976 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned long long val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 977 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 979 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 981 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(longlong1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 982 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 984 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 986 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ulonglong1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 987 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 989 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 991 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(longlong2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 992 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 994 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 996 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ulonglong2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 997 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 999 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1045 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1046 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1048 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1050 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1051 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1053 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1055 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1056 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1058 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1060 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1061 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1063 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1110 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 1111 "/usr/local/cuda/bin/../include/surface_functions.h"
surf2Dwrite(T val, surface< void, 2> surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1112 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1130 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1132 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 1133 "/usr/local/cuda/bin/../include/surface_functions.h"
surf2Dwrite(T val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1134 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1136 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1139 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1140 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1142 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1144 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(signed char val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1145 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1147 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1149 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned char val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1150 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1152 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1154 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1155 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1157 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1159 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1160 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1162 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1164 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1165 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1167 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1169 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1170 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1172 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1174 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1175 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1177 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1179 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1180 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1182 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1184 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1185 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1187 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1189 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned short val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1190 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1192 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1194 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1195 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1197 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1199 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1200 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1202 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1204 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1205 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1207 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1209 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1210 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1212 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1214 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1215 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1217 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1219 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1220 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1222 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1224 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1225 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1227 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1229 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1230 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1232 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1234 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1235 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1237 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1239 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1240 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1242 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1244 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1245 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1247 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1249 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1250 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1252 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1254 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1255 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1257 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1259 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1260 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1262 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1264 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(long long val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1265 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1267 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1269 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned long long val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1270 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1272 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1274 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(longlong1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1275 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1277 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1279 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ulonglong1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1280 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1282 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1284 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(longlong2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1285 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1287 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1289 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ulonglong2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1290 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1292 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1338 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1339 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1341 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1343 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1344 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1346 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1348 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1349 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1351 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1353 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1354 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1356 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 61 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, cudaTextureReadMode readMode> __attribute__((unused)) extern uint4 __utexfetchi(texture< T, 1, readMode> , int4);
# 63 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, cudaTextureReadMode readMode> __attribute__((unused)) extern int4 __itexfetchi(texture< T, 1, readMode> , int4);
# 65 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, cudaTextureReadMode readMode> __attribute__((unused)) extern float4 __ftexfetchi(texture< T, 1, readMode> , int4);
# 68 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, int dim, cudaTextureReadMode readMode> __attribute__((unused)) extern uint4 __utexfetch(texture< T, dim, readMode> , float4, int = dim);
# 70 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, int dim, cudaTextureReadMode readMode> __attribute__((unused)) extern int4 __itexfetch(texture< T, dim, readMode> , float4, int = dim);
# 72 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, int dim, cudaTextureReadMode readMode> __attribute__((unused)) extern float4 __ftexfetch(texture< T, dim, readMode> , float4, int = dim);
# 80 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex1Dfetch(texture< char, 1, cudaReadModeElementType> t, int x)
# 81 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 89 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 91 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex1Dfetch(texture< signed char, 1, cudaReadModeElementType> t, int x)
# 92 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 96 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 98 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex1Dfetch(texture< unsigned char, 1, cudaReadModeElementType> t, int x)
# 99 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 103 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 105 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex1Dfetch(texture< char1, 1, cudaReadModeElementType> t, int x)
# 106 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 110 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 112 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex1Dfetch(texture< uchar1, 1, cudaReadModeElementType> t, int x)
# 113 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 117 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 119 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex1Dfetch(texture< char2, 1, cudaReadModeElementType> t, int x)
# 120 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 124 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 126 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex1Dfetch(texture< uchar2, 1, cudaReadModeElementType> t, int x)
# 127 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 131 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 133 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex1Dfetch(texture< char4, 1, cudaReadModeElementType> t, int x)
# 134 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 138 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 140 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex1Dfetch(texture< uchar4, 1, cudaReadModeElementType> t, int x)
# 141 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 145 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 153 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex1Dfetch(texture< short, 1, cudaReadModeElementType> t, int x)
# 154 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 158 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 160 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex1Dfetch(texture< unsigned short, 1, cudaReadModeElementType> t, int x)
# 161 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 165 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 167 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex1Dfetch(texture< short1, 1, cudaReadModeElementType> t, int x)
# 168 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 172 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 174 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex1Dfetch(texture< ushort1, 1, cudaReadModeElementType> t, int x)
# 175 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 179 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 181 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex1Dfetch(texture< short2, 1, cudaReadModeElementType> t, int x)
# 182 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 186 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 188 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex1Dfetch(texture< ushort2, 1, cudaReadModeElementType> t, int x)
# 189 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 193 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 195 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex1Dfetch(texture< short4, 1, cudaReadModeElementType> t, int x)
# 196 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 200 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 202 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex1Dfetch(texture< ushort4, 1, cudaReadModeElementType> t, int x)
# 203 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 207 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 215 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex1Dfetch(texture< int, 1, cudaReadModeElementType> t, int x)
# 216 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 220 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 222 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex1Dfetch(texture< unsigned, 1, cudaReadModeElementType> t, int x)
# 223 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 227 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 229 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex1Dfetch(texture< int1, 1, cudaReadModeElementType> t, int x)
# 230 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 234 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 236 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex1Dfetch(texture< uint1, 1, cudaReadModeElementType> t, int x)
# 237 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 241 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 243 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex1Dfetch(texture< int2, 1, cudaReadModeElementType> t, int x)
# 244 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 248 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 250 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex1Dfetch(texture< uint2, 1, cudaReadModeElementType> t, int x)
# 251 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 255 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 257 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex1Dfetch(texture< int4, 1, cudaReadModeElementType> t, int x)
# 258 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 262 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 264 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex1Dfetch(texture< uint4, 1, cudaReadModeElementType> t, int x)
# 265 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 269 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 343 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< float, 1, cudaReadModeElementType> t, int x)
# 344 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 348 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 350 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< float1, 1, cudaReadModeElementType> t, int x)
# 351 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 355 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 357 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< float2, 1, cudaReadModeElementType> t, int x)
# 358 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 362 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 364 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< float4, 1, cudaReadModeElementType> t, int x)
# 365 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 369 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 377 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< char, 1, cudaReadModeNormalizedFloat> t, int x)
# 378 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 387 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 389 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< signed char, 1, cudaReadModeNormalizedFloat> t, int x)
# 390 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 395 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 397 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< unsigned char, 1, cudaReadModeNormalizedFloat> t, int x)
# 398 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 403 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 405 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< char1, 1, cudaReadModeNormalizedFloat> t, int x)
# 406 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 411 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 413 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< uchar1, 1, cudaReadModeNormalizedFloat> t, int x)
# 414 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 419 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 421 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< char2, 1, cudaReadModeNormalizedFloat> t, int x)
# 422 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 427 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 429 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< uchar2, 1, cudaReadModeNormalizedFloat> t, int x)
# 430 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 435 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 437 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< char4, 1, cudaReadModeNormalizedFloat> t, int x)
# 438 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 443 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 445 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< uchar4, 1, cudaReadModeNormalizedFloat> t, int x)
# 446 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 451 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 459 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< short, 1, cudaReadModeNormalizedFloat> t, int x)
# 460 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 465 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 467 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< unsigned short, 1, cudaReadModeNormalizedFloat> t, int x)
# 468 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 473 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 475 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< short1, 1, cudaReadModeNormalizedFloat> t, int x)
# 476 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 481 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 483 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< ushort1, 1, cudaReadModeNormalizedFloat> t, int x)
# 484 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 489 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 491 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< short2, 1, cudaReadModeNormalizedFloat> t, int x)
# 492 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 497 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 499 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< ushort2, 1, cudaReadModeNormalizedFloat> t, int x)
# 500 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 505 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 507 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< short4, 1, cudaReadModeNormalizedFloat> t, int x)
# 508 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 513 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 515 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< ushort4, 1, cudaReadModeNormalizedFloat> t, int x)
# 516 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 521 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 529 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex1D(texture< char, 1, cudaReadModeElementType> t, float x)
# 530 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 538 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 540 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex1D(texture< signed char, 1, cudaReadModeElementType> t, float x)
# 541 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 545 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 547 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex1D(texture< unsigned char, 1, cudaReadModeElementType> t, float x)
# 548 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 552 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 554 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex1D(texture< char1, 1, cudaReadModeElementType> t, float x)
# 555 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 559 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 561 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex1D(texture< uchar1, 1, cudaReadModeElementType> t, float x)
# 562 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 566 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 568 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex1D(texture< char2, 1, cudaReadModeElementType> t, float x)
# 569 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 573 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 575 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex1D(texture< uchar2, 1, cudaReadModeElementType> t, float x)
# 576 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 580 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 582 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex1D(texture< char4, 1, cudaReadModeElementType> t, float x)
# 583 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 587 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 589 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex1D(texture< uchar4, 1, cudaReadModeElementType> t, float x)
# 590 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 594 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 602 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex1D(texture< short, 1, cudaReadModeElementType> t, float x)
# 603 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 607 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 609 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex1D(texture< unsigned short, 1, cudaReadModeElementType> t, float x)
# 610 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 614 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 616 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex1D(texture< short1, 1, cudaReadModeElementType> t, float x)
# 617 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 621 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 623 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex1D(texture< ushort1, 1, cudaReadModeElementType> t, float x)
# 624 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 628 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 630 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex1D(texture< short2, 1, cudaReadModeElementType> t, float x)
# 631 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 635 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 637 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex1D(texture< ushort2, 1, cudaReadModeElementType> t, float x)
# 638 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 642 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 644 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex1D(texture< short4, 1, cudaReadModeElementType> t, float x)
# 645 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 649 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 651 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex1D(texture< ushort4, 1, cudaReadModeElementType> t, float x)
# 652 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 656 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 664 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex1D(texture< int, 1, cudaReadModeElementType> t, float x)
# 665 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 669 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 671 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex1D(texture< unsigned, 1, cudaReadModeElementType> t, float x)
# 672 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 676 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 678 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex1D(texture< int1, 1, cudaReadModeElementType> t, float x)
# 679 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 683 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 685 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex1D(texture< uint1, 1, cudaReadModeElementType> t, float x)
# 686 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 690 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 692 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex1D(texture< int2, 1, cudaReadModeElementType> t, float x)
# 693 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 697 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 699 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex1D(texture< uint2, 1, cudaReadModeElementType> t, float x)
# 700 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 704 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 706 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex1D(texture< int4, 1, cudaReadModeElementType> t, float x)
# 707 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 711 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 713 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex1D(texture< uint4, 1, cudaReadModeElementType> t, float x)
# 714 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 718 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 798 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< float, 1, cudaReadModeElementType> t, float x)
# 799 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 803 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 805 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< float1, 1, cudaReadModeElementType> t, float x)
# 806 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 810 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 812 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< float2, 1, cudaReadModeElementType> t, float x)
# 813 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 817 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 819 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< float4, 1, cudaReadModeElementType> t, float x)
# 820 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 824 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 832 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< char, 1, cudaReadModeNormalizedFloat> t, float x)
# 833 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 842 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 844 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< signed char, 1, cudaReadModeNormalizedFloat> t, float x)
# 845 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 850 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 852 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< unsigned char, 1, cudaReadModeNormalizedFloat> t, float x)
# 853 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 858 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 860 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< char1, 1, cudaReadModeNormalizedFloat> t, float x)
# 861 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 866 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 868 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< uchar1, 1, cudaReadModeNormalizedFloat> t, float x)
# 869 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 874 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 876 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< char2, 1, cudaReadModeNormalizedFloat> t, float x)
# 877 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 882 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 884 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< uchar2, 1, cudaReadModeNormalizedFloat> t, float x)
# 885 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 890 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 892 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< char4, 1, cudaReadModeNormalizedFloat> t, float x)
# 893 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 898 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 900 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< uchar4, 1, cudaReadModeNormalizedFloat> t, float x)
# 901 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 906 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 914 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< short, 1, cudaReadModeNormalizedFloat> t, float x)
# 915 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 920 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 922 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< unsigned short, 1, cudaReadModeNormalizedFloat> t, float x)
# 923 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 928 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 930 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< short1, 1, cudaReadModeNormalizedFloat> t, float x)
# 931 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 936 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 938 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< ushort1, 1, cudaReadModeNormalizedFloat> t, float x)
# 939 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 944 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 946 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< short2, 1, cudaReadModeNormalizedFloat> t, float x)
# 947 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 952 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 954 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< ushort2, 1, cudaReadModeNormalizedFloat> t, float x)
# 955 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 960 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 962 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< short4, 1, cudaReadModeNormalizedFloat> t, float x)
# 963 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 968 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 970 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< ushort4, 1, cudaReadModeNormalizedFloat> t, float x)
# 971 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 976 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 984 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex2D(texture< char, 2, cudaReadModeElementType> t, float x, float y)
# 985 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 993 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 995 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex2D(texture< signed char, 2, cudaReadModeElementType> t, float x, float y)
# 996 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1000 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1002 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex2D(texture< unsigned char, 2, cudaReadModeElementType> t, float x, float y)
# 1003 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1007 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1009 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex2D(texture< char1, 2, cudaReadModeElementType> t, float x, float y)
# 1010 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1014 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1016 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex2D(texture< uchar1, 2, cudaReadModeElementType> t, float x, float y)
# 1017 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1021 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1023 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex2D(texture< char2, 2, cudaReadModeElementType> t, float x, float y)
# 1024 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1028 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1030 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex2D(texture< uchar2, 2, cudaReadModeElementType> t, float x, float y)
# 1031 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1035 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1037 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2D(texture< char4, 2, cudaReadModeElementType> t, float x, float y)
# 1038 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1042 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1044 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2D(texture< uchar4, 2, cudaReadModeElementType> t, float x, float y)
# 1045 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1049 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1057 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex2D(texture< short, 2, cudaReadModeElementType> t, float x, float y)
# 1058 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1062 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1064 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex2D(texture< unsigned short, 2, cudaReadModeElementType> t, float x, float y)
# 1065 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1069 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1071 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex2D(texture< short1, 2, cudaReadModeElementType> t, float x, float y)
# 1072 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1076 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1078 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex2D(texture< ushort1, 2, cudaReadModeElementType> t, float x, float y)
# 1079 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1083 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1085 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex2D(texture< short2, 2, cudaReadModeElementType> t, float x, float y)
# 1086 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1090 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1092 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex2D(texture< ushort2, 2, cudaReadModeElementType> t, float x, float y)
# 1093 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1097 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1099 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2D(texture< short4, 2, cudaReadModeElementType> t, float x, float y)
# 1100 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1104 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1106 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2D(texture< ushort4, 2, cudaReadModeElementType> t, float x, float y)
# 1107 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1111 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1119 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex2D(texture< int, 2, cudaReadModeElementType> t, float x, float y)
# 1120 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1124 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1126 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex2D(texture< unsigned, 2, cudaReadModeElementType> t, float x, float y)
# 1127 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1131 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1133 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex2D(texture< int1, 2, cudaReadModeElementType> t, float x, float y)
# 1134 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1138 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1140 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex2D(texture< uint1, 2, cudaReadModeElementType> t, float x, float y)
# 1141 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1145 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1147 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex2D(texture< int2, 2, cudaReadModeElementType> t, float x, float y)
# 1148 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1152 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1154 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex2D(texture< uint2, 2, cudaReadModeElementType> t, float x, float y)
# 1155 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1159 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1161 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2D(texture< int4, 2, cudaReadModeElementType> t, float x, float y)
# 1162 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1166 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1168 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2D(texture< uint4, 2, cudaReadModeElementType> t, float x, float y)
# 1169 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1173 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1247 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< float, 2, cudaReadModeElementType> t, float x, float y)
# 1248 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1252 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1254 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< float1, 2, cudaReadModeElementType> t, float x, float y)
# 1255 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1259 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1261 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< float2, 2, cudaReadModeElementType> t, float x, float y)
# 1262 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1266 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1268 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< float4, 2, cudaReadModeElementType> t, float x, float y)
# 1269 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1273 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1281 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< char, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1282 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1291 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1293 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< signed char, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1294 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1299 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1301 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< unsigned char, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1302 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1307 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1309 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< char1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1310 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1315 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1317 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< uchar1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1318 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1323 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1325 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< char2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1326 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1331 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1333 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< uchar2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1334 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1339 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1341 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< char4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1342 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1347 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1349 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< uchar4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1350 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1355 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1363 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< short, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1364 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1369 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1371 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< unsigned short, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1372 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1377 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1379 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< short1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1380 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1385 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1387 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< ushort1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1388 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1393 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1395 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< short2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1396 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1401 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1403 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< ushort2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1404 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1409 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1411 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< short4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1412 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1417 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1419 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< ushort4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1420 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1425 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1433 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex3D(texture< char, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1434 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1442 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1444 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex3D(texture< signed char, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1445 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1449 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1451 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex3D(texture< unsigned char, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1452 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1456 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1458 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex3D(texture< char1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1459 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1463 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1465 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex3D(texture< uchar1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1466 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1470 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1472 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex3D(texture< char2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1473 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1477 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1479 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex3D(texture< uchar2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1480 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1484 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1486 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex3D(texture< char4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1487 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1491 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1493 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex3D(texture< uchar4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1494 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1498 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1506 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex3D(texture< short, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1507 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1511 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1513 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex3D(texture< unsigned short, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1514 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1518 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1520 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex3D(texture< short1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1521 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1525 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1527 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex3D(texture< ushort1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1528 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1532 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1534 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex3D(texture< short2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1535 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1539 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1541 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex3D(texture< ushort2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1542 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1546 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1548 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex3D(texture< short4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1549 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1553 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1555 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex3D(texture< ushort4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1556 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1560 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1568 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex3D(texture< int, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1569 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1573 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1575 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex3D(texture< unsigned, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1576 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1580 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1582 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex3D(texture< int1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1583 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1587 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1589 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex3D(texture< uint1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1590 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1594 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1596 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex3D(texture< int2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1597 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1601 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1603 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex3D(texture< uint2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1604 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1608 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1610 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex3D(texture< int4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1611 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1615 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1617 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex3D(texture< uint4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1618 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1622 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1696 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< float, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1697 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1701 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1703 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< float1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1704 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1708 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1710 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< float2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1711 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1715 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1717 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< float4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1718 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1722 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1730 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< char, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1731 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1740 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1742 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< signed char, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1743 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1748 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1750 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< unsigned char, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1751 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1756 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1758 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< char1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1759 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1764 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1766 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< uchar1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1767 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1772 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1774 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< char2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1775 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1780 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1782 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< uchar2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1783 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1788 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1790 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< char4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1791 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1796 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1798 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< uchar4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1799 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1804 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1812 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< short, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1813 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1818 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1820 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< unsigned short, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1821 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1826 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1828 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< short1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1829 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1834 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1836 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< ushort1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1837 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1842 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1844 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< short2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1845 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1850 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1852 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< ushort2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1853 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1858 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1860 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< short4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1861 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1866 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1868 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< ushort4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1869 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1874 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1930 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< int comp, class T> __attribute__((unused)) extern int4 __itex2Dgather(texture< T, 2, cudaReadModeElementType> , float2, int = comp);
# 1932 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< int comp, class T> __attribute__((unused)) extern uint4 __utex2Dgather(texture< T, 2, cudaReadModeElementType> , float2, int = comp);
# 1934 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< int comp, class T> __attribute__((unused)) extern float4 __ftex2Dgather(texture< T, 2, cudaReadModeElementType> , float2, int = comp);
# 1954 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1955 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1957 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1959 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< signed char, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1960 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1962 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1964 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< unsigned char, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1965 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1967 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1969 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1970 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1972 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1974 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1975 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1977 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1979 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1980 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1982 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1984 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1985 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1987 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1989 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1990 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1992 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1994 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1995 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1997 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1999 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2000 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2002 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2004 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2005 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2007 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2009 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2010 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2012 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2014 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< unsigned short, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2015 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2017 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2019 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2020 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2022 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2024 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2025 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2027 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2029 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2030 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2032 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2034 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2035 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2037 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2039 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2040 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2042 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2044 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2045 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2047 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2049 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2050 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2052 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2054 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2055 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2057 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2059 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2060 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2062 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2064 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< unsigned, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2065 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2067 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2069 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2070 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2072 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2074 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2075 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2077 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2079 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2080 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2082 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2084 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2085 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2087 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2089 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2090 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2092 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2094 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2095 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2097 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2099 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2100 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2102 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2104 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2105 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2107 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2109 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2110 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2112 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2114 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2115 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2117 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2119 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2120 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2122 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2124 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2125 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2127 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2129 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2130 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2132 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 53 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const uint3 threadIdx; }
# 55 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const uint3 blockIdx; }
# 57 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const dim3 blockDim; }
# 59 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const dim3 gridDim; }
# 61 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const int warpSize; }
# 106 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 107 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaSetupArgument(T
# 108 "/usr/local/cuda/bin/../include/cuda_runtime.h"
arg, size_t
# 109 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset)
# 111 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 112 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaSetupArgument((const void *)(&arg), sizeof(T), offset);
# 113 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 145 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaEventCreate(cudaEvent_t *
# 146 "/usr/local/cuda/bin/../include/cuda_runtime.h"
event, unsigned
# 147 "/usr/local/cuda/bin/../include/cuda_runtime.h"
flags)
# 149 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 150 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaEventCreateWithFlags(event, 0);
# 151 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 208 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMallocHost(void **
# 209 "/usr/local/cuda/bin/../include/cuda_runtime.h"
ptr, size_t
# 210 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size, unsigned
# 211 "/usr/local/cuda/bin/../include/cuda_runtime.h"
flags)
# 213 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 214 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaHostAlloc(ptr, size, flags);
# 215 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 217 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 218 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaHostAlloc(T **
# 219 "/usr/local/cuda/bin/../include/cuda_runtime.h"
ptr, size_t
# 220 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size, unsigned
# 221 "/usr/local/cuda/bin/../include/cuda_runtime.h"
flags)
# 223 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 224 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaHostAlloc((void **)((void *)ptr), size, flags);
# 225 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 227 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 228 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaHostGetDevicePointer(T **
# 229 "/usr/local/cuda/bin/../include/cuda_runtime.h"
pDevice, void *
# 230 "/usr/local/cuda/bin/../include/cuda_runtime.h"
pHost, unsigned
# 231 "/usr/local/cuda/bin/../include/cuda_runtime.h"
flags)
# 233 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 234 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaHostGetDevicePointer((void **)((void *)pDevice), pHost, flags);
# 235 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 237 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 238 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMalloc(T **
# 239 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, size_t
# 240 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size)
# 242 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 243 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMalloc((void **)((void *)devPtr), size);
# 244 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 246 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 247 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMallocHost(T **
# 248 "/usr/local/cuda/bin/../include/cuda_runtime.h"
ptr, size_t
# 249 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size, unsigned
# 250 "/usr/local/cuda/bin/../include/cuda_runtime.h"
flags = (0))
# 252 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 253 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMallocHost((void **)((void *)ptr), size, flags);
# 254 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 256 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 257 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMallocPitch(T **
# 258 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, size_t *
# 259 "/usr/local/cuda/bin/../include/cuda_runtime.h"
pitch, size_t
# 260 "/usr/local/cuda/bin/../include/cuda_runtime.h"
width, size_t
# 261 "/usr/local/cuda/bin/../include/cuda_runtime.h"
height)
# 263 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 264 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMallocPitch((void **)((void *)devPtr), pitch, width, height);
# 265 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 275 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyToSymbol(char *
# 276 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, const void *
# 277 "/usr/local/cuda/bin/../include/cuda_runtime.h"
src, size_t
# 278 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 279 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 280 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice)
# 282 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 283 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbol((const char *)symbol, src, count, offset, kind);
# 284 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 286 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 287 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMemcpyToSymbol(const T &
# 288 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, const void *
# 289 "/usr/local/cuda/bin/../include/cuda_runtime.h"
src, size_t
# 290 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 291 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 292 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice)
# 294 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 295 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbol((const char *)(&symbol), src, count, offset, kind);
# 296 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 298 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyToSymbolAsync(char *
# 299 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, const void *
# 300 "/usr/local/cuda/bin/../include/cuda_runtime.h"
src, size_t
# 301 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 302 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 303 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice, cudaStream_t
# 304 "/usr/local/cuda/bin/../include/cuda_runtime.h"
stream = 0)
# 306 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 307 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbolAsync((const char *)symbol, src, count, offset, kind, stream);
# 308 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 310 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 311 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMemcpyToSymbolAsync(const T &
# 312 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, const void *
# 313 "/usr/local/cuda/bin/../include/cuda_runtime.h"
src, size_t
# 314 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 315 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 316 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice, cudaStream_t
# 317 "/usr/local/cuda/bin/../include/cuda_runtime.h"
stream = 0)
# 319 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 320 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbolAsync((const char *)(&symbol), src, count, offset, kind, stream);
# 321 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 329 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyFromSymbol(void *
# 330 "/usr/local/cuda/bin/../include/cuda_runtime.h"
dst, char *
# 331 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, size_t
# 332 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 333 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 334 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost)
# 336 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 337 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbol(dst, (const char *)symbol, count, offset, kind);
# 338 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 340 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 341 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMemcpyFromSymbol(void *
# 342 "/usr/local/cuda/bin/../include/cuda_runtime.h"
dst, const T &
# 343 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, size_t
# 344 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 345 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 346 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost)
# 348 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 349 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbol(dst, (const char *)(&symbol), count, offset, kind);
# 350 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 352 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyFromSymbolAsync(void *
# 353 "/usr/local/cuda/bin/../include/cuda_runtime.h"
dst, char *
# 354 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, size_t
# 355 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 356 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 357 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost, cudaStream_t
# 358 "/usr/local/cuda/bin/../include/cuda_runtime.h"
stream = 0)
# 360 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 361 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbolAsync(dst, (const char *)symbol, count, offset, kind, stream);
# 362 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 364 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 365 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMemcpyFromSymbolAsync(void *
# 366 "/usr/local/cuda/bin/../include/cuda_runtime.h"
dst, const T &
# 367 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, size_t
# 368 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 369 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 370 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost, cudaStream_t
# 371 "/usr/local/cuda/bin/../include/cuda_runtime.h"
stream = 0)
# 373 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 374 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbolAsync(dst, (const char *)(&symbol), count, offset, kind, stream);
# 375 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 377 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaGetSymbolAddress(void **
# 378 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, char *
# 379 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol)
# 381 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 382 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetSymbolAddress(devPtr, (const char *)symbol);
# 383 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 410 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 411 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaGetSymbolAddress(void **
# 412 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, const T &
# 413 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol)
# 415 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 416 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetSymbolAddress(devPtr, (const char *)(&symbol));
# 417 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 425 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaGetSymbolSize(size_t *
# 426 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size, char *
# 427 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol)
# 429 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 430 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetSymbolSize(size, (const char *)symbol);
# 431 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 458 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 459 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaGetSymbolSize(size_t *
# 460 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size, const T &
# 461 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol)
# 463 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 464 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetSymbolSize(size, (const char *)(&symbol));
# 465 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 507 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 508 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTexture(size_t *
# 509 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 510 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const void *
# 511 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, const cudaChannelFormatDesc &
# 512 "/usr/local/cuda/bin/../include/cuda_runtime.h"
desc, size_t
# 513 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size = (((2147483647) * 2U) + 1U))
# 515 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 516 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindTexture(offset, &tex, devPtr, &desc, size);
# 517 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 552 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 553 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTexture(size_t *
# 554 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 555 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const void *
# 556 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, size_t
# 557 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size = (((2147483647) * 2U) + 1U))
# 559 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 560 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindTexture(offset, tex, devPtr, (tex.channelDesc), size);
# 561 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 608 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 609 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTexture2D(size_t *
# 610 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 611 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const void *
# 612 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, const cudaChannelFormatDesc &
# 613 "/usr/local/cuda/bin/../include/cuda_runtime.h"
desc, size_t
# 614 "/usr/local/cuda/bin/../include/cuda_runtime.h"
width, size_t
# 615 "/usr/local/cuda/bin/../include/cuda_runtime.h"
height, size_t
# 616 "/usr/local/cuda/bin/../include/cuda_runtime.h"
pitch)
# 618 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 619 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindTexture2D(offset, &tex, devPtr, &desc, width, height, pitch);
# 620 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 666 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 667 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTexture2D(size_t *
# 668 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 669 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const void *
# 670 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, size_t
# 671 "/usr/local/cuda/bin/../include/cuda_runtime.h"
width, size_t
# 672 "/usr/local/cuda/bin/../include/cuda_runtime.h"
height, size_t
# 673 "/usr/local/cuda/bin/../include/cuda_runtime.h"
pitch)
# 675 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 676 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindTexture2D(offset, &tex, devPtr, &(tex.texture< T, dim, readMode> ::channelDesc), width, height, pitch);
# 677 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 708 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 709 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTextureToArray(const texture< T, dim, readMode> &
# 710 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const cudaArray *
# 711 "/usr/local/cuda/bin/../include/cuda_runtime.h"
array, const cudaChannelFormatDesc &
# 712 "/usr/local/cuda/bin/../include/cuda_runtime.h"
desc)
# 714 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 715 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindTextureToArray(&tex, array, &desc);
# 716 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 746 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 747 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTextureToArray(const texture< T, dim, readMode> &
# 748 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const cudaArray *
# 749 "/usr/local/cuda/bin/../include/cuda_runtime.h"
array)
# 751 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 752 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaChannelFormatDesc desc;
# 753 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaError_t err = cudaGetChannelDesc(&desc, array);
# 755 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return (err == (cudaSuccess)) ? cudaBindTextureToArray(tex, array, desc) : err;
# 756 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 785 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 786 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaUnbindTexture(const texture< T, dim, readMode> &
# 787 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex)
# 789 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 790 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaUnbindTexture(&tex);
# 791 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 825 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 826 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaGetTextureAlignmentOffset(size_t *
# 827 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 828 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex)
# 830 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 831 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetTextureAlignmentOffset(offset, &tex);
# 832 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 886 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 887 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaFuncSetCacheConfig(T *
# 888 "/usr/local/cuda/bin/../include/cuda_runtime.h"
func, cudaFuncCache
# 889 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cacheConfig)
# 891 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 892 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaFuncSetCacheConfig((const char *)func, cacheConfig);
# 893 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 930 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 931 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaLaunch(T *
# 932 "/usr/local/cuda/bin/../include/cuda_runtime.h"
entry)
# 934 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 935 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaLaunch((const char *)entry);
# 936 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 970 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 971 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaFuncGetAttributes(cudaFuncAttributes *
# 972 "/usr/local/cuda/bin/../include/cuda_runtime.h"
attr, T *
# 973 "/usr/local/cuda/bin/../include/cuda_runtime.h"
entry)
# 975 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 976 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaFuncGetAttributes(attr, (const char *)entry);
# 977 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 999 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim> inline cudaError_t
# 1000 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindSurfaceToArray(const surface< T, dim> &
# 1001 "/usr/local/cuda/bin/../include/cuda_runtime.h"
surf, const cudaArray *
# 1002 "/usr/local/cuda/bin/../include/cuda_runtime.h"
array, const cudaChannelFormatDesc &
# 1003 "/usr/local/cuda/bin/../include/cuda_runtime.h"
desc)
# 1005 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 1006 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindSurfaceToArray(&surf, array, &desc);
# 1007 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 1028 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim> inline cudaError_t
# 1029 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindSurfaceToArray(const surface< T, dim> &
# 1030 "/usr/local/cuda/bin/../include/cuda_runtime.h"
surf, const cudaArray *
# 1031 "/usr/local/cuda/bin/../include/cuda_runtime.h"
array)
# 1033 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 1034 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaChannelFormatDesc desc;
# 1035 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaError_t err = cudaGetChannelDesc(&desc, array);
# 1037 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return (err == (cudaSuccess)) ? cudaBindSurfaceToArray(surf, array, desc) : err;
# 1038 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 45 "/usr/include/stdio.h" 3
struct _IO_FILE;
# 49 "/usr/include/stdio.h" 3
extern "C" { typedef _IO_FILE FILE; }
# 65 "/usr/include/stdio.h" 3
extern "C" { typedef _IO_FILE __FILE; }
# 95 "/usr/include/wchar.h" 3
extern "C" { typedef
# 84 "/usr/include/wchar.h" 3
struct {
# 85 "/usr/include/wchar.h" 3
int __count;
# 87 "/usr/include/wchar.h" 3
union {
# 89 "/usr/include/wchar.h" 3
unsigned __wch;
# 93 "/usr/include/wchar.h" 3
char __wchb[4];
# 94 "/usr/include/wchar.h" 3
} __value;
# 95 "/usr/include/wchar.h" 3
} __mbstate_t; }
# 26 "/usr/include/_G_config.h" 3
extern "C" { typedef
# 23 "/usr/include/_G_config.h" 3
struct {
# 24 "/usr/include/_G_config.h" 3
__off_t __pos;
# 25 "/usr/include/_G_config.h" 3
__mbstate_t __state;
# 26 "/usr/include/_G_config.h" 3
} _G_fpos_t; }
# 31 "/usr/include/_G_config.h" 3
extern "C" { typedef
# 28 "/usr/include/_G_config.h" 3
struct {
# 29 "/usr/include/_G_config.h" 3
__off64_t __pos;
# 30 "/usr/include/_G_config.h" 3
__mbstate_t __state;
# 31 "/usr/include/_G_config.h" 3
} _G_fpos64_t; }
# 53 "/usr/include/_G_config.h" 3
extern "C" { typedef short _G_int16_t; }
# 54 "/usr/include/_G_config.h" 3
extern "C" { typedef int _G_int32_t; }
# 55 "/usr/include/_G_config.h" 3
extern "C" { typedef unsigned short _G_uint16_t; }
# 56 "/usr/include/_G_config.h" 3
extern "C" { typedef unsigned _G_uint32_t; }
# 40 "/usr/lib/gcc/i686-linux-gnu/4.4.5/include/va.h" 3
extern "C" { typedef __builtin_va_list __gnuc_va_list; }
# 170 "/usr/include/libio.h" 3
struct _IO_jump_t; struct _IO_FILE;
# 180 "/usr/include/libio.h" 3
extern "C" { typedef void _IO_lock_t; }
# 186 "/usr/include/libio.h" 3
extern "C" { struct _IO_marker {
# 187 "/usr/include/libio.h" 3
_IO_marker *_next;
# 188 "/usr/include/libio.h" 3
_IO_FILE *_sbuf;
# 192 "/usr/include/libio.h" 3
int _pos;
# 203 "/usr/include/libio.h" 3
}; }
# 206 "/usr/include/libio.h" 3
enum __codecvt_result {
# 208 "/usr/include/libio.h" 3
__codecvt_ok,
# 209 "/usr/include/libio.h" 3
__codecvt_partial,
# 210 "/usr/include/libio.h" 3
__codecvt_error,
# 211 "/usr/include/libio.h" 3
__codecvt_noconv
# 212 "/usr/include/libio.h" 3
};
# 271 "/usr/include/libio.h" 3
extern "C" { struct _IO_FILE {
# 272 "/usr/include/libio.h" 3
int _flags;
# 277 "/usr/include/libio.h" 3
char *_IO_read_ptr;
# 278 "/usr/include/libio.h" 3
char *_IO_read_end;
# 279 "/usr/include/libio.h" 3
char *_IO_read_base;
# 280 "/usr/include/libio.h" 3
char *_IO_write_base;
# 281 "/usr/include/libio.h" 3
char *_IO_write_ptr;
# 282 "/usr/include/libio.h" 3
char *_IO_write_end;
# 283 "/usr/include/libio.h" 3
char *_IO_buf_base;
# 284 "/usr/include/libio.h" 3
char *_IO_buf_end;
# 286 "/usr/include/libio.h" 3
char *_IO_save_base;
# 287 "/usr/include/libio.h" 3
char *_IO_backup_base;
# 288 "/usr/include/libio.h" 3
char *_IO_save_end;
# 290 "/usr/include/libio.h" 3
_IO_marker *_markers;
# 292 "/usr/include/libio.h" 3
_IO_FILE *_chain;
# 294 "/usr/include/libio.h" 3
int _fileno;
# 298 "/usr/include/libio.h" 3
int _flags2;
# 300 "/usr/include/libio.h" 3
__off_t _old_offset;
# 304 "/usr/include/libio.h" 3
unsigned short _cur_column;
# 305 "/usr/include/libio.h" 3
signed char _vtable_offset;
# 306 "/usr/include/libio.h" 3
char _shortbuf[1];
# 310 "/usr/include/libio.h" 3
_IO_lock_t *_lock;
# 319 "/usr/include/libio.h" 3
__off64_t _offset;
# 328 "/usr/include/libio.h" 3
void *__pad1;
# 329 "/usr/include/libio.h" 3
void *__pad2;
# 330 "/usr/include/libio.h" 3
void *__pad3;
# 331 "/usr/include/libio.h" 3
void *__pad4;
# 332 "/usr/include/libio.h" 3
size_t __pad5;
# 334 "/usr/include/libio.h" 3
int _mode;
# 336 "/usr/include/libio.h" 3
char _unused2[((((15) * sizeof(int)) - ((4) * sizeof(void *))) - sizeof(size_t))];
# 338 "/usr/include/libio.h" 3
}; }
# 344 "/usr/include/libio.h" 3
struct _IO_FILE_plus;
# 346 "/usr/include/libio.h" 3
extern "C" { extern _IO_FILE_plus _IO_2_1_stdin_; }
# 347 "/usr/include/libio.h" 3
extern "C" { extern _IO_FILE_plus _IO_2_1_stdout_; }
# 348 "/usr/include/libio.h" 3
extern "C" { extern _IO_FILE_plus _IO_2_1_stderr_; }
# 364 "/usr/include/libio.h" 3
extern "C" { typedef __ssize_t __io_read_fn(void *, char *, size_t); }
# 372 "/usr/include/libio.h" 3
extern "C" { typedef __ssize_t __io_write_fn(void *, const char *, size_t); }
# 381 "/usr/include/libio.h" 3
extern "C" { typedef int __io_seek_fn(void *, __off64_t *, int); }
# 384 "/usr/include/libio.h" 3
extern "C" { typedef int __io_close_fn(void *); }
# 389 "/usr/include/libio.h" 3
extern "C" { typedef __io_read_fn cookie_read_function_t; }
# 390 "/usr/include/libio.h" 3
extern "C" { typedef __io_write_fn cookie_write_function_t; }
# 391 "/usr/include/libio.h" 3
extern "C" { typedef __io_seek_fn cookie_seek_function_t; }
# 392 "/usr/include/libio.h" 3
extern "C" { typedef __io_close_fn cookie_close_function_t; }
# 401 "/usr/include/libio.h" 3
extern "C" { typedef
# 396 "/usr/include/libio.h" 3
struct {
# 397 "/usr/include/libio.h" 3
__io_read_fn *read;
# 398 "/usr/include/libio.h" 3
__io_write_fn *write;
# 399 "/usr/include/libio.h" 3
__io_seek_fn *seek;
# 400 "/usr/include/libio.h" 3
__io_close_fn *close;
# 401 "/usr/include/libio.h" 3
} _IO_cookie_io_functions_t; }
# 402 "/usr/include/libio.h" 3
extern "C" { typedef _IO_cookie_io_functions_t cookie_io_functions_t; }
# 404 "/usr/include/libio.h" 3
struct _IO_cookie_file;
# 407 "/usr/include/libio.h" 3
extern "C" void _IO_cookie_init(_IO_cookie_file *, int, void *, _IO_cookie_io_functions_t);
# 416 "/usr/include/libio.h" 3
extern "C" int __underflow(_IO_FILE *);
# 417 "/usr/include/libio.h" 3
extern "C" int __uflow(_IO_FILE *);
# 418 "/usr/include/libio.h" 3
extern "C" int __overflow(_IO_FILE *, int);
# 460 "/usr/include/libio.h" 3
extern "C" int _IO_getc(_IO_FILE *);
# 461 "/usr/include/libio.h" 3
extern "C" int _IO_putc(int, _IO_FILE *);
# 462 "/usr/include/libio.h" 3
extern "C" int _IO_feof(_IO_FILE *) throw();
# 463 "/usr/include/libio.h" 3
extern "C" int _IO_ferror(_IO_FILE *) throw();
# 465 "/usr/include/libio.h" 3
extern "C" int _IO_peekc_locked(_IO_FILE *);
# 471 "/usr/include/libio.h" 3
extern "C" void _IO_flockfile(_IO_FILE *) throw();
# 472 "/usr/include/libio.h" 3
extern "C" void _IO_funlockfile(_IO_FILE *) throw();
# 473 "/usr/include/libio.h" 3
extern "C" int _IO_ftrylockfile(_IO_FILE *) throw();
# 490 "/usr/include/libio.h" 3
extern "C" int _IO_vfscanf(_IO_FILE *__restrict__, const char *__restrict__, __gnuc_va_list, int *__restrict__);
# 492 "/usr/include/libio.h" 3
extern "C" int _IO_vfprintf(_IO_FILE *__restrict__, const char *__restrict__, __gnuc_va_list);
# 494 "/usr/include/libio.h" 3
extern "C" __ssize_t _IO_padn(_IO_FILE *, int, __ssize_t);
# 495 "/usr/include/libio.h" 3
extern "C" size_t _IO_sgetn(_IO_FILE *, void *, size_t);
# 497 "/usr/include/libio.h" 3
extern "C" __off64_t _IO_seekoff(_IO_FILE *, __off64_t, int, int);
# 498 "/usr/include/libio.h" 3
extern "C" __off64_t _IO_seekpos(_IO_FILE *, __off64_t, int);
# 500 "/usr/include/libio.h" 3
extern "C" void _IO_free_backup_area(_IO_FILE *) throw();
# 80 "/usr/include/stdio.h" 3
extern "C" { typedef __gnuc_va_list va_list; }
# 111 "/usr/include/stdio.h" 3
extern "C" { typedef _G_fpos_t fpos_t; }
# 117 "/usr/include/stdio.h" 3
extern "C" { typedef _G_fpos64_t fpos64_t; }
# 165 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stdin; }
# 166 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stdout; }
# 167 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stderr; }
# 175 "/usr/include/stdio.h" 3
extern "C" int remove(const char *) throw();
# 177 "/usr/include/stdio.h" 3
extern "C" int rename(const char *, const char *) throw();
# 182 "/usr/include/stdio.h" 3
extern "C" int renameat(int, const char *, int, const char *) throw();
# 192 "/usr/include/stdio.h" 3
extern "C" FILE *tmpfile();
# 202 "/usr/include/stdio.h" 3
extern "C" FILE *tmpfile64();
# 206 "/usr/include/stdio.h" 3
extern "C" char *tmpnam(char *) throw();
# 212 "/usr/include/stdio.h" 3
extern "C" char *tmpnam_r(char *) throw();
# 224 "/usr/include/stdio.h" 3
extern "C" char *tempnam(const char *, const char *) throw() __attribute__((__malloc__));
# 234 "/usr/include/stdio.h" 3
extern "C" int fclose(FILE *);
# 239 "/usr/include/stdio.h" 3
extern "C" int fflush(FILE *);
# 249 "/usr/include/stdio.h" 3
extern "C" int fflush_unlocked(FILE *);
# 259 "/usr/include/stdio.h" 3
extern "C" int fcloseall();
# 269 "/usr/include/stdio.h" 3
extern "C" FILE *fopen(const char *__restrict__, const char *__restrict__);
# 275 "/usr/include/stdio.h" 3
extern "C" FILE *freopen(const char *__restrict__, const char *__restrict__, FILE *__restrict__);
# 294 "/usr/include/stdio.h" 3
extern "C" FILE *fopen64(const char *__restrict__, const char *__restrict__);
# 296 "/usr/include/stdio.h" 3
extern "C" FILE *freopen64(const char *__restrict__, const char *__restrict__, FILE *__restrict__);
# 303 "/usr/include/stdio.h" 3
extern "C" FILE *fdopen(int, const char *) throw();
# 309 "/usr/include/stdio.h" 3
extern "C" FILE *fopencookie(void *__restrict__, const char *__restrict__, _IO_cookie_io_functions_t) throw();
# 316 "/usr/include/stdio.h" 3
extern "C" FILE *fmemopen(void *, size_t, const char *) throw();
# 322 "/usr/include/stdio.h" 3
extern "C" FILE *open_memstream(char **, size_t *) throw();
# 329 "/usr/include/stdio.h" 3
extern "C" void setbuf(FILE *__restrict__, char *__restrict__) throw();
# 333 "/usr/include/stdio.h" 3
extern "C" int setvbuf(FILE *__restrict__, char *__restrict__, int, size_t) throw();
# 340 "/usr/include/stdio.h" 3
extern "C" void setbuffer(FILE *__restrict__, char *__restrict__, size_t) throw();
# 344 "/usr/include/stdio.h" 3
extern "C" void setlinebuf(FILE *) throw();
# 353 "/usr/include/stdio.h" 3
extern "C" int fprintf(FILE *__restrict__, const char *__restrict__, ...);
# 359 "/usr/include/stdio.h" 3
extern "C" int printf(const char *__restrict__, ...);
# 361 "/usr/include/stdio.h" 3
extern "C" int sprintf(char *__restrict__, const char *__restrict__, ...) throw();
# 368 "/usr/include/stdio.h" 3
extern "C" int vfprintf(FILE *__restrict__, const char *__restrict__, __gnuc_va_list);
# 374 "/usr/include/stdio.h" 3
extern "C" int vprintf(const char *__restrict__, __gnuc_va_list);
# 376 "/usr/include/stdio.h" 3
extern "C" int vsprintf(char *__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 383 "/usr/include/stdio.h" 3
extern "C" int snprintf(char *__restrict__, size_t, const char *__restrict__, ...) throw();
# 387 "/usr/include/stdio.h" 3
extern "C" int vsnprintf(char *__restrict__, size_t, const char *__restrict__, __gnuc_va_list) throw();
# 396 "/usr/include/stdio.h" 3
extern "C" int vasprintf(char **__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 399 "/usr/include/stdio.h" 3
extern "C" int __asprintf(char **__restrict__, const char *__restrict__, ...) throw();
# 402 "/usr/include/stdio.h" 3
extern "C" int asprintf(char **__restrict__, const char *__restrict__, ...) throw();
# 414 "/usr/include/stdio.h" 3
extern "C" int vdprintf(int, const char *__restrict__, __gnuc_va_list);
# 417 "/usr/include/stdio.h" 3
extern "C" int dprintf(int, const char *__restrict__, ...);
# 427 "/usr/include/stdio.h" 3
extern "C" int fscanf(FILE *__restrict__, const char *__restrict__, ...);
# 433 "/usr/include/stdio.h" 3
extern "C" int scanf(const char *__restrict__, ...);
# 435 "/usr/include/stdio.h" 3
extern "C" int sscanf(const char *__restrict__, const char *__restrict__, ...) throw();
# 473 "/usr/include/stdio.h" 3
extern "C" int vfscanf(FILE *__restrict__, const char *__restrict__, __gnuc_va_list);
# 481 "/usr/include/stdio.h" 3
extern "C" int vscanf(const char *__restrict__, __gnuc_va_list);
# 485 "/usr/include/stdio.h" 3
extern "C" int vsscanf(const char *__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 533 "/usr/include/stdio.h" 3
extern "C" int fgetc(FILE *);
# 534 "/usr/include/stdio.h" 3
extern "C" int getc(FILE *);
# 540 "/usr/include/stdio.h" 3
extern "C" int getchar();
# 552 "/usr/include/stdio.h" 3
extern "C" int getc_unlocked(FILE *);
# 553 "/usr/include/stdio.h" 3
extern "C" int getchar_unlocked();
# 563 "/usr/include/stdio.h" 3
extern "C" int fgetc_unlocked(FILE *);
# 575 "/usr/include/stdio.h" 3
extern "C" int fputc(int, FILE *);
# 576 "/usr/include/stdio.h" 3
extern "C" int putc(int, FILE *);
# 582 "/usr/include/stdio.h" 3
extern "C" int putchar(int);
# 596 "/usr/include/stdio.h" 3
extern "C" int fputc_unlocked(int, FILE *);
# 604 "/usr/include/stdio.h" 3
extern "C" int putc_unlocked(int, FILE *);
# 605 "/usr/include/stdio.h" 3
extern "C" int putchar_unlocked(int);
# 612 "/usr/include/stdio.h" 3
extern "C" int getw(FILE *);
# 615 "/usr/include/stdio.h" 3
extern "C" int putw(int, FILE *);
# 624 "/usr/include/stdio.h" 3
extern "C" char *fgets(char *__restrict__, int, FILE *__restrict__);
# 632 "/usr/include/stdio.h" 3
extern "C" char *gets(char *);
# 642 "/usr/include/stdio.h" 3
extern "C" char *fgets_unlocked(char *__restrict__, int, FILE *__restrict__);
# 658 "/usr/include/stdio.h" 3
extern "C" __ssize_t __getdelim(char **__restrict__, size_t *__restrict__, int, FILE *__restrict__);
# 661 "/usr/include/stdio.h" 3
extern "C" __ssize_t getdelim(char **__restrict__, size_t *__restrict__, int, FILE *__restrict__);
# 671 "/usr/include/stdio.h" 3
extern "C" __ssize_t getline(char **__restrict__, size_t *__restrict__, FILE *__restrict__);
# 682 "/usr/include/stdio.h" 3
extern "C" int fputs(const char *__restrict__, FILE *__restrict__);
# 688 "/usr/include/stdio.h" 3
extern "C" int puts(const char *);
# 695 "/usr/include/stdio.h" 3
extern "C" int ungetc(int, FILE *);
# 702 "/usr/include/stdio.h" 3
extern "C" size_t fread(void *__restrict__, size_t, size_t, FILE *__restrict__);
# 708 "/usr/include/stdio.h" 3
extern "C" size_t fwrite(const void *__restrict__, size_t, size_t, FILE *__restrict__);
# 719 "/usr/include/stdio.h" 3
extern "C" int fputs_unlocked(const char *__restrict__, FILE *__restrict__);
# 730 "/usr/include/stdio.h" 3
extern "C" size_t fread_unlocked(void *__restrict__, size_t, size_t, FILE *__restrict__);
# 732 "/usr/include/stdio.h" 3
extern "C" size_t fwrite_unlocked(const void *__restrict__, size_t, size_t, FILE *__restrict__);
# 742 "/usr/include/stdio.h" 3
extern "C" int fseek(FILE *, long, int);
# 747 "/usr/include/stdio.h" 3
extern "C" long ftell(FILE *);
# 752 "/usr/include/stdio.h" 3
extern "C" void rewind(FILE *);
# 766 "/usr/include/stdio.h" 3
extern "C" int fseeko(FILE *, __off_t, int);
# 771 "/usr/include/stdio.h" 3
extern "C" __off_t ftello(FILE *);
# 791 "/usr/include/stdio.h" 3
extern "C" int fgetpos(FILE *__restrict__, fpos_t *__restrict__);
# 796 "/usr/include/stdio.h" 3
extern "C" int fsetpos(FILE *, const fpos_t *);
# 811 "/usr/include/stdio.h" 3
extern "C" int fseeko64(FILE *, __off64_t, int);
# 812 "/usr/include/stdio.h" 3
extern "C" __off64_t ftello64(FILE *);
# 813 "/usr/include/stdio.h" 3
extern "C" int fgetpos64(FILE *__restrict__, fpos64_t *__restrict__);
# 814 "/usr/include/stdio.h" 3
extern "C" int fsetpos64(FILE *, const fpos64_t *);
# 819 "/usr/include/stdio.h" 3
extern "C" void clearerr(FILE *) throw();
# 821 "/usr/include/stdio.h" 3
extern "C" int feof(FILE *) throw();
# 823 "/usr/include/stdio.h" 3
extern "C" int ferror(FILE *) throw();
# 828 "/usr/include/stdio.h" 3
extern "C" void clearerr_unlocked(FILE *) throw();
# 829 "/usr/include/stdio.h" 3
extern "C" int feof_unlocked(FILE *) throw();
# 830 "/usr/include/stdio.h" 3
extern "C" int ferror_unlocked(FILE *) throw();
# 839 "/usr/include/stdio.h" 3
extern "C" void perror(const char *);
# 27 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern int sys_nerr; }
# 28 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern const char *const sys_errlist[]; }
# 31 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern int _sys_nerr; }
# 32 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern const char *const _sys_errlist[]; }
# 851 "/usr/include/stdio.h" 3
extern "C" int fileno(FILE *) throw();
# 856 "/usr/include/stdio.h" 3
extern "C" int fileno_unlocked(FILE *) throw();
# 866 "/usr/include/stdio.h" 3
extern "C" FILE *popen(const char *, const char *);
# 872 "/usr/include/stdio.h" 3
extern "C" int pclose(FILE *);
# 878 "/usr/include/stdio.h" 3
extern "C" char *ctermid(char *) throw();
# 884 "/usr/include/stdio.h" 3
extern "C" char *cuserid(char *);
# 889 "/usr/include/stdio.h" 3
struct obstack;
# 892 "/usr/include/stdio.h" 3
extern "C" int obstack_printf(obstack *__restrict__, const char *__restrict__, ...) throw();
# 895 "/usr/include/stdio.h" 3
extern "C" int obstack_vprintf(obstack *__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 906 "/usr/include/stdio.h" 3
extern "C" void flockfile(FILE *) throw();
# 910 "/usr/include/stdio.h" 3
extern "C" int ftrylockfile(FILE *) throw();
# 913 "/usr/include/stdio.h" 3
extern "C" void funlockfile(FILE *) throw();
# 39 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.h"
typedef unsigned TColor;
# 64 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.h"
extern "C" void LoadBMPFile(uchar4 **, int *, int *, const char *);
# 67 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.h"
extern "C" cudaError_t CUDA_Bind2TextureArray();
# 68 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.h"
extern "C" cudaError_t CUDA_UnbindTexture();
# 69 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.h"
extern "C" cudaError_t CUDA_MallocArray(uchar4 **, int, int);
# 70 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.h"
extern "C" cudaError_t CUDA_FreeArray();
# 73 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.h"
extern "C" void cuda_Copy(TColor *, int, int);
# 74 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.h"
extern "C" void cuda_KNN(TColor *, int, int, float, float);
# 75 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.h"
extern "C" void cuda_KNNdiag(TColor *, int, int, float, float);
# 76 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.h"
extern "C" void cuda_NLM(TColor *, int, int, float, float);
# 77 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.h"
extern "C" void cuda_NLMdiag(TColor *, int, int, float, float);
# 79 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.h"
extern "C" void cuda_NLM2(TColor *, int, int, float, float);
# 80 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.h"
extern "C" void cuda_NLM2diag(TColor *, int, int, float, float);
# 57 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu"
float Max(float x, float y) {
# 58 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu"
return (x > y) ? x : y;
# 59 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu"
}
# 61 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu"
float Min(float x, float y) {
# 62 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu"
return (x < y) ? x : y;
# 63 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu"
}
# 65 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu"
int iDivUp(int a, int b) {
# 66 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu"
return ((a % b) != 0) ? ((a / b) + 1) : (a / b);
# 67 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu"
}
# 69 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu"
__attribute__((unused)) float lerpf(float a, float b, float c) {int volatile ___ = 1;
# 71 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu"
exit(___);}
# 73 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu"
__attribute__((unused)) float vecLen(float4 a, float4 b) {int volatile ___ = 1;
# 79 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu"
exit(___);}
# 81 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu"
__attribute__((unused)) TColor make_color(float r, float g, float b, float a) {int volatile ___ = 1;
# 87 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu"
exit(___);}
# 95 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu"
static texture< uchar4, 2, cudaReadModeNormalizedFloat> texImage;
# 96 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu"
cudaChannelFormatDesc uchar4tex = cudaCreateChannelDesc< uchar4> ();
# 99 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu"
cudaArray *a_Src;
# 38 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_copy_kernel.cuh"
void Copy(TColor *
# 39 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_copy_kernel.cuh"
dst, int
# 40 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_copy_kernel.cuh"
imageW, int
# 41 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_copy_kernel.cuh"
imageH) ;
# 56 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_copy_kernel.cuh"
extern "C" void cuda_Copy(TColor *d_dst, int imageW, int imageH)
# 57 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_copy_kernel.cuh"
{
# 58 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_copy_kernel.cuh"
dim3 threads(8, 8);
# 59 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_copy_kernel.cuh"
dim3 grid(iDivUp(imageW, 8), iDivUp(imageH, 8));
# 61 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_copy_kernel.cuh"
cudaConfigureCall(grid, threads) ? ((void)0) : Copy(d_dst, imageW, imageH);
# 62 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_copy_kernel.cuh"
}
# 41 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_knn_kernel.cuh"
void KNN(TColor *
# 42 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_knn_kernel.cuh"
dst, int
# 43 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_knn_kernel.cuh"
imageW, int
# 44 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_knn_kernel.cuh"
imageH, float
# 45 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_knn_kernel.cuh"
Noise, float
# 46 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_knn_kernel.cuh"
lerpC) ;
# 106 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_knn_kernel.cuh"
extern "C" void cuda_KNN(TColor *
# 107 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_knn_kernel.cuh"
d_dst, int
# 108 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_knn_kernel.cuh"
imageW, int
# 109 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_knn_kernel.cuh"
imageH, float
# 110 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_knn_kernel.cuh"
Noise, float
# 111 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_knn_kernel.cuh"
lerpC)
# 112 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_knn_kernel.cuh"
{
# 113 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_knn_kernel.cuh"
dim3 threads(8, 8);
# 114 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_knn_kernel.cuh"
dim3 grid(iDivUp(imageW, 8), iDivUp(imageH, 8));
# 116 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_knn_kernel.cuh"
cudaConfigureCall(grid, threads) ? ((void)0) : KNN(d_dst, imageW, imageH, Noise, lerpC);
# 117 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_knn_kernel.cuh"
}
# 123 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_knn_kernel.cuh"
void KNNdiag(TColor *
# 124 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_knn_kernel.cuh"
dst, int
# 125 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_knn_kernel.cuh"
imageW, int
# 126 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_knn_kernel.cuh"
imageH, float
# 127 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_knn_kernel.cuh"
Noise, float
# 128 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_knn_kernel.cuh"
lerpC) ;
# 167 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_knn_kernel.cuh"
extern "C" void cuda_KNNdiag(TColor *
# 168 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_knn_kernel.cuh"
d_dst, int
# 169 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_knn_kernel.cuh"
imageW, int
# 170 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_knn_kernel.cuh"
imageH, float
# 171 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_knn_kernel.cuh"
Noise, float
# 172 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_knn_kernel.cuh"
lerpC)
# 174 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_knn_kernel.cuh"
{
# 175 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_knn_kernel.cuh"
dim3 threads(8, 8);
# 176 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_knn_kernel.cuh"
dim3 grid(iDivUp(imageW, 8), iDivUp(imageH, 8));
# 178 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_knn_kernel.cuh"
cudaConfigureCall(grid, threads) ? ((void)0) : KNNdiag(d_dst, imageW, imageH, Noise, lerpC);
# 179 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_knn_kernel.cuh"
}
# 41 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm_kernel.cuh"
void NLM(TColor *
# 42 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm_kernel.cuh"
dst, int
# 43 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm_kernel.cuh"
imageW, int
# 44 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm_kernel.cuh"
imageH, float
# 45 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm_kernel.cuh"
Noise, float
# 46 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm_kernel.cuh"
lerpC) ;
# 112 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm_kernel.cuh"
extern "C" void cuda_NLM(TColor *
# 113 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm_kernel.cuh"
d_dst, int
# 114 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm_kernel.cuh"
imageW, int
# 115 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm_kernel.cuh"
imageH, float
# 116 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm_kernel.cuh"
Noise, float
# 117 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm_kernel.cuh"
lerpC)
# 118 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm_kernel.cuh"
{
# 119 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm_kernel.cuh"
dim3 threads(8, 8);
# 120 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm_kernel.cuh"
dim3 grid(iDivUp(imageW, 8), iDivUp(imageH, 8));
# 122 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm_kernel.cuh"
cudaConfigureCall(grid, threads) ? ((void)0) : NLM(d_dst, imageW, imageH, Noise, lerpC);
# 123 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm_kernel.cuh"
}
# 128 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm_kernel.cuh"
void NLMdiag(TColor *
# 129 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm_kernel.cuh"
dst, unsigned
# 130 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm_kernel.cuh"
imageW, unsigned
# 131 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm_kernel.cuh"
imageH, float
# 132 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm_kernel.cuh"
Noise, float
# 133 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm_kernel.cuh"
lerpC) ;
# 175 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm_kernel.cuh"
extern "C" void cuda_NLMdiag(TColor *
# 176 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm_kernel.cuh"
d_dst, int
# 177 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm_kernel.cuh"
imageW, int
# 178 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm_kernel.cuh"
imageH, float
# 179 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm_kernel.cuh"
Noise, float
# 180 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm_kernel.cuh"
lerpC)
# 181 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm_kernel.cuh"
{
# 182 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm_kernel.cuh"
dim3 threads(8, 8);
# 183 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm_kernel.cuh"
dim3 grid(iDivUp(imageW, 8), iDivUp(imageH, 8));
# 185 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm_kernel.cuh"
cudaConfigureCall(grid, threads) ? ((void)0) : NLMdiag(d_dst, imageW, imageH, Noise, lerpC);
# 186 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm_kernel.cuh"
}
# 56 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm2_kernel.cuh"
void NLM2(TColor *
# 57 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm2_kernel.cuh"
dst, int
# 58 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm2_kernel.cuh"
imageW, int
# 59 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm2_kernel.cuh"
imageH, float
# 60 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm2_kernel.cuh"
Noise, float
# 61 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm2_kernel.cuh"
lerpC) ;
# 148 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm2_kernel.cuh"
extern "C" void cuda_NLM2(TColor *
# 149 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm2_kernel.cuh"
d_dst, int
# 150 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm2_kernel.cuh"
imageW, int
# 151 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm2_kernel.cuh"
imageH, float
# 152 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm2_kernel.cuh"
Noise, float
# 153 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm2_kernel.cuh"
LerpC)
# 154 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm2_kernel.cuh"
{
# 155 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm2_kernel.cuh"
dim3 threads(8, 8);
# 156 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm2_kernel.cuh"
dim3 grid(iDivUp(imageW, 8), iDivUp(imageH, 8));
# 158 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm2_kernel.cuh"
cudaConfigureCall(grid, threads) ? ((void)0) : NLM2(d_dst, imageW, imageH, Noise, LerpC);
# 159 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm2_kernel.cuh"
}
# 165 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm2_kernel.cuh"
void NLM2diag(TColor *
# 166 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm2_kernel.cuh"
dst, int
# 167 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm2_kernel.cuh"
imageW, int
# 168 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm2_kernel.cuh"
imageH, float
# 169 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm2_kernel.cuh"
Noise, float
# 170 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm2_kernel.cuh"
LerpC) ;
# 231 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm2_kernel.cuh"
extern "C" void cuda_NLM2diag(TColor *
# 232 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm2_kernel.cuh"
d_dst, int
# 233 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm2_kernel.cuh"
imageW, int
# 234 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm2_kernel.cuh"
imageH, float
# 235 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm2_kernel.cuh"
Noise, float
# 236 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm2_kernel.cuh"
LerpC)
# 237 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm2_kernel.cuh"
{
# 238 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm2_kernel.cuh"
dim3 threads(8, 8);
# 239 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm2_kernel.cuh"
dim3 grid(iDivUp(imageW, 8), iDivUp(imageH, 8));
# 241 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm2_kernel.cuh"
cudaConfigureCall(grid, threads) ? ((void)0) : NLM2diag(d_dst, imageW, imageH, Noise, LerpC);
# 242 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm2_kernel.cuh"
}
# 110 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu"
extern "C" cudaError_t CUDA_Bind2TextureArray()
# 111 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu"
{
# 112 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu"
return cudaBindTextureToArray(texImage, a_Src);
# 113 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu"
}
# 116 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu"
extern "C" cudaError_t CUDA_UnbindTexture()
# 117 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu"
{
# 118 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu"
return cudaUnbindTexture(texImage);
# 119 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu"
}
# 122 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu"
extern "C" cudaError_t CUDA_MallocArray(uchar4 **h_Src, int imageW, int imageH)
# 123 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu"
{
# 124 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu"
cudaError_t error;
# 126 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu"
error = cudaMallocArray(&a_Src, &uchar4tex, imageW, imageH);
# 127 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu"
error = cudaMemcpyToArray(a_Src, 0, 0, *h_Src, (imageW * imageH) * sizeof(uchar4), cudaMemcpyHostToDevice);
# 132 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu"
return error;
# 133 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu"
}
# 137 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu"
extern "C" cudaError_t CUDA_FreeArray()
# 138 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu"
{
# 139 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu"
return cudaFreeArray(a_Src);
# 140 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu"
}
# 1 "/tmp/tmpxft_00001939_00000000-1_imageDenoising.cudafe1.stub.c"
# 1 "/tmp/tmpxft_00001939_00000000-1_imageDenoising.cudafe1.stub.c" 1
# 1 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 1
# 91 "/usr/local/cuda/bin/../include/crt/host_runtime.h"
extern "C" {

extern void** __cudaRegisterFatBinary(
  void *fatCubin
);

extern void __cudaUnregisterFatBinary(
  void **fatCubinHandle
);

extern void __cudaRegisterVar(
        void **fatCubinHandle,
        char *hostVar,
        char *deviceAddress,
  const char *deviceName,
        int ext,
        int size,
        int constant,
        int global
);

extern void __cudaRegisterTexture(
        void **fatCubinHandle,
  const struct textureReference *hostVar,
  const void **deviceAddress,
  const char *deviceName,
        int dim,
        int norm,
        int ext
);

extern void __cudaRegisterSurface(
        void **fatCubinHandle,
  const struct surfaceReference *hostVar,
  const void **deviceAddress,
  const char *deviceName,
        int dim,
        int ext
);

extern void __cudaRegisterFunction(
        void **fatCubinHandle,
  const char *hostFun,
        char *deviceFun,
  const char *deviceName,
        int thread_limit,
        uint3 *tid,
        uint3 *bid,
        dim3 *bDim,
        dim3 *gDim,
        int *wSize
);



extern int atexit(void(*)(void)) throw();







}

static void **__cudaFatCubinHandle;

static void __cudaUnregisterBinaryUtil(void)
{
  __cudaUnregisterFatBinary(__cudaFatCubinHandle);
}

# 1 "/usr/local/cuda/bin/../include/common_functions.h" 1
# 90 "/usr/local/cuda/bin/../include/common_functions.h"
# 1 "/usr/local/cuda/bin/../include/math_functions.h" 1 3
# 948 "/usr/local/cuda/bin/../include/math_functions.h" 3
# 1 "/usr/local/cuda/bin/../include/math_constants.h" 1 3
# 949 "/usr/local/cuda/bin/../include/math_functions.h" 2 3
# 2973 "/usr/local/cuda/bin/../include/math_functions.h" 3
# 1 "/usr/local/cuda/bin/../include/crt/func_macro.h" 1 3
# 2974 "/usr/local/cuda/bin/../include/math_functions.h" 2 3
# 4683 "/usr/local/cuda/bin/../include/math_functions.h" 3
extern __attribute__((__weak__)) double rsqrt(double a); double rsqrt(double a)
{
  return 1.0 / sqrt(a);
}

extern __attribute__((__weak__)) double rcbrt(double a); double rcbrt(double a)
{
  double s, t;

  if (__isnan(a)) {
    return a + a;
  }
  if (a == 0.0 || __isinf(a)) {
    return 1.0 / a;
  }
  s = fabs(a);
  t = exp2(-3.3333333333333333e-1 * log2(s));
  t = ((t*t) * (-s*t) + 1.0) * (3.3333333333333333e-1*t) + t;



  if (__signbit(a))

  {
    t = -t;
  }
  return t;
}

extern __attribute__((__weak__)) double sinpi(double a); double sinpi(double a)
{
  int n;

  if (__isnan(a)) {
    return a + a;
  }
  if (a == 0.0 || __isinf(a)) {
    return sin (a);
  }
  if (a == floor(a)) {
    return ((a / 1.0e308) / 1.0e308) / 1.0e308;
  }
  a = remquo (a, 0.5, &n);
  a = a * 3.1415926535897931e+0;
  if (n & 1) {
    a = cos (a);
  } else {
    a = sin (a);
  }
  if (n & 2) {
    a = -a;
  }
  return a;
}

extern __attribute__((__weak__)) double erfinv(double a); double erfinv(double a)
{
  double p, q, t, fa;
  volatile union {
    double d;
    unsigned long long int l;
  } cvt;

  fa = fabs(a);
  if (fa >= 1.0) {
    cvt.l = 0xfff8000000000000ull;
    t = cvt.d;
    if (fa == 1.0) {
      t = a * exp(1000.0);
    }
  } else if (fa >= 0.9375) {




    t = log1p(-fa);
    t = 1.0 / sqrt(-t);
    p = 2.7834010353747001060e-3;
    p = p * t + 8.6030097526280260580e-1;
    p = p * t + 2.1371214997265515515e+0;
    p = p * t + 3.1598519601132090206e+0;
    p = p * t + 3.5780402569085996758e+0;
    p = p * t + 1.5335297523989890804e+0;
    p = p * t + 3.4839207139657522572e-1;
    p = p * t + 5.3644861147153648366e-2;
    p = p * t + 4.3836709877126095665e-3;
    p = p * t + 1.3858518113496718808e-4;
    p = p * t + 1.1738352509991666680e-6;
    q = t + 2.2859981272422905412e+0;
    q = q * t + 4.3859045256449554654e+0;
    q = q * t + 4.6632960348736635331e+0;
    q = q * t + 3.9846608184671757296e+0;
    q = q * t + 1.6068377709719017609e+0;
    q = q * t + 3.5609087305900265560e-1;
    q = q * t + 5.3963550303200816744e-2;
    q = q * t + 4.3873424022706935023e-3;
    q = q * t + 1.3858762165532246059e-4;
    q = q * t + 1.1738313872397777529e-6;
    t = p / (q * t);
    if (a < 0.0) t = -t;
  } else if (fa >= 0.75) {




    t = a * a - .87890625;
    p = .21489185007307062000e+0;
    p = p * t - .64200071507209448655e+1;
    p = p * t + .29631331505876308123e+2;
    p = p * t - .47644367129787181803e+2;
    p = p * t + .34810057749357500873e+2;
    p = p * t - .12954198980646771502e+2;
    p = p * t + .25349389220714893917e+1;
    p = p * t - .24758242362823355486e+0;
    p = p * t + .94897362808681080020e-2;
    q = t - .12831383833953226499e+2;
    q = q * t + .41409991778428888716e+2;
    q = q * t - .53715373448862143349e+2;
    q = q * t + .33880176779595142685e+2;
    q = q * t - .11315360624238054876e+2;
    q = q * t + .20369295047216351160e+1;
    q = q * t - .18611650627372178511e+0;
    q = q * t + .67544512778850945940e-2;
    p = p / q;
    t = a * p;
  } else {




    t = a * a - .5625;
    p = - .23886240104308755900e+2;
    p = p * t + .45560204272689128170e+3;
    p = p * t - .22977467176607144887e+4;
    p = p * t + .46631433533434331287e+4;
    p = p * t - .43799652308386926161e+4;
    p = p * t + .19007153590528134753e+4;
    p = p * t - .30786872642313695280e+3;
    q = t - .83288327901936570000e+2;
    q = q * t + .92741319160935318800e+3;
    q = q * t - .35088976383877264098e+4;
    q = q * t + .59039348134843665626e+4;
    q = q * t - .48481635430048872102e+4;
    q = q * t + .18997769186453057810e+4;
    q = q * t - .28386514725366621129e+3;
    p = p / q;
    t = a * p;
  }
  return t;
}

extern __attribute__((__weak__)) double erfcinv(double a); double erfcinv(double a)
{
  double t;
  volatile union {
    double d;
    unsigned long long int l;
  } cvt;

  if (__isnan(a)) {
    return a + a;
  }
  if (a <= 0.0) {
    cvt.l = 0xfff8000000000000ull;
    t = cvt.d;
    if (a == 0.0) {
        t = (1.0 - a) * exp(1000.0);
    }
  }
  else if (a >= 0.0625) {
    t = erfinv (1.0 - a);
  }
  else if (a >= 1e-100) {




    double p, q;
    t = log(a);
    t = 1.0 / sqrt(-t);
    p = 2.7834010353747001060e-3;
    p = p * t + 8.6030097526280260580e-1;
    p = p * t + 2.1371214997265515515e+0;
    p = p * t + 3.1598519601132090206e+0;
    p = p * t + 3.5780402569085996758e+0;
    p = p * t + 1.5335297523989890804e+0;
    p = p * t + 3.4839207139657522572e-1;
    p = p * t + 5.3644861147153648366e-2;
    p = p * t + 4.3836709877126095665e-3;
    p = p * t + 1.3858518113496718808e-4;
    p = p * t + 1.1738352509991666680e-6;
    q = t + 2.2859981272422905412e+0;
    q = q * t + 4.3859045256449554654e+0;
    q = q * t + 4.6632960348736635331e+0;
    q = q * t + 3.9846608184671757296e+0;
    q = q * t + 1.6068377709719017609e+0;
    q = q * t + 3.5609087305900265560e-1;
    q = q * t + 5.3963550303200816744e-2;
    q = q * t + 4.3873424022706935023e-3;
    q = q * t + 1.3858762165532246059e-4;
    q = q * t + 1.1738313872397777529e-6;
    t = p / (q * t);
  }
  else {




    double p, q;
    t = log(a);
    t = 1.0 / sqrt(-t);
    p = 6.9952990607058154858e-1;
    p = p * t + 1.9507620287580568829e+0;
    p = p * t + 8.2810030904462690216e-1;
    p = p * t + 1.1279046353630280005e-1;
    p = p * t + 6.0537914739162189689e-3;
    p = p * t + 1.3714329569665128933e-4;
    p = p * t + 1.2964481560643197452e-6;
    p = p * t + 4.6156006321345332510e-9;
    p = p * t + 4.5344689563209398450e-12;
    q = t + 1.5771922386662040546e+0;
    q = q * t + 2.1238242087454993542e+0;
    q = q * t + 8.4001814918178042919e-1;
    q = q * t + 1.1311889334355782065e-1;
    q = q * t + 6.0574830550097140404e-3;
    q = q * t + 1.3715891988350205065e-4;
    q = q * t + 1.2964671850944981713e-6;
    q = q * t + 4.6156017600933592558e-9;
    q = q * t + 4.5344687377088206783e-12;
    t = p / (q * t);
  }
  return t;
}

extern __attribute__((__weak__)) float rsqrtf(float a); float rsqrtf(float a)
{
  return (float)rsqrt((double)a);
}

extern __attribute__((__weak__)) float rcbrtf(float a); float rcbrtf(float a)
{
  return (float)rcbrt((double)a);
}

extern __attribute__((__weak__)) float sinpif(float a); float sinpif(float a)
{
  return (float)sinpi((double)a);
}

extern __attribute__((__weak__)) float erfinvf(float a); float erfinvf(float a)
{
  return (float)erfinv((double)a);
}

extern __attribute__((__weak__)) float erfcinvf(float a); float erfcinvf(float a)
{
  return (float)erfcinv((double)a);
}







extern __attribute__((__weak__)) int min(int a, int b); int min(int a, int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) unsigned int umin(unsigned int a, unsigned int b); unsigned int umin(unsigned int a, unsigned int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) long long int llmin(long long int a, long long int b); long long int llmin(long long int a, long long int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) unsigned long long int ullmin(unsigned long long int a, unsigned long long int b); unsigned long long int ullmin(unsigned long long int a, unsigned long long int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) int max(int a, int b); int max(int a, int b)
{
  return a > b ? a : b;
}

extern __attribute__((__weak__)) unsigned int umax(unsigned int a, unsigned int b); unsigned int umax(unsigned int a, unsigned int b)
{
  return a > b ? a : b;
}

extern __attribute__((__weak__)) long long int llmax(long long int a, long long int b); long long int llmax(long long int a, long long int b)
{
  return a > b ? a : b;
}

extern __attribute__((__weak__)) unsigned long long int ullmax(unsigned long long int a, unsigned long long int b); unsigned long long int ullmax(unsigned long long int a, unsigned long long int b)
{
  return a > b ? a : b;
}
# 5006 "/usr/local/cuda/bin/../include/math_functions.h" 3
# 1 "/usr/local/cuda/bin/../include/math_functions_dbl_ptx3.h" 1 3
# 5007 "/usr/local/cuda/bin/../include/math_functions.h" 2 3
# 91 "/usr/local/cuda/bin/../include/common_functions.h" 2
# 164 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 2







#pragma pack()
# 2 "/tmp/tmpxft_00001939_00000000-1_imageDenoising.cudafe1.stub.c" 2
# 1 "/tmp/tmpxft_00001939_00000000-3_imageDenoising.fatbin.c" 1
# 1 "/usr/local/cuda/bin/../include/__cudaFatFormat.h" 1
# 83 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
extern "C" {
# 97 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
typedef struct {
    char* gpuProfileName;
    char* cubin;
} __cudaFatCubinEntry;
# 113 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
typedef struct {
    char* gpuProfileName;
    char* ptx;
} __cudaFatPtxEntry;
# 125 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
typedef struct __cudaFatDebugEntryRec {
    char* gpuProfileName;
    char* debug;
    struct __cudaFatDebugEntryRec *next;
    unsigned int size;
} __cudaFatDebugEntry;

typedef struct __cudaFatElfEntryRec {
    char* gpuProfileName;
    char* elf;
    struct __cudaFatElfEntryRec *next;
    unsigned int size;
} __cudaFatElfEntry;

typedef enum {
      __cudaFatDontSearchFlag = (1 << 0),
      __cudaFatDontCacheFlag = (1 << 1),
      __cudaFatSassDebugFlag = (1 << 2)
} __cudaFatCudaBinaryFlag;
# 152 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
typedef struct {
    char* name;
} __cudaFatSymbol;
# 166 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
typedef struct __cudaFatCudaBinaryRec {
    unsigned long magic;
    unsigned long version;
    unsigned long gpuInfoVersion;
    char* key;
    char* ident;
    char* usageMode;
    __cudaFatPtxEntry *ptx;
    __cudaFatCubinEntry *cubin;
    __cudaFatDebugEntry *debug;
    void* debugInfo;
    unsigned int flags;
    __cudaFatSymbol *exported;
    __cudaFatSymbol *imported;
    struct __cudaFatCudaBinaryRec *dependends;
    unsigned int characteristic;
    __cudaFatElfEntry *elf;
} __cudaFatCudaBinary;
# 203 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
    typedef enum {
        __cudaFatAvoidPTX,
        __cudaFatPreferBestCode,
        __cudaFatForcePTX
    } __cudaFatCompilationPolicy;
# 227 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
void fatGetCubinForGpuWithPolicy( __cudaFatCudaBinary *binary, __cudaFatCompilationPolicy policy, char* gpuName, char* *cubin, char* *dbgInfoFile );
# 240 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
unsigned char fatCheckJitForGpuWithPolicy( __cudaFatCudaBinary *binary, __cudaFatCompilationPolicy policy, char* gpuName, char* *ptx );
# 250 "/usr/local/cuda/bin/../include/__cudaFatFormat.h"
void fatFreeCubin( char* cubin, char* dbgInfoFile );





void __cudaFatFreePTX( char* ptx );


}
# 2 "/tmp/tmpxft_00001939_00000000-3_imageDenoising.fatbin.c" 2

asm(
".section .rodata\n"
".align 32\n"
"__deviceText_$sm_21$:\n"
".quad 0x33010102464c457f,0x0000000000000004,0x0000000100be0002,0x0000000000000000\n"
".quad 0x0000000000004408,0x0000000000000040,0x0038004000140115,0x000100220040000a\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000300000001,0x0000000000000000,0x0000000000000000,0x00000000000008c0\n"
".quad 0x000000000000032e,0x0000000000000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x000000030000000b,0x0000000000000000,0x0000000000000000,0x0000000000000bee\n"
".quad 0x0000000000000089,0x0000000000000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x0000000200000013,0x0000000000000000,0x0000000000000000,0x0000000000000c77\n"
".quad 0x0000000000000438,0x0000002400000002,0x0000000000000001,0x0000000000000018\n"
".quad 0x0000000100000151,0x0000000000000006,0x0000000000000000,0x00000000000010af\n"
".quad 0x00000000000000f8,0x0b00001300000003,0x0000000000000004,0x0000000000000000\n"
".quad 0x00000001000001ee,0x0000000000000002,0x0000000000000000,0x00000000000011a7\n"
".quad 0x0000000000000030,0x0000000400000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x0000000100000163,0x0000000000000002,0x0000000000000000,0x00000000000011d7\n"
".quad 0x0000000000000068,0x0000000400000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x0000000100000128,0x0000000000000006,0x0000000000000000,0x000000000000123f\n"
".quad 0x00000000000008d8,0x1c00001100000003,0x0000000000000004,0x0000000000000000\n"
".quad 0x0000000100000194,0x0000000000000002,0x0000000000000000,0x0000000000001b17\n"
".quad 0x0000000000000038,0x0000000700000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x0000000100000178,0x0000000000000002,0x0000000000000000,0x0000000000001b4f\n"
".quad 0x0000000000000018,0x0000000700000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x000000010000013b,0x0000000000000002,0x0000000000000000,0x0000000000001b67\n"
".quad 0x0000000000000090,0x0000000700000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x00000001000000f7,0x0000000000000006,0x0000000000000000,0x0000000000001bf7\n"
".quad 0x0000000000000528,0x1600000f00000003,0x0000000000000004,0x0000000000000000\n"
".quad 0x00000001000002d8,0x0000000000000002,0x0000000000000000,0x000000000000211f\n"
".quad 0x0000000000000038,0x0000000b00000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x00000001000002b8,0x0000000000000002,0x0000000000000000,0x0000000000002157\n"
".quad 0x0000000000000018,0x0000000b00000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x000000010000010e,0x0000000000000002,0x0000000000000000,0x000000000000216f\n"
".quad 0x0000000000000090,0x0000000b00000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x00000001000000ce,0x0000000000000006,0x0000000000000000,0x00000000000021ff\n"
".quad 0x0000000000000748,0x1d00000d00000003,0x0000000000000004,0x0000000000000000\n"
".quad 0x0000000100000313,0x0000000000000002,0x0000000000000000,0x0000000000002947\n"
".quad 0x0000000000000038,0x0000000f00000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x00000001000002f7,0x0000000000000002,0x0000000000000000,0x000000000000297f\n"
".quad 0x0000000000000008,0x0000000f00000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x00000001000000e1,0x0000000000000002,0x0000000000000000,0x0000000000002987\n"
".quad 0x0000000000000090,0x0000000f00000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x000000010000009d,0x0000000000000006,0x0000000000000000,0x0000000000002a17\n"
".quad 0x0000000000000448,0x1900000b00000003,0x0000000000000004,0x0000000000000000\n"
".quad 0x00000001000001cf,0x0000000000000002,0x0000000000000000,0x0000000000002e5f\n"
".quad 0x0000000000000038,0x0000001300000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x00000001000001af,0x0000000000000002,0x0000000000000000,0x0000000000002e97\n"
".quad 0x0000000000000008,0x0000001300000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x00000001000000b4,0x0000000000000002,0x0000000000000000,0x0000000000002e9f\n"
".quad 0x0000000000000090,0x0000001300000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x0000000100000072,0x0000000000100006,0x0000000000000000,0x0000000000002f2f\n"
".quad 0x0000000000000bf8,0x2200000900000003,0x0000000000000004,0x0000000000000000\n"
".quad 0x000000010000023e,0x0000000000000002,0x0000000000000000,0x0000000000003b27\n"
".quad 0x0000000000000038,0x0000001700000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x0000000100000221,0x0000000000000002,0x0000000000000000,0x0000000000003b5f\n"
".quad 0x0000000000000008,0x0000001700000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x0000000100000086,0x0000000000000002,0x0000000000000000,0x0000000000003b67\n"
".quad 0x0000000000000090,0x0000001700000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x0000000800000208,0x0000000000000003,0x0000000000000000,0x0000000000003bf7\n"
".quad 0x0000000000000100,0x0000001700000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x0000000100000036,0x0000000000100006,0x0000000000000000,0x0000000000003bf7\n"
".quad 0x0000000000000638,0x1800000600000003,0x0000000000000004,0x0000000000000000\n"
".quad 0x0000000100000298,0x0000000000000002,0x0000000000000000,0x000000000000422f\n"
".quad 0x0000000000000038,0x0000001c00000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x0000000100000277,0x0000000000000002,0x0000000000000000,0x0000000000004267\n"
".quad 0x000000000000000c,0x0000001c00000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x000000010000004e,0x0000000000000002,0x0000000000000000,0x0000000000004273\n"
".quad 0x0000000000000090,0x0000001c00000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x000000080000025a,0x0000000000000003,0x0000000000000000,0x0000000000004303\n"
".quad 0x0000000000000100,0x0000001c00000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x0000000100000069,0x0000000000000002,0x0000000000000000,0x0000000000004303\n"
".quad 0x0000000000000104,0x0000000000000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x7472747368732e00,0x747274732e006261,0x746d79732e006261,0x672e766e2e006261\n"
".quad 0x6e692e6c61626f6c,0x672e766e2e007469,0x742e006c61626f6c,0x4e385a5f2e747865\n"
".quad 0x5067616964324d4c,0x6e2e00666669696a,0x5f2e6f666e692e76,0x6964324d4c4e385a\n"
".quad 0x666669696a506761,0x666e692e766e2e00,0x2e747865742e006f,0x50324d4c4e345a5f\n"
".quad 0x6e2e00666669696a,0x5f2e6f666e692e76,0x6a50324d4c4e345a,0x65742e0066666969\n"
".quad 0x4c4e375a5f2e7478,0x6a6a50676169644d,0x2e766e2e0066666a,0x375a5f2e6f666e69\n"
".quad 0x50676169644d4c4e,0x742e0066666a6a6a,0x4e335a5f2e747865,0x666669696a504d4c\n"
".quad 0x666e692e766e2e00,0x4d4c4e335a5f2e6f,0x2e00666669696a50,0x375a5f2e74786574\n"
".quad 0x50676169644e4e4b,0x6e2e00666669696a,0x5f2e6f666e692e76,0x6169644e4e4b375a\n"
".quad 0x00666669696a5067,0x5a5f2e747865742e,0x69696a504e4e4b33,0x692e766e2e006666\n"
".quad 0x4b335a5f2e6f666e,0x666669696a504e4e,0x5f2e747865742e00,0x6a5079706f43345a\n"
".quad 0x692e766e2e006969,0x43345a5f2e6f666e,0x0069696a5079706f,0x736e6f632e766e2e\n"
".quad 0x5f2e3631746e6174,0x696a504e4e4b335a,0x2e766e2e00666669,0x746e6174736e6f63\n"
".quad 0x4e4e4b335a5f2e30,0x2e00666669696a50,0x74736e6f632e766e,0x5a5f2e3631746e61\n"
".quad 0x676169644d4c4e37,0x2e0066666a6a6a50,0x74736e6f632e766e,0x375a5f2e30746e61\n"
".quad 0x50676169644d4c4e,0x6e2e0066666a6a6a,0x6174736e6f632e76,0x43345a5f2e30746e\n"
".quad 0x0069696a5079706f,0x726168732e766e2e,0x4c4e345a5f2e6465,0x666669696a50324d\n"
".quad 0x6e6f632e766e2e00,0x2e3631746e617473,0x50324d4c4e345a5f,0x6e2e00666669696a\n"
".quad 0x6174736e6f632e76,0x4e345a5f2e30746e,0x6669696a50324d4c,0x68732e766e2e0066\n"
".quad 0x385a5f2e64657261,0x67616964324d4c4e,0x2e00666669696a50,0x74736e6f632e766e\n"
".quad 0x5a5f2e3631746e61,0x616964324d4c4e38,0x00666669696a5067,0x736e6f632e766e2e\n"
".quad 0x5a5f2e30746e6174,0x616964324d4c4e38,0x00666669696a5067,0x736e6f632e766e2e\n"
".quad 0x5f2e3631746e6174,0x6169644e4e4b375a,0x00666669696a5067,0x736e6f632e766e2e\n"
".quad 0x5a5f2e30746e6174,0x676169644e4e4b37,0x2e00666669696a50,0x74736e6f632e766e\n"
".quad 0x5a5f2e3631746e61,0x69696a504d4c4e33,0x632e766e2e006666,0x30746e6174736e6f\n"
".quad 0x504d4c4e335a5f2e,0x5f0000666669696a,0x6964324d4c4e385a,0x666669696a506761\n"
".quad 0x324d4c4e345a5f00,0x5f00666669696a50,0x6d735f616475635f,0x725f7063725f3032\n"
".quad 0x5a5f003233665f6e,0x676169644d4c4e37,0x5f0066666a6a6a50,0x696a504d4c4e335a\n"
".quad 0x4b375a5f00666669,0x6a50676169644e4e,0x335a5f0066666969,0x6669696a504e4e4b\n"
".quad 0x706f43345a5f0066,0x65740069696a5079,0x00006567616d4978,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000010003000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000020003000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000030003000000,0x0000000000000000,0x0000000000000000,0x0000000003000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000003000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x00001c0003000000,0x3800000000000000,0x0000000000000006\n"
".quad 0x00001f0003000000,0x0000000000000000,0x0000000000000000,0x0000210003000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000170003000000,0xf800000000000000\n"
".quad 0x000000000000000b,0x00001a0003000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000130003000000,0x4800000000000000,0x0000000000000004,0x0000160003000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x00000f0003000000,0x4800000000000000\n"
".quad 0x0000000000000007,0x0000120003000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x00000b0003000000,0x2800000000000000,0x0000000000000005,0x00000e0003000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000070003000000,0xd800000000000000\n"
".quad 0x0000000000000008,0x00000a0003000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000040003000000,0xf800000000000000,0x0000000000000000,0x0000060003000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000090003000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000080003000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000150003000000,0x0000000000000000,0x0000000000000000,0x0000140003000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000050003000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x00001b0003000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000190003000000,0x0000000000000000,0x0000000000000000,0x0000180003000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000200003000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x00001e0003000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x00001d0003000000,0x0000000000000000,0x0000000000000000,0x00000d0003000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x00000c0003000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000110003000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000100003000000,0x0000000000000000,0x0100000000000000,0x00001c1012000000\n"
".quad 0x3800000000000000,0x1300000000000006,0x0000171012000000,0xc800000000000000\n"
".quad 0x2100000000000009,0xa800170012000000,0x3000000000000006,0x3800000000000002\n"
".quad 0x0000131012000000,0x4800000000000000,0x4900000000000004,0x00000f1012000000\n"
".quad 0x1800000000000000,0x5600000000000005,0x00000b1012000000,0x2800000000000000\n"
".quad 0x6700000000000005,0x0000071012000000,0xa800000000000000,0x7400000000000006\n"
".quad 0x0000041012000000,0xf800000000000000,0x8000000000000000,0x000000001a000000\n"
".quad 0x0000000000000000,0xe400000000000000,0x042800440400005d,0x042c00000094001c\n"
".quad 0x032c0000008400dc,0x042006400020001c,0x232c00000098009c,0x04188e4000a001dc\n"
".quad 0x032c00000088011c,0x232008400030209c,0xe718804000b021dc,0x0480000000000021\n"
".quad 0x041800000009215e,0x00180000000120de,0x005000cfc000311c,0x065000cfc000515c\n"
".quad 0xa38011c000fc421d,0xe420004000a0219c,0x00280040008001dd,0x005800d0dfc090dc\n"
".quad 0x845800d0dfc0a15c,0x00140600000d211c,0x845800d0dfc080dc,0x031406000015215c\n"
".quad 0x846000c00020409c,0x03140600000d201c,0x036000c0004050dc,0x43200fc00010611c\n"
".quad 0x436800000008001c,0x434800400093f15c,0x85680000000c001c,0xe79400000000401c\n"
".quad 0x008000000000001d,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0400000000000000,0x0800000000000c0c\n"
".quad 0x040000000c000000,0x000000002c000802,0x1900080a04000000,0x0300100020000000\n"
".quad 0xff000c1704001019,0x00000c0002ffffff,0xff000c17040011f0,0x0000080001ffffff\n"
".quad 0xff000c17040011f0,0x0000000000ffffff,0x0c00080d040021f0,0xe400000001000100\n"
".quad 0x042800440400005d,0x042c00000094001c,0x032c0000008400dc,0x04200640002004dc\n"
".quad 0x232c00000098009c,0x04188e4000a131dc,0x032c00000088011c,0x23200840003025dc\n"
".quad 0xe718804000b171dc,0x0480000000000021,0x04180000005d209e,0x00180000004d201e\n"
".quad 0xe45000cfc00020dc,0x0028000000fc065d,0xe45000cfc000009c,0xe228000000fc06dd\n"
".quad 0x061b01000000001d,0xe48011c000fc241d,0xe428000000fc069d,0xe428000000fc011d\n"
".quad 0xe428000000fc061d,0x004000000000001d,0x00500000000031dc,0x865000f01000219c\n"
".quad 0x008011c000fc621c,0x065000f00000219c,0x008011c000fc651d,0x005000000044919d\n"
".quad 0x005000000040815d,0x005800000018619c,0x00300c00001452dc,0x003000800004015c\n"
".quad 0x025000000048a19d,0x0030f29cbc14515c,0x003016000018619c,0x02300a4000c0619c\n"
".quad 0x0032fee2a8ec619c,0x00208ef0bf0061dc,0x205800cfc0006180,0x006000000018019c\n"
".quad 0x00c80000000863dc,0x005000efe000219c,0x00580000003cf3c0,0x06303400003c821c\n"
".quad 0x008011c000fc631d,0x00303600003c925c,0x005000000045519d,0x00303200003ca69c\n"
".quad 0x005000000041429d,0x005800000018619c,0x00300c000028a29c,0x00220e400014f1dc\n"
".quad 0x005000000049619d,0x005000000010f11c,0x003014000018629c,0x023000800024019c\n"
".quad 0x0030f29cbc1462dc,0x0230164000c0a19c,0x0032fee2a8ec619c,0x00208ef0bf0063dc\n"
".quad 0x205800cfc0006184,0x006000000018019c,0x02c800000008665c,0x0428f29cbc15819c\n"
".quad 0x00200000006063dc,0x0458000000659644,0x001000000009219c,0x003010000065451c\n"
".quad 0x003012000065561c,0x003034000065659c,0x065000000011911c,0x008011c000fc621d\n"
".quad 0x00220e40001591dc,0x005000000044d55d,0x005000000040c19d,0x005800000055555c\n"
".quad 0x02302a000018655c,0x0028f29cbc14f3c0,0x005000000048e19d,0x00302a000018665c\n"
".quad 0x023000800034019c,0x0030f29cbc14655c,0x02302a4000c1919c,0x0032fee2a8ec619c\n"
".quad 0x00208ef0bf0063dc,0x205800cfc0006184,0x006000000018019c,0x00c800000008665c\n"
".quad 0x0058000000659644,0x005000000044919d,0x003028000064c51c,0x005800000018619c\n"
".quad 0x005000000040831d,0x003030000064d69c,0x00300c000030c31c,0x00302c000064e6dc\n"
".quad 0x005000000048a19d,0x00220e40001593dc,0x003018000018631c,0x005000000011911c\n"
".quad 0x02307e000000019c,0x0228f29cbc14f3c4,0x0030f29cbc14619c,0x005000cfe000001c\n"
".quad 0x00300c4000c0c61c,0x065000cfe000219c,0x028011c000fc631d,0x0032fee2a8ed819c\n"
".quad 0x00208ef0bf0065dc,0x205800cfc0006188,0x006000000018019c,0x00c800000008659c\n"
".quad 0x0058000000596588,0x003028000058851c,0x003034000058961c,0x003036000058a69c\n"
".quad 0x005000000044d19d,0x005000000040c21d,0x005800000018619c,0x00300c000020821c\n"
".quad 0x005000000048e19d,0x005000000011611c,0x003010000018619c,0x00220e40001565dc\n"
".quad 0x02302a4000c0619c,0x0228f29cbc14f3c8,0x0032fee2a8ec621c,0x00208ef0bf0087dc\n"
".quad 0x005000d00000219c,0x205800cfc000820c,0x066000000020055c,0x008011c000fc621d\n"
".quad 0x00c800000009565c,0x005000d01000219c,0x005800000065964c,0x003028000064c31c\n"
".quad 0x065000000011911c,0x008011c000fc651d,0x003030000064d19c,0x003034000064e1dc\n"
".quad 0x00220e40001591dc,0x005000000044935d,0x005000000040839d,0x005800000034d35c\n"
".quad 0x00301a000038e39c,0x005000000048a35d,0x00301c000034d39c,0x005000000045535d\n"
".quad 0x0030164000c0e2dc,0x005000000041439d,0x005800000034d35c,0x00301a000038e39c\n"
".quad 0x025000000049635d,0x0032fee2a8ecb2dc,0x00301c000034d35c,0x00208ef0bf00b7dc\n"
".quad 0x00300a4000c0d15c,0x025800cfc000b2cc,0x2032fee2a8ec535c,0x00600000002c015c\n"
".quad 0x00208ef0bf00d9dc,0x00c80000000852dc,0x005800cfc000d350,0x20580000002cb2cc\n"
".quad 0x006000000034015c,0x02220e400014b3dc,0x0028f29cbc14f35c,0x04c800000008515c\n"
".quad 0x00200000003cd61c,0x0058000000145150,0x00301800002c821c,0x00300c00002c919c\n"
".quad 0x00218ed0100001dc,0x02300e00002ca1dc,0x0028f29cbc158604,0x005000000010b11c\n"
".quad 0x00220e40001453dc,0x003010000015469c,0x00300c00001556dc,0x00300e000015665c\n"
".quad 0x025000000010511c,0xe728f29cbc158604,0x074003ffebe00001,0xe450000003a00100\n"
".quad 0x0028004000d0001d,0x00580000006c409c,0x00220e40004581dc,0x005000cfe000001e\n"
".quad 0x00580000006440dc,0x045000000009119d,0x0020104000d0015c,0x00500000000d21dd\n"
".quad 0x005800000068401c,0x003004000018511c,0x005000000001009d,0x00300600001c519c\n"
".quad 0x005800d0dfc040dc,0x003000000008501c,0x845800d0dfc0611c,0x00140600000d209c\n"
".quad 0xa35800d0dfc0001c,0xe420264000a1715c,0x842800400080019d,0x03140600001120dc\n"
".quad 0x846000c00020209c,0x031406000001201c,0x036000c0004030dc,0x43200dc00010511c\n"
".quad 0x436800000008001c,0x434800400093f15c,0x85680000000c001c,0xe79400000000401c\n"
".quad 0x038000000000001d,0x036000c00004401c,0x035800c00060001c,0x044800c0000c015c\n"
".quad 0x031c00000014215c,0xe7198ec0000c51dc,0x0040000000800001,0x00c800000010401c\n"
".quad 0x003000800054411c,0xe73000000010011e,0x034000000760001d,0xe71a8e0000fc01dc\n"
".quad 0x0240000003000001,0x033801fffffc401c,0x037800000000015c,0x034800c0007c515e\n"
".quad 0x034800ffffdc519c,0xe7198ec0000461dc,0x0040000000400001,0xe7c800000010411c\n"
".quad 0x034000000620001d,0x024800ffffe0519c,0x033a00000000411c,0x026000000018001c\n"
".quad 0x423801fffffc001c,0x0038fe000000001c,0x00c800000010019c,0x00300c800054001c\n"
".quad 0x02300c000000601e,0x033801fffffc001c,0x03110e0000fc019c,0x034800000018515d\n"
".quad 0x034800c003d0515c,0x436000c0005c515c,0x436800000014411c,0xe76800000010011c\n"
".quad 0x034000000420001d,0x034800fffc0c015c,0xe71a0ec0000451dc,0x0240000003a00001\n"
".quad 0xe23801fffffc419c,0x42180000000c02dd,0x0338fe00000061dc,0x006000000014b2dc\n"
".quad 0x02c800000010721c,0x003a00000000411c,0x00301080005471dc,0x02309000001c825e\n"
".quad 0x003801fffffc929c,0x42311000001c821e,0x003802000000a29c,0x032e8e00002091dc\n"
".quad 0x046800000028b1dc,0x032010c00007f21c,0x03580000001471dc,0x036800000028515c\n"
".quad 0x436800c00008725c,0x036800000014815c,0x031a8e0000fc91dc,0x034800fffc10021c\n"
".quad 0x036800c00004701c,0x031aa00000fc51dc,0x235800000020a15c,0x031a800000fc01dc\n"
".quad 0x034800c000045140,0x036000c00004501c,0x43310c000014001c,0xe76800000010011c\n"
".quad 0x004000000020001d,0xe7c800000010411c,0x009000000000001d,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x003ca3d70a411000,0x713f800000408000\n"
".quad 0x04bf8000003f4a3d,0x080000000000140c,0x100000000c000000,0x0400000014000000\n"
".quad 0x000000002c000802,0x1600080a04000000,0x0300180020000000,0xff000c1704001819\n"
".quad 0x0000140004ffffff,0xff000c17040011f0,0x0000100003ffffff,0xff000c17040011f0\n"
".quad 0x00000c0002ffffff,0xff000c17040011f0,0x0000080001ffffff,0xff000c17040011f0\n"
".quad 0x0000000000ffffff,0x2400080d040021f0,0xe400000002000300,0x042800440400005d\n"
".quad 0x042c00000094001c,0x032c0000008400dc,0x04200640002001dc,0x232c00000098009c\n"
".quad 0x04188e4000a071dc,0x032c00000088011c,0x23200840003022dc,0xe718804000b0b1dc\n"
".quad 0x0480000000000021,0x04180000002d209e,0x00180000001d201e,0xe45000cfc00020dc\n"
".quad 0x0028000000fc031d,0x065000cfc000009c,0xe28011c000fc211d,0xe41b01000000001d\n"
".quad 0x004000000000001d,0x005000000000355c,0x865000f01000251c,0x008011c000fd421c\n"
".quad 0x065000f00000251c,0x008011c000fd441d,0x005000efe000251c,0x005000000014925d\n"
".quad 0x005000000010821d,0x005800000024925c,0x005000000015139d,0x023012000020835c\n"
".quad 0x0028f29cbc14c45c,0x003000800004025c,0x025000000018a21d,0x0030f29cbc1493dc\n"
".quad 0x00301a000020821c,0x00301e4000c0821c,0x025800000038e39c,0x0032fee2a8ec821c\n"
".quad 0x005000000019249d,0x00208ef0bf0081dc,0x205800cfc0008200,0x006000000020021c\n"
".quad 0x00c800000008835c,0x065800000034d340,0x008011c000fd421d,0x04220e400014d1dc\n"
".quad 0x001000000009251c,0x045000000011035d,0x002000000031141c,0x06301c000034d45c\n"
".quad 0x008011c000fd431d,0x005000cfe000251c,0x005000000014925d,0x005000000014d35d\n"
".quad 0x005000000010c31d,0x005800000034d35c,0x005000000018e39d,0x00301a000030c35c\n"
".quad 0x005800000024925c,0x00307e000000031c,0x02301a000038e39c,0x0030f29cbc14c35c\n"
".quad 0x005000000018a4dd,0x005000000010831d,0x003022000049229c,0x00301a4000c0e21c\n"
".quad 0x063012000030c25c,0x008011c000fd431d,0x003000800034049c,0x00301200004d325c\n"
".quad 0x023000800024045c,0x0030f29cbc15249c,0x0230244000c0925c,0x0230f29cbc15145c\n"
".quad 0x0032fee2a8ec925c,0x0030224000c0a29c,0x02208ef0bf0093dc,0x0232fee2a8ec821c\n"
".quad 0x0032fee2a8eca29c,0x005800cfc0009244,0x00208ef0bf00a1dc,0x20208ef0bf0085dc\n"
".quad 0x006000000024025c,0x005800cfc000a280,0x005800cfc0008208,0x20c800000008925c\n"
".quad 0x206000000028029c,0x006000000020021c,0x00c800000008a29c,0x0058000000249244\n"
".quad 0x00c800000008821c,0x005800000028a280,0x00220e40001493dc,0x0058000000208208\n"
".quad 0x005000d00000251c,0x00220e400014a1dc,0x00220e40001485dc,0x005000000014d25d\n"
".quad 0x005000000010c31d,0x025800000024935c,0x0028f29cbc150400,0x065000cfe000001c\n"
".quad 0x008011c000fd421d,0x00301a000030c31c,0x005000d01000251c,0x025000000018e35d\n"
".quad 0x0028f29cbc150404,0x063018000034d4dc,0x028011c000fd431d,0x0028f29cbc150408\n"
".quad 0x005000000014925d,0x005000000010821d,0x005800000024925c,0x003012000020821c\n"
".quad 0x005000000014d35d,0x005000000018a25d,0x005000000010c31d,0x0030244000c1329c\n"
".quad 0x005800000034d35c,0x003010000024925c,0x02301a000030c31c,0x0032fee2a8eca21c\n"
".quad 0x0030224000c0925c,0x005000000018e29d,0x02208ef0bf0087dc,0x0032fee2a8ec925c\n"
".quad 0x003018000028a29c,0x005800cfc000820c,0x00301e4000c0a29c,0x02208ef0bf0099dc\n"
".quad 0x2032fee2a8eca29c,0x006000000020021c,0x005800cfc0009250,0x00208ef0bf00abdc\n"
".quad 0x20c800000008821c,0x006000000024025c,0x005800cfc000a294,0x005800000020820c\n"
".quad 0x20c800000008925c,0x026000000028029c,0x0028f29cbc15031c,0x00220e40001481dc\n"
".quad 0x0058000000249250,0x04c800000008a21c,0x002000000040c31c,0x00220e40001493dc\n"
".quad 0x00218ed0100001dc,0x0258000000208214,0x0028f29cbc14c304,0x02220e40001483dc\n"
".quad 0xe728f29cbc14c304,0x004003ffef600001,0xe2220e400044c1dc,0x04190dfc0000001d\n"
".quad 0xa32000400057f09c,0xe4200e4000a0b0dc,0x042800400080011d,0x8420000000fc001c\n"
".quad 0x031406000009209c,0x032009c00010311c,0x846000c00040209c,0x431406000001201c\n"
".quad 0x434800400093f15c,0x856800000008001c,0xe79400000000401c,0x008000000000001d\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x003ca3d70a411000\n"
".quad 0x713f800000408000,0x04437f00003f4a3d,0x080000000000140c,0x100000000c000000\n"
".quad 0x0400000014000000,0x000000002c000802,0x2100080a04000000,0x0300180020000000\n"
".quad 0xff000c1704001819,0x0000140004ffffff,0xff000c17040011f0,0x0000100003ffffff\n"
".quad 0xff000c17040011f0,0x00000c0002ffffff,0xff000c17040011f0,0x0000080001ffffff\n"
".quad 0xff000c17040011f0,0x0000000000ffffff,0x0c00080d040021f0,0xe400000001000100\n"
".quad 0x042800440400005d,0x042c00000094001c,0x032c0000008400dc,0x04200640002006dc\n"
".quad 0x232c00000098009c,0x04188e4000a1b1dc,0x032c00000088011c,0x232008400030271c\n"
".quad 0xe718804000b1c1dc,0x0480000000000021,0x04180000007120de,0xe2180000006d209e\n"
".quad 0xe41b01000000001d,0xe428000000fc04dd,0xe428000000fc061d,0xe428000000fc065d\n"
".quad 0xe428000000fc011d,0x0028000000fc069d,0x005000cfc00030dc,0x005000cfc000209c\n"
".quad 0xe2500000000031dc,0x001b01000000015d,0xe25000000014219c,0xe41b0100000002dd\n"
".quad 0xe428000000fc03dd,0x004000000000001d,0x00500000002c755c,0x005000f01000651c\n"
".quad 0x86500000002c35dc,0x008011c000fd431c,0x005000f01000259c,0x005000f00000651c\n"
".quad 0x865000cfe000b2dc,0x008011c000fd641c,0x065000f00000259c,0x008011c000fd421d\n"
".quad 0x005000000035135d,0x005000000031031d,0x005800000034d41c,0x005000efe000651c\n"
".quad 0x005000000039235d,0x003020000030c31c,0x86218ed01000b1dc,0x008011c000fd641c\n"
".quad 0x003018000034d31c,0x005000efe000259c,0x065000000030f3dc,0x008011c000fd431d\n"
".quad 0x005000000025125d,0x005000000021021d,0x045800000024941c,0x001000000019251c\n"
".quad 0x005000000029225d,0x863020000020821c,0x008011c000fd641c,0x003010000024921c\n"
".quad 0x045000000020f3dc,0x061000000009259c,0x008011c000fd421d,0x005000000035135d\n"
".quad 0x005000000031031d,0x005800000034d41c,0x005000cfe000651c,0x005000000039235d\n"
".quad 0x863020000030c31c,0x008011c000fd641c,0x003018000034d31c,0x005000cfe000259c\n"
".quad 0x065000000030f3dc,0x008011c000fd431d,0x005000000025125d,0x005000000021021d\n"
".quad 0x005800000024941c,0x005000d00000651c,0x005000000029225d,0x863020000020821c\n"
".quad 0x008011c000fd641c,0x003010000024921c,0x005000d00000259c,0x065000000020f3dc\n"
".quad 0x008011c000fd421d,0x005000000035135d,0x005000000031031d,0x005800000034d41c\n"
".quad 0x005000d01000651c,0x005000000039235d,0x863020000030c31c,0x008011c000fd641c\n"
".quad 0x003018000034d59c,0x865000000058f3dc,0x008011c000fd431c,0x065000d01000259c\n"
".quad 0x008011c000fd651d,0x005000000025125d,0x005000000021021d,0x005800000024925c\n"
".quad 0x005000000029229d,0x003012000020821c,0x005000000035535d,0x005000000031425d\n"
".quad 0x003010000028a21c,0x005800000034d31c,0x005000000039629d,0x003018000024925c\n"
".quad 0x005000000020f31c,0x003012000028a21c,0xe75000000020c3dc,0x024003fff5c00001\n"
".quad 0x0628f29cbc15a2dc,0x008011c000fc621d,0x005800000014519c,0x02300c000000019c\n"
".quad 0x0030f29cbc14619c,0x005000cfe000515c,0x00300c4000c0f19c,0x02218ed0100053dc\n"
".quad 0x0032fee2a8ec619c,0x00208ef0bf0061dc,0x205800cfc0006180,0x006000000018019c\n"
".quad 0x00c800000008619c,0x0058000000186180,0x00220e40000461dc,0x045000000010611c\n"
".quad 0x002000000068b69c,0x003032000018865c,0x003030000018961c,0xe73026000018a4dc\n"
".quad 0x004003fff2a00005,0x005000cfe000001c,0xe7218ed0100001dc,0x074003fff2000001\n"
".quad 0x0650000003c00100,0xe48011c000fc221d,0x0028004000d0001d,0x005800000060409c\n"
".quad 0x00220e400005a1dc,0x005000cfe000001e,0x04580000004c40dc,0x0020104000d0015c\n"
".quad 0x005800000064401c,0x005000000008919d,0x00500000000ca1dd,0x003004000018511c\n"
".quad 0x005000000000809d,0x00300600001c519c,0x005800d0dfc040dc,0x003000000008501c\n"
".quad 0x845800d0dfc0611c,0x00140600000d209c,0xa35800d0dfc0001c,0xe420364000a1c15c\n"
".quad 0x842800400080019d,0x03140600001120dc,0x846000c00020209c,0x031406000001201c\n"
".quad 0x036000c0004030dc,0x43200dc00010511c,0x436800000008001c,0x434800400093f15c\n"
".quad 0x85680000000c001c,0xe79400000000401c,0x038000000000001d,0x036000c00004401c\n"
".quad 0x035800c00060001c,0x044800c0000c015c,0x031c00000014215c,0xe7198ec0000c51dc\n"
".quad 0x0040000000800001,0x00c800000010401c,0x003000800014411c,0xe73000000010011e\n"
".quad 0x034000000760001d,0xe71a8e0000fc01dc,0x0240000003000001,0x033801fffffc401c\n"
".quad 0x037800000000015c,0x034800c0007c515e,0x034800ffffdc519c,0xe7198ec0000461dc\n"
".quad 0x0040000000400001,0xe7c800000010411c,0x034000000620001d,0x034800ffffe0519c\n"
".quad 0x026000000018001c,0x023a00000000411c,0x423801fffffc001c,0x0038fe000000001c\n"
".quad 0x00c800000010019c,0x00300c800014001c,0x02300c000000601e,0x033801fffffc001c\n"
".quad 0x03110e0000fc019c,0x034800000018515d,0x034800c003d0515c,0x436000c0005c515c\n"
".quad 0x436800000014411c,0xe76800000010011c,0x034000000420001d,0x034800fffc0c015c\n"
".quad 0xe71a0ec0000451dc,0x0240000003a00001,0xe23801fffffc419c,0x42180000000c02dd\n"
".quad 0x0338fe00000061dc,0x006000000014b2dc,0x02c800000010721c,0x003a00000000411c\n"
".quad 0x00301080001471dc,0x02309000001c825e,0x003801fffffc929c,0x42311000001c821e\n"
".quad 0x003802000000a29c,0x032e8e00002091dc,0x046800000028b1dc,0x032010c00007f21c\n"
".quad 0x03580000001471dc,0x036800000028515c,0x436800c00008725c,0x036800000014815c\n"
".quad 0x031a8e0000fc91dc,0x034800fffc10021c,0x031aa00000fc51dc,0x036800c00004701c\n"
".quad 0x235800000020a15c,0x031a800000fc01dc,0x034800c000045140,0x036000c00004501c\n"
".quad 0x43310c000014001c,0xe76800000010011c,0x004000000020001d,0xe7c800000010411c\n"
".quad 0x009000000000001d,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0xcd00000000000000\n"
".quad 0x04bf8000003dcccc,0x080000000000140c,0x100000000c000000,0x0400000014000000\n"
".quad 0x000000002c000802,0x2300080a04000000,0x0300180020000000,0xff000c1704001819\n"
".quad 0x0000140004ffffff,0xff000c17040011f0,0x0000100003ffffff,0xff000c17040011f0\n"
".quad 0x00000c0002ffffff,0xff000c17040011f0,0x0000080001ffffff,0xff000c17040011f0\n"
".quad 0x0000000000ffffff,0x2400080d040021f0,0xe400000002000300,0x042800440400005d\n"
".quad 0x042c00000094001c,0x032c0000008400dc,0x04200640002005dc,0x032c00000098009c\n"
".quad 0x04188e4000a171dc,0x032c00000088011c,0x032008400030261c,0xe718804000b181dc\n"
".quad 0x0480000000000021,0x041800000061209e,0xe2180000005d201e,0xe41b0100000002dd\n"
".quad 0x0028000000fc03dd,0x005000cfc00021dc,0x005000cfc000001c,0xe2500000002c74dc\n"
".quad 0x001b01000000051d,0xe25000000050055c,0xe41b01000000059d,0xe428000000fc049d\n"
".quad 0x004000000000001d,0x00500000005930dc,0x005000f01001509c,0x865000000058745c\n"
".quad 0x008011c000fc211c,0x005000f01000041c,0x005000f00001509c,0x865000cfe001659c\n"
".quad 0x008011c000fd021c,0x065000f00000041c,0x008011c000fc231d,0x005000000014915d\n"
".quad 0x005000000010809d,0x005800000014511c,0x005000000018a21d,0x003008000008209c\n"
".quad 0x06218ed0100161dc,0x008011c000fd011d,0x003004000020821c,0x005000efe001509c\n"
".quad 0x005000000021249c,0x065000000034515d,0x008011c000fc221d,0x005000000030409d\n"
".quad 0x005000efe000041c,0x005800000014511c,0x005000000038631d,0x063008000008209c\n"
".quad 0x008011c000fd011d,0x043004000030c31c,0x041000000001241c,0x001000000055209c\n"
".quad 0x005000000031249c,0x065000000024515d,0x008011c000fc231d,0x005000000020409d\n"
".quad 0x005800000014511c,0x005000000028621d,0x863008000008209c,0x008011c000fd011c\n"
".quad 0x003004000020821c,0x005000cfe000041c,0x005000cfe001509c,0x065000000021249c\n"
".quad 0x008011c000fc221d,0x005000000034515d,0x005000000030409d,0x005800000014511c\n"
".quad 0x005000000038631d,0x063008000008209c,0x008011c000fd011d,0x003004000030c31c\n"
".quad 0x005000d00000041c,0x005000d00001509c,0x005000000031249c,0x065000000024515d\n"
".quad 0x008011c000fc231d,0x005000000020409d,0x005800000014511c,0x005000000028621d\n"
".quad 0x863008000008209c,0x008011c000fd011c,0x003004000020841c,0x865000d01001509c\n"
".quad 0x008011c000fc221c,0x005000000041209c,0x065000d01000041c,0x008011c000fd041d\n"
".quad 0x005000000034515d,0x00500000003040dd,0x005800000014511c,0x005000000038615d\n"
".quad 0x00300800000c30dc,0x005000000025119d,0x005000000021011d,0x00300600001450dc\n"
".quad 0x005800000018619c,0x005000000029215d,0x00300c000010411c,0x00500000000c20dc\n"
".quad 0x003008000014509c,0xe75000000008349c,0x004003fff5c00001,0x025800000051409c\n"
".quad 0x0028f29cbc14f0dc,0x00300400002cb09c,0x025000cfe001451c,0x0030f29cbc14209c\n"
".quad 0x00218ed0100143dc,0x0230044000c1209c,0x0032fee2a8ec209c,0x00208ef0bf0021dc\n"
".quad 0x205800cfc0002080,0x006000000008009c,0x00c800000008209c,0x0058000000082080\n"
".quad 0x04220e40000421dc,0xe7200000003c33dc,0x004003fff3400005,0x005000cfe000b2dc\n"
".quad 0xe7218ed01000b1dc,0x004003fff2a00001,0xe2220e400004f1dc,0x04190dfc0000001d\n"
".quad 0x042000400017f09c,0x0320000000fc001c,0xe4202e4000a180dc,0x842800400080011d\n"
".quad 0x841406000009209c,0x031406000001201c,0x036000c00040209c,0x432009c00010311c\n"
".quad 0x436800000008001c,0x854800400093f15c,0xe79400000000401c,0x008000000000001d\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0xcd00000000000000,0x04437f00003dcccc\n"
".quad 0x080000000000140c,0x100000000c000000,0x0400000014000000,0x000000002c000802\n"
".quad 0x1800080a04000000,0x0300180020000000,0xff000c1704001819,0x0000140004ffffff\n"
".quad 0xff000c17040011f0,0x0000100003ffffff,0xff000c17040011f0,0x00000c0002ffffff\n"
".quad 0xff000c17040011f0,0x0000080001ffffff,0xff000c17040011f0,0x0000000000ffffff\n"
".quad 0x0c00080d040021f0,0xe400000001000100,0x042800440400005d,0x032c00000094001c\n"
".quad 0x045000400020001c,0x032c0000008403dc,0x04480000003c05dc,0x232c00000098009c\n"
".quad 0x04188e4000a171dc,0x032c0000008804dc,0x23202640003026dc,0xe718804000b1b1dc\n"
".quad 0xe280000000000021,0x03180000000c00dd,0x034800c0000c001c,0x042006400020209c\n"
".quad 0x04180000005d215e,0x04180000006d20de,0x041800000001201c,0xe21800000009211c\n"
".quad 0xe41b0100000002dd,0x0028000000fc081d,0x005000cfc00030dc,0x005000cfc000509c\n"
".quad 0x005000cfc000001c,0x005000cfc00041dc,0x00500000002c77dc,0x005000f01000079c\n"
".quad 0x86500000002c375c,0x008011c000fde31c,0x005000f01000271c,0x005000f00000079c\n"
".quad 0x865000cfe000b2dc,0x008011c000fdc11c,0x865000f00000271c,0x008011c000fde21c\n"
".quad 0x865000efe000079c,0x008011c000fdc41c,0x865000efe000271c,0x048011c000fde51c\n"
".quad 0x061000000001279c,0x008011c000fdc61d,0x005000000034515d,0x005000000030411d\n"
".quad 0x045800000014531c,0x001000000009271c,0x005000000038615d,0x003018000010411c\n"
".quad 0x003008000014531c,0x005000000025135d,0x865000000021039d,0x008011c000fde11c\n"
".quad 0x005000000029241d,0x005000cfe000079c,0x065800000034d35c,0x008011c000fdc21d\n"
".quad 0x005000000032085c,0x00301a000038e35c,0x005000cfe000271c,0x86301a000041081c\n"
".quad 0x008011c000fde31c,0x065000d00000079c,0x008011c000fdc41d,0x005000000055955d\n"
".quad 0x005000000051851d,0x005000000059a59d,0x005800000055555c,0x005000000082161c\n"
".quad 0x00302a000051451c,0x005000d00000271c,0x003028000059665c,0x00218ed01000b1dc\n"
".quad 0x865000000014915d,0x008011c000fde51c,0x005000000065881c,0x005000000010811d\n"
".quad 0x065800000014515c,0x008011c000fdc61d,0x005000000018a19d,0x005000d01000079c\n"
".quad 0x00300a000010411c,0x005000d01000271c,0x863008000018685c,0x068011c000fde11c\n"
".quad 0x008011c000fdc21d,0x005000000035135d,0x005000000031031d,0x005800000034d35c\n"
".quad 0x005000000039239d,0x00301a000030c31c,0x005000000086045c,0x005000000055941d\n"
".quad 0x005000000051835d,0x005800000041041c,0x005000000014949d,0x005000000010821d\n"
".quad 0x003018000038e15c,0x005000000059a25d,0x003020000034d31c,0x005000000015139c\n"
".quad 0x005800000049235c,0x005000000018a15d,0x003018000024911c,0x00301a000020819c\n"
".quad 0x005000000010e21c,0x00300c000014511c,0xe75000000010881c,0x034003fff5c00001\n"
".quad 0x034800fffff4f01c,0x034800fffff5311c,0x035000000000001c,0x042000000010401c\n"
".quad 0x631800000001201c,0x02400000003d311c,0x0330f29cbc14001c,0x006000c00008411e\n"
".quad 0x0230004000c2001c,0x0032fee2a8ec001c,0x00208ef0bf0001dc,0x205800cfc0000000\n"
".quad 0x006000000000001c,0x00c800000008001c,0x8558000000000000,0x04c900000000401c\n"
".quad 0xe450ee0000ffffdc,0xe228000000fc001d,0xe41b01000000015d,0xe428000000fc071d\n"
".quad 0xe428000000fc065d,0xe428000000fc061d,0xe428000000fc011d,0x0028000000fc07dd\n"
".quad 0x005000000014385c,0xe45000f01000281c,0x862800000080019d,0x008011c000fe021c\n"
".quad 0xc55000f00000281c,0xe4c100000000041c,0x862800000080069d,0x028011c000fe031c\n"
".quad 0x0028f29cbc15f1dc,0x005000efe000281c,0xe4220e40000501dc,0x00280000008003dd\n"
".quad 0x065000000011011c,0x048011c000fe051d,0x04200000007c71dc,0x001000000009281c\n"
".quad 0x00303000004082dc,0x00220e40000511dc,0x003032000040961c,0x005000000011111c\n"
".quad 0x003038000040a41c,0xe4220e40000523dc,0x062800000080071d,0x008011c000fe021d\n"
".quad 0x005000cfe000281c,0x003016000044c2dc,0x003030000044d61c,0xe43020000044e41c\n"
".quad 0x062800000080075d,0x008011c000fe031d,0x005000d00000281c,0x005000000011211c\n"
".quad 0x00301600004942dc,0x003020000049659c,0x003030000049551c,0x00220e40000535dc\n"
".quad 0x065000000011311c,0x008011c000fe041d,0x00301600004c855c,0x00302800004c951c\n"
".quad 0x02302c00004ca59c,0xe428f29cbc1471c0,0xc5280000008004dd,0x00c100000040021c\n"
".quad 0x005000d01000281c,0x00302a000020c55c,0x003028000020d51c,0x00302c000020e59c\n"
".quad 0x00220e40000487dc,0x025000000010811c,0x0628f29cbc1471c4,0xe48011c000fe031d\n"
".quad 0x002800000080079d,0x00302a000025021c,0x005000d02000281c,0x023028000025141c\n"
".quad 0x0028f29cbc1471c8,0x00220e40000491dc,0x005000000010911c,0x005000cfe000515c\n"
".quad 0x02302c000025225c,0x0028f29cbc14745c,0x065000000010a11c,0x048011c000fe051d\n"
".quad 0x00200600001d17dc,0x00220e400004a3dc,0x00500000001431dc,0x003020000028d35c\n"
".quad 0x863010000028c21c,0x008011c000fc641c,0xe43012000028e25c,0x002800000068019d\n"
".quad 0x065000000010b11c,0x008011c000fc661d,0x00301000002d431c,0x00301a00002d535c\n"
".quad 0x00301200002d659c,0xe4220e400004b5dc,0xc5280000003c019d,0x00c100000080021c\n"
".quad 0x003018000021051c,0x00301a000021155c,0x86302c00002123dc,0xe48011c000fc631c\n"
".quad 0x002800000070019d,0x00220e40000487dc,0x065000000010811c,0xe48011c000fc641d\n"
".quad 0x002800000074019d,0x003028000025821c,0x00302a000025971c,0x00301e000025a3dc\n"
".quad 0x865000000010911c,0xe48011c000fc651c,0x00280000004c019d,0x02220e40000499dc\n"
".quad 0x0628f29cbc15f7c0,0xe48011c000fc661d,0x002800000078019d,0x003010000028c25c\n"
".quad 0x003038000028d21c,0x02301e000028e3dc,0x8628f29cbc15f7c4,0xe48011c000fc671c\n"
".quad 0x002800000080019d,0x02220e400004a1dc,0x0628f29cbc15f7c8,0x008011c000fc631d\n"
".quad 0x025000000010a11c,0x0428f29cbc15f19c,0x00200600007c629c,0x02301200002d025c\n"
".quad 0xa528f29cbc14a290,0x00c1000000c0019c,0x00220e400004b3dc,0x02301000002d141c\n"
".quad 0x0028f29cbc14a280,0x03301e00002d245c,0x854800c00010021c,0x02c1000000e003dc\n"
".quad 0x0028f29cbc14a284,0x025000000010b11c,0x8528f29cbc14a2dc,0x00c1000000e0821c\n"
".quad 0x00220e40000461dc,0x003012000019425c,0x045000000010611c,0x002000000028b7dc\n"
".quad 0x003020000019529c,0x00220e40000471dc,0x003022000019619c,0x00301200001d825c\n"
".quad 0x005000cfe000515c,0x00220e400004f3dc,0x025000000010711c,0x0028f29cbc15f7c0\n"
".quad 0x00301400001d929c,0x00300c00001da19c,0x00218ed0200055dc,0x00220e40000481dc\n"
".quad 0x025000000010f11c,0x0328f29cbc15f7c4,0x004800c00100001c,0x025000000010811c\n"
".quad 0x0028f29cbc15f7c0,0x00301200003dc1dc,0x00301400003dd25c,0x00300c00003de19c\n"
".quad 0x00300e000020c61c,0x003012000020d65c,0xe7300c000020e71c,0x074003ffed000009\n"
".quad 0x0650000003c00100,0xe48011c000fc221d,0x0028004000d0001d,0x005800000064409c\n"
".quad 0x00220e400005f1dc,0x005000cfe000001e,0x04580000007040dc,0x0020104000d0015c\n"
".quad 0x005800000060401c,0x005000000008919d,0x00500000000ca1dd,0x003004000018511c\n"
".quad 0x005000000000809d,0x00300600001c519c,0x005800d0dfc040dc,0x003000000008501c\n"
".quad 0x845800d0dfc0611c,0x00140600000d209c,0xa35800d0dfc0001c,0xe4202e4000a1b15c\n"
".quad 0x842800400080019d,0x03140600001120dc,0x846000c00020209c,0x031406000001201c\n"
".quad 0x036000c0004030dc,0x43200dc00010511c,0x436800000008001c,0x434800400093f15c\n"
".quad 0x85680000000c001c,0xe79400000000401c,0x038000000000001d,0x036000c00004401c\n"
".quad 0x035800c00060001c,0x044800c0000c015c,0x031c00000014215c,0xe7198ec0000c51dc\n"
".quad 0x0040000000800001,0x00c800000010401c,0x003000800014411c,0xe73000000010011e\n"
".quad 0x034000000760001d,0xe71a8e0000fc01dc,0x0240000003000001,0x033801fffffc401c\n"
".quad 0x037800000000015c,0x034800c0007c515e,0x034800ffffdc519c,0xe7198ec0000461dc\n"
".quad 0x0040000000400001,0xe7c800000010411c,0x034000000620001d,0x024800ffffe0519c\n"
".quad 0x033a00000000411c,0x026000000018001c,0x423801fffffc001c,0x0038fe000000001c\n"
".quad 0x00c800000010019c,0x00300c800014001c,0x02300c000000601e,0x033801fffffc001c\n"
".quad 0x03110e0000fc019c,0x034800000018515d,0x034800c003d0515c,0x436000c0005c515c\n"
".quad 0x436800000014411c,0xe76800000010011c,0x034000000420001d,0x034800fffc0c015c\n"
".quad 0xe71a0ec0000451dc,0x0240000003a00001,0xe23801fffffc419c,0x42180000000c02dd\n"
".quad 0x0338fe00000061dc,0x006000000014b2dc,0x02c800000010721c,0x003a00000000411c\n"
".quad 0x00301080001471dc,0x02309000001c825e,0x003801fffffc929c,0x42311000001c821e\n"
".quad 0x003802000000a29c,0x032e8e00002091dc,0x046800000028b1dc,0x032010c00007f21c\n"
".quad 0x03580000001471dc,0x036800000028515c,0x436800c00008725c,0x036800000014815c\n"
".quad 0x034800fffc10021c,0x031a8e0000fc91dc,0x036800c00004701c,0x031aa00000fc51dc\n"
".quad 0x235800000020a15c,0x031a800000fc01dc,0x034800c000045140,0x036000c00004501c\n"
".quad 0x43310c000014001c,0xe76800000010011c,0x004000000020001d,0xe7c800000010411c\n"
".quad 0x009000000000001d,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0xcd00000000000000\n"
".quad 0x04bf8000003dcccc,0x080000000000140c,0x100000000c000000,0x0400000014000000\n"
".quad 0x000000002c000802,0x1c00080a04000000,0x0300180020000000,0xff000c1704001819\n"
".quad 0x0000140004ffffff,0xff000c17040011f0,0x0000100003ffffff,0xff000c17040011f0\n"
".quad 0x00000c0002ffffff,0xff000c17040011f0,0x0000080001ffffff,0xff000c17040011f0\n"
".quad 0x0000000000ffffff,0x2400080d040021f0,0xe400000002000300,0x042800440400005d\n"
".quad 0x032c00000094001c,0x045000400020001c,0x032c00000084051c,0x044800000050055c\n"
".quad 0x232c00000098009c,0x04188e4000a151dc,0x032c00000088059c,0x23202c40003025dc\n"
".quad 0xe718804000b171dc,0xe280000000000021,0x03180000000c00dd,0x034800c0000c001c\n"
".quad 0x042006400020209c,0x04180000005d211e,0x04180000005520de,0x041800000001201c\n"
".quad 0xe21800000009209c,0xe41b0100000004dd,0x0028000000fc049d,0x005000cfc00043dc\n"
".quad 0x005000cfc00032dc,0x005000cfc000001c,0x005000cfc00021dc,0x00500000004c70dc\n"
".quad 0x005000f01000009c,0x86500000004cf45c,0x008011c000fc211c,0x005000f01000b41c\n"
".quad 0x005000f00000009c,0x865000cfe00134dc,0x008011c000fd021c,0x065000f00000b41c\n"
".quad 0x008011c000fc231d,0x005000000014915d,0x005000000010811d,0x005800000014515c\n"
".quad 0x005000000018a09d,0x00300a000010421c,0x06218ed0200131dc,0x008011c000fd011d\n"
".quad 0x003010000008221c,0x005000efe000b41c,0x005000efe000009c,0x005000000021249c\n"
".quad 0x065000000034515d,0x008011c000fc221d,0x005000000030411d,0x005800000014515c\n"
".quad 0x005000000038609d,0x06300a000010431c,0x008011c000fd011d,0x043018000008231c\n"
".quad 0x04100000002d241c,0x001000000001209c,0x005000000031249c,0x065000000024515d\n"
".quad 0x008011c000fc231d,0x005000000020411d,0x005800000014515c,0x005000000028609d\n"
".quad 0x06300a000010421c,0x008011c000fd011d,0x003010000008221c,0x005000cfe000009c\n"
".quad 0x005000000021249c,0x065000000034515d,0x008011c000fc221d,0x005000000030411d\n"
".quad 0x005000cfe000b41c,0x005800000014515c,0x005000000038609d,0x06300a000010431c\n"
".quad 0x008011c000fd011d,0x003018000008231c,0x005000d00000b41c,0x005000d00000009c\n"
".quad 0x005000000031249c,0x065000000024515d,0x008011c000fc231d,0x005000000020411d\n"
".quad 0x005800000014515c,0x005000000028609d,0x86300a000010421c,0x008011c000fd011c\n"
".quad 0x003010000008221c,0x005000d01000b41c,0x005000d01000009c,0x065000000021249c\n"
".quad 0x008011c000fc221d,0x005000000034515d,0x005000000030411d,0x005800000014515c\n"
".quad 0x005000000038609d,0x86300a000010431c,0x008011c000fd011c,0x003018000008241c\n"
".quad 0x865000d02000009c,0x008011c000fc231c,0x005000000041209c,0x065000d02000b41c\n"
".quad 0x008011c000fd041d,0x005000000024515d,0x00500000002040dd,0x005800000014511c\n"
".quad 0x005000000028615d,0x00300800000c30dc,0x005000000035119d,0x005000000031011d\n"
".quad 0x00300600001450dc,0x005800000018619c,0x005000000039215d,0x00300c000010411c\n"
".quad 0x00500000000c20dc,0x003008000014509c,0xe75000000008349c,0x034003fff4600001\n"
".quad 0x034800fffff5401c,0x034800fffff5609c,0x035000000000001c,0x042000000008201c\n"
".quad 0x631800000001201c,0x024000000051609c,0x0330f29cbc14001c,0x006000c00008209e\n"
".quad 0x0230004000c1201c,0x0032fee2a8ec001c,0x00208ef0bf0001dc,0x205800cfc0000000\n"
".quad 0x006000000000001c,0x00c800000008001c,0x8558000000000000,0x04c900000000201c\n"
".quad 0xe450ee0000ffffdc,0xe228000000fc009d,0xe41b01000000001d,0xc528000000fc00dd\n"
".quad 0x02c100000000221c,0x0028f29cbc14311c,0x005000cfe000001c,0x00220e40001481dc\n"
".quad 0x04220e400014a3dc,0x00200000000c421c,0x005000cfe000001c,0xc5220e40001491dc\n"
".quad 0x02c100000040211c,0x0028f29cbc148200,0x00218ed0200005dc,0x02220e400014b1dc\n"
".quad 0x0228f29cbc148204,0x0028f29cbc148200,0x00220e40001463dc,0x02220e40001441dc\n"
".quad 0x0428f29cbc1480dc,0x852000000020311c,0x00c1000000e0219c,0xc5220e40001451dc\n"
".quad 0x02c100000080221c,0x0028f29cbc144100,0x02220e40001471dc,0x0328f29cbc144104\n"
".quad 0x024800c0001021dc,0x0028f29cbc144100,0x00220e400014a3dc,0x02220e40001481dc\n"
".quad 0x0428f29cbc1440dc,0x852000000010321c,0x00c1000000e071dc,0xa5220e40001491dc\n"
".quad 0x02c1000000c0211c,0x0328f29cbc148200,0x004800c00100209c,0x02220e400014b1dc\n"
".quad 0x0228f29cbc148204,0x0028f29cbc148200,0x00220e40001463dc,0x02220e40001441dc\n"
".quad 0x0428f29cbc1480dc,0x00200000002030dc,0x02220e40001451dc,0x0028f29cbc1430c0\n"
".quad 0x02220e40001471dc,0x0228f29cbc1430c4,0xe728f29cbc1430c0,0x004003fffa000009\n"
".quad 0xe2220e40001431dc,0x04190dfc0000001d,0x042000400027f09c,0xa320000000fc001c\n"
".quad 0xe4202a4000a170dc,0x842800400080011d,0x031406000009209c,0x842009c00010311c\n"
".quad 0x031406000001201c,0x436000c00040209c,0x434800400093f15c,0x856800000008001c\n"
".quad 0xe79400000000401c,0x008000000000001d,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0100000000000000,0x003dcccccd000000,0x0000140c04437f00,0x0c00000008000000\n"
".quad 0x1400000010000000,0x2c00080204000000,0x0400000000000000,0x200000001f00080a\n"
".quad 0x0400181903001800,0x04ffffffff000c17,0x040011f000001400,0x03ffffffff000c17\n"
".quad 0x040011f000001000,0x02ffffffff000c17,0x040011f000000c00,0x01ffffffff000c17\n"
".quad 0x040011f000000800,0x00ffffffff000c17,0x040021f000000000,0x010001000c00080d\n"
".quad 0x2c00100704000000,0xffffffffff000000,0x04ffffffffffffff,0x000000002b000812\n"
".quad 0x2b00081104000000,0x0400000000000000,0x0000000026000812,0x2600081104000000\n"
".quad 0x0400000000000000,0x000000002a000812,0x2a00081104000000,0x0400000000000000\n"
".quad 0x0000000029000812,0x2900081104000000,0x0400000000000000,0x0000000026000812\n"
".quad 0x2600081104000000,0x0400000000000000,0x0000000028000812,0x2800081104000000\n"
".quad 0x0400000000000000,0x0000000027000812,0x2700081104000000,0x0400000000000000\n"
".quad 0x0000000026000812,0x2600081104000000,0x0400000000000000,0x0000000025000812\n"
".quad 0x2500081104000000,0x0400000000000000,0x0000000024000812,0x2400081104000000\n"
".quad 0x0000000000000000,0x0000000500000006,0x0000000000004408,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000230,0x0000000000000230,0x0000000000000004\n"
".quad 0x00002b0560000000,0x00000000000010af,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000190,0x0000000000000190,0x0000000000000004,0x00002a0560000000\n"
".quad 0x000000000000123f,0x0000000000000000,0x0000000000000000,0x00000000000009b8\n"
".quad 0x00000000000009b8,0x0000000000000004,0x0000290560000000,0x0000000000001bf7\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000608,0x0000000000000608\n"
".quad 0x0000000000000004,0x0000280560000000,0x00000000000021ff,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000818,0x0000000000000818,0x0000000000000004\n"
".quad 0x0000270560000000,0x0000000000002a17,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000518,0x0000000000000518,0x0000000000000004,0x0000250560000000\n"
".quad 0x0000000000002f2f,0x0000000000000000,0x0000000000000000,0x0000000000000cc8\n"
".quad 0x0000000000000cc8,0x0000000000000004,0x0000250660000000,0x0000000000003bf7\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000100\n"
".quad 0x0000000000000004,0x0000240560000000,0x0000000000003bf7,0x0000000000000000\n"
".quad 0x0000000000000000,0x000000000000070c,0x000000000000070c,0x0000000000000004\n"
".quad 0x0000240660000000,0x0000000000004303,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000100,0x0000000000000004,0x0000000000000000\n"
".text");

extern "C" {

extern const unsigned long long __deviceText_$sm_21$[2248];

}

asm(
".section .rodata\n"
".align 32\n"
"__deviceText_$compute_20$:\n"
".quad 0x6f69737265762e09,0x2e090a322e32206e,0x7320746567726174,0x2f2f090a30325f6d\n"
".quad 0x656c69706d6f6320,0x2f20687469772064,0x61636f6c2f727375,0x6f2f616475632f6c\n"
".quad 0x696c2f34366e6570,0x2f090a65622f2f62,0x6e65706f766e202f,0x6220322e33206363\n"
".quad 0x206e6f20746c6975,0x2d39302d30313032,0x69762e090a0a3930,0x662e20656c626973\n"
".quad 0x61702e2820636e75,0x3233662e206d6172,0x72616475635f5f20,0x6c355a5f5f667465\n"
".quad 0x2966666666707265,0x7072656c355a5f20,0x702e282066666666,0x33662e206d617261\n"
".quad 0x616475635f5f2032,0x5f5f31666d726170,0x66667072656c355a,0x7261702e202c6666\n"
".quad 0x203233662e206d61,0x6170616475635f5f,0x355a5f5f32666d72,0x666666667072656c\n"
".quad 0x6d617261702e202c,0x5f5f203233662e20,0x6d72617061647563,0x656c355a5f5f3366\n"
".quad 0x0a29666666667072,0x62697369762e090a,0x636e75662e20656c,0x6d617261702e2820\n"
".quad 0x5f5f203233662e20,0x6674657261647563,0x4c636576365a5f5f,0x74616f6c66366e65\n"
".quad 0x365a5f20295f5334,0x66366e654c636576,0x205f533474616f6c,0x206d617261702e28\n"
".quad 0x31206e67696c612e,0x5f5f2038622e2036,0x6d72617061647563,0x6576365a5f5f3166\n"
".quad 0x6f6c66366e654c63,0x36315b5f53347461,0x617261702e202c5d,0x6e67696c612e206d\n"
".quad 0x2038622e20363120,0x6170616475635f5f,0x365a5f5f32666d72,0x66366e654c636576\n"
".quad 0x5b5f533474616f6c,0x2e090a0a295d3631,0x20656c6269736976,0x2e2820636e75662e\n"
".quad 0x752e206d61726170,0x6475635f5f203233,0x5a5f5f6674657261,0x635f656b616d3031\n"
".quad 0x66666666726f6c6f,0x616d30315a5f2029,0x726f6c6f635f656b,0x702e282066666666\n"
".quad 0x33662e206d617261,0x616475635f5f2032,0x5f5f31666d726170,0x5f656b616d30315a\n"
".quad 0x666666726f6c6f63,0x617261702e202c66,0x5f203233662e206d,0x726170616475635f\n"
".quad 0x30315a5f5f32666d,0x6c6f635f656b616d,0x202c66666666726f,0x2e206d617261702e\n"
".quad 0x75635f5f20323366,0x33666d7261706164,0x6b616d30315a5f5f,0x66726f6c6f635f65\n"
".quad 0x61702e202c666666,0x3233662e206d6172,0x70616475635f5f20,0x5a5f5f34666d7261\n"
".quad 0x635f656b616d3031,0x66666666726f6c6f,0x2d2d2f2f090a0a29,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x6f43202f2f090a2d,0x20676e696c69706d\n"
".quad 0x706d742f706d742f,0x303030305f746678,0x3030305f39333931,0x5f372d3030303030\n"
".quad 0x6e65446567616d69,0x632e676e6973696f,0x2f2820692e337070,0x494263632f706d74\n"
".quad 0x697a426844372e23,0x2d2d2d2f2f090a29,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2f2f090a0a,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x74704f202f2f090a,0x2f090a3a736e6f69,0x2d2d2d2d2d2d2d2f\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2f2f090a2d2d2d2d,0x7465677261542020\n"
".quad 0x5349202c7874703a,0x2c30325f6d733a41,0x3a6e6169646e4520,0x202c656c7474696c\n"
".quad 0x207265746e696f50,0x0a34363a657a6953,0x334f2d20202f2f09,0x696d6974704f2809\n"
".quad 0x6c206e6f6974617a,0x2f090a296c657665,0x280930672d20202f,0x656c206775626544\n"
".quad 0x2f2f090a296c6576,0x522809326d2d2020,0x64612074726f7065,0x736569726f736976\n"
".quad 0x2d2d2d2f2f090a29,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x656c69662e090a0a,0x6d6f633c22093109,0x6e696c2d646e616d,0x69662e090a223e65\n"
".quad 0x742f22093209656c,0x6678706d742f706d,0x3931303030305f74,0x30303030305f3933\n"
".quad 0x6d695f362d303030,0x696f6e6544656761,0x6475632e676e6973,0x7570672e32656661\n"
".quad 0x656c69662e090a22,0x7273752f22093309,0x6363672f62696c2f,0x696c2d363836692f\n"
".quad 0x2f756e672d78756e,0x6e692f352e342e34,0x74732f6564756c63,0x0a22682e66656464\n"
".quad 0x3409656c69662e09,0x6c2f7273752f2209,0x6475632f6c61636f,0x2e2e2f6e69622f61\n"
".quad 0x6564756c636e692f,0x7665642f7472632f,0x746e75725f656369,0x090a22682e656d69\n"
".quad 0x093509656c69662e,0x6f6c2f7273752f22,0x616475632f6c6163,0x2f2e2e2f6e69622f\n"
".quad 0x2f6564756c636e69,0x6665645f74736f68,0x0a22682e73656e69,0x3609656c69662e09\n"
".quad 0x6c2f7273752f2209,0x6475632f6c61636f,0x2e2e2f6e69622f61,0x6564756c636e692f\n"
".quad 0x6e69746c6975622f,0x682e73657079745f,0x656c69662e090a22,0x7273752f22093709\n"
".quad 0x632f6c61636f6c2f,0x2f6e69622f616475,0x756c636e692f2e2e,0x63697665642f6564\n"
".quad 0x2e73657079745f65,0x6c69662e090a2268,0x73752f2209380965,0x2f6c61636f6c2f72\n"
".quad 0x6e69622f61647563,0x6c636e692f2e2e2f,0x766972642f656475,0x73657079745f7265\n"
".quad 0x69662e090a22682e,0x752f22093909656c,0x6c61636f6c2f7273,0x69622f616475632f\n"
".quad 0x636e692f2e2e2f6e,0x7275732f6564756c,0x7079745f65636166,0x2e090a22682e7365\n"
".quad 0x09303109656c6966,0x6f6c2f7273752f22,0x616475632f6c6163,0x2f2e2e2f6e69622f\n"
".quad 0x2f6564756c636e69,0x5f65727574786574,0x22682e7365707974,0x09656c69662e090a\n"
".quad 0x7273752f22093131,0x632f6c61636f6c2f,0x2f6e69622f616475,0x756c636e692f2e2e\n"
".quad 0x6f746365762f6564,0x2e73657079745f72,0x6c69662e090a2268,0x752f220932310965\n"
".quad 0x6c61636f6c2f7273,0x69622f616475632f,0x636e692f2e2e2f6e,0x7665642f6564756c\n"
".quad 0x6e75616c5f656369,0x6d617261705f6863,0x22682e7372657465,0x09656c69662e090a\n"
".quad 0x7273752f22093331,0x632f6c61636f6c2f,0x2f6e69622f616475,0x756c636e692f2e2e\n"
".quad 0x732f7472632f6564,0x635f656761726f74,0x0a22682e7373616c,0x3109656c69662e09\n"
".quad 0x2f7273752f220934,0x2f6564756c636e69,0x7079742f73746962,0x2e090a22682e7365\n"
".quad 0x09353109656c6966,0x6e692f7273752f22,0x69742f6564756c63,0x2e090a22682e656d\n"
".quad 0x09363109656c6966,0x6e2f656d6f682f22,0x68632f6c616d726f,0x672f74756f6b6365\n"
".quad 0x746f6c65636f7570,0x702d73747365742f,0x632f312e322d7874,0x742f322e32616475\n"
".quad 0x616d692f73747365,0x73696f6e65446567,0x67616d692f676e69,0x6973696f6e654465\n"
".quad 0x2e090a22682e676e,0x09373109656c6966,0x6e2f656d6f682f22,0x68632f6c616d726f\n"
".quad 0x672f74756f6b6365,0x746f6c65636f7570,0x702d73747365742f,0x632f312e322d7874\n"
".quad 0x742f322e32616475,0x616d692f73747365,0x73696f6e65446567,0x67616d692f676e69\n"
".quad 0x6973696f6e654465,0x090a2275632e676e,0x383109656c69662e,0x2f656d6f682f2209\n"
".quad 0x632f6c616d726f6e,0x2f74756f6b636568,0x6f6c65636f757067,0x2d73747365742f74\n"
".quad 0x2f312e322d787470,0x2f322e3261647563,0x6d692f7374736574,0x696f6e6544656761\n"
".quad 0x616d692f676e6973,0x73696f6e65446567,0x79706f635f676e69,0x2e6c656e72656b5f\n"
".quad 0x662e090a22687563,0x2209393109656c69,0x6f6e2f656d6f682f,0x6568632f6c616d72\n"
".quad 0x70672f74756f6b63,0x2f746f6c65636f75,0x74702d7374736574,0x75632f312e322d78\n"
".quad 0x65742f322e326164,0x67616d692f737473,0x6973696f6e654465,0x6567616d692f676e\n"
".quad 0x6e6973696f6e6544,0x656b5f6e6e6b5f67,0x6875632e6c656e72,0x656c69662e090a22\n"
".quad 0x6f682f2209303209,0x616d726f6e2f656d,0x6f6b636568632f6c,0x636f7570672f7475\n"
".quad 0x7365742f746f6c65,0x322d7874702d7374,0x32616475632f312e,0x73747365742f322e\n"
".quad 0x65446567616d692f,0x2f676e6973696f6e,0x6e65446567616d69,0x6e5f676e6973696f\n"
".quad 0x656e72656b5f6d6c,0x090a226875632e6c,0x313209656c69662e,0x2f656d6f682f2209\n"
".quad 0x632f6c616d726f6e,0x2f74756f6b636568,0x6f6c65636f757067,0x2d73747365742f74\n"
".quad 0x2f312e322d787470,0x2f322e3261647563,0x6d692f7374736574,0x696f6e6544656761\n"
".quad 0x616d692f676e6973,0x73696f6e65446567,0x326d6c6e5f676e69,0x2e6c656e72656b5f\n"
".quad 0x662e090a22687563,0x2209323209656c69,0x636f6c2f7273752f,0x2f616475632f6c61\n"
".quad 0x692f2e2e2f6e6962,0x632f6564756c636e,0x75665f6e6f6d6d6f,0x2e736e6f6974636e\n"
".quad 0x6c69662e090a2268,0x752f220933320965,0x6c61636f6c2f7273,0x69622f616475632f\n"
".quad 0x636e692f2e2e2f6e,0x74616d2f6564756c,0x6974636e75665f68,0x090a22682e736e6f\n"
".quad 0x343209656c69662e,0x6c2f7273752f2209,0x6475632f6c61636f,0x2e2e2f6e69622f61\n"
".quad 0x6564756c636e692f,0x6f635f6874616d2f,0x2e73746e6174736e,0x6c69662e090a2268\n"
".quad 0x752f220935320965,0x6c61636f6c2f7273,0x69622f616475632f,0x636e692f2e2e2f6e\n"
".quad 0x7665642f6564756c,0x636e75665f656369,0x22682e736e6f6974,0x09656c69662e090a\n"
".quad 0x7273752f22093632,0x632f6c61636f6c2f,0x2f6e69622f616475,0x756c636e692f2e2e\n"
".quad 0x31315f6d732f6564,0x5f63696d6f74615f,0x6e6f6974636e7566,0x662e090a22682e73\n"
".quad 0x2209373209656c69,0x636f6c2f7273752f,0x2f616475632f6c61,0x692f2e2e2f6e6962\n"
".quad 0x732f6564756c636e,0x6f74615f32315f6d,0x636e75665f63696d,0x22682e736e6f6974\n"
".quad 0x09656c69662e090a,0x7273752f22093832,0x632f6c61636f6c2f,0x2f6e69622f616475\n"
".quad 0x756c636e692f2e2e,0x33315f6d732f6564,0x5f656c62756f645f,0x6e6f6974636e7566\n"
".quad 0x662e090a22682e73,0x2209393209656c69,0x636f6c2f7273752f,0x2f616475632f6c61\n"
".quad 0x692f2e2e2f6e6962,0x732f6564756c636e,0x6f74615f30325f6d,0x636e75665f63696d\n"
".quad 0x22682e736e6f6974,0x09656c69662e090a,0x7273752f22093033,0x632f6c61636f6c2f\n"
".quad 0x2f6e69622f616475,0x756c636e692f2e2e,0x30325f6d732f6564,0x736e6972746e695f\n"
".quad 0x090a22682e736369,0x313309656c69662e,0x6c2f7273752f2209,0x6475632f6c61636f\n"
".quad 0x2e2e2f6e69622f61,0x6564756c636e692f,0x656361667275732f,0x6f6974636e75665f\n"
".quad 0x2e090a22682e736e,0x09323309656c6966,0x6f6c2f7273752f22,0x616475632f6c6163\n"
".quad 0x2f2e2e2f6e69622f,0x2f6564756c636e69,0x5f65727574786574,0x75665f6863746566\n"
".quad 0x2e736e6f6974636e,0x6c69662e090a2268,0x752f220933330965,0x6c61636f6c2f7273\n"
".quad 0x69622f616475632f,0x636e692f2e2e2f6e,0x74616d2f6564756c,0x6974636e75665f68\n"
".quad 0x5f6c62645f736e6f,0x0a22682e33787470,0x697369762e090a0a,0x6e75662e20656c62\n"
".quad 0x617261702e282063,0x5f203233662e206d,0x746572616475635f,0x72656c355a5f5f66\n"
".quad 0x5f20296666666670,0x66667072656c355a,0x7261702e28206666,0x203233662e206d61\n"
".quad 0x6170616475635f5f,0x355a5f5f31666d72,0x666666667072656c,0x6d617261702e202c\n"
".quad 0x5f5f203233662e20,0x6d72617061647563,0x656c355a5f5f3266,0x202c666666667072\n"
".quad 0x2e206d617261702e,0x75635f5f20323366,0x33666d7261706164,0x7072656c355a5f5f\n"
".quad 0x7b090a2966666666,0x2e206765722e090a,0x313c662520323366,0x6f6c2e090a3b3e30\n"
".quad 0x0939360937310963,0x656257444c240a30,0x6c355a5f5f6e6967,0x3a66666666707265\n"
".quad 0x7261702e646c090a,0x09203233662e6d61,0x5f5f5b202c316625,0x6d72617061647563\n"
".quad 0x656c355a5f5f3166,0x3b5d666666667072,0x33662e766f6d090a,0x202c326625092032\n"
".quad 0x646c090a3b316625,0x662e6d617261702e,0x2c33662509203233,0x616475635f5f5b20\n"
".quad 0x5f5f32666d726170,0x66667072656c355a,0x6f6d090a3b5d6666,0x2509203233662e76\n"
".quad 0x3b336625202c3466,0x7261702e646c090a,0x09203233662e6d61,0x5f5f5b202c356625\n"
".quad 0x6d72617061647563,0x656c355a5f5f3366,0x3b5d666666667072,0x33662e766f6d090a\n"
".quad 0x202c366625092032,0x6c2e090a3b356625,0x303709373109636f,0x2e627573090a3009\n"
".quad 0x3766250920323366,0x25202c346625202c,0x616d66090a3b3266,0x203233662e6e722e\n"
".quad 0x6625202c38662509,0x202c376625202c36,0x7473090a3b326625,0x662e6d617261702e\n"
".quad 0x635f5f5b09203233,0x5f66746572616475,0x667072656c355a5f,0x6625202c5d666666\n"
".quad 0x3b746572090a3b38,0x646e6557444c240a,0x7072656c355a5f5f,0x7d090a3a66666666\n"
".quad 0x6c355a5f202f2f20,0x0a66666666707265,0x62697369762e090a,0x636e75662e20656c\n"
".quad 0x6d617261702e2820,0x5f5f203233662e20,0x6674657261647563,0x4c636576365a5f5f\n"
".quad 0x74616f6c66366e65,0x365a5f20295f5334,0x66366e654c636576,0x205f533474616f6c\n"
".quad 0x206d617261702e28,0x31206e67696c612e,0x5f5f2038622e2036,0x6d72617061647563\n"
".quad 0x6576365a5f5f3166,0x6f6c66366e654c63,0x36315b5f53347461,0x617261702e202c5d\n"
".quad 0x6e67696c612e206d,0x2038622e20363120,0x6170616475635f5f,0x365a5f5f32666d72\n"
".quad 0x66366e654c636576,0x5b5f533474616f6c,0x0a7b090a295d3631,0x662e206765722e09\n"
".quad 0x30323c6625203233,0x636f6c2e090a3b3e,0x3009333709373109,0x67656257444c240a\n"
".quad 0x6576365a5f5f6e69,0x6f6c66366e654c63,0x090a3a5f53347461,0x6d617261702e646c\n"
".quad 0x662509203233662e,0x75635f5f5b202c31,0x31666d7261706164,0x4c636576365a5f5f\n"
".quad 0x74616f6c66366e65,0x0a3b5d302b5f5334,0x3233662e766f6d09,0x25202c3266250920\n"
".quad 0x2e646c090a3b3166,0x33662e6d61726170,0x202c336625092032,0x70616475635f5f5b\n"
".quad 0x5a5f5f31666d7261,0x366e654c63657636,0x5f533474616f6c66,0x6f6d090a3b5d342b\n"
".quad 0x2509203233662e76,0x3b336625202c3466,0x7261702e646c090a,0x09203233662e6d61\n"
".quad 0x5f5f5b202c356625,0x6d72617061647563,0x6576365a5f5f3166,0x6f6c66366e654c63\n"
".quad 0x5d382b5f53347461,0x662e766f6d090a3b,0x2c36662509203233,0x6c090a3b35662520\n"
".quad 0x2e6d617261702e64,0x3766250920323366,0x6475635f5f5b202c,0x5f32666d72617061\n"
".quad 0x654c636576365a5f,0x3474616f6c66366e,0x090a3b5d302b5f53,0x203233662e766f6d\n"
".quad 0x6625202c38662509,0x702e646c090a3b37,0x3233662e6d617261,0x5b202c3966250920\n"
".quad 0x6170616475635f5f,0x365a5f5f32666d72,0x66366e654c636576,0x2b5f533474616f6c\n"
".quad 0x766f6d090a3b5d34,0x662509203233662e,0x3b396625202c3031,0x7261702e646c090a\n"
".quad 0x09203233662e6d61,0x5f5b202c31316625,0x726170616475635f,0x76365a5f5f32666d\n"
".quad 0x6c66366e654c6365,0x382b5f533474616f,0x2e766f6d090a3b5d,0x3166250920323366\n"
".quad 0x3b31316625202c32,0x3109636f6c2e090a,0x090a300934370937,0x203233662e627573\n"
".quad 0x25202c3331662509,0x346625202c303166,0x662e627573090a3b,0x3431662509203233\n"
".quad 0x25202c386625202c,0x627573090a3b3266,0x662509203233662e,0x32316625202c3531\n"
".quad 0x090a3b366625202c,0x203233662e6c756d,0x25202c3631662509,0x316625202c333166\n"
".quad 0x2e616d66090a3b33,0x09203233662e6e72,0x6625202c37316625,0x34316625202c3431\n"
".quad 0x0a3b36316625202c,0x2e6e722e616d6609,0x3166250920323366,0x2c35316625202c38\n"
".quad 0x25202c3531662520,0x7473090a3b373166,0x662e6d617261702e,0x635f5f5b09203233\n"
".quad 0x5f66746572616475,0x654c636576365a5f,0x3474616f6c66366e,0x316625202c5d5f53\n"
".quad 0x3b746572090a3b38,0x646e6557444c240a,0x4c636576365a5f5f,0x74616f6c66366e65\n"
".quad 0x207d090a3a5f5334,0x6576365a5f202f2f,0x6f6c66366e654c63,0x090a0a5f53347461\n"
".quad 0x656c62697369762e,0x2820636e75662e20,0x2e206d617261702e,0x75635f5f20323375\n"
".quad 0x5f5f667465726164,0x5f656b616d30315a,0x666666726f6c6f63,0x6d30315a5f202966\n"
".quad 0x6f6c6f635f656b61,0x2e28206666666672,0x662e206d61726170,0x6475635f5f203233\n"
".quad 0x5f31666d72617061,0x656b616d30315a5f,0x6666726f6c6f635f,0x7261702e202c6666\n"
".quad 0x203233662e206d61,0x6170616475635f5f,0x315a5f5f32666d72,0x6f635f656b616d30\n"
".quad 0x2c66666666726f6c,0x206d617261702e20,0x635f5f203233662e,0x666d726170616475\n"
".quad 0x616d30315a5f5f33,0x726f6c6f635f656b,0x702e202c66666666,0x33662e206d617261\n"
".quad 0x616475635f5f2032,0x5f5f34666d726170,0x5f656b616d30315a,0x666666726f6c6f63\n"
".quad 0x2e090a7b090a2966,0x3233752e20676572,0x3b3e32313c722520,0x2e206765722e090a\n"
".quad 0x313c662520323366,0x6f6c2e090a3b3e38,0x0931380937310963,0x656257444c240a30\n"
".quad 0x30315a5f5f6e6967,0x6c6f635f656b616d,0x0a3a66666666726f,0x617261702e646c09\n"
".quad 0x2509203233662e6d,0x635f5f5b202c3166,0x666d726170616475,0x616d30315a5f5f31\n"
".quad 0x726f6c6f635f656b,0x090a3b5d66666666,0x203233662e766f6d,0x6625202c32662509\n"
".quad 0x702e646c090a3b31,0x3233662e6d617261,0x5b202c3366250920,0x6170616475635f5f\n"
".quad 0x315a5f5f32666d72,0x6f635f656b616d30,0x5d66666666726f6c,0x662e766f6d090a3b\n"
".quad 0x2c34662509203233,0x6c090a3b33662520,0x2e6d617261702e64,0x3566250920323366\n"
".quad 0x6475635f5f5b202c,0x5f33666d72617061,0x656b616d30315a5f,0x6666726f6c6f635f\n"
".quad 0x6f6d090a3b5d6666,0x2509203233662e76,0x3b356625202c3666,0x7261702e646c090a\n"
".quad 0x09203233662e6d61,0x5f5f5b202c376625,0x6d72617061647563,0x6d30315a5f5f3466\n"
".quad 0x6f6c6f635f656b61,0x0a3b5d6666666672,0x3233662e766f6d09,0x25202c3866250920\n"
".quad 0x6f6c2e090a3b3766,0x0932380937310963,0x662e766f6d090a30,0x2c39662509203233\n"
".quad 0x3066373334663020,0x202020203b303030,0x353532202f2f0920,0x33662e6c756d090a\n"
".quad 0x2c30316625092032,0x6625202c32662520,0x2e747663090a3b39,0x2e3233732e697a72\n"
".quad 0x3172250920323366,0x0a3b30316625202c,0x3233662e766f6d09,0x202c313166250920\n"
".quad 0x3030663733346630,0x09202020203b3030,0x090a353532202f2f,0x203233662e6c756d\n"
".quad 0x25202c3231662509,0x31316625202c3466,0x722e747663090a3b,0x662e3233732e697a\n"
".quad 0x2c32722509203233,0x090a3b3231662520,0x203233622e6c6873,0x7225202c33722509\n"
".quad 0x6f090a3b38202c32,0x2509203233622e72,0x2c317225202c3472,0x6d090a3b33722520\n"
".quad 0x09203233662e766f,0x6630202c33316625,0x3030303066373334,0x2f2f09202020203b\n"
".quad 0x756d090a35353220,0x2509203233662e6c,0x366625202c343166,0x0a3b33316625202c\n"
".quad 0x697a722e74766309,0x3233662e3233732e,0x25202c3572250920,0x6873090a3b343166\n"
".quad 0x2509203233622e6c,0x2c357225202c3672,0x6f6d090a3b363120,0x2509203233662e76\n"
".quad 0x346630202c353166,0x3b30303030663733,0x202f2f0920202020,0x6c756d090a353532\n"
".quad 0x662509203233662e,0x2c386625202c3631,0x090a3b3531662520,0x2e697a722e747663\n"
".quad 0x203233662e323373,0x6625202c37722509,0x6c6873090a3b3631,0x722509203233622e\n"
".quad 0x202c377225202c38,0x2e726f090a3b3432,0x3972250920323362,0x25202c367225202c\n"
".quad 0x2e726f090a3b3872,0x3172250920323362,0x202c347225202c30,0x7473090a3b397225\n"
".quad 0x752e6d617261702e,0x635f5f5b09203233,0x5f66746572616475,0x656b616d30315a5f\n"
".quad 0x6666726f6c6f635f,0x317225202c5d6666,0x3b746572090a3b30,0x646e6557444c240a\n"
".quad 0x6b616d30315a5f5f,0x66726f6c6f635f65,0x207d090a3a666666,0x6d30315a5f202f2f\n"
".quad 0x6f6c6f635f656b61,0x2e090a6666666672,0x2e206c61626f6c67,0x7420666572786574\n"
".quad 0x3b6567616d497865,0x72746e652e090a0a,0x706f43345a5f2079,0x0a282069696a5079\n"
".quad 0x6d617261702e0909,0x5f5f203436752e20,0x6d72617061647563,0x79706f43345a5f5f\n"
".quad 0x7473645f69696a50,0x7261702e09090a2c,0x203233732e206d61,0x6170616475635f5f\n"
".quad 0x6f43345a5f5f6d72,0x695f69696a507970,0x090a2c576567616d,0x206d617261702e09\n"
".quad 0x635f5f203233732e,0x5f6d726170616475,0x5079706f43345a5f,0x67616d695f69696a\n"
".quad 0x090a7b090a294865,0x33752e206765722e,0x3e30343c72252032,0x206765722e090a3b\n"
".quad 0x647225203436752e,0x722e090a3b3e353c,0x203233662e206765,0x0a3b3e34323c6625\n"
".quad 0x702e206765722e09,0x333c702520646572,0x636f6c2e090a3b3e,0x3009313409383109\n"
".quad 0x67656257444c240a,0x6f43345a5f5f6e69,0x0a3a69696a507970,0x3233752e766f6d09\n"
".quad 0x25202c3172250920,0x3b782e6469617463,0x33752e766f6d090a,0x202c327225092032\n"
".quad 0x3b782e6469746e25,0x6f6c2e6c756d090a,0x722509203233752e,0x202c317225202c33\n"
".quad 0x6f6d090a3b327225,0x2509203233752e76,0x61746325202c3472,0x6d090a3b792e6469\n"
".quad 0x09203233752e766f,0x746e25202c357225,0x6d090a3b792e6469,0x33752e6f6c2e6c75\n"
".quad 0x202c367225092032,0x357225202c347225,0x752e766f6d090a3b,0x2c37722509203233\n"
".quad 0x3b782e6469742520,0x33752e646461090a,0x202c387225092032,0x337225202c377225\n"
".quad 0x752e766f6d090a3b,0x2c39722509203233,0x3b792e6469742520,0x33752e646461090a\n"
".quad 0x2c30317225092032,0x7225202c39722520,0x702e646c090a3b36,0x3233732e6d617261\n"
".quad 0x202c313172250920,0x70616475635f5f5b,0x43345a5f5f6d7261,0x5f69696a5079706f\n"
".quad 0x3b5d576567616d69,0x7261702e646c090a,0x09203233732e6d61,0x5f5b202c32317225\n"
".quad 0x726170616475635f,0x706f43345a5f5f6d,0x6d695f69696a5079,0x090a3b5d48656761\n"
".quad 0x752e74672e746573,0x09203233732e3233,0x7225202c33317225,0x30317225202c3231\n"
".quad 0x732e67656e090a3b,0x3431722509203233,0x0a3b33317225202c,0x2e74672e74657309\n"
".quad 0x203233732e323375,0x25202c3531722509,0x387225202c313172,0x732e67656e090a3b\n"
".quad 0x3631722509203233,0x0a3b35317225202c,0x3233622e646e6109,0x202c373172250920\n"
".quad 0x7225202c34317225,0x766f6d090a3b3631,0x722509203233752e,0x090a3b30202c3831\n"
".quad 0x2e71652e70746573,0x3170250920323373,0x202c37317225202c,0x40090a3b38317225\n"
".quad 0x2061726220317025,0x315f335f744c2409,0x7663090a3b323832,0x3233662e6e722e74\n"
".quad 0x662509203233732e,0x0a3b387225202c31,0x3233662e766f6d09,0x30202c3266250920\n"
".quad 0x3030303030663366,0x0920202020203b30,0x090a352e30202f2f,0x203233662e646461\n"
".quad 0x6625202c33662509,0x0a3b326625202c31,0x3233662e766f6d09,0x25202c3466250920\n"
".quad 0x747663090a3b3366,0x2e3233662e6e722e,0x3566250920323373,0x0a3b30317225202c\n"
".quad 0x3233662e766f6d09,0x30202c3666250920,0x3030303030663366,0x0920202020203b30\n"
".quad 0x090a352e30202f2f,0x203233662e646461,0x6625202c37662509,0x0a3b366625202c35\n"
".quad 0x3233662e766f6d09,0x25202c3866250920,0x766f6d090a3b3766,0x662509203233662e\n"
".quad 0x3030306630202c39,0x20203b3030303030,0x30202f2f09202020,0x33662e766f6d090a\n"
".quad 0x2c30316625092032,0x6d090a3b39662520,0x09203233662e766f,0x6630202c31316625\n"
".quad 0x3030303030303030,0x2f2f09202020203b,0x2e766f6d090a3020,0x3166250920323366\n"
".quad 0x3b31316625202c32,0x64322e786574090a,0x2e3233752e34762e,0x3172257b20323366\n"
".quad 0x252c303272252c39,0x323272252c313272,0x6d497865745b2c7d,0x3466257b2c656761\n"
".quad 0x3166252c3866252c,0x5d7d323166252c30,0x09636f6c2e090a3b,0x0a30093035093831\n"
".quad 0x3233732e766f6d09,0x202c333272250920,0x6d090a3b39317225,0x09203233732e766f\n"
".quad 0x7225202c34327225,0x766f6d090a3b3032,0x722509203233732e,0x31327225202c3532\n"
".quad 0x09636f6c2e090a3b,0x0a30093135093831,0x3233622e766f6d09,0x202c333166250920\n"
".quad 0x6d090a3b33327225,0x09203233662e766f,0x6630202c34316625,0x3030303066373334\n"
".quad 0x2f2f09202020203b,0x756d090a35353220,0x2509203233662e6c,0x316625202c353166\n"
".quad 0x3b34316625202c33,0x7a722e747663090a,0x33662e3233732e69,0x2c36327225092032\n"
".quad 0x090a3b3531662520,0x203233622e766f6d,0x25202c3631662509,0x6f6d090a3b343272\n"
".quad 0x2509203233662e76,0x346630202c373166,0x3b30303030663733,0x202f2f0920202020\n"
".quad 0x6c756d090a353532,0x662509203233662e,0x36316625202c3831,0x0a3b37316625202c\n"
".quad 0x697a722e74766309,0x3233662e3233732e,0x202c373272250920,0x73090a3b38316625\n"
".quad 0x09203233622e6c68,0x7225202c38327225,0x090a3b38202c3732,0x09203233622e726f\n"
".quad 0x7225202c39327225,0x38327225202c3632,0x662e766f6d090a3b,0x3931662509203233\n"
".quad 0x303030306630202c,0x2020203b30303030,0x090a30202f2f0920,0x2e697a722e747663\n"
".quad 0x203233662e323373,0x25202c3033722509,0x6873090a3b393166,0x2509203233622e6c\n"
".quad 0x337225202c313372,0x090a3b3432202c30,0x203233622e766f6d,0x25202c3032662509\n"
".quad 0x6f6d090a3b353272,0x2509203233662e76,0x346630202c313266,0x3b30303030663733\n"
".quad 0x202f2f0920202020,0x6c756d090a353532,0x662509203233662e,0x30326625202c3232\n"
".quad 0x0a3b31326625202c,0x697a722e74766309,0x3233662e3233732e,0x202c323372250920\n"
".quad 0x73090a3b32326625,0x09203233622e6c68,0x7225202c33337225,0x0a3b3631202c3233\n"
".quad 0x203233622e726f09,0x25202c3433722509,0x337225202c313372,0x622e726f090a3b33\n"
".quad 0x3533722509203233,0x202c39327225202c,0x6d090a3b34337225,0x33732e6f6c2e6c75\n"
".quad 0x2c36337225092032,0x25202c3131722520,0x6461090a3b303172,0x2509203233732e64\n"
".quad 0x387225202c373372,0x0a3b36337225202c,0x2e6f6c2e6c756d09,0x3372250920323375\n"
".quad 0x2c37337225202c38,0x747663090a3b3420,0x3233752e3436752e,0x202c316472250920\n"
".quad 0x6c090a3b38337225,0x2e6d617261702e64,0x6472250920343675,0x75635f5f5b202c32\n"
".quad 0x5f5f6d7261706164,0x6a5079706f43345a,0x3b5d7473645f6969,0x36752e646461090a\n"
".quad 0x2c33647225092034,0x25202c3164722520,0x7473090a3b326472,0x2e6c61626f6c672e\n"
".quad 0x72255b0920323375,0x25202c5d302b3364,0x744c240a3b353372,0x3a323832315f335f\n"
".quad 0x3109636f6c2e090a,0x090a300933350938,0x4c240a3b74697865,0x5a5f5f646e655744\n"
".quad 0x696a5079706f4334,0x2f2f207d090a3a69,0x79706f43345a5f20,0x2e090a0a69696a50\n"
".quad 0x5a5f207972746e65,0x69696a504e4e4b33,0x2e09090a28206666,0x752e206d61726170\n"
".quad 0x6475635f5f203436,0x5a5f5f6d72617061,0x69696a504e4e4b33,0x0a2c7473645f6666\n"
".quad 0x6d617261702e0909,0x5f5f203233732e20,0x6d72617061647563,0x504e4e4b335a5f5f\n"
".quad 0x6d695f666669696a,0x09090a2c57656761,0x2e206d617261702e,0x75635f5f20323373\n"
".quad 0x5f5f6d7261706164,0x696a504e4e4b335a,0x67616d695f666669,0x702e09090a2c4865\n"
".quad 0x33662e206d617261,0x616475635f5f2032,0x335a5f5f6d726170,0x6669696a504e4e4b\n"
".quad 0x2c6573696f4e5f66,0x617261702e09090a,0x5f203233662e206d,0x726170616475635f\n"
".quad 0x4e4e4b335a5f5f6d,0x6c5f666669696a50,0x7b090a2943707265,0x2e206765722e090a\n"
".quad 0x343c722520323375,0x65722e090a3b3e37,0x25203436752e2067,0x090a3b3e353c6472\n"
".quad 0x33662e206765722e,0x3e37373c66252032,0x206765722e090a3b,0x702520646572702e\n"
".quad 0x6c2e090a3b3e373c,0x363409393109636f,0x6257444c240a3009,0x335a5f5f6e696765\n"
".quad 0x6669696a504e4e4b,0x2e766f6d090a3a66,0x3172250920323375,0x646961746325202c\n"
".quad 0x766f6d090a3b782e,0x722509203233752e,0x6469746e25202c32,0x6c756d090a3b782e\n"
".quad 0x203233752e6f6c2e,0x7225202c33722509,0x0a3b327225202c31,0x3233752e766f6d09\n"
".quad 0x25202c3472250920,0x3b792e6469617463,0x33752e766f6d090a,0x202c357225092032\n"
".quad 0x3b792e6469746e25,0x6f6c2e6c756d090a,0x722509203233752e,0x202c347225202c36\n"
".quad 0x6f6d090a3b357225,0x2509203233752e76,0x64697425202c3772,0x646461090a3b782e\n"
".quad 0x722509203233752e,0x202c377225202c38,0x6f6d090a3b337225,0x2509203233752e76\n"
".quad 0x64697425202c3972,0x646461090a3b792e,0x722509203233752e,0x2c397225202c3031\n"
".quad 0x6c090a3b36722520,0x2e6d617261702e64,0x3172250920323373,0x75635f5f5b202c31\n"
".quad 0x5f5f6d7261706164,0x696a504e4e4b335a,0x67616d695f666669,0x646c090a3b5d5765\n"
".quad 0x732e6d617261702e,0x3231722509203233,0x6475635f5f5b202c,0x5a5f5f6d72617061\n"
".quad 0x69696a504e4e4b33,0x6567616d695f6666,0x746573090a3b5d48,0x2e3233752e74672e\n"
".quad 0x3172250920323373,0x2c32317225202c33,0x090a3b3031722520,0x203233732e67656e\n"
".quad 0x25202c3431722509,0x6573090a3b333172,0x3233752e74672e74,0x722509203233732e\n"
".quad 0x31317225202c3531,0x090a3b387225202c,0x203233732e67656e,0x25202c3631722509\n"
".quad 0x6e61090a3b353172,0x2509203233622e64,0x317225202c373172,0x3b36317225202c34\n"
".quad 0x33752e766f6d090a,0x2c38317225092032,0x746573090a3b3020,0x3233732e71652e70\n"
".quad 0x25202c3170250920,0x317225202c373172,0x31702540090a3b38,0x4c24092061726220\n"
".quad 0x363638345f345f74,0x722e747663090a3b,0x33732e3233662e6e,0x202c316625092032\n"
".quad 0x6f6d090a3b387225,0x2509203233662e76,0x66336630202c3266,0x203b303030303030\n"
".quad 0x202f2f0920202020,0x646461090a352e30,0x662509203233662e,0x202c316625202c33\n"
".quad 0x7663090a3b326625,0x3233662e6e722e74,0x662509203233732e,0x3b30317225202c34\n"
".quad 0x33662e766f6d090a,0x202c356625092032,0x3030303066336630,0x20202020203b3030\n"
".quad 0x0a352e30202f2f09,0x3233662e64646109,0x25202c3666250920,0x3b356625202c3466\n"
".quad 0x33662e766f6d090a,0x202c376625092032,0x6f6d090a3b336625,0x2509203233662e76\n"
".quad 0x3b366625202c3866,0x33662e766f6d090a,0x202c396625092032,0x3030303030306630\n"
".quad 0x20202020203b3030,0x6d090a30202f2f09,0x09203233662e766f,0x6625202c30316625\n"
".quad 0x2e766f6d090a3b39,0x3166250920323366,0x3030306630202c31,0x20203b3030303030\n"
".quad 0x0a30202f2f092020,0x3233662e766f6d09,0x202c323166250920,0x74090a3b31316625\n"
".quad 0x34762e64322e7865,0x3233662e3233752e,0x252c393172257b20,0x313272252c303272\n"
".quad 0x5b2c7d323272252c,0x6567616d49786574,0x66252c3766257b2c,0x252c303166252c38\n"
".quad 0x090a3b5d7d323166,0x09393109636f6c2e,0x6f6d090a30093236,0x2509203233732e76\n"
".quad 0x317225202c333272,0x2e766f6d090a3b39,0x3272250920323373,0x3b30327225202c34\n"
".quad 0x33732e766f6d090a,0x2c35327225092032,0x090a3b3132722520,0x203233622e766f6d\n"
".quad 0x25202c3331662509,0x6f6d090a3b343272,0x2509203233622e76,0x327225202c343166\n"
".quad 0x2e766f6d090a3b33,0x3166250920323362,0x3b35327225202c35,0x7261702e646c090a\n"
".quad 0x09203233662e6d61,0x5f5b202c36316625,0x726170616475635f,0x4e4e4b335a5f5f6d\n"
".quad 0x4e5f666669696a50,0x090a3b5d6573696f,0x203233662e766f6d,0x30202c3731662509\n"
".quad 0x3030303034306366,0x2f09202020203b30,0x6f6d090a332d202f,0x2509203233662e76\n"
".quad 0x306630202c383166,0x3b30303030303030,0x202f2f0920202020,0x662e766f6d090a30\n"
".quad 0x3931662509203233,0x303030306630202c,0x2020203b30303030,0x090a30202f2f0920\n"
".quad 0x203233662e766f6d,0x30202c3032662509,0x3030303030303066,0x2f09202020203b30\n"
".quad 0x766f6d090a30202f,0x662509203233662e,0x30306630202c3132,0x203b303030303030\n"
".quad 0x30202f2f09202020,0x33662e766f6d090a,0x2c32326625092032,0x3030303030663020\n"
".quad 0x202020203b303030,0x4c240a30202f2f09,0x303938355f345f74,0x6f6c3c2f2f200a3a\n"
".quad 0x706f6f4c203e706f,0x696c2079646f6220,0x6e202c323620656e,0x6420676e69747365\n"
".quad 0x2c31203a68747065,0x74616d6974736520,0x6172657469206465,0x75203a736e6f6974\n"
".quad 0x090a6e776f6e6b6e,0x203233662e646461,0x25202c3332662509,0x37316625202c3666\n"
".quad 0x662e766f6d090a3b,0x3432662509203233,0x303430636630202c,0x2020203b30303030\n"
".quad 0x0a332d202f2f0920,0x36365f345f744c24,0x3c2f2f200a3a3835,0x6f4c203e706f6f6c\n"
".quad 0x2079646f6220706f,0x2c323620656e696c,0x676e697473656e20,0x203a687470656420\n"
".quad 0x6d69747365202c32,0x6574692064657461,0x3a736e6f69746172,0x6e776f6e6b6e7520\n"
".quad 0x33662e646461090a,0x2c35326625092032,0x6625202c33662520,0x766f6d090a3b3432\n"
".quad 0x662509203233662e,0x35326625202c3632,0x662e766f6d090a3b,0x3732662509203233\n"
".quad 0x0a3b33326625202c,0x3233662e766f6d09,0x202c383266250920,0x3030303030306630\n"
".quad 0x09202020203b3030,0x6f6d090a30202f2f,0x2509203233662e76,0x326625202c393266\n"
".quad 0x2e766f6d090a3b38,0x3366250920323366,0x3030306630202c30,0x20203b3030303030\n"
".quad 0x0a30202f2f092020,0x3233662e766f6d09,0x202c313366250920,0x74090a3b30336625\n"
".quad 0x34762e64322e7865,0x3233662e3233752e,0x252c363272257b20,0x383272252c373272\n"
".quad 0x5b2c7d393272252c,0x6567616d49786574,0x252c363266257b2c,0x393266252c373266\n"
".quad 0x3b5d7d313366252c,0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f\n"
".quad 0x6e696c2079646f62,0x6568202c32362065,0x6c6562616c206461,0x345f744c24206465\n"
".quad 0x2e090a383536365f,0x3609393109636f6c,0x766f6d090a300938,0x722509203233732e\n"
".quad 0x36327225202c3033,0x732e766f6d090a3b,0x3133722509203233,0x0a3b37327225202c\n"
".quad 0x3233732e766f6d09,0x202c323372250920,0x2e090a3b38327225,0x3709393109636f6c\n"
".quad 0x766f6d090a300935,0x662509203233622e,0x30337225202c3233,0x662e6c756d090a3b\n"
".quad 0x3333662509203233,0x202c34326625202c,0x6d090a3b34326625,0x09203233622e766f\n"
".quad 0x7225202c34336625,0x766f6d090a3b3133,0x662509203233622e,0x32337225202c3533\n"
".quad 0x662e627573090a3b,0x3633662509203233,0x202c32336625202c,0x66090a3b34316625\n"
".quad 0x33662e6e722e616d,0x2c37336625092032,0x25202c3731662520,0x336625202c373166\n"
".quad 0x2e627573090a3b33,0x3366250920323366,0x2c34336625202c38,0x090a3b3331662520\n"
".quad 0x203233662e627573,0x25202c3933662509,0x316625202c353366,0x2e766f6d090a3b35\n"
".quad 0x3466250920323366,0x6163336630202c30,0x20203b3530663237,0x2e30202f2f092020\n"
".quad 0x0a32383034303230,0x3233662e6c756d09,0x202c313466250920,0x6625202c37336625\n"
".quad 0x6c756d090a3b3034,0x662509203233662e,0x38336625202c3234,0x0a3b38336625202c\n"
".quad 0x2e6e722e616d6609,0x3466250920323366,0x2c36336625202c33,0x25202c3633662520\n"
".quad 0x6d66090a3b323466,0x3233662e6e722e61,0x202c343466250920,0x6625202c39336625\n"
".quad 0x33346625202c3933,0x722e616d66090a3b,0x2509203233662e6e,0x316625202c353466\n"
".quad 0x2c34346625202c36,0x090a3b3134662520,0x203233662e67656e,0x25202c3634662509\n"
".quad 0x6f6d090a3b353466,0x2509203233662e76,0x336630202c373466,0x3b62336161386266\n"
".quad 0x202f2f0920202020,0x090a373234342e31,0x203233662e6c756d,0x25202c3834662509\n"
".quad 0x346625202c363466,0x2e327865090a3b37,0x662e786f72707061,0x3934662509203233\n"
".quad 0x0a3b38346625202c,0x2e6e722e616d6609,0x3266250920323366,0x2c32336625202c30\n"
".quad 0x25202c3934662520,0x6c2e090a3b303266,0x363709393109636f,0x2e616d66090a3009\n"
".quad 0x09203233662e6e72,0x6625202c39316625,0x39346625202c3433,0x0a3b39316625202c\n"
".quad 0x393109636f6c2e09,0x66090a3009373709,0x33662e6e722e616d,0x2c38316625092032\n"
".quad 0x25202c3533662520,0x316625202c393466,0x636f6c2e090a3b38,0x3009303809393109\n"
".quad 0x33662e646461090a,0x2c31326625092032,0x25202c3934662520,0x6c2e090a3b313266\n"
".quad 0x343809393109636f,0x2e766f6d090a3009,0x3566250920323366,0x6163336630202c30\n"
".quad 0x20203b3530663237,0x2e30202f2f092020,0x0a32383034303230,0x3233662e64646109\n"
".quad 0x202c313566250920,0x6625202c32326625,0x766f6d090a3b3035,0x662509203233662e\n"
".quad 0x63336630202c3235,0x203b613037643361,0x30202f2f09202020,0x746573090a32302e\n"
".quad 0x3233662e74672e70,0x25202c3270250920,0x356625202c393466,0x706c6573090a3b32\n"
".quad 0x662509203233662e,0x31356625202c3232,0x202c32326625202c,0x6f6d090a3b327025\n"
".quad 0x2509203233662e76,0x336630202c333566,0x3b30303030303866,0x202f2f0920202020\n"
".quad 0x662e646461090a31,0x3432662509203233,0x202c34326625202c,0x6d090a3b33356625\n"
".quad 0x09203233662e766f,0x6630202c34356625,0x3030303030343034,0x2f2f09202020203b\n"
".quad 0x70746573090a3320,0x203233662e656c2e,0x6625202c33702509,0x34356625202c3432\n"
".quad 0x2033702540090a3b,0x744c240920617262,0x3b383536365f345f,0x6f6f6c3c2f2f200a\n"
".quad 0x2074726150203e70,0x20706f6f6c20666f,0x6e696c2079646f62,0x6568202c32362065\n"
".quad 0x6c6562616c206461,0x345f744c24206465,0x6d090a303938355f,0x09203233662e766f\n"
".quad 0x6630202c35356625,0x3030303030386633,0x2f2f09202020203b,0x2e646461090a3120\n"
".quad 0x3166250920323366,0x2c37316625202c37,0x090a3b3535662520,0x203233662e766f6d\n"
".quad 0x30202c3635662509,0x3030303034303466,0x2f09202020203b30,0x746573090a33202f\n"
".quad 0x3233662e656c2e70,0x25202c3470250920,0x356625202c373166,0x34702540090a3b36\n"
".quad 0x4c24092061726220,0x303938355f345f74,0x09636f6c2e090a3b,0x0a30093938093931\n"
".quad 0x2e6e722e70637209,0x3566250920323366,0x3b31326625202c37,0x33662e6c756d090a\n"
".quad 0x2c30326625092032,0x25202c3735662520,0x6c2e090a3b303266,0x303909393109636f\n"
".quad 0x2e6c756d090a3009,0x3166250920323366,0x2c37356625202c39,0x090a3b3931662520\n"
".quad 0x09393109636f6c2e,0x756d090a30093139,0x2509203233662e6c,0x356625202c383166\n"
".quad 0x3b38316625202c37,0x3109636f6c2e090a,0x0a30093130310939,0x3233662e766f6d09\n"
".quad 0x202c383566250920,0x6433613466336630,0x09202020203b3137,0x0a39372e30202f2f\n"
".quad 0x74672e7074657309,0x702509203233662e,0x2c32326625202c35,0x090a3b3835662520\n"
".quad 0x6d617261702e646c,0x662509203233662e,0x635f5f5b202c3935,0x5f6d726170616475\n"
".quad 0x6a504e4e4b335a5f,0x72656c5f66666969,0x6f6d090a3b5d4370,0x2509203233662e76\n"
".quad 0x336630202c303666,0x3b30303030303866,0x202f2f0920202020,0x662e627573090a31\n"
".quad 0x3136662509203233,0x202c30366625202c,0x73090a3b39356625,0x203233662e706c65\n"
".quad 0x25202c3236662509,0x366625202c393566,0x0a3b357025202c31,0x3233662e62757309\n"
".quad 0x202c333666250920,0x6625202c34316625,0x616d66090a3b3032,0x203233662e6e722e\n"
".quad 0x25202c3436662509,0x366625202c323666,0x3b30326625202c33,0x33662e766f6d090a\n"
".quad 0x2c35366625092032,0x3066373334663020,0x202020203b303030,0x0a353532202f2f09\n"
".quad 0x3233662e6c756d09,0x202c363666250920,0x6625202c34366625,0x747663090a3b3536\n"
".quad 0x3233732e697a722e,0x722509203233662e,0x36366625202c3333,0x662e627573090a3b\n"
".quad 0x3736662509203233,0x202c33316625202c,0x66090a3b39316625,0x33662e6e722e616d\n"
".quad 0x2c38366625092032,0x25202c3236662520,0x316625202c373666,0x2e766f6d090a3b39\n"
".quad 0x3666250920323366,0x3733346630202c39,0x20203b3030303066,0x3532202f2f092020\n"
".quad 0x662e6c756d090a35,0x3037662509203233,0x202c38366625202c,0x63090a3b39366625\n"
".quad 0x732e697a722e7476,0x09203233662e3233,0x6625202c34337225,0x6c6873090a3b3037\n"
".quad 0x722509203233622e,0x34337225202c3533,0x726f090a3b38202c,0x722509203233622e\n"
".quad 0x33337225202c3633,0x0a3b35337225202c,0x3233662e766f6d09,0x202c313766250920\n"
".quad 0x3030303030306630,0x09202020203b3030,0x7663090a30202f2f,0x33732e697a722e74\n"
".quad 0x2509203233662e32,0x376625202c373372,0x2e6c6873090a3b31,0x3372250920323362\n"
".quad 0x2c37337225202c38,0x7573090a3b343220,0x2509203233662e62,0x316625202c323766\n"
".quad 0x3b38316625202c35,0x6e722e616d66090a,0x662509203233662e,0x32366625202c3337\n"
".quad 0x202c32376625202c,0x6d090a3b38316625,0x09203233662e766f,0x6630202c34376625\n"
".quad 0x3030303066373334,0x2f2f09202020203b,0x756d090a35353220,0x2509203233662e6c\n"
".quad 0x376625202c353766,0x3b34376625202c33,0x7a722e747663090a,0x33662e3233732e69\n"
".quad 0x2c39337225092032,0x090a3b3537662520,0x203233622e6c6873,0x25202c3034722509\n"
".quad 0x3b3631202c393372,0x3233622e726f090a,0x202c313472250920,0x7225202c38337225\n"
".quad 0x2e726f090a3b3034,0x3472250920323362,0x2c36337225202c32,0x090a3b3134722520\n"
".quad 0x732e6f6c2e6c756d,0x3334722509203233,0x202c31317225202c,0x61090a3b30317225\n"
".quad 0x09203233732e6464,0x7225202c34347225,0x3b33347225202c38,0x6f6c2e6c756d090a\n"
".quad 0x722509203233752e,0x34347225202c3534,0x7663090a3b34202c,0x33752e3436752e74\n"
".quad 0x2c31647225092032,0x090a3b3534722520,0x6d617261702e646c,0x722509203436752e\n"
".quad 0x635f5f5b202c3264,0x5f6d726170616475,0x6a504e4e4b335a5f,0x7473645f66666969\n"
".quad 0x2e646461090a3b5d,0x6472250920343675,0x2c31647225202c33,0x090a3b3264722520\n"
".quad 0x61626f6c672e7473,0x5b09203233752e6c,0x2c5d302b33647225,0x240a3b3234722520\n"
".quad 0x3638345f345f744c,0x636f6c2e090a3a36,0x0933303109393109,0x3b74697865090a30\n"
".quad 0x646e6557444c240a,0x504e4e4b335a5f5f,0x090a3a666669696a,0x335a5f202f2f207d\n"
".quad 0x6669696a504e4e4b,0x746e652e090a0a66,0x4e4b375a5f207972,0x696a50676169644e\n"
".quad 0x09090a2820666669,0x2e206d617261702e,0x75635f5f20343675,0x5f5f6d7261706164\n"
".quad 0x6169644e4e4b375a,0x5f666669696a5067,0x2e09090a2c747364,0x732e206d61726170\n"
".quad 0x6475635f5f203233,0x5a5f5f6d72617061,0x676169644e4e4b37,0x695f666669696a50\n"
".quad 0x090a2c576567616d,0x206d617261702e09,0x635f5f203233732e,0x5f6d726170616475\n"
".quad 0x69644e4e4b375a5f,0x666669696a506761,0x2c486567616d695f,0x617261702e09090a\n"
".quad 0x5f203233662e206d,0x726170616475635f,0x4e4e4b375a5f5f6d,0x69696a5067616964\n"
".quad 0x6573696f4e5f6666,0x7261702e09090a2c,0x203233662e206d61,0x6170616475635f5f\n"
".quad 0x4e4b375a5f5f6d72,0x696a50676169644e,0x7072656c5f666669,0x2e090a7b090a2943\n"
".quad 0x3233752e20676572,0x3b3e36343c722520,0x2e206765722e090a,0x3c64722520343675\n"
".quad 0x65722e090a3b3e35,0x25203233662e2067,0x090a3b3e32363c66,0x72702e206765722e\n"
".quad 0x3e373c7025206465,0x09636f6c2e090a3b,0x3009383231093931,0x67656257444c240a\n"
".quad 0x4e4b375a5f5f6e69,0x696a50676169644e,0x6f6d090a3a666669,0x2509203233752e76\n"
".quad 0x61746325202c3172,0x6d090a3b782e6469,0x09203233752e766f,0x746e25202c327225\n"
".quad 0x6d090a3b782e6469,0x33752e6f6c2e6c75,0x202c337225092032,0x327225202c317225\n"
".quad 0x752e766f6d090a3b,0x2c34722509203233,0x2e64696174632520,0x2e766f6d090a3b79\n"
".quad 0x3572250920323375,0x2e6469746e25202c,0x2e6c756d090a3b79,0x09203233752e6f6c\n"
".quad 0x347225202c367225,0x090a3b357225202c,0x203233752e766f6d,0x7425202c37722509\n"
".quad 0x61090a3b782e6469,0x09203233752e6464,0x377225202c387225,0x090a3b337225202c\n"
".quad 0x203233752e766f6d,0x7425202c39722509,0x61090a3b792e6469,0x09203233752e6464\n"
".quad 0x7225202c30317225,0x0a3b367225202c39,0x617261702e646c09,0x2509203233732e6d\n"
".quad 0x5f5f5b202c313172,0x6d72617061647563,0x644e4e4b375a5f5f,0x6669696a50676169\n"
".quad 0x576567616d695f66,0x702e646c090a3b5d,0x3233732e6d617261,0x202c323172250920\n"
".quad 0x70616475635f5f5b,0x4b375a5f5f6d7261,0x6a50676169644e4e,0x616d695f66666969\n"
".quad 0x73090a3b5d486567,0x33752e74672e7465,0x2509203233732e32,0x317225202c333172\n"
".quad 0x3b30317225202c32,0x33732e67656e090a,0x2c34317225092032,0x090a3b3331722520\n"
".quad 0x752e74672e746573,0x09203233732e3233,0x7225202c35317225,0x3b387225202c3131\n"
".quad 0x33732e67656e090a,0x2c36317225092032,0x090a3b3531722520,0x203233622e646e61\n"
".quad 0x25202c3731722509,0x317225202c343172,0x2e766f6d090a3b36,0x3172250920323375\n"
".quad 0x73090a3b30202c38,0x732e71652e707465,0x2c31702509203233,0x25202c3731722520\n"
".quad 0x2540090a3b383172,0x0920617262203170,0x38345f355f744c24,0x747663090a3b3636\n"
".quad 0x2e3233662e6e722e,0x3166250920323373,0x090a3b387225202c,0x203233662e766f6d\n"
".quad 0x6630202c32662509,0x3030303030306633,0x2f0920202020203b,0x61090a352e30202f\n"
".quad 0x09203233662e6464,0x316625202c336625,0x090a3b326625202c,0x662e6e722e747663\n"
".quad 0x09203233732e3233,0x317225202c346625,0x2e766f6d090a3b30,0x3566250920323366\n"
".quad 0x303066336630202c,0x2020203b30303030,0x2e30202f2f092020,0x662e646461090a35\n"
".quad 0x2c36662509203233,0x6625202c34662520,0x2e766f6d090a3b35,0x3766250920323366\n"
".quad 0x090a3b336625202c,0x203233662e766f6d,0x6625202c38662509,0x2e766f6d090a3b36\n"
".quad 0x3966250920323366,0x303030306630202c,0x2020203b30303030,0x0a30202f2f092020\n"
".quad 0x3233662e766f6d09,0x202c303166250920,0x6f6d090a3b396625,0x2509203233662e76\n"
".quad 0x306630202c313166,0x3b30303030303030,0x202f2f0920202020,0x662e766f6d090a30\n"
".quad 0x3231662509203233,0x0a3b31316625202c,0x2e64322e78657409,0x662e3233752e3476\n"
".quad 0x393172257b203233,0x72252c303272252c,0x7d323272252c3132,0x616d497865745b2c\n"
".quad 0x2c3766257b2c6567,0x303166252c386625,0x3b5d7d323166252c,0x3109636f6c2e090a\n"
".quad 0x0a30093034310939,0x3233732e766f6d09,0x202c333272250920,0x6d090a3b39317225\n"
".quad 0x09203233732e766f,0x7225202c34327225,0x766f6d090a3b3032,0x722509203233732e\n"
".quad 0x31327225202c3532,0x622e766f6d090a3b,0x3331662509203233,0x0a3b34327225202c\n"
".quad 0x3233622e766f6d09,0x202c343166250920,0x6d090a3b33327225,0x09203233622e766f\n"
".quad 0x7225202c35316625,0x2e646c090a3b3532,0x33662e6d61726170,0x2c36316625092032\n"
".quad 0x616475635f5f5b20,0x375a5f5f6d726170,0x50676169644e4e4b,0x6f4e5f666669696a\n"
".quad 0x6d090a3b5d657369,0x09203233662e766f,0x6630202c37316625,0x3030303030343063\n"
".quad 0x2f2f09202020203b,0x766f6d090a332d20,0x662509203233662e,0x30306630202c3831\n"
".quad 0x203b303030303030,0x30202f2f09202020,0x355f355f744c240a,0x2f2f200a3a303938\n"
".quad 0x4c203e706f6f6c3c,0x79646f6220706f6f,0x343120656e696c20,0x697473656e202c30\n"
".quad 0x687470656420676e,0x747365202c31203a,0x6920646574616d69,0x6e6f697461726574\n"
".quad 0x6f6e6b6e75203a73,0x2e646461090a6e77,0x3166250920323366,0x202c366625202c39\n"
".quad 0x6d090a3b37316625,0x09203233662e766f,0x6630202c30326625,0x3030303030343063\n"
".quad 0x2f2f09202020203b,0x5f744c240a332d20,0x0a3a383536365f35,0x706f6f6c3c2f2f20\n"
".quad 0x6220706f6f4c203e,0x656e696c2079646f,0x656e202c30343120,0x656420676e697473\n"
".quad 0x202c32203a687470,0x6574616d69747365,0x7461726574692064,0x6e75203a736e6f69\n"
".quad 0x61090a6e776f6e6b,0x09203233662e6464,0x6625202c31326625,0x3b30326625202c33\n"
".quad 0x33662e766f6d090a,0x2c32326625092032,0x090a3b3132662520,0x203233662e766f6d\n"
".quad 0x25202c3332662509,0x6f6d090a3b393166,0x2509203233662e76,0x306630202c343266\n"
".quad 0x3b30303030303030,0x202f2f0920202020,0x662e766f6d090a30,0x3532662509203233\n"
".quad 0x0a3b34326625202c,0x3233662e766f6d09,0x202c363266250920,0x3030303030306630\n"
".quad 0x09202020203b3030,0x6f6d090a30202f2f,0x2509203233662e76,0x326625202c373266\n"
".quad 0x2e786574090a3b36,0x33752e34762e6432,0x257b203233662e32,0x373272252c363272\n"
".quad 0x72252c383272252c,0x7865745b2c7d3932,0x257b2c6567616d49,0x333266252c323266\n"
".quad 0x66252c353266252c,0x2f200a3b5d7d3732,0x203e706f6f6c3c2f,0x20666f2074726150\n"
".quad 0x646f6220706f6f6c,0x3120656e696c2079,0x64616568202c3034,0x64656c6562616c20\n"
".quad 0x365f355f744c2420,0x6f6c2e090a383536,0x3634310939310963,0x2e766f6d090a3009\n"
".quad 0x3372250920323373,0x3b36327225202c30,0x33732e766f6d090a,0x2c31337225092032\n"
".quad 0x090a3b3732722520,0x203233732e766f6d,0x25202c3233722509,0x6c2e090a3b383272\n"
".quad 0x353109393109636f,0x766f6d090a300934,0x662509203233622e,0x31337225202c3832\n"
".quad 0x622e766f6d090a3b,0x3932662509203233,0x0a3b30337225202c,0x3233622e766f6d09\n"
".quad 0x202c303366250920,0x73090a3b32337225,0x09203233662e6275,0x6625202c31336625\n"
".quad 0x33316625202c3832,0x662e627573090a3b,0x3233662509203233,0x202c39326625202c\n"
".quad 0x73090a3b34316625,0x09203233662e6275,0x6625202c33336625,0x35316625202c3033\n"
".quad 0x662e766f6d090a3b,0x3433662509203233,0x376163336630202c,0x2020203b35306632\n"
".quad 0x302e30202f2f0920,0x090a323830343032,0x203233662e646461,0x25202c3533662509\n"
".quad 0x336625202c383166,0x2e6c756d090a3b34,0x3366250920323366,0x2c30326625202c36\n"
".quad 0x090a3b3032662520,0x662e6e722e616d66,0x3733662509203233,0x202c37316625202c\n"
".quad 0x6625202c37316625,0x766f6d090a3b3633,0x662509203233662e,0x63336630202c3833\n"
".quad 0x203b353066323761,0x30202f2f09202020,0x323830343032302e,0x33662e6c756d090a\n"
".quad 0x2c39336625092032,0x25202c3733662520,0x756d090a3b383366,0x2509203233662e6c\n"
".quad 0x336625202c303466,0x3b31336625202c31,0x6e722e616d66090a,0x662509203233662e\n"
".quad 0x32336625202c3134,0x202c32336625202c,0x66090a3b30346625,0x33662e6e722e616d\n"
".quad 0x2c32346625092032,0x25202c3333662520,0x346625202c333366,0x2e616d66090a3b31\n"
".quad 0x09203233662e6e72,0x6625202c33346625,0x32346625202c3631,0x0a3b39336625202c\n"
".quad 0x3233662e67656e09,0x202c343466250920,0x6d090a3b33346625,0x09203233662e766f\n"
".quad 0x6630202c35346625,0x6233616138626633,0x2f2f09202020203b,0x0a373234342e3120\n"
".quad 0x3233662e6c756d09,0x202c363466250920,0x6625202c34346625,0x327865090a3b3534\n"
".quad 0x2e786f727070612e,0x3466250920323366,0x3b36346625202c37,0x33662e766f6d090a\n"
".quad 0x2c38346625092032,0x6433616333663020,0x202020203b613037,0x32302e30202f2f09\n"
".quad 0x672e70746573090a,0x2509203233662e74,0x37346625202c3270,0x0a3b38346625202c\n"
".quad 0x33662e706c657309,0x2c38316625092032,0x25202c3533662520,0x327025202c383166\n"
".quad 0x662e766f6d090a3b,0x3934662509203233,0x303866336630202c,0x2020203b30303030\n"
".quad 0x090a31202f2f0920,0x203233662e646461,0x25202c3032662509,0x346625202c303266\n"
".quad 0x2e766f6d090a3b39,0x3566250920323366,0x3430346630202c30,0x20203b3030303030\n"
".quad 0x0a33202f2f092020,0x656c2e7074657309,0x702509203233662e,0x2c30326625202c33\n"
".quad 0x090a3b3035662520,0x6172622033702540,0x5f355f744c240920,0x2f200a3b38353636\n"
".quad 0x203e706f6f6c3c2f,0x20666f2074726150,0x646f6220706f6f6c,0x3120656e696c2079\n"
".quad 0x64616568202c3034,0x64656c6562616c20,0x355f355f744c2420,0x766f6d090a303938\n"
".quad 0x662509203233662e,0x66336630202c3135,0x203b303030303038,0x31202f2f09202020\n"
".quad 0x33662e646461090a,0x2c37316625092032,0x25202c3731662520,0x6f6d090a3b313566\n"
".quad 0x2509203233662e76,0x346630202c323566,0x3b30303030303430,0x202f2f0920202020\n"
".quad 0x2e70746573090a33,0x09203233662e656c,0x316625202c347025,0x3b32356625202c37\n"
".quad 0x622034702540090a,0x5f744c2409206172,0x0a3b303938355f35,0x393109636f6c2e09\n"
".quad 0x090a300932363109,0x203233662e766f6d,0x30202c3335662509,0x3030303030303066\n"
".quad 0x2f09202020203b30,0x747663090a30202f,0x3233732e697a722e,0x722509203233662e\n"
".quad 0x33356625202c3333,0x662e766f6d090a3b,0x3435662509203233,0x613466336630202c\n"
".quad 0x2020203b31376433,0x372e30202f2f0920,0x2e70746573090a39,0x09203233662e7467\n"
".quad 0x316625202c357025,0x3b34356625202c38,0x33662e766f6d090a,0x2c35356625092032\n"
".quad 0x3066373334663020,0x202020203b303030,0x0a353532202f2f09,0x3233662e766f6d09\n"
".quad 0x202c363566250920,0x3030303030306630,0x09202020203b3030,0x6573090a30202f2f\n"
".quad 0x09203233662e706c,0x6625202c37356625,0x36356625202c3535,0x090a3b357025202c\n"
".quad 0x2e697a722e747663,0x203233662e323373,0x25202c3433722509,0x6873090a3b373566\n"
".quad 0x2509203233622e6c,0x337225202c353372,0x6f090a3b38202c33,0x2509203233622e72\n"
".quad 0x337225202c363372,0x3b35337225202c34,0x33622e6c6873090a,0x2c37337225092032\n"
".quad 0x32202c3333722520,0x2e766f6d090a3b34,0x3566250920323366,0x3030306630202c38\n"
".quad 0x20203b3030303030,0x0a30202f2f092020,0x3233662e766f6d09,0x202c393566250920\n"
".quad 0x3030663733346630,0x09202020203b3030,0x090a353532202f2f,0x3233662e706c6573\n"
".quad 0x202c303666250920,0x6625202c38356625,0x3b357025202c3935,0x7a722e747663090a\n"
".quad 0x33662e3233732e69,0x2c38337225092032,0x090a3b3036662520,0x203233622e6c6873\n"
".quad 0x25202c3933722509,0x3b3631202c383372,0x3233622e726f090a,0x202c303472250920\n"
".quad 0x7225202c37337225,0x2e726f090a3b3933,0x3472250920323362,0x2c36337225202c31\n"
".quad 0x090a3b3034722520,0x732e6f6c2e6c756d,0x3234722509203233,0x202c31317225202c\n"
".quad 0x61090a3b30317225,0x09203233732e6464,0x7225202c33347225,0x3b32347225202c38\n"
".quad 0x6f6c2e6c756d090a,0x722509203233752e,0x33347225202c3434,0x7663090a3b34202c\n"
".quad 0x33752e3436752e74,0x2c31647225092032,0x090a3b3434722520,0x6d617261702e646c\n"
".quad 0x722509203436752e,0x635f5f5b202c3264,0x5f6d726170616475,0x69644e4e4b375a5f\n"
".quad 0x666669696a506761,0x090a3b5d7473645f,0x203436752e646461,0x25202c3364722509\n"
".quad 0x647225202c316472,0x672e7473090a3b32,0x33752e6c61626f6c,0x336472255b092032\n"
".quad 0x347225202c5d302b,0x355f744c240a3b31,0x090a3a363638345f,0x09393109636f6c2e\n"
".quad 0x65090a3009343631,0x444c240a3b746978,0x375a5f5f646e6557,0x50676169644e4e4b\n"
".quad 0x090a3a666669696a,0x375a5f202f2f207d,0x50676169644e4e4b,0x090a0a666669696a\n"
".quad 0x5f207972746e652e,0x696a504d4c4e335a,0x09090a2820666669,0x2e206d617261702e\n"
".quad 0x75635f5f20343675,0x5f5f6d7261706164,0x696a504d4c4e335a,0x2c7473645f666669\n"
".quad 0x617261702e09090a,0x5f203233732e206d,0x726170616475635f,0x4d4c4e335a5f5f6d\n"
".quad 0x695f666669696a50,0x090a2c576567616d,0x206d617261702e09,0x635f5f203233732e\n"
".quad 0x5f6d726170616475,0x6a504d4c4e335a5f,0x616d695f66666969,0x2e09090a2c486567\n"
".quad 0x662e206d61726170,0x6475635f5f203233,0x5a5f5f6d72617061,0x69696a504d4c4e33\n"
".quad 0x6573696f4e5f6666,0x7261702e09090a2c,0x203233662e206d61,0x6170616475635f5f\n"
".quad 0x4c4e335a5f5f6d72,0x5f666669696a504d,0x090a29437072656c,0x206765722e090a7b\n"
".quad 0x3c7225203233752e,0x722e090a3b3e3136,0x203436752e206765,0x0a3b3e353c647225\n"
".quad 0x662e206765722e09,0x30313c6625203233,0x65722e090a3b3e36,0x20646572702e2067\n"
".quad 0x090a3b3e393c7025,0x09303209636f6c2e,0x444c240a30093634,0x5f5f6e6967656257\n"
".quad 0x696a504d4c4e335a,0x6f6d090a3a666669,0x2509203233752e76,0x61746325202c3172\n"
".quad 0x6d090a3b782e6469,0x09203233752e766f,0x746e25202c327225,0x6d090a3b782e6469\n"
".quad 0x33752e6f6c2e6c75,0x202c337225092032,0x327225202c317225,0x752e766f6d090a3b\n"
".quad 0x2c34722509203233,0x2e64696174632520,0x2e766f6d090a3b79,0x3572250920323375\n"
".quad 0x2e6469746e25202c,0x2e6c756d090a3b79,0x09203233752e6f6c,0x347225202c367225\n"
".quad 0x090a3b357225202c,0x203233752e766f6d,0x7425202c37722509,0x61090a3b782e6469\n"
".quad 0x09203233752e6464,0x377225202c387225,0x090a3b337225202c,0x203233752e766f6d\n"
".quad 0x7425202c39722509,0x61090a3b792e6469,0x09203233752e6464,0x7225202c30317225\n"
".quad 0x0a3b367225202c39,0x617261702e646c09,0x2509203233732e6d,0x5f5f5b202c313172\n"
".quad 0x6d72617061647563,0x504d4c4e335a5f5f,0x6d695f666669696a,0x090a3b5d57656761\n"
".quad 0x6d617261702e646c,0x722509203233732e,0x635f5f5b202c3231,0x5f6d726170616475\n"
".quad 0x6a504d4c4e335a5f,0x616d695f66666969,0x73090a3b5d486567,0x33752e74672e7465\n"
".quad 0x2509203233732e32,0x317225202c333172,0x3b30317225202c32,0x33732e67656e090a\n"
".quad 0x2c34317225092032,0x090a3b3331722520,0x752e74672e746573,0x09203233732e3233\n"
".quad 0x7225202c35317225,0x3b387225202c3131,0x33732e67656e090a,0x2c36317225092032\n"
".quad 0x090a3b3531722520,0x203233622e646e61,0x25202c3731722509,0x317225202c343172\n"
".quad 0x2e766f6d090a3b36,0x3172250920323375,0x73090a3b30202c38,0x732e71652e707465\n"
".quad 0x2c31702509203233,0x25202c3731722520,0x2540090a3b383172,0x0920617262203170\n"
".quad 0x39365f365f744c24,0x747663090a3b3431,0x2e3233662e6e722e,0x3166250920323373\n"
".quad 0x090a3b387225202c,0x203233662e766f6d,0x6630202c32662509,0x3030303030306633\n"
".quad 0x2f0920202020203b,0x61090a352e30202f,0x09203233662e6464,0x316625202c336625\n"
".quad 0x090a3b326625202c,0x662e6e722e747663,0x09203233732e3233,0x317225202c346625\n"
".quad 0x2e766f6d090a3b30,0x3566250920323366,0x303066336630202c,0x2020203b30303030\n"
".quad 0x2e30202f2f092020,0x662e646461090a35,0x2c36662509203233,0x6625202c34662520\n"
".quad 0x702e646c090a3b35,0x3233662e6d617261,0x5b202c3766250920,0x6170616475635f5f\n"
".quad 0x4c4e335a5f5f6d72,0x5f666669696a504d,0x0a3b5d6573696f4e,0x3233662e766f6d09\n"
".quad 0x30202c3866250920,0x3030303034306366,0x0920202020203b30,0x6d090a332d202f2f\n"
".quad 0x09203233662e766f,0x306630202c396625,0x3b30303030303030,0x2f2f092020202020\n"
".quad 0x2e766f6d090a3020,0x3166250920323366,0x3030306630202c30,0x20203b3030303030\n"
".quad 0x0a30202f2f092020,0x3233662e766f6d09,0x202c313166250920,0x3030303030306630\n"
".quad 0x09202020203b3030,0x6f6d090a30202f2f,0x2509203233662e76,0x306630202c323166\n"
".quad 0x3b30303030303030,0x202f2f0920202020,0x662e766f6d090a30,0x3331662509203233\n"
".quad 0x303030306630202c,0x2020203b30303030,0x240a30202f2f0920,0x3339375f365f744c\n"
".quad 0x6c3c2f2f200a3a38,0x6f6f4c203e706f6f,0x6c2079646f622070,0x202c363420656e69\n"
".quad 0x20676e697473656e,0x31203a6874706564,0x616d69747365202c,0x7265746920646574\n"
".quad 0x203a736e6f697461,0x0a6e776f6e6b6e75,0x3233662e64646109,0x202c343166250920\n"
".quad 0x386625202c366625,0x662e766f6d090a3b,0x3531662509203233,0x303430636630202c\n"
".quad 0x2020203b30303030,0x0a332d202f2f0920,0x37385f365f744c24,0x3c2f2f200a3a3630\n"
".quad 0x6f4c203e706f6f6c,0x2079646f6220706f,0x2c363420656e696c,0x676e697473656e20\n"
".quad 0x203a687470656420,0x6d69747365202c32,0x6574692064657461,0x3a736e6f69746172\n"
".quad 0x6e776f6e6b6e7520,0x33662e646461090a,0x2c36316625092032,0x6625202c33662520\n"
".quad 0x766f6d090a3b3531,0x662509203233662e,0x30636630202c3731,0x203b303030303034\n"
".quad 0x2d202f2f09202020,0x662e766f6d090a33,0x3831662509203233,0x303030306630202c\n"
".quad 0x2020203b30303030,0x240a30202f2f0920,0x3734395f365f744c,0x6c3c2f2f200a3a34\n"
".quad 0x6f6f4c203e706f6f,0x6c2079646f622070,0x202c363420656e69,0x20676e697473656e\n"
".quad 0x33203a6874706564,0x616d69747365202c,0x7265746920646574,0x203a736e6f697461\n"
".quad 0x0a6e776f6e6b6e75,0x3233662e64646109,0x202c393166250920,0x316625202c366625\n"
".quad 0x2e646461090a3b37,0x3266250920323366,0x2c34316625202c30,0x090a3b3731662520\n"
".quad 0x203233662e766f6d,0x30202c3132662509,0x3030303034306366,0x2f09202020203b30\n"
".quad 0x744c240a332d202f,0x32343230315f365f,0x6f6c3c2f2f200a3a,0x706f6f4c203e706f\n"
".quad 0x696c2079646f6220,0x6e202c363420656e,0x6420676e69747365,0x2c34203a68747065\n"
".quad 0x74616d6974736520,0x6172657469206465,0x75203a736e6f6974,0x090a6e776f6e6b6e\n"
".quad 0x203233662e646461,0x25202c3232662509,0x326625202c363166,0x2e766f6d090a3b31\n"
".quad 0x3266250920323366,0x3b32326625202c33,0x33662e766f6d090a,0x2c34326625092032\n"
".quad 0x090a3b3032662520,0x203233662e766f6d,0x30202c3532662509,0x3030303030303066\n"
".quad 0x2f09202020203b30,0x766f6d090a30202f,0x662509203233662e,0x35326625202c3632\n"
".quad 0x662e766f6d090a3b,0x3732662509203233,0x303030306630202c,0x2020203b30303030\n"
".quad 0x090a30202f2f0920,0x203233662e766f6d,0x25202c3832662509,0x6574090a3b373266\n"
".quad 0x2e34762e64322e78,0x203233662e323375,0x72252c393172257b,0x2c313272252c3032\n"
".quad 0x745b2c7d32327225,0x2c6567616d497865,0x66252c333266257b,0x2c363266252c3432\n"
".quad 0x0a3b5d7d38326625,0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066\n"
".quad 0x656e696c2079646f,0x616568202c363420,0x656c6562616c2064,0x5f365f744c242064\n"
".quad 0x2e090a3234323031,0x3709303209636f6c,0x766f6d090a300930,0x722509203233732e\n"
".quad 0x39317225202c3332,0x732e766f6d090a3b,0x3432722509203233,0x0a3b30327225202c\n"
".quad 0x3233732e766f6d09,0x202c353272250920,0x61090a3b31327225,0x09203233662e6464\n"
".quad 0x6625202c39326625,0x3b31326625202c33,0x33662e766f6d090a,0x2c30336625092032\n"
".quad 0x090a3b3932662520,0x203233662e766f6d,0x25202c3133662509,0x6f6d090a3b393166\n"
".quad 0x2509203233662e76,0x306630202c323366,0x3b30303030303030,0x202f2f0920202020\n"
".quad 0x662e766f6d090a30,0x3333662509203233,0x0a3b32336625202c,0x3233662e766f6d09\n"
".quad 0x202c343366250920,0x3030303030306630,0x09202020203b3030,0x6f6d090a30202f2f\n"
".quad 0x2509203233662e76,0x336625202c353366,0x2e786574090a3b34,0x33752e34762e6432\n"
".quad 0x257b203233662e32,0x373272252c363272,0x72252c383272252c,0x7865745b2c7d3932\n"
".quad 0x257b2c6567616d49,0x313366252c303366,0x66252c333366252c,0x2f200a3b5d7d3533\n"
".quad 0x203e706f6f6c3c2f,0x20666f2074726150,0x646f6220706f6f6c,0x3420656e696c2079\n"
".quad 0x2064616568202c36,0x2064656c6562616c,0x30315f365f744c24,0x766f6d090a323432\n"
".quad 0x722509203233732e,0x36327225202c3033,0x732e766f6d090a3b,0x3133722509203233\n"
".quad 0x0a3b37327225202c,0x3233732e766f6d09,0x202c323372250920,0x6d090a3b38327225\n"
".quad 0x09203233622e766f,0x7225202c36336625,0x766f6d090a3b3133,0x662509203233622e\n"
".quad 0x34327225202c3733,0x622e766f6d090a3b,0x3833662509203233,0x0a3b30337225202c\n"
".quad 0x3233622e766f6d09,0x202c393366250920,0x6d090a3b33327225,0x09203233622e766f\n"
".quad 0x7225202c30346625,0x766f6d090a3b3233,0x662509203233622e,0x35327225202c3134\n"
".quad 0x662e627573090a3b,0x3234662509203233,0x202c36336625202c,0x73090a3b37336625\n"
".quad 0x09203233662e6275,0x6625202c33346625,0x39336625202c3833,0x662e627573090a3b\n"
".quad 0x3434662509203233,0x202c30346625202c,0x6d090a3b31346625,0x09203233662e6c75\n"
".quad 0x6625202c35346625,0x32346625202c3234,0x722e616d66090a3b,0x2509203233662e6e\n"
".quad 0x346625202c363466,0x2c33346625202c33,0x090a3b3534662520,0x662e6e722e616d66\n"
".quad 0x3734662509203233,0x202c34346625202c,0x6625202c34346625,0x646461090a3b3634\n"
".quad 0x662509203233662e,0x38316625202c3831,0x0a3b37346625202c,0x3233662e766f6d09\n"
".quad 0x202c383466250920,0x3030303866336630,0x09202020203b3030,0x6461090a31202f2f\n"
".quad 0x2509203233662e64,0x326625202c313266,0x3b38346625202c31,0x33662e766f6d090a\n"
".quad 0x2c39346625092032,0x3030343034663020,0x202020203b303030,0x73090a33202f2f09\n"
".quad 0x662e656c2e707465,0x2c32702509203233,0x25202c3132662520,0x2540090a3b393466\n"
".quad 0x0920617262203270,0x30315f365f744c24,0x2f2f200a3b323432,0x50203e706f6f6c3c\n"
".quad 0x6c20666f20747261,0x79646f6220706f6f,0x363420656e696c20,0x6c2064616568202c\n"
".quad 0x242064656c656261,0x3734395f365f744c,0x662e766f6d090a34,0x3035662509203233\n"
".quad 0x303866336630202c,0x2020203b30303030,0x090a31202f2f0920,0x203233662e646461\n"
".quad 0x25202c3731662509,0x356625202c373166,0x2e766f6d090a3b30,0x3566250920323366\n"
".quad 0x3430346630202c31,0x20203b3030303030,0x0a33202f2f092020,0x656c2e7074657309\n"
".quad 0x702509203233662e,0x2c37316625202c33,0x090a3b3135662520,0x6172622033702540\n"
".quad 0x5f365f744c240920,0x2f200a3b34373439,0x203e706f6f6c3c2f,0x20666f2074726150\n"
".quad 0x646f6220706f6f6c,0x3420656e696c2079,0x2064616568202c36,0x2064656c6562616c\n"
".quad 0x37385f365f744c24,0x636f6c2e090a3630,0x3009363709303209,0x33662e766f6d090a\n"
".quad 0x2c32356625092032,0x090a3b3631662520,0x203233662e766f6d,0x25202c3335662509\n"
".quad 0x6f6d090a3b343166,0x2509203233662e76,0x306630202c343566,0x3b30303030303030\n"
".quad 0x202f2f0920202020,0x662e766f6d090a30,0x3535662509203233,0x0a3b34356625202c\n"
".quad 0x3233662e766f6d09,0x202c363566250920,0x3030303030306630,0x09202020203b3030\n"
".quad 0x6f6d090a30202f2f,0x2509203233662e76,0x356625202c373566,0x2e786574090a3b36\n"
".quad 0x33752e34762e6432,0x257b203233662e32,0x343372252c333372,0x72252c353372252c\n"
".quad 0x7865745b2c7d3633,0x257b2c6567616d49,0x333566252c323566,0x66252c353566252c\n"
".quad 0x2f200a3b5d7d3735,0x203e706f6f6c3c2f,0x20666f2074726150,0x646f6220706f6f6c\n"
".quad 0x3420656e696c2079,0x2064616568202c36,0x2064656c6562616c,0x37385f365f744c24\n"
".quad 0x636f6c2e090a3630,0x3009393709303209,0x33732e766f6d090a,0x2c37337225092032\n"
".quad 0x090a3b3333722520,0x203233732e766f6d,0x25202c3833722509,0x6f6d090a3b343372\n"
".quad 0x2509203233732e76,0x337225202c393372,0x636f6c2e090a3b35,0x3009303809303209\n"
".quad 0x33662e6c756d090a,0x2c38356625092032,0x25202c3531662520,0x6d66090a3b353166\n"
".quad 0x3233662e6e722e61,0x202c393566250920,0x386625202c386625,0x0a3b38356625202c\n"
".quad 0x3233662e766f6d09,0x202c303666250920,0x6632376163336630,0x09202020203b3530\n"
".quad 0x3032302e30202f2f,0x756d090a32383034,0x2509203233662e6c,0x356625202c313666\n"
".quad 0x3b30366625202c39,0x6e722e616d66090a,0x662509203233662e,0x2c376625202c3236\n"
".quad 0x25202c3831662520,0x656e090a3b313666,0x2509203233662e67,0x366625202c333666\n"
".quad 0x2e766f6d090a3b32,0x3666250920323366,0x6266336630202c34,0x20203b6233616138\n"
".quad 0x2e31202f2f092020,0x756d090a37323434,0x2509203233662e6c,0x366625202c353666\n"
".quad 0x3b34366625202c33,0x70612e327865090a,0x3233662e786f7270,0x202c363666250920\n"
".quad 0x6d090a3b35366625,0x09203233622e766f,0x7225202c37366625,0x616d66090a3b3733\n"
".quad 0x203233662e6e722e,0x25202c3131662509,0x366625202c373666,0x3b31316625202c36\n"
".quad 0x3209636f6c2e090a,0x090a300931380930,0x203233622e766f6d,0x25202c3836662509\n"
".quad 0x6d66090a3b383372,0x3233662e6e722e61,0x202c303166250920,0x6625202c38366625\n"
".quad 0x30316625202c3636,0x09636f6c2e090a3b,0x0a30093238093032,0x3233622e766f6d09\n"
".quad 0x202c393666250920,0x66090a3b39337225,0x33662e6e722e616d,0x202c396625092032\n"
".quad 0x6625202c39366625,0x3b396625202c3636,0x3209636f6c2e090a,0x090a300935380930\n"
".quad 0x203233662e646461,0x25202c3231662509,0x316625202c363666,0x636f6c2e090a3b32\n"
".quad 0x3009393809303209,0x33662e766f6d090a,0x2c30376625092032,0x3237616333663020\n"
".quad 0x202020203b353066,0x32302e30202f2f09,0x61090a3238303430,0x09203233662e6464\n"
".quad 0x6625202c31376625,0x30376625202c3331,0x662e766f6d090a3b,0x3237662509203233\n"
".quad 0x636364336630202c,0x2020203b64636363,0x312e30202f2f0920,0x672e70746573090a\n"
".quad 0x2509203233662e74,0x36366625202c3470,0x0a3b32376625202c,0x33662e706c657309\n"
".quad 0x2c33316625092032,0x25202c3137662520,0x347025202c333166,0x662e766f6d090a3b\n"
".quad 0x3337662509203233,0x303866336630202c,0x2020203b30303030,0x090a31202f2f0920\n"
".quad 0x203233662e646461,0x25202c3531662509,0x376625202c353166,0x2e766f6d090a3b33\n"
".quad 0x3766250920323366,0x3430346630202c34,0x20203b3030303030,0x0a33202f2f092020\n"
".quad 0x656c2e7074657309,0x702509203233662e,0x2c35316625202c35,0x090a3b3437662520\n"
".quad 0x6172622035702540,0x5f365f744c240920,0x2f200a3b36303738,0x203e706f6f6c3c2f\n"
".quad 0x20666f2074726150,0x646f6220706f6f6c,0x3420656e696c2079,0x2064616568202c36\n"
".quad 0x2064656c6562616c,0x39375f365f744c24,0x2e766f6d090a3833,0x3766250920323366\n"
".quad 0x3866336630202c35,0x20203b3030303030,0x0a31202f2f092020,0x3233662e64646109\n"
".quad 0x25202c3866250920,0x35376625202c3866,0x662e766f6d090a3b,0x3637662509203233\n"
".quad 0x303430346630202c,0x2020203b30303030,0x090a33202f2f0920,0x2e656c2e70746573\n"
".quad 0x3670250920323366,0x25202c386625202c,0x2540090a3b363766,0x0920617262203670\n"
".quad 0x39375f365f744c24,0x6f6c2e090a3b3833,0x0934390930320963,0x722e706372090a30\n"
".quad 0x2509203233662e6e,0x316625202c373766,0x2e6c756d090a3b32,0x3166250920323366\n"
".quad 0x2c37376625202c31,0x090a3b3131662520,0x09303209636f6c2e,0x756d090a30093539\n"
".quad 0x2509203233662e6c,0x376625202c303166,0x3b30316625202c37,0x3209636f6c2e090a\n"
".quad 0x090a300936390930,0x203233662e6c756d,0x6625202c39662509,0x3b396625202c3737\n"
".quad 0x33662e766f6d090a,0x2c38376625092032,0x6d090a3b33662520,0x09203233662e766f\n"
".quad 0x6625202c39376625,0x2e766f6d090a3b36,0x3866250920323366,0x3030306630202c30\n"
".quad 0x20203b3030303030,0x0a30202f2f092020,0x3233662e766f6d09,0x202c313866250920\n"
".quad 0x6d090a3b30386625,0x09203233662e766f,0x6630202c32386625,0x3030303030303030\n"
".quad 0x2f2f09202020203b,0x2e766f6d090a3020,0x3866250920323366,0x3b32386625202c33\n"
".quad 0x64322e786574090a,0x2e3233752e34762e,0x3472257b20323366,0x252c313472252c30\n"
".quad 0x333472252c323472,0x6d497865745b2c7d,0x3766257b2c656761,0x252c393766252c38\n"
".quad 0x333866252c313866,0x6f6c2e090a3b5d7d,0x3330310930320963,0x2e766f6d090a3009\n"
".quad 0x3472250920323373,0x3b30347225202c34,0x33732e766f6d090a,0x2c35347225092032\n"
".quad 0x090a3b3134722520,0x203233732e766f6d,0x25202c3634722509,0x6c2e090a3b323472\n"
".quad 0x303109303209636f,0x766f6d090a300937,0x662509203233662e,0x64336630202c3438\n"
".quad 0x203b646363636363,0x30202f2f09202020,0x70746573090a312e,0x203233662e74672e\n"
".quad 0x6625202c37702509,0x34386625202c3331,0x61702e646c090a3b,0x203233662e6d6172\n"
".quad 0x5b202c3538662509,0x6170616475635f5f,0x4c4e335a5f5f6d72,0x5f666669696a504d\n"
".quad 0x0a3b5d437072656c,0x3233662e766f6d09,0x202c363866250920,0x3030303866336630\n"
".quad 0x09202020203b3030,0x7573090a31202f2f,0x2509203233662e62,0x386625202c373866\n"
".quad 0x3b35386625202c36,0x662e706c6573090a,0x3838662509203233,0x202c35386625202c\n"
".quad 0x7025202c37386625,0x2e766f6d090a3b37,0x3866250920323362,0x3b34347225202c39\n"
".quad 0x33662e627573090a,0x2c30396625092032,0x25202c3938662520,0x6d66090a3b313166\n"
".quad 0x3233662e6e722e61,0x202c313966250920,0x6625202c38386625,0x31316625202c3039\n"
".quad 0x662e766f6d090a3b,0x3239662509203233,0x663733346630202c,0x2020203b30303030\n"
".quad 0x353532202f2f0920,0x33662e6c756d090a,0x2c33396625092032,0x25202c3139662520\n"
".quad 0x7663090a3b323966,0x33732e697a722e74,0x2509203233662e32,0x396625202c373472\n"
".quad 0x2e766f6d090a3b33,0x3966250920323362,0x3b35347225202c34,0x33662e627573090a\n"
".quad 0x2c35396625092032,0x25202c3439662520,0x6d66090a3b303166,0x3233662e6e722e61\n"
".quad 0x202c363966250920,0x6625202c38386625,0x30316625202c3539,0x662e766f6d090a3b\n"
".quad 0x3739662509203233,0x663733346630202c,0x2020203b30303030,0x353532202f2f0920\n"
".quad 0x33662e6c756d090a,0x2c38396625092032,0x25202c3639662520,0x7663090a3b373966\n"
".quad 0x33732e697a722e74,0x2509203233662e32,0x396625202c383472,0x2e6c6873090a3b38\n"
".quad 0x3472250920323362,0x2c38347225202c39,0x2e726f090a3b3820,0x3572250920323362\n"
".quad 0x2c37347225202c30,0x090a3b3934722520,0x203233662e766f6d,0x30202c3939662509\n"
".quad 0x3030303030303066,0x2f09202020203b30,0x747663090a30202f,0x3233732e697a722e\n"
".quad 0x722509203233662e,0x39396625202c3135,0x622e6c6873090a3b,0x3235722509203233\n"
".quad 0x202c31357225202c,0x766f6d090a3b3432,0x662509203233622e,0x347225202c303031\n"
".quad 0x2e627573090a3b36,0x3166250920323366,0x30316625202c3130,0x0a3b396625202c30\n"
".quad 0x2e6e722e616d6609,0x3166250920323366,0x38386625202c3230,0x2c3130316625202c\n"
".quad 0x6d090a3b39662520,0x09203233662e766f,0x30202c3330316625,0x3030306637333466\n"
".quad 0x2f2f092020203b30,0x756d090a35353220,0x2509203233662e6c,0x6625202c34303166\n"
".quad 0x316625202c323031,0x747663090a3b3330,0x3233732e697a722e,0x722509203233662e\n"
".quad 0x30316625202c3335,0x2e6c6873090a3b34,0x3572250920323362,0x2c33357225202c34\n"
".quad 0x726f090a3b363120,0x722509203233622e,0x32357225202c3535,0x0a3b34357225202c\n"
".quad 0x203233622e726f09,0x25202c3635722509,0x357225202c303572,0x2e6c756d090a3b35\n"
".quad 0x09203233732e6f6c,0x7225202c37357225,0x30317225202c3131,0x732e646461090a3b\n"
".quad 0x3835722509203233,0x25202c387225202c,0x756d090a3b373572,0x3233752e6f6c2e6c\n"
".quad 0x202c393572250920,0x3b34202c38357225,0x36752e747663090a,0x2509203233752e34\n"
".quad 0x357225202c316472,0x702e646c090a3b39,0x3436752e6d617261,0x202c326472250920\n"
".quad 0x70616475635f5f5b,0x4e335a5f5f6d7261,0x666669696a504d4c,0x090a3b5d7473645f\n"
".quad 0x203436752e646461,0x25202c3364722509,0x647225202c316472,0x672e7473090a3b32\n"
".quad 0x33752e6c61626f6c,0x336472255b092032,0x357225202c5d302b,0x365f744c240a3b36\n"
".quad 0x090a3a343139365f,0x09303209636f6c2e,0x65090a3009393031,0x444c240a3b746978\n"
".quad 0x335a5f5f646e6557,0x6669696a504d4c4e,0x2f2f207d090a3a66,0x504d4c4e335a5f20\n"
".quad 0x090a0a666669696a,0x5f207972746e652e,0x6169644d4c4e375a,0x2066666a6a6a5067\n"
".quad 0x7261702e09090a28,0x203436752e206d61,0x6170616475635f5f,0x4c4e375a5f5f6d72\n"
".quad 0x6a6a50676169644d,0x2c7473645f66666a,0x617261702e09090a,0x5f203233752e206d\n"
".quad 0x726170616475635f,0x4d4c4e375a5f5f6d,0x6a6a6a5067616964,0x6567616d695f6666\n"
".quad 0x61702e09090a2c57,0x3233752e206d6172,0x70616475635f5f20,0x4e375a5f5f6d7261\n"
".quad 0x6a50676169644d4c,0x616d695f66666a6a,0x2e09090a2c486567,0x662e206d61726170\n"
".quad 0x6475635f5f203233,0x5a5f5f6d72617061,0x676169644d4c4e37,0x4e5f66666a6a6a50\n"
".quad 0x09090a2c6573696f,0x2e206d617261702e,0x75635f5f20323366,0x5f5f6d7261706164\n"
".quad 0x6169644d4c4e375a,0x5f66666a6a6a5067,0x090a29437072656c,0x206765722e090a7b\n"
".quad 0x3c7225203233752e,0x722e090a3b3e3634,0x203436752e206765,0x0a3b3e353c647225\n"
".quad 0x662e206765722e09,0x33373c6625203233,0x6765722e090a3b3e,0x2520646572702e20\n"
".quad 0x2e090a3b3e393c70,0x3109303209636f6c,0x444c240a30093333,0x5f5f6e6967656257\n"
".quad 0x6169644d4c4e375a,0x3a66666a6a6a5067,0x33752e766f6d090a,0x202c317225092032\n"
".quad 0x782e646961746325,0x752e766f6d090a3b,0x2c32722509203233,0x782e6469746e2520\n"
".quad 0x6c2e6c756d090a3b,0x2509203233752e6f,0x2c317225202c3372,0x6d090a3b32722520\n"
".quad 0x09203233752e766f,0x746325202c347225,0x090a3b792e646961,0x203233752e766f6d\n"
".quad 0x6e25202c35722509,0x090a3b792e646974,0x752e6f6c2e6c756d,0x2c36722509203233\n"
".quad 0x7225202c34722520,0x2e766f6d090a3b35,0x3772250920323375,0x782e64697425202c\n"
".quad 0x752e646461090a3b,0x2c38722509203233,0x7225202c37722520,0x2e766f6d090a3b33\n"
".quad 0x3972250920323375,0x792e64697425202c,0x752e646461090a3b,0x3031722509203233\n"
".quad 0x25202c397225202c,0x2e646c090a3b3672,0x33752e6d61726170,0x2c31317225092032\n"
".quad 0x616475635f5f5b20,0x375a5f5f6d726170,0x50676169644d4c4e,0x6d695f66666a6a6a\n"
".quad 0x090a3b5d57656761,0x6d617261702e646c,0x722509203233752e,0x635f5f5b202c3231\n"
".quad 0x5f6d726170616475,0x69644d4c4e375a5f,0x66666a6a6a506761,0x5d486567616d695f\n"
".quad 0x672e746573090a3b,0x33752e3233752e74,0x2c33317225092032,0x25202c3231722520\n"
".quad 0x656e090a3b303172,0x2509203233732e67,0x317225202c343172,0x2e746573090a3b33\n"
".quad 0x752e3233752e746c,0x3531722509203233,0x25202c387225202c,0x656e090a3b313172\n"
".quad 0x2509203233732e67,0x317225202c363172,0x2e646e61090a3b35,0x3172250920323362\n"
".quad 0x2c34317225202c37,0x090a3b3631722520,0x203233752e766f6d,0x30202c3831722509\n"
".quad 0x2e70746573090a3b,0x09203233732e7165,0x317225202c317025,0x3b38317225202c37\n"
".quad 0x622031702540090a,0x5f744c2409206172,0x0a3b343139365f37,0x2e6e722e74766309\n"
".quad 0x203233732e323366,0x7225202c31662509,0x2e766f6d090a3b38,0x3266250920323366\n"
".quad 0x303066336630202c,0x2020203b30303030,0x2e30202f2f092020,0x662e646461090a35\n"
".quad 0x2c33662509203233,0x6625202c31662520,0x2e747663090a3b32,0x732e3233662e6e72\n"
".quad 0x2c34662509203233,0x090a3b3031722520,0x203233662e766f6d,0x6630202c35662509\n"
".quad 0x3030303030306633,0x2f0920202020203b,0x61090a352e30202f,0x09203233662e6464\n"
".quad 0x346625202c366625,0x090a3b356625202c,0x6d617261702e646c,0x662509203233662e\n"
".quad 0x75635f5f5b202c37,0x5f5f6d7261706164,0x6169644d4c4e375a,0x5f66666a6a6a5067\n"
".quad 0x0a3b5d6573696f4e,0x3233662e766f6d09,0x30202c3866250920,0x3030303034306366\n"
".quad 0x0920202020203b30,0x6d090a332d202f2f,0x09203233662e766f,0x306630202c396625\n"
".quad 0x3b30303030303030,0x2f2f092020202020,0x375f744c240a3020,0x200a3a383339375f\n"
".quad 0x3e706f6f6c3c2f2f,0x6f6220706f6f4c20,0x20656e696c207964,0x73656e202c333331\n"
".quad 0x70656420676e6974,0x65202c31203a6874,0x646574616d697473,0x6974617265746920\n"
".quad 0x6b6e75203a736e6f,0x6461090a6e776f6e,0x2509203233662e64,0x366625202c303166\n"
".quad 0x090a3b386625202c,0x203233662e766f6d,0x30202c3131662509,0x3030303034306366\n"
".quad 0x2f09202020203b30,0x744c240a332d202f,0x3a363037385f375f,0x6f6f6c3c2f2f200a\n"
".quad 0x20706f6f4c203e70,0x6e696c2079646f62,0x6e202c3333312065,0x6420676e69747365\n"
".quad 0x2c32203a68747065,0x74616d6974736520,0x6172657469206465,0x75203a736e6f6974\n"
".quad 0x090a6e776f6e6b6e,0x203233662e646461,0x25202c3231662509,0x31316625202c3366\n"
".quad 0x662e766f6d090a3b,0x3331662509203233,0x303430636630202c,0x2020203b30303030\n"
".quad 0x0a332d202f2f0920,0x3233662e766f6d09,0x202c343166250920,0x3030303030306630\n"
".quad 0x09202020203b3030,0x744c240a30202f2f,0x3a343734395f375f,0x6f6f6c3c2f2f200a\n"
".quad 0x20706f6f4c203e70,0x6e696c2079646f62,0x6e202c3333312065,0x6420676e69747365\n"
".quad 0x2c33203a68747065,0x74616d6974736520,0x6172657469206465,0x75203a736e6f6974\n"
".quad 0x090a6e776f6e6b6e,0x203233662e646461,0x25202c3531662509,0x33316625202c3666\n"
".quad 0x662e646461090a3b,0x3631662509203233,0x202c30316625202c,0x6d090a3b33316625\n"
".quad 0x09203233662e766f,0x6630202c37316625,0x3030303030343063,0x2f2f09202020203b\n"
".quad 0x5f744c240a332d20,0x3a32343230315f37,0x6f6f6c3c2f2f200a,0x20706f6f4c203e70\n"
".quad 0x6e696c2079646f62,0x6e202c3333312065,0x6420676e69747365,0x2c34203a68747065\n"
".quad 0x74616d6974736520,0x6172657469206465,0x75203a736e6f6974,0x090a6e776f6e6b6e\n"
".quad 0x203233662e646461,0x25202c3831662509,0x316625202c323166,0x2e766f6d090a3b37\n"
".quad 0x3166250920323366,0x3b38316625202c39,0x33662e766f6d090a,0x2c30326625092032\n"
".quad 0x090a3b3631662520,0x203233662e766f6d,0x30202c3132662509,0x3030303030303066\n"
".quad 0x2f09202020203b30,0x766f6d090a30202f,0x662509203233662e,0x31326625202c3232\n"
".quad 0x662e766f6d090a3b,0x3332662509203233,0x303030306630202c,0x2020203b30303030\n"
".quad 0x090a30202f2f0920,0x203233662e766f6d,0x25202c3432662509,0x6574090a3b333266\n"
".quad 0x2e34762e64322e78,0x203233662e323375,0x72252c393172257b,0x2c313272252c3032\n"
".quad 0x745b2c7d32327225,0x2c6567616d497865,0x66252c393166257b,0x2c323266252c3032\n"
".quad 0x0a3b5d7d34326625,0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066\n"
".quad 0x656e696c2079646f,0x6568202c33333120,0x6c6562616c206461,0x375f744c24206465\n"
".quad 0x090a32343230315f,0x09303209636f6c2e,0x6d090a3009333531,0x09203233732e766f\n"
".quad 0x7225202c33327225,0x766f6d090a3b3931,0x722509203233732e,0x30327225202c3432\n"
".quad 0x732e766f6d090a3b,0x3532722509203233,0x0a3b31327225202c,0x3233662e64646109\n"
".quad 0x202c353266250920,0x316625202c336625,0x2e766f6d090a3b37,0x3266250920323366\n"
".quad 0x3b35326625202c36,0x33662e766f6d090a,0x2c37326625092032,0x090a3b3531662520\n"
".quad 0x203233662e766f6d,0x30202c3832662509,0x3030303030303066,0x2f09202020203b30\n"
".quad 0x766f6d090a30202f,0x662509203233662e,0x38326625202c3932,0x662e766f6d090a3b\n"
".quad 0x3033662509203233,0x303030306630202c,0x2020203b30303030,0x090a30202f2f0920\n"
".quad 0x203233662e766f6d,0x25202c3133662509,0x6574090a3b303366,0x2e34762e64322e78\n"
".quad 0x203233662e323375,0x72252c363272257b,0x2c383272252c3732,0x745b2c7d39327225\n"
".quad 0x2c6567616d497865,0x66252c363266257b,0x2c393266252c3732,0x0a3b5d7d31336625\n"
".quad 0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f\n"
".quad 0x6568202c33333120,0x6c6562616c206461,0x375f744c24206465,0x090a32343230315f\n"
".quad 0x203233732e766f6d,0x25202c3033722509,0x6f6d090a3b363272,0x2509203233732e76\n"
".quad 0x327225202c313372,0x2e766f6d090a3b37,0x3372250920323373,0x3b38327225202c32\n"
".quad 0x33622e766f6d090a,0x2c32336625092032,0x090a3b3133722520,0x203233622e766f6d\n"
".quad 0x25202c3333662509,0x6f6d090a3b343272,0x2509203233622e76,0x337225202c343366\n"
".quad 0x2e766f6d090a3b30,0x3366250920323362,0x3b33327225202c35,0x33622e766f6d090a\n"
".quad 0x2c36336625092032,0x090a3b3233722520,0x203233622e766f6d,0x25202c3733662509\n"
".quad 0x7573090a3b353272,0x2509203233662e62,0x336625202c383366,0x3b33336625202c32\n"
".quad 0x33662e627573090a,0x2c39336625092032,0x25202c3433662520,0x7573090a3b353366\n"
".quad 0x2509203233662e62,0x336625202c303466,0x3b37336625202c36,0x33662e6c756d090a\n"
".quad 0x2c31346625092032,0x25202c3833662520,0x6d66090a3b383366,0x3233662e6e722e61\n"
".quad 0x202c323466250920,0x6625202c39336625,0x31346625202c3933,0x722e616d66090a3b\n"
".quad 0x2509203233662e6e,0x346625202c333466,0x2c30346625202c30,0x090a3b3234662520\n"
".quad 0x203233662e646461,0x25202c3431662509,0x346625202c343166,0x2e766f6d090a3b33\n"
".quad 0x3466250920323366,0x3866336630202c34,0x20203b3030303030,0x0a31202f2f092020\n"
".quad 0x3233662e64646109,0x202c373166250920,0x6625202c37316625,0x766f6d090a3b3434\n"
".quad 0x662509203233662e,0x30346630202c3534,0x203b303030303034,0x33202f2f09202020\n"
".quad 0x6c2e70746573090a,0x2509203233662e65,0x37316625202c3270,0x0a3b35346625202c\n"
".quad 0x7262203270254009,0x375f744c24092061,0x0a3b32343230315f,0x706f6f6c3c2f2f20\n"
".quad 0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f,0x6568202c33333120\n"
".quad 0x6c6562616c206461,0x375f744c24206465,0x6d090a343734395f,0x09203233662e766f\n"
".quad 0x6630202c36346625,0x3030303030386633,0x2f2f09202020203b,0x2e646461090a3120\n"
".quad 0x3166250920323366,0x2c33316625202c33,0x090a3b3634662520,0x203233662e766f6d\n"
".quad 0x30202c3734662509,0x3030303034303466,0x2f09202020203b30,0x746573090a33202f\n"
".quad 0x3233662e656c2e70,0x25202c3370250920,0x346625202c333166,0x33702540090a3b37\n"
".quad 0x4c24092061726220,0x343734395f375f74,0x6f6c3c2f2f200a3b,0x74726150203e706f\n"
".quad 0x706f6f6c20666f20,0x696c2079646f6220,0x202c33333120656e,0x62616c2064616568\n"
".quad 0x744c242064656c65,0x0a363037385f375f,0x303209636f6c2e09,0x090a300932363109\n"
".quad 0x203233662e766f6d,0x30202c3834662509,0x3066323761633366,0x2f09202020203b35\n"
".quad 0x343032302e30202f,0x646461090a323830,0x662509203233662e,0x2c396625202c3934\n"
".quad 0x090a3b3834662520,0x203233662e6c756d,0x25202c3035662509,0x316625202c313166\n"
".quad 0x2e616d66090a3b31,0x09203233662e6e72,0x6625202c31356625,0x202c386625202c38\n"
".quad 0x6d090a3b30356625,0x09203233662e766f,0x6630202c32356625,0x3530663237616333\n"
".quad 0x2f2f09202020203b,0x30343032302e3020,0x2e6c756d090a3238,0x3566250920323366\n"
".quad 0x2c31356625202c33,0x090a3b3235662520,0x662e6e722e616d66,0x3435662509203233\n"
".quad 0x25202c376625202c,0x356625202c343166,0x2e67656e090a3b33,0x3566250920323366\n"
".quad 0x3b34356625202c35,0x33662e766f6d090a,0x2c36356625092032,0x6138626633663020\n"
".quad 0x202020203b623361,0x34342e31202f2f09,0x2e6c756d090a3732,0x3566250920323366\n"
".quad 0x2c35356625202c37,0x090a3b3635662520,0x727070612e327865,0x09203233662e786f\n"
".quad 0x6625202c38356625,0x766f6d090a3b3735,0x662509203233662e,0x64336630202c3935\n"
".quad 0x203b646363636363,0x30202f2f09202020,0x70746573090a312e,0x203233662e74672e\n"
".quad 0x6625202c34702509,0x39356625202c3835,0x2e706c6573090a3b,0x3966250920323366\n"
".quad 0x202c39346625202c,0x347025202c396625,0x662e766f6d090a3b,0x3036662509203233\n"
".quad 0x303866336630202c,0x2020203b30303030,0x090a31202f2f0920,0x203233662e646461\n"
".quad 0x25202c3131662509,0x366625202c313166,0x2e766f6d090a3b30,0x3666250920323366\n"
".quad 0x3430346630202c31,0x20203b3030303030,0x0a33202f2f092020,0x656c2e7074657309\n"
".quad 0x702509203233662e,0x2c31316625202c35,0x090a3b3136662520,0x6172622035702540\n"
".quad 0x5f375f744c240920,0x2f200a3b36303738,0x203e706f6f6c3c2f,0x20666f2074726150\n"
".quad 0x646f6220706f6f6c,0x3120656e696c2079,0x64616568202c3333,0x64656c6562616c20\n"
".quad 0x375f375f744c2420,0x766f6d090a383339,0x662509203233662e,0x66336630202c3236\n"
".quad 0x203b303030303038,0x31202f2f09202020,0x33662e646461090a,0x202c386625092032\n"
".quad 0x366625202c386625,0x2e766f6d090a3b32,0x3666250920323366,0x3430346630202c33\n"
".quad 0x20203b3030303030,0x0a33202f2f092020,0x656c2e7074657309,0x702509203233662e\n"
".quad 0x202c386625202c36,0x40090a3b33366625,0x2061726220367025,0x375f375f744c2409\n"
".quad 0x6c2e090a3b383339,0x373109303209636f,0x766f6d090a300930,0x662509203233662e\n"
".quad 0x30306630202c3436,0x203b303030303030,0x30202f2f09202020,0x7a722e747663090a\n"
".quad 0x33662e3233732e69,0x2c33337225092032,0x090a3b3436662520,0x203233662e766f6d\n"
".quad 0x30202c3536662509,0x6363636363643366,0x2f09202020203b64,0x73090a312e30202f\n"
".quad 0x662e74672e707465,0x2c37702509203233,0x6625202c39662520,0x766f6d090a3b3536\n"
".quad 0x662509203233662e,0x33346630202c3636,0x203b303030306637,0x32202f2f09202020\n"
".quad 0x2e766f6d090a3535,0x3666250920323366,0x3030306630202c37,0x20203b3030303030\n"
".quad 0x0a30202f2f092020,0x33662e706c657309,0x2c38366625092032,0x25202c3636662520\n"
".quad 0x377025202c373666,0x722e747663090a3b,0x662e3233732e697a,0x3433722509203233\n"
".quad 0x0a3b38366625202c,0x3233622e6c687309,0x202c353372250920,0x3b38202c33337225\n"
".quad 0x3233622e726f090a,0x202c363372250920,0x7225202c34337225,0x6c6873090a3b3533\n"
".quad 0x722509203233622e,0x33337225202c3733,0x6d090a3b3432202c,0x09203233662e766f\n"
".quad 0x6630202c39366625,0x3030303030303030,0x2f2f09202020203b,0x2e766f6d090a3020\n"
".quad 0x3766250920323366,0x3733346630202c30,0x20203b3030303066,0x3532202f2f092020\n"
".quad 0x2e706c6573090a35,0x3766250920323366,0x2c39366625202c31,0x25202c3037662520\n"
".quad 0x747663090a3b3770,0x3233732e697a722e,0x722509203233662e,0x31376625202c3833\n"
".quad 0x622e6c6873090a3b,0x3933722509203233,0x202c38337225202c,0x2e726f090a3b3631\n"
".quad 0x3472250920323362,0x2c37337225202c30,0x090a3b3933722520,0x09203233622e726f\n"
".quad 0x7225202c31347225,0x30347225202c3633,0x6c2e6c756d090a3b,0x2509203233752e6f\n"
".quad 0x317225202c323472,0x3b31317225202c30,0x33752e646461090a,0x2c33347225092032\n"
".quad 0x7225202c38722520,0x6c756d090a3b3234,0x203233752e6f6c2e,0x25202c3434722509\n"
".quad 0x0a3b34202c333472,0x3436752e74766309,0x722509203233752e,0x34347225202c3164\n"
".quad 0x61702e646c090a3b,0x203436752e6d6172,0x5b202c3264722509,0x6170616475635f5f\n"
".quad 0x4c4e375a5f5f6d72,0x6a6a50676169644d,0x5d7473645f66666a,0x752e646461090a3b\n"
".quad 0x3364722509203436,0x202c31647225202c,0x73090a3b32647225,0x6c61626f6c672e74\n"
".quad 0x255b09203233752e,0x202c5d302b336472,0x4c240a3b31347225,0x343139365f375f74\n"
".quad 0x09636f6c2e090a3a,0x3009323731093032,0x0a3b74697865090a,0x5f646e6557444c24\n"
".quad 0x69644d4c4e375a5f,0x66666a6a6a506761,0x202f2f207d090a3a,0x69644d4c4e375a5f\n"
".quad 0x66666a6a6a506761,0x72746e652e090a0a,0x4d4c4e345a5f2079,0x20666669696a5032\n"
".quad 0x7261702e09090a28,0x203436752e206d61,0x6170616475635f5f,0x4c4e345a5f5f6d72\n"
".quad 0x666669696a50324d,0x09090a2c7473645f,0x2e206d617261702e,0x75635f5f20323373\n"
".quad 0x5f5f6d7261706164,0x6a50324d4c4e345a,0x616d695f66666969,0x2e09090a2c576567\n"
".quad 0x732e206d61726170,0x6475635f5f203233,0x5a5f5f6d72617061,0x696a50324d4c4e34\n"
".quad 0x67616d695f666669,0x702e09090a2c4865,0x33662e206d617261,0x616475635f5f2032\n"
".quad 0x345a5f5f6d726170,0x69696a50324d4c4e,0x6573696f4e5f6666,0x7261702e09090a2c\n"
".quad 0x203233662e206d61,0x6170616475635f5f,0x4c4e345a5f5f6d72,0x666669696a50324d\n"
".quad 0x0a29437072656c5f,0x6765722e090a7b09,0x7225203233752e20,0x2e090a3b3e31373c\n"
".quad 0x3436752e20676572,0x3e30313c64722520,0x206765722e090a3b,0x3c6625203233662e\n"
".quad 0x2e090a3b3e323131,0x6572702e20676572,0x3b3e393c70252064,0x65726168732e090a\n"
".quad 0x6e67696c612e2064,0x5f2038622e203420,0x5f5f5f616475635f,0x636f6c5f61647563\n"
".quad 0x325f7261765f6c61,0x5f35335f30303738,0x736e6f635f6e6f6e,0x6867696557665f74\n"
".quad 0x35325b3633317374,0x6f6c2e090a3b5d36,0x0931360931320963,0x656257444c240a30\n"
".quad 0x4e345a5f5f6e6967,0x6669696a50324d4c,0x2e766f6d090a3a66,0x3172250920323375\n"
".quad 0x2e6469746e25202c,0x2e766f6d090a3b78,0x3272250920323375,0x646961746325202c\n"
".quad 0x6c756d090a3b782e,0x203233752e6f6c2e,0x7225202c33722509,0x0a3b317225202c32\n"
".quad 0x3233752e766f6d09,0x25202c3472250920,0x3b792e6469617463,0x33752e766f6d090a\n"
".quad 0x202c357225092032,0x3b792e6469746e25,0x6f6c2e6c756d090a,0x722509203233752e\n"
".quad 0x202c357225202c36,0x6f6d090a3b347225,0x2509203233752e76,0x64697425202c3772\n"
".quad 0x646461090a3b782e,0x722509203233752e,0x202c337225202c38,0x6f6d090a3b377225\n"
".quad 0x2509203233752e76,0x64697425202c3972,0x646461090a3b792e,0x722509203233752e\n"
".quad 0x2c367225202c3031,0x6c090a3b39722520,0x2e6d617261702e64,0x3172250920323373\n"
".quad 0x75635f5f5b202c31,0x5f5f6d7261706164,0x6a50324d4c4e345a,0x616d695f66666969\n"
".quad 0x6c090a3b5d576567,0x2e6d617261702e64,0x3172250920323373,0x75635f5f5b202c32\n"
".quad 0x5f5f6d7261706164,0x6a50324d4c4e345a,0x616d695f66666969,0x73090a3b5d486567\n"
".quad 0x33752e74672e7465,0x2509203233732e32,0x317225202c333172,0x3b30317225202c32\n"
".quad 0x33732e67656e090a,0x2c34317225092032,0x090a3b3331722520,0x752e74672e746573\n"
".quad 0x09203233732e3233,0x7225202c35317225,0x3b387225202c3131,0x33732e67656e090a\n"
".quad 0x2c36317225092032,0x090a3b3531722520,0x203233622e646e61,0x25202c3731722509\n"
".quad 0x317225202c343172,0x2e766f6d090a3b36,0x3172250920323375,0x73090a3b30202c38\n"
".quad 0x732e71652e707465,0x2c31702509203233,0x25202c3731722520,0x2540090a3b383172\n"
".quad 0x0920617262203170,0x39365f385f744c24,0x646461090a3b3431,0x722509203233752e\n"
".quad 0x2c337225202c3931,0x747663090a3b3320,0x2e3233662e6e722e,0x3166250920323375\n"
".quad 0x0a3b39317225202c,0x3233662e766f6d09,0x30202c3266250920,0x3030303030663366\n"
".quad 0x0920202020203b30,0x090a352e30202f2f,0x203233662e646461,0x6625202c33662509\n"
".quad 0x0a3b326625202c31,0x2e6f6c2e6c756d09,0x3272250920323375,0x202c347225202c30\n"
".quad 0x6461090a3b317225,0x2509203233752e64,0x327225202c313272,0x63090a3b33202c30\n"
".quad 0x33662e6e722e7476,0x2509203233752e32,0x31327225202c3466,0x662e766f6d090a3b\n"
".quad 0x2c35662509203233,0x3030306633663020,0x202020203b303030,0x352e30202f2f0920\n"
".quad 0x33662e646461090a,0x202c366625092032,0x356625202c346625,0x722e747663090a3b\n"
".quad 0x33732e3233662e6e,0x202c376625092032,0x6f6d090a3b387225,0x2509203233662e76\n"
".quad 0x66336630202c3866,0x203b303030303030,0x202f2f0920202020,0x646461090a352e30\n"
".quad 0x662509203233662e,0x202c376625202c39,0x7663090a3b386625,0x3233662e6e722e74\n"
".quad 0x662509203233732e,0x30317225202c3031,0x662e766f6d090a3b,0x3131662509203233\n"
".quad 0x303066336630202c,0x2020203b30303030,0x352e30202f2f0920,0x33662e646461090a\n"
".quad 0x2c32316625092032,0x25202c3031662520,0x6f6d090a3b313166,0x2509203233662e76\n"
".quad 0x636630202c333166,0x3b30303030303430,0x202f2f0920202020,0x2e766f6d090a332d\n"
".quad 0x3166250920323366,0x3030306630202c34,0x20203b3030303030,0x0a30202f2f092020\n"
".quad 0x39375f385f744c24,0x3c2f2f200a3a3833,0x6f4c203e706f6f6c,0x2079646f6220706f\n"
".quad 0x2c313620656e696c,0x676e697473656e20,0x203a687470656420,0x6d69747365202c31\n"
".quad 0x6574692064657461,0x3a736e6f69746172,0x6e776f6e6b6e7520,0x33662e646461090a\n"
".quad 0x2c35316625092032,0x25202c3231662520,0x6461090a3b333166,0x2509203233662e64\n"
".quad 0x366625202c363166,0x0a3b33316625202c,0x3233662e766f6d09,0x202c373166250920\n"
".quad 0x3030303430636630,0x09202020203b3030,0x4c240a332d202f2f,0x363037385f385f74\n"
".quad 0x6f6c3c2f2f200a3a,0x706f6f4c203e706f,0x696c2079646f6220,0x6e202c313620656e\n"
".quad 0x6420676e69747365,0x2c32203a68747065,0x74616d6974736520,0x6172657469206465\n"
".quad 0x75203a736e6f6974,0x090a6e776f6e6b6e,0x203233662e646461,0x25202c3831662509\n"
".quad 0x37316625202c3366,0x662e766f6d090a3b,0x3931662509203233,0x0a3b38316625202c\n"
".quad 0x3233662e766f6d09,0x202c303266250920,0x6d090a3b36316625,0x09203233662e766f\n"
".quad 0x6630202c31326625,0x3030303030303030,0x2f2f09202020203b,0x2e766f6d090a3020\n"
".quad 0x3266250920323366,0x3b31326625202c32,0x33662e766f6d090a,0x2c33326625092032\n"
".quad 0x3030303030663020,0x202020203b303030,0x6d090a30202f2f09,0x09203233662e766f\n"
".quad 0x6625202c34326625,0x786574090a3b3332,0x752e34762e64322e,0x7b203233662e3233\n"
".quad 0x3272252c32327225,0x252c343272252c33,0x65745b2c7d353272,0x7b2c6567616d4978\n"
".quad 0x3266252c39316625,0x252c323266252c30,0x200a3b5d7d343266,0x3e706f6f6c3c2f2f\n"
".quad 0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964,0x64616568202c3136\n"
".quad 0x64656c6562616c20,0x385f385f744c2420,0x6f6c2e090a363037,0x0939370931320963\n"
".quad 0x732e766f6d090a30,0x3632722509203233,0x0a3b32327225202c,0x3233732e766f6d09\n"
".quad 0x202c373272250920,0x6d090a3b33327225,0x09203233732e766f,0x7225202c38327225\n"
".quad 0x646461090a3b3432,0x662509203233662e,0x2c396625202c3532,0x090a3b3731662520\n"
".quad 0x203233662e766f6d,0x25202c3632662509,0x6f6d090a3b353266,0x2509203233662e76\n"
".quad 0x316625202c373266,0x2e766f6d090a3b35,0x3266250920323366,0x3030306630202c38\n"
".quad 0x20203b3030303030,0x0a30202f2f092020,0x3233662e766f6d09,0x202c393266250920\n"
".quad 0x6d090a3b38326625,0x09203233662e766f,0x6630202c30336625,0x3030303030303030\n"
".quad 0x2f2f09202020203b,0x2e766f6d090a3020,0x3366250920323366,0x3b30336625202c31\n"
".quad 0x64322e786574090a,0x2e3233752e34762e,0x3272257b20323366,0x252c303372252c39\n"
".quad 0x323372252c313372,0x6d497865745b2c7d,0x3266257b2c656761,0x252c373266252c36\n"
".quad 0x313366252c393266,0x3c2f2f200a3b5d7d,0x6150203e706f6f6c,0x6f6c20666f207472\n"
".quad 0x2079646f6220706f,0x2c313620656e696c,0x616c206461656820,0x4c242064656c6562\n"
".quad 0x363037385f385f74,0x33732e766f6d090a,0x2c33337225092032,0x090a3b3932722520\n"
".quad 0x203233732e766f6d,0x25202c3433722509,0x6f6d090a3b303372,0x2509203233732e76\n"
".quad 0x337225202c353372,0x2e766f6d090a3b31,0x3366250920323362,0x3b34337225202c32\n"
".quad 0x33622e766f6d090a,0x2c33336625092032,0x090a3b3732722520,0x203233622e766f6d\n"
".quad 0x25202c3433662509,0x6f6d090a3b333372,0x2509203233622e76,0x327225202c353366\n"
".quad 0x2e766f6d090a3b36,0x3366250920323362,0x3b35337225202c36,0x33622e766f6d090a\n"
".quad 0x2c37336625092032,0x090a3b3832722520,0x203233662e627573,0x25202c3833662509\n"
".quad 0x336625202c323366,0x2e627573090a3b33,0x3366250920323366,0x2c34336625202c39\n"
".quad 0x090a3b3533662520,0x203233662e627573,0x25202c3034662509,0x336625202c363366\n"
".quad 0x2e6c756d090a3b37,0x3466250920323366,0x2c38336625202c31,0x090a3b3833662520\n"
".quad 0x662e6e722e616d66,0x3234662509203233,0x202c39336625202c,0x6625202c39336625\n"
".quad 0x616d66090a3b3134,0x203233662e6e722e,0x25202c3334662509,0x346625202c303466\n"
".quad 0x3b32346625202c30,0x33662e646461090a,0x2c34316625092032,0x25202c3431662520\n"
".quad 0x6f6d090a3b333466,0x2509203233662e76,0x336630202c343466,0x3b30303030303866\n"
".quad 0x202f2f0920202020,0x662e646461090a31,0x3731662509203233,0x202c37316625202c\n"
".quad 0x6d090a3b34346625,0x09203233662e766f,0x6630202c35346625,0x3030303030343034\n"
".quad 0x2f2f09202020203b,0x70746573090a3320,0x203233662e656c2e,0x6625202c32702509\n"
".quad 0x35346625202c3731,0x2032702540090a3b,0x744c240920617262,0x3b363037385f385f\n"
".quad 0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f,0x6e696c2079646f62\n"
".quad 0x6568202c31362065,0x6c6562616c206461,0x385f744c24206465,0x6d090a383339375f\n"
".quad 0x09203233662e766f,0x6630202c36346625,0x3030303030386633,0x2f2f09202020203b\n"
".quad 0x2e646461090a3120,0x3166250920323366,0x2c33316625202c33,0x090a3b3634662520\n"
".quad 0x203233662e766f6d,0x30202c3734662509,0x3030303034303466,0x2f09202020203b30\n"
".quad 0x746573090a33202f,0x3233662e656c2e70,0x25202c3370250920,0x346625202c333166\n"
".quad 0x33702540090a3b37,0x4c24092061726220,0x383339375f385f74,0x09636f6c2e090a3b\n"
".quad 0x0a30093039093132,0x3436752e766f6d09,0x202c316472250920,0x5f5f616475635f5f\n"
".quad 0x6f6c5f616475635f,0x5f7261765f6c6163,0x35335f3030373832,0x6e6f635f6e6f6e5f\n"
".quad 0x67696557665f7473,0x0a3b363331737468,0x313209636f6c2e09,0x73090a3009333909\n"
".quad 0x09203233752e6275,0x7225202c36337225,0x73090a3b33202c37,0x09203233752e6275\n"
".quad 0x7225202c37337225,0x6d090a3b33202c39,0x33752e6f6c2e6c75,0x2c38337225092032\n"
".quad 0x25202c3633722520,0x756d090a3b363372,0x3233752e6f6c2e6c,0x202c393372250920\n"
".quad 0x7225202c37337225,0x646461090a3b3733,0x722509203233752e,0x38337225202c3034\n"
".quad 0x0a3b39337225202c,0x2e6e722e74766309,0x203233752e323366,0x25202c3834662509\n"
".quad 0x6f6d090a3b303472,0x2509203233662e76,0x336630202c393466,0x3b35306632376163\n"
".quad 0x202f2f0920202020,0x3830343032302e30,0x662e6c756d090a32,0x3035662509203233\n"
".quad 0x202c38346625202c,0x6c090a3b39346625,0x2e6d617261702e64,0x3566250920323366\n"
".quad 0x75635f5f5b202c31,0x5f5f6d7261706164,0x6a50324d4c4e345a,0x696f4e5f66666969\n"
".quad 0x6d66090a3b5d6573,0x3233662e6e722e61,0x202c323566250920,0x6625202c31356625\n"
".quad 0x30356625202c3431,0x662e67656e090a3b,0x3335662509203233,0x0a3b32356625202c\n"
".quad 0x3233662e766f6d09,0x202c343566250920,0x6161386266336630,0x09202020203b6233\n"
".quad 0x3234342e31202f2f,0x662e6c756d090a37,0x3535662509203233,0x202c33356625202c\n"
".quad 0x65090a3b34356625,0x6f727070612e3278,0x2509203233662e78,0x356625202c363566\n"
".quad 0x2e6c756d090a3b35,0x09203233752e6f6c,0x7225202c31347225,0x61090a3b38202c39\n"
".quad 0x09203233752e6464,0x7225202c32347225,0x3b31347225202c37,0x36752e747663090a\n"
".quad 0x2509203233752e34,0x347225202c326472,0x2e6c756d090a3b32,0x3233752e65646977\n"
".quad 0x202c336472250920,0x3b34202c32347225,0x36752e646461090a,0x2c34647225092034\n"
".quad 0x25202c3164722520,0x7473090a3b336472,0x2e6465726168732e,0x72255b0920323366\n"
".quad 0x25202c5d302b3464,0x6c2e090a3b363566,0x353909313209636f,0x2e726162090a3009\n"
".quad 0x3b300920636e7973,0x36732e766f6d090a,0x2c35647225092034,0x090a3b3164722520\n"
".quad 0x203233662e766f6d,0x30202c3735662509,0x3030303034306366,0x2f09202020203b30\n"
".quad 0x6f6d090a332d202f,0x2509203233662e76,0x306630202c383566,0x3b30303030303030\n"
".quad 0x202f2f0920202020,0x662e766f6d090a30,0x3935662509203233,0x303030306630202c\n"
".quad 0x2020203b30303030,0x090a30202f2f0920,0x203233662e766f6d,0x30202c3036662509\n"
".quad 0x3030303030303066,0x2f09202020203b30,0x766f6d090a30202f,0x662509203233662e\n"
".quad 0x30306630202c3136,0x203b303030303030,0x30202f2f09202020,0x33662e766f6d090a\n"
".quad 0x2c32366625092032,0x3030303030663020,0x202020203b303030,0x4c240a30202f2f09\n"
".quad 0x363839395f385f74,0x6f6c3c2f2f200a3a,0x706f6f4c203e706f,0x696c2079646f6220\n"
".quad 0x6e202c353920656e,0x6420676e69747365,0x2c31203a68747065,0x74616d6974736520\n"
".quad 0x6172657469206465,0x75203a736e6f6974,0x090a6e776f6e6b6e,0x203233662e646461\n"
".quad 0x25202c3336662509,0x356625202c323166,0x2e766f6d090a3b37,0x3666250920323366\n"
".quad 0x3430636630202c34,0x20203b3030303030,0x332d202f2f092020,0x315f385f744c240a\n"
".quad 0x2f200a3a34353730,0x203e706f6f6c3c2f,0x646f6220706f6f4c,0x3920656e696c2079\n"
".quad 0x697473656e202c35,0x687470656420676e,0x747365202c32203a,0x6920646574616d69\n"
".quad 0x6e6f697461726574,0x6f6e6b6e75203a73,0x636f6c2e090a6e77,0x0932313109313209\n"
".quad 0x752e646461090a30,0x3564722509203436,0x202c35647225202c,0x732e646c090a3b34\n"
".quad 0x33662e6465726168,0x2c35366625092032,0x2d2b356472255b20,0x646461090a3b5d34\n"
".quad 0x662509203233662e,0x2c396625202c3636,0x090a3b3436662520,0x203233662e766f6d\n"
".quad 0x25202c3736662509,0x6f6d090a3b363666,0x2509203233662e76,0x366625202c383666\n"
".quad 0x2e766f6d090a3b33,0x3666250920323366,0x3030306630202c39,0x20203b3030303030\n"
".quad 0x0a30202f2f092020,0x3233662e766f6d09,0x202c303766250920,0x6d090a3b39366625\n"
".quad 0x09203233662e766f,0x6630202c31376625,0x3030303030303030,0x2f2f09202020203b\n"
".quad 0x2e766f6d090a3020,0x3766250920323366,0x3b31376625202c32,0x64322e786574090a\n"
".quad 0x2e3233752e34762e,0x3472257b20323366,0x252c343472252c33,0x363472252c353472\n"
".quad 0x6d497865745b2c7d,0x3666257b2c656761,0x252c383666252c37,0x323766252c303766\n"
".quad 0x3c2f2f200a3b5d7d,0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f\n"
".quad 0x2c353920656e696c,0x616c206461656820,0x4c242064656c6562,0x353730315f385f74\n"
".quad 0x09636f6c2e090a34,0x3009353131093132,0x33732e766f6d090a,0x2c37347225092032\n"
".quad 0x090a3b3334722520,0x203233732e766f6d,0x25202c3834722509,0x6f6d090a3b343472\n"
".quad 0x2509203233732e76,0x347225202c393472,0x636f6c2e090a3b35,0x0936313109313209\n"
".quad 0x622e766f6d090a30,0x3337662509203233,0x0a3b37347225202c,0x2e6e722e616d6609\n"
".quad 0x3666250920323366,0x2c33376625202c30,0x25202c3536662520,0x6c2e090a3b303666\n"
".quad 0x313109313209636f,0x766f6d090a300937,0x662509203233622e,0x38347225202c3437\n"
".quad 0x722e616d66090a3b,0x2509203233662e6e,0x376625202c393566,0x2c35366625202c34\n"
".quad 0x090a3b3935662520,0x09313209636f6c2e,0x6d090a3009383131,0x09203233622e766f\n"
".quad 0x7225202c35376625,0x616d66090a3b3934,0x203233662e6e722e,0x25202c3835662509\n"
".quad 0x366625202c353766,0x3b38356625202c35,0x3209636f6c2e090a,0x0a30093132310931\n"
".quad 0x3233662e64646109,0x202c313666250920,0x6625202c35366625,0x6f6c2e090a3b3136\n"
".quad 0x3532310931320963,0x2e766f6d090a3009,0x3766250920323366,0x6163336630202c36\n"
".quad 0x20203b3530663237,0x2e30202f2f092020,0x0a32383034303230,0x3233662e64646109\n"
".quad 0x202c373766250920,0x6625202c32366625,0x766f6d090a3b3637,0x662509203233662e\n"
".quad 0x64336630202c3837,0x203b646363636363,0x30202f2f09202020,0x70746573090a312e\n"
".quad 0x203233662e74672e,0x6625202c34702509,0x38376625202c3536,0x2e706c6573090a3b\n"
".quad 0x3666250920323366,0x2c37376625202c32,0x25202c3236662520,0x766f6d090a3b3470\n"
".quad 0x662509203233662e,0x66336630202c3937,0x203b303030303038,0x31202f2f09202020\n"
".quad 0x33662e646461090a,0x2c34366625092032,0x25202c3436662520,0x6f6d090a3b393766\n"
".quad 0x2509203233662e76,0x346630202c303866,0x3b30303030303830,0x202f2f0920202020\n"
".quad 0x2e70746573090a34,0x09203233662e656c,0x366625202c357025,0x3b30386625202c34\n"
".quad 0x622035702540090a,0x5f744c2409206172,0x3b34353730315f38,0x6f6f6c3c2f2f200a\n"
".quad 0x2074726150203e70,0x20706f6f6c20666f,0x6e696c2079646f62,0x6568202c35392065\n"
".quad 0x6c6562616c206461,0x385f744c24206465,0x6d090a363839395f,0x09203233662e766f\n"
".quad 0x6630202c31386625,0x3030303030386633,0x2f2f09202020203b,0x2e646461090a3120\n"
".quad 0x3566250920323366,0x2c37356625202c37,0x090a3b3138662520,0x203233662e766f6d\n"
".quad 0x30202c3238662509,0x3030303038303466,0x2f09202020203b30,0x746573090a34202f\n"
".quad 0x3233662e656c2e70,0x25202c3670250920,0x386625202c373566,0x36702540090a3b32\n"
".quad 0x4c24092061726220,0x363839395f385f74,0x09636f6c2e090a3b,0x3009303331093132\n"
".quad 0x6e722e706372090a,0x662509203233662e,0x31366625202c3338,0x662e6c756d090a3b\n"
".quad 0x3036662509203233,0x202c33386625202c,0x2e090a3b30366625,0x3109313209636f6c\n"
".quad 0x756d090a30093133,0x2509203233662e6c,0x386625202c393566,0x3b39356625202c33\n"
".quad 0x3209636f6c2e090a,0x0a30093233310931,0x3233662e6c756d09,0x202c383566250920\n"
".quad 0x6625202c33386625,0x766f6d090a3b3835,0x662509203233662e,0x3b396625202c3438\n"
".quad 0x33662e766f6d090a,0x2c35386625092032,0x090a3b3231662520,0x203233662e766f6d\n"
".quad 0x30202c3638662509,0x3030303030303066,0x2f09202020203b30,0x766f6d090a30202f\n"
".quad 0x662509203233662e,0x36386625202c3738,0x662e766f6d090a3b,0x3838662509203233\n"
".quad 0x303030306630202c,0x2020203b30303030,0x090a30202f2f0920,0x203233662e766f6d\n"
".quad 0x25202c3938662509,0x6574090a3b383866,0x2e34762e64322e78,0x203233662e323375\n"
".quad 0x72252c303572257b,0x2c323572252c3135,0x745b2c7d33357225,0x2c6567616d497865\n"
".quad 0x66252c343866257b,0x2c373866252c3538,0x0a3b5d7d39386625,0x313209636f6c2e09\n"
".quad 0x090a300939333109,0x203233732e766f6d,0x25202c3435722509,0x6f6d090a3b303572\n"
".quad 0x2509203233732e76,0x357225202c353572,0x2e766f6d090a3b31,0x3572250920323373\n"
".quad 0x3b32357225202c36,0x3209636f6c2e090a,0x0a30093334310931,0x3233662e766f6d09\n"
".quad 0x202c303966250920,0x6363636364336630,0x09202020203b6463,0x090a312e30202f2f\n"
".quad 0x2e74672e70746573,0x3770250920323366,0x202c32366625202c,0x6c090a3b30396625\n"
".quad 0x2e6d617261702e64,0x3966250920323366,0x75635f5f5b202c31,0x5f5f6d7261706164\n"
".quad 0x6a50324d4c4e345a,0x72656c5f66666969,0x6f6d090a3b5d4370,0x2509203233662e76\n"
".quad 0x336630202c323966,0x3b30303030303866,0x202f2f0920202020,0x662e627573090a31\n"
".quad 0x3339662509203233,0x202c32396625202c,0x73090a3b31396625,0x203233662e706c65\n"
".quad 0x25202c3439662509,0x396625202c313966,0x0a3b377025202c33,0x3233622e766f6d09\n"
".quad 0x202c353966250920,0x73090a3b34357225,0x09203233662e6275,0x6625202c36396625\n"
".quad 0x30366625202c3539,0x722e616d66090a3b,0x2509203233662e6e,0x396625202c373966\n"
".quad 0x2c36396625202c34,0x090a3b3036662520,0x203233662e766f6d,0x30202c3839662509\n"
".quad 0x3030306637333466,0x2f09202020203b30,0x6d090a353532202f,0x09203233662e6c75\n"
".quad 0x6625202c39396625,0x38396625202c3739,0x722e747663090a3b,0x662e3233732e697a\n"
".quad 0x3735722509203233,0x0a3b39396625202c,0x3233622e766f6d09,0x2c30303166250920\n"
".quad 0x090a3b3535722520,0x203233662e627573,0x202c313031662509,0x25202c3030316625\n"
".quad 0x6d66090a3b393566,0x3233662e6e722e61,0x2c32303166250920,0x25202c3439662520\n"
".quad 0x6625202c31303166,0x766f6d090a3b3935,0x662509203233662e,0x346630202c333031\n"
".quad 0x3b30303030663733,0x32202f2f09202020,0x2e6c756d090a3535,0x3166250920323366\n"
".quad 0x30316625202c3430,0x3330316625202c32,0x722e747663090a3b,0x662e3233732e697a\n"
".quad 0x3835722509203233,0x3b3430316625202c,0x33622e6c6873090a,0x2c39357225092032\n"
".quad 0x38202c3835722520,0x33622e726f090a3b,0x2c30367225092032,0x25202c3735722520\n"
".quad 0x6f6d090a3b393572,0x2509203233662e76,0x6630202c35303166,0x3030303030303030\n"
".quad 0x202f2f092020203b,0x722e747663090a30,0x662e3233732e697a,0x3136722509203233\n"
".quad 0x3b3530316625202c,0x33622e6c6873090a,0x2c32367225092032,0x32202c3136722520\n"
".quad 0x2e766f6d090a3b34,0x3166250920323362,0x36357225202c3630,0x662e627573090a3b\n"
".quad 0x3031662509203233,0x3630316625202c37,0x0a3b38356625202c,0x2e6e722e616d6609\n"
".quad 0x3166250920323366,0x34396625202c3830,0x2c3730316625202c,0x090a3b3835662520\n"
".quad 0x203233662e766f6d,0x202c393031662509,0x3030663733346630,0x2f092020203b3030\n"
".quad 0x6d090a353532202f,0x09203233662e6c75,0x25202c3031316625,0x6625202c38303166\n"
".quad 0x7663090a3b393031,0x33732e697a722e74,0x2509203233662e32,0x316625202c333672\n"
".quad 0x6c6873090a3b3031,0x722509203233622e,0x33367225202c3436,0x6f090a3b3631202c\n"
".quad 0x2509203233622e72,0x367225202c353672,0x3b34367225202c32,0x3233622e726f090a\n"
".quad 0x202c363672250920,0x7225202c30367225,0x6c756d090a3b3536,0x203233732e6f6c2e\n"
".quad 0x25202c3736722509,0x317225202c313172,0x2e646461090a3b30,0x3672250920323373\n"
".quad 0x202c387225202c38,0x6d090a3b37367225,0x33752e6f6c2e6c75,0x2c39367225092032\n"
".quad 0x34202c3836722520,0x752e747663090a3b,0x09203233752e3436,0x7225202c36647225\n"
".quad 0x2e646c090a3b3936,0x36752e6d61726170,0x2c37647225092034,0x616475635f5f5b20\n"
".quad 0x345a5f5f6d726170,0x69696a50324d4c4e,0x3b5d7473645f6666,0x36752e646461090a\n"
".quad 0x2c38647225092034,0x25202c3664722520,0x7473090a3b376472,0x2e6c61626f6c672e\n"
".quad 0x72255b0920323375,0x25202c5d302b3864,0x744c240a3b363672,0x3a343139365f385f\n"
".quad 0x3209636f6c2e090a,0x0a30093534310931,0x240a3b7469786509,0x5f5f646e6557444c\n"
".quad 0x6a50324d4c4e345a,0x7d090a3a66666969,0x4e345a5f202f2f20,0x6669696a50324d4c\n"
".quad 0x746e652e090a0a66,0x4c4e385a5f207972,0x6a5067616964324d,0x090a282066666969\n"
".quad 0x206d617261702e09,0x635f5f203436752e,0x5f6d726170616475,0x64324d4c4e385a5f\n"
".quad 0x6669696a50676169,0x090a2c7473645f66,0x206d617261702e09,0x635f5f203233732e\n"
".quad 0x5f6d726170616475,0x64324d4c4e385a5f,0x6669696a50676169,0x576567616d695f66\n"
".quad 0x7261702e09090a2c,0x203233732e206d61,0x6170616475635f5f,0x4c4e385a5f5f6d72\n"
".quad 0x6a5067616964324d,0x616d695f66666969,0x2e09090a2c486567,0x662e206d61726170\n"
".quad 0x6475635f5f203233,0x5a5f5f6d72617061,0x616964324d4c4e38,0x5f666669696a5067\n"
".quad 0x090a2c6573696f4e,0x206d617261702e09,0x635f5f203233662e,0x5f6d726170616475\n"
".quad 0x64324d4c4e385a5f,0x6669696a50676169,0x29437072654c5f66,0x65722e090a7b090a\n"
".quad 0x25203233752e2067,0x090a3b3e36353c72,0x36752e206765722e,0x30313c6472252034\n"
".quad 0x6765722e090a3b3e,0x6625203233662e20,0x2e090a3b3e37373c,0x6572702e20676572\n"
".quad 0x3b3e393c70252064,0x65726168732e090a,0x6e67696c612e2064,0x5f2038622e203420\n"
".quad 0x5f5f5f616475635f,0x636f6c5f61647563,0x325f7261765f6c61,0x5f35335f39303838\n"
".quad 0x736e6f635f6e6f6e,0x6867696557665f74,0x35325b3631347374,0x6f6c2e090a3b5d36\n"
".quad 0x3037310931320963,0x6257444c240a3009,0x385a5f5f6e696765,0x67616964324d4c4e\n"
".quad 0x0a3a666669696a50,0x3233752e766f6d09,0x25202c3172250920,0x0a3b782e6469746e\n"
".quad 0x3233752e766f6d09,0x25202c3272250920,0x3b782e6469617463,0x6f6c2e6c756d090a\n"
".quad 0x722509203233752e,0x202c327225202c33,0x6f6d090a3b317225,0x2509203233752e76\n"
".quad 0x61746325202c3472,0x6d090a3b792e6469,0x09203233752e766f,0x746e25202c357225\n"
".quad 0x6d090a3b792e6469,0x33752e6f6c2e6c75,0x202c367225092032,0x347225202c357225\n"
".quad 0x752e766f6d090a3b,0x2c37722509203233,0x3b782e6469742520,0x33752e646461090a\n"
".quad 0x202c387225092032,0x377225202c337225,0x752e766f6d090a3b,0x2c39722509203233\n"
".quad 0x3b792e6469742520,0x33752e646461090a,0x2c30317225092032,0x7225202c36722520\n"
".quad 0x702e646c090a3b39,0x3233732e6d617261,0x202c313172250920,0x70616475635f5f5b\n"
".quad 0x4e385a5f5f6d7261,0x5067616964324d4c,0x6d695f666669696a,0x090a3b5d57656761\n"
".quad 0x6d617261702e646c,0x722509203233732e,0x635f5f5b202c3231,0x5f6d726170616475\n"
".quad 0x64324d4c4e385a5f,0x6669696a50676169,0x486567616d695f66,0x2e746573090a3b5d\n"
".quad 0x732e3233752e7467,0x3331722509203233,0x202c32317225202c,0x6e090a3b30317225\n"
".quad 0x09203233732e6765,0x7225202c34317225,0x746573090a3b3331,0x2e3233752e74672e\n"
".quad 0x3172250920323373,0x2c31317225202c35,0x6e090a3b38722520,0x09203233732e6765\n"
".quad 0x7225202c36317225,0x646e61090a3b3531,0x722509203233622e,0x34317225202c3731\n"
".quad 0x0a3b36317225202c,0x3233752e766f6d09,0x202c383172250920,0x70746573090a3b30\n"
".quad 0x203233732e71652e,0x7225202c31702509,0x38317225202c3731,0x2031702540090a3b\n"
".quad 0x744c240920617262,0x3b343139365f395f,0x33752e646461090a,0x2c39317225092032\n"
".quad 0x3b33202c33722520,0x6e722e747663090a,0x3233752e3233662e,0x25202c3166250920\n"
".quad 0x6f6d090a3b393172,0x2509203233662e76,0x66336630202c3266,0x203b303030303030\n"
".quad 0x202f2f0920202020,0x646461090a352e30,0x662509203233662e,0x202c316625202c33\n"
".quad 0x756d090a3b326625,0x3233752e6f6c2e6c,0x202c303272250920,0x317225202c347225\n"
".quad 0x752e646461090a3b,0x3132722509203233,0x202c30327225202c,0x2e747663090a3b33\n"
".quad 0x752e3233662e6e72,0x2c34662509203233,0x090a3b3132722520,0x203233662e766f6d\n"
".quad 0x6630202c35662509,0x3030303030306633,0x2f0920202020203b,0x61090a352e30202f\n"
".quad 0x09203233662e6464,0x346625202c366625,0x090a3b356625202c,0x662e6e722e747663\n"
".quad 0x09203233732e3233,0x387225202c376625,0x662e766f6d090a3b,0x2c38662509203233\n"
".quad 0x3030306633663020,0x202020203b303030,0x352e30202f2f0920,0x33662e646461090a\n"
".quad 0x202c396625092032,0x386625202c376625,0x722e747663090a3b,0x33732e3233662e6e\n"
".quad 0x2c30316625092032,0x090a3b3031722520,0x203233662e766f6d,0x30202c3131662509\n"
".quad 0x3030303030663366,0x2f09202020203b30,0x61090a352e30202f,0x09203233662e6464\n"
".quad 0x6625202c32316625,0x31316625202c3031,0x662e766f6d090a3b,0x3331662509203233\n"
".quad 0x303430636630202c,0x2020203b30303030,0x0a332d202f2f0920,0x3233662e766f6d09\n"
".quad 0x202c343166250920,0x3030303030306630,0x09202020203b3030,0x744c240a30202f2f\n"
".quad 0x3a383339375f395f,0x6f6f6c3c2f2f200a,0x20706f6f4c203e70,0x6e696c2079646f62\n"
".quad 0x6e202c3037312065,0x6420676e69747365,0x2c31203a68747065,0x74616d6974736520\n"
".quad 0x6172657469206465,0x75203a736e6f6974,0x090a6e776f6e6b6e,0x203233662e646461\n"
".quad 0x25202c3531662509,0x316625202c323166,0x2e646461090a3b33,0x3166250920323366\n"
".quad 0x202c366625202c36,0x6d090a3b33316625,0x09203233662e766f,0x6630202c37316625\n"
".quad 0x3030303030343063,0x2f2f09202020203b,0x5f744c240a332d20,0x0a3a363037385f39\n"
".quad 0x706f6f6c3c2f2f20,0x6220706f6f4c203e,0x656e696c2079646f,0x656e202c30373120\n"
".quad 0x656420676e697473,0x202c32203a687470,0x6574616d69747365,0x7461726574692064\n"
".quad 0x6e75203a736e6f69,0x61090a6e776f6e6b,0x09203233662e6464,0x6625202c38316625\n"
".quad 0x3b37316625202c33,0x33662e766f6d090a,0x2c39316625092032,0x090a3b3831662520\n"
".quad 0x203233662e766f6d,0x25202c3032662509,0x6f6d090a3b363166,0x2509203233662e76\n"
".quad 0x306630202c313266,0x3b30303030303030,0x202f2f0920202020,0x662e766f6d090a30\n"
".quad 0x3232662509203233,0x0a3b31326625202c,0x3233662e766f6d09,0x202c333266250920\n"
".quad 0x3030303030306630,0x09202020203b3030,0x6f6d090a30202f2f,0x2509203233662e76\n"
".quad 0x326625202c343266,0x2e786574090a3b33,0x33752e34762e6432,0x257b203233662e32\n"
".quad 0x333272252c323272,0x72252c343272252c,0x7865745b2c7d3532,0x257b2c6567616d49\n"
".quad 0x303266252c393166,0x66252c323266252c,0x2f200a3b5d7d3432,0x203e706f6f6c3c2f\n"
".quad 0x20666f2074726150,0x646f6220706f6f6c,0x3120656e696c2079,0x64616568202c3037\n"
".quad 0x64656c6562616c20,0x385f395f744c2420,0x6f6c2e090a363037,0x3838310931320963\n"
".quad 0x2e766f6d090a3009,0x3272250920323373,0x3b32327225202c36,0x33732e766f6d090a\n"
".quad 0x2c37327225092032,0x090a3b3332722520,0x203233732e766f6d,0x25202c3832722509\n"
".quad 0x6461090a3b343272,0x2509203233662e64,0x396625202c353266,0x0a3b37316625202c\n"
".quad 0x3233662e766f6d09,0x202c363266250920,0x6d090a3b35326625,0x09203233662e766f\n"
".quad 0x6625202c37326625,0x766f6d090a3b3531,0x662509203233662e,0x30306630202c3832\n"
".quad 0x203b303030303030,0x30202f2f09202020,0x33662e766f6d090a,0x2c39326625092032\n"
".quad 0x090a3b3832662520,0x203233662e766f6d,0x30202c3033662509,0x3030303030303066\n"
".quad 0x2f09202020203b30,0x766f6d090a30202f,0x662509203233662e,0x30336625202c3133\n"
".quad 0x322e786574090a3b,0x3233752e34762e64,0x72257b203233662e,0x2c303372252c3932\n"
".quad 0x3372252c31337225,0x497865745b2c7d32,0x66257b2c6567616d,0x2c373266252c3632\n"
".quad 0x3366252c39326625,0x2f2f200a3b5d7d31,0x50203e706f6f6c3c,0x6c20666f20747261\n"
".quad 0x79646f6220706f6f,0x373120656e696c20,0x2064616568202c30,0x2064656c6562616c\n"
".quad 0x37385f395f744c24,0x2e766f6d090a3630,0x3372250920323373,0x3b39327225202c33\n"
".quad 0x33732e766f6d090a,0x2c34337225092032,0x090a3b3033722520,0x203233732e766f6d\n"
".quad 0x25202c3533722509,0x6f6d090a3b313372,0x2509203233622e76,0x337225202c323366\n"
".quad 0x2e766f6d090a3b34,0x3366250920323362,0x3b37327225202c33,0x33622e766f6d090a\n"
".quad 0x2c34336625092032,0x090a3b3333722520,0x203233622e766f6d,0x25202c3533662509\n"
".quad 0x6f6d090a3b363272,0x2509203233622e76,0x337225202c363366,0x2e766f6d090a3b35\n"
".quad 0x3366250920323362,0x3b38327225202c37,0x33662e627573090a,0x2c38336625092032\n"
".quad 0x25202c3233662520,0x7573090a3b333366,0x2509203233662e62,0x336625202c393366\n"
".quad 0x3b35336625202c34,0x33662e627573090a,0x2c30346625092032,0x25202c3633662520\n"
".quad 0x756d090a3b373366,0x2509203233662e6c,0x336625202c313466,0x3b38336625202c38\n"
".quad 0x6e722e616d66090a,0x662509203233662e,0x39336625202c3234,0x202c39336625202c\n"
".quad 0x66090a3b31346625,0x33662e6e722e616d,0x2c33346625092032,0x25202c3034662520\n"
".quad 0x346625202c303466,0x2e646461090a3b32,0x3166250920323366,0x2c34316625202c34\n"
".quad 0x090a3b3334662520,0x203233662e766f6d,0x30202c3434662509,0x3030303038663366\n"
".quad 0x2f09202020203b30,0x646461090a31202f,0x662509203233662e,0x37316625202c3731\n"
".quad 0x0a3b34346625202c,0x3233662e766f6d09,0x202c353466250920,0x3030303830346630\n"
".quad 0x09202020203b3030,0x6573090a34202f2f,0x33662e656c2e7074,0x202c327025092032\n"
".quad 0x6625202c37316625,0x702540090a3b3534,0x2409206172622032,0x3037385f395f744c\n"
".quad 0x6c3c2f2f200a3b36,0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070\n"
".quad 0x2c30373120656e69,0x616c206461656820,0x4c242064656c6562,0x383339375f395f74\n"
".quad 0x33662e766f6d090a,0x2c36346625092032,0x3030386633663020,0x202020203b303030\n"
".quad 0x61090a31202f2f09,0x09203233662e6464,0x6625202c33316625,0x36346625202c3331\n"
".quad 0x662e766f6d090a3b,0x3734662509203233,0x303830346630202c,0x2020203b30303030\n"
".quad 0x090a34202f2f0920,0x2e656c2e70746573,0x3370250920323366,0x202c33316625202c\n"
".quad 0x40090a3b37346625,0x2061726220337025,0x375f395f744c2409,0x6c2e090a3b383339\n"
".quad 0x393109313209636f,0x766f6d090a300939,0x722509203436752e,0x75635f5f202c3164\n"
".quad 0x6475635f5f5f6164,0x5f6c61636f6c5f61,0x303838325f726176,0x6e6f6e5f35335f39\n"
".quad 0x665f74736e6f635f,0x3473746867696557,0x6f6c2e090a3b3631,0x3230320931320963\n"
".quad 0x2e627573090a3009,0x3372250920323375,0x202c377225202c36,0x2e627573090a3b33\n"
".quad 0x3372250920323375,0x202c397225202c37,0x2e6c756d090a3b33,0x09203233752e6f6c\n"
".quad 0x7225202c38337225,0x36337225202c3633,0x6c2e6c756d090a3b,0x2509203233752e6f\n"
".quad 0x337225202c393372,0x3b37337225202c37,0x33752e646461090a,0x2c30347225092032\n"
".quad 0x25202c3833722520,0x7663090a3b393372,0x3233662e6e722e74,0x662509203233752e\n"
".quad 0x30347225202c3834,0x662e766f6d090a3b,0x3934662509203233,0x376163336630202c\n"
".quad 0x2020203b35306632,0x302e30202f2f0920,0x090a323830343032,0x203233662e6c756d\n"
".quad 0x25202c3035662509,0x346625202c383466,0x702e646c090a3b39,0x3233662e6d617261\n"
".quad 0x202c313566250920,0x70616475635f5f5b,0x4e385a5f5f6d7261,0x5067616964324d4c\n"
".quad 0x6f4e5f666669696a,0x66090a3b5d657369,0x33662e6e722e616d,0x2c32356625092032\n"
".quad 0x25202c3135662520,0x356625202c343166,0x2e67656e090a3b30,0x3566250920323366\n"
".quad 0x3b32356625202c33,0x33662e766f6d090a,0x2c34356625092032,0x6138626633663020\n"
".quad 0x202020203b623361,0x34342e31202f2f09,0x2e6c756d090a3732,0x3566250920323366\n"
".quad 0x2c33356625202c35,0x090a3b3435662520,0x727070612e327865,0x09203233662e786f\n"
".quad 0x6625202c36356625,0x6c756d090a3b3535,0x203233752e6f6c2e,0x25202c3134722509\n"
".quad 0x090a3b38202c3972,0x203233752e646461,0x25202c3234722509,0x31347225202c3772\n"
".quad 0x752e747663090a3b,0x09203233752e3436,0x7225202c32647225,0x6c756d090a3b3234\n"
".quad 0x33752e656469772e,0x2c33647225092032,0x34202c3234722520,0x752e646461090a3b\n"
".quad 0x3464722509203436,0x202c31647225202c,0x73090a3b33647225,0x6465726168732e74\n"
".quad 0x255b09203233662e,0x202c5d302b346472,0x2e090a3b36356625,0x3209313209636f6c\n"
".quad 0x6162090a30093430,0x0920636e79732e72,0x2e766f6d090a3b30,0x6472250920343673\n"
".quad 0x3b31647225202c35,0x33662e766f6d090a,0x2c37356625092032,0x3030343063663020\n"
".quad 0x202020203b303030,0x090a332d202f2f09,0x203233662e766f6d,0x30202c3835662509\n"
".quad 0x3030303030303066,0x2f09202020203b30,0x5f744c240a30202f,0x0a3a363839395f39\n"
".quad 0x706f6f6c3c2f2f20,0x6220706f6f4c203e,0x656e696c2079646f,0x656e202c34303220\n"
".quad 0x656420676e697473,0x202c31203a687470,0x6574616d69747365,0x7461726574692064\n"
".quad 0x6e75203a736e6f69,0x6d090a6e776f6e6b,0x09203233662e766f,0x6630202c39356625\n"
".quad 0x3030303030343063,0x2f2f09202020203b,0x5f744c240a332d20,0x3a34353730315f39\n"
".quad 0x6f6f6c3c2f2f200a,0x20706f6f4c203e70,0x6e696c2079646f62,0x6e202c3430322065\n"
".quad 0x6420676e69747365,0x2c32203a68747065,0x74616d6974736520,0x6172657469206465\n"
".quad 0x75203a736e6f6974,0x090a6e776f6e6b6e,0x09313209636f6c2e,0x61090a3009343132\n"
".quad 0x09203436752e6464,0x7225202c35647225,0x090a3b34202c3564,0x09313209636f6c2e\n"
".quad 0x6d090a3009383132,0x09203233662e766f,0x6630202c30366625,0x3530663237616333\n"
".quad 0x2f2f09202020203b,0x30343032302e3020,0x2e646461090a3238,0x3666250920323366\n"
".quad 0x2c38356625202c31,0x090a3b3036662520,0x65726168732e646c,0x2509203233662e64\n"
".quad 0x72255b202c323666,0x0a3b5d342d2b3564,0x3233662e766f6d09,0x202c333666250920\n"
".quad 0x6363636364336630,0x09202020203b6463,0x090a312e30202f2f,0x2e74672e70746573\n"
".quad 0x3470250920323366,0x202c32366625202c,0x73090a3b33366625,0x203233662e706c65\n"
".quad 0x25202c3835662509,0x356625202c313666,0x0a3b347025202c38,0x3233662e766f6d09\n"
".quad 0x202c343666250920,0x3030303866336630,0x09202020203b3030,0x6461090a31202f2f\n"
".quad 0x2509203233662e64,0x356625202c393566,0x3b34366625202c39,0x33662e766f6d090a\n"
".quad 0x2c35366625092032,0x3030383034663020,0x202020203b303030,0x73090a34202f2f09\n"
".quad 0x662e656c2e707465,0x2c35702509203233,0x25202c3935662520,0x2540090a3b353666\n"
".quad 0x0920617262203570,0x30315f395f744c24,0x2f2f200a3b343537,0x50203e706f6f6c3c\n"
".quad 0x6c20666f20747261,0x79646f6220706f6f,0x303220656e696c20,0x2064616568202c34\n"
".quad 0x2064656c6562616c,0x39395f395f744c24,0x2e766f6d090a3638,0x3666250920323366\n"
".quad 0x3866336630202c36,0x20203b3030303030,0x0a31202f2f092020,0x3233662e64646109\n"
".quad 0x202c373566250920,0x6625202c37356625,0x766f6d090a3b3636,0x662509203233662e\n"
".quad 0x30346630202c3736,0x203b303030303038,0x34202f2f09202020,0x6c2e70746573090a\n"
".quad 0x2509203233662e65,0x37356625202c3670,0x0a3b37366625202c,0x7262203670254009\n"
".quad 0x395f744c24092061,0x090a3b363839395f,0x09313209636f6c2e,0x6d090a3009363232\n"
".quad 0x09203233662e766f,0x6630202c38366625,0x3030303030303030,0x2f2f09202020203b\n"
".quad 0x2e747663090a3020,0x2e3233732e697a72,0x3472250920323366,0x3b38366625202c33\n"
".quad 0x33662e766f6d090a,0x2c39366625092032,0x6363636433663020,0x202020203b646363\n"
".quad 0x0a312e30202f2f09,0x74672e7074657309,0x702509203233662e,0x2c38356625202c37\n"
".quad 0x090a3b3936662520,0x203233662e766f6d,0x30202c3037662509,0x3030306637333466\n"
".quad 0x2f09202020203b30,0x6d090a353532202f,0x09203233662e766f,0x6630202c31376625\n"
".quad 0x3030303030303030,0x2f2f09202020203b,0x706c6573090a3020,0x662509203233662e\n"
".quad 0x30376625202c3237,0x202c31376625202c,0x7663090a3b377025,0x33732e697a722e74\n"
".quad 0x2509203233662e32,0x376625202c343472,0x2e6c6873090a3b32,0x3472250920323362\n"
".quad 0x2c33347225202c35,0x2e726f090a3b3820,0x3472250920323362,0x2c34347225202c36\n"
".quad 0x090a3b3534722520,0x203233622e6c6873,0x25202c3734722509,0x3b3432202c333472\n"
".quad 0x33662e766f6d090a,0x2c33376625092032,0x3030303030663020,0x202020203b303030\n"
".quad 0x6d090a30202f2f09,0x09203233662e766f,0x6630202c34376625,0x3030303066373334\n"
".quad 0x2f2f09202020203b,0x6573090a35353220,0x09203233662e706c,0x6625202c35376625\n"
".quad 0x34376625202c3337,0x090a3b377025202c,0x2e697a722e747663,0x203233662e323373\n"
".quad 0x25202c3834722509,0x6873090a3b353766,0x2509203233622e6c,0x347225202c393472\n"
".quad 0x090a3b3631202c38,0x09203233622e726f,0x7225202c30357225,0x39347225202c3734\n"
".quad 0x33622e726f090a3b,0x2c31357225092032,0x25202c3634722520,0x756d090a3b303572\n"
".quad 0x3233732e6f6c2e6c,0x202c323572250920,0x7225202c31317225,0x646461090a3b3031\n"
".quad 0x722509203233732e,0x2c387225202c3335,0x090a3b3235722520,0x752e6f6c2e6c756d\n"
".quad 0x3435722509203233,0x202c33357225202c,0x2e747663090a3b34,0x203233752e343675\n"
".quad 0x25202c3664722509,0x646c090a3b343572,0x752e6d617261702e,0x3764722509203436\n"
".quad 0x6475635f5f5b202c,0x5a5f5f6d72617061,0x616964324d4c4e38,0x5f666669696a5067\n"
".quad 0x61090a3b5d747364,0x09203436752e6464,0x7225202c38647225,0x37647225202c3664\n"
".quad 0x6c672e7473090a3b,0x3233752e6c61626f,0x2b386472255b0920,0x31357225202c5d30\n"
".quad 0x5f395f744c240a3b,0x2e090a3a34313936,0x3209313209636f6c,0x7865090a30093832\n"
".quad 0x57444c240a3b7469,0x4e385a5f5f646e65,0x5067616964324d4c,0x090a3a666669696a\n"
".quad 0x385a5f202f2f207d,0x67616964324d4c4e,0x0a0a666669696a50,0x0000000000000000\n"
".text");

extern "C" {

extern const unsigned long long __deviceText_$compute_20$[5516];

}

static __cudaFatPtxEntry __ptxEntries [] = {{(char*)"compute_20",(char*)__deviceText_$compute_20$},{0,0}};
static __cudaFatCubinEntry __cubinEntries[] = {{0,0}};
static __cudaFatDebugEntry __debugEntries0 = {0, 0, 0, 0} ;
static __cudaFatElfEntry __elfEntries0 = {0, 0, 0, 0} ;
static __cudaFatElfEntry __elfEntries1 = {(char*)"sm_21", (char*)__deviceText_$sm_21$, &__elfEntries0, (unsigned int)sizeof(__deviceText_$sm_21$)};



static __cudaFatCudaBinary __fatDeviceText __attribute__ ((section (".nvFatBinSegment")))= {0x1ee55a01,0x00000004,0xa14f518d,(char*)"b83a51b8d941606d",(char*)"/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising.cu",(char*)" ",__ptxEntries,__cubinEntries,&__debugEntries0,0,0,0,0,0,0xbfeffe0b,&__elfEntries1};
# 3 "/tmp/tmpxft_00001939_00000000-1_imageDenoising.cudafe1.stub.c" 2
struct __T20 {TColor *__par0;int __par1;int __par2;int __dummy_field;};
struct __T21 {TColor *__par0;int __par1;int __par2;float __par3;float __par4;int __dummy_field;};
struct __T22 {TColor *__par0;int __par1;int __par2;float __par3;float __par4;int __dummy_field;};
struct __T23 {TColor *__par0;int __par1;int __par2;float __par3;float __par4;int __dummy_field;};
struct __T24 {TColor *__par0;unsigned __par1;unsigned __par2;float __par3;float __par4;int __dummy_field;};
struct __T25 {TColor *__par0;int __par1;int __par2;float __par3;float __par4;int __dummy_field;};
struct __T26 {TColor *__par0;int __par1;int __par2;float __par3;float __par4;int __dummy_field;};
extern void __device_stub__Z4CopyPjii(TColor *, int, int);
extern void __device_stub__Z3KNNPjiiff(TColor *, int, int, float, float);
extern void __device_stub__Z7KNNdiagPjiiff(TColor *, int, int, float, float);
extern void __device_stub__Z3NLMPjiiff(TColor *, int, int, float, float);
extern void __device_stub__Z7NLMdiagPjjjff(TColor *, unsigned, unsigned, float, float);
extern void __device_stub__Z4NLM2Pjiiff(TColor *, int, int, float, float);
extern void __device_stub__Z8NLM2diagPjiiff(TColor *, int, int, float, float);
static void __sti____cudaRegisterAll_49_tmpxft_00001939_00000000_4_imageDenoising_cpp1_ii__Z3Maxff(void) __attribute__((__constructor__));
void __device_stub__Z4CopyPjii(TColor *__par0, int __par1, int __par2){ struct __T20 *__T27 = 0;
if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T27->__par0) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T27->__par1) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T27->__par2) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(TColor *, int, int))Copy)); (void)cudaLaunch(((char *)((void ( *)(TColor *, int, int))Copy))); };}
void Copy( TColor *__cuda_0,int __cuda_1,int __cuda_2)
# 42 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_copy_kernel.cuh"
{__device_stub__Z4CopyPjii( __cuda_0,__cuda_1,__cuda_2);
# 53 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_copy_kernel.cuh"
}
# 1 "/tmp/tmpxft_00001939_00000000-1_imageDenoising.cudafe1.stub.c"
void __device_stub__Z3KNNPjiiff( TColor *__par0, int __par1, int __par2, float __par3, float __par4) { struct __T21 *__T210 = 0;
if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T210->__par0) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T210->__par1) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T210->__par2) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T210->__par3) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T210->__par4) != cudaSuccess) return; { volatile static char *__f; __f = ((char *)((void ( *)(TColor *, int, int, float, float))KNN)); (void)cudaLaunch(((char *)((void ( *)(TColor *, int, int, float, float))KNN))); }; }
void KNN( TColor *__cuda_0,int __cuda_1,int __cuda_2,float __cuda_3,float __cuda_4)
# 47 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_knn_kernel.cuh"
{__device_stub__Z3KNNPjiiff( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4);
# 103 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_knn_kernel.cuh"
}
# 1 "/tmp/tmpxft_00001939_00000000-1_imageDenoising.cudafe1.stub.c"
void __device_stub__Z7KNNdiagPjiiff( TColor *__par0, int __par1, int __par2, float __par3, float __par4) { struct __T22 *__T213 = 0;
if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T213->__par0) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T213->__par1) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T213->__par2) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T213->__par3) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T213->__par4) != cudaSuccess) return; { volatile static char *__f; __f = ((char *)((void ( *)(TColor *, int, int, float, float))KNNdiag)); (void)cudaLaunch(((char *)((void ( *)(TColor *, int, int, float, float))KNNdiag))); }; }
void KNNdiag( TColor *__cuda_0,int __cuda_1,int __cuda_2,float __cuda_3,float __cuda_4)
# 129 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_knn_kernel.cuh"
{__device_stub__Z7KNNdiagPjiiff( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4);
# 164 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_knn_kernel.cuh"
}
# 1 "/tmp/tmpxft_00001939_00000000-1_imageDenoising.cudafe1.stub.c"
void __device_stub__Z3NLMPjiiff( TColor *__par0, int __par1, int __par2, float __par3, float __par4) { struct __T23 *__T216 = 0;
if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T216->__par0) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T216->__par1) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T216->__par2) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T216->__par3) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T216->__par4) != cudaSuccess) return; { volatile static char *__f; __f = ((char *)((void ( *)(TColor *, int, int, float, float))NLM)); (void)cudaLaunch(((char *)((void ( *)(TColor *, int, int, float, float))NLM))); }; }
void NLM( TColor *__cuda_0,int __cuda_1,int __cuda_2,float __cuda_3,float __cuda_4)
# 47 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm_kernel.cuh"
{__device_stub__Z3NLMPjiiff( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4);
# 109 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm_kernel.cuh"
}
# 1 "/tmp/tmpxft_00001939_00000000-1_imageDenoising.cudafe1.stub.c"
void __device_stub__Z7NLMdiagPjjjff( TColor *__par0, unsigned __par1, unsigned __par2, float __par3, float __par4) { struct __T24 *__T219 = 0;
if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T219->__par0) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T219->__par1) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T219->__par2) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T219->__par3) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T219->__par4) != cudaSuccess) return; { volatile static char *__f; __f = ((char *)((void ( *)(TColor *, unsigned, unsigned, float, float))NLMdiag)); (void)cudaLaunch(((char *)((void ( *)(TColor *, unsigned, unsigned, float, float))NLMdiag))); }; }
void NLMdiag( TColor *__cuda_0,unsigned __cuda_1,unsigned __cuda_2,float __cuda_3,float __cuda_4)
# 134 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm_kernel.cuh"
{__device_stub__Z7NLMdiagPjjjff( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4);
# 172 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm_kernel.cuh"
}
# 1 "/tmp/tmpxft_00001939_00000000-1_imageDenoising.cudafe1.stub.c"
void __device_stub__Z4NLM2Pjiiff( TColor *__par0, int __par1, int __par2, float __par3, float __par4) { struct __T25 *__T222 = 0;
if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T222->__par0) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T222->__par1) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T222->__par2) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T222->__par3) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T222->__par4) != cudaSuccess) return; { volatile static char *__f; __f = ((char *)((void ( *)(TColor *, int, int, float, float))NLM2)); (void)cudaLaunch(((char *)((void ( *)(TColor *, int, int, float, float))NLM2))); }; }
void NLM2( TColor *__cuda_0,int __cuda_1,int __cuda_2,float __cuda_3,float __cuda_4)
# 62 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm2_kernel.cuh"
{__device_stub__Z4NLM2Pjiiff( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4);
# 145 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm2_kernel.cuh"
}
# 1 "/tmp/tmpxft_00001939_00000000-1_imageDenoising.cudafe1.stub.c"
void __device_stub__Z8NLM2diagPjiiff( TColor *__par0, int __par1, int __par2, float __par3, float __par4) { struct __T26 *__T225 = 0;
if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T225->__par0) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T225->__par1) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T225->__par2) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T225->__par3) != cudaSuccess) return; if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T225->__par4) != cudaSuccess) return; { volatile static char *__f; __f = ((char *)((void ( *)(TColor *, int, int, float, float))NLM2diag)); (void)cudaLaunch(((char *)((void ( *)(TColor *, int, int, float, float))NLM2diag))); }; }
void NLM2diag( TColor *__cuda_0,int __cuda_1,int __cuda_2,float __cuda_3,float __cuda_4)
# 171 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm2_kernel.cuh"
{__device_stub__Z8NLM2diagPjiiff( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4);
# 228 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/imageDenoising/imageDenoising_nlm2_kernel.cuh"
}
# 1 "/tmp/tmpxft_00001939_00000000-1_imageDenoising.cudafe1.stub.c"
static void __sti____cudaRegisterAll_49_tmpxft_00001939_00000000_4_imageDenoising_cpp1_ii__Z3Maxff(void) { __cudaFatCubinHandle = __cudaRegisterFatBinary((void*)&__fatDeviceText); atexit(__cudaUnregisterBinaryUtil); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(TColor *, int, int, float, float))NLM2diag), (char*)"_Z8NLM2diagPjiiff", "_Z8NLM2diagPjiiff", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(TColor *, int, int, float, float))NLM2), (char*)"_Z4NLM2Pjiiff", "_Z4NLM2Pjiiff", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(TColor *, unsigned, unsigned, float, float))NLMdiag), (char*)"_Z7NLMdiagPjjjff", "_Z7NLMdiagPjjjff", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(TColor *, int, int, float, float))NLM), (char*)"_Z3NLMPjiiff", "_Z3NLMPjiiff", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(TColor *, int, int, float, float))KNNdiag), (char*)"_Z7KNNdiagPjiiff", "_Z7KNNdiagPjiiff", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(TColor *, int, int, float, float))KNN), (char*)"_Z3KNNPjiiff", "_Z3KNNPjiiff", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(TColor *, int, int))Copy), (char*)"_Z4CopyPjii", "_Z4CopyPjii", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterTexture(__cudaFatCubinHandle, (const struct textureReference*)&texImage, (const void**)"texImage", "texImage", 2, 1, 0); }
# 1 "/tmp/tmpxft_00001939_00000000-1_imageDenoising.cudafe1.stub.c" 2
