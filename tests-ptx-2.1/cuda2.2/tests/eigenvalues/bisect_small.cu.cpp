# 1 "/tmp/tmpxft_000016c7_00000000-1_bisect_small.cudafe1.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/tmp/tmpxft_000016c7_00000000-1_bisect_small.cudafe1.cpp"
# 1 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
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
# 128 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef unsigned long long CUdeviceptr; }
# 135 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef int CUdevice; }
# 136 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef struct CUctx_st *CUcontext; }
# 137 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef struct CUmod_st *CUmodule; }
# 138 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef struct CUfunc_st *CUfunction; }
# 139 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef struct CUarray_st *CUarray; }
# 140 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef struct CUtexref_st *CUtexref; }
# 141 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef struct CUsurfref_st *CUsurfref; }
# 142 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef CUevent_st *CUevent; }
# 143 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef CUstream_st *CUstream; }
# 144 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef struct CUgraphicsResource_st *CUgraphicsResource; }
# 148 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 146 "/usr/local/cuda/bin/../include/cuda.h"
struct CUuuid_st {
# 147 "/usr/local/cuda/bin/../include/cuda.h"
char bytes[16];
# 148 "/usr/local/cuda/bin/../include/cuda.h"
} CUuuid; }
# 162 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 153 "/usr/local/cuda/bin/../include/cuda.h"
enum CUctx_flags_enum {
# 154 "/usr/local/cuda/bin/../include/cuda.h"
CU_CTX_SCHED_AUTO,
# 155 "/usr/local/cuda/bin/../include/cuda.h"
CU_CTX_SCHED_SPIN,
# 156 "/usr/local/cuda/bin/../include/cuda.h"
CU_CTX_SCHED_YIELD,
# 157 "/usr/local/cuda/bin/../include/cuda.h"
CU_CTX_SCHED_MASK,
# 158 "/usr/local/cuda/bin/../include/cuda.h"
CU_CTX_BLOCKING_SYNC,
# 159 "/usr/local/cuda/bin/../include/cuda.h"
CU_CTX_MAP_HOST = 8,
# 160 "/usr/local/cuda/bin/../include/cuda.h"
CU_CTX_LMEM_RESIZE_TO_MAX = 16,
# 161 "/usr/local/cuda/bin/../include/cuda.h"
CU_CTX_FLAGS_MASK = 31
# 162 "/usr/local/cuda/bin/../include/cuda.h"
} CUctx_flags; }
# 171 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 167 "/usr/local/cuda/bin/../include/cuda.h"
enum CUevent_flags_enum {
# 168 "/usr/local/cuda/bin/../include/cuda.h"
CU_EVENT_DEFAULT,
# 169 "/usr/local/cuda/bin/../include/cuda.h"
CU_EVENT_BLOCKING_SYNC,
# 170 "/usr/local/cuda/bin/../include/cuda.h"
CU_EVENT_DISABLE_TIMING
# 171 "/usr/local/cuda/bin/../include/cuda.h"
} CUevent_flags; }
# 185 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 176 "/usr/local/cuda/bin/../include/cuda.h"
enum CUarray_format_enum {
# 177 "/usr/local/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_UNSIGNED_INT8 = 1,
# 178 "/usr/local/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_UNSIGNED_INT16,
# 179 "/usr/local/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_UNSIGNED_INT32,
# 180 "/usr/local/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_SIGNED_INT8 = 8,
# 181 "/usr/local/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_SIGNED_INT16,
# 182 "/usr/local/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_SIGNED_INT32,
# 183 "/usr/local/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_HALF = 16,
# 184 "/usr/local/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_FLOAT = 32
# 185 "/usr/local/cuda/bin/../include/cuda.h"
} CUarray_format; }
# 195 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 190 "/usr/local/cuda/bin/../include/cuda.h"
enum CUaddress_mode_enum {
# 191 "/usr/local/cuda/bin/../include/cuda.h"
CU_TR_ADDRESS_MODE_WRAP,
# 192 "/usr/local/cuda/bin/../include/cuda.h"
CU_TR_ADDRESS_MODE_CLAMP,
# 193 "/usr/local/cuda/bin/../include/cuda.h"
CU_TR_ADDRESS_MODE_MIRROR,
# 194 "/usr/local/cuda/bin/../include/cuda.h"
CU_TR_ADDRESS_MODE_BORDER
# 195 "/usr/local/cuda/bin/../include/cuda.h"
} CUaddress_mode; }
# 203 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 200 "/usr/local/cuda/bin/../include/cuda.h"
enum CUfilter_mode_enum {
# 201 "/usr/local/cuda/bin/../include/cuda.h"
CU_TR_FILTER_MODE_POINT,
# 202 "/usr/local/cuda/bin/../include/cuda.h"
CU_TR_FILTER_MODE_LINEAR
# 203 "/usr/local/cuda/bin/../include/cuda.h"
} CUfilter_mode; }
# 246 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 208 "/usr/local/cuda/bin/../include/cuda.h"
enum CUdevice_attribute_enum {
# 209 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_THREADS_PER_BLOCK = 1,
# 210 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_X,
# 211 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Y,
# 212 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Z,
# 213 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_X,
# 214 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Y,
# 215 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Z,
# 216 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_SHARED_MEMORY_PER_BLOCK,
# 217 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_SHARED_MEMORY_PER_BLOCK = 8,
# 218 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_TOTAL_CONSTANT_MEMORY,
# 219 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_WARP_SIZE,
# 220 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_PITCH,
# 221 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_REGISTERS_PER_BLOCK,
# 222 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_REGISTERS_PER_BLOCK = 12,
# 223 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_CLOCK_RATE,
# 224 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_TEXTURE_ALIGNMENT,
# 225 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_GPU_OVERLAP,
# 226 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MULTIPROCESSOR_COUNT,
# 227 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_KERNEL_EXEC_TIMEOUT,
# 228 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_INTEGRATED,
# 229 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_CAN_MAP_HOST_MEMORY,
# 230 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_COMPUTE_MODE,
# 231 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE1D_WIDTH,
# 232 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_WIDTH,
# 233 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_HEIGHT,
# 234 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_WIDTH,
# 235 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_HEIGHT,
# 236 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_DEPTH,
# 237 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_ARRAY_WIDTH,
# 238 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_ARRAY_HEIGHT,
# 239 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_ARRAY_NUMSLICES,
# 240 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_SURFACE_ALIGNMENT,
# 241 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_CONCURRENT_KERNELS,
# 242 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_ECC_ENABLED,
# 243 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_PCI_BUS_ID,
# 244 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_PCI_DEVICE_ID,
# 245 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_TCC_DRIVER
# 246 "/usr/local/cuda/bin/../include/cuda.h"
} CUdevice_attribute; }
# 262 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 251 "/usr/local/cuda/bin/../include/cuda.h"
struct CUdevprop_st {
# 252 "/usr/local/cuda/bin/../include/cuda.h"
int maxThreadsPerBlock;
# 253 "/usr/local/cuda/bin/../include/cuda.h"
int maxThreadsDim[3];
# 254 "/usr/local/cuda/bin/../include/cuda.h"
int maxGridSize[3];
# 255 "/usr/local/cuda/bin/../include/cuda.h"
int sharedMemPerBlock;
# 256 "/usr/local/cuda/bin/../include/cuda.h"
int totalConstantMemory;
# 257 "/usr/local/cuda/bin/../include/cuda.h"
int SIMDWidth;
# 258 "/usr/local/cuda/bin/../include/cuda.h"
int memPitch;
# 259 "/usr/local/cuda/bin/../include/cuda.h"
int regsPerBlock;
# 260 "/usr/local/cuda/bin/../include/cuda.h"
int clockRate;
# 261 "/usr/local/cuda/bin/../include/cuda.h"
int textureAlign;
# 262 "/usr/local/cuda/bin/../include/cuda.h"
} CUdevprop; }
# 317 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 267 "/usr/local/cuda/bin/../include/cuda.h"
enum CUfunction_attribute_enum {
# 273 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_MAX_THREADS_PER_BLOCK,
# 280 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_SHARED_SIZE_BYTES,
# 286 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_CONST_SIZE_BYTES,
# 291 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_LOCAL_SIZE_BYTES,
# 296 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_NUM_REGS,
# 305 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_PTX_VERSION,
# 314 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_BINARY_VERSION,
# 316 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_MAX
# 317 "/usr/local/cuda/bin/../include/cuda.h"
} CUfunction_attribute; }
# 326 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 322 "/usr/local/cuda/bin/../include/cuda.h"
enum CUfunc_cache_enum {
# 323 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_CACHE_PREFER_NONE,
# 324 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_CACHE_PREFER_SHARED,
# 325 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_CACHE_PREFER_L1
# 326 "/usr/local/cuda/bin/../include/cuda.h"
} CUfunc_cache; }
# 335 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 331 "/usr/local/cuda/bin/../include/cuda.h"
enum CUmemorytype_enum {
# 332 "/usr/local/cuda/bin/../include/cuda.h"
CU_MEMORYTYPE_HOST = 1,
# 333 "/usr/local/cuda/bin/../include/cuda.h"
CU_MEMORYTYPE_DEVICE,
# 334 "/usr/local/cuda/bin/../include/cuda.h"
CU_MEMORYTYPE_ARRAY
# 335 "/usr/local/cuda/bin/../include/cuda.h"
} CUmemorytype; }
# 344 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 340 "/usr/local/cuda/bin/../include/cuda.h"
enum CUcomputemode_enum {
# 341 "/usr/local/cuda/bin/../include/cuda.h"
CU_COMPUTEMODE_DEFAULT,
# 342 "/usr/local/cuda/bin/../include/cuda.h"
CU_COMPUTEMODE_EXCLUSIVE,
# 343 "/usr/local/cuda/bin/../include/cuda.h"
CU_COMPUTEMODE_PROHIBITED
# 344 "/usr/local/cuda/bin/../include/cuda.h"
} CUcomputemode; }
# 436 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 349 "/usr/local/cuda/bin/../include/cuda.h"
enum CUjit_option_enum {
# 355 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_MAX_REGISTERS,
# 368 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_THREADS_PER_BLOCK,
# 375 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_WALL_TIME,
# 383 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_INFO_LOG_BUFFER,
# 391 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_INFO_LOG_BUFFER_SIZE_BYTES,
# 399 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_ERROR_LOG_BUFFER,
# 407 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_ERROR_LOG_BUFFER_SIZE_BYTES,
# 414 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_OPTIMIZATION_LEVEL,
# 421 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_TARGET_FROM_CUCONTEXT,
# 427 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_TARGET,
# 434 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_FALLBACK_STRATEGY
# 436 "/usr/local/cuda/bin/../include/cuda.h"
} CUjit_option; }
# 449 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 441 "/usr/local/cuda/bin/../include/cuda.h"
enum CUjit_target_enum {
# 443 "/usr/local/cuda/bin/../include/cuda.h"
CU_TARGET_COMPUTE_10,
# 444 "/usr/local/cuda/bin/../include/cuda.h"
CU_TARGET_COMPUTE_11,
# 445 "/usr/local/cuda/bin/../include/cuda.h"
CU_TARGET_COMPUTE_12,
# 446 "/usr/local/cuda/bin/../include/cuda.h"
CU_TARGET_COMPUTE_13,
# 447 "/usr/local/cuda/bin/../include/cuda.h"
CU_TARGET_COMPUTE_20,
# 448 "/usr/local/cuda/bin/../include/cuda.h"
CU_TARGET_COMPUTE_21
# 449 "/usr/local/cuda/bin/../include/cuda.h"
} CUjit_target; }
# 460 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 454 "/usr/local/cuda/bin/../include/cuda.h"
enum CUjit_fallback_enum {
# 456 "/usr/local/cuda/bin/../include/cuda.h"
CU_PREFER_PTX,
# 458 "/usr/local/cuda/bin/../include/cuda.h"
CU_PREFER_BINARY
# 460 "/usr/local/cuda/bin/../include/cuda.h"
} CUjit_fallback; }
# 467 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 465 "/usr/local/cuda/bin/../include/cuda.h"
enum CUgraphicsRegisterFlags_enum {
# 466 "/usr/local/cuda/bin/../include/cuda.h"
CU_GRAPHICS_REGISTER_FLAGS_NONE
# 467 "/usr/local/cuda/bin/../include/cuda.h"
} CUgraphicsRegisterFlags; }
# 476 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 472 "/usr/local/cuda/bin/../include/cuda.h"
enum CUgraphicsMapResourceFlags_enum {
# 473 "/usr/local/cuda/bin/../include/cuda.h"
CU_GRAPHICS_MAP_RESOURCE_FLAGS_NONE,
# 474 "/usr/local/cuda/bin/../include/cuda.h"
CU_GRAPHICS_MAP_RESOURCE_FLAGS_READ_ONLY,
# 475 "/usr/local/cuda/bin/../include/cuda.h"
CU_GRAPHICS_MAP_RESOURCE_FLAGS_WRITE_DISCARD
# 476 "/usr/local/cuda/bin/../include/cuda.h"
} CUgraphicsMapResourceFlags; }
# 488 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 481 "/usr/local/cuda/bin/../include/cuda.h"
enum CUarray_cubemap_face_enum {
# 482 "/usr/local/cuda/bin/../include/cuda.h"
CU_CUBEMAP_FACE_POSITIVE_X,
# 483 "/usr/local/cuda/bin/../include/cuda.h"
CU_CUBEMAP_FACE_NEGATIVE_X,
# 484 "/usr/local/cuda/bin/../include/cuda.h"
CU_CUBEMAP_FACE_POSITIVE_Y,
# 485 "/usr/local/cuda/bin/../include/cuda.h"
CU_CUBEMAP_FACE_NEGATIVE_Y,
# 486 "/usr/local/cuda/bin/../include/cuda.h"
CU_CUBEMAP_FACE_POSITIVE_Z,
# 487 "/usr/local/cuda/bin/../include/cuda.h"
CU_CUBEMAP_FACE_NEGATIVE_Z
# 488 "/usr/local/cuda/bin/../include/cuda.h"
} CUarray_cubemap_face; }
# 497 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 493 "/usr/local/cuda/bin/../include/cuda.h"
enum CUlimit_enum {
# 494 "/usr/local/cuda/bin/../include/cuda.h"
CU_LIMIT_STACK_SIZE,
# 495 "/usr/local/cuda/bin/../include/cuda.h"
CU_LIMIT_PRINTF_FIFO_SIZE,
# 496 "/usr/local/cuda/bin/../include/cuda.h"
CU_LIMIT_MALLOC_HEAP_SIZE
# 497 "/usr/local/cuda/bin/../include/cuda.h"
} CUlimit; }
# 728 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 502 "/usr/local/cuda/bin/../include/cuda.h"
enum cudaError_enum {
# 508 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_SUCCESS,
# 514 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_INVALID_VALUE,
# 520 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_OUT_OF_MEMORY,
# 526 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_NOT_INITIALIZED,
# 531 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_DEINITIALIZED,
# 538 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_NO_DEVICE = 100,
# 544 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_INVALID_DEVICE,
# 551 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_INVALID_IMAGE = 200,
# 561 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_INVALID_CONTEXT,
# 570 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_CONTEXT_ALREADY_CURRENT,
# 575 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_MAP_FAILED = 205,
# 580 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_UNMAP_FAILED,
# 586 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_ARRAY_IS_MAPPED,
# 591 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_ALREADY_MAPPED,
# 599 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_NO_BINARY_FOR_GPU,
# 604 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_ALREADY_ACQUIRED,
# 609 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_NOT_MAPPED,
# 615 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_NOT_MAPPED_AS_ARRAY,
# 621 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_NOT_MAPPED_AS_POINTER,
# 627 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_ECC_UNCORRECTABLE,
# 633 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_UNSUPPORTED_LIMIT,
# 639 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_INVALID_SOURCE = 300,
# 644 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_FILE_NOT_FOUND,
# 649 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_SHARED_OBJECT_SYMBOL_NOT_FOUND,
# 654 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_SHARED_OBJECT_INIT_FAILED,
# 659 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_OPERATING_SYSTEM,
# 666 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_INVALID_HANDLE = 400,
# 673 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_NOT_FOUND = 500,
# 682 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_NOT_READY = 600,
# 693 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_LAUNCH_FAILED = 700,
# 704 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_LAUNCH_OUT_OF_RESOURCES,
# 715 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_LAUNCH_TIMEOUT,
# 721 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_LAUNCH_INCOMPATIBLE_TEXTURING,
# 727 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_UNKNOWN = 999
# 728 "/usr/local/cuda/bin/../include/cuda.h"
} CUresult; }
# 777 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 756 "/usr/local/cuda/bin/../include/cuda.h"
struct CUDA_MEMCPY2D_st {
# 757 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcXInBytes;
# 758 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcY;
# 760 "/usr/local/cuda/bin/../include/cuda.h"
CUmemorytype srcMemoryType;
# 761 "/usr/local/cuda/bin/../include/cuda.h"
const void *srcHost;
# 762 "/usr/local/cuda/bin/../include/cuda.h"
CUdeviceptr srcDevice;
# 763 "/usr/local/cuda/bin/../include/cuda.h"
CUarray srcArray;
# 764 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcPitch;
# 766 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstXInBytes;
# 767 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstY;
# 769 "/usr/local/cuda/bin/../include/cuda.h"
CUmemorytype dstMemoryType;
# 770 "/usr/local/cuda/bin/../include/cuda.h"
void *dstHost;
# 771 "/usr/local/cuda/bin/../include/cuda.h"
CUdeviceptr dstDevice;
# 772 "/usr/local/cuda/bin/../include/cuda.h"
CUarray dstArray;
# 773 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstPitch;
# 775 "/usr/local/cuda/bin/../include/cuda.h"
size_t WidthInBytes;
# 776 "/usr/local/cuda/bin/../include/cuda.h"
size_t Height;
# 777 "/usr/local/cuda/bin/../include/cuda.h"
} CUDA_MEMCPY2D; }
# 810 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 782 "/usr/local/cuda/bin/../include/cuda.h"
struct CUDA_MEMCPY3D_st {
# 783 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcXInBytes;
# 784 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcY;
# 785 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcZ;
# 786 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcLOD;
# 787 "/usr/local/cuda/bin/../include/cuda.h"
CUmemorytype srcMemoryType;
# 788 "/usr/local/cuda/bin/../include/cuda.h"
const void *srcHost;
# 789 "/usr/local/cuda/bin/../include/cuda.h"
CUdeviceptr srcDevice;
# 790 "/usr/local/cuda/bin/../include/cuda.h"
CUarray srcArray;
# 791 "/usr/local/cuda/bin/../include/cuda.h"
void *reserved0;
# 792 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcPitch;
# 793 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcHeight;
# 795 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstXInBytes;
# 796 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstY;
# 797 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstZ;
# 798 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstLOD;
# 799 "/usr/local/cuda/bin/../include/cuda.h"
CUmemorytype dstMemoryType;
# 800 "/usr/local/cuda/bin/../include/cuda.h"
void *dstHost;
# 801 "/usr/local/cuda/bin/../include/cuda.h"
CUdeviceptr dstDevice;
# 802 "/usr/local/cuda/bin/../include/cuda.h"
CUarray dstArray;
# 803 "/usr/local/cuda/bin/../include/cuda.h"
void *reserved1;
# 804 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstPitch;
# 805 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstHeight;
# 807 "/usr/local/cuda/bin/../include/cuda.h"
size_t WidthInBytes;
# 808 "/usr/local/cuda/bin/../include/cuda.h"
size_t Height;
# 809 "/usr/local/cuda/bin/../include/cuda.h"
size_t Depth;
# 810 "/usr/local/cuda/bin/../include/cuda.h"
} CUDA_MEMCPY3D; }
# 822 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 815 "/usr/local/cuda/bin/../include/cuda.h"
struct CUDA_ARRAY_DESCRIPTOR_st {
# 817 "/usr/local/cuda/bin/../include/cuda.h"
size_t Width;
# 818 "/usr/local/cuda/bin/../include/cuda.h"
size_t Height;
# 820 "/usr/local/cuda/bin/../include/cuda.h"
CUarray_format Format;
# 821 "/usr/local/cuda/bin/../include/cuda.h"
unsigned NumChannels;
# 822 "/usr/local/cuda/bin/../include/cuda.h"
} CUDA_ARRAY_DESCRIPTOR; }
# 836 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 827 "/usr/local/cuda/bin/../include/cuda.h"
struct CUDA_ARRAY3D_DESCRIPTOR_st {
# 829 "/usr/local/cuda/bin/../include/cuda.h"
size_t Width;
# 830 "/usr/local/cuda/bin/../include/cuda.h"
size_t Height;
# 831 "/usr/local/cuda/bin/../include/cuda.h"
size_t Depth;
# 833 "/usr/local/cuda/bin/../include/cuda.h"
CUarray_format Format;
# 834 "/usr/local/cuda/bin/../include/cuda.h"
unsigned NumChannels;
# 835 "/usr/local/cuda/bin/../include/cuda.h"
unsigned Flags;
# 836 "/usr/local/cuda/bin/../include/cuda.h"
} CUDA_ARRAY3D_DESCRIPTOR; }
# 917 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuInit(unsigned);
# 944 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDriverGetVersion(int *);
# 982 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceGet(CUdevice *, int);
# 1008 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceGetCount(int *);
# 1037 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceGetName(char *, int, CUdevice);
# 1066 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceComputeCapability(int *, int *, CUdevice);
# 1094 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceTotalMem_v2(size_t *, CUdevice);
# 1154 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceGetProperties(CUdevprop *, CUdevice);
# 1235 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceGetAttribute(int *, CUdevice_attribute, CUdevice);
# 1333 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxCreate_v2(CUcontext *, unsigned, CUdevice);
# 1367 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxDestroy(CUcontext);
# 1403 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxAttach(CUcontext *, unsigned);
# 1435 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxDetach(CUcontext);
# 1473 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxPushCurrent(CUcontext);
# 1515 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxPopCurrent(CUcontext *);
# 1545 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxGetDevice(CUdevice *);
# 1575 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxSynchronize();
# 1638 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxSetLimit(CUlimit, size_t);
# 1673 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxGetLimit(size_t *, CUlimit);
# 1716 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxGetCacheConfig(CUfunc_cache *);
# 1766 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxSetCacheConfig(CUfunc_cache);
# 1803 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxGetApiVersion(CUcontext, unsigned *);
# 1851 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleLoad(CUmodule *, const char *);
# 1885 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleLoadData(CUmodule *, const void *);
# 1963 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleLoadDataEx(CUmodule *, const void *, unsigned, CUjit_option *, void **);
# 2000 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleLoadFatBinary(CUmodule *, const void *);
# 2025 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleUnload(CUmodule);
# 2055 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleGetFunction(CUfunction *, CUmodule, const char *);
# 2089 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleGetGlobal_v2(CUdeviceptr *, size_t *, CUmodule, const char *);
# 2123 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleGetTexRef(CUtexref *, CUmodule, const char *);
# 2154 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleGetSurfRef(CUsurfref *, CUmodule, const char *);
# 2197 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemGetInfo_v2(size_t *, size_t *);
# 2230 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemAlloc_v2(CUdeviceptr *, size_t);
# 2291 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemAllocPitch_v2(CUdeviceptr *, size_t *, size_t, size_t, unsigned);
# 2320 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemFree_v2(CUdeviceptr);
# 2353 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemGetAddressRange_v2(CUdeviceptr *, size_t *, CUdeviceptr);
# 2392 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemAllocHost_v2(void **, size_t);
# 2422 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemFreeHost(void *);
# 2494 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemHostAlloc(void **, size_t, unsigned);
# 2532 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemHostGetDevicePointer_v2(CUdeviceptr *, void *, unsigned);
# 2557 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemHostGetFlags(unsigned *, void *);
# 2591 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyHtoD_v2(CUdeviceptr, const void *, size_t);
# 2624 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyDtoH_v2(void *, CUdeviceptr, size_t);
# 2657 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyDtoD_v2(CUdeviceptr, CUdeviceptr, size_t);
# 2691 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyDtoA_v2(CUarray, size_t, CUdeviceptr, size_t);
# 2727 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyAtoD_v2(CUdeviceptr, CUarray, size_t, size_t);
# 2761 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyHtoA_v2(CUarray, size_t, const void *, size_t);
# 2795 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyAtoH_v2(void *, CUarray, size_t, size_t);
# 2833 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyAtoA_v2(CUarray, size_t, CUarray, size_t, size_t);
# 2978 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpy2D_v2(const CUDA_MEMCPY2D *);
# 3121 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpy2DUnaligned_v2(const CUDA_MEMCPY2D *);
# 3273 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpy3D_v2(const CUDA_MEMCPY3D *);
# 3313 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyHtoDAsync_v2(CUdeviceptr, const void *, size_t, CUstream);
# 3353 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyDtoHAsync_v2(void *, CUdeviceptr, size_t, CUstream);
# 3390 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyDtoDAsync_v2(CUdeviceptr, CUdeviceptr, size_t, CUstream);
# 3432 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyHtoAAsync_v2(CUarray, size_t, const void *, size_t, CUstream);
# 3474 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyAtoHAsync_v2(void *, CUarray, size_t, size_t, CUstream);
# 3630 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpy2DAsync_v2(const CUDA_MEMCPY2D *, CUstream);
# 3790 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpy3DAsync_v2(const CUDA_MEMCPY3D *, CUstream);
# 3823 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD8_v2(CUdeviceptr, unsigned char, size_t);
# 3856 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD16_v2(CUdeviceptr, unsigned short, size_t);
# 3889 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD32_v2(CUdeviceptr, unsigned, size_t);
# 3927 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD2D8_v2(CUdeviceptr, size_t, unsigned char, size_t, size_t);
# 3965 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD2D16_v2(CUdeviceptr, size_t, unsigned short, size_t, size_t);
# 4003 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD2D32_v2(CUdeviceptr, size_t, unsigned, size_t, size_t);
# 4040 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD8Async(CUdeviceptr, unsigned char, size_t, CUstream);
# 4077 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD16Async(CUdeviceptr, unsigned short, size_t, CUstream);
# 4113 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD32Async(CUdeviceptr, unsigned, size_t, CUstream);
# 4155 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD2D8Async(CUdeviceptr, size_t, unsigned char, size_t, size_t, CUstream);
# 4197 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD2D16Async(CUdeviceptr, size_t, unsigned short, size_t, size_t, CUstream);
# 4239 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD2D32Async(CUdeviceptr, size_t, unsigned, size_t, size_t, CUstream);
# 4342 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuArrayCreate_v2(CUarray *, const CUDA_ARRAY_DESCRIPTOR *);
# 4375 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuArrayGetDescriptor_v2(CUDA_ARRAY_DESCRIPTOR *, CUarray);
# 4406 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuArrayDestroy(CUarray);
# 4508 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuArray3DCreate_v2(CUarray *, const CUDA_ARRAY3D_DESCRIPTOR *);
# 4544 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuArray3DGetDescriptor_v2(CUDA_ARRAY3D_DESCRIPTOR *, CUarray);
# 4582 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuStreamCreate(CUstream *, unsigned);
# 4622 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuStreamWaitEvent(CUstream, CUevent, unsigned);
# 4646 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuStreamQuery(CUstream);
# 4671 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuStreamSynchronize(CUstream);
# 4693 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuStreamDestroy(CUstream);
# 4741 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuEventCreate(CUevent *, unsigned);
# 4777 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuEventRecord(CUevent, CUstream);
# 4809 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuEventQuery(CUevent);
# 4843 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuEventSynchronize(CUevent);
# 4866 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuEventDestroy(CUevent);
# 4909 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuEventElapsedTime(float *, CUevent, CUevent);
# 4954 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuFuncSetBlockShape(CUfunction, int, int, int);
# 4985 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuFuncSetSharedSize(CUfunction, unsigned);
# 5042 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuFuncGetAttribute(int *, CUfunction_attribute, CUfunction);
# 5090 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuFuncSetCacheConfig(CUfunction, CUfunc_cache);
# 5119 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuParamSetSize(CUfunction, unsigned);
# 5149 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuParamSeti(CUfunction, int, unsigned);
# 5179 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuParamSetf(CUfunction, int, float);
# 5211 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuParamSetv(CUfunction, int, void *, unsigned);
# 5245 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuLaunch(CUfunction);
# 5281 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuLaunchGrid(CUfunction, int, int);
# 5321 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuLaunchGridAsync(CUfunction, int, int, CUstream);
# 5354 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuParamSetTexRef(CUfunction, int, CUtexref);
# 5395 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefSetArray(CUtexref, CUarray, unsigned);
# 5433 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefSetAddress_v2(size_t *, CUtexref, CUdeviceptr, size_t);
# 5474 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefSetAddress2D_v2(CUtexref, const CUDA_ARRAY_DESCRIPTOR *, CUdeviceptr, size_t);
# 5503 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefSetFormat(CUtexref, CUarray_format, int);
# 5541 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefSetAddressMode(CUtexref, int, CUaddress_mode);
# 5574 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefSetFilterMode(CUtexref, CUfilter_mode);
# 5606 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefSetFlags(CUtexref, unsigned);
# 5632 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefGetAddress_v2(CUdeviceptr *, CUtexref);
# 5658 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefGetArray(CUarray *, CUtexref);
# 5684 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefGetAddressMode(CUaddress_mode *, CUtexref, int);
# 5708 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefGetFilterMode(CUfilter_mode *, CUtexref);
# 5734 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefGetFormat(CUarray_format *, int *, CUtexref);
# 5757 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefGetFlags(unsigned *, CUtexref);
# 5791 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefCreate(CUtexref *);
# 5811 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefDestroy(CUtexref);
# 5849 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuSurfRefSetArray(CUsurfref, CUarray, unsigned);
# 5870 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuSurfRefGetArray(CUarray *, CUsurfref);
# 5911 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuGraphicsUnregisterResource(CUgraphicsResource);
# 5949 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuGraphicsSubResourceGetMappedArray(CUarray *, CUgraphicsResource, unsigned, unsigned);
# 5983 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuGraphicsResourceGetMappedPointer_v2(CUdeviceptr *, size_t *, CUgraphicsResource);
# 6024 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuGraphicsResourceSetMapFlags(CUgraphicsResource, unsigned);
# 6062 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuGraphicsMapResources(unsigned, CUgraphicsResource *, CUstream);
# 6097 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuGraphicsUnmapResources(unsigned, CUgraphicsResource *, CUstream);
# 6101 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuGetExportTable(const void **, const CUuuid *);
# 64 "sdk/cutil.h"
enum CUTBoolean {
# 66 "sdk/cutil.h"
CUTFalse,
# 67 "sdk/cutil.h"
CUTTrue
# 68 "sdk/cutil.h"
};
# 76 "sdk/cutil.h"
extern "C" void cutFree(void *);
# 94 "sdk/cutil.h"
extern "C" void cutCheckBankAccess(unsigned, unsigned, unsigned, unsigned, unsigned, unsigned, const char *, const int, const char *, const int);
# 107 "sdk/cutil.h"
extern "C" char *cutFindFilePath(const char *, const char *);
# 122 "sdk/cutil.h"
extern "C" CUTBoolean cutReadFilef(const char *, float **, unsigned *, bool = false);
# 138 "sdk/cutil.h"
extern "C" CUTBoolean cutReadFiled(const char *, double **, unsigned *, bool = false);
# 154 "sdk/cutil.h"
extern "C" CUTBoolean cutReadFilei(const char *, int **, unsigned *, bool = false);
# 169 "sdk/cutil.h"
extern "C" CUTBoolean cutReadFileui(const char *, unsigned **, unsigned *, bool = false);
# 185 "sdk/cutil.h"
extern "C" CUTBoolean cutReadFileb(const char *, char **, unsigned *, bool = false);
# 201 "sdk/cutil.h"
extern "C" CUTBoolean cutReadFileub(const char *, unsigned char **, unsigned *, bool = false);
# 215 "sdk/cutil.h"
extern "C" CUTBoolean cutWriteFilef(const char *, const float *, unsigned, const float, bool = false);
# 229 "sdk/cutil.h"
extern "C" CUTBoolean cutWriteFiled(const char *, const float *, unsigned, const double, bool = false);
# 241 "sdk/cutil.h"
extern "C" CUTBoolean cutWriteFilei(const char *, const int *, unsigned, bool = false);
# 253 "sdk/cutil.h"
extern "C" CUTBoolean cutWriteFileui(const char *, const unsigned *, unsigned, bool = false);
# 265 "sdk/cutil.h"
extern "C" CUTBoolean cutWriteFileb(const char *, const char *, unsigned, bool = false);
# 277 "sdk/cutil.h"
extern "C" CUTBoolean cutWriteFileub(const char *, const unsigned char *, unsigned, bool = false);
# 293 "sdk/cutil.h"
extern "C" CUTBoolean cutLoadPGMub(const char *, unsigned char **, unsigned *, unsigned *);
# 306 "sdk/cutil.h"
extern "C" CUTBoolean cutLoadPPMub(const char *, unsigned char **, unsigned *, unsigned *);
# 320 "sdk/cutil.h"
extern "C" CUTBoolean cutLoadPPM4ub(const char *, unsigned char **, unsigned *, unsigned *);
# 336 "sdk/cutil.h"
extern "C" CUTBoolean cutLoadPGMi(const char *, unsigned **, unsigned *, unsigned *);
# 352 "sdk/cutil.h"
extern "C" CUTBoolean cutLoadPGMs(const char *, unsigned short **, unsigned *, unsigned *);
# 367 "sdk/cutil.h"
extern "C" CUTBoolean cutLoadPGMf(const char *, float **, unsigned *, unsigned *);
# 379 "sdk/cutil.h"
extern "C" CUTBoolean cutSavePGMub(const char *, unsigned char *, unsigned, unsigned);
# 391 "sdk/cutil.h"
extern "C" CUTBoolean cutSavePPMub(const char *, unsigned char *, unsigned, unsigned);
# 404 "sdk/cutil.h"
extern "C" CUTBoolean cutSavePPM4ub(const char *, unsigned char *, unsigned, unsigned);
# 416 "sdk/cutil.h"
extern "C" CUTBoolean cutSavePGMi(const char *, unsigned *, unsigned, unsigned);
# 428 "sdk/cutil.h"
extern "C" CUTBoolean cutSavePGMs(const char *, unsigned short *, unsigned, unsigned);
# 440 "sdk/cutil.h"
extern "C" CUTBoolean cutSavePGMf(const char *, float *, unsigned, unsigned);
# 461 "sdk/cutil.h"
extern "C" CUTBoolean cutCheckCmdLineFlag(const int, const char **, const char *);
# 475 "sdk/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumenti(const int, const char **, const char *, int *);
# 489 "sdk/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumentf(const int, const char **, const char *, float *);
# 503 "sdk/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumentstr(const int, const char **, const char *, char **);
# 518 "sdk/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumentListstr(const int, const char **, const char *, char **, unsigned *);
# 532 "sdk/cutil.h"
extern "C" CUTBoolean cutCheckCondition(int, const char *, const int);
# 544 "sdk/cutil.h"
extern "C" CUTBoolean cutComparef(const float *, const float *, const unsigned);
# 557 "sdk/cutil.h"
extern "C" CUTBoolean cutComparei(const int *, const int *, const unsigned);
# 571 "sdk/cutil.h"
extern "C" CUTBoolean cutCompareuit(const unsigned *, const unsigned *, const unsigned, const float, const float);
# 584 "sdk/cutil.h"
extern "C" CUTBoolean cutCompareub(const unsigned char *, const unsigned char *, const unsigned);
# 599 "sdk/cutil.h"
extern "C" CUTBoolean cutCompareubt(const unsigned char *, const unsigned char *, const unsigned, const float, const float);
# 613 "sdk/cutil.h"
extern "C" CUTBoolean cutCompareube(const unsigned char *, const unsigned char *, const unsigned, const float);
# 627 "sdk/cutil.h"
extern "C" CUTBoolean cutComparefe(const float *, const float *, const unsigned, const float);
# 642 "sdk/cutil.h"
extern "C" CUTBoolean cutComparefet(const float *, const float *, const unsigned, const float, const float);
# 657 "sdk/cutil.h"
extern "C" CUTBoolean cutCompareL2fe(const float *, const float *, const unsigned, const float);
# 672 "sdk/cutil.h"
extern "C" CUTBoolean cutComparePPM(const char *, const char *, const float, const float, bool = false);
# 685 "sdk/cutil.h"
extern "C" CUTBoolean cutCreateTimer(unsigned *);
# 694 "sdk/cutil.h"
extern "C" CUTBoolean cutDeleteTimer(unsigned);
# 702 "sdk/cutil.h"
extern "C" CUTBoolean cutStartTimer(const unsigned);
# 710 "sdk/cutil.h"
extern "C" CUTBoolean cutStopTimer(const unsigned);
# 718 "sdk/cutil.h"
extern "C" CUTBoolean cutResetTimer(const unsigned);
# 727 "sdk/cutil.h"
extern "C" float cutGetTimerValue(const unsigned);
# 738 "sdk/cutil.h"
extern "C" float cutGetAverageTimerValue(const unsigned);
# 19 "sdk/cutil_inline_bankchecker.h"
inline void __cutilBankChecker(unsigned tidx, unsigned tidy, unsigned tidz, unsigned
# 20 "sdk/cutil_inline_bankchecker.h"
bdimx, unsigned bdimy, unsigned bdimz, char *
# 21 "sdk/cutil_inline_bankchecker.h"
aname, int index, char *file, int line)
# 22 "sdk/cutil_inline_bankchecker.h"
{
# 23 "sdk/cutil_inline_bankchecker.h"
cutCheckBankAccess(tidx, tidy, tidz, bdimx, bdimy, bdimz, file, line, aname, index);
# 24 "sdk/cutil_inline_bankchecker.h"
}
# 46 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { typedef float2 cuFloatComplex; }
# 48 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline float cuCrealf(cuFloatComplex x)
# 49 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 50 "/usr/local/cuda/bin/../include/cuComplex.h"
return x.x;
# 51 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 53 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline float cuCimagf(cuFloatComplex x)
# 54 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 55 "/usr/local/cuda/bin/../include/cuComplex.h"
return x.y;
# 56 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 58 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuFloatComplex make_cuFloatComplex(float
# 59 "/usr/local/cuda/bin/../include/cuComplex.h"
r, float i)
# 60 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 61 "/usr/local/cuda/bin/../include/cuComplex.h"
cuFloatComplex res;
# 62 "/usr/local/cuda/bin/../include/cuComplex.h"
(res.x) = r;
# 63 "/usr/local/cuda/bin/../include/cuComplex.h"
(res.y) = i;
# 64 "/usr/local/cuda/bin/../include/cuComplex.h"
return res;
# 65 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 67 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuFloatComplex cuConjf(cuFloatComplex x)
# 68 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 69 "/usr/local/cuda/bin/../include/cuComplex.h"
return make_cuFloatComplex(cuCrealf(x), -cuCimagf(x));
# 70 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 71 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuFloatComplex cuCaddf(cuFloatComplex x, cuFloatComplex
# 72 "/usr/local/cuda/bin/../include/cuComplex.h"
y)
# 73 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 74 "/usr/local/cuda/bin/../include/cuComplex.h"
return make_cuFloatComplex(cuCrealf(x) + cuCrealf(y), cuCimagf(x) + cuCimagf(y));
# 76 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 78 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuFloatComplex cuCsubf(cuFloatComplex x, cuFloatComplex
# 79 "/usr/local/cuda/bin/../include/cuComplex.h"
y)
# 80 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 81 "/usr/local/cuda/bin/../include/cuComplex.h"
return make_cuFloatComplex(cuCrealf(x) - cuCrealf(y), cuCimagf(x) - cuCimagf(y));
# 83 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 90 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuFloatComplex cuCmulf(cuFloatComplex x, cuFloatComplex
# 91 "/usr/local/cuda/bin/../include/cuComplex.h"
y)
# 92 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 93 "/usr/local/cuda/bin/../include/cuComplex.h"
cuFloatComplex prod;
# 94 "/usr/local/cuda/bin/../include/cuComplex.h"
prod = make_cuFloatComplex((cuCrealf(x) * cuCrealf(y)) - (cuCimagf(x) * cuCimagf(y)), (cuCrealf(x) * cuCimagf(y)) + (cuCimagf(x) * cuCrealf(y)));
# 98 "/usr/local/cuda/bin/../include/cuComplex.h"
return prod;
# 99 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 106 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuFloatComplex cuCdivf(cuFloatComplex x, cuFloatComplex
# 107 "/usr/local/cuda/bin/../include/cuComplex.h"
y)
# 108 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 109 "/usr/local/cuda/bin/../include/cuComplex.h"
cuFloatComplex quot;
# 110 "/usr/local/cuda/bin/../include/cuComplex.h"
float s = (fabsf(cuCrealf(y)) + fabsf(cuCimagf(y)));
# 111 "/usr/local/cuda/bin/../include/cuComplex.h"
float oos = ((1.0F) / s);
# 112 "/usr/local/cuda/bin/../include/cuComplex.h"
float ars = (cuCrealf(x) * oos);
# 113 "/usr/local/cuda/bin/../include/cuComplex.h"
float ais = (cuCimagf(x) * oos);
# 114 "/usr/local/cuda/bin/../include/cuComplex.h"
float brs = (cuCrealf(y) * oos);
# 115 "/usr/local/cuda/bin/../include/cuComplex.h"
float bis = (cuCimagf(y) * oos);
# 116 "/usr/local/cuda/bin/../include/cuComplex.h"
s = ((brs * brs) + (bis * bis));
# 117 "/usr/local/cuda/bin/../include/cuComplex.h"
oos = ((1.0F) / s);
# 118 "/usr/local/cuda/bin/../include/cuComplex.h"
quot = make_cuFloatComplex(((ars * brs) + (ais * bis)) * oos, ((ais * brs) - (ars * bis)) * oos);
# 120 "/usr/local/cuda/bin/../include/cuComplex.h"
return quot;
# 121 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 131 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline float cuCabsf(cuFloatComplex x)
# 132 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 133 "/usr/local/cuda/bin/../include/cuComplex.h"
float a = cuCrealf(x);
# 134 "/usr/local/cuda/bin/../include/cuComplex.h"
float b = cuCimagf(x);
# 135 "/usr/local/cuda/bin/../include/cuComplex.h"
float v, w, t;
# 136 "/usr/local/cuda/bin/../include/cuComplex.h"
a = fabsf(a);
# 137 "/usr/local/cuda/bin/../include/cuComplex.h"
b = fabsf(b);
# 138 "/usr/local/cuda/bin/../include/cuComplex.h"
if (a > b) {
# 139 "/usr/local/cuda/bin/../include/cuComplex.h"
v = a;
# 140 "/usr/local/cuda/bin/../include/cuComplex.h"
w = b;
# 141 "/usr/local/cuda/bin/../include/cuComplex.h"
} else {
# 142 "/usr/local/cuda/bin/../include/cuComplex.h"
v = b;
# 143 "/usr/local/cuda/bin/../include/cuComplex.h"
w = a;
# 144 "/usr/local/cuda/bin/../include/cuComplex.h"
}
# 145 "/usr/local/cuda/bin/../include/cuComplex.h"
t = (w / v);
# 146 "/usr/local/cuda/bin/../include/cuComplex.h"
t = ((1.0F) + (t * t));
# 147 "/usr/local/cuda/bin/../include/cuComplex.h"
t = (v * sqrtf(t));
# 148 "/usr/local/cuda/bin/../include/cuComplex.h"
if (((v == (0.0F)) || (v > (3.402823466e+38F))) || (w > (3.402823466e+38F))) {
# 149 "/usr/local/cuda/bin/../include/cuComplex.h"
t = (v + w);
# 150 "/usr/local/cuda/bin/../include/cuComplex.h"
}
# 151 "/usr/local/cuda/bin/../include/cuComplex.h"
return t;
# 152 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 155 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { typedef double2 cuDoubleComplex; }
# 157 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline double cuCreal(cuDoubleComplex x)
# 158 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 159 "/usr/local/cuda/bin/../include/cuComplex.h"
return x.x;
# 160 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 162 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline double cuCimag(cuDoubleComplex x)
# 163 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 164 "/usr/local/cuda/bin/../include/cuComplex.h"
return x.y;
# 165 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 167 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuDoubleComplex make_cuDoubleComplex(double
# 168 "/usr/local/cuda/bin/../include/cuComplex.h"
r, double i)
# 169 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 170 "/usr/local/cuda/bin/../include/cuComplex.h"
cuDoubleComplex res;
# 171 "/usr/local/cuda/bin/../include/cuComplex.h"
(res.x) = r;
# 172 "/usr/local/cuda/bin/../include/cuComplex.h"
(res.y) = i;
# 173 "/usr/local/cuda/bin/../include/cuComplex.h"
return res;
# 174 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 176 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuDoubleComplex cuConj(cuDoubleComplex x)
# 177 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 178 "/usr/local/cuda/bin/../include/cuComplex.h"
return make_cuDoubleComplex(cuCreal(x), -cuCimag(x));
# 179 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 181 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuDoubleComplex cuCadd(cuDoubleComplex x, cuDoubleComplex
# 182 "/usr/local/cuda/bin/../include/cuComplex.h"
y)
# 183 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 184 "/usr/local/cuda/bin/../include/cuComplex.h"
return make_cuDoubleComplex(cuCreal(x) + cuCreal(y), cuCimag(x) + cuCimag(y));
# 186 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 188 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuDoubleComplex cuCsub(cuDoubleComplex x, cuDoubleComplex
# 189 "/usr/local/cuda/bin/../include/cuComplex.h"
y)
# 190 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 191 "/usr/local/cuda/bin/../include/cuComplex.h"
return make_cuDoubleComplex(cuCreal(x) - cuCreal(y), cuCimag(x) - cuCimag(y));
# 193 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 200 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuDoubleComplex cuCmul(cuDoubleComplex x, cuDoubleComplex
# 201 "/usr/local/cuda/bin/../include/cuComplex.h"
y)
# 202 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 203 "/usr/local/cuda/bin/../include/cuComplex.h"
cuDoubleComplex prod;
# 204 "/usr/local/cuda/bin/../include/cuComplex.h"
prod = make_cuDoubleComplex((cuCreal(x) * cuCreal(y)) - (cuCimag(x) * cuCimag(y)), (cuCreal(x) * cuCimag(y)) + (cuCimag(x) * cuCreal(y)));
# 208 "/usr/local/cuda/bin/../include/cuComplex.h"
return prod;
# 209 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 216 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuDoubleComplex cuCdiv(cuDoubleComplex x, cuDoubleComplex
# 217 "/usr/local/cuda/bin/../include/cuComplex.h"
y)
# 218 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 219 "/usr/local/cuda/bin/../include/cuComplex.h"
cuDoubleComplex quot;
# 220 "/usr/local/cuda/bin/../include/cuComplex.h"
double s = (fabs(cuCreal(y)) + fabs(cuCimag(y)));
# 221 "/usr/local/cuda/bin/../include/cuComplex.h"
double oos = ((1.0) / s);
# 222 "/usr/local/cuda/bin/../include/cuComplex.h"
double ars = (cuCreal(x) * oos);
# 223 "/usr/local/cuda/bin/../include/cuComplex.h"
double ais = (cuCimag(x) * oos);
# 224 "/usr/local/cuda/bin/../include/cuComplex.h"
double brs = (cuCreal(y) * oos);
# 225 "/usr/local/cuda/bin/../include/cuComplex.h"
double bis = (cuCimag(y) * oos);
# 226 "/usr/local/cuda/bin/../include/cuComplex.h"
s = ((brs * brs) + (bis * bis));
# 227 "/usr/local/cuda/bin/../include/cuComplex.h"
oos = ((1.0) / s);
# 228 "/usr/local/cuda/bin/../include/cuComplex.h"
quot = make_cuDoubleComplex(((ars * brs) + (ais * bis)) * oos, ((ais * brs) - (ars * bis)) * oos);
# 230 "/usr/local/cuda/bin/../include/cuComplex.h"
return quot;
# 231 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 239 "/usr/local/cuda/bin/../include/cuComplex.h"
extern "C" { static inline double cuCabs(cuDoubleComplex x)
# 240 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 241 "/usr/local/cuda/bin/../include/cuComplex.h"
double a = cuCreal(x);
# 242 "/usr/local/cuda/bin/../include/cuComplex.h"
double b = cuCimag(x);
# 243 "/usr/local/cuda/bin/../include/cuComplex.h"
double v, w, t;
# 244 "/usr/local/cuda/bin/../include/cuComplex.h"
a = fabs(a);
# 245 "/usr/local/cuda/bin/../include/cuComplex.h"
b = fabs(b);
# 246 "/usr/local/cuda/bin/../include/cuComplex.h"
if (a > b) {
# 247 "/usr/local/cuda/bin/../include/cuComplex.h"
v = a;
# 248 "/usr/local/cuda/bin/../include/cuComplex.h"
w = b;
# 249 "/usr/local/cuda/bin/../include/cuComplex.h"
} else {
# 250 "/usr/local/cuda/bin/../include/cuComplex.h"
v = b;
# 251 "/usr/local/cuda/bin/../include/cuComplex.h"
w = a;
# 252 "/usr/local/cuda/bin/../include/cuComplex.h"
}
# 253 "/usr/local/cuda/bin/../include/cuComplex.h"
t = (w / v);
# 254 "/usr/local/cuda/bin/../include/cuComplex.h"
t = ((1.0) + (t * t));
# 255 "/usr/local/cuda/bin/../include/cuComplex.h"
t = (v * sqrt(t));
# 256 "/usr/local/cuda/bin/../include/cuComplex.h"
if (((v == (0.0)) || (v > (1.797693134862315708e+308))) || (w > (1.797693134862315708e+308)))
# 257 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 258 "/usr/local/cuda/bin/../include/cuComplex.h"
t = (v + w);
# 259 "/usr/local/cuda/bin/../include/cuComplex.h"
}
# 260 "/usr/local/cuda/bin/../include/cuComplex.h"
return t;
# 261 "/usr/local/cuda/bin/../include/cuComplex.h"
} }
# 268 "/usr/local/cuda/bin/../include/cuComplex.h"
typedef cuFloatComplex cuComplex;
# 269 "/usr/local/cuda/bin/../include/cuComplex.h"
static inline cuComplex make_cuComplex(float x, float
# 270 "/usr/local/cuda/bin/../include/cuComplex.h"
y)
# 271 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 272 "/usr/local/cuda/bin/../include/cuComplex.h"
return make_cuFloatComplex(x, y);
# 273 "/usr/local/cuda/bin/../include/cuComplex.h"
}
# 276 "/usr/local/cuda/bin/../include/cuComplex.h"
static inline cuDoubleComplex cuComplexFloatToDouble(cuFloatComplex
# 277 "/usr/local/cuda/bin/../include/cuComplex.h"
c)
# 278 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 279 "/usr/local/cuda/bin/../include/cuComplex.h"
return make_cuDoubleComplex((double)cuCrealf(c), (double)cuCimagf(c));
# 280 "/usr/local/cuda/bin/../include/cuComplex.h"
}
# 282 "/usr/local/cuda/bin/../include/cuComplex.h"
static inline cuFloatComplex cuComplexDoubleToFloat(cuDoubleComplex
# 283 "/usr/local/cuda/bin/../include/cuComplex.h"
c)
# 284 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 285 "/usr/local/cuda/bin/../include/cuComplex.h"
return make_cuFloatComplex((float)cuCreal(c), (float)cuCimag(c));
# 286 "/usr/local/cuda/bin/../include/cuComplex.h"
}
# 289 "/usr/local/cuda/bin/../include/cuComplex.h"
static inline cuComplex cuCfmaf(cuComplex x, cuComplex y, cuComplex d)
# 290 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 291 "/usr/local/cuda/bin/../include/cuComplex.h"
float real_res;
# 292 "/usr/local/cuda/bin/../include/cuComplex.h"
float imag_res;
# 294 "/usr/local/cuda/bin/../include/cuComplex.h"
real_res = ((cuCrealf(x) * cuCrealf(y)) + cuCrealf(d));
# 295 "/usr/local/cuda/bin/../include/cuComplex.h"
imag_res = ((cuCrealf(x) * cuCimagf(y)) + cuCimagf(d));
# 297 "/usr/local/cuda/bin/../include/cuComplex.h"
real_res = ((-(cuCimagf(x) * cuCimagf(y))) + real_res);
# 298 "/usr/local/cuda/bin/../include/cuComplex.h"
imag_res = ((cuCimagf(x) * cuCrealf(y)) + imag_res);
# 300 "/usr/local/cuda/bin/../include/cuComplex.h"
return make_cuComplex(real_res, imag_res);
# 301 "/usr/local/cuda/bin/../include/cuComplex.h"
}
# 303 "/usr/local/cuda/bin/../include/cuComplex.h"
static inline cuDoubleComplex cuCfma(cuDoubleComplex x, cuDoubleComplex y, cuDoubleComplex d)
# 304 "/usr/local/cuda/bin/../include/cuComplex.h"
{
# 305 "/usr/local/cuda/bin/../include/cuComplex.h"
double real_res;
# 306 "/usr/local/cuda/bin/../include/cuComplex.h"
double imag_res;
# 308 "/usr/local/cuda/bin/../include/cuComplex.h"
real_res = ((cuCreal(x) * cuCreal(y)) + cuCreal(d));
# 309 "/usr/local/cuda/bin/../include/cuComplex.h"
imag_res = ((cuCreal(x) * cuCimag(y)) + cuCimag(d));
# 311 "/usr/local/cuda/bin/../include/cuComplex.h"
real_res = ((-(cuCimag(x) * cuCimag(y))) + real_res);
# 312 "/usr/local/cuda/bin/../include/cuComplex.h"
imag_res = ((cuCimag(x) * cuCreal(y)) + imag_res);
# 314 "/usr/local/cuda/bin/../include/cuComplex.h"
return make_cuDoubleComplex(real_res, imag_res);
# 315 "/usr/local/cuda/bin/../include/cuComplex.h"
}
# 72 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" { typedef
# 61 "/usr/local/cuda/bin/../include/cufft.h"
enum cufftResult_t {
# 62 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_SUCCESS,
# 63 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_INVALID_PLAN,
# 64 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_ALLOC_FAILED,
# 65 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_INVALID_TYPE,
# 66 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_INVALID_VALUE,
# 67 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_INTERNAL_ERROR,
# 68 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_EXEC_FAILED,
# 69 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_SETUP_FAILED,
# 70 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_INVALID_SIZE,
# 71 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_UNALIGNED_DATA
# 72 "/usr/local/cuda/bin/../include/cufft.h"
} cufftResult; }
# 77 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" { typedef unsigned cufftHandle; }
# 81 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" { typedef float cufftReal; }
# 82 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" { typedef double cufftDoubleReal; }
# 87 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" { typedef cuComplex cufftComplex; }
# 88 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" { typedef cuDoubleComplex cufftDoubleComplex; }
# 102 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" { typedef
# 95 "/usr/local/cuda/bin/../include/cufft.h"
enum cufftType_t {
# 96 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_R2C = 42,
# 97 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_C2R = 44,
# 98 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_C2C = 41,
# 99 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_D2Z = 106,
# 100 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_Z2D = 108,
# 101 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_Z2Z = 105
# 102 "/usr/local/cuda/bin/../include/cufft.h"
} cufftType; }
# 131 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" { typedef
# 126 "/usr/local/cuda/bin/../include/cufft.h"
enum cufftCompatibility_t {
# 127 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_COMPATIBILITY_NATIVE,
# 128 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_COMPATIBILITY_FFTW_PADDING,
# 129 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_COMPATIBILITY_FFTW_ASYMMETRIC,
# 130 "/usr/local/cuda/bin/../include/cufft.h"
CUFFT_COMPATIBILITY_FFTW_ALL
# 131 "/usr/local/cuda/bin/../include/cufft.h"
} cufftCompatibility; }
# 135 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftPlan1d(cufftHandle *, int, cufftType, int);
# 140 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftPlan2d(cufftHandle *, int, int, cufftType);
# 144 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftPlan3d(cufftHandle *, int, int, int, cufftType);
# 148 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftPlanMany(cufftHandle *, int, int *, int *, int, int, int *, int, int, cufftType, int);
# 156 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftDestroy(cufftHandle);
# 158 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftExecC2C(cufftHandle, cufftComplex *, cufftComplex *, int);
# 163 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftExecR2C(cufftHandle, cufftReal *, cufftComplex *);
# 167 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftExecC2R(cufftHandle, cufftComplex *, cufftReal *);
# 171 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftExecZ2Z(cufftHandle, cufftDoubleComplex *, cufftDoubleComplex *, int);
# 176 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftExecD2Z(cufftHandle, cufftDoubleReal *, cufftDoubleComplex *);
# 180 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftExecZ2D(cufftHandle, cufftDoubleComplex *, cufftDoubleReal *);
# 184 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftSetStream(cufftHandle, cudaStream_t);
# 187 "/usr/local/cuda/bin/../include/cufft.h"
extern "C" cufftResult cufftSetCompatibilityMode(cufftHandle, cufftCompatibility);
# 22 "sdk/cutil_inline_runtime.h"
inline void __cutilCondition(int val, char *file, int line)
# 23 "sdk/cutil_inline_runtime.h"
{
# 24 "sdk/cutil_inline_runtime.h"
if ((CUTFalse) == (cutCheckCondition(val, file, line))) {
# 25 "sdk/cutil_inline_runtime.h"
exit(1);
# 26 "sdk/cutil_inline_runtime.h"
}
# 27 "sdk/cutil_inline_runtime.h"
}
# 29 "sdk/cutil_inline_runtime.h"
inline void __cutilExit(int argc, char **argv)
# 30 "sdk/cutil_inline_runtime.h"
{
# 31 "sdk/cutil_inline_runtime.h"
if (!(cutCheckCmdLineFlag(argc, (const char **)argv, "noprompt"))) {
# 32 "sdk/cutil_inline_runtime.h"
printf("\nPress ENTER to exit...\n");
# 33 "sdk/cutil_inline_runtime.h"
fflush(stdout);
# 34 "sdk/cutil_inline_runtime.h"
fflush(stderr);
# 35 "sdk/cutil_inline_runtime.h"
getchar();
# 36 "sdk/cutil_inline_runtime.h"
}
# 37 "sdk/cutil_inline_runtime.h"
exit(0);
# 38 "sdk/cutil_inline_runtime.h"
}
# 41 "sdk/cutil_inline_runtime.h"
inline int cutGetMaxGflopsDeviceId()
# 42 "sdk/cutil_inline_runtime.h"
{
# 43 "sdk/cutil_inline_runtime.h"
int device_count = 0;
# 44 "sdk/cutil_inline_runtime.h"
cudaGetDeviceCount(&device_count);
# 46 "sdk/cutil_inline_runtime.h"
cudaDeviceProp device_properties;
# 47 "sdk/cutil_inline_runtime.h"
int max_gflops_device = 0;
# 48 "sdk/cutil_inline_runtime.h"
int max_gflops = 0;
# 50 "sdk/cutil_inline_runtime.h"
int current_device = 0;
# 51 "sdk/cutil_inline_runtime.h"
cudaGetDeviceProperties(&device_properties, current_device);
# 52 "sdk/cutil_inline_runtime.h"
max_gflops = ((device_properties.multiProcessorCount) * (device_properties.clockRate));
# 53 "sdk/cutil_inline_runtime.h"
++current_device;
# 55 "sdk/cutil_inline_runtime.h"
while (current_device < device_count)
# 56 "sdk/cutil_inline_runtime.h"
{
# 57 "sdk/cutil_inline_runtime.h"
cudaGetDeviceProperties(&device_properties, current_device);
# 58 "sdk/cutil_inline_runtime.h"
int gflops = ((device_properties.multiProcessorCount) * (device_properties.clockRate));
# 59 "sdk/cutil_inline_runtime.h"
if (gflops > max_gflops)
# 60 "sdk/cutil_inline_runtime.h"
{
# 61 "sdk/cutil_inline_runtime.h"
max_gflops = gflops;
# 62 "sdk/cutil_inline_runtime.h"
max_gflops_device = current_device;
# 63 "sdk/cutil_inline_runtime.h"
}
# 64 "sdk/cutil_inline_runtime.h"
++current_device;
# 65 "sdk/cutil_inline_runtime.h"
}
# 67 "sdk/cutil_inline_runtime.h"
return max_gflops_device;
# 68 "sdk/cutil_inline_runtime.h"
}
# 70 "sdk/cutil_inline_runtime.h"
inline void __cudaSafeCallNoSync(cudaError err, const char *file, const int line)
# 71 "sdk/cutil_inline_runtime.h"
{
# 72 "sdk/cutil_inline_runtime.h"
if ((cudaSuccess) != err) {
# 73 "sdk/cutil_inline_runtime.h"
fprintf(stderr, "cudaSafeCallNoSync() Runtime API error in file <%s>, line %i : %s.\n", file, line, cudaGetErrorString(err));
# 75 "sdk/cutil_inline_runtime.h"
exit(-1);
# 76 "sdk/cutil_inline_runtime.h"
}
# 77 "sdk/cutil_inline_runtime.h"
}
# 79 "sdk/cutil_inline_runtime.h"
inline void __cudaSafeCall(cudaError err, const char *file, const int line)
# 80 "sdk/cutil_inline_runtime.h"
{
# 81 "sdk/cutil_inline_runtime.h"
if ((cudaSuccess) != err) {
# 82 "sdk/cutil_inline_runtime.h"
fprintf(stderr, "cudaSafeCall() Runtime API error in file <%s>, line %i : %s.\n", file, line, cudaGetErrorString(err));
# 84 "sdk/cutil_inline_runtime.h"
exit(-1);
# 85 "sdk/cutil_inline_runtime.h"
}
# 86 "sdk/cutil_inline_runtime.h"
}
# 88 "sdk/cutil_inline_runtime.h"
inline void __cudaSafeThreadSync(const char *file, const int line)
# 89 "sdk/cutil_inline_runtime.h"
{
# 90 "sdk/cutil_inline_runtime.h"
cudaError err = cudaThreadSynchronize();
# 91 "sdk/cutil_inline_runtime.h"
if ((cudaSuccess) != err) {
# 92 "sdk/cutil_inline_runtime.h"
fprintf(stderr, "cudaThreadSynchronize() Driver API error in file \'%s\' in line %i : %s.\n", file, line, cudaGetErrorString(err));
# 94 "sdk/cutil_inline_runtime.h"
exit(-1);
# 95 "sdk/cutil_inline_runtime.h"
}
# 96 "sdk/cutil_inline_runtime.h"
}
# 98 "sdk/cutil_inline_runtime.h"
inline void __cufftSafeCall(cufftResult err, const char *file, const int line)
# 99 "sdk/cutil_inline_runtime.h"
{
# 100 "sdk/cutil_inline_runtime.h"
if ((CUFFT_SUCCESS) != err) {
# 101 "sdk/cutil_inline_runtime.h"
fprintf(stderr, "cufftSafeCall() CUFFT error in file <%s>, line %i.\n", file, line);
# 103 "sdk/cutil_inline_runtime.h"
exit(-1);
# 104 "sdk/cutil_inline_runtime.h"
}
# 105 "sdk/cutil_inline_runtime.h"
}
# 107 "sdk/cutil_inline_runtime.h"
inline void __cutilCheckError(CUTBoolean err, const char *file, const int line)
# 108 "sdk/cutil_inline_runtime.h"
{
# 109 "sdk/cutil_inline_runtime.h"
if ((CUTTrue) != err) {
# 110 "sdk/cutil_inline_runtime.h"
fprintf(stderr, "CUTIL CUDA error in file <%s>, line %i.\n", file, line);
# 112 "sdk/cutil_inline_runtime.h"
exit(-1);
# 113 "sdk/cutil_inline_runtime.h"
}
# 114 "sdk/cutil_inline_runtime.h"
}
# 116 "sdk/cutil_inline_runtime.h"
inline void __cutilCheckMsg(const char *errorMessage, const char *file, const int line)
# 117 "sdk/cutil_inline_runtime.h"
{
# 118 "sdk/cutil_inline_runtime.h"
cudaError_t err = cudaGetLastError();
# 119 "sdk/cutil_inline_runtime.h"
if ((cudaSuccess) != err) {
# 120 "sdk/cutil_inline_runtime.h"
fprintf(stderr, "cutilCheckMsg() CUTIL CUDA error: %s in file <%s>, line %i : %s.\n", errorMessage, file, line, cudaGetErrorString(err));
# 122 "sdk/cutil_inline_runtime.h"
exit(-1);
# 123 "sdk/cutil_inline_runtime.h"
}
# 132 "sdk/cutil_inline_runtime.h"
}
# 133 "sdk/cutil_inline_runtime.h"
inline void __cutilSafeMalloc(void *pointer, const char *file, const int line)
# 134 "sdk/cutil_inline_runtime.h"
{
# 135 "sdk/cutil_inline_runtime.h"
if (!(pointer)) {
# 136 "sdk/cutil_inline_runtime.h"
fprintf(stderr, "cutilSafeMalloc host malloc failure in file <%s>, line %i\n", file, line);
# 138 "sdk/cutil_inline_runtime.h"
exit(-1);
# 139 "sdk/cutil_inline_runtime.h"
}
# 140 "sdk/cutil_inline_runtime.h"
}
# 145 "sdk/cutil_inline_runtime.h"
inline void cutilDeviceInit(int ARGC, char **ARGV)
# 146 "sdk/cutil_inline_runtime.h"
{
# 147 "sdk/cutil_inline_runtime.h"
int deviceCount;
# 148 "sdk/cutil_inline_runtime.h"
__cudaSafeCallNoSync(cudaGetDeviceCount(&deviceCount), "sdk/cutil_inline_runtime.h", 148);
# 149 "sdk/cutil_inline_runtime.h"
if (deviceCount == 0) {
# 150 "sdk/cutil_inline_runtime.h"
fprintf(stderr, "CUTIL CUDA error: no devices supporting CUDA.\n");
# 151 "sdk/cutil_inline_runtime.h"
exit(-1);
# 152 "sdk/cutil_inline_runtime.h"
}
# 153 "sdk/cutil_inline_runtime.h"
int dev = 0;
# 154 "sdk/cutil_inline_runtime.h"
cutGetCmdLineArgumenti(ARGC, (const char **)ARGV, "device", &dev);
# 155 "sdk/cutil_inline_runtime.h"
if (dev < 0) { dev = 0; } if (dev > (deviceCount - 1)) { dev = (deviceCount - 1); }
# 157 "sdk/cutil_inline_runtime.h"
cudaDeviceProp deviceProp;
# 158 "sdk/cutil_inline_runtime.h"
__cudaSafeCallNoSync(cudaGetDeviceProperties(&deviceProp, dev), "sdk/cutil_inline_runtime.h", 158);
# 159 "sdk/cutil_inline_runtime.h"
if ((deviceProp.major) < 1) {
# 160 "sdk/cutil_inline_runtime.h"
fprintf(stderr, "cutil error: device does not support CUDA.\n");
# 161 "sdk/cutil_inline_runtime.h"
exit(-1); }
# 163 "sdk/cutil_inline_runtime.h"
if ((cutCheckCmdLineFlag(ARGC, (const char **)ARGV, "quiet")) == (CUTFalse)) {
# 164 "sdk/cutil_inline_runtime.h"
fprintf(stderr, "Using device %d: %s\n", dev, deviceProp.name); }
# 165 "sdk/cutil_inline_runtime.h"
__cudaSafeCall(cudaSetDevice(dev), "sdk/cutil_inline_runtime.h", 165);
# 166 "sdk/cutil_inline_runtime.h"
}
# 171 "sdk/cutil_inline_runtime.h"
inline void cutilCudaCheckCtxLost(const char *errorMessage, const char *file, const int line)
# 172 "sdk/cutil_inline_runtime.h"
{
# 173 "sdk/cutil_inline_runtime.h"
cudaError_t err = cudaGetLastError();
# 174 "sdk/cutil_inline_runtime.h"
if ((cudaSuccess) != err) {
# 175 "sdk/cutil_inline_runtime.h"
fprintf(stderr, "CUDA error: %s in file \'%s\' in line %i : %s.\n", errorMessage, file, line, cudaGetErrorString(err));
# 177 "sdk/cutil_inline_runtime.h"
exit(-1);
# 178 "sdk/cutil_inline_runtime.h"
}
# 179 "sdk/cutil_inline_runtime.h"
err = cudaThreadSynchronize();
# 180 "sdk/cutil_inline_runtime.h"
if ((cudaSuccess) != err) {
# 181 "sdk/cutil_inline_runtime.h"
fprintf(stderr, "CCUDA error: %s in file \'%s\' in line %i : %s.\n", errorMessage, file, line, cudaGetErrorString(err));
# 183 "sdk/cutil_inline_runtime.h"
exit(-1);
# 184 "sdk/cutil_inline_runtime.h"
}
# 185 "sdk/cutil_inline_runtime.h"
}
# 16 "sdk/cutil_inline_drvapi.h"
inline void __cuSafeCallNoSync(CUresult err, const char *file, const int line)
# 17 "sdk/cutil_inline_drvapi.h"
{
# 18 "sdk/cutil_inline_drvapi.h"
if ((CUDA_SUCCESS) != err) {
# 19 "sdk/cutil_inline_drvapi.h"
fprintf(stderr, "cuSafeCallNoSync() Driver API error = %04d from file <%s>, line %i.\n", err, file, line);
# 21 "sdk/cutil_inline_drvapi.h"
exit(-1);
# 22 "sdk/cutil_inline_drvapi.h"
}
# 23 "sdk/cutil_inline_drvapi.h"
}
# 24 "sdk/cutil_inline_drvapi.h"
inline void __cuSafeCall(CUresult err, const char *file, const int line)
# 25 "sdk/cutil_inline_drvapi.h"
{
# 26 "sdk/cutil_inline_drvapi.h"
__cuSafeCallNoSync(err, file, line);
# 27 "sdk/cutil_inline_drvapi.h"
}
# 29 "sdk/cutil_inline_drvapi.h"
inline void __cuCtxSync(const char *file, const int line)
# 30 "sdk/cutil_inline_drvapi.h"
{
# 31 "sdk/cutil_inline_drvapi.h"
CUresult err = cuCtxSynchronize();
# 32 "sdk/cutil_inline_drvapi.h"
if ((CUDA_SUCCESS) != err) {
# 33 "sdk/cutil_inline_drvapi.h"
fprintf(stderr, "cuCtxSynchronize() API error = %04d in file <%s>, line %i.\n", err, file, line);
# 35 "sdk/cutil_inline_drvapi.h"
exit(-1);
# 36 "sdk/cutil_inline_drvapi.h"
}
# 37 "sdk/cutil_inline_drvapi.h"
}
# 39 "sdk/cutil_inline_drvapi.h"
inline void __cuCheckMsg(const char *msg, const char *file, const int line)
# 40 "sdk/cutil_inline_drvapi.h"
{
# 41 "sdk/cutil_inline_drvapi.h"
CUresult err = cuCtxSynchronize();
# 42 "sdk/cutil_inline_drvapi.h"
if ((CUDA_SUCCESS) != err) {
# 43 "sdk/cutil_inline_drvapi.h"
fprintf(stderr, "cutilDrvCheckMsg -> %s", msg);
# 44 "sdk/cutil_inline_drvapi.h"
fprintf(stderr, "cutilDrvCheckMsg -> cuCtxSynchronize API error = %04d in file <%s>, line %i.\n", err, file, line);
# 46 "sdk/cutil_inline_drvapi.h"
exit(-1);
# 47 "sdk/cutil_inline_drvapi.h"
}
# 48 "sdk/cutil_inline_drvapi.h"
}
# 54 "sdk/cutil_inline_drvapi.h"
inline void cutilDeviceInitDrv(int cuDevice, int ARGC, char **ARGV)
# 55 "sdk/cutil_inline_drvapi.h"
{
# 56 "sdk/cutil_inline_drvapi.h"
cuDevice = 0;
# 57 "sdk/cutil_inline_drvapi.h"
int deviceCount = 0;
# 58 "sdk/cutil_inline_drvapi.h"
CUresult err = cuInit(0);
# 59 "sdk/cutil_inline_drvapi.h"
if ((CUDA_SUCCESS) == err) {
# 60 "sdk/cutil_inline_drvapi.h"
__cuSafeCallNoSync(cuDeviceGetCount(&deviceCount), "sdk/cutil_inline_drvapi.h", 60); }
# 61 "sdk/cutil_inline_drvapi.h"
if (deviceCount == 0) {
# 62 "sdk/cutil_inline_drvapi.h"
fprintf(stderr, "CUTIL DeviceInitDrv error: no devices supporting CUDA\n");
# 63 "sdk/cutil_inline_drvapi.h"
exit(-1);
# 64 "sdk/cutil_inline_drvapi.h"
}
# 65 "sdk/cutil_inline_drvapi.h"
int dev = 0;
# 66 "sdk/cutil_inline_drvapi.h"
cutGetCmdLineArgumenti(ARGC, (const char **)ARGV, "device", &dev);
# 67 "sdk/cutil_inline_drvapi.h"
if (dev < 0) { dev = 0; }
# 68 "sdk/cutil_inline_drvapi.h"
if (dev > (deviceCount - 1)) { dev = (deviceCount - 1); }
# 69 "sdk/cutil_inline_drvapi.h"
__cuSafeCallNoSync(cuDeviceGet(&cuDevice, dev), "sdk/cutil_inline_drvapi.h", 69);
# 70 "sdk/cutil_inline_drvapi.h"
char name[100];
# 71 "sdk/cutil_inline_drvapi.h"
cuDeviceGetName(name, 100, cuDevice);
# 72 "sdk/cutil_inline_drvapi.h"
if ((cutCheckCmdLineFlag(ARGC, (const char **)ARGV, "quiet")) == (CUTFalse)) {
# 73 "sdk/cutil_inline_drvapi.h"
fprintf(stderr, "Using device %d: %s\n", dev, name); }
# 74 "sdk/cutil_inline_drvapi.h"
}
# 78 "sdk/cutil_inline_drvapi.h"
inline void cutilDrvCudaCheckCtxLost(const char *errorMessage, const char *file, const int line)
# 79 "sdk/cutil_inline_drvapi.h"
{
# 80 "sdk/cutil_inline_drvapi.h"
CUresult err = cuCtxSynchronize();
# 81 "sdk/cutil_inline_drvapi.h"
if ((CUDA_ERROR_INVALID_CONTEXT) != err) {
# 82 "sdk/cutil_inline_drvapi.h"
fprintf(stderr, "Cuda error: %s in file \'%s\' in line %i\n", errorMessage, file, line);
# 84 "sdk/cutil_inline_drvapi.h"
exit(-1);
# 85 "sdk/cutil_inline_drvapi.h"
}
# 86 "sdk/cutil_inline_drvapi.h"
err = cuCtxSynchronize();
# 87 "sdk/cutil_inline_drvapi.h"
if ((CUDA_SUCCESS) != err) {
# 88 "sdk/cutil_inline_drvapi.h"
fprintf(stderr, "Cuda error: %s in file \'%s\' in line %i\n", errorMessage, file, line);
# 90 "sdk/cutil_inline_drvapi.h"
exit(-1);
# 91 "sdk/cutil_inline_drvapi.h"
}
# 92 "sdk/cutil_inline_drvapi.h"
}
# 12 "sdk/cutil_inline.h"
inline void print_NVCC_min_spec(const char *sSDKsample, const char *sNVCCReq, const char *sDriverReq)
# 13 "sdk/cutil_inline.h"
{
# 14 "sdk/cutil_inline.h"
printf("CUDA %d.%02d Toolkit built this project.\n", 3020 / 1000, 3020 % 100);
# 15 "sdk/cutil_inline.h"
printf("  [ %s ] requirements:\n", sSDKsample);
# 16 "sdk/cutil_inline.h"
printf(" -> CUDA %s Toolkit\n", sNVCCReq);
# 17 "sdk/cutil_inline.h"
printf(" -> %s NVIDIA Display Driver.\n", sDriverReq);
# 18 "sdk/cutil_inline.h"
}
# 41 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/structs.h"
struct InputData {
# 44 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/structs.h"
float *a;
# 46 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/structs.h"
float *b;
# 49 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/structs.h"
float *g_a;
# 51 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/structs.h"
float *g_b;
# 54 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/structs.h"
float *g_b_raw;
# 56 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/structs.h"
};
# 58 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/structs.h"
struct ResultDataSmall {
# 61 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/structs.h"
float *eigenvalues;
# 64 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/structs.h"
float *g_left;
# 67 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/structs.h"
float *g_right;
# 70 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/structs.h"
unsigned *g_left_count;
# 73 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/structs.h"
unsigned *g_right_count;
# 76 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/structs.h"
unsigned *g_converged;
# 80 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/structs.h"
unsigned mat_size_f;
# 81 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/structs.h"
unsigned mat_size_ui;
# 83 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/structs.h"
float *zero_f;
# 84 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/structs.h"
unsigned *zero_ui;
# 85 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/structs.h"
};
# 88 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/structs.h"
struct ResultDataLarge {
# 91 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/structs.h"
unsigned *g_num_one;
# 95 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/structs.h"
unsigned *g_num_blocks_mult;
# 99 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/structs.h"
float *g_left_one;
# 103 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/structs.h"
float *g_right_one;
# 107 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/structs.h"
unsigned *g_pos_one;
# 111 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/structs.h"
float *g_left_mult;
# 115 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/structs.h"
float *g_right_mult;
# 119 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/structs.h"
unsigned *g_left_count_mult;
# 123 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/structs.h"
unsigned *g_right_count_mult;
# 127 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/structs.h"
unsigned *g_blocks_mult;
# 131 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/structs.h"
unsigned *g_blocks_mult_sum;
# 135 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/structs.h"
float *g_lambda_mult;
# 139 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/structs.h"
unsigned *g_pos_mult;
# 141 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/structs.h"
};
# 64 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/matlab.h"
extern "C" void writeTridiagSymMatlab(const char *, float *, float *, float *, const unsigned);
# 76 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/matlab.h"
template< class T, class S> void writeMatrixMatlab(T &, const char *, S *&, const unsigned);
# 88 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/matlab.h"
template< class T, class S> void writeVectorMatlab(T &, const char *, S *&, const unsigned);
# 102 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/matlab.h"
template< class T, class S> void
# 104 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/matlab.h"
writeMatrixMatlab(T &file, const char *mat_name, S *&
# 105 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/matlab.h"
mat, const unsigned mat_size) {
# 107 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/matlab.h"
const unsigned pitch = (sizeof(S) * mat_size);
# 109 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/matlab.h"
(file << mat_name) << " = [";
# 110 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/matlab.h"
for (unsigned i = (0); i < mat_size; ++i) {
# 111 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/matlab.h"
for (unsigned j = (0); j < mat_size; ++j) {
# 113 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/matlab.h"
(file << getMatrix(mat, pitch, i, j)) << " ";
# 114 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/matlab.h"
}
# 115 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/matlab.h"
if (i != (mat_size - (1))) {
# 116 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/matlab.h"
file << "; ";
# 117 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/matlab.h"
}
# 118 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/matlab.h"
}
# 119 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/matlab.h"
file << "];\n";
# 120 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/matlab.h"
}
# 129 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/matlab.h"
template< class T, class S> void
# 131 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/matlab.h"
writeVectorMatlab(T &file, const char *vec_name, S *&
# 132 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/matlab.h"
vec, const unsigned vec_len)
# 133 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/matlab.h"
{
# 134 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/matlab.h"
(file << vec_name) << " = [";
# 135 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/matlab.h"
for (unsigned i = (0); i < vec_len; ++i) {
# 136 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/matlab.h"
(file << (vec[i])) << " ";
# 137 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/matlab.h"
}
# 138 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/matlab.h"
file << "];\n";
# 139 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/matlab.h"
}
# 44 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/util.h"
template< class T> inline void
# 46 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/util.h"
freePtr(T *&ptr) {
# 48 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/util.h"
if (__null != ptr) {
# 49 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/util.h"
free(ptr);
# 50 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/util.h"
ptr = __null;
# 51 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/util.h"
}
# 52 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/util.h"
}
# 57 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/util.h"
template< class T> T
# 62 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/util.h"
min(const T &lhs, const T &rhs) {
# 64 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/util.h"
return (lhs < rhs) ? lhs : rhs;
# 65 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/util.h"
}
# 70 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/util.h"
template< class T> T
# 75 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/util.h"
max(const T &lhs, const T &rhs) {
# 77 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/util.h"
return (lhs < rhs) ? rhs : lhs;
# 78 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/util.h"
}
# 83 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/util.h"
template< class T> T
# 88 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/util.h"
sign_i(const T &val) {
# 89 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/util.h"
return (val < 0) ? (-1) : 1;
# 90 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/util.h"
}
# 99 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/util.h"
inline float sign_f(const float &val) {
# 100 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/util.h"
return (val < (0.0F)) ? (-(1.0F)) : (1.0F);
# 101 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/util.h"
}
# 110 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/util.h"
inline double sign_d(const double &val) {
# 111 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/util.h"
return (val < (0.0)) ? (-(1.0)) : (1.0);
# 112 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/util.h"
}
# 117 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/util.h"
template< class T> void
# 122 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/util.h"
swap(T &lhs, T &rhs) {
# 124 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/util.h"
T temp = rhs;
# 125 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/util.h"
rhs = lhs;
# 126 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/util.h"
lhs = temp;
# 127 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/util.h"
}
# 136 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/util.h"
extern "C" { inline unsigned getNumBlocksLinear(const unsigned num_threads, const unsigned
# 137 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/util.h"
num_threads_block)
# 138 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/util.h"
{
# 139 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/util.h"
const unsigned block_rem = (((num_threads % num_threads_block) != (0)) ? 1 : 0);
# 141 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/util.h"
return (num_threads / num_threads_block) + block_rem;
# 142 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/util.h"
} }
# 51 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
__attribute__((unused)) inline int floorPow2(int n) {int volatile ___ = 1;
# 61 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
exit(___);}
# 69 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
__attribute__((unused)) inline int ceilPow2(int n) {int volatile ___ = 1;
# 79 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
exit(___);}
# 89 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
__attribute__((unused)) inline float computeMidpoint(const float left, const float right) {int volatile ___ = 1;
# 100 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
exit(___);}
# 117 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
template< class S, class T> __attribute__((unused)) void
# 120 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
storeInterval(unsigned addr, float *
# 121 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
s_left, float *s_right, T *
# 122 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
s_left_count, T *s_right_count, float
# 123 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
left, float right, S
# 124 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
left_count, S right_count, float
# 125 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
precision)
# 126 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
{int volatile ___ = 1;
# 148 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
exit(___);}
# 170 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
__attribute__((unused)) inline unsigned computeNumSmallerEigenvals(float *g_d, float *g_s, const unsigned n, const float
# 171 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
x, const unsigned
# 172 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
tid, const unsigned
# 173 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
num_intervals_active, float *
# 174 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
s_d, float *s_s, unsigned
# 175 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
converged)
# 177 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
{int volatile ___ = 1;
# 205 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
exit(___);}
# 227 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
__attribute__((unused)) inline unsigned computeNumSmallerEigenvalsLarge(float *g_d, float *g_s, const unsigned n, const float
# 228 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
x, const unsigned
# 229 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
tid, const unsigned
# 230 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
num_intervals_active, float *
# 231 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
s_d, float *s_s, unsigned
# 232 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
converged)
# 234 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
{int volatile ___ = 1;
# 271 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
exit(___);}
# 298 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
template< class S, class T> __attribute__((unused)) void
# 301 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
storeNonEmptyIntervals(unsigned addr, const unsigned
# 302 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
num_threads_active, float *
# 303 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
s_left, float *s_right, T *
# 304 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
s_left_count, T *s_right_count, float
# 305 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
left, float mid, float right, const S
# 306 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
left_count, const S
# 307 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
mid_count, const S
# 308 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
right_count, float
# 309 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
precision, unsigned &
# 310 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
compact_second_chunk, T *
# 311 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
s_compaction_list_exc, unsigned &
# 312 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
is_active_second)
# 313 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
{int volatile ___ = 1;
# 346 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
exit(___);}
# 357 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
template< class T> __attribute__((unused)) void
# 360 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
createIndicesCompaction(T *s_compaction_list_exc, unsigned
# 361 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
num_threads_compaction) {int volatile ___ = 1;
# 404 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
exit(___);}
# 423 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
template< class T> __attribute__((unused)) void
# 426 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
compactIntervals(float *s_left, float *s_right, T *
# 427 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
s_left_count, T *s_right_count, float
# 428 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
mid, float right, unsigned
# 429 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
mid_count, unsigned right_count, T *
# 430 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
s_compaction_list, unsigned
# 431 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
num_threads_active, unsigned
# 432 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
is_active_second)
# 433 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
{int volatile ___ = 1;
# 447 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
exit(___);}
# 470 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
template< class T, class S> __attribute__((unused)) void
# 473 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
storeIntervalConverged(float *s_left, float *s_right, T *
# 474 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
s_left_count, T *s_right_count, float &
# 475 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
left, float &mid, float &right, S &
# 476 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
left_count, S &mid_count, S &right_count, T *
# 477 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
s_compaction_list_exc, unsigned &
# 478 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
compact_second_chunk, const unsigned
# 479 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
num_threads_active)
# 480 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
{int volatile ___ = 1;
# 515 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
exit(___);}
# 517 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
template< class T, class S> __attribute__((unused)) void
# 520 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
storeIntervalConverged(float *s_left, float *s_right, T *
# 521 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
s_left_count, T *s_right_count, float &
# 522 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
left, float &mid, float &right, S &
# 523 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
left_count, S &mid_count, S &right_count, T *
# 524 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
s_compaction_list_exc, unsigned &
# 525 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
compact_second_chunk, const unsigned
# 526 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
num_threads_active, unsigned &
# 527 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
is_active_second)
# 528 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
{int volatile ___ = 1;
# 563 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
exit(___);}
# 582 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
template< class T> __attribute__((unused)) void
# 585 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
subdivideActiveInterval(const unsigned tid, float *
# 586 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
s_left, float *s_right, T *
# 587 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
s_left_count, T *s_right_count, const unsigned
# 588 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
num_threads_active, float &
# 589 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
left, float &right, unsigned &
# 590 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
left_count, unsigned &right_count, float &
# 591 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
mid, unsigned &all_threads_converged)
# 592 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
{int volatile ___ = 1;
# 614 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_util.cu"
exit(___);}
# 63 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_kernel_small.cu"
void bisectKernel(float *g_d, float *g_s, const unsigned n, float *
# 64 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_kernel_small.cu"
g_left, float *g_right, unsigned *
# 65 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_kernel_small.cu"
g_left_count, unsigned *g_right_count, const float
# 66 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_kernel_small.cu"
lg, const float ug, const unsigned
# 67 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_kernel_small.cu"
lg_eig_count, const unsigned ug_eig_count, float
# 68 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_kernel_small.cu"
epsilon) ;
# 55 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cuh"
extern "C" void computeEigenvaluesSmallMatrix(const InputData &, ResultDataSmall &, const unsigned, const float, const float, const float, const unsigned);
# 67 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cuh"
extern "C" void initResultSmallMatrix(ResultDataSmall &, const unsigned);
# 74 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cuh"
extern "C" void cleanupResultSmallMatrix(ResultDataSmall &);
# 85 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cuh"
extern "C" void processResultSmallMatrix(const InputData &, const ResultDataSmall &, const unsigned, const char *);
# 69 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
void computeEigenvaluesSmallMatrix(const InputData &input, ResultDataSmall &result, const unsigned
# 70 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
mat_size, const float
# 71 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
lg, const float ug, const float
# 72 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
precision, const unsigned
# 73 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
iterations)
# 74 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
{
# 75 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
unsigned timer = (0);
# 76 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
__cutilCheckError(cutCreateTimer(&timer), "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu", 76);
# 78 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
__cutilCheckError(cutStartTimer(timer), "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu", 78);
# 79 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
for (unsigned i = (0); i < iterations; ++i) {
# 81 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
dim3 blocks(1, 1, 1);
# 82 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
dim3 threads(512, 1, 1);
# 84 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
cudaConfigureCall(blocks, threads) ? ((void)0) : bisectKernel(input.g_a, input.g_b, mat_size, result.g_left, result.g_right, result.g_left_count, result.g_right_count, lg, ug, 0, mat_size, precision);
# 91 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
}
# 92 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
__cudaSafeCall(cudaThreadSynchronize(), "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu", 92);
# 93 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
__cutilCheckError(cutStopTimer(timer), "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu", 93);
# 94 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
__cutilCheckMsg("Kernel launch failed", "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu", 94);
# 95 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
printf("Average time: %f ms (%i iterations)\n", cutGetTimerValue(timer) / ((float)iterations), iterations);
# 98 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
__cutilCheckError(cutDeleteTimer(timer), "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu", 98);
# 99 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
}
# 107 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
void initResultSmallMatrix(ResultDataSmall &result, const unsigned mat_size) {
# 109 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
(result.mat_size_f) = (sizeof(float) * mat_size);
# 110 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
(result.mat_size_ui) = (sizeof(unsigned) * mat_size);
# 112 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
(result.eigenvalues) = ((float *)malloc(result.mat_size_f));
# 115 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
(result.zero_f) = ((float *)malloc(result.mat_size_f));
# 116 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
(result.zero_ui) = ((unsigned *)malloc(result.mat_size_ui));
# 117 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
for (unsigned i = (0); i < mat_size; ++i) {
# 119 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
((result.zero_f)[i]) = (0.0F);
# 120 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
((result.zero_ui)[i]) = (0);
# 122 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
((result.eigenvalues)[i]) = (0.0F);
# 123 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
}
# 125 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
__cudaSafeCall(cudaMalloc((void **)(&(result.g_left)), result.mat_size_f), "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu", 125);
# 126 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
__cudaSafeCall(cudaMalloc((void **)(&(result.g_right)), result.mat_size_f), "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu", 126);
# 128 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
__cudaSafeCall(cudaMalloc((void **)(&(result.g_left_count)), result.mat_size_ui), "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu", 129);
# 130 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
__cudaSafeCall(cudaMalloc((void **)(&(result.g_right_count)), result.mat_size_ui), "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu", 131);
# 134 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
__cudaSafeCall(cudaMemcpy(result.g_left, result.zero_f, result.mat_size_f, cudaMemcpyHostToDevice), "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu", 135);
# 136 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
__cudaSafeCall(cudaMemcpy(result.g_right, result.zero_f, result.mat_size_f, cudaMemcpyHostToDevice), "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu", 137);
# 138 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
__cudaSafeCall(cudaMemcpy(result.g_right_count, result.zero_ui, result.mat_size_ui, cudaMemcpyHostToDevice), "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu", 140);
# 141 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
__cudaSafeCall(cudaMemcpy(result.g_left_count, result.zero_ui, result.mat_size_ui, cudaMemcpyHostToDevice), "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu", 143);
# 144 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
}
# 151 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
void cleanupResultSmallMatrix(ResultDataSmall &result) {
# 153 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
freePtr(result.eigenvalues);
# 154 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
freePtr(result.zero_f);
# 155 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
freePtr(result.zero_ui);
# 157 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
__cudaSafeCall(cudaFree(result.g_left), "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu", 157);
# 158 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
__cudaSafeCall(cudaFree(result.g_right), "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu", 158);
# 159 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
__cudaSafeCall(cudaFree(result.g_left_count), "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu", 159);
# 160 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
__cudaSafeCall(cudaFree(result.g_right_count), "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu", 160);
# 161 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
}
# 172 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
void processResultSmallMatrix(const InputData &input, const ResultDataSmall &result, const unsigned
# 173 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
mat_size, const char *
# 174 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
filename) {
# 176 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
const unsigned mat_size_f = (sizeof(float) * mat_size);
# 177 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
const unsigned mat_size_ui = (sizeof(unsigned) * mat_size);
# 180 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
float *left = ((float *)malloc(mat_size_f));
# 181 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
unsigned *left_count = ((unsigned *)malloc(mat_size_ui));
# 183 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
__cudaSafeCall(cudaMemcpy(left, result.g_left, mat_size_f, cudaMemcpyDeviceToHost), "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu", 184);
# 185 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
__cudaSafeCall(cudaMemcpy(left_count, result.g_left_count, mat_size_ui, cudaMemcpyDeviceToHost), "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu", 186);
# 188 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
float *eigenvalues = ((float *)malloc(mat_size_f));
# 190 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
for (unsigned i = (0); i < mat_size; ++i) {
# 191 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
(eigenvalues[left_count[i]]) = (left[i]);
# 192 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
}
# 195 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
writeTridiagSymMatlab(filename, input.a, (input.b) + 1, eigenvalues, mat_size);
# 197 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
freePtr(left);
# 198 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
freePtr(left_count);
# 199 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
freePtr(eigenvalues);
# 200 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu"
}
# 1 "/tmp/tmpxft_000016c7_00000000-1_bisect_small.cudafe1.stub.c"
# 1 "/tmp/tmpxft_000016c7_00000000-1_bisect_small.cudafe1.stub.c" 1
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
# 2 "/tmp/tmpxft_000016c7_00000000-1_bisect_small.cudafe1.stub.c" 2
# 1 "/tmp/tmpxft_000016c7_00000000-3_bisect_small.fatbin.c" 1
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
# 2 "/tmp/tmpxft_000016c7_00000000-3_bisect_small.fatbin.c" 2

asm(
".section .rodata\n"
".align 32\n"
"__deviceText_$sm_21$:\n"
".quad 0x33010102464c457f,0x0000000000000004,0x0000000100be0002,0x0000000000000000\n"
".quad 0x0000000000001430,0x0000000000000040,0x0038004000140115,0x0001000900400003\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000300000001,0x0000000000000000,0x0000000000000000,0x0000000000000280\n"
".quad 0x00000000000000f7,0x0000000000000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x000000030000000b,0x0000000000000000,0x0000000000000000,0x0000000000000377\n"
".quad 0x000000000000003c,0x0000000000000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x0000000200000013,0x0000000000000000,0x0000000000000000,0x00000000000003b3\n"
".quad 0x0000000000000138,0x0000000b00000002,0x0000000000000001,0x0000000000000018\n"
".quad 0x0000000100000036,0x0000000000100006,0x0000000000000000,0x00000000000004eb\n"
".quad 0x0000000000000d98,0x1a00000600000003,0x0000000000000004,0x0000000000000000\n"
".quad 0x00000001000000c5,0x0000000000000002,0x0000000000000000,0x0000000000001283\n"
".quad 0x000000000000006c,0x0000000400000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x0000000100000060,0x0000000000000002,0x0000000000000000,0x00000000000012ef\n"
".quad 0x0000000000000110,0x0000000400000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x0000000800000096,0x0000000000000003,0x0000000000000000,0x00000000000013ff\n"
".quad 0x0000000000002814,0x0000000400000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x000000010000008d,0x0000000000000002,0x0000000000000000,0x00000000000013ff\n"
".quad 0x0000000000000030,0x0000000000000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x7472747368732e00,0x747274732e006261,0x746d79732e006261,0x672e766e2e006261\n"
".quad 0x6e692e6c61626f6c,0x672e766e2e007469,0x742e006c61626f6c,0x32315a5f2e747865\n"
".quad 0x654b746365736962,0x5f5366506c656e72,0x536a505f535f536a,0x00666a6a66665f30\n"
".quad 0x6f666e692e766e2e,0x73696232315a5f2e,0x656e72654b746365,0x5f536a5f5366506c\n"
".quad 0x665f30536a505f53,0x766e2e00666a6a66,0x6e2e006f666e692e,0x6465726168732e76\n"
".quad 0x73696232315a5f2e,0x656e72654b746365,0x5f536a5f5366506c,0x665f30536a505f53\n"
".quad 0x766e2e00666a6a66,0x6e6174736e6f632e,0x6232315a5f2e3074,0x72654b7463657369\n"
".quad 0x6a5f5366506c656e,0x30536a505f535f53,0x0000666a6a66665f,0x6573696232315a5f\n"
".quad 0x6c656e72654b7463,0x535f536a5f536650,0x66665f30536a505f,0x75635f5f00666a6a\n"
".quad 0x5f30326d735f6164,0x665f6e725f766964,0x0000000000003233,0x0000000000000000\n"
".quad 0x0000000000000000,0x0300000000000000,0x0000000000000100,0x0000000000000000\n"
".quad 0x0300000000000000,0x0000000000000200,0x0000000000000000,0x0300000000000000\n"
".quad 0x0000000000000300,0x0000000000000000,0x0300000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0300000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0300000000000000,0x0000000000000400,0x0000000d98000000,0x0300000000000000\n"
".quad 0x0000000000000600,0x0000000000000000,0x0300000000000000,0x0000000000000800\n"
".quad 0x0000000000000000,0x0300000000000000,0x0000000000000700,0x0000000000000000\n"
".quad 0x0300000000000000,0x0000000000000500,0x0000000000000000,0x1200000001000000\n"
".quad 0x0000000000000410,0x0000000a28000000,0x1200000025000000,0x0000000a28000400\n"
".quad 0x0000000370000000,0x0400005de4000000,0x008404dc04280044,0x0009351e032c0000\n"
".quad 0x2001455c036000c0,0x40014fdc854800c0,0x00014fdc85c90000,0x60114fdc85c90000\n"
".quad 0x20014fdc85c90000,0x80114fdc85c90000,0x00ffffdc04c90000,0x00fd31dc0350ee00\n"
".quad 0x018000a1e7190e00,0x01600181e4400000,0x00040081e2280040,0x01700141e4180000\n"
".quad 0x000400c1e2280040,0x01800101e4180000,0x01900001e4280040,0x0003f18085280040\n"
".quad 0xa023f080a5c90000,0x6013f14085c90000,0x2003f10085c90000,0x8013f00085c90000\n"
".quad 0xa013ffc085c90000,0x00fc009de4c90000,0x00fc00dde4280000,0x00fc041de4280000\n"
".quad 0x00fc045de4280000,0x00fc049de4280000,0x0000001de4280000,0x0004001de2400000\n"
".quad 0xa043f01c85180000,0x00ffffdc04c90000,0xa023f01c8550ee00,0x02c0000007c10000\n"
".quad 0x004c01dc03600000,0x00000001f4198e00,0x0009301e03400000,0x0000049c856000c0\n"
".quad 0x6010045c85c10000,0x2000041c85c10000,0x801000dc85c10000,0x004911dc00c10000\n"
".quad 0x01200021e7268e00,0x00fd21dc00400000,0x00fd13dc00208e00,0x0049101d00208e00\n"
".quad 0x0049111c00500000,0x001c81e404500000,0xa043ffdc850c0e00,0xc000009c00c90000\n"
".quad 0xc00040a0003024cf,0x0000001df45800cf,0x0040301d03400000,0x000401dc03480000\n"
".quad 0xa043ffe085198ec0,0x0000001df4c90000,0x00ffffdc04400000,0xa043f01c8550ee00\n"
".quad 0x000401dc03c10000,0x1f600001e7190ec0,0xa023f01c85400000,0x00ffffdc04c10000\n"
".quad 0x00c131dc0350ee00,0x012000a1e7188e40,0x0009320203400000,0x00808100036000c0\n"
".quad 0x0093f14043480140,0x00a0818003480040,0x0000410085480140,0x00b3f1c043840000\n"
".quad 0xfff0618085480040,0x000081008587ffff,0x6010818085c90000,0x00ffffdc04c90000\n"
".quad 0x004911dc0050ee00,0x02e0000007210e00,0x004c01dc03600000,0x02800021e71a1000\n"
".quad 0x00c3f1dc03400000,0x02200001e7190e40,0x00c0001de4400000,0x00fc05dde4280040\n"
".quad 0x00fc059de4280000,0x0000015de2280000,0x0008061e0318fe00,0x6011711c856000c0\n"
".quad 0x0001701c85c10000,0x0010411c00c10000,0x0008065d00580000,0x1d40010007500000\n"
".quad 0x0011915d00500000,0x001175dc03500000,0x006171dc034800c0,0x00fc501c001a8e00\n"
".quad 0x0001659d03108e00,0xfea00001e7480000,0x0000001df44003ff,0x00fc059df4400000\n"
".quad 0x00fc059df4280000,0x00ffffdc04280000,0xa023f01c8550ee00,0x0da0000007c10000\n"
".quad 0x004c01dc03600000,0x0d400001e7198e00,0x0009301e03400000,0x004911dc006000c0\n"
".quad 0x400002dc03268e00,0x6010021c034800c0,0x2000025c034800c0,0x8010029c034800c0\n"
".quad 0x09e00021e74800c0,0x004161dc03400000,0x000d63dc031a8e00,0x000403dc041a8e00\n"
".quad 0x03600025e70c0e00,0x0048211cc0400000,0xb9c8019de2081e00,0x01a0411c001a4cb4\n"
".quad 0x121001dde2580040,0x0011311c0418e195,0x0048231d00100000,0x0018419c01500000\n"
".quad 0x0000941c85081e00,0x0031311c44c90000,0x0000a59c85100000,0x001841dc01c90000\n"
".quad 0x0160000007198e00,0x01000021e7600000,0x00fd21dc00400000,0x00fc23dc00208e00\n"
".quad 0x0048211c00208e00,0x001c81e404500000,0xc000c15c000c0e00,0xc0004160003024cf\n"
".quad 0x0000015c855800cf,0x0000815c95c90000,0x0000049c85c90000,0x0000809c95c90000\n"
".quad 0x0004011de2c90000,0x0010b11c85180000,0xa013f11c85c90000,0x0004001df2c90000\n"
".quad 0x0010bfdc85180000,0x05a0000007c90000,0x02c00021e7600000,0x0048211cc0400000\n"
".quad 0xb9c8019de2081e00,0x01a0411c001a4cb4,0x121001dde2580040,0x0011311c0418e195\n"
".quad 0x004822dd00100000,0x0018419c01500000,0x0000941c85081e00,0x002d311c44c90000\n"
".quad 0x0000a59c85100000,0x001841dc01c90000,0x01000021e7198e00,0x00fd21dc00400000\n"
".quad 0x00fc23dc00208e00,0x0048211c00208e00,0x001c81e404500000,0xc000b15c000c0e00\n"
".quad 0xc0004160003024cf,0x0000015c855800cf,0x0000815c95c90000,0x0000049c85c90000\n"
".quad 0x0000809c95c90000,0x0044211cc0c90000,0xb9c8019de2081e00,0x01a0411c001a4cb4\n"
".quad 0x121001dde2580040,0x0011311c0418e195,0x000912dd00100000,0x0018419c01500000\n"
".quad 0x0000959c85081e00,0x002d311c44c90000,0x0000a0dc85100000,0x001841dc01c90000\n"
".quad 0x01000021e7198e00,0x00fc21dc00400000,0x00fd13dc00208e00,0x0044211c00208e00\n"
".quad 0x001c81e404500000,0xc000b15c000c0e00,0xc0004160003004cf,0x0000015c855800cf\n"
".quad 0x0000815c95c90000,0x0000009c85c90000,0x0000845c95c90000,0x00fc001df4c90000\n"
".quad 0x0040311d03280000,0x000441dc03480000,0x00c00001e71a8ec0,0x0000049c85400000\n"
".quad 0x0000845c85c90000,0x0000941c85c90000,0x0000a0dc85c90000,0x0010bfdc85c90000\n"
".quad 0x00fc001df4c90000,0x0004409c03280000,0x0000049c855800c0,0x0004011de2c90000\n"
".quad 0x0000845c85180000,0x0040259c03c90000,0x0000941c85480000,0x0048009de4c90000\n"
".quad 0x0000a59c85280000,0x0010b11c85c90000,0xa013f11c85c90000,0x0004001df2c90000\n"
".quad 0x00fc001df4180000,0x00ffffdc04280000,0xa013f11c8550ee00,0x0820000007c10000\n"
".quad 0x00fc41dc03600000,0x07c00001e7190e00,0xa033f15c85400000,0x0004519c03c10000\n"
".quad 0x00fc61dc235800c0,0x02e00001e7198e00,0x0004011de2400000,0x00ffffdc04180000\n"
".quad 0x004c61dc0350ee00,0x01c00081e7198e00,0x000531e023400000,0x00093220234000c0\n"
".quad 0x001071e0034000c0,0x0010822003500000,0xfffc72a003500000,0xfffc8260034800ff\n"
".quad 0x00fca2a0034800ff,0x00fc91e003328e00,0x0008a2a203329000,0x00087262036000c0\n"
".quad 0x4010a1e0856000c0,0x4010922085c10000,0x001c81e003c10000,0x401091e085480000\n"
".quad 0x0004619c23c90000,0x00fc61dc235800c0,0x0004411c031a0e00,0xfd600001e76000c0\n"
".quad 0x0020001de74003ff,0x0004011de2400000,0x000851dc03180000,0x02600001e7198ec0\n"
".quad 0x0008019de2400000,0x0004411c03180000,0x00ffffdc045800c0,0xfffc61dc0350ee00\n"
".quad 0x001d31dc034800ff,0x01400081e71b0e00,0x0005322003400000,0x000441e0034800c0\n"
".quad 0x00108220035800c0,0x002071e003500000,0x000882a203480000,0x00087262036000c0\n"
".quad 0x4000a1e0856000c0,0x4000922085c10000,0x001c81e003c10000,0x400091e085480000\n"
".quad 0x0004619c03c90000,0x001461dc036000c0,0xfdc00001e7188e00,0x00ffffdc044003ff\n"
".quad 0x000401dc0350ee00,0xa023f11c85190ec0,0x004c41dc03c10000,0x010000a1e71a0000\n"
".quad 0x0009300203400000,0x40000000856000c0,0x0010000003c10000,0x0008000203480000\n"
".quad 0x20000580856000c0,0x0000008085c90000,0x6010044085c90000,0x801000c085c90000\n"
".quad 0x0000001df4c90000,0x00ffffdc04400000,0x00fd31dc0350ee00,0x0360000007190e00\n"
".quad 0x00000021f4600000,0xa023f11c85400000,0x0008401e03c10000,0x4000001c856000c0\n"
".quad 0x0010001c03c10000,0xfffc011c03480000,0xa023f01c854800ff,0x0010011c03c90000\n"
".quad 0x00fc41dc23680000,0x01e00021e71a8e00,0x0001211e04400000,0x200041dc80180000\n"
".quad 0x0010001de4208ec0,0xe000400000280000,0x005c015c235800d2,0x00600001e25800c0\n"
".quad 0x03fc515c03180000,0x00fc0021e46800c0,0x00fc41dc80280000,0x0000501d03210e00\n"
".quad 0x03fc51dc03480000,0xfe08001c031920c0,0x0004011de24800ff,0x00fc001c04180000\n"
".quad 0x0000401c03201000,0xa033f01c85600000,0xa013ffdc95c90000,0x00ffffdc04c90000\n"
".quad 0xdcc0001de750ee00,0x00ffffdc044003ff,0x00c131dc0350ee00,0x00000021e7188e40\n"
".quad 0x001000dde2800000,0x0001409c85180000,0x00e1311c03c10000,0x0001501c85200780\n"
".quad 0x00f3f15c43c10000,0x0121319c03480040,0x0133f1dc43200780,0x0000409c85480040\n"
".quad 0x0000601c85940000,0x0000001de7940000,0x0004401c03800000,0x0004519c036000c0\n"
".quad 0x0060001c036000c0,0x0060619c035800c0,0xfffc001c035800c0,0x03f401dc034800ff\n"
".quad 0xfffc619c031a0ec0,0x03f461dc034800ff,0x05200021e71a20c0,0xe00041dc80400000\n"
".quad 0x001121dc44298edf,0x00600021e7108000,0xe00051dc80400000,0x0015221c44298edf\n"
".quad 0x00400001e7108000,0x0014411c20400000,0x0b80001de7500000,0x0004425c03400000\n"
".quad 0x0004529c036000c0,0x00fc93dc036000c0,0x00fca5dc03190e00,0x000811dc04190e00\n"
".quad 0x00800001e70c0e00,0xe00077dc00400000,0xe00081dc00290edf,0x0080002de7290edf\n"
".quad 0x00600021e7400000,0x0000001de2400000,0x0014011c001bff00,0x09e0001de7c80000\n"
".quad 0x004401dc04400000,0x00600021e70c0e00,0x0010501c83400000,0x0000011c02680000\n"
".quad 0x0940001de73a0000,0x004831dc04400000,0x00800021e70c0e00,0x0010501c83400000\n"
".quad 0x0000001c02680000,0x0000011c423a0000,0x0880001de739fe00,0x00fc03dc23400000\n"
".quad 0x00fc61dc231b0e00,0xff0001e5e21b0e00,0xe0004124001bffff,0x00fc01c5e4307ed7\n"
".quad 0x00800001e7280000,0xe000515c00400000,0x010071dc03307ed7,0x0020001de74800c0\n"
".quad 0x00fc01dde4400000,0xfe08621c03280000,0x0014825ee34800ff,0xfe08021c03410000\n"
".quad 0x0010915c004800ff,0x0010811ee3c80000,0x0018001d03410000,0x0014421c00480000\n"
".quad 0x0020929e00307e00,0x0014a21c00300800,0x0020925e00301000,0x0014911c00300800\n"
".quad 0x0004429c03301000,0x0060a29c036000c0,0x0028001c035800c0,0x0000719c03480000\n"
".quad 0xfffc601c03480000,0x03f401dc034800ff,0x00600001e71a0ec0,0x0028601d03400000\n"
".quad 0x0010011ee3480000,0x04a0001de7400000,0x03f861dc23400000,0x00600001e7198ec0\n"
".quad 0x0000401c02400000,0x0000011c423a0000,0x0400001de739fe00,0x00fc61dc23400000\n"
".quad 0x03c00001e71a0e00,0xffa061dc23400000,0x00400001e71b0eff,0x0000411c02400000\n"
".quad 0x0340001de73a0000,0x0014929c00400000,0x001491dc00311000,0x0014901c00309000\n"
".quad 0x0019221f84319000,0x001ca15c001c0000,0xfffc01dc021e8e00,0x00fc81dc233801ff\n"
".quad 0x0000401c02190e00,0x0019221f843a0000,0x0015211f841c0000,0x000071dc421c0000\n"
".quad 0x00a00081e7380200,0x0080616003400000,0x00147160034800c0,0x0007f16003600000\n"
".quad 0x002071e003310ac0,0x0014412043580000,0x0078715c03680000,0x007c519c036000c0\n"
".quad 0x0004715c035800c0,0x0018411c436800c0,0x0010511c03680000,0x0004715c03680000\n"
".quad 0x00fc41dc035800c0,0x00045140031a8e00,0x0014011c434800c0,0x0000001de7680000\n"
".quad 0x0000000000900000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0400000000000000,0x080000000000300c,0x1800000010000000\n"
".quad 0x2800000020000000,0x3800000030000000,0x400000003c000000,0x4800000044000000\n"
".quad 0x0a00080a04000000,0x03004c0020000000,0xff000c1704004c19,0x000048000bffffff\n"
".quad 0xff000c17040011f0,0x000044000affffff,0xff000c17040011f0,0x0000400009ffffff\n"
".quad 0xff000c17040011f0,0x00003c0008ffffff,0xff000c17040011f0,0x0000380007ffffff\n"
".quad 0xff000c17040011f0,0x0000300006ffffff,0xff000c17040021f0,0x0000280005ffffff\n"
".quad 0xff000c17040021f0,0x0000200004ffffff,0xff000c17040021f0,0x0000180003ffffff\n"
".quad 0xff000c17040021f0,0x0000100002ffffff,0xff000c17040011f0,0x0000080001ffffff\n"
".quad 0xff000c17040021f0,0x0000000000ffffff,0xc000080d040021f0,0x040000000d001000\n"
".quad 0x000000000c000812,0x0c00081104000000,0x0400000000000000,0x000000000b000812\n"
".quad 0x0b00081104000000,0x0000000000000000,0x0000000500000006,0x0000000000001430\n"
".quad 0x0000000000000000,0x0000000000000000,0x00000000000000a8,0x00000000000000a8\n"
".quad 0x0000000000000004,0x00000b0560000000,0x00000000000004eb,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000f14,0x0000000000000f14,0x0000000000000004\n"
".quad 0x00000b0660000000,0x00000000000013ff,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000002814,0x0000000000000004,0x0000000000000000\n"
".text");

extern "C" {

extern const unsigned long long __deviceText_$sm_21$[668];

}

asm(
".section .rodata\n"
".align 32\n"
"__deviceText_$compute_20$:\n"
".quad 0x6f69737265762e09,0x2e090a322e32206e,0x7320746567726174,0x2f2f090a30325f6d\n"
".quad 0x656c69706d6f6320,0x2f20687469772064,0x61636f6c2f727375,0x6f2f616475632f6c\n"
".quad 0x696c2f34366e6570,0x2f090a65622f2f62,0x6e65706f766e202f,0x6220322e33206363\n"
".quad 0x206e6f20746c6975,0x2d39302d30313032,0x69762e090a0a3930,0x662e20656c626973\n"
".quad 0x61702e2820636e75,0x3233732e206d6172,0x72616475635f5f20,0x63385a5f5f667465\n"
".quad 0x6932776f506c6965,0x696563385a5f2029,0x28206932776f506c,0x2e206d617261702e\n"
".quad 0x75635f5f20323373,0x31666d7261706164,0x6c696563385a5f5f,0x0a0a296932776f50\n"
".quad 0x6c62697369762e09,0x20636e75662e2065,0x206d617261702e28,0x635f5f203233662e\n"
".quad 0x5f66746572616475,0x6572663574535a5f,0x5f20296950667078,0x786572663574535a\n"
".quad 0x702e282069506670,0x33662e206d617261,0x616475635f5f2032,0x5f5f31666d726170\n"
".quad 0x786572663574535a,0x702e202c69506670,0x36752e206d617261,0x616475635f5f2034\n"
".quad 0x5f5f32666d726170,0x786572663574535a,0x090a0a2969506670,0x656c62697369762e\n"
".quad 0x2820636e75662e20,0x2e206d617261702e,0x75635f5f20323375,0x5f5f667465726164\n"
".quad 0x75706d6f6336325a,0x616d536d754e6574,0x6567694572656c6c,0x536650736c61766e\n"
".quad 0x535f536a6a666a5f,0x36325a5f20296a5f,0x4e657475706d6f63,0x656c6c616d536d75\n"
".quad 0x61766e6567694572,0x666a5f536650736c,0x206a5f535f536a6a,0x206d617261702e28\n"
".quad 0x635f5f203436752e,0x666d726170616475,0x6f6336325a5f5f31,0x6d754e657475706d\n"
".quad 0x4572656c6c616d53,0x736c61766e656769,0x6a6a666a5f536650,0x2e202c6a5f535f53\n"
".quad 0x752e206d61726170,0x6475635f5f203436,0x5f32666d72617061,0x706d6f6336325a5f\n"
".quad 0x6d536d754e657475,0x67694572656c6c61,0x6650736c61766e65,0x5f536a6a666a5f53\n"
".quad 0x61702e202c6a5f53,0x3233752e206d6172,0x70616475635f5f20,0x5a5f5f33666d7261\n"
".quad 0x7475706d6f633632,0x6c616d536d754e65,0x6e6567694572656c,0x5f536650736c6176\n"
".quad 0x5f535f536a6a666a,0x617261702e202c6a,0x5f203233662e206d,0x726170616475635f\n"
".quad 0x36325a5f5f34666d,0x4e657475706d6f63,0x656c6c616d536d75,0x61766e6567694572\n"
".quad 0x666a5f536650736c,0x2c6a5f535f536a6a,0x206d617261702e20,0x635f5f203233752e\n"
".quad 0x666d726170616475,0x6f6336325a5f5f35,0x6d754e657475706d,0x4572656c6c616d53\n"
".quad 0x736c61766e656769,0x6a6a666a5f536650,0x2e202c6a5f535f53,0x752e206d61726170\n"
".quad 0x6475635f5f203233,0x5f36666d72617061,0x706d6f6336325a5f,0x6d536d754e657475\n"
".quad 0x67694572656c6c61,0x6650736c61766e65,0x5f536a6a666a5f53,0x61702e202c6a5f53\n"
".quad 0x3436752e206d6172,0x70616475635f5f20,0x5a5f5f37666d7261,0x7475706d6f633632\n"
".quad 0x6c616d536d754e65,0x6e6567694572656c,0x5f536650736c6176,0x5f535f536a6a666a\n"
".quad 0x617261702e202c6a,0x5f203436752e206d,0x726170616475635f,0x36325a5f5f38666d\n"
".quad 0x4e657475706d6f63,0x656c6c616d536d75,0x61766e6567694572,0x666a5f536650736c\n"
".quad 0x2c6a5f535f536a6a,0x206d617261702e20,0x635f5f203233752e,0x666d726170616475\n"
".quad 0x6f6336325a5f5f39,0x6d754e657475706d,0x4572656c6c616d53,0x736c61766e656769\n"
".quad 0x6a6a666a5f536650,0x0a0a296a5f535f53,0x6c62697369762e09,0x20636e75662e2065\n"
".quad 0x6462757333325a5f,0x7463416564697669,0x7265746e49657669,0x6a76456a496c6176\n"
".quad 0x5f54505f30536650,0x335366526a5f3253,0x33535f34536a525f,0x702e28205f34535f\n"
".quad 0x33752e206d617261,0x616475635f5f2032,0x5f5f31666d726170,0x696462757333325a\n"
".quad 0x6974634165646976,0x767265746e496576,0x506a76456a496c61,0x535f54505f305366\n"
".quad 0x5f335366526a5f32,0x5f33535f34536a52,0x61702e202c5f3453,0x3436752e206d6172\n"
".quad 0x70616475635f5f20,0x5a5f5f32666d7261,0x7669646275733332,0x7669746341656469\n"
".quad 0x61767265746e4965,0x66506a76456a496c,0x32535f54505f3053,0x525f335366526a5f\n"
".quad 0x535f33535f34536a,0x7261702e202c5f34,0x203436752e206d61,0x6170616475635f5f\n"
".quad 0x325a5f5f33666d72,0x6976696462757333,0x6576697463416564,0x6c61767265746e49\n"
".quad 0x5366506a76456a49,0x5f32535f54505f30,0x6a525f335366526a,0x34535f33535f3453\n"
".quad 0x617261702e202c5f,0x5f203436752e206d,0x726170616475635f,0x33325a5f5f34666d\n"
".quad 0x6469766964627573,0x4965766974634165,0x496c61767265746e,0x305366506a76456a\n"
".quad 0x6a5f32535f54505f,0x536a525f33536652,0x5f34535f33535f34,0x6d617261702e202c\n"
".quad 0x5f5f203436752e20,0x6d72617061647563,0x7333325a5f5f3566,0x6564697669646275\n"
".quad 0x6e49657669746341,0x6a496c6176726574,0x5f305366506a7645,0x526a5f32535f5450\n"
".quad 0x34536a525f335366,0x2c5f34535f33535f,0x206d617261702e20,0x635f5f203233752e\n"
".quad 0x666d726170616475,0x757333325a5f5f36,0x4165646976696462,0x746e496576697463\n"
".quad 0x456a496c61767265,0x505f305366506a76,0x66526a5f32535f54,0x5f34536a525f3353\n"
".quad 0x202c5f34535f3353,0x2e206d617261702e,0x75635f5f20343675,0x37666d7261706164\n"
".quad 0x62757333325a5f5f,0x6341656469766964,0x65746e4965766974,0x76456a496c617672\n"
".quad 0x54505f305366506a,0x5366526a5f32535f,0x535f34536a525f33,0x2e202c5f34535f33\n"
".quad 0x752e206d61726170,0x6475635f5f203436,0x5f38666d72617061,0x6462757333325a5f\n"
".quad 0x7463416564697669,0x7265746e49657669,0x6a76456a496c6176,0x5f54505f30536650\n"
".quad 0x335366526a5f3253,0x33535f34536a525f,0x702e202c5f34535f,0x36752e206d617261\n"
".quad 0x616475635f5f2034,0x5f5f39666d726170,0x696462757333325a,0x6974634165646976\n"
".quad 0x767265746e496576,0x506a76456a496c61,0x535f54505f305366,0x5f335366526a5f32\n"
".quad 0x5f33535f34536a52,0x61702e202c5f3453,0x3436752e206d6172,0x70616475635f5f20\n"
".quad 0x5f5f3031666d7261,0x696462757333325a,0x6974634165646976,0x767265746e496576\n"
".quad 0x506a76456a496c61,0x535f54505f305366,0x5f335366526a5f32,0x5f33535f34536a52\n"
".quad 0x61702e202c5f3453,0x3436752e206d6172,0x70616475635f5f20,0x5f5f3131666d7261\n"
".quad 0x696462757333325a,0x6974634165646976,0x767265746e496576,0x506a76456a496c61\n"
".quad 0x535f54505f305366,0x5f335366526a5f32,0x5f33535f34536a52,0x61702e202c5f3453\n"
".quad 0x3436752e206d6172,0x70616475635f5f20,0x5f5f3231666d7261,0x696462757333325a\n"
".quad 0x6974634165646976,0x767265746e496576,0x506a76456a496c61,0x535f54505f305366\n"
".quad 0x5f335366526a5f32,0x5f33535f34536a52,0x2e090a0a295f3453,0x20656c6269736976\n"
".quad 0x5a5f20636e75662e,0x4e65726f74733232,0x497974706d456e6f,0x736c61767265746e\n"
".quad 0x506a6a76456a6a49,0x5f3054505f305366,0x5f546666665f3253,0x52665f33535f3353\n"
".quad 0x205f34535f32536a,0x206d617261702e28,0x635f5f203233752e,0x666d726170616475\n"
".quad 0x747332325a5f5f31,0x6d456e6f4e65726f,0x7265746e49797470,0x456a6a49736c6176\n"
".quad 0x5f305366506a6a76,0x665f32535f305450,0x535f33535f546666,0x5f32536a52665f33\n"
".quad 0x61702e202c5f3453,0x3233752e206d6172,0x70616475635f5f20,0x5a5f5f32666d7261\n"
".quad 0x4e65726f74733232,0x497974706d456e6f,0x736c61767265746e,0x506a6a76456a6a49\n"
".quad 0x5f3054505f305366,0x5f546666665f3253,0x52665f33535f3353,0x2c5f34535f32536a\n"
".quad 0x206d617261702e20,0x635f5f203436752e,0x666d726170616475,0x747332325a5f5f33\n"
".quad 0x6d456e6f4e65726f,0x7265746e49797470,0x456a6a49736c6176,0x5f305366506a6a76\n"
".quad 0x665f32535f305450,0x535f33535f546666,0x5f32536a52665f33,0x61702e202c5f3453\n"
".quad 0x3436752e206d6172,0x70616475635f5f20,0x5a5f5f34666d7261,0x4e65726f74733232\n"
".quad 0x497974706d456e6f,0x736c61767265746e,0x506a6a76456a6a49,0x5f3054505f305366\n"
".quad 0x5f546666665f3253,0x52665f33535f3353,0x2c5f34535f32536a,0x206d617261702e20\n"
".quad 0x635f5f203436752e,0x666d726170616475,0x747332325a5f5f35,0x6d456e6f4e65726f\n"
".quad 0x7265746e49797470,0x456a6a49736c6176,0x5f305366506a6a76,0x665f32535f305450\n"
".quad 0x535f33535f546666,0x5f32536a52665f33,0x61702e202c5f3453,0x3436752e206d6172\n"
".quad 0x70616475635f5f20,0x5a5f5f36666d7261,0x4e65726f74733232,0x497974706d456e6f\n"
".quad 0x736c61767265746e,0x506a6a76456a6a49,0x5f3054505f305366,0x5f546666665f3253\n"
".quad 0x52665f33535f3353,0x2c5f34535f32536a,0x206d617261702e20,0x635f5f203233662e\n"
".quad 0x666d726170616475,0x747332325a5f5f37,0x6d456e6f4e65726f,0x7265746e49797470\n"
".quad 0x456a6a49736c6176,0x5f305366506a6a76,0x665f32535f305450,0x535f33535f546666\n"
".quad 0x5f32536a52665f33,0x61702e202c5f3453,0x3233662e206d6172,0x70616475635f5f20\n"
".quad 0x5a5f5f38666d7261,0x4e65726f74733232,0x497974706d456e6f,0x736c61767265746e\n"
".quad 0x506a6a76456a6a49,0x5f3054505f305366,0x5f546666665f3253,0x52665f33535f3353\n"
".quad 0x2c5f34535f32536a,0x206d617261702e20,0x635f5f203233662e,0x666d726170616475\n"
".quad 0x747332325a5f5f39,0x6d456e6f4e65726f,0x7265746e49797470,0x456a6a49736c6176\n"
".quad 0x5f305366506a6a76,0x665f32535f305450,0x535f33535f546666,0x5f32536a52665f33\n"
".quad 0x61702e202c5f3453,0x3233752e206d6172,0x70616475635f5f20,0x5f5f3031666d7261\n"
".quad 0x65726f747332325a,0x7974706d456e6f4e,0x6c61767265746e49,0x6a6a76456a6a4973\n"
".quad 0x3054505f30536650,0x546666665f32535f,0x665f33535f33535f,0x5f34535f32536a52\n"
".quad 0x6d617261702e202c,0x5f5f203233752e20,0x6d72617061647563,0x32325a5f5f313166\n"
".quad 0x6e6f4e65726f7473,0x746e497974706d45,0x6a49736c61767265,0x5366506a6a76456a\n"
".quad 0x32535f3054505f30,0x33535f546666665f,0x536a52665f33535f,0x2e202c5f34535f32\n"
".quad 0x752e206d61726170,0x6475635f5f203233,0x3231666d72617061,0x6f747332325a5f5f\n"
".quad 0x706d456e6f4e6572,0x767265746e497974,0x76456a6a49736c61,0x505f305366506a6a\n"
".quad 0x66665f32535f3054,0x33535f33535f5466,0x535f32536a52665f,0x7261702e202c5f34\n"
".quad 0x203233662e206d61,0x6170616475635f5f,0x5a5f5f3331666d72,0x4e65726f74733232\n"
".quad 0x497974706d456e6f,0x736c61767265746e,0x506a6a76456a6a49,0x5f3054505f305366\n"
".quad 0x5f546666665f3253,0x52665f33535f3353,0x2c5f34535f32536a,0x206d617261702e20\n"
".quad 0x635f5f203436752e,0x666d726170616475,0x7332325a5f5f3431,0x456e6f4e65726f74\n"
".quad 0x65746e497974706d,0x6a6a49736c617672,0x305366506a6a7645,0x5f32535f3054505f\n"
".quad 0x5f33535f54666666,0x32536a52665f3353,0x702e202c5f34535f,0x36752e206d617261\n"
".quad 0x616475635f5f2034,0x5f3531666d726170,0x726f747332325a5f,0x74706d456e6f4e65\n"
".quad 0x61767265746e4979,0x6a76456a6a49736c,0x54505f305366506a,0x6666665f32535f30\n"
".quad 0x5f33535f33535f54,0x34535f32536a5266,0x617261702e202c5f,0x5f203436752e206d\n"
".quad 0x726170616475635f,0x325a5f5f3631666d,0x6f4e65726f747332,0x6e497974706d456e\n"
".quad 0x49736c6176726574,0x66506a6a76456a6a,0x535f3054505f3053,0x535f546666665f32\n"
".quad 0x6a52665f33535f33,0x0a295f34535f3253,0x62697369762e090a,0x636e75662e20656c\n"
".quad 0x6f747333315a5f20,0x767265746e496572,0x6a76456a6a496c61,0x3054505f30536650\n"
".quad 0x5f5466665f32535f,0x702e2820665f3353,0x33752e206d617261,0x616475635f5f2032\n"
".quad 0x5f5f31666d726170,0x65726f747333315a,0x6c61767265746e49,0x66506a76456a6a49\n"
".quad 0x535f3054505f3053,0x33535f5466665f32,0x7261702e202c665f,0x203436752e206d61\n"
".quad 0x6170616475635f5f,0x315a5f5f32666d72,0x6e4965726f747333,0x6a496c6176726574\n"
".quad 0x305366506a76456a,0x5f32535f3054505f,0x665f33535f546666,0x6d617261702e202c\n"
".quad 0x5f5f203436752e20,0x6d72617061647563,0x7333315a5f5f3366,0x65746e4965726f74\n"
".quad 0x456a6a496c617672,0x505f305366506a76,0x66665f32535f3054,0x202c665f33535f54\n"
".quad 0x2e206d617261702e,0x75635f5f20343675,0x34666d7261706164,0x6f747333315a5f5f\n"
".quad 0x767265746e496572,0x6a76456a6a496c61,0x3054505f30536650,0x5f5466665f32535f\n"
".quad 0x702e202c665f3353,0x36752e206d617261,0x616475635f5f2034,0x5f5f35666d726170\n"
".quad 0x65726f747333315a,0x6c61767265746e49,0x66506a76456a6a49,0x535f3054505f3053\n"
".quad 0x33535f5466665f32,0x7261702e202c665f,0x203233662e206d61,0x6170616475635f5f\n"
".quad 0x315a5f5f36666d72,0x6e4965726f747333,0x6a496c6176726574,0x305366506a76456a\n"
".quad 0x5f32535f3054505f,0x665f33535f546666,0x6d617261702e202c,0x5f5f203233662e20\n"
".quad 0x6d72617061647563,0x7333315a5f5f3766,0x65746e4965726f74,0x456a6a496c617672\n"
".quad 0x505f305366506a76,0x66665f32535f3054,0x202c665f33535f54,0x2e206d617261702e\n"
".quad 0x75635f5f20323375,0x38666d7261706164,0x6f747333315a5f5f,0x767265746e496572\n"
".quad 0x6a76456a6a496c61,0x3054505f30536650,0x5f5466665f32535f,0x702e202c665f3353\n"
".quad 0x33752e206d617261,0x616475635f5f2032,0x5f5f39666d726170,0x65726f747333315a\n"
".quad 0x6c61767265746e49,0x66506a76456a6a49,0x535f3054505f3053,0x33535f5466665f32\n"
".quad 0x7261702e202c665f,0x203233662e206d61,0x6170616475635f5f,0x5a5f5f3031666d72\n"
".quad 0x4965726f74733331,0x496c61767265746e,0x5366506a76456a6a,0x32535f3054505f30\n"
".quad 0x5f33535f5466665f,0x69762e090a0a2966,0x662e20656c626973,0x32325a5f20636e75\n"
".quad 0x746e4965726f7473,0x6e6f436c61767265,0x6a49646567726576,0x5f3053665076456a\n"
".quad 0x66525f32535f5450,0x54525f33535f3353,0x5f35535f35535f30,0x36536a6a525f3253\n"
".quad 0x617261702e28205f,0x5f203436752e206d,0x726170616475635f,0x32325a5f5f31666d\n"
".quad 0x746e4965726f7473,0x6e6f436c61767265,0x6a49646567726576,0x5f3053665076456a\n"
".quad 0x66525f32535f5450,0x54525f33535f3353,0x5f35535f35535f30,0x36536a6a525f3253\n"
".quad 0x617261702e202c5f,0x5f203436752e206d,0x726170616475635f,0x32325a5f5f32666d\n"
".quad 0x746e4965726f7473,0x6e6f436c61767265,0x6a49646567726576,0x5f3053665076456a\n"
".quad 0x66525f32535f5450,0x54525f33535f3353,0x5f35535f35535f30,0x36536a6a525f3253\n"
".quad 0x617261702e202c5f,0x5f203436752e206d,0x726170616475635f,0x32325a5f5f33666d\n"
".quad 0x746e4965726f7473,0x6e6f436c61767265,0x6a49646567726576,0x5f3053665076456a\n"
".quad 0x66525f32535f5450,0x54525f33535f3353,0x5f35535f35535f30,0x36536a6a525f3253\n"
".quad 0x617261702e202c5f,0x5f203436752e206d,0x726170616475635f,0x32325a5f5f34666d\n"
".quad 0x746e4965726f7473,0x6e6f436c61767265,0x6a49646567726576,0x5f3053665076456a\n"
".quad 0x66525f32535f5450,0x54525f33535f3353,0x5f35535f35535f30,0x36536a6a525f3253\n"
".quad 0x617261702e202c5f,0x5f203436752e206d,0x726170616475635f,0x32325a5f5f35666d\n"
".quad 0x746e4965726f7473,0x6e6f436c61767265,0x6a49646567726576,0x5f3053665076456a\n"
".quad 0x66525f32535f5450,0x54525f33535f3353,0x5f35535f35535f30,0x36536a6a525f3253\n"
".quad 0x617261702e202c5f,0x5f203436752e206d,0x726170616475635f,0x32325a5f5f36666d\n"
".quad 0x746e4965726f7473,0x6e6f436c61767265,0x6a49646567726576,0x5f3053665076456a\n"
".quad 0x66525f32535f5450,0x54525f33535f3353,0x5f35535f35535f30,0x36536a6a525f3253\n"
".quad 0x617261702e202c5f,0x5f203436752e206d,0x726170616475635f,0x32325a5f5f37666d\n"
".quad 0x746e4965726f7473,0x6e6f436c61767265,0x6a49646567726576,0x5f3053665076456a\n"
".quad 0x66525f32535f5450,0x54525f33535f3353,0x5f35535f35535f30,0x36536a6a525f3253\n"
".quad 0x617261702e202c5f,0x5f203436752e206d,0x726170616475635f,0x32325a5f5f38666d\n"
".quad 0x746e4965726f7473,0x6e6f436c61767265,0x6a49646567726576,0x5f3053665076456a\n"
".quad 0x66525f32535f5450,0x54525f33535f3353,0x5f35535f35535f30,0x36536a6a525f3253\n"
".quad 0x617261702e202c5f,0x5f203436752e206d,0x726170616475635f,0x32325a5f5f39666d\n"
".quad 0x746e4965726f7473,0x6e6f436c61767265,0x6a49646567726576,0x5f3053665076456a\n"
".quad 0x66525f32535f5450,0x54525f33535f3353,0x5f35535f35535f30,0x36536a6a525f3253\n"
".quad 0x617261702e202c5f,0x5f203436752e206d,0x726170616475635f,0x325a5f5f3031666d\n"
".quad 0x6e4965726f747332,0x6f436c6176726574,0x496465677265766e,0x3053665076456a6a\n"
".quad 0x525f32535f54505f,0x525f33535f335366,0x35535f35535f3054,0x536a6a525f32535f\n"
".quad 0x7261702e202c5f36,0x203436752e206d61,0x6170616475635f5f,0x5a5f5f3131666d72\n"
".quad 0x4965726f74733232,0x436c61767265746e,0x6465677265766e6f,0x53665076456a6a49\n"
".quad 0x5f32535f54505f30,0x5f33535f33536652,0x535f35535f305452,0x6a6a525f32535f35\n"
".quad 0x61702e202c5f3653,0x3436752e206d6172,0x70616475635f5f20,0x5f5f3231666d7261\n"
".quad 0x65726f747332325a,0x6c61767265746e49,0x65677265766e6f43,0x665076456a6a4964\n"
".quad 0x32535f54505f3053,0x33535f335366525f,0x5f35535f3054525f,0x6a525f32535f3553\n"
".quad 0x702e202c5f36536a,0x33752e206d617261,0x616475635f5f2032,0x5f3331666d726170\n"
".quad 0x726f747332325a5f,0x61767265746e4965,0x677265766e6f436c,0x5076456a6a496465\n"
".quad 0x535f54505f305366,0x535f335366525f32,0x35535f3054525f33,0x525f32535f35535f\n"
".quad 0x2e202c5f36536a6a,0x752e206d61726170,0x6475635f5f203436,0x3431666d72617061\n"
".quad 0x6f747332325a5f5f,0x767265746e496572,0x7265766e6f436c61,0x76456a6a49646567\n"
".quad 0x5f54505f30536650,0x5f335366525f3253,0x535f3054525f3353,0x5f32535f35535f35\n"
".quad 0x0a295f36536a6a52,0x62697369762e090a,0x636e75662e20656c,0x65726333325a5f20\n"
".quad 0x6369646e49657461,0x6361706d6f437365,0x76456a496e6f6974,0x702e28206a5f5450\n"
".quad 0x36752e206d617261,0x616475635f5f2034,0x5f5f31666d726170,0x746165726333325a\n"
".quad 0x73656369646e4965,0x69746361706d6f43,0x545076456a496e6f,0x7261702e202c6a5f\n"
".quad 0x203233752e206d61,0x6170616475635f5f,0x325a5f5f32666d72,0x4965746165726333\n"
".quad 0x6f4373656369646e,0x6e6f69746361706d,0x6a5f545076456a49,0x7369762e090a0a29\n"
".quad 0x75662e20656c6269,0x6336315a5f20636e,0x6e49746361706d6f,0x49736c6176726574\n"
".quad 0x5f3053665076456a,0x66665f32535f5450,0x206a6a5f32536a6a,0x206d617261702e28\n"
".quad 0x635f5f203436752e,0x666d726170616475,0x6f6336315a5f5f31,0x746e49746361706d\n"
".quad 0x6a49736c61767265,0x505f305366507645,0x6a66665f32535f54,0x202c6a6a5f32536a\n"
".quad 0x2e206d617261702e,0x75635f5f20343675,0x32666d7261706164,0x6d6f6336315a5f5f\n"
".quad 0x65746e4974636170,0x456a49736c617672,0x54505f3053665076,0x6a6a66665f32535f\n"
".quad 0x2e202c6a6a5f3253,0x752e206d61726170,0x6475635f5f203436,0x5f33666d72617061\n"
".quad 0x706d6f6336315a5f,0x7265746e49746361,0x76456a49736c6176,0x5f54505f30536650\n"
".quad 0x536a6a66665f3253,0x702e202c6a6a5f32,0x36752e206d617261,0x616475635f5f2034\n"
".quad 0x5f5f34666d726170,0x61706d6f6336315a,0x767265746e497463,0x5076456a49736c61\n"
".quad 0x535f54505f305366,0x32536a6a66665f32,0x61702e202c6a6a5f,0x3233662e206d6172\n"
".quad 0x70616475635f5f20,0x5a5f5f35666d7261,0x6361706d6f633631,0x61767265746e4974\n"
".quad 0x665076456a49736c,0x32535f54505f3053,0x5f32536a6a66665f,0x7261702e202c6a6a\n"
".quad 0x203233662e206d61,0x6170616475635f5f,0x315a5f5f36666d72,0x746361706d6f6336\n"
".quad 0x6c61767265746e49,0x53665076456a4973,0x5f32535f54505f30,0x6a5f32536a6a6666\n"
".quad 0x617261702e202c6a,0x5f203233752e206d,0x726170616475635f,0x36315a5f5f37666d\n"
".quad 0x49746361706d6f63,0x736c61767265746e,0x3053665076456a49,0x665f32535f54505f\n"
".quad 0x6a6a5f32536a6a66,0x6d617261702e202c,0x5f5f203233752e20,0x6d72617061647563\n"
".quad 0x6336315a5f5f3866,0x6e49746361706d6f,0x49736c6176726574,0x5f3053665076456a\n"
".quad 0x66665f32535f5450,0x2c6a6a5f32536a6a,0x206d617261702e20,0x635f5f203436752e\n"
".quad 0x666d726170616475,0x6f6336315a5f5f39,0x746e49746361706d,0x6a49736c61767265\n"
".quad 0x505f305366507645,0x6a66665f32535f54,0x202c6a6a5f32536a,0x2e206d617261702e\n"
".quad 0x75635f5f20323375,0x31666d7261706164,0x6f6336315a5f5f30,0x746e49746361706d\n"
".quad 0x6a49736c61767265,0x505f305366507645,0x6a66665f32535f54,0x202c6a6a5f32536a\n"
".quad 0x2e206d617261702e,0x75635f5f20323375,0x31666d7261706164,0x6f6336315a5f5f31\n"
".quad 0x746e49746361706d,0x6a49736c61767265,0x505f305366507645,0x6a66665f32535f54\n"
".quad 0x0a296a6a5f32536a,0x2d2d2d2d2f2f090a,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x0a2d2d2d2d2d2d2d,0x706d6f43202f2f09,0x742f20676e696c69,0x6678706d742f706d\n"
".quad 0x3631303030305f74,0x30303030305f3763,0x69625f372d303030,0x616d735f74636573\n"
".quad 0x2e337070632e6c6c,0x2f706d742f282069,0x33742e2349426363,0x2f090a29334f7143\n"
".quad 0x2d2d2d2d2d2d2d2f,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2f090a0a2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2f,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2f2f090a2d2d2d2d\n"
".quad 0x736e6f6974704f20,0x2d2d2d2f2f090a3a,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x615420202f2f090a,0x7874703a74656772,0x6d733a415349202c\n"
".quad 0x646e45202c30325f,0x7474696c3a6e6169,0x6e696f50202c656c,0x657a695320726574\n"
".quad 0x202f2f090a34363a,0x704f2809334f2d20,0x6974617a696d6974,0x6c6576656c206e6f\n"
".quad 0x2d20202f2f090a29,0x7562654428093067,0x296c6576656c2067,0x6d2d20202f2f090a\n"
".quad 0x726f706552280932,0x6f73697664612074,0x2f090a2973656972,0x2d2d2d2d2d2d2d2f\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2e090a0a2d2d2d2d,0x22093109656c6966\n"
".quad 0x646e616d6d6f633c,0x0a223e656e696c2d,0x3209656c69662e09,0x742f706d742f2209\n"
".quad 0x30305f746678706d,0x305f376336313030,0x2d30303030303030,0x7463657369625f36\n"
".quad 0x632e6c6c616d735f,0x672e326566616475,0x69662e090a227570,0x752f22093309656c\n"
".quad 0x672f62696c2f7273,0x2d363836692f6363,0x6e672d78756e696c,0x2f352e342e342f75\n"
".quad 0x2f6564756c636e69,0x682e666564647473,0x656c69662e090a22,0x7273752f22093409\n"
".quad 0x632f6c61636f6c2f,0x2f6e69622f616475,0x756c636e692f2e2e,0x642f7472632f6564\n"
".quad 0x75725f6563697665,0x22682e656d69746e,0x09656c69662e090a,0x2f7273752f220935\n"
".quad 0x75632f6c61636f6c,0x2e2f6e69622f6164,0x64756c636e692f2e,0x645f74736f682f65\n"
".quad 0x682e73656e696665,0x656c69662e090a22,0x7273752f22093609,0x632f6c61636f6c2f\n"
".quad 0x2f6e69622f616475,0x756c636e692f2e2e,0x746c6975622f6564,0x73657079745f6e69\n"
".quad 0x69662e090a22682e,0x752f22093709656c,0x6c61636f6c2f7273,0x69622f616475632f\n"
".quad 0x636e692f2e2e2f6e,0x7665642f6564756c,0x657079745f656369,0x662e090a22682e73\n"
".quad 0x2f22093809656c69,0x61636f6c2f727375,0x622f616475632f6c,0x6e692f2e2e2f6e69\n"
".quad 0x72642f6564756c63,0x7079745f72657669,0x2e090a22682e7365,0x22093909656c6966\n"
".quad 0x636f6c2f7273752f,0x2f616475632f6c61,0x692f2e2e2f6e6962,0x732f6564756c636e\n"
".quad 0x745f656361667275,0x0a22682e73657079,0x3109656c69662e09,0x2f7273752f220930\n"
".quad 0x75632f6c61636f6c,0x2e2f6e69622f6164,0x64756c636e692f2e,0x7275747865742f65\n"
".quad 0x2e73657079745f65,0x6c69662e090a2268,0x752f220931310965,0x6c61636f6c2f7273\n"
".quad 0x69622f616475632f,0x636e692f2e2e2f6e,0x6365762f6564756c,0x657079745f726f74\n"
".quad 0x662e090a22682e73,0x2209323109656c69,0x636f6c2f7273752f,0x2f616475632f6c61\n"
".quad 0x692f2e2e2f6e6962,0x642f6564756c636e,0x616c5f6563697665,0x7261705f68636e75\n"
".quad 0x2e73726574656d61,0x6c69662e090a2268,0x752f220933310965,0x6c61636f6c2f7273\n"
".quad 0x69622f616475632f,0x636e692f2e2e2f6e,0x7472632f6564756c,0x656761726f74732f\n"
".quad 0x682e7373616c635f,0x656c69662e090a22,0x73752f2209343109,0x64756c636e692f72\n"
".quad 0x742f737469622f65,0x0a22682e73657079,0x3109656c69662e09,0x2f7273752f220935\n"
".quad 0x2f6564756c636e69,0x0a22682e656d6974,0x3109656c69662e09,0x656d6f682f220936\n"
".quad 0x2f6c616d726f6e2f,0x74756f6b63656863,0x6c65636f7570672f,0x73747365742f746f\n"
".quad 0x312e322d7874702d,0x322e32616475632f,0x652f73747365742f,0x756c61766e656769\n"
".quad 0x63657369622f7365,0x632e6c6974755f74,0x6c69662e090a2275,0x752f220937310965\n"
".quad 0x756c636e692f7273,0x342f2b2b632f6564,0x6874616d632f342e,0x656c69662e090a22\n"
".quad 0x73752f2209383109,0x2f6c61636f6c2f72,0x6e69622f61647563,0x6c636e692f2e2e2f\n"
".quad 0x6d6d6f632f656475,0x74636e75665f6e6f,0x0a22682e736e6f69,0x3109656c69662e09\n"
".quad 0x2f7273752f220939,0x75632f6c61636f6c,0x2e2f6e69622f6164,0x64756c636e692f2e\n"
".quad 0x665f6874616d2f65,0x736e6f6974636e75,0x69662e090a22682e,0x2f2209303209656c\n"
".quad 0x61636f6c2f727375,0x622f616475632f6c,0x6e692f2e2e2f6e69,0x616d2f6564756c63\n"
".quad 0x74736e6f635f6874,0x0a22682e73746e61,0x3209656c69662e09,0x2f7273752f220931\n"
".quad 0x75632f6c61636f6c,0x2e2f6e69622f6164,0x64756c636e692f2e,0x6563697665642f65\n"
".quad 0x6f6974636e75665f,0x2e090a22682e736e,0x09323209656c6966,0x6f6c2f7273752f22\n"
".quad 0x616475632f6c6163,0x2f2e2e2f6e69622f,0x2f6564756c636e69,0x74615f31315f6d73\n"
".quad 0x6e75665f63696d6f,0x682e736e6f697463,0x656c69662e090a22,0x73752f2209333209\n"
".quad 0x2f6c61636f6c2f72,0x6e69622f61647563,0x6c636e692f2e2e2f,0x315f6d732f656475\n"
".quad 0x63696d6f74615f32,0x6f6974636e75665f,0x2e090a22682e736e,0x09343209656c6966\n"
".quad 0x6f6c2f7273752f22,0x616475632f6c6163,0x2f2e2e2f6e69622f,0x2f6564756c636e69\n"
".quad 0x6f645f33315f6d73,0x6e75665f656c6275,0x682e736e6f697463,0x656c69662e090a22\n"
".quad 0x73752f2209353209,0x2f6c61636f6c2f72,0x6e69622f61647563,0x6c636e692f2e2e2f\n"
".quad 0x325f6d732f656475,0x63696d6f74615f30,0x6f6974636e75665f,0x2e090a22682e736e\n"
".quad 0x09363209656c6966,0x6f6c2f7273752f22,0x616475632f6c6163,0x2f2e2e2f6e69622f\n"
".quad 0x2f6564756c636e69,0x6e695f30325f6d73,0x736369736e697274,0x69662e090a22682e\n"
".quad 0x2f2209373209656c,0x61636f6c2f727375,0x622f616475632f6c,0x6e692f2e2e2f6e69\n"
".quad 0x75732f6564756c63,0x75665f6563616672,0x2e736e6f6974636e,0x6c69662e090a2268\n"
".quad 0x752f220938320965,0x6c61636f6c2f7273,0x69622f616475632f,0x636e692f2e2e2f6e\n"
".quad 0x7865742f6564756c,0x7465665f65727574,0x74636e75665f6863,0x0a22682e736e6f69\n"
".quad 0x3209656c69662e09,0x2f7273752f220939,0x75632f6c61636f6c,0x2e2f6e69622f6164\n"
".quad 0x64756c636e692f2e,0x665f6874616d2f65,0x736e6f6974636e75,0x7874705f6c62645f\n"
".quad 0x662e090a22682e33,0x2209303309656c69,0x6f6e2f656d6f682f,0x6568632f6c616d72\n"
".quad 0x70672f74756f6b63,0x2f746f6c65636f75,0x74702d7374736574,0x75632f312e322d78\n"
".quad 0x65742f322e326164,0x656769652f737473,0x2f7365756c61766e,0x6b5f746365736962\n"
".quad 0x6d735f6c656e7265,0x0a2275632e6c6c61,0x697369762e090a0a,0x6e75662e20656c62\n"
".quad 0x617261702e282063,0x5f203233732e206d,0x746572616475635f,0x696563385a5f5f66\n"
".quad 0x20296932776f506c,0x506c696563385a5f,0x702e28206932776f,0x33732e206d617261\n"
".quad 0x616475635f5f2032,0x5f5f31666d726170,0x6f506c696563385a,0x0a7b090a29693277\n"
".quad 0x752e206765722e09,0x34323c7225203233,0x6765722e090a3b3e,0x6625203233662e20\n"
".quad 0x722e090a3b3e383c,0x646572702e206765,0x0a3b3e343c702520,0x363109636f6c2e09\n"
".quad 0x4c240a3009393609,0x5f6e696765625744,0x506c696563385a5f,0x6c090a3a6932776f\n"
".quad 0x2e6d617261702e64,0x3172250920323375,0x6475635f5f5b202c,0x5f31666d72617061\n"
".quad 0x506c696563385a5f,0x090a3b5d6932776f,0x203233732e766f6d,0x7225202c32722509\n"
".quad 0x2e627573090a3b31,0x3372250920323373,0x31202c327225202c,0x622e646e61090a3b\n"
".quad 0x2c34722509203233,0x7225202c32722520,0x2e766f6d090a3b33,0x3572250920323375\n"
".quad 0x6573090a3b30202c,0x33732e656e2e7074,0x202c317025092032,0x357225202c347225\n"
".quad 0x2031702540090a3b,0x744c240920617262,0x3b383138325f305f,0x3109636f6c2e090a\n"
".quad 0x090a300933370936,0x203233732e766f6d,0x7225202c36722509,0x2e617262090a3b32\n"
".quad 0x424c240920696e75,0x6563385a5f5f3742,0x3b6932776f506c69,0x325f305f744c240a\n"
".quad 0x6c2e090a3a383138,0x383209373109636f,0x747663090a300935,0x2e3233662e6e722e\n"
".quad 0x3166250920323373,0x090a3b327225202c,0x203233662e766f6d,0x6625202c32662509\n"
".quad 0x2e736261090a3b31,0x3366250920323366,0x090a3b316625202c,0x203233662e766f6d\n"
".quad 0x6630202c34662509,0x3030303030383030,0x2f0920202020203b,0x343537312e31202f\n"
".quad 0x73090a38332d6539,0x662e746c2e707465,0x2c32702509203233,0x6625202c33662520\n"
".quad 0x70252140090a3b34,0x2409206172622032,0x3835335f305f744c,0x636f6c2e090a3b36\n"
".quad 0x3336333209393109,0x2e766f6d090a3009,0x3566250920323366,0x303862346630202c\n"
".quad 0x2020203b30303030,0x2e31202f2f092020,0x302b653237373736,0x662e6c756d090a37\n"
".quad 0x2c32662509203233,0x6625202c31662520,0x2e766f6d090a3b35,0x3772250920323375\n"
".quad 0x62090a3b3432202c,0x0920696e752e6172,0x33335f305f744c24,0x5f744c240a3b3033\n"
".quad 0x0a3a363835335f30,0x393109636f6c2e09,0x0a30093636333209,0x3233752e766f6d09\n"
".quad 0x30202c3772250920,0x5f305f744c240a3b,0x2e090a3a30333333,0x3709363109636f6c\n"
".quad 0x766f6d090a300938,0x722509203233622e,0x0a3b326625202c38,0x3233732e72687309\n"
".quad 0x25202c3972250920,0x0a3b3332202c3872,0x3233622e646e6109,0x202c303172250920\n"
".quad 0x353532202c397225,0x752e766f6d090a3b,0x3131722509203233,0x7573090a3b30202c\n"
".quad 0x2509203233752e62,0x317225202c323172,0x0a3b377225202c30,0x3233752e62757309\n"
".quad 0x202c333172250920,0x3231202c32317225,0x2e766f6d090a3b36,0x3172250920323375\n"
".quad 0x0a3b353532202c34,0x2e71652e74657309,0x203233752e323375,0x25202c3531722509\n"
".quad 0x317225202c303172,0x2e67656e090a3b34,0x3172250920323373,0x3b35317225202c36\n"
".quad 0x33662e766f6d090a,0x202c366625092032,0x3030303030306630,0x20202020203b3030\n"
".quad 0x73090a30202f2f09,0x33752e71652e7465,0x2509203233662e32,0x336625202c373172\n"
".quad 0x090a3b366625202c,0x203233732e67656e,0x25202c3831722509,0x726f090a3b373172\n"
".quad 0x722509203233622e,0x36317225202c3931,0x0a3b38317225202c,0x3233732e67656e09\n"
".quad 0x202c303272250920,0x73090a3b39317225,0x2e3233752e74636c,0x3272250920323373\n"
".quad 0x2c33317225202c31,0x25202c3131722520,0x6873090a3b303272,0x2509203233622e6c\n"
".quad 0x25202c31202c3672,0x424c240a3b313272,0x6563385a5f5f3742,0x3a6932776f506c69\n"
".quad 0x33732e766f6d090a,0x2c32327225092032,0x73090a3b36722520,0x2e6d617261702e74\n"
".quad 0x5f5f5b0920323373,0x6674657261647563,0x6c696563385a5f5f,0x202c5d6932776f50\n"
".quad 0x72090a3b32327225,0x57444c240a3b7465,0x63385a5f5f646e65,0x6932776f506c6965\n"
".quad 0x202f2f207d090a3a,0x506c696563385a5f,0x2e090a0a6932776f,0x20656c6269736976\n"
".quad 0x2e2820636e75662e,0x752e206d61726170,0x6475635f5f203233,0x5a5f5f6674657261\n"
".quad 0x7475706d6f633632,0x6c616d536d754e65,0x6e6567694572656c,0x5f536650736c6176\n"
".quad 0x5f535f536a6a666a,0x6336325a5f20296a,0x754e657475706d6f,0x72656c6c616d536d\n"
".quad 0x6c61766e65676945,0x6a666a5f53665073,0x28206a5f535f536a,0x2e206d617261702e\n"
".quad 0x75635f5f20343675,0x31666d7261706164,0x6d6f6336325a5f5f,0x536d754e65747570\n"
".quad 0x694572656c6c616d,0x50736c61766e6567,0x536a6a666a5f5366,0x702e202c6a5f535f\n"
".quad 0x36752e206d617261,0x616475635f5f2034,0x5f5f32666d726170,0x75706d6f6336325a\n"
".quad 0x616d536d754e6574,0x6567694572656c6c,0x536650736c61766e,0x535f536a6a666a5f\n"
".quad 0x7261702e202c6a5f,0x203233752e206d61,0x6170616475635f5f,0x325a5f5f33666d72\n"
".quad 0x657475706d6f6336,0x6c6c616d536d754e,0x766e656769457265,0x6a5f536650736c61\n"
".quad 0x6a5f535f536a6a66,0x6d617261702e202c,0x5f5f203233662e20,0x6d72617061647563\n"
".quad 0x6336325a5f5f3466,0x754e657475706d6f,0x72656c6c616d536d,0x6c61766e65676945\n"
".quad 0x6a666a5f53665073,0x202c6a5f535f536a,0x2e206d617261702e,0x75635f5f20323375\n"
".quad 0x35666d7261706164,0x6d6f6336325a5f5f,0x536d754e65747570,0x694572656c6c616d\n"
".quad 0x50736c61766e6567,0x536a6a666a5f5366,0x702e202c6a5f535f,0x33752e206d617261\n"
".quad 0x616475635f5f2032,0x5f5f36666d726170,0x75706d6f6336325a,0x616d536d754e6574\n"
".quad 0x6567694572656c6c,0x536650736c61766e,0x535f536a6a666a5f,0x7261702e202c6a5f\n"
".quad 0x203436752e206d61,0x6170616475635f5f,0x325a5f5f37666d72,0x657475706d6f6336\n"
".quad 0x6c6c616d536d754e,0x766e656769457265,0x6a5f536650736c61,0x6a5f535f536a6a66\n"
".quad 0x6d617261702e202c,0x5f5f203436752e20,0x6d72617061647563,0x6336325a5f5f3866\n"
".quad 0x754e657475706d6f,0x72656c6c616d536d,0x6c61766e65676945,0x6a666a5f53665073\n"
".quad 0x202c6a5f535f536a,0x2e206d617261702e,0x75635f5f20323375,0x39666d7261706164\n"
".quad 0x6d6f6336325a5f5f,0x536d754e65747570,0x694572656c6c616d,0x50736c61766e6567\n"
".quad 0x536a6a666a5f5366,0x7b090a296a5f535f,0x2e206765722e090a,0x323c722520323375\n"
".quad 0x65722e090a3b3e38,0x25203436752e2067,0x0a3b3e38313c6472,0x662e206765722e09\n"
".quad 0x33313c6625203233,0x6765722e090a3b3e,0x2520646572702e20,0x2e090a3b3e363c70\n"
".quad 0x3109363109636f6c,0x444c240a30093737,0x5f5f6e6967656257,0x75706d6f6336325a\n"
".quad 0x616d536d754e6574,0x6567694572656c6c,0x536650736c61766e,0x535f536a6a666a5f\n"
".quad 0x2e646c090a3a6a5f,0x36752e6d61726170,0x2c31647225092034,0x616475635f5f5b20\n"
".quad 0x5f5f31666d726170,0x75706d6f6336325a,0x616d536d754e6574,0x6567694572656c6c\n"
".quad 0x536650736c61766e,0x535f536a6a666a5f,0x6f6d090a3b5d6a5f,0x2509203436732e76\n"
".quad 0x647225202c326472,0x702e646c090a3b31,0x3436752e6d617261,0x202c336472250920\n"
".quad 0x70616475635f5f5b,0x5a5f5f32666d7261,0x7475706d6f633632,0x6c616d536d754e65\n"
".quad 0x6e6567694572656c,0x5f536650736c6176,0x5f535f536a6a666a,0x766f6d090a3b5d6a\n"
".quad 0x722509203436732e,0x33647225202c3464,0x61702e646c090a3b,0x203233752e6d6172\n"
".quad 0x5f5b202c31722509,0x726170616475635f,0x36325a5f5f33666d,0x4e657475706d6f63\n"
".quad 0x656c6c616d536d75,0x61766e6567694572,0x666a5f536650736c,0x5d6a5f535f536a6a\n"
".quad 0x732e766f6d090a3b,0x2c32722509203233,0x6c090a3b31722520,0x2e6d617261702e64\n"
".quad 0x3166250920323366,0x6475635f5f5b202c,0x5f34666d72617061,0x706d6f6336325a5f\n"
".quad 0x6d536d754e657475,0x67694572656c6c61,0x6650736c61766e65,0x5f536a6a666a5f53\n"
".quad 0x6d090a3b5d6a5f53,0x09203233662e766f,0x316625202c326625,0x61702e646c090a3b\n"
".quad 0x203233752e6d6172,0x5f5b202c33722509,0x726170616475635f,0x36325a5f5f35666d\n"
".quad 0x4e657475706d6f63,0x656c6c616d536d75,0x61766e6567694572,0x666a5f536650736c\n"
".quad 0x5d6a5f535f536a6a,0x732e766f6d090a3b,0x2c34722509203233,0x6c090a3b33722520\n"
".quad 0x2e6d617261702e64,0x3572250920323375,0x6475635f5f5b202c,0x5f36666d72617061\n"
".quad 0x706d6f6336325a5f,0x6d536d754e657475,0x67694572656c6c61,0x6650736c61766e65\n"
".quad 0x5f536a6a666a5f53,0x6d090a3b5d6a5f53,0x09203233732e766f,0x357225202c367225\n"
".quad 0x61702e646c090a3b,0x203436752e6d6172,0x5b202c3564722509,0x6170616475635f5f\n"
".quad 0x325a5f5f37666d72,0x657475706d6f6336,0x6c6c616d536d754e,0x766e656769457265\n"
".quad 0x6a5f536650736c61,0x6a5f535f536a6a66,0x2e766f6d090a3b5d,0x6472250920343673\n"
".quad 0x3b35647225202c36,0x7261702e646c090a,0x09203436752e6d61,0x5f5b202c37647225\n"
".quad 0x726170616475635f,0x36325a5f5f38666d,0x4e657475706d6f63,0x656c6c616d536d75\n"
".quad 0x61766e6567694572,0x666a5f536650736c,0x5d6a5f535f536a6a,0x732e766f6d090a3b\n"
".quad 0x3864722509203436,0x0a3b37647225202c,0x617261702e646c09,0x2509203233752e6d\n"
".quad 0x635f5f5b202c3772,0x666d726170616475,0x6f6336325a5f5f39,0x6d754e657475706d\n"
".quad 0x4572656c6c616d53,0x736c61766e656769,0x6a6a666a5f536650,0x0a3b5d6a5f535f53\n"
".quad 0x3233732e766f6d09,0x25202c3872250920,0x6f6c2e090a3b3772,0x3238310936310963\n"
".quad 0x2e766f6d090a3009,0x3972250920323375,0x782e64697425202c,0x2e70746573090a3b\n"
".quad 0x09203233752e656c,0x327225202c317025,0x090a3b397225202c,0x6172622031702540\n"
".quad 0x5f315f744c240920,0x2e090a3b36383533,0x3109363109636f6c,0x756d090a30093638\n"
".quad 0x3233752e6f6c2e6c,0x202c303172250920,0x0a3b34202c397225,0x3436752e74766309\n"
".quad 0x722509203233752e,0x30317225202c3964,0x752e646461090a3b,0x3164722509203436\n"
".quad 0x2c39647225202c30,0x090a3b3264722520,0x09203233662e646c,0x72255b202c336625\n"
".quad 0x0a3b5d302b303164,0x3436752e64646109,0x2c31316472250920,0x25202c3964722520\n"
".quad 0x7473090a3b366472,0x255b09203233662e,0x2c5d302b31316472,0x2e090a3b33662520\n"
".quad 0x3109363109636f6c,0x6461090a30093738,0x2509203436752e64,0x7225202c32316472\n"
".quad 0x34647225202c3964,0x33662e646c090a3b,0x202c346625092032,0x2d2b32316472255b\n"
".quad 0x646461090a3b5d34,0x722509203436752e,0x647225202c333164,0x3b38647225202c39\n"
".quad 0x3233662e7473090a,0x33316472255b0920,0x346625202c5d302b,0x5f315f744c240a3b\n"
".quad 0x2e090a3a36383533,0x3109363109636f6c,0x6162090a30093039,0x0920636e79732e72\n"
".quad 0x2e766f6d090a3b30,0x3172250920323375,0x73090a3b30202c31,0x33752e71652e7465\n"
".quad 0x2509203233752e32,0x387225202c323172,0x0a3b31317225202c,0x3233732e67656e09\n"
".quad 0x202c333172250920,0x73090a3b32317225,0x33752e746c2e7465,0x2509203233752e32\n"
".quad 0x347225202c343172,0x090a3b367225202c,0x203233732e67656e,0x25202c3531722509\n"
".quad 0x6e61090a3b343172,0x2509203233622e64,0x317225202c363172,0x3b35317225202c33\n"
".quad 0x33752e766f6d090a,0x2c37317225092032,0x746573090a3b3020,0x3233732e71652e70\n"
".quad 0x25202c3270250920,0x317225202c363172,0x32702540090a3b37,0x4c24092061726220\n"
".quad 0x343533345f315f74,0x752e766f6d090a3b,0x3831722509203233,0x6573090a3b30202c\n"
".quad 0x33752e71652e7074,0x202c337025092032,0x317225202c327225,0x33702540090a3b38\n"
".quad 0x4c24092061726220,0x343336355f315f74,0x732e766f6d090a3b,0x3931722509203233\n"
".quad 0x090a3b327225202c,0x203233752e766f6d,0x30202c3032722509,0x6c2e6c756d090a3b\n"
".quad 0x2509203233752e6f,0x327225202c313272,0x6f6d090a3b34202c,0x2509203233752e76\n"
".quad 0x0a3b30202c323272,0x3233662e766f6d09,0x30202c3566250920,0x3030303038663366\n"
".quad 0x0920202020203b30,0x6f6d090a31202f2f,0x2509203233732e76,0x317225202c333272\n"
".quad 0x315f744c240a3b39,0x200a3a323231355f,0x3e706f6f6c3c2f2f,0x6f6220706f6f4c20\n"
".quad 0x20656e696c207964,0x73656e202c303931,0x70656420676e6974,0x65202c31203a6874\n"
".quad 0x646574616d697473,0x6974617265746920,0x6b6e75203a736e6f,0x6c2e090a6e776f6e\n"
".quad 0x393109363109636f,0x747663090a300938,0x3233752e3436752e,0x2c34316472250920\n"
".quad 0x090a3b3032722520,0x203436752e646461,0x202c353164722509,0x25202c3431647225\n"
".quad 0x646c090a3b386472,0x662509203233662e,0x316472255b202c36,0x61090a3b5d302b35\n"
".quad 0x09203436752e6464,0x25202c3631647225,0x7225202c34316472,0x2e646c090a3b3664\n"
".quad 0x3766250920323366,0x36316472255b202c,0x7573090a3b5d302b,0x2509203233662e62\n"
".quad 0x2c376625202c3866,0x6d090a3b32662520,0x09203233662e6c75,0x366625202c396625\n"
".quad 0x090a3b366625202c,0x662e6e722e766964,0x3031662509203233,0x25202c396625202c\n"
".quad 0x627573090a3b3566,0x662509203233662e,0x202c386625202c35,0x2e090a3b30316625\n"
".quad 0x3109363109636f6c,0x6f6d090a30093939,0x2509203233662e76,0x306630202c313166\n"
".quad 0x3b30303030303030,0x202f2f0920202020,0x6c2e746573090a30,0x33662e3233752e74\n"
".quad 0x2c34327225092032,0x6625202c35662520,0x67656e090a3b3131,0x722509203233732e\n"
".quad 0x34327225202c3532,0x752e646461090a3b,0x3232722509203233,0x202c32327225202c\n"
".quad 0x61090a3b35327225,0x09203233752e6464,0x7225202c30327225,0x090a3b34202c3032\n"
".quad 0x2e656e2e70746573,0x3470250920323375,0x202c30327225202c,0x40090a3b31327225\n"
".quad 0x2061726220347025,0x355f315f744c2409,0x7262090a3b323231,0x240920696e752e61\n"
".quad 0x3930345f315f744c,0x315f744c240a3b38,0x090a3a343336355f,0x203233752e766f6d\n"
".quad 0x30202c3232722509,0x752e617262090a3b,0x5f744c240920696e,0x0a3b383930345f31\n"
".quad 0x33345f315f744c24,0x766f6d090a3a3435,0x722509203233752e,0x240a3b30202c3232\n"
".quad 0x3930345f315f744c,0x636f6c2e090a3a38,0x0934303209363109,0x732e766f6d090a30\n"
".quad 0x3632722509203233,0x0a3b32327225202c,0x617261702e747309,0x5b09203233752e6d\n"
".quad 0x6572616475635f5f,0x6336325a5f5f6674,0x754e657475706d6f,0x72656c6c616d536d\n"
".quad 0x6c61766e65676945,0x6a666a5f53665073,0x2c5d6a5f535f536a,0x090a3b3632722520\n"
".quad 0x444c240a3b746572,0x325a5f5f646e6557,0x657475706d6f6336,0x6c6c616d536d754e\n"
".quad 0x766e656769457265,0x6a5f536650736c61,0x6a5f535f536a6a66,0x202f2f207d090a3a\n"
".quad 0x706d6f6336325a5f,0x6d536d754e657475,0x67694572656c6c61,0x6650736c61766e65\n"
".quad 0x5f536a6a666a5f53,0x762e090a0a6a5f53,0x2e20656c62697369,0x325a5f20636e7566\n"
".quad 0x6976696462757333,0x6576697463416564,0x6c61767265746e49,0x5366506a76456a49\n"
".quad 0x5f32535f54505f30,0x6a525f335366526a,0x34535f33535f3453,0x617261702e28205f\n"
".quad 0x5f203233752e206d,0x726170616475635f,0x33325a5f5f31666d,0x6469766964627573\n"
".quad 0x4965766974634165,0x496c61767265746e,0x305366506a76456a,0x6a5f32535f54505f\n"
".quad 0x536a525f33536652,0x5f34535f33535f34,0x6d617261702e202c,0x5f5f203436752e20\n"
".quad 0x6d72617061647563,0x7333325a5f5f3266,0x6564697669646275,0x6e49657669746341\n"
".quad 0x6a496c6176726574,0x5f305366506a7645,0x526a5f32535f5450,0x34536a525f335366\n"
".quad 0x2c5f34535f33535f,0x206d617261702e20,0x635f5f203436752e,0x666d726170616475\n"
".quad 0x757333325a5f5f33,0x4165646976696462,0x746e496576697463,0x456a496c61767265\n"
".quad 0x505f305366506a76,0x66526a5f32535f54,0x5f34536a525f3353,0x202c5f34535f3353\n"
".quad 0x2e206d617261702e,0x75635f5f20343675,0x34666d7261706164,0x62757333325a5f5f\n"
".quad 0x6341656469766964,0x65746e4965766974,0x76456a496c617672,0x54505f305366506a\n"
".quad 0x5366526a5f32535f,0x535f34536a525f33,0x2e202c5f34535f33,0x752e206d61726170\n"
".quad 0x6475635f5f203436,0x5f35666d72617061,0x6462757333325a5f,0x7463416564697669\n"
".quad 0x7265746e49657669,0x6a76456a496c6176,0x5f54505f30536650,0x335366526a5f3253\n"
".quad 0x33535f34536a525f,0x702e202c5f34535f,0x33752e206d617261,0x616475635f5f2032\n"
".quad 0x5f5f36666d726170,0x696462757333325a,0x6974634165646976,0x767265746e496576\n"
".quad 0x506a76456a496c61,0x535f54505f305366,0x5f335366526a5f32,0x5f33535f34536a52\n"
".quad 0x61702e202c5f3453,0x3436752e206d6172,0x70616475635f5f20,0x5a5f5f37666d7261\n"
".quad 0x7669646275733332,0x7669746341656469,0x61767265746e4965,0x66506a76456a496c\n"
".quad 0x32535f54505f3053,0x525f335366526a5f,0x535f33535f34536a,0x7261702e202c5f34\n"
".quad 0x203436752e206d61,0x6170616475635f5f,0x325a5f5f38666d72,0x6976696462757333\n"
".quad 0x6576697463416564,0x6c61767265746e49,0x5366506a76456a49,0x5f32535f54505f30\n"
".quad 0x6a525f335366526a,0x34535f33535f3453,0x617261702e202c5f,0x5f203436752e206d\n"
".quad 0x726170616475635f,0x33325a5f5f39666d,0x6469766964627573,0x4965766974634165\n"
".quad 0x496c61767265746e,0x305366506a76456a,0x6a5f32535f54505f,0x536a525f33536652\n"
".quad 0x5f34535f33535f34,0x6d617261702e202c,0x5f5f203436752e20,0x6d72617061647563\n"
".quad 0x33325a5f5f303166,0x6469766964627573,0x4965766974634165,0x496c61767265746e\n"
".quad 0x305366506a76456a,0x6a5f32535f54505f,0x536a525f33536652,0x5f34535f33535f34\n"
".quad 0x6d617261702e202c,0x5f5f203436752e20,0x6d72617061647563,0x33325a5f5f313166\n"
".quad 0x6469766964627573,0x4965766974634165,0x496c61767265746e,0x305366506a76456a\n"
".quad 0x6a5f32535f54505f,0x536a525f33536652,0x5f34535f33535f34,0x6d617261702e202c\n"
".quad 0x5f5f203436752e20,0x6d72617061647563,0x33325a5f5f323166,0x6469766964627573\n"
".quad 0x4965766974634165,0x496c61767265746e,0x305366506a76456a,0x6a5f32535f54505f\n"
".quad 0x536a525f33536652,0x5f34535f33535f34,0x722e090a7b090a29,0x203233752e206765\n"
".quad 0x0a3b3e36313c7225,0x752e206765722e09,0x323c647225203436,0x65722e090a3b3e37\n"
".quad 0x25203233662e2067,0x090a3b3e35313c66,0x72702e206765722e,0x3e373c7025206465\n"
".quad 0x09636f6c2e090a3b,0x3009323935093631,0x67656257444c240a,0x7333325a5f5f6e69\n"
".quad 0x6564697669646275,0x6e49657669746341,0x6a496c6176726574,0x5f305366506a7645\n"
".quad 0x526a5f32535f5450,0x34536a525f335366,0x3a5f34535f33535f,0x7261702e646c090a\n"
".quad 0x09203233752e6d61,0x5f5f5b202c317225,0x6d72617061647563,0x7333325a5f5f3166\n"
".quad 0x6564697669646275,0x6e49657669746341,0x6a496c6176726574,0x5f305366506a7645\n"
".quad 0x526a5f32535f5450,0x34536a525f335366,0x5d5f34535f33535f,0x732e766f6d090a3b\n"
".quad 0x2c32722509203233,0x6c090a3b31722520,0x2e6d617261702e64,0x6472250920343675\n"
".quad 0x75635f5f5b202c31,0x32666d7261706164,0x62757333325a5f5f,0x6341656469766964\n"
".quad 0x65746e4965766974,0x76456a496c617672,0x54505f305366506a,0x5366526a5f32535f\n"
".quad 0x535f34536a525f33,0x0a3b5d5f34535f33,0x3436732e766f6d09,0x202c326472250920\n"
".quad 0x6c090a3b31647225,0x2e6d617261702e64,0x6472250920343675,0x75635f5f5b202c33\n"
".quad 0x33666d7261706164,0x62757333325a5f5f,0x6341656469766964,0x65746e4965766974\n"
".quad 0x76456a496c617672,0x54505f305366506a,0x5366526a5f32535f,0x535f34536a525f33\n"
".quad 0x0a3b5d5f34535f33,0x3436732e766f6d09,0x202c346472250920,0x6c090a3b33647225\n"
".quad 0x2e6d617261702e64,0x6472250920343675,0x75635f5f5b202c35,0x34666d7261706164\n"
".quad 0x62757333325a5f5f,0x6341656469766964,0x65746e4965766974,0x76456a496c617672\n"
".quad 0x54505f305366506a,0x5366526a5f32535f,0x535f34536a525f33,0x0a3b5d5f34535f33\n"
".quad 0x3436732e766f6d09,0x202c366472250920,0x6c090a3b35647225,0x2e6d617261702e64\n"
".quad 0x6472250920343675,0x75635f5f5b202c37,0x35666d7261706164,0x62757333325a5f5f\n"
".quad 0x6341656469766964,0x65746e4965766974,0x76456a496c617672,0x54505f305366506a\n"
".quad 0x5366526a5f32535f,0x535f34536a525f33,0x0a3b5d5f34535f33,0x3436732e766f6d09\n"
".quad 0x202c386472250920,0x6c090a3b37647225,0x2e6d617261702e64,0x3372250920323375\n"
".quad 0x6475635f5f5b202c,0x5f36666d72617061,0x6462757333325a5f,0x7463416564697669\n"
".quad 0x7265746e49657669,0x6a76456a496c6176,0x5f54505f30536650,0x335366526a5f3253\n"
".quad 0x33535f34536a525f,0x090a3b5d5f34535f,0x203233732e766f6d,0x7225202c34722509\n"
".quad 0x702e646c090a3b33,0x3436752e6d617261,0x202c396472250920,0x70616475635f5f5b\n"
".quad 0x5a5f5f37666d7261,0x7669646275733332,0x7669746341656469,0x61767265746e4965\n"
".quad 0x66506a76456a496c,0x32535f54505f3053,0x525f335366526a5f,0x535f33535f34536a\n"
".quad 0x6f6d090a3b5d5f34,0x2509203436732e76,0x7225202c30316472,0x2e646c090a3b3964\n"
".quad 0x36752e6d61726170,0x3131647225092034,0x6475635f5f5b202c,0x5f38666d72617061\n"
".quad 0x6462757333325a5f,0x7463416564697669,0x7265746e49657669,0x6a76456a496c6176\n"
".quad 0x5f54505f30536650,0x335366526a5f3253,0x33535f34536a525f,0x090a3b5d5f34535f\n"
".quad 0x203436732e766f6d,0x202c323164722509,0x090a3b3131647225,0x6d617261702e646c\n"
".quad 0x722509203436752e,0x5f5f5b202c333164,0x6d72617061647563,0x7333325a5f5f3966\n"
".quad 0x6564697669646275,0x6e49657669746341,0x6a496c6176726574,0x5f305366506a7645\n"
".quad 0x526a5f32535f5450,0x34536a525f335366,0x5d5f34535f33535f,0x732e766f6d090a3b\n"
".quad 0x3164722509203436,0x3331647225202c34,0x61702e646c090a3b,0x203436752e6d6172\n"
".quad 0x202c353164722509,0x70616475635f5f5b,0x5f5f3031666d7261,0x696462757333325a\n"
".quad 0x6974634165646976,0x767265746e496576,0x506a76456a496c61,0x535f54505f305366\n"
".quad 0x5f335366526a5f32,0x5f33535f34536a52,0x6d090a3b5d5f3453,0x09203436732e766f\n"
".quad 0x25202c3631647225,0x6c090a3b35316472,0x2e6d617261702e64,0x6472250920343675\n"
".quad 0x635f5f5b202c3731,0x666d726170616475,0x7333325a5f5f3131,0x6564697669646275\n"
".quad 0x6e49657669746341,0x6a496c6176726574,0x5f305366506a7645,0x526a5f32535f5450\n"
".quad 0x34536a525f335366,0x5d5f34535f33535f,0x732e766f6d090a3b,0x3164722509203436\n"
".quad 0x3731647225202c38,0x61702e646c090a3b,0x203436752e6d6172,0x202c393164722509\n"
".quad 0x70616475635f5f5b,0x5f5f3231666d7261,0x696462757333325a,0x6974634165646976\n"
".quad 0x767265746e496576,0x506a76456a496c61,0x535f54505f305366,0x5f335366526a5f32\n"
".quad 0x5f33535f34536a52,0x6d090a3b5d5f3453,0x09203436732e766f,0x25202c3032647225\n"
".quad 0x73090a3b39316472,0x752e65672e707465,0x2c31702509203233,0x7225202c32722520\n"
".quad 0x31702540090a3b34,0x4c24092061726220,0x363638345f325f74,0x09636f6c2e090a3b\n"
".quad 0x3009363935093631,0x6f6c2e6c756d090a,0x722509203233752e,0x202c327225202c35\n"
".quad 0x2e747663090a3b34,0x203233752e343675,0x202c313264722509,0x6461090a3b357225\n"
".quad 0x2509203436752e64,0x7225202c32326472,0x647225202c313264,0x662e646c090a3b32\n"
".quad 0x2c31662509203233,0x2b32326472255b20,0x2e7473090a3b5d30,0x72255b0920323366\n"
".quad 0x202c5d302b303164,0x6c2e090a3b316625,0x393509363109636f,0x646461090a300937\n"
".quad 0x722509203436752e,0x647225202c333264,0x34647225202c3132,0x33662e646c090a3b\n"
".quad 0x202c326625092032,0x302b33326472255b,0x662e7473090a3b5d,0x6472255b09203233\n"
".quad 0x25202c5d302b3231,0x6f6c2e090a3b3266,0x3839350936310963,0x2e646461090a3009\n"
".quad 0x6472250920343675,0x32647225202c3432,0x3b36647225202c31,0x3233752e646c090a\n"
".quad 0x5b202c3672250920,0x5d302b3432647225,0x33752e7473090a3b,0x316472255b092032\n"
".quad 0x7225202c5d302b34,0x636f6c2e090a3b36,0x0939393509363109,0x752e646461090a30\n"
".quad 0x3264722509203436,0x3132647225202c35,0x0a3b38647225202c,0x203233752e646c09\n"
".quad 0x255b202c37722509,0x3b5d302b35326472,0x3233752e7473090a,0x36316472255b0920\n"
".quad 0x377225202c5d302b,0x33662e646c090a3b,0x202c336625092032,0x302b30316472255b\n"
".quad 0x662e646c090a3b5d,0x2c34662509203233,0x2b32316472255b20,0x746573090a3b5d30\n"
".quad 0x33662e75656e2e70,0x202c327025092032,0x336625202c346625,0x3270252140090a3b\n"
".quad 0x4c24092061726220,0x343336355f325f74,0x662e766f6d090a3b,0x2c35662509203233\n"
".quad 0x3030303030663020,0x202020203b303030,0x090a30202f2f0920,0x2e746c2e70746573\n"
".quad 0x3370250920323366,0x25202c336625202c,0x766f6d090a3b3566,0x662509203233662e\n"
".quad 0x3030306630202c36,0x20203b3030303030,0x30202f2f09202020,0x6c2e70746573090a\n"
".quad 0x2509203233662e74,0x2c346625202c3470,0x40090a3b36662520,0x6172622034702521\n"
".quad 0x5f325f744c240920,0x2e090a3b36343136,0x3609363109636f6c,0x6573090a30093430\n"
".quad 0x09203233732e706c,0x202c31202c387225,0x0a3b337025202c30,0x696e752e61726209\n"
".quad 0x5f325f744c240920,0x4c240a3b30393835,0x363431365f325f74,0x2e706c6573090a3a\n"
".quad 0x3872250920323373,0x202c31202c30202c,0x744c240a3b337025,0x3a303938355f325f\n"
".quad 0x33662e627573090a,0x202c376625092032,0x336625202c346625,0x662e766f6d090a3b\n"
".quad 0x2c38662509203233,0x3030306633663020,0x202020203b303030,0x352e30202f2f0920\n"
".quad 0x6e722e616d66090a,0x662509203233662e,0x202c376625202c39,0x336625202c386625\n"
".quad 0x662e646461090a3b,0x3031662509203233,0x25202c346625202c,0x766f6d090a3b3366\n"
".quad 0x662509203233662e,0x66336630202c3131,0x203b303030303030,0x30202f2f09202020\n"
".quad 0x2e6c756d090a352e,0x3166250920323366,0x2c30316625202c32,0x090a3b3131662520\n"
".quad 0x203233732e67656e,0x7225202c39722509,0x74636c73090a3b38,0x3233732e3233662e\n"
".quad 0x202c333166250920,0x6625202c32316625,0x0a3b397225202c39,0x203233662e747309\n"
".quad 0x2b38316472255b09,0x33316625202c5d30,0x09636f6c2e090a3b,0x3009353036093631\n"
".quad 0x33752e766f6d090a,0x2c30317225092032,0x2e7473090a3b3020,0x72255b0920323375\n"
".quad 0x202c5d302b303264,0x62090a3b30317225,0x0920696e752e6172,0x33355f325f744c24\n"
".quad 0x5f744c240a3b3837,0x0a3a343336355f32,0x203233752e646c09,0x5b202c3131722509\n"
".quad 0x5d302b3431647225,0x752e627573090a3b,0x3231722509203233,0x25202c377225202c\n"
".quad 0x6f6d090a3b313172,0x2509203233752e76,0x0a3b31202c333172,0x656c2e7074657309\n"
".quad 0x702509203233752e,0x2c32317225202c35,0x090a3b3331722520,0x6172622035702540\n"
".quad 0x5f325f744c240920,0x2e090a3b32303436,0x3609363109636f6c,0x6f6d090a30093031\n"
".quad 0x2509203233752e76,0x0a3b30202c343172,0x203233752e747309,0x2b30326472255b09\n"
".quad 0x34317225202c5d30,0x5f325f744c240a3b,0x4c240a3a32303436,0x383733355f325f74\n"
".quad 0x5f325f744c240a3a,0x2e090a3a36363834,0x3609363109636f6c,0x6572090a30093431\n"
".quad 0x6557444c240a3b74,0x7333325a5f5f646e,0x6564697669646275,0x6e49657669746341\n"
".quad 0x6a496c6176726574,0x5f305366506a7645,0x526a5f32535f5450,0x34536a525f335366\n"
".quad 0x3a5f34535f33535f,0x5f202f2f207d090a,0x696462757333325a,0x6974634165646976\n"
".quad 0x767265746e496576,0x506a76456a496c61,0x535f54505f305366,0x5f335366526a5f32\n"
".quad 0x5f33535f34536a52,0x762e090a0a5f3453,0x2e20656c62697369,0x325a5f20636e7566\n"
".quad 0x6f4e65726f747332,0x6e497974706d456e,0x49736c6176726574,0x66506a6a76456a6a\n"
".quad 0x535f3054505f3053,0x535f546666665f32,0x6a52665f33535f33,0x28205f34535f3253\n"
".quad 0x2e206d617261702e,0x75635f5f20323375,0x31666d7261706164,0x6f747332325a5f5f\n"
".quad 0x706d456e6f4e6572,0x767265746e497974,0x76456a6a49736c61,0x505f305366506a6a\n"
".quad 0x66665f32535f3054,0x33535f33535f5466,0x535f32536a52665f,0x7261702e202c5f34\n"
".quad 0x203233752e206d61,0x6170616475635f5f,0x325a5f5f32666d72,0x6f4e65726f747332\n"
".quad 0x6e497974706d456e,0x49736c6176726574,0x66506a6a76456a6a,0x535f3054505f3053\n"
".quad 0x535f546666665f32,0x6a52665f33535f33,0x202c5f34535f3253,0x2e206d617261702e\n"
".quad 0x75635f5f20343675,0x33666d7261706164,0x6f747332325a5f5f,0x706d456e6f4e6572\n"
".quad 0x767265746e497974,0x76456a6a49736c61,0x505f305366506a6a,0x66665f32535f3054\n"
".quad 0x33535f33535f5466,0x535f32536a52665f,0x7261702e202c5f34,0x203436752e206d61\n"
".quad 0x6170616475635f5f,0x325a5f5f34666d72,0x6f4e65726f747332,0x6e497974706d456e\n"
".quad 0x49736c6176726574,0x66506a6a76456a6a,0x535f3054505f3053,0x535f546666665f32\n"
".quad 0x6a52665f33535f33,0x202c5f34535f3253,0x2e206d617261702e,0x75635f5f20343675\n"
".quad 0x35666d7261706164,0x6f747332325a5f5f,0x706d456e6f4e6572,0x767265746e497974\n"
".quad 0x76456a6a49736c61,0x505f305366506a6a,0x66665f32535f3054,0x33535f33535f5466\n"
".quad 0x535f32536a52665f,0x7261702e202c5f34,0x203436752e206d61,0x6170616475635f5f\n"
".quad 0x325a5f5f36666d72,0x6f4e65726f747332,0x6e497974706d456e,0x49736c6176726574\n"
".quad 0x66506a6a76456a6a,0x535f3054505f3053,0x535f546666665f32,0x6a52665f33535f33\n"
".quad 0x202c5f34535f3253,0x2e206d617261702e,0x75635f5f20323366,0x37666d7261706164\n"
".quad 0x6f747332325a5f5f,0x706d456e6f4e6572,0x767265746e497974,0x76456a6a49736c61\n"
".quad 0x505f305366506a6a,0x66665f32535f3054,0x33535f33535f5466,0x535f32536a52665f\n"
".quad 0x7261702e202c5f34,0x203233662e206d61,0x6170616475635f5f,0x325a5f5f38666d72\n"
".quad 0x6f4e65726f747332,0x6e497974706d456e,0x49736c6176726574,0x66506a6a76456a6a\n"
".quad 0x535f3054505f3053,0x535f546666665f32,0x6a52665f33535f33,0x202c5f34535f3253\n"
".quad 0x2e206d617261702e,0x75635f5f20323366,0x39666d7261706164,0x6f747332325a5f5f\n"
".quad 0x706d456e6f4e6572,0x767265746e497974,0x76456a6a49736c61,0x505f305366506a6a\n"
".quad 0x66665f32535f3054,0x33535f33535f5466,0x535f32536a52665f,0x7261702e202c5f34\n"
".quad 0x203233752e206d61,0x6170616475635f5f,0x5a5f5f3031666d72,0x4e65726f74733232\n"
".quad 0x497974706d456e6f,0x736c61767265746e,0x506a6a76456a6a49,0x5f3054505f305366\n"
".quad 0x5f546666665f3253,0x52665f33535f3353,0x2c5f34535f32536a,0x206d617261702e20\n"
".quad 0x635f5f203233752e,0x666d726170616475,0x7332325a5f5f3131,0x456e6f4e65726f74\n"
".quad 0x65746e497974706d,0x6a6a49736c617672,0x305366506a6a7645,0x5f32535f3054505f\n"
".quad 0x5f33535f54666666,0x32536a52665f3353,0x702e202c5f34535f,0x33752e206d617261\n"
".quad 0x616475635f5f2032,0x5f3231666d726170,0x726f747332325a5f,0x74706d456e6f4e65\n"
".quad 0x61767265746e4979,0x6a76456a6a49736c,0x54505f305366506a,0x6666665f32535f30\n"
".quad 0x5f33535f33535f54,0x34535f32536a5266,0x617261702e202c5f,0x5f203233662e206d\n"
".quad 0x726170616475635f,0x325a5f5f3331666d,0x6f4e65726f747332,0x6e497974706d456e\n"
".quad 0x49736c6176726574,0x66506a6a76456a6a,0x535f3054505f3053,0x535f546666665f32\n"
".quad 0x6a52665f33535f33,0x202c5f34535f3253,0x2e206d617261702e,0x75635f5f20343675\n"
".quad 0x31666d7261706164,0x747332325a5f5f34,0x6d456e6f4e65726f,0x7265746e49797470\n"
".quad 0x456a6a49736c6176,0x5f305366506a6a76,0x665f32535f305450,0x535f33535f546666\n"
".quad 0x5f32536a52665f33,0x61702e202c5f3453,0x3436752e206d6172,0x70616475635f5f20\n"
".quad 0x5f5f3531666d7261,0x65726f747332325a,0x7974706d456e6f4e,0x6c61767265746e49\n"
".quad 0x6a6a76456a6a4973,0x3054505f30536650,0x546666665f32535f,0x665f33535f33535f\n"
".quad 0x5f34535f32536a52,0x6d617261702e202c,0x5f5f203436752e20,0x6d72617061647563\n"
".quad 0x32325a5f5f363166,0x6e6f4e65726f7473,0x746e497974706d45,0x6a49736c61767265\n"
".quad 0x5366506a6a76456a,0x32535f3054505f30,0x33535f546666665f,0x536a52665f33535f\n"
".quad 0x090a295f34535f32,0x206765722e090a7b,0x3c7225203233752e,0x722e090a3b3e3932\n"
".quad 0x203436752e206765,0x3b3e33323c647225,0x2e206765722e090a,0x353c662520323366\n"
".quad 0x65722e090a3b3e30,0x25203436662e2067,0x0a3b3e34313c6466,0x702e206765722e09\n"
".quad 0x323c702520646572,0x6f6c2e090a3b3e31,0x3331330936310963,0x6257444c240a3009\n"
".quad 0x325a5f5f6e696765,0x6f4e65726f747332,0x6e497974706d456e,0x49736c6176726574\n"
".quad 0x66506a6a76456a6a,0x535f3054505f3053,0x535f546666665f32,0x6a52665f33535f33\n"
".quad 0x0a3a5f34535f3253,0x617261702e646c09,0x2509203233752e6d,0x635f5f5b202c3172\n"
".quad 0x666d726170616475,0x747332325a5f5f31,0x6d456e6f4e65726f,0x7265746e49797470\n"
".quad 0x456a6a49736c6176,0x5f305366506a6a76,0x665f32535f305450,0x535f33535f546666\n"
".quad 0x5f32536a52665f33,0x6d090a3b5d5f3453,0x09203233732e766f,0x317225202c327225\n"
".quad 0x61702e646c090a3b,0x203436752e6d6172,0x5b202c3164722509,0x6170616475635f5f\n"
".quad 0x325a5f5f33666d72,0x6f4e65726f747332,0x6e497974706d456e,0x49736c6176726574\n"
".quad 0x66506a6a76456a6a,0x535f3054505f3053,0x535f546666665f32,0x6a52665f33535f33\n"
".quad 0x3b5d5f34535f3253,0x36732e766f6d090a,0x2c32647225092034,0x090a3b3164722520\n"
".quad 0x6d617261702e646c,0x722509203436752e,0x635f5f5b202c3364,0x666d726170616475\n"
".quad 0x747332325a5f5f34,0x6d456e6f4e65726f,0x7265746e49797470,0x456a6a49736c6176\n"
".quad 0x5f305366506a6a76,0x665f32535f305450,0x535f33535f546666,0x5f32536a52665f33\n"
".quad 0x6d090a3b5d5f3453,0x09203436732e766f,0x7225202c34647225,0x2e646c090a3b3364\n"
".quad 0x36752e6d61726170,0x2c35647225092034,0x616475635f5f5b20,0x5f5f35666d726170\n"
".quad 0x65726f747332325a,0x7974706d456e6f4e,0x6c61767265746e49,0x6a6a76456a6a4973\n"
".quad 0x3054505f30536650,0x546666665f32535f,0x665f33535f33535f,0x5f34535f32536a52\n"
".quad 0x2e766f6d090a3b5d,0x6472250920343673,0x3b35647225202c36,0x7261702e646c090a\n"
".quad 0x09203436752e6d61,0x5f5b202c37647225,0x726170616475635f,0x32325a5f5f36666d\n"
".quad 0x6e6f4e65726f7473,0x746e497974706d45,0x6a49736c61767265,0x5366506a6a76456a\n"
".quad 0x32535f3054505f30,0x33535f546666665f,0x536a52665f33535f,0x0a3b5d5f34535f32\n"
".quad 0x3436732e766f6d09,0x202c386472250920,0x6c090a3b37647225,0x2e6d617261702e64\n"
".quad 0x3166250920323366,0x6475635f5f5b202c,0x5f37666d72617061,0x726f747332325a5f\n"
".quad 0x74706d456e6f4e65,0x61767265746e4979,0x6a76456a6a49736c,0x54505f305366506a\n"
".quad 0x6666665f32535f30,0x5f33535f33535f54,0x34535f32536a5266,0x766f6d090a3b5d5f\n"
".quad 0x662509203233662e,0x0a3b316625202c32,0x617261702e646c09,0x2509203233662e6d\n"
".quad 0x635f5f5b202c3366,0x666d726170616475,0x747332325a5f5f38,0x6d456e6f4e65726f\n"
".quad 0x7265746e49797470,0x456a6a49736c6176,0x5f305366506a6a76,0x665f32535f305450\n"
".quad 0x535f33535f546666,0x5f32536a52665f33,0x6d090a3b5d5f3453,0x09203233662e766f\n"
".quad 0x336625202c346625,0x61702e646c090a3b,0x203233662e6d6172,0x5f5b202c35662509\n"
".quad 0x726170616475635f,0x32325a5f5f39666d,0x6e6f4e65726f7473,0x746e497974706d45\n"
".quad 0x6a49736c61767265,0x5366506a6a76456a,0x32535f3054505f30,0x33535f546666665f\n"
".quad 0x536a52665f33535f,0x0a3b5d5f34535f32,0x3233662e766f6d09,0x25202c3666250920\n"
".quad 0x2e646c090a3b3566,0x33752e6d61726170,0x202c337225092032,0x70616475635f5f5b\n"
".quad 0x5f5f3031666d7261,0x65726f747332325a,0x7974706d456e6f4e,0x6c61767265746e49\n"
".quad 0x6a6a76456a6a4973,0x3054505f30536650,0x546666665f32535f,0x665f33535f33535f\n"
".quad 0x5f34535f32536a52,0x2e766f6d090a3b5d,0x3472250920323373,0x090a3b337225202c\n"
".quad 0x6d617261702e646c,0x722509203233752e,0x75635f5f5b202c35,0x31666d7261706164\n"
".quad 0x747332325a5f5f31,0x6d456e6f4e65726f,0x7265746e49797470,0x456a6a49736c6176\n"
".quad 0x5f305366506a6a76,0x665f32535f305450,0x535f33535f546666,0x5f32536a52665f33\n"
".quad 0x6d090a3b5d5f3453,0x09203233732e766f,0x357225202c367225,0x61702e646c090a3b\n"
".quad 0x203233752e6d6172,0x5f5b202c37722509,0x726170616475635f,0x325a5f5f3231666d\n"
".quad 0x6f4e65726f747332,0x6e497974706d456e,0x49736c6176726574,0x66506a6a76456a6a\n"
".quad 0x535f3054505f3053,0x535f546666665f32,0x6a52665f33535f33,0x3b5d5f34535f3253\n"
".quad 0x33732e766f6d090a,0x202c387225092032,0x646c090a3b377225,0x662e6d617261702e\n"
".quad 0x2c37662509203233,0x616475635f5f5b20,0x5f3331666d726170,0x726f747332325a5f\n"
".quad 0x74706d456e6f4e65,0x61767265746e4979,0x6a76456a6a49736c,0x54505f305366506a\n"
".quad 0x6666665f32535f30,0x5f33535f33535f54,0x34535f32536a5266,0x766f6d090a3b5d5f\n"
".quad 0x662509203233662e,0x0a3b376625202c38,0x617261702e646c09,0x2509203436752e6d\n"
".quad 0x5f5f5b202c396472,0x6d72617061647563,0x32325a5f5f343166,0x6e6f4e65726f7473\n"
".quad 0x746e497974706d45,0x6a49736c61767265,0x5366506a6a76456a,0x32535f3054505f30\n"
".quad 0x33535f546666665f,0x536a52665f33535f,0x0a3b5d5f34535f32,0x3436732e766f6d09\n"
".quad 0x2c30316472250920,0x090a3b3964722520,0x6d617261702e646c,0x722509203436752e\n"
".quad 0x5f5f5b202c313164,0x6d72617061647563,0x32325a5f5f353166,0x6e6f4e65726f7473\n"
".quad 0x746e497974706d45,0x6a49736c61767265,0x5366506a6a76456a,0x32535f3054505f30\n"
".quad 0x33535f546666665f,0x536a52665f33535f,0x0a3b5d5f34535f32,0x3436732e766f6d09\n"
".quad 0x2c32316472250920,0x0a3b313164722520,0x617261702e646c09,0x2509203436752e6d\n"
".quad 0x5f5b202c33316472,0x726170616475635f,0x325a5f5f3631666d,0x6f4e65726f747332\n"
".quad 0x6e497974706d456e,0x49736c6176726574,0x66506a6a76456a6a,0x535f3054505f3053\n"
".quad 0x535f546666665f32,0x6a52665f33535f33,0x3b5d5f34535f3253,0x36732e766f6d090a\n"
".quad 0x3431647225092034,0x3b3331647225202c,0x6e2e70746573090a,0x2509203233752e65\n"
".quad 0x2c347225202c3170,0x61090a3b36722520,0x09203233662e7362,0x346625202c396625\n"
".quad 0x6c2e6c756d090a3b,0x2509203233752e6f,0x2c327225202c3972,0x747663090a3b3420\n"
".quad 0x3233752e3436752e,0x2c35316472250920,0x6d090a3b39722520,0x09203233752e766f\n"
".quad 0x7425202c30317225,0x6d090a3b782e6469,0x33752e6f6c2e6c75,0x2c31317225092032\n"
".quad 0x34202c3031722520,0x752e747663090a3b,0x09203233752e3436,0x25202c3631647225\n"
".quad 0x6461090a3b313172,0x2509203436752e64,0x7225202c37316472,0x647225202c363164\n"
".quad 0x646461090a3b3231,0x722509203436752e,0x647225202c383164,0x36647225202c3531\n"
".quad 0x752e646461090a3b,0x3164722509203436,0x3531647225202c39,0x0a3b38647225202c\n"
".quad 0x3436752e64646109,0x2c30326472250920,0x202c353164722520,0x61090a3b32647225\n"
".quad 0x09203436752e6464,0x25202c3132647225,0x7225202c35316472,0x6c6573090a3b3464\n"
".quad 0x2509203233732e70,0x202c31202c323172,0x0a3b317025202c30,0x2e656e2e74657309\n"
".quad 0x203233752e323375,0x25202c3331722509,0x3b387225202c3672,0x33732e67656e090a\n"
".quad 0x2c34317225092032,0x090a3b3331722520,0x203233622e646e61,0x25202c3531722509\n"
".quad 0x317225202c323172,0x2e766f6d090a3b34,0x3172250920323375,0x73090a3b30202c36\n"
".quad 0x732e71652e707465,0x2c32702509203233,0x25202c3531722520,0x2540090a3b363172\n"
".quad 0x0920617262203270,0x31315f335f744c24,0x6c2e090a3b323235,0x323109363109636f\n"
".quad 0x2e7473090a300937,0x72255b0920323375,0x202c5d302b383164,0x6c2e090a3b347225\n"
".quad 0x323109363109636f,0x2e7473090a300938,0x72255b0920323375,0x202c5d302b393164\n"
".quad 0x7573090a3b367225,0x2509203233662e62,0x346625202c303166,0x090a3b326625202c\n"
".quad 0x203233662e736261,0x25202c3131662509,0x7663090a3b303166,0x33662e3436662e74\n"
".quad 0x2c31646625092032,0x090a3b3131662520,0x203233662e736261,0x25202c3231662509\n"
".quad 0x78616d090a3b3266,0x662509203233662e,0x2c396625202c3331,0x090a3b3231662520\n"
".quad 0x203233662e6c756d,0x25202c3431662509,0x33316625202c3866,0x662e747663090a3b\n"
".quad 0x09203233662e3436,0x6625202c32646625,0x766f6d090a3b3431,0x662509203436662e\n"
".quad 0x38336430202c3364,0x3339343834343536,0x093b323765326432,0x37332d6535202f2f\n"
".quad 0x36662e78616d090a,0x2c34646625092034,0x25202c3264662520,0x6573090a3b336466\n"
".quad 0x36662e656c2e7074,0x202c337025092034,0x6625202c31646625,0x252140090a3b3464\n"
".quad 0x0920617262203370,0x32315f335f744c24,0x6f6d090a3b343330,0x2509203233662e76\n"
".quad 0x306630202c353166,0x3b30303030303030,0x202f2f0920202020,0x2e70746573090a30\n"
".quad 0x09203233662e746c,0x326625202c347025,0x0a3b35316625202c,0x6572702e766f6d09\n"
".quad 0x202c357025092064,0x6f6d090a3b347025,0x0920646572702e76,0x377025202c367025\n"
".quad 0x662e766f6d090a3b,0x3631662509203233,0x303030306630202c,0x2020203b30303030\n"
".quad 0x090a30202f2f0920,0x2e746c2e70746573,0x3870250920323366,0x25202c346625202c\n"
".quad 0x2140090a3b363166,0x2061726220387025,0x315f335f744c2409,0x2e090a3b36343532\n"
".quad 0x3109363109636f6c,0x6573090a30093633,0x09203233732e706c,0x2c31202c37317225\n"
".quad 0x3b357025202c3020,0x6e752e617262090a,0x335f744c24092069,0x0a3b30393232315f\n"
".quad 0x32315f335f744c24,0x6573090a3a363435,0x09203233732e706c,0x2c30202c37317225\n"
".quad 0x3b347025202c3120,0x315f335f744c240a,0x2e090a3a30393232,0x3109363109636f6c\n"
".quad 0x6461090a30093933,0x2509203233662e64,0x326625202c373166,0x090a3b346625202c\n"
".quad 0x203233662e766f6d,0x30202c3831662509,0x3030303030663366,0x2f09202020203b30\n"
".quad 0x66090a352e30202f,0x33662e6e722e616d,0x2c39316625092032,0x25202c3031662520\n"
".quad 0x326625202c383166,0x662e766f6d090a3b,0x3032662509203233,0x303066336630202c\n"
".quad 0x2020203b30303030,0x352e30202f2f0920,0x33662e6c756d090a,0x2c31326625092032\n"
".quad 0x25202c3731662520,0x656e090a3b303266,0x2509203233732e67,0x317225202c383172\n"
".quad 0x74636c73090a3b37,0x3233732e3233662e,0x202c323266250920,0x6625202c31326625\n"
".quad 0x38317225202c3931,0x33662e7473090a3b,0x326472255b092032,0x6625202c5d302b30\n"
".quad 0x6f6c2e090a3b3232,0x3034310936310963,0x662e7473090a3009,0x6472255b09203233\n"
".quad 0x25202c5d302b3132,0x7262090a3b323266,0x240920696e752e61,0x3731315f335f744c\n"
".quad 0x5f744c240a3b3837,0x3a34333032315f33,0x3109636f6c2e090a,0x0a30093534310936\n"
".quad 0x203233662e747309,0x2b30326472255b09,0x3b326625202c5d30,0x3109636f6c2e090a\n"
".quad 0x0a30093634310936,0x203233662e747309,0x2b31326472255b09,0x3b346625202c5d30\n"
".quad 0x315f335f744c240a,0x2e090a3a38373731,0x3309363109636f6c,0x6f6d090a30093332\n"
".quad 0x2509203233752e76,0x0a3b31202c393172,0x203233752e747309,0x2b34316472255b09\n"
".quad 0x39317225202c5d30,0x09636f6c2e090a3b,0x3009343233093631,0x33752e766f6d090a\n"
".quad 0x2c30327225092032,0x2e7473090a3b3120,0x72255b0920323375,0x202c5d302b373164\n"
".quad 0x2e090a3b30327225,0x3309363109636f6c,0x6f6d090a30093532,0x2509203233752e76\n"
".quad 0x0a3b31202c313272,0x203233752e747309,0x2b30316472255b09,0x31327225202c5d30\n"
".quad 0x752e617262090a3b,0x5f744c240920696e,0x3b38333334315f33,0x315f335f744c240a\n"
".quad 0x2e090a3a32323531,0x3309363109636f6c,0x6f6d090a30093233,0x2509203233752e76\n"
".quad 0x0a3b30202c323272,0x203233752e747309,0x2b34316472255b09,0x32327225202c5d30\n"
".quad 0x09636f6c2e090a3b,0x3009333333093631,0x33752e766f6d090a,0x2c33327225092032\n"
".quad 0x2e7473090a3b3020,0x72255b0920323375,0x202c5d302b373164,0x40090a3b33327225\n"
".quad 0x6172622031702521,0x5f335f744c240920,0x090a3b3835303331,0x09363109636f6c2e\n"
".quad 0x73090a3009373231,0x5b09203233752e74,0x5d302b3831647225,0x090a3b347225202c\n"
".quad 0x09363109636f6c2e,0x73090a3009383231,0x5b09203233752e74,0x5d302b3931647225\n"
".quad 0x090a3b367225202c,0x203233662e627573,0x25202c3332662509,0x3b326625202c3466\n"
".quad 0x33662e736261090a,0x2c34326625092032,0x090a3b3332662520,0x2e3436662e747663\n"
".quad 0x6466250920323366,0x3b34326625202c35,0x33662e736261090a,0x2c35326625092032\n"
".quad 0x6d090a3b32662520,0x09203233662e7861,0x6625202c36326625,0x3b35326625202c39\n"
".quad 0x33662e6c756d090a,0x2c37326625092032,0x6625202c38662520,0x747663090a3b3632\n"
".quad 0x3233662e3436662e,0x202c366466250920,0x6d090a3b37326625,0x09203436662e766f\n"
".quad 0x6430202c37646625,0x3438343435363833,0x3237653264323339,0x2d6535202f2f093b\n"
".quad 0x2e78616d090a3733,0x6466250920343666,0x2c36646625202c38,0x090a3b3764662520\n"
".quad 0x2e656c2e70746573,0x3970250920343666,0x202c35646625202c,0x40090a3b38646625\n"
".quad 0x6172622039702521,0x5f335f744c240920,0x090a3b3037353331,0x203233662e766f6d\n"
".quad 0x30202c3832662509,0x3030303030303066,0x2f09202020203b30,0x746573090a30202f\n"
".quad 0x3233662e746c2e70,0x202c303170250920,0x326625202c326625,0x2e766f6d090a3b38\n"
".quad 0x7025092064657270,0x30317025202c3131,0x702e766f6d090a3b,0x3170250920646572\n"
".quad 0x0a3b377025202c32,0x3233662e766f6d09,0x202c393266250920,0x3030303030306630\n"
".quad 0x09202020203b3030,0x6573090a30202f2f,0x33662e746c2e7074,0x2c33317025092032\n"
".quad 0x6625202c34662520,0x252140090a3b3932,0x2061726220333170,0x315f335f744c2409\n"
".quad 0x2e090a3b32383034,0x3109363109636f6c,0x6573090a30093633,0x09203233732e706c\n"
".quad 0x2c31202c34327225,0x31317025202c3020,0x752e617262090a3b,0x5f744c240920696e\n"
".quad 0x3b36323833315f33,0x315f335f744c240a,0x73090a3a32383034,0x203233732e706c65\n"
".quad 0x30202c3432722509,0x317025202c31202c,0x335f744c240a3b30,0x0a3a36323833315f\n"
".quad 0x363109636f6c2e09,0x090a300939333109,0x203233662e646461,0x25202c3033662509\n"
".quad 0x3b346625202c3266,0x33662e766f6d090a,0x2c31336625092032,0x3030306633663020\n"
".quad 0x202020203b303030,0x0a352e30202f2f09,0x2e6e722e616d6609,0x3366250920323366\n"
".quad 0x2c33326625202c32,0x25202c3133662520,0x766f6d090a3b3266,0x662509203233662e\n"
".quad 0x66336630202c3333,0x203b303030303030,0x30202f2f09202020,0x2e6c756d090a352e\n"
".quad 0x3366250920323366,0x2c30336625202c34,0x090a3b3333662520,0x203233732e67656e\n"
".quad 0x25202c3532722509,0x6c73090a3b343272,0x732e3233662e7463,0x3533662509203233\n"
".quad 0x202c34336625202c,0x7225202c32336625,0x2e7473090a3b3532,0x72255b0920323366\n"
".quad 0x202c5d302b303264,0x2e090a3b35336625,0x3109363109636f6c,0x7473090a30093034\n"
".quad 0x255b09203233662e,0x2c5d302b31326472,0x090a3b3533662520,0x20696e752e617262\n"
".quad 0x315f335f744c2409,0x4c240a3b38333334,0x373533315f335f74,0x636f6c2e090a3a30\n"
".quad 0x0935343109363109,0x33662e7473090a30,0x326472255b092032,0x6625202c5d302b30\n"
".quad 0x636f6c2e090a3b32,0x0936343109363109,0x33662e7473090a30,0x326472255b092032\n"
".quad 0x6625202c5d302b31,0x2e617262090a3b34,0x744c240920696e75,0x38333334315f335f\n"
".quad 0x5f335f744c240a3b,0x090a3a3835303331,0x09363109636f6c2e,0x73090a3009373231\n"
".quad 0x5b09203233752e74,0x5d302b3831647225,0x090a3b367225202c,0x09363109636f6c2e\n"
".quad 0x73090a3009383231,0x5b09203233752e74,0x5d302b3931647225,0x090a3b387225202c\n"
".quad 0x203233662e627573,0x25202c3633662509,0x3b346625202c3666,0x33662e736261090a\n"
".quad 0x2c37336625092032,0x090a3b3633662520,0x2e3436662e747663,0x6466250920323366\n"
".quad 0x3b37336625202c39,0x33662e736261090a,0x2c38336625092032,0x6d090a3b36662520\n"
".quad 0x09203233662e7861,0x6625202c39336625,0x3b38336625202c39,0x33662e6c756d090a\n"
".quad 0x2c30346625092032,0x6625202c38662520,0x747663090a3b3933,0x3233662e3436662e\n"
".quad 0x2c30316466250920,0x090a3b3034662520,0x203436662e766f6d,0x202c313164662509\n"
".quad 0x3434353638336430,0x6532643233393438,0x35202f2f093b3237,0x616d090a37332d65\n"
".quad 0x2509203436662e78,0x6625202c32316466,0x646625202c303164,0x746573090a3b3131\n"
".quad 0x3436662e656c2e70,0x202c343170250920,0x6625202c39646625,0x2140090a3b323164\n"
".quad 0x6172622034317025,0x5f335f744c240920,0x090a3b3439353431,0x203233662e766f6d\n"
".quad 0x30202c3134662509,0x3030303030303066,0x2f09202020203b30,0x746573090a30202f\n"
".quad 0x3233662e746c2e70,0x202c353170250920,0x346625202c346625,0x2e766f6d090a3b31\n"
".quad 0x7025092064657270,0x35317025202c3631,0x702e766f6d090a3b,0x3170250920646572\n"
".quad 0x3b38317025202c37,0x33662e766f6d090a,0x2c32346625092032,0x3030303030663020\n"
".quad 0x202020203b303030,0x73090a30202f2f09,0x662e746c2e707465,0x3931702509203233\n"
".quad 0x25202c366625202c,0x2140090a3b323466,0x6172622039317025,0x5f335f744c240920\n"
".quad 0x090a3b3630313531,0x09363109636f6c2e,0x73090a3009363331,0x203233732e706c65\n"
".quad 0x31202c3632722509,0x317025202c30202c,0x2e617262090a3b36,0x744c240920696e75\n"
".quad 0x30353834315f335f,0x5f335f744c240a3b,0x090a3a3630313531,0x3233732e706c6573\n"
".quad 0x202c363272250920,0x7025202c31202c30,0x5f744c240a3b3531,0x3a30353834315f33\n"
".quad 0x3109636f6c2e090a,0x0a30093933310936,0x3233662e64646109,0x202c333466250920\n"
".quad 0x366625202c346625,0x662e766f6d090a3b,0x3434662509203233,0x303066336630202c\n"
".quad 0x2020203b30303030,0x352e30202f2f0920,0x6e722e616d66090a,0x662509203233662e\n"
".quad 0x36336625202c3534,0x202c34346625202c,0x6f6d090a3b346625,0x2509203233662e76\n"
".quad 0x336630202c363466,0x3b30303030303066,0x202f2f0920202020,0x6c756d090a352e30\n"
".quad 0x662509203233662e,0x33346625202c3734,0x0a3b36346625202c,0x3233732e67656e09\n"
".quad 0x202c373272250920,0x73090a3b36327225,0x2e3233662e74636c,0x3466250920323373\n"
".quad 0x2c37346625202c38,0x25202c3534662520,0x7473090a3b373272,0x255b09203233662e\n"
".quad 0x2c5d302b30326472,0x090a3b3834662520,0x09363109636f6c2e,0x73090a3009303431\n"
".quad 0x5b09203233662e74,0x5d302b3132647225,0x0a3b38346625202c,0x696e752e61726209\n"
".quad 0x5f335f744c240920,0x240a3b3833333431,0x3534315f335f744c,0x6f6c2e090a3a3439\n"
".quad 0x3534310936310963,0x662e7473090a3009,0x6472255b09203233,0x25202c5d302b3032\n"
".quad 0x6f6c2e090a3b3466,0x3634310936310963,0x662e7473090a3009,0x6472255b09203233\n"
".quad 0x25202c5d302b3132,0x5f744c240a3b3666,0x3a38333334315f33,0x315f335f744c240a\n"
".quad 0x4c240a3a32303832,0x363231315f335f74,0x636f6c2e090a3a36,0x0936343309363109\n"
".quad 0x0a3b746572090a30,0x5f646e6557444c24,0x726f747332325a5f,0x74706d456e6f4e65\n"
".quad 0x61767265746e4979,0x6a76456a6a49736c,0x54505f305366506a,0x6666665f32535f30\n"
".quad 0x5f33535f33535f54,0x34535f32536a5266,0x2f2f207d090a3a5f,0x6f747332325a5f20\n"
".quad 0x706d456e6f4e6572,0x767265746e497974,0x76456a6a49736c61,0x505f305366506a6a\n"
".quad 0x66665f32535f3054,0x33535f33535f5466,0x535f32536a52665f,0x69762e090a0a5f34\n"
".quad 0x662e20656c626973,0x32325a5f20636e75,0x746e4965726f7473,0x6e6f436c61767265\n"
".quad 0x6a49646567726576,0x5f3053665076456a,0x66525f32535f5450,0x54525f33535f3353\n"
".quad 0x5f35535f35535f30,0x36536a6a525f3253,0x617261702e28205f,0x5f203436752e206d\n"
".quad 0x726170616475635f,0x32325a5f5f31666d,0x746e4965726f7473,0x6e6f436c61767265\n"
".quad 0x6a49646567726576,0x5f3053665076456a,0x66525f32535f5450,0x54525f33535f3353\n"
".quad 0x5f35535f35535f30,0x36536a6a525f3253,0x617261702e202c5f,0x5f203436752e206d\n"
".quad 0x726170616475635f,0x32325a5f5f32666d,0x746e4965726f7473,0x6e6f436c61767265\n"
".quad 0x6a49646567726576,0x5f3053665076456a,0x66525f32535f5450,0x54525f33535f3353\n"
".quad 0x5f35535f35535f30,0x36536a6a525f3253,0x617261702e202c5f,0x5f203436752e206d\n"
".quad 0x726170616475635f,0x32325a5f5f33666d,0x746e4965726f7473,0x6e6f436c61767265\n"
".quad 0x6a49646567726576,0x5f3053665076456a,0x66525f32535f5450,0x54525f33535f3353\n"
".quad 0x5f35535f35535f30,0x36536a6a525f3253,0x617261702e202c5f,0x5f203436752e206d\n"
".quad 0x726170616475635f,0x32325a5f5f34666d,0x746e4965726f7473,0x6e6f436c61767265\n"
".quad 0x6a49646567726576,0x5f3053665076456a,0x66525f32535f5450,0x54525f33535f3353\n"
".quad 0x5f35535f35535f30,0x36536a6a525f3253,0x617261702e202c5f,0x5f203436752e206d\n"
".quad 0x726170616475635f,0x32325a5f5f35666d,0x746e4965726f7473,0x6e6f436c61767265\n"
".quad 0x6a49646567726576,0x5f3053665076456a,0x66525f32535f5450,0x54525f33535f3353\n"
".quad 0x5f35535f35535f30,0x36536a6a525f3253,0x617261702e202c5f,0x5f203436752e206d\n"
".quad 0x726170616475635f,0x32325a5f5f36666d,0x746e4965726f7473,0x6e6f436c61767265\n"
".quad 0x6a49646567726576,0x5f3053665076456a,0x66525f32535f5450,0x54525f33535f3353\n"
".quad 0x5f35535f35535f30,0x36536a6a525f3253,0x617261702e202c5f,0x5f203436752e206d\n"
".quad 0x726170616475635f,0x32325a5f5f37666d,0x746e4965726f7473,0x6e6f436c61767265\n"
".quad 0x6a49646567726576,0x5f3053665076456a,0x66525f32535f5450,0x54525f33535f3353\n"
".quad 0x5f35535f35535f30,0x36536a6a525f3253,0x617261702e202c5f,0x5f203436752e206d\n"
".quad 0x726170616475635f,0x32325a5f5f38666d,0x746e4965726f7473,0x6e6f436c61767265\n"
".quad 0x6a49646567726576,0x5f3053665076456a,0x66525f32535f5450,0x54525f33535f3353\n"
".quad 0x5f35535f35535f30,0x36536a6a525f3253,0x617261702e202c5f,0x5f203436752e206d\n"
".quad 0x726170616475635f,0x32325a5f5f39666d,0x746e4965726f7473,0x6e6f436c61767265\n"
".quad 0x6a49646567726576,0x5f3053665076456a,0x66525f32535f5450,0x54525f33535f3353\n"
".quad 0x5f35535f35535f30,0x36536a6a525f3253,0x617261702e202c5f,0x5f203436752e206d\n"
".quad 0x726170616475635f,0x325a5f5f3031666d,0x6e4965726f747332,0x6f436c6176726574\n"
".quad 0x496465677265766e,0x3053665076456a6a,0x525f32535f54505f,0x525f33535f335366\n"
".quad 0x35535f35535f3054,0x536a6a525f32535f,0x7261702e202c5f36,0x203436752e206d61\n"
".quad 0x6170616475635f5f,0x5a5f5f3131666d72,0x4965726f74733232,0x436c61767265746e\n"
".quad 0x6465677265766e6f,0x53665076456a6a49,0x5f32535f54505f30,0x5f33535f33536652\n"
".quad 0x535f35535f305452,0x6a6a525f32535f35,0x61702e202c5f3653,0x3436752e206d6172\n"
".quad 0x70616475635f5f20,0x5f5f3231666d7261,0x65726f747332325a,0x6c61767265746e49\n"
".quad 0x65677265766e6f43,0x665076456a6a4964,0x32535f54505f3053,0x33535f335366525f\n"
".quad 0x5f35535f3054525f,0x6a525f32535f3553,0x702e202c5f36536a,0x33752e206d617261\n"
".quad 0x616475635f5f2032,0x5f3331666d726170,0x726f747332325a5f,0x61767265746e4965\n"
".quad 0x677265766e6f436c,0x5076456a6a496465,0x535f54505f305366,0x535f335366525f32\n"
".quad 0x35535f3054525f33,0x525f32535f35535f,0x2e202c5f36536a6a,0x752e206d61726170\n"
".quad 0x6475635f5f203436,0x3431666d72617061,0x6f747332325a5f5f,0x767265746e496572\n"
".quad 0x7265766e6f436c61,0x76456a6a49646567,0x5f54505f30536650,0x5f335366525f3253\n"
".quad 0x535f3054525f3353,0x5f32535f35535f35,0x0a295f36536a6a52,0x6765722e090a7b09\n"
".quad 0x7225203233752e20,0x2e090a3b3e39313c,0x3436752e20676572,0x3e34333c64722520\n"
".quad 0x206765722e090a3b,0x3c6625203233662e,0x65722e090a3b3e37,0x20646572702e2067\n"
".quad 0x090a3b3e333c7025,0x09363109636f6c2e,0x4c240a3009383235,0x5f6e696765625744\n"
".quad 0x726f747332325a5f,0x61767265746e4965,0x677265766e6f436c,0x5076456a6a496465\n"
".quad 0x535f54505f305366,0x535f335366525f32,0x35535f3054525f33,0x525f32535f35535f\n"
".quad 0x090a3a5f36536a6a,0x6d617261702e646c,0x722509203436752e,0x635f5f5b202c3164\n"
".quad 0x666d726170616475,0x747332325a5f5f31,0x7265746e4965726f,0x65766e6f436c6176\n"
".quad 0x456a6a4964656772,0x54505f3053665076,0x335366525f32535f,0x5f3054525f33535f\n"
".quad 0x32535f35535f3553,0x5d5f36536a6a525f,0x732e766f6d090a3b,0x3264722509203436\n"
".quad 0x0a3b31647225202c,0x617261702e646c09,0x2509203436752e6d,0x5f5f5b202c336472\n"
".quad 0x6d72617061647563,0x7332325a5f5f3266,0x65746e4965726f74,0x766e6f436c617672\n"
".quad 0x6a6a496465677265,0x505f305366507645,0x5366525f32535f54,0x3054525f33535f33\n"
".quad 0x535f35535f35535f,0x5f36536a6a525f32,0x2e766f6d090a3b5d,0x6472250920343673\n"
".quad 0x3b33647225202c34,0x7261702e646c090a,0x09203436752e6d61,0x5f5b202c35647225\n"
".quad 0x726170616475635f,0x32325a5f5f33666d,0x746e4965726f7473,0x6e6f436c61767265\n"
".quad 0x6a49646567726576,0x5f3053665076456a,0x66525f32535f5450,0x54525f33535f3353\n"
".quad 0x5f35535f35535f30,0x36536a6a525f3253,0x766f6d090a3b5d5f,0x722509203436732e\n"
".quad 0x35647225202c3664,0x61702e646c090a3b,0x203436752e6d6172,0x5b202c3764722509\n"
".quad 0x6170616475635f5f,0x325a5f5f34666d72,0x6e4965726f747332,0x6f436c6176726574\n"
".quad 0x496465677265766e,0x3053665076456a6a,0x525f32535f54505f,0x525f33535f335366\n"
".quad 0x35535f35535f3054,0x536a6a525f32535f,0x6f6d090a3b5d5f36,0x2509203436732e76\n"
".quad 0x647225202c386472,0x702e646c090a3b37,0x3436752e6d617261,0x202c396472250920\n"
".quad 0x70616475635f5f5b,0x5a5f5f35666d7261,0x4965726f74733232,0x436c61767265746e\n"
".quad 0x6465677265766e6f,0x53665076456a6a49,0x5f32535f54505f30,0x5f33535f33536652\n"
".quad 0x535f35535f305452,0x6a6a525f32535f35,0x6d090a3b5d5f3653,0x09203436732e766f\n"
".quad 0x25202c3031647225,0x646c090a3b396472,0x752e6d617261702e,0x3164722509203436\n"
".quad 0x75635f5f5b202c31,0x36666d7261706164,0x6f747332325a5f5f,0x767265746e496572\n"
".quad 0x7265766e6f436c61,0x76456a6a49646567,0x5f54505f30536650,0x5f335366525f3253\n"
".quad 0x535f3054525f3353,0x5f32535f35535f35,0x3b5d5f36536a6a52,0x36732e766f6d090a\n"
".quad 0x3231647225092034,0x3b3131647225202c,0x7261702e646c090a,0x09203436752e6d61\n"
".quad 0x5b202c3331647225,0x6170616475635f5f,0x325a5f5f37666d72,0x6e4965726f747332\n"
".quad 0x6f436c6176726574,0x496465677265766e,0x3053665076456a6a,0x525f32535f54505f\n"
".quad 0x525f33535f335366,0x35535f35535f3054,0x536a6a525f32535f,0x6f6d090a3b5d5f36\n"
".quad 0x2509203436732e76,0x7225202c34316472,0x646c090a3b333164,0x752e6d617261702e\n"
".quad 0x3164722509203436,0x75635f5f5b202c35,0x38666d7261706164,0x6f747332325a5f5f\n"
".quad 0x767265746e496572,0x7265766e6f436c61,0x76456a6a49646567,0x5f54505f30536650\n"
".quad 0x5f335366525f3253,0x535f3054525f3353,0x5f32535f35535f35,0x3b5d5f36536a6a52\n"
".quad 0x36732e766f6d090a,0x3631647225092034,0x3b3531647225202c,0x7261702e646c090a\n"
".quad 0x09203436752e6d61,0x5b202c3731647225,0x6170616475635f5f,0x325a5f5f39666d72\n"
".quad 0x6e4965726f747332,0x6f436c6176726574,0x496465677265766e,0x3053665076456a6a\n"
".quad 0x525f32535f54505f,0x525f33535f335366,0x35535f35535f3054,0x536a6a525f32535f\n"
".quad 0x6f6d090a3b5d5f36,0x2509203436732e76,0x7225202c38316472,0x646c090a3b373164\n"
".quad 0x752e6d617261702e,0x3164722509203436,0x75635f5f5b202c39,0x31666d7261706164\n"
".quad 0x747332325a5f5f30,0x7265746e4965726f,0x65766e6f436c6176,0x456a6a4964656772\n"
".quad 0x54505f3053665076,0x335366525f32535f,0x5f3054525f33535f,0x32535f35535f3553\n"
".quad 0x5d5f36536a6a525f,0x732e766f6d090a3b,0x3264722509203436,0x3931647225202c30\n"
".quad 0x61702e646c090a3b,0x203436752e6d6172,0x202c313264722509,0x70616475635f5f5b\n"
".quad 0x5f5f3131666d7261,0x65726f747332325a,0x6c61767265746e49,0x65677265766e6f43\n"
".quad 0x665076456a6a4964,0x32535f54505f3053,0x33535f335366525f,0x5f35535f3054525f\n"
".quad 0x6a525f32535f3553,0x090a3b5d5f36536a,0x203436732e766f6d,0x202c323264722509\n"
".quad 0x090a3b3132647225,0x6d617261702e646c,0x722509203436752e,0x5f5f5b202c333264\n"
".quad 0x6d72617061647563,0x32325a5f5f323166,0x746e4965726f7473,0x6e6f436c61767265\n"
".quad 0x6a49646567726576,0x5f3053665076456a,0x66525f32535f5450,0x54525f33535f3353\n"
".quad 0x5f35535f35535f30,0x36536a6a525f3253,0x766f6d090a3b5d5f,0x722509203436732e\n"
".quad 0x647225202c343264,0x2e646c090a3b3332,0x36752e6d61726170,0x3532647225092034\n"
".quad 0x6475635f5f5b202c,0x3431666d72617061,0x6f747332325a5f5f,0x767265746e496572\n"
".quad 0x7265766e6f436c61,0x76456a6a49646567,0x5f54505f30536650,0x5f335366525f3253\n"
".quad 0x535f3054525f3353,0x5f32535f35535f35,0x3b5d5f36536a6a52,0x36732e766f6d090a\n"
".quad 0x3632647225092034,0x3b3532647225202c,0x3109636f6c2e090a,0x0a30093033350936\n"
".quad 0x203233752e646c09,0x255b202c31722509,0x3b5d302b36316472,0x3233752e646c090a\n"
".quad 0x5b202c3272250920,0x5d302b3032647225,0x752e627573090a3b,0x2c33722509203233\n"
".quad 0x7225202c32722520,0x2e766f6d090a3b31,0x3472250920323375,0x782e64697425202c\n"
".quad 0x6c2e6c756d090a3b,0x2509203233752e6f,0x2c347225202c3572,0x747663090a3b3420\n"
".quad 0x3233752e3436752e,0x2c37326472250920,0x61090a3b35722520,0x09203436752e6464\n"
".quad 0x25202c3832647225,0x7225202c37326472,0x646461090a3b3264,0x722509203436752e\n"
".quad 0x647225202c393264,0x34647225202c3732,0x752e646461090a3b,0x3364722509203436\n"
".quad 0x3732647225202c30,0x0a3b36647225202c,0x3436752e64646109,0x2c31336472250920\n"
".quad 0x202c373264722520,0x61090a3b38647225,0x09203436752e6464,0x25202c3233647225\n"
".quad 0x7225202c37326472,0x6f6d090a3b323264,0x2509203233752e76,0x090a3b31202c3672\n"
".quad 0x2e656e2e70746573,0x3170250920323375,0x25202c337225202c,0x702540090a3b3672\n"
".quad 0x2409206172622031,0x3832315f345f744c,0x636f6c2e090a3b32,0x0936333509363109\n"
".quad 0x33662e646c090a30,0x202c316625092032,0x302b30316472255b,0x662e7473090a3b5d\n"
".quad 0x6472255b09203233,0x25202c5d302b3832,0x6f6c2e090a3b3166,0x3733350936310963\n"
".quad 0x662e646c090a3009,0x2c32662509203233,0x2b34316472255b20,0x2e7473090a3b5d30\n"
".quad 0x72255b0920323366,0x202c5d302b393264,0x6c2e090a3b326625,0x333509363109636f\n"
".quad 0x2e646c090a300938,0x3772250920323375,0x36316472255b202c,0x7473090a3b5d302b\n"
".quad 0x255b09203233752e,0x2c5d302b30336472,0x2e090a3b37722520,0x3509363109636f6c\n"
".quad 0x646c090a30093933,0x722509203233752e,0x326472255b202c38,0x73090a3b5d302b30\n"
".quad 0x5b09203233752e74,0x5d302b3133647225,0x090a3b387225202c,0x09363109636f6c2e\n"
".quad 0x6d090a3009323435,0x09203233752e766f,0x0a3b30202c397225,0x203233752e747309\n"
".quad 0x2b36326472255b09,0x3b397225202c5d30,0x3109636f6c2e090a,0x0a30093334350936\n"
".quad 0x3233752e766f6d09,0x202c303172250920,0x752e7473090a3b30,0x6472255b09203233\n"
".quad 0x25202c5d302b3233,0x7262090a3b303172,0x240920696e752e61,0x3230315f345f744c\n"
".quad 0x345f744c240a3b36,0x090a3a323832315f,0x09363109636f6c2e,0x73090a3009383435\n"
".quad 0x09203233752e7268,0x7225202c31317225,0x61090a3b31202c33,0x09203233752e6464\n"
".quad 0x7225202c32317225,0x3b31317225202c31,0x3233752e7473090a,0x38316472255b0920\n"
".quad 0x317225202c5d302b,0x636f6c2e090a3b32,0x0931353509363109,0x33662e646c090a30\n"
".quad 0x202c336625092032,0x302b30316472255b,0x662e7473090a3b5d,0x6472255b09203233\n"
".quad 0x25202c5d302b3832,0x6f6c2e090a3b3366,0x3235350936310963,0x662e646c090a3009\n"
".quad 0x2c34662509203233,0x2b34316472255b20,0x2e7473090a3b5d30,0x72255b0920323366\n"
".quad 0x202c5d302b393264,0x6c2e090a3b346625,0x353509363109636f,0x2e646c090a300933\n"
".quad 0x3172250920323375,0x316472255b202c33,0x73090a3b5d302b36,0x5b09203233752e74\n"
".quad 0x5d302b3033647225,0x0a3b33317225202c,0x363109636f6c2e09,0x090a300934353509\n"
".quad 0x09203233752e646c,0x255b202c34317225,0x3b5d302b38316472,0x3233752e7473090a\n"
".quad 0x31336472255b0920,0x317225202c5d302b,0x636f6c2e090a3b34,0x0936353509363109\n"
".quad 0x33662e646c090a30,0x202c356625092032,0x302b30316472255b,0x662e7473090a3b5d\n"
".quad 0x6472255b09203233,0x25202c5d302b3231,0x6f6c2e090a3b3566,0x3935350936310963\n"
".quad 0x2e766f6d090a3009,0x3172250920323375,0x73090a3b31202c35,0x5b09203233752e74\n"
".quad 0x5d302b3632647225,0x0a3b35317225202c,0x363109636f6c2e09,0x090a300930363509\n"
".quad 0x203233752e766f6d,0x31202c3631722509,0x33752e7473090a3b,0x336472255b092032\n"
".quad 0x7225202c5d302b32,0x6f6c2e090a3b3631,0x3136350936310963,0x2e766f6d090a3009\n"
".quad 0x3172250920323375,0x73090a3b31202c37,0x5b09203233752e74,0x5d302b3432647225\n"
".quad 0x0a3b37317225202c,0x30315f345f744c24,0x6f6c2e090a3a3632,0x3336350936310963\n"
".quad 0x3b746572090a3009,0x646e6557444c240a,0x6f747332325a5f5f,0x767265746e496572\n"
".quad 0x7265766e6f436c61,0x76456a6a49646567,0x5f54505f30536650,0x5f335366525f3253\n"
".quad 0x535f3054525f3353,0x5f32535f35535f35,0x0a3a5f36536a6a52,0x5a5f202f2f207d09\n"
".quad 0x4965726f74733232,0x436c61767265746e,0x6465677265766e6f,0x53665076456a6a49\n"
".quad 0x5f32535f54505f30,0x5f33535f33536652,0x535f35535f305452,0x6a6a525f32535f35\n"
".quad 0x762e090a0a5f3653,0x2e20656c62697369,0x325a5f20636e7566,0x4965746165726333\n"
".quad 0x6f4373656369646e,0x6e6f69746361706d,0x6a5f545076456a49,0x6d617261702e2820\n"
".quad 0x5f5f203436752e20,0x6d72617061647563,0x6333325a5f5f3166,0x646e496574616572\n"
".quad 0x706d6f4373656369,0x6a496e6f69746361,0x202c6a5f54507645,0x2e206d617261702e\n"
".quad 0x75635f5f20323375,0x32666d7261706164,0x65726333325a5f5f,0x6369646e49657461\n"
".quad 0x6361706d6f437365,0x76456a496e6f6974,0x7b090a296a5f5450,0x2e206765722e090a\n"
".quad 0x343c722520323375,0x65722e090a3b3e30,0x25203436752e2067,0x0a3b3e32313c6472\n"
".quad 0x702e206765722e09,0x313c702520646572,0x6f6c2e090a3b3e30,0x3136330936310963\n"
".quad 0x6257444c240a3009,0x325a5f5f6e696765,0x4965746165726333,0x6f4373656369646e\n"
".quad 0x6e6f69746361706d,0x6a5f545076456a49,0x61702e646c090a3a,0x203436752e6d6172\n"
".quad 0x5b202c3164722509,0x6170616475635f5f,0x325a5f5f31666d72,0x4965746165726333\n"
".quad 0x6f4373656369646e,0x6e6f69746361706d,0x6a5f545076456a49,0x2e766f6d090a3b5d\n"
".quad 0x6472250920343673,0x3b31647225202c32,0x7261702e646c090a,0x09203233752e6d61\n"
".quad 0x5f5f5b202c317225,0x6d72617061647563,0x6333325a5f5f3266,0x646e496574616572\n"
".quad 0x706d6f4373656369,0x6a496e6f69746361,0x3b5d6a5f54507645,0x33732e766f6d090a\n"
".quad 0x202c327225092032,0x6c2e090a3b317225,0x363309363109636f,0x726873090a300937\n"
".quad 0x722509203233752e,0x202c327225202c33,0x2e766f6d090a3b31,0x3472250920323373\n"
".quad 0x090a3b337225202c,0x203233752e766f6d,0x3b30202c35722509,0x6c2e70746573090a\n"
".quad 0x2509203233732e65,0x2c337225202c3170,0x40090a3b35722520,0x2061726220317025\n"
".quad 0x385f355f744c2409,0x6f6d090a3b303534,0x2509203233752e76,0x64697425202c3672\n"
".quad 0x766f6d090a3b782e,0x722509203233752e,0x4c240a3b31202c37,0x303938355f355f74\n"
".quad 0x6f6c3c2f2f200a3a,0x706f6f4c203e706f,0x696c2079646f6220,0x090a39363320656e\n"
".quad 0x09363109636f6c2e,0x62090a3009393633,0x20636e79732e7261,0x746573090a3b3009\n"
".quad 0x3233752e656c2e70,0x25202c3270250920,0x3b367225202c3472,0x622032702540090a\n"
".quad 0x5f744c2409206172,0x0a3b363431365f35,0x706f6f6c3c2f2f20,0x6f2074726150203e\n"
".quad 0x6220706f6f6c2066,0x656e696c2079646f,0x6568202c39363320,0x6c6562616c206461\n"
".quad 0x355f744c24206465,0x2e090a303938355f,0x3309363109636f6c,0x756d090a30093937\n"
".quad 0x3233752e6f6c2e6c,0x25202c3872250920,0x090a3b32202c3672,0x203233752e646461\n"
".quad 0x7225202c39722509,0x61090a3b31202c38,0x09203233752e6464,0x7225202c30317225\n"
".quad 0x6d090a3b32202c38,0x33752e6f6c2e6c75,0x2c31317225092032,0x7225202c39722520\n"
".quad 0x2e6c756d090a3b37,0x09203233752e6f6c,0x7225202c32317225,0x3b377225202c3031\n"
".quad 0x33752e766f6d090a,0x2c33317225092032,0x746573090a3b3020,0x3233752e656e2e70\n"
".quad 0x25202c3370250920,0x317225202c323172,0x2e627573090a3b33,0x3172250920323375\n"
".quad 0x2c32317225202c34,0x766f6d090a3b3120,0x722509203233752e,0x090a3b30202c3531\n"
".quad 0x3233752e706c6573,0x202c363172250920,0x7225202c34317225,0x3b337025202c3531\n"
".quad 0x6f6c2e6c756d090a,0x722509203233752e,0x36317225202c3731,0x7663090a3b34202c\n"
".quad 0x33752e3436752e74,0x2c33647225092032,0x090a3b3731722520,0x203436752e646461\n"
".quad 0x25202c3464722509,0x647225202c336472,0x752e646c090a3b32,0x3831722509203233\n"
".quad 0x2b346472255b202c,0x627573090a3b5d30,0x722509203233752e,0x31317225202c3931\n"
".quad 0x6f6d090a3b31202c,0x2509203233752e76,0x0a3b30202c303272,0x3233752e766f6d09\n"
".quad 0x202c313272250920,0x70746573090a3b30,0x203233752e656e2e,0x7225202c34702509\n"
".quad 0x31327225202c3131,0x2e706c6573090a3b,0x3272250920323375,0x2c39317225202c32\n"
".quad 0x25202c3032722520,0x6c756d090a3b3470,0x203233752e6f6c2e,0x25202c3332722509\n"
".quad 0x0a3b34202c323272,0x3436752e74766309,0x722509203233752e,0x33327225202c3564\n"
".quad 0x752e646461090a3b,0x3664722509203436,0x202c35647225202c,0x6c090a3b32647225\n"
".quad 0x2509203233752e64,0x72255b202c343272,0x090a3b5d302b3664,0x203233752e646461\n"
".quad 0x25202c3532722509,0x327225202c383172,0x752e7473090a3b34,0x6472255b09203233\n"
".quad 0x7225202c5d302b34,0x5f744c240a3b3532,0x0a3a363431365f35,0x706f6f6c3c2f2f20\n"
".quad 0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f,0x6568202c39363320\n"
".quad 0x6c6562616c206461,0x355f744c24206465,0x2e090a303938355f,0x3309363109636f6c\n"
".quad 0x6873090a30093338,0x2509203233622e6c,0x2c377225202c3772,0x6f6c2e090a3b3120\n"
".quad 0x3736330936310963,0x2e726873090a3009,0x3472250920323373,0x31202c347225202c\n"
".quad 0x752e766f6d090a3b,0x3632722509203233,0x6573090a3b30202c,0x33732e74672e7074\n"
".quad 0x202c357025092032,0x327225202c347225,0x35702540090a3b36,0x4c24092061726220\n"
".quad 0x303938355f355f74,0x752e617262090a3b,0x5f744c240920696e,0x0a3b383733355f35\n"
".quad 0x34385f355f744c24,0x766f6d090a3a3035,0x722509203233752e,0x4c240a3b31202c37\n"
".quad 0x383733355f355f74,0x752e766f6d090a3a,0x3732722509203233,0x6573090a3b32202c\n"
".quad 0x33752e656c2e7074,0x202c367025092032,0x327225202c327225,0x36702540090a3b37\n"
".quad 0x4c24092061726220,0x343139365f355f74,0x752e766f6d090a3b,0x2c36722509203233\n"
".quad 0x3b782e6469742520,0x33732e766f6d090a,0x2c38327225092032,0x5f744c240a3b3220\n"
".quad 0x0a3a363234375f35,0x706f6f6c3c2f2f20,0x6220706f6f4c203e,0x656e696c2079646f\n"
".quad 0x656e202c37363320,0x656420676e697473,0x202c31203a687470,0x6574616d69747365\n"
".quad 0x7461726574692064,0x6e75203a736e6f69,0x2e090a6e776f6e6b,0x3309363109636f6c\n"
".quad 0x6873090a30093938,0x2509203233752e72,0x2c377225202c3772,0x6f6c2e090a3b3120\n"
".quad 0x3039330936310963,0x2e726162090a3009,0x3b300920636e7973,0x33752e627573090a\n"
".quad 0x2c39327225092032,0x31202c3832722520,0x2e70746573090a3b,0x09203233752e6567\n"
".quad 0x367225202c377025,0x0a3b39327225202c,0x7262203770254009,0x355f744c24092061\n"
".quad 0x200a3b323836375f,0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20\n"
".quad 0x20656e696c207964,0x616568202c373633,0x656c6562616c2064,0x5f355f744c242064\n"
".quad 0x6c2e090a36323437,0x393309363109636f,0x726873090a300937,0x722509203233752e\n"
".quad 0x2c377225202c3033,0x646461090a3b3120,0x722509203233752e,0x2c367225202c3133\n"
".quad 0x6c756d090a3b3120,0x203233752e6f6c2e,0x25202c3233722509,0x377225202c313372\n"
".quad 0x752e646461090a3b,0x3333722509203233,0x202c30337225202c,0x6d090a3b32337225\n"
".quad 0x33752e6f6c2e6c75,0x2c34337225092032,0x34202c3333722520,0x752e747663090a3b\n"
".quad 0x09203233752e3436,0x7225202c37647225,0x646461090a3b3433,0x722509203436752e\n"
".quad 0x37647225202c3864,0x0a3b32647225202c,0x203233752e646c09,0x5b202c3533722509\n"
".quad 0x5d342d2b38647225,0x6c2e6c756d090a3b,0x2509203233752e6f,0x337225202c363372\n"
".quad 0x63090a3b34202c32,0x752e3436752e7476,0x3964722509203233,0x0a3b36337225202c\n"
".quad 0x3436752e64646109,0x2c30316472250920,0x25202c3964722520,0x646c090a3b326472\n"
".quad 0x722509203233752e,0x6472255b202c3733,0x0a3b5d342d2b3031,0x3233752e64646109\n"
".quad 0x202c383372250920,0x7225202c35337225,0x2e7473090a3b3733,0x72255b0920323375\n"
".quad 0x202c5d342d2b3864,0x4c240a3b38337225,0x323836375f355f74,0x6f6c3c2f2f200a3a\n"
".quad 0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220,0x202c37363320656e\n"
".quad 0x62616c2064616568,0x744c242064656c65,0x0a363234375f355f,0x363109636f6c2e09\n"
".quad 0x090a300937383309,0x203233622e6c6873,0x25202c3832722509,0x0a3b31202c383272\n"
".quad 0x746c2e7074657309,0x702509203233752e,0x2c38327225202c38,0x40090a3b32722520\n"
".quad 0x2061726220387025,0x375f355f744c2409,0x744c240a3b363234,0x3a343139365f355f\n"
".quad 0x3109636f6c2e090a,0x0a30093430340936,0x4c240a3b74657209,0x5a5f5f646e655744\n"
".quad 0x6574616572633332,0x4373656369646e49,0x6f69746361706d6f,0x5f545076456a496e\n"
".quad 0x2f2f207d090a3a6a,0x65726333325a5f20,0x6369646e49657461,0x6361706d6f437365\n"
".quad 0x76456a496e6f6974,0x2e090a0a6a5f5450,0x20656c6269736976,0x5a5f20636e75662e\n"
".quad 0x6361706d6f633631,0x61767265746e4974,0x665076456a49736c,0x32535f54505f3053\n"
".quad 0x5f32536a6a66665f,0x7261702e28206a6a,0x203436752e206d61,0x6170616475635f5f\n"
".quad 0x315a5f5f31666d72,0x746361706d6f6336,0x6c61767265746e49,0x53665076456a4973\n"
".quad 0x5f32535f54505f30,0x6a5f32536a6a6666,0x617261702e202c6a,0x5f203436752e206d\n"
".quad 0x726170616475635f,0x36315a5f5f32666d,0x49746361706d6f63,0x736c61767265746e\n"
".quad 0x3053665076456a49,0x665f32535f54505f,0x6a6a5f32536a6a66,0x6d617261702e202c\n"
".quad 0x5f5f203436752e20,0x6d72617061647563,0x6336315a5f5f3366,0x6e49746361706d6f\n"
".quad 0x49736c6176726574,0x5f3053665076456a,0x66665f32535f5450,0x2c6a6a5f32536a6a\n"
".quad 0x206d617261702e20,0x635f5f203436752e,0x666d726170616475,0x6f6336315a5f5f34\n"
".quad 0x746e49746361706d,0x6a49736c61767265,0x505f305366507645,0x6a66665f32535f54\n"
".quad 0x202c6a6a5f32536a,0x2e206d617261702e,0x75635f5f20323366,0x35666d7261706164\n"
".quad 0x6d6f6336315a5f5f,0x65746e4974636170,0x456a49736c617672,0x54505f3053665076\n"
".quad 0x6a6a66665f32535f,0x2e202c6a6a5f3253,0x662e206d61726170,0x6475635f5f203233\n"
".quad 0x5f36666d72617061,0x706d6f6336315a5f,0x7265746e49746361,0x76456a49736c6176\n"
".quad 0x5f54505f30536650,0x536a6a66665f3253,0x702e202c6a6a5f32,0x33752e206d617261\n"
".quad 0x616475635f5f2032,0x5f5f37666d726170,0x61706d6f6336315a,0x767265746e497463\n"
".quad 0x5076456a49736c61,0x535f54505f305366,0x32536a6a66665f32,0x61702e202c6a6a5f\n"
".quad 0x3233752e206d6172,0x70616475635f5f20,0x5a5f5f38666d7261,0x6361706d6f633631\n"
".quad 0x61767265746e4974,0x665076456a49736c,0x32535f54505f3053,0x5f32536a6a66665f\n"
".quad 0x7261702e202c6a6a,0x203436752e206d61,0x6170616475635f5f,0x315a5f5f39666d72\n"
".quad 0x746361706d6f6336,0x6c61767265746e49,0x53665076456a4973,0x5f32535f54505f30\n"
".quad 0x6a5f32536a6a6666,0x617261702e202c6a,0x5f203233752e206d,0x726170616475635f\n"
".quad 0x315a5f5f3031666d,0x746361706d6f6336,0x6c61767265746e49,0x53665076456a4973\n"
".quad 0x5f32535f54505f30,0x6a5f32536a6a6666,0x617261702e202c6a,0x5f203233752e206d\n"
".quad 0x726170616475635f,0x315a5f5f3131666d,0x746361706d6f6336,0x6c61767265746e49\n"
".quad 0x53665076456a4973,0x5f32535f54505f30,0x6a5f32536a6a6666,0x2e090a7b090a296a\n"
".quad 0x3233752e20676572,0x3b3e32323c722520,0x2e206765722e090a,0x3c64722520343675\n"
".quad 0x722e090a3b3e3931,0x203233662e206765,0x090a3b3e363c6625,0x72702e206765722e\n"
".quad 0x3e333c7025206465,0x09636f6c2e090a3b,0x3009333334093631,0x67656257444c240a\n"
".quad 0x6336315a5f5f6e69,0x6e49746361706d6f,0x49736c6176726574,0x5f3053665076456a\n"
".quad 0x66665f32535f5450,0x3a6a6a5f32536a6a,0x7261702e646c090a,0x09203436752e6d61\n"
".quad 0x5f5b202c31647225,0x726170616475635f,0x36315a5f5f31666d,0x49746361706d6f63\n"
".quad 0x736c61767265746e,0x3053665076456a49,0x665f32535f54505f,0x6a6a5f32536a6a66\n"
".quad 0x2e766f6d090a3b5d,0x6472250920343673,0x3b31647225202c32,0x7261702e646c090a\n"
".quad 0x09203436752e6d61,0x5f5b202c33647225,0x726170616475635f,0x36315a5f5f32666d\n"
".quad 0x49746361706d6f63,0x736c61767265746e,0x3053665076456a49,0x665f32535f54505f\n"
".quad 0x6a6a5f32536a6a66,0x2e766f6d090a3b5d,0x6472250920343673,0x3b33647225202c34\n"
".quad 0x7261702e646c090a,0x09203436752e6d61,0x5f5b202c35647225,0x726170616475635f\n"
".quad 0x36315a5f5f33666d,0x49746361706d6f63,0x736c61767265746e,0x3053665076456a49\n"
".quad 0x665f32535f54505f,0x6a6a5f32536a6a66,0x2e766f6d090a3b5d,0x6472250920343673\n"
".quad 0x3b35647225202c36,0x7261702e646c090a,0x09203436752e6d61,0x5f5b202c37647225\n"
".quad 0x726170616475635f,0x36315a5f5f34666d,0x49746361706d6f63,0x736c61767265746e\n"
".quad 0x3053665076456a49,0x665f32535f54505f,0x6a6a5f32536a6a66,0x2e766f6d090a3b5d\n"
".quad 0x6472250920343673,0x3b37647225202c38,0x7261702e646c090a,0x09203233662e6d61\n"
".quad 0x5f5f5b202c316625,0x6d72617061647563,0x6336315a5f5f3566,0x6e49746361706d6f\n"
".quad 0x49736c6176726574,0x5f3053665076456a,0x66665f32535f5450,0x5d6a6a5f32536a6a\n"
".quad 0x662e766f6d090a3b,0x2c32662509203233,0x6c090a3b31662520,0x2e6d617261702e64\n"
".quad 0x3366250920323366,0x6475635f5f5b202c,0x5f36666d72617061,0x706d6f6336315a5f\n"
".quad 0x7265746e49746361,0x76456a49736c6176,0x5f54505f30536650,0x536a6a66665f3253\n"
".quad 0x090a3b5d6a6a5f32,0x203233662e766f6d,0x6625202c34662509,0x702e646c090a3b33\n"
".quad 0x3233752e6d617261,0x5b202c3172250920,0x6170616475635f5f,0x315a5f5f37666d72\n"
".quad 0x746361706d6f6336,0x6c61767265746e49,0x53665076456a4973,0x5f32535f54505f30\n"
".quad 0x6a5f32536a6a6666,0x766f6d090a3b5d6a,0x722509203233732e,0x0a3b317225202c32\n"
".quad 0x617261702e646c09,0x2509203233752e6d,0x635f5f5b202c3372,0x666d726170616475\n"
".quad 0x6f6336315a5f5f38,0x746e49746361706d,0x6a49736c61767265,0x505f305366507645\n"
".quad 0x6a66665f32535f54,0x3b5d6a6a5f32536a,0x33732e766f6d090a,0x202c347225092032\n"
".quad 0x646c090a3b337225,0x752e6d617261702e,0x3964722509203436,0x6475635f5f5b202c\n"
".quad 0x5f39666d72617061,0x706d6f6336315a5f,0x7265746e49746361,0x76456a49736c6176\n"
".quad 0x5f54505f30536650,0x536a6a66665f3253,0x090a3b5d6a6a5f32,0x203436732e766f6d\n"
".quad 0x202c303164722509,0x6c090a3b39647225,0x2e6d617261702e64,0x3572250920323375\n"
".quad 0x6475635f5f5b202c,0x3031666d72617061,0x6d6f6336315a5f5f,0x65746e4974636170\n"
".quad 0x456a49736c617672,0x54505f3053665076,0x6a6a66665f32535f,0x0a3b5d6a6a5f3253\n"
".quad 0x3233732e766f6d09,0x25202c3672250920,0x2e646c090a3b3572,0x33752e6d61726170\n"
".quad 0x202c377225092032,0x70616475635f5f5b,0x5f5f3131666d7261,0x61706d6f6336315a\n"
".quad 0x767265746e497463,0x5076456a49736c61,0x535f54505f305366,0x32536a6a66665f32\n"
".quad 0x6d090a3b5d6a6a5f,0x09203233732e766f,0x377225202c387225,0x752e766f6d090a3b\n"
".quad 0x2c39722509203233,0x3b782e6469742520,0x33752e766f6d090a,0x2c30317225092032\n"
".quad 0x746573090a3b3120,0x2e3233752e71652e,0x3172250920323375,0x202c387225202c31\n"
".quad 0x6e090a3b30317225,0x09203233732e6765,0x7225202c32317225,0x746573090a3b3131\n"
".quad 0x2e3233752e74672e,0x3172250920323375,0x202c367225202c33,0x656e090a3b397225\n"
".quad 0x2509203233732e67,0x317225202c343172,0x2e646e61090a3b33,0x3172250920323362\n"
".quad 0x2c32317225202c35,0x090a3b3431722520,0x203233752e766f6d,0x30202c3631722509\n"
".quad 0x2e70746573090a3b,0x09203233732e7165,0x317225202c317025,0x3b36317225202c35\n"
".quad 0x622031702540090a,0x5f744c2409206172,0x0a3b323832315f36,0x363109636f6c2e09\n"
".quad 0x090a300930343409,0x752e6f6c2e6c756d,0x3731722509203233,0x34202c397225202c\n"
".quad 0x752e747663090a3b,0x09203233752e3436,0x25202c3131647225,0x6461090a3b373172\n"
".quad 0x2509203436752e64,0x7225202c32316472,0x647225202c313164,0x2e646c090a3b3031\n"
".quad 0x3172250920323375,0x316472255b202c38,0x61090a3b5d302b32,0x09203233752e6464\n"
".quad 0x7225202c39317225,0x3b367225202c3831,0x3109636f6c2e090a,0x0a30093234340936\n"
".quad 0x2e6f6c2e6c756d09,0x3272250920323375,0x2c39317225202c30,0x747663090a3b3420\n"
".quad 0x3233752e3436752e,0x2c33316472250920,0x090a3b3032722520,0x203436752e646461\n"
".quad 0x202c343164722509,0x25202c3331647225,0x7473090a3b326472,0x255b09203233662e\n"
".quad 0x2c5d302b34316472,0x2e090a3b32662520,0x3409363109636f6c,0x6461090a30093334\n"
".quad 0x2509203436752e64,0x7225202c35316472,0x647225202c333164,0x662e7473090a3b34\n"
".quad 0x6472255b09203233,0x25202c5d302b3531,0x6f6c2e090a3b3466,0x3434340936310963\n"
".quad 0x2e646461090a3009,0x6472250920343675,0x31647225202c3631,0x3b36647225202c33\n"
".quad 0x3233752e7473090a,0x36316472255b0920,0x327225202c5d302b,0x09636f6c2e090a3b\n"
".quad 0x3009353434093631,0x36752e646461090a,0x3731647225092034,0x2c3331647225202c\n"
".quad 0x090a3b3864722520,0x09203233752e7473,0x302b37316472255b,0x0a3b347225202c5d\n"
".quad 0x32315f365f744c24,0x6f6c2e090a3a3238,0x3734340936310963,0x3b746572090a3009\n"
".quad 0x646e6557444c240a,0x6d6f6336315a5f5f,0x65746e4974636170,0x456a49736c617672\n"
".quad 0x54505f3053665076,0x6a6a66665f32535f,0x090a3a6a6a5f3253,0x315a5f202f2f207d\n"
".quad 0x746361706d6f6336,0x6c61767265746e49,0x53665076456a4973,0x5f32535f54505f30\n"
".quad 0x6a5f32536a6a6666,0x7369762e090a0a6a,0x75662e20656c6269,0x7333315a5f20636e\n"
".quad 0x65746e4965726f74,0x456a6a496c617672,0x505f305366506a76,0x66665f32535f3054\n"
".quad 0x2820665f33535f54,0x2e206d617261702e,0x75635f5f20323375,0x31666d7261706164\n"
".quad 0x6f747333315a5f5f,0x767265746e496572,0x6a76456a6a496c61,0x3054505f30536650\n"
".quad 0x5f5466665f32535f,0x702e202c665f3353,0x36752e206d617261,0x616475635f5f2034\n"
".quad 0x5f5f32666d726170,0x65726f747333315a,0x6c61767265746e49,0x66506a76456a6a49\n"
".quad 0x535f3054505f3053,0x33535f5466665f32,0x7261702e202c665f,0x203436752e206d61\n"
".quad 0x6170616475635f5f,0x315a5f5f33666d72,0x6e4965726f747333,0x6a496c6176726574\n"
".quad 0x305366506a76456a,0x5f32535f3054505f,0x665f33535f546666,0x6d617261702e202c\n"
".quad 0x5f5f203436752e20,0x6d72617061647563,0x7333315a5f5f3466,0x65746e4965726f74\n"
".quad 0x456a6a496c617672,0x505f305366506a76,0x66665f32535f3054,0x202c665f33535f54\n"
".quad 0x2e206d617261702e,0x75635f5f20343675,0x35666d7261706164,0x6f747333315a5f5f\n"
".quad 0x767265746e496572,0x6a76456a6a496c61,0x3054505f30536650,0x5f5466665f32535f\n"
".quad 0x702e202c665f3353,0x33662e206d617261,0x616475635f5f2032,0x5f5f36666d726170\n"
".quad 0x65726f747333315a,0x6c61767265746e49,0x66506a76456a6a49,0x535f3054505f3053\n"
".quad 0x33535f5466665f32,0x7261702e202c665f,0x203233662e206d61,0x6170616475635f5f\n"
".quad 0x315a5f5f37666d72,0x6e4965726f747333,0x6a496c6176726574,0x305366506a76456a\n"
".quad 0x5f32535f3054505f,0x665f33535f546666,0x6d617261702e202c,0x5f5f203233752e20\n"
".quad 0x6d72617061647563,0x7333315a5f5f3866,0x65746e4965726f74,0x456a6a496c617672\n"
".quad 0x505f305366506a76,0x66665f32535f3054,0x202c665f33535f54,0x2e206d617261702e\n"
".quad 0x75635f5f20323375,0x39666d7261706164,0x6f747333315a5f5f,0x767265746e496572\n"
".quad 0x6a76456a6a496c61,0x3054505f30536650,0x5f5466665f32535f,0x702e202c665f3353\n"
".quad 0x33662e206d617261,0x616475635f5f2032,0x5f3031666d726170,0x726f747333315a5f\n"
".quad 0x61767265746e4965,0x506a76456a6a496c,0x5f3054505f305366,0x535f5466665f3253\n"
".quad 0x0a7b090a29665f33,0x752e206765722e09,0x31313c7225203233,0x6765722e090a3b3e\n"
".quad 0x7225203436752e20,0x090a3b3e35313c64,0x33662e206765722e,0x3e32323c66252032\n"
".quad 0x206765722e090a3b,0x646625203436662e,0x722e090a3b3e363c,0x646572702e206765\n"
".quad 0x0a3b3e353c702520,0x363109636f6c2e09,0x240a300936323109,0x6e6967656257444c\n"
".quad 0x6f747333315a5f5f,0x767265746e496572,0x6a76456a6a496c61,0x3054505f30536650\n"
".quad 0x5f5466665f32535f,0x6c090a3a665f3353,0x2e6d617261702e64,0x3172250920323375\n"
".quad 0x6475635f5f5b202c,0x5f31666d72617061,0x726f747333315a5f,0x61767265746e4965\n"
".quad 0x506a76456a6a496c,0x5f3054505f305366,0x535f5466665f3253,0x6d090a3b5d665f33\n"
".quad 0x09203233732e766f,0x317225202c327225,0x61702e646c090a3b,0x203436752e6d6172\n"
".quad 0x5b202c3164722509,0x6170616475635f5f,0x315a5f5f32666d72,0x6e4965726f747333\n"
".quad 0x6a496c6176726574,0x305366506a76456a,0x5f32535f3054505f,0x665f33535f546666\n"
".quad 0x2e766f6d090a3b5d,0x6472250920343673,0x3b31647225202c32,0x7261702e646c090a\n"
".quad 0x09203436752e6d61,0x5f5b202c33647225,0x726170616475635f,0x33315a5f5f33666d\n"
".quad 0x746e4965726f7473,0x6a6a496c61767265,0x5f305366506a7645,0x665f32535f305450\n"
".quad 0x5d665f33535f5466,0x732e766f6d090a3b,0x3464722509203436,0x0a3b33647225202c\n"
".quad 0x617261702e646c09,0x2509203436752e6d,0x5f5f5b202c356472,0x6d72617061647563\n"
".quad 0x7333315a5f5f3466,0x65746e4965726f74,0x456a6a496c617672,0x505f305366506a76\n"
".quad 0x66665f32535f3054,0x3b5d665f33535f54,0x36732e766f6d090a,0x2c36647225092034\n"
".quad 0x090a3b3564722520,0x6d617261702e646c,0x722509203436752e,0x635f5f5b202c3764\n"
".quad 0x666d726170616475,0x747333315a5f5f35,0x7265746e4965726f,0x76456a6a496c6176\n"
".quad 0x54505f305366506a,0x5466665f32535f30,0x0a3b5d665f33535f,0x3436732e766f6d09\n"
".quad 0x202c386472250920,0x6c090a3b37647225,0x2e6d617261702e64,0x3166250920323366\n"
".quad 0x6475635f5f5b202c,0x5f36666d72617061,0x726f747333315a5f,0x61767265746e4965\n"
".quad 0x506a76456a6a496c,0x5f3054505f305366,0x535f5466665f3253,0x6d090a3b5d665f33\n"
".quad 0x09203233662e766f,0x316625202c326625,0x61702e646c090a3b,0x203233662e6d6172\n"
".quad 0x5f5b202c33662509,0x726170616475635f,0x33315a5f5f37666d,0x746e4965726f7473\n"
".quad 0x6a6a496c61767265,0x5f305366506a7645,0x665f32535f305450,0x5d665f33535f5466\n"
".quad 0x662e766f6d090a3b,0x2c34662509203233,0x6c090a3b33662520,0x2e6d617261702e64\n"
".quad 0x3372250920323375,0x6475635f5f5b202c,0x5f38666d72617061,0x726f747333315a5f\n"
".quad 0x61767265746e4965,0x506a76456a6a496c,0x5f3054505f305366,0x535f5466665f3253\n"
".quad 0x6d090a3b5d665f33,0x09203233732e766f,0x337225202c347225,0x61702e646c090a3b\n"
".quad 0x203233752e6d6172,0x5f5b202c35722509,0x726170616475635f,0x33315a5f5f39666d\n"
".quad 0x746e4965726f7473,0x6a6a496c61767265,0x5f305366506a7645,0x665f32535f305450\n"
".quad 0x5d665f33535f5466,0x732e766f6d090a3b,0x2c36722509203233,0x6c090a3b35722520\n"
".quad 0x2e6d617261702e64,0x3566250920323366,0x6475635f5f5b202c,0x3031666d72617061\n"
".quad 0x6f747333315a5f5f,0x767265746e496572,0x6a76456a6a496c61,0x3054505f30536650\n"
".quad 0x5f5466665f32535f,0x090a3b5d665f3353,0x203233662e766f6d,0x6625202c36662509\n"
".quad 0x636f6c2e090a3b35,0x0937323109363109,0x6c2e6c756d090a30,0x2509203233752e6f\n"
".quad 0x2c327225202c3772,0x747663090a3b3420,0x3233752e3436752e,0x202c396472250920\n"
".quad 0x6461090a3b377225,0x2509203436752e64,0x7225202c30316472,0x36647225202c3964\n"
".quad 0x33752e7473090a3b,0x316472255b092032,0x7225202c5d302b30,0x636f6c2e090a3b34\n"
".quad 0x0938323109363109,0x752e646461090a30,0x3164722509203436,0x2c39647225202c31\n"
".quad 0x090a3b3864722520,0x09203233752e7473,0x302b31316472255b,0x0a3b367225202c5d\n"
".quad 0x3233662e62757309,0x25202c3766250920,0x3b326625202c3466,0x36752e646461090a\n"
".quad 0x3231647225092034,0x202c39647225202c,0x61090a3b32647225,0x09203436752e6464\n"
".quad 0x25202c3331647225,0x647225202c396472,0x2e736261090a3b34,0x3866250920323366\n"
".quad 0x090a3b376625202c,0x2e3436662e747663,0x6466250920323366,0x0a3b386625202c31\n"
".quad 0x3233662e73626109,0x25202c3966250920,0x736261090a3b3266,0x662509203233662e\n"
".quad 0x3b346625202c3031,0x33662e78616d090a,0x2c31316625092032,0x6625202c39662520\n"
".quad 0x6c756d090a3b3031,0x662509203233662e,0x2c366625202c3231,0x090a3b3131662520\n"
".quad 0x2e3436662e747663,0x6466250920323366,0x3b32316625202c32,0x36662e766f6d090a\n"
".quad 0x2c33646625092034,0x3435363833643020,0x3264323339343834,0x202f2f093b323765\n"
".quad 0x6d090a37332d6535,0x09203436662e7861,0x6625202c34646625,0x33646625202c3264\n"
".quad 0x2e70746573090a3b,0x09203436662e656c,0x646625202c317025,0x3b34646625202c31\n"
".quad 0x203170252140090a,0x744c240920617262,0x3b363835335f375f,0x33662e766f6d090a\n"
".quad 0x2c33316625092032,0x3030303030663020,0x202020203b303030,0x73090a30202f2f09\n"
".quad 0x662e746c2e707465,0x2c32702509203233,0x6625202c32662520,0x766f6d090a3b3331\n"
".quad 0x662509203233662e,0x30306630202c3431,0x203b303030303030,0x30202f2f09202020\n"
".quad 0x6c2e70746573090a,0x2509203233662e74,0x2c346625202c3370,0x090a3b3431662520\n"
".quad 0x7262203370252140,0x375f744c24092061,0x090a3b383930345f,0x09363109636f6c2e\n"
".quad 0x73090a3009363331,0x203233732e706c65,0x2c31202c38722509,0x3b327025202c3020\n"
".quad 0x6e752e617262090a,0x375f744c24092069,0x240a3b323438335f,0x3930345f375f744c\n"
".quad 0x706c6573090a3a38,0x722509203233732e,0x2c31202c30202c38,0x4c240a3b32702520\n"
".quad 0x323438335f375f74,0x09636f6c2e090a3a,0x3009393331093631,0x33662e646461090a\n"
".quad 0x2c35316625092032,0x6625202c32662520,0x2e766f6d090a3b34,0x3166250920323366\n"
".quad 0x3066336630202c36,0x20203b3030303030,0x2e30202f2f092020,0x722e616d66090a35\n"
".quad 0x2509203233662e6e,0x376625202c373166,0x202c36316625202c,0x6f6d090a3b326625\n"
".quad 0x2509203233662e76,0x336630202c383166,0x3b30303030303066,0x202f2f0920202020\n"
".quad 0x6c756d090a352e30,0x662509203233662e,0x35316625202c3931,0x0a3b38316625202c\n"
".quad 0x3233732e67656e09,0x25202c3972250920,0x636c73090a3b3872,0x33732e3233662e74\n"
".quad 0x2c30326625092032,0x25202c3931662520,0x397225202c373166,0x33662e7473090a3b\n"
".quad 0x316472255b092032,0x6625202c5d302b32,0x6f6c2e090a3b3032,0x3034310936310963\n"
".quad 0x662e7473090a3009,0x6472255b09203233,0x25202c5d302b3331,0x7262090a3b303266\n"
".quad 0x240920696e752e61,0x3333335f375f744c,0x375f744c240a3b30,0x090a3a363835335f\n"
".quad 0x09363109636f6c2e,0x73090a3009353431,0x5b09203233662e74,0x5d302b3231647225\n"
".quad 0x090a3b326625202c,0x09363109636f6c2e,0x73090a3009363431,0x5b09203233662e74\n"
".quad 0x5d302b3331647225,0x240a3b346625202c,0x3333335f375f744c,0x636f6c2e090a3a30\n"
".quad 0x0938343109363109,0x0a3b746572090a30,0x5f646e6557444c24,0x726f747333315a5f\n"
".quad 0x61767265746e4965,0x506a76456a6a496c,0x5f3054505f305366,0x535f5466665f3253\n"
".quad 0x207d090a3a665f33,0x7333315a5f202f2f,0x65746e4965726f74,0x456a6a496c617672\n"
".quad 0x505f305366506a76,0x66665f32535f3054,0x0a0a665f33535f54,0x207972746e652e09\n"
".quad 0x6573696232315a5f,0x6c656e72654b7463,0x535f536a5f536650,0x66665f30536a505f\n"
".quad 0x09090a2820666a6a,0x2e206d617261702e,0x75635f5f20343675,0x5f5f6d7261706164\n"
".quad 0x636573696232315a,0x506c656e72654b74,0x5f535f536a5f5366,0x6a66665f30536a50\n"
".quad 0x0a2c645f675f666a,0x6d617261702e0909,0x5f5f203436752e20,0x6d72617061647563\n"
".quad 0x73696232315a5f5f,0x656e72654b746365,0x5f536a5f5366506c,0x665f30536a505f53\n"
".quad 0x735f675f666a6a66,0x7261702e09090a2c,0x203233752e206d61,0x6170616475635f5f\n"
".quad 0x6232315a5f5f6d72,0x72654b7463657369,0x6a5f5366506c656e,0x30536a505f535f53\n"
".quad 0x6e5f666a6a66665f,0x7261702e09090a2c,0x203436752e206d61,0x6170616475635f5f\n"
".quad 0x6232315a5f5f6d72,0x72654b7463657369,0x6a5f5366506c656e,0x30536a505f535f53\n"
".quad 0x675f666a6a66665f,0x090a2c7466656c5f,0x206d617261702e09,0x635f5f203436752e\n"
".quad 0x5f6d726170616475,0x6573696232315a5f,0x6c656e72654b7463,0x535f536a5f536650\n"
".quad 0x66665f30536a505f,0x69725f675f666a6a,0x2e09090a2c746867,0x752e206d61726170\n"
".quad 0x6475635f5f203436,0x5a5f5f6d72617061,0x7463657369623231,0x66506c656e72654b\n"
".quad 0x505f535f536a5f53,0x6a6a66665f30536a,0x7466656c5f675f66,0x0a2c746e756f635f\n"
".quad 0x6d617261702e0909,0x5f5f203436752e20,0x6d72617061647563,0x73696232315a5f5f\n"
".quad 0x656e72654b746365,0x5f536a5f5366506c,0x665f30536a505f53,0x725f675f666a6a66\n"
".quad 0x756f635f74686769,0x702e09090a2c746e,0x33662e206d617261,0x616475635f5f2032\n"
".quad 0x315a5f5f6d726170,0x4b74636573696232,0x5366506c656e7265,0x6a505f535f536a5f\n"
".quad 0x666a6a66665f3053,0x2e09090a2c676c5f,0x662e206d61726170,0x6475635f5f203233\n"
".quad 0x5a5f5f6d72617061,0x7463657369623231,0x66506c656e72654b,0x505f535f536a5f53\n"
".quad 0x6a6a66665f30536a,0x09090a2c67755f66,0x2e206d617261702e,0x75635f5f20323375\n"
".quad 0x5f5f6d7261706164,0x636573696232315a,0x506c656e72654b74,0x5f535f536a5f5366\n"
".quad 0x6a66665f30536a50,0x69655f676c5f666a,0x2c746e756f635f67,0x617261702e09090a\n"
".quad 0x5f203233752e206d,0x726170616475635f,0x696232315a5f5f6d,0x6e72654b74636573\n"
".quad 0x536a5f5366506c65,0x5f30536a505f535f,0x67755f666a6a6666,0x756f635f6769655f\n"
".quad 0x702e09090a2c746e,0x33662e206d617261,0x616475635f5f2032,0x315a5f5f6d726170\n"
".quad 0x4b74636573696232,0x5366506c656e7265,0x6a505f535f536a5f,0x666a6a66665f3053\n"
".quad 0x6e6f6c697370655f,0x722e090a7b090a29,0x203233752e206765,0x3b3e3034313c7225\n"
".quad 0x2e206765722e090a,0x3c64722520343675,0x722e090a3b3e3435,0x203233662e206765\n"
".quad 0x0a3b3e33373c6625,0x662e206765722e09,0x313c646625203436,0x65722e090a3b3e34\n"
".quad 0x20646572702e2067,0x0a3b3e35343c7025,0x6465726168732e09,0x206e67696c612e20\n"
".quad 0x5f5f2038622e2034,0x635f5f5f61647563,0x61636f6c5f616475,0x37335f7261765f6c\n"
".quad 0x6e5f33335f363934,0x74736e6f635f6e6f,0x377466656c5f735f,0x3b5d383430325b36\n"
".quad 0x65726168732e090a,0x6e67696c612e2064,0x5f2038622e203420,0x5f5f5f616475635f\n"
".quad 0x636f6c5f61647563,0x335f7261765f6c61,0x5f30345f31303537,0x736e6f635f6e6f6e\n"
".quad 0x7466656c5f735f74,0x3132746e756f635f,0x5d383430325b3432,0x726168732e090a3b\n"
".quad 0x67696c612e206465,0x2038622e2034206e,0x5f5f616475635f5f,0x6f6c5f616475635f\n"
".quad 0x5f7261765f6c6163,0x5f355f3630353733,0x736e6f635f6e6f6e,0x706d6f635f735f74\n"
".quad 0x6c5f6e6f69746361,0x5b32373134747369,0x090a3b5d32353032,0x206465726168732e\n"
".quad 0x34206e67696c612e,0x635f5f2038622e20,0x75635f5f5f616475,0x6c61636f6c5f6164\n"
".quad 0x3437335f7261765f,0x6f6e5f33335f3739,0x5f74736e6f635f6e,0x3674686769725f73\n"
".quad 0x383430325b343232,0x6168732e090a3b5d,0x696c612e20646572,0x38622e2034206e67\n"
".quad 0x5f616475635f5f20,0x6c5f616475635f5f,0x7261765f6c61636f,0x345f32303537335f\n"
".quad 0x6f635f6e6f6e5f30,0x69725f735f74736e,0x6e756f635f746867,0x30325b3237323874\n"
".quad 0x732e090a3b5d3834,0x752e206465726168,0x6475635f5f203233,0x5f6c61636f6c5f61\n"
".quad 0x313537335f726176,0x6e6f6e5f30345f31,0x635f74736e6f635f,0x735f746361706d6f\n"
".quad 0x68635f646e6f6365,0x732e090a3b6b6e75,0x752e206465726168,0x6475635f5f203233\n"
".quad 0x5f6c61636f6c5f61,0x313537335f726176,0x6e6f6e5f30345f35,0x6e5f74736e6f635f\n"
".quad 0x61657268745f6d75,0x76697463615f7364,0x6168732e090a3b65,0x3233752e20646572\n"
".quad 0x5f616475635f5f20,0x61765f6c61636f6c,0x5f38313537335f72,0x635f6e6f6e5f3034\n"
".quad 0x6d756e5f74736e6f,0x736461657268745f,0x746361706d6f635f,0x732e090a3b6e6f69\n"
".quad 0x752e206465726168,0x6475635f5f203233,0x5f6c61636f6c5f61,0x313537335f726176\n"
".quad 0x6e6f6e5f30345f32,0x615f74736e6f635f,0x61657268745f6c6c,0x65766e6f635f7364\n"
".quad 0x2e090a3b64656772,0x3609303309636f6c,0x57444c240a300938,0x5a5f5f6e69676562\n"
".quad 0x7463657369623231,0x66506c656e72654b,0x505f535f536a5f53,0x6a6a66665f30536a\n"
".quad 0x2e766f6d090a3a66,0x6472250920343675,0x6475635f5f202c31,0x616475635f5f5f61\n"
".quad 0x765f6c61636f6c5f,0x36393437335f7261,0x5f6e6f6e5f33335f,0x5f735f74736e6f63\n"
".quad 0x0a3b36377466656c,0x3436752e766f6d09,0x202c326472250920,0x5f5f616475635f5f\n"
".quad 0x6f6c5f616475635f,0x5f7261765f6c6163,0x30345f3130353733,0x6e6f635f6e6f6e5f\n"
".quad 0x66656c5f735f7473,0x32746e756f635f74,0x6f6d090a3b343231,0x2509203436752e76\n"
".quad 0x635f5f202c336472,0x75635f5f5f616475,0x6c61636f6c5f6164,0x3537335f7261765f\n"
".quad 0x6e6f6e5f355f3630,0x735f74736e6f635f,0x746361706d6f635f,0x7473696c5f6e6f69\n"
".quad 0x6d090a3b32373134,0x09203436752e766f,0x5f5f202c34647225,0x635f5f5f61647563\n"
".quad 0x61636f6c5f616475,0x37335f7261765f6c,0x6e5f33335f373934,0x74736e6f635f6e6f\n"
".quad 0x74686769725f735f,0x6d090a3b34323236,0x09203436752e766f,0x5f5f202c35647225\n"
".quad 0x635f5f5f61647563,0x61636f6c5f616475,0x37335f7261765f6c,0x6e5f30345f323035\n"
".quad 0x74736e6f635f6e6f,0x74686769725f735f,0x3238746e756f635f,0x6f6c2e090a3b3237\n"
".quad 0x3431310930330963,0x2e766f6d090a3009,0x3172250920323375,0x782e64697425202c\n"
".quad 0x752e747663090a3b,0x09203233752e3436,0x7225202c36647225,0x2e6c756d090a3b31\n"
".quad 0x3233752e65646977,0x202c376472250920,0x0a3b34202c317225,0x3233752e766f6d09\n"
".quad 0x30202c3272250920,0x752e646461090a3b,0x3864722509203436,0x202c37647225202c\n"
".quad 0x73090a3b33647225,0x6465726168732e74,0x255b09203233752e,0x202c5d302b386472\n"
".quad 0x6c2e090a3b327225,0x313109303309636f,0x646461090a300935,0x722509203436752e\n"
".quad 0x37647225202c3964,0x0a3b31647225202c,0x3233662e766f6d09,0x30202c3166250920\n"
".quad 0x3030303030303066,0x0920202020203b30,0x7473090a30202f2f,0x2e6465726168732e\n"
".quad 0x72255b0920323366,0x25202c5d302b3964,0x6f6c2e090a3b3166,0x3631310930330963\n"
".quad 0x2e766f6d090a3009,0x3266250920323366,0x303030306630202c,0x2020203b30303030\n"
".quad 0x0a30202f2f092020,0x3436752e64646109,0x2c30316472250920,0x25202c3764722520\n"
".quad 0x7473090a3b346472,0x2e6465726168732e,0x72255b0920323366,0x202c5d302b303164\n"
".quad 0x6c2e090a3b326625,0x313109303309636f,0x646461090a300937,0x722509203436752e\n"
".quad 0x647225202c313164,0x3b32647225202c37,0x33752e766f6d090a,0x202c337225092032\n"
".quad 0x732e7473090a3b30,0x33752e6465726168,0x316472255b092032,0x7225202c5d302b31\n"
".quad 0x636f6c2e090a3b33,0x0938313109303309,0x752e766f6d090a30,0x2c34722509203233\n"
".quad 0x646461090a3b3020,0x722509203436752e,0x647225202c323164,0x3b35647225202c37\n"
".quad 0x6168732e7473090a,0x203233752e646572,0x2b32316472255b09,0x3b347225202c5d30\n"
".quad 0x3309636f6c2e090a,0x0a30093032310930,0x6e79732e72616209,0x6d090a3b30092063\n"
".quad 0x09203233752e766f,0x0a3b30202c357225,0x71652e7074657309,0x702509203233752e\n"
".quad 0x202c317225202c31,0x2140090a3b357225,0x2061726220317025,0x335f385f744c2409\n"
".quad 0x2e090a3b30333335,0x3109303309636f6c,0x646c090a30093432,0x662e6d617261702e\n"
".quad 0x2c33662509203233,0x616475635f5f5b20,0x315a5f5f6d726170,0x4b74636573696232\n"
".quad 0x5366506c656e7265,0x6a505f535f536a5f,0x666a6a66665f3053,0x73090a3b5d676c5f\n"
".quad 0x6465726168732e74,0x5f5b09203233662e,0x5f5f5f616475635f,0x636f6c5f61647563\n"
".quad 0x335f7261765f6c61,0x5f33335f36393437,0x736e6f635f6e6f6e,0x7466656c5f735f74\n"
".quad 0x25202c5d302b3637,0x6f6c2e090a3b3366,0x3532310930330963,0x702e646c090a3009\n"
".quad 0x3233662e6d617261,0x5b202c3466250920,0x6170616475635f5f,0x6232315a5f5f6d72\n"
".quad 0x72654b7463657369,0x6a5f5366506c656e,0x30536a505f535f53,0x755f666a6a66665f\n"
".quad 0x2e7473090a3b5d67,0x662e646572616873,0x635f5f5b09203233,0x75635f5f5f616475\n"
".quad 0x6c61636f6c5f6164,0x3437335f7261765f,0x6f6e5f33335f3739,0x5f74736e6f635f6e\n"
".quad 0x3674686769725f73,0x202c5d302b343232,0x6c2e090a3b346625,0x323109303309636f\n"
".quad 0x2e646c090a300936,0x33752e6d61726170,0x202c367225092032,0x70616475635f5f5b\n"
".quad 0x32315a5f5f6d7261,0x654b746365736962,0x5f5366506c656e72,0x536a505f535f536a\n"
".quad 0x5f666a6a66665f30,0x635f6769655f676c,0x090a3b5d746e756f,0x65726168732e7473\n"
".quad 0x5b09203233752e64,0x5f5f616475635f5f,0x6f6c5f616475635f,0x5f7261765f6c6163\n"
".quad 0x30345f3130353733,0x6e6f635f6e6f6e5f,0x66656c5f735f7473,0x32746e756f635f74\n"
".quad 0x202c5d302b343231,0x6c2e090a3b367225,0x323109303309636f,0x2e646c090a300937\n"
".quad 0x33752e6d61726170,0x202c377225092032,0x70616475635f5f5b,0x32315a5f5f6d7261\n"
".quad 0x654b746365736962,0x5f5366506c656e72,0x536a505f535f536a,0x5f666a6a66665f30\n"
".quad 0x635f6769655f6775,0x090a3b5d746e756f,0x65726168732e7473,0x5b09203233752e64\n"
".quad 0x5f5f616475635f5f,0x6f6c5f616475635f,0x5f7261765f6c6163,0x30345f3230353733\n"
".quad 0x6e6f635f6e6f6e5f,0x6769725f735f7473,0x746e756f635f7468,0x2c5d302b32373238\n"
".quad 0x2e090a3b37722520,0x3109303309636f6c,0x6f6d090a30093932,0x2509203233752e76\n"
".quad 0x090a3b30202c3872,0x65726168732e7473,0x5b09203233752e64,0x6c5f616475635f5f\n"
".quad 0x7261765f6c61636f,0x345f31313537335f,0x6f635f6e6f6e5f30,0x706d6f635f74736e\n"
".quad 0x6f6365735f746361,0x6b6e7568635f646e,0x0a3b387225202c5d,0x303309636f6c2e09\n"
".quad 0x090a300930333109,0x203233752e766f6d,0x3b31202c39722509,0x6168732e7473090a\n"
".quad 0x203233752e646572,0x616475635f5f5b09,0x765f6c61636f6c5f,0x35313537335f7261\n"
".quad 0x5f6e6f6e5f30345f,0x756e5f74736e6f63,0x6461657268745f6d,0x6576697463615f73\n"
".quad 0x0a3b397225202c5d,0x303309636f6c2e09,0x090a300932333109,0x203233752e766f6d\n"
".quad 0x31202c3031722509,0x68732e7473090a3b,0x3233752e64657261,0x6475635f5f5b0920\n"
".quad 0x5f6c61636f6c5f61,0x313537335f726176,0x6e6f6e5f30345f38,0x6e5f74736e6f635f\n"
".quad 0x61657268745f6d75,0x61706d6f635f7364,0x202c5d6e6f697463,0x4c240a3b30317225\n"
".quad 0x333335335f385f74,0x702e646c090a3a30,0x3233752e6d617261,0x202c313172250920\n"
".quad 0x70616475635f5f5b,0x32315a5f5f6d7261,0x654b746365736962,0x5f5366506c656e72\n"
".quad 0x536a505f535f536a,0x5f666a6a66665f30,0x746573090a3b5d6e,0x3233752e74672e70\n"
".quad 0x25202c3270250920,0x317225202c313172,0x662e766f6d090a3b,0x2c35662509203233\n"
".quad 0x3030303030663020,0x202020203b303030,0x090a30202f2f0920,0x203233752e766f6d\n"
".quad 0x30202c3231722509,0x752e766f6d090a3b,0x3331722509203233,0x6f6d090a3b30202c\n"
".quad 0x2509203233662e76,0x30306630202c3666,0x203b303030303030,0x202f2f0920202020\n"
".quad 0x662e766f6d090a30,0x2c37662509203233,0x3030303030663020,0x202020203b303030\n"
".quad 0x240a30202f2f0920,0x3034325f385f744c,0x3c2f2f200a3a3636,0x6f4c203e706f6f6c\n"
".quad 0x2079646f6220706f,0x39333120656e696c,0x3309636f6c2e090a,0x0a30093933310930\n"
".quad 0x3233752e766f6d09,0x202c343172250920,0x732e7473090a3b31,0x33752e6465726168\n"
".quad 0x75635f5f5b092032,0x6c61636f6c5f6164,0x3537335f7261765f,0x6f6e5f30345f3231\n"
".quad 0x5f74736e6f635f6e,0x657268745f6c6c61,0x766e6f635f736461,0x202c5d6465677265\n"
".quad 0x2e090a3b34317225,0x3109303309636f6c,0x6162090a30093034,0x0920636e79732e72\n"
".quad 0x636f6c2e090a3b30,0x0933343109303309,0x68732e646c090a30,0x3233752e64657261\n"
".quad 0x202c353172250920,0x5f616475635f5f5b,0x61765f6c61636f6c,0x5f35313537335f72\n"
".quad 0x635f6e6f6e5f3034,0x6d756e5f74736e6f,0x736461657268745f,0x5d6576697463615f\n"
".quad 0x2e70746573090a3b,0x09203233752e656c,0x317225202c337025,0x0a3b317225202c35\n"
".quad 0x7262203370254009,0x385f744c24092061,0x0a3b38373337335f,0x706f6f6c3c2f2f20\n"
".quad 0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f,0x6568202c39333120\n"
".quad 0x6c6562616c206461,0x385f744c24206465,0x090a36363034325f,0x09363109636f6c2e\n"
".quad 0x6d090a3009363935,0x33752e6f6c2e6c75,0x2c36317225092032,0x3b34202c31722520\n"
".quad 0x36752e747663090a,0x2509203233752e34,0x7225202c33316472,0x646461090a3b3631\n"
".quad 0x722509203436752e,0x647225202c343164,0x31647225202c3331,0x68732e646c090a3b\n"
".quad 0x3233662e64657261,0x5b202c3766250920,0x5d302b3431647225,0x09636f6c2e090a3b\n"
".quad 0x3009373935093631,0x36752e646461090a,0x3531647225092034,0x2c3331647225202c\n"
".quad 0x090a3b3464722520,0x65726168732e646c,0x2509203233662e64,0x6472255b202c3666\n"
".quad 0x090a3b5d302b3531,0x09363109636f6c2e,0x61090a3009383935,0x09203436752e6464\n"
".quad 0x25202c3631647225,0x7225202c33316472,0x2e646c090a3b3264,0x752e646572616873\n"
".quad 0x3331722509203233,0x36316472255b202c,0x6c2e090a3b5d302b,0x393509363109636f\n"
".quad 0x646461090a300939,0x722509203436752e,0x647225202c373164,0x35647225202c3331\n"
".quad 0x68732e646c090a3b,0x3233752e64657261,0x202c323172250920,0x302b37316472255b\n"
".quad 0x70746573090a3b5d,0x3233662e75656e2e,0x25202c3470250920,0x3b376625202c3666\n"
".quad 0x203470252140090a,0x744c240920617262,0x30313636335f385f,0x6f6c3c2f2f200a3b\n"
".quad 0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220,0x202c39333120656e\n"
".quad 0x62616c2064616568,0x744c242064656c65,0x36363034325f385f,0x33662e766f6d090a\n"
".quad 0x202c386625092032,0x3030303030306630,0x20202020203b3030,0x73090a30202f2f09\n"
".quad 0x662e746c2e707465,0x2c35702509203233,0x6625202c37662520,0x2e766f6d090a3b38\n"
".quad 0x3966250920323366,0x303030306630202c,0x2020203b30303030,0x0a30202f2f092020\n"
".quad 0x746c2e7074657309,0x702509203233662e,0x202c366625202c36,0x2140090a3b396625\n"
".quad 0x2061726220367025,0x335f385f744c2409,0x2f200a3b32323137,0x203e706f6f6c3c2f\n"
".quad 0x20666f2074726150,0x646f6220706f6f6c,0x3120656e696c2079,0x64616568202c3933\n"
".quad 0x64656c6562616c20,0x325f385f744c2420,0x6c2e090a36363034,0x303609363109636f\n"
".quad 0x6c6573090a300934,0x2509203233732e70,0x202c31202c373172,0x0a3b357025202c30\n"
".quad 0x696e752e61726209,0x5f385f744c240920,0x240a3b3636383633,0x3137335f385f744c\n"
".quad 0x3c2f2f200a3a3232,0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f\n"
".quad 0x39333120656e696c,0x6c2064616568202c,0x242064656c656261,0x3034325f385f744c\n"
".quad 0x706c6573090a3636,0x722509203233732e,0x31202c30202c3731,0x240a3b357025202c\n"
".quad 0x3836335f385f744c,0x3c2f2f200a3a3636,0x6150203e706f6f6c,0x6f6c20666f207472\n"
".quad 0x2079646f6220706f,0x39333120656e696c,0x6c2064616568202c,0x242064656c656261\n"
".quad 0x3034325f385f744c,0x2e627573090a3636,0x3166250920323366,0x202c366625202c30\n"
".quad 0x6f6d090a3b376625,0x2509203233662e76,0x336630202c313166,0x3b30303030303066\n"
".quad 0x202f2f0920202020,0x616d66090a352e30,0x203233662e6e722e,0x25202c3231662509\n"
".quad 0x316625202c303166,0x0a3b376625202c31,0x3233662e64646109,0x202c333166250920\n"
".quad 0x376625202c366625,0x662e766f6d090a3b,0x3431662509203233,0x303066336630202c\n"
".quad 0x2020203b30303030,0x352e30202f2f0920,0x33662e6c756d090a,0x2c35316625092032\n"
".quad 0x25202c3331662520,0x656e090a3b343166,0x2509203233732e67,0x317225202c383172\n"
".quad 0x74636c73090a3b37,0x3233732e3233662e,0x25202c3566250920,0x316625202c353166\n"
".quad 0x3b38317225202c32,0x3109636f6c2e090a,0x0a30093530360936,0x3233752e766f6d09\n"
".quad 0x202c393172250920,0x732e7473090a3b30,0x33752e6465726168,0x75635f5f5b092032\n"
".quad 0x6c61636f6c5f6164,0x3537335f7261765f,0x6f6e5f30345f3231,0x5f74736e6f635f6e\n"
".quad 0x657268745f6c6c61,0x766e6f635f736461,0x202c5d6465677265,0x62090a3b39317225\n"
".quad 0x0920696e752e6172,0x37335f385f744c24,0x744c240a3b383733,0x30313636335f385f\n"
".quad 0x6f6c3c2f2f200a3a,0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220\n"
".quad 0x202c39333120656e,0x62616c2064616568,0x744c242064656c65,0x36363034325f385f\n"
".quad 0x33752e627573090a,0x2c30327225092032,0x25202c3231722520,0x6f6d090a3b333172\n"
".quad 0x2509203233752e76,0x0a3b31202c313272,0x656c2e7074657309,0x702509203233752e\n"
".quad 0x2c30327225202c37,0x090a3b3132722520,0x6172622037702540,0x5f385f744c240920\n"
".quad 0x200a3b3837333733,0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20\n"
".quad 0x20656e696c207964,0x616568202c393331,0x656c6562616c2064,0x5f385f744c242064\n"
".quad 0x2e090a3636303432,0x3609363109636f6c,0x6f6d090a30093031,0x2509203233752e76\n"
".quad 0x0a3b30202c323272,0x726168732e747309,0x09203233752e6465,0x5f616475635f5f5b\n"
".quad 0x61765f6c61636f6c,0x5f32313537335f72,0x635f6e6f6e5f3034,0x6c6c615f74736e6f\n"
".quad 0x736461657268745f,0x677265766e6f635f,0x327225202c5d6465,0x385f744c240a3b32\n"
".quad 0x0a3a38373337335f,0x36335f385f744c24,0x744c240a3a343533,0x32343835335f385f\n"
".quad 0x6f6c3c2f2f200a3a,0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220\n"
".quad 0x202c39333120656e,0x62616c2064616568,0x744c242064656c65,0x36363034325f385f\n"
".quad 0x3309636f6c2e090a,0x0a30093934310930,0x6e79732e72616209,0x2e090a3b30092063\n"
".quad 0x3109303309636f6c,0x646c090a30093335,0x2e6465726168732e,0x3272250920323375\n"
".quad 0x75635f5f5b202c33,0x6c61636f6c5f6164,0x3537335f7261765f,0x6f6e5f30345f3231\n"
".quad 0x5f74736e6f635f6e,0x657268745f6c6c61,0x766e6f635f736461,0x0a3b5d6465677265\n"
".quad 0x3233752e766f6d09,0x202c343272250920,0x70746573090a3b31,0x203233752e71652e\n"
".quad 0x7225202c38702509,0x34327225202c3332,0x2038702540090a3b,0x744c240920617262\n"
".quad 0x0a3b3835325f385f,0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066\n"
".quad 0x656e696c2079646f,0x6568202c39333120,0x6c6562616c206461,0x385f744c24206465\n"
".quad 0x090a36363034325f,0x09303309636f6c2e,0x6c090a3009333631,0x6465726168732e64\n"
".quad 0x722509203233752e,0x635f5f5b202c3532,0x61636f6c5f616475,0x37335f7261765f6c\n"
".quad 0x6e5f30345f353135,0x74736e6f635f6e6f,0x7268745f6d756e5f,0x7463615f73646165\n"
".quad 0x2e090a3b5d657669,0x3109363109636f6c,0x6162090a30093238,0x0920636e79732e72\n"
".quad 0x70252140090a3b30,0x2409206172622032,0x3837335f385f744c,0x3c2f2f200a3b3039\n"
".quad 0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f,0x39333120656e696c\n"
".quad 0x6c2064616568202c,0x242064656c656261,0x3034325f385f744c,0x636f6c2e090a3636\n"
".quad 0x0936383109363109,0x6c2e6c756d090a30,0x2509203233752e6f,0x317225202c363272\n"
".quad 0x7663090a3b34202c,0x33752e3436752e74,0x3331647225092032,0x0a3b36327225202c\n"
".quad 0x617261702e646c09,0x2509203436752e6d,0x5f5b202c38316472,0x726170616475635f\n"
".quad 0x696232315a5f5f6d,0x6e72654b74636573,0x536a5f5366506c65,0x5f30536a505f535f\n"
".quad 0x5f675f666a6a6666,0x646461090a3b5d64,0x722509203436752e,0x647225202c393164\n"
".quad 0x31647225202c3831,0x672e646c090a3b33,0x33662e6c61626f6c,0x2c36316625092032\n"
".quad 0x2b39316472255b20,0x646461090a3b5d30,0x722509203436752e,0x647225202c303264\n"
".quad 0x31647225202c3331,0x68732e7473090a3b,0x3233662e64657261,0x30326472255b0920\n"
".quad 0x316625202c5d302b,0x636f6c2e090a3b36,0x0937383109363109,0x61702e646c090a30\n"
".quad 0x203436752e6d6172,0x202c313264722509,0x70616475635f5f5b,0x32315a5f5f6d7261\n"
".quad 0x654b746365736962,0x5f5366506c656e72,0x536a505f535f536a,0x5f666a6a66665f30\n"
".quad 0x61090a3b5d735f67,0x09203436752e6464,0x25202c3232647225,0x7225202c31326472\n"
".quad 0x646c090a3b333164,0x2e6c61626f6c672e,0x3166250920323366,0x326472255b202c37\n"
".quad 0x090a3b5d342d2b32,0x203436752e646461,0x202c333264722509,0x25202c3331647225\n"
".quad 0x7473090a3b346472,0x2e6465726168732e,0x72255b0920323366,0x202c5d302b333264\n"
".quad 0x4c240a3b37316625,0x393837335f385f74,0x6c3c2f2f200a3a30,0x726150203e706f6f\n"
".quad 0x6f6f6c20666f2074,0x6c2079646f622070,0x2c39333120656e69,0x616c206461656820\n"
".quad 0x4c242064656c6562,0x363034325f385f74,0x09636f6c2e090a36,0x3009303931093631\n"
".quad 0x79732e726162090a,0x090a3b300920636e,0x2e71652e70746573,0x3970250920323366\n"
".quad 0x25202c366625202c,0x6c6573090a3b3766,0x2509203233732e70,0x202c30202c373272\n"
".quad 0x0a3b397025202c31,0x2e74672e74657309,0x203233752e323375,0x25202c3832722509\n"
".quad 0x317225202c353272,0x732e67656e090a3b,0x3932722509203233,0x0a3b38327225202c\n"
".quad 0x3233622e646e6109,0x202c303372250920,0x7225202c37327225,0x766f6d090a3b3932\n"
".quad 0x722509203233752e,0x090a3b30202c3133,0x2e71652e70746573,0x3170250920323373\n"
".quad 0x2c30337225202c30,0x090a3b3133722520,0x7262203031702540,0x385f744c24092061\n"
".quad 0x0a3b38353638335f,0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066\n"
".quad 0x656e696c2079646f,0x6568202c39333120,0x6c6562616c206461,0x385f744c24206465\n"
".quad 0x090a36363034325f,0x203233752e766f6d,0x30202c3233722509,0x2e70746573090a3b\n"
".quad 0x09203233752e7165,0x7225202c31317025,0x32337225202c3131,0x3131702540090a3b\n"
".quad 0x4c24092061726220,0x313731355f385f74,0x6c3c2f2f200a3b34,0x726150203e706f6f\n"
".quad 0x6f6f6c20666f2074,0x6c2079646f622070,0x2c39333120656e69,0x616c206461656820\n"
".quad 0x4c242064656c6562,0x363034325f385f74,0x732e766f6d090a36,0x3333722509203233\n"
".quad 0x0a3b31317225202c,0x3233752e766f6d09,0x202c343372250920,0x2e6c756d090a3b30\n"
".quad 0x09203233752e6f6c,0x7225202c35337225,0x090a3b34202c3131,0x203233752e766f6d\n"
".quad 0x30202c3633722509,0x662e766f6d090a3b,0x3831662509203233,0x303866336630202c\n"
".quad 0x2020203b30303030,0x200a31202f2f0920,0x3e706f6f6c3c2f2f,0x666f207472615020\n"
".quad 0x6f6220706f6f6c20,0x20656e696c207964,0x616568202c393331,0x656c6562616c2064\n"
".quad 0x5f385f744c242064,0x6d090a3636303432,0x09203233732e766f,0x7225202c37337225\n"
".quad 0x5f744c240a3b3333,0x3a36323439335f38,0x6f6f6c3c2f2f200a,0x20706f6f4c203e70\n"
".quad 0x6e696c2079646f62,0x6e202c3039312065,0x6420676e69747365,0x2c31203a68747065\n"
".quad 0x74616d6974736520,0x6172657469206465,0x75203a736e6f6974,0x090a6e776f6e6b6e\n"
".quad 0x09363109636f6c2e,0x63090a3009383931,0x752e3436752e7476,0x3264722509203233\n"
".quad 0x3b34337225202c34,0x36752e646461090a,0x3532647225092034,0x2c3432647225202c\n"
".quad 0x090a3b3464722520,0x65726168732e646c,0x2509203233662e64,0x72255b202c393166\n"
".quad 0x0a3b5d302b353264,0x3436752e64646109,0x2c36326472250920,0x202c343264722520\n"
".quad 0x6c090a3b31647225,0x6465726168732e64,0x662509203233662e,0x6472255b202c3032\n"
".quad 0x090a3b5d302b3632,0x203233662e627573,0x25202c3132662509,0x356625202c303266\n"
".quad 0x662e6c756d090a3b,0x3232662509203233,0x202c39316625202c,0x64090a3b39316625\n"
".quad 0x33662e6e722e7669,0x2c33326625092032,0x25202c3232662520,0x7573090a3b383166\n"
".quad 0x2509203233662e62,0x326625202c383166,0x3b33326625202c31,0x3109636f6c2e090a\n"
".quad 0x0a30093939310936,0x3233662e766f6d09,0x202c343266250920,0x3030303030306630\n"
".quad 0x09202020203b3030,0x6573090a30202f2f,0x3233752e746c2e74,0x722509203233662e\n"
".quad 0x38316625202c3833,0x0a3b34326625202c,0x3233732e67656e09,0x202c393372250920\n"
".quad 0x61090a3b38337225,0x09203233752e6464,0x7225202c36337225,0x39337225202c3633\n"
".quad 0x752e646461090a3b,0x3433722509203233,0x202c34337225202c,0x70746573090a3b34\n"
".quad 0x203233752e656e2e,0x25202c3231702509,0x337225202c343372,0x31702540090a3b35\n"
".quad 0x2409206172622032,0x3439335f385f744c,0x3c2f2f200a3b3632,0x6150203e706f6f6c\n"
".quad 0x6f6c20666f207472,0x2079646f6220706f,0x39333120656e696c,0x6c2064616568202c\n"
".quad 0x242064656c656261,0x3034325f385f744c,0x2e617262090a3636,0x744c240920696e75\n"
".quad 0x32303438335f385f,0x5f385f744c240a3b,0x200a3a3431373135,0x3e706f6f6c3c2f2f\n"
".quad 0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964,0x616568202c393331\n"
".quad 0x656c6562616c2064,0x5f385f744c242064,0x6d090a3636303432,0x09203233752e766f\n"
".quad 0x3b30202c36337225,0x6e752e617262090a,0x385f744c24092069,0x0a3b32303438335f\n"
".quad 0x38335f385f744c24,0x2f2f200a3a383536,0x50203e706f6f6c3c,0x6c20666f20747261\n"
".quad 0x79646f6220706f6f,0x333120656e696c20,0x2064616568202c39,0x2064656c6562616c\n"
".quad 0x34325f385f744c24,0x766f6d090a363630,0x722509203233752e,0x240a3b30202c3633\n"
".quad 0x3438335f385f744c,0x3c2f2f200a3a3230,0x6150203e706f6f6c,0x6f6c20666f207472\n"
".quad 0x2079646f6220706f,0x39333120656e696c,0x6c2064616568202c,0x242064656c656261\n"
".quad 0x3034325f385f744c,0x636f6c2e090a3636,0x0933363109303309,0x732e766f6d090a30\n"
".quad 0x3034722509203233,0x0a3b36337225202c,0x303309636f6c2e09,0x090a300937373109\n"
".quad 0x636e79732e726162,0x646c090a3b300920,0x2e6465726168732e,0x3472250920323375\n"
".quad 0x75635f5f5b202c31,0x6c61636f6c5f6164,0x3537335f7261765f,0x6f6e5f30345f3531\n"
".quad 0x5f74736e6f635f6e,0x657268745f6d756e,0x697463615f736461,0x6573090a3b5d6576\n"
".quad 0x33752e656c2e7074,0x2c33317025092032,0x25202c3134722520,0x702540090a3b3172\n"
".quad 0x0920617262203331,0x30345f385f744c24,0x2f2f200a3b343931,0x50203e706f6f6c3c\n"
".quad 0x6c20666f20747261,0x79646f6220706f6f,0x333120656e696c20,0x2064616568202c39\n"
".quad 0x2064656c6562616c,0x34325f385f744c24,0x6c756d090a363630,0x203233752e6f6c2e\n"
".quad 0x25202c3234722509,0x090a3b34202c3172,0x2e3436752e747663,0x6472250920323375\n"
".quad 0x32347225202c3331,0x752e646461090a3b,0x3264722509203436,0x3331647225202c37\n"
".quad 0x0a3b33647225202c,0x3436752e64646109,0x2c38326472250920,0x202c333164722520\n"
".quad 0x61090a3b31647225,0x09203436752e6464,0x25202c3932647225,0x7225202c33316472\n"
".quad 0x646461090a3b3464,0x722509203436752e,0x647225202c303364,0x32647225202c3331\n"
".quad 0x752e646461090a3b,0x3364722509203436,0x3331647225202c31,0x0a3b35647225202c\n"
".quad 0x656e2e7074657309,0x2509203233662e75,0x366625202c343170,0x090a3b376625202c\n"
".quad 0x6220343170252140,0x5f744c2409206172,0x3b36303730345f38,0x6f6f6c3c2f2f200a\n"
".quad 0x2074726150203e70,0x20706f6f6c20666f,0x6e696c2079646f62,0x68202c3933312065\n"
".quad 0x6562616c20646165,0x5f744c242064656c,0x0a36363034325f38,0x303309636f6c2e09\n"
".quad 0x090a300934393109,0x2e656e2e70746573,0x3170250920323375,0x2c30347225202c35\n"
".quad 0x090a3b3331722520,0x203233662e736261,0x25202c3532662509,0x2e646c090a3b3566\n"
".quad 0x33662e6d61726170,0x2c36326625092032,0x616475635f5f5b20,0x315a5f5f6d726170\n"
".quad 0x4b74636573696232,0x5366506c656e7265,0x6a505f535f536a5f,0x666a6a66665f3053\n"
".quad 0x6e6f6c697370655f,0x706c6573090a3b5d,0x722509203233732e,0x30202c31202c3334\n"
".quad 0x0a3b35317025202c,0x2e656e2e74657309,0x203233752e323375,0x25202c3434722509\n"
".quad 0x317225202c303472,0x2e67656e090a3b32,0x3472250920323373,0x3b34347225202c35\n"
".quad 0x33622e646e61090a,0x2c36347225092032,0x25202c3334722520,0x6f6d090a3b353472\n"
".quad 0x2509203233752e76,0x0a3b30202c373472,0x71652e7074657309,0x702509203233732e\n"
".quad 0x36347225202c3631,0x0a3b37347225202c,0x6220363170254009,0x5f744c2409206172\n"
".quad 0x3b38313231345f38,0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f\n"
".quad 0x6e696c2079646f62,0x68202c3933312065,0x6562616c20646165,0x5f744c242064656c\n"
".quad 0x0a36363034325f38,0x363109636f6c2e09,0x090a300937323109,0x65726168732e7473\n"
".quad 0x5b09203233752e64,0x5d302b3033647225,0x0a3b33317225202c,0x363109636f6c2e09\n"
".quad 0x090a300938323109,0x65726168732e7473,0x5b09203233752e64,0x5d302b3133647225\n"
".quad 0x0a3b30347225202c,0x3233662e62757309,0x202c373266250920,0x376625202c356625\n"
".quad 0x662e736261090a3b,0x3832662509203233,0x0a3b37326625202c,0x3436662e74766309\n"
".quad 0x662509203233662e,0x38326625202c3164,0x662e736261090a3b,0x3932662509203233\n"
".quad 0x090a3b376625202c,0x203233662e78616d,0x25202c3033662509,0x326625202c353266\n"
".quad 0x2e6c756d090a3b39,0x3366250920323366,0x2c36326625202c31,0x090a3b3033662520\n"
".quad 0x2e3436662e747663,0x6466250920323366,0x3b31336625202c32,0x36662e766f6d090a\n"
".quad 0x2c33646625092034,0x3435363833643020,0x3264323339343834,0x202f2f093b323765\n"
".quad 0x6d090a37332d6535,0x09203436662e7861,0x6625202c34646625,0x33646625202c3264\n"
".quad 0x2e70746573090a3b,0x09203436662e656c,0x6625202c37317025,0x34646625202c3164\n"
".quad 0x3170252140090a3b,0x2409206172622037,0x3731345f385f744c,0x3c2f2f200a3b3033\n"
".quad 0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f,0x39333120656e696c\n"
".quad 0x6c2064616568202c,0x242064656c656261,0x3034325f385f744c,0x2e766f6d090a3636\n"
".quad 0x3366250920323366,0x3030306630202c32,0x20203b3030303030,0x0a30202f2f092020\n"
".quad 0x746c2e7074657309,0x702509203233662e,0x2c376625202c3831,0x090a3b3233662520\n"
".quad 0x646572702e766f6d,0x25202c3570250920,0x6f6d090a3b383170,0x0920646572702e76\n"
".quad 0x7025202c39317025,0x766f6d090a3b3032,0x662509203233662e,0x30306630202c3333\n"
".quad 0x203b303030303030,0x30202f2f09202020,0x6c2e70746573090a,0x2509203233662e74\n"
".quad 0x356625202c313270,0x0a3b33336625202c,0x2031327025214009,0x744c240920617262\n"
".quad 0x32343232345f385f,0x6f6c3c2f2f200a3b,0x74726150203e706f,0x706f6f6c20666f20\n"
".quad 0x696c2079646f6220,0x202c39333120656e,0x62616c2064616568,0x744c242064656c65\n"
".quad 0x36363034325f385f,0x3109636f6c2e090a,0x0a30093633310936,0x33732e706c657309\n"
".quad 0x2c38347225092032,0x25202c30202c3120,0x617262090a3b3570,0x4c240920696e752e\n"
".quad 0x383931345f385f74,0x385f744c240a3b36,0x0a3a32343232345f,0x706f6f6c3c2f2f20\n"
".quad 0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f,0x6568202c39333120\n"
".quad 0x6c6562616c206461,0x385f744c24206465,0x090a36363034325f,0x3233732e706c6573\n"
".quad 0x202c383472250920,0x7025202c31202c30,0x5f744c240a3b3831,0x3a36383931345f38\n"
".quad 0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f,0x6e696c2079646f62\n"
".quad 0x68202c3933312065,0x6562616c20646165,0x5f744c242064656c,0x0a36363034325f38\n"
".quad 0x363109636f6c2e09,0x090a300939333109,0x203233662e646461,0x25202c3433662509\n"
".quad 0x3b376625202c3566,0x33662e766f6d090a,0x2c35336625092032,0x3030306633663020\n"
".quad 0x202020203b303030,0x0a352e30202f2f09,0x2e6e722e616d6609,0x3366250920323366\n"
".quad 0x2c37326625202c36,0x25202c3533662520,0x766f6d090a3b3766,0x662509203233662e\n"
".quad 0x66336630202c3733,0x203b303030303030,0x30202f2f09202020,0x2e6c756d090a352e\n"
".quad 0x3366250920323366,0x2c34336625202c38,0x090a3b3733662520,0x203233732e67656e\n"
".quad 0x25202c3934722509,0x6c73090a3b383472,0x732e3233662e7463,0x3933662509203233\n"
".quad 0x202c38336625202c,0x7225202c36336625,0x2e7473090a3b3934,0x662e646572616873\n"
".quad 0x6472255b09203233,0x25202c5d302b3832,0x6c2e090a3b393366,0x343109363109636f\n"
".quad 0x2e7473090a300930,0x662e646572616873,0x6472255b09203233,0x25202c5d302b3932\n"
".quad 0x7262090a3b393366,0x240920696e752e61,0x3431345f385f744c,0x5f744c240a3b3437\n"
".quad 0x3a30333731345f38,0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f\n"
".quad 0x6e696c2079646f62,0x68202c3933312065,0x6562616c20646165,0x5f744c242064656c\n"
".quad 0x0a36363034325f38,0x363109636f6c2e09,0x090a300935343109,0x65726168732e7473\n"
".quad 0x5b09203233662e64,0x5d302b3832647225,0x090a3b376625202c,0x09363109636f6c2e\n"
".quad 0x73090a3009363431,0x6465726168732e74,0x255b09203233662e,0x2c5d302b39326472\n"
".quad 0x4c240a3b35662520,0x373431345f385f74,0x6c3c2f2f200a3a34,0x726150203e706f6f\n"
".quad 0x6f6f6c20666f2074,0x6c2079646f622070,0x2c39333120656e69,0x616c206461656820\n"
".quad 0x4c242064656c6562,0x363034325f385f74,0x09636f6c2e090a36,0x3009343233093631\n"
".quad 0x33752e766f6d090a,0x2c30357225092032,0x2e7473090a3b3120,0x752e646572616873\n"
".quad 0x6472255b09203233,0x25202c5d342b3732,0x6c2e090a3b303572,0x323309363109636f\n"
".quad 0x766f6d090a300935,0x722509203233752e,0x090a3b31202c3135,0x65726168732e7473\n"
".quad 0x5b09203233752e64,0x6c5f616475635f5f,0x7261765f6c61636f,0x345f31313537335f\n"
".quad 0x6f635f6e6f6e5f30,0x706d6f635f74736e,0x6f6365735f746361,0x6b6e7568635f646e\n"
".quad 0x3b31357225202c5d,0x33752e766f6d090a,0x2c32357225092032,0x617262090a3b3120\n"
".quad 0x4c240920696e752e,0x333939335f385f74,0x385f744c240a3b38,0x0a3a38313231345f\n"
".quad 0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f\n"
".quad 0x6568202c39333120,0x6c6562616c206461,0x385f744c24206465,0x090a36363034325f\n"
".quad 0x09363109636f6c2e,0x6d090a3009333333,0x09203233752e766f,0x3b30202c33357225\n"
".quad 0x6168732e7473090a,0x203233752e646572,0x2b37326472255b09,0x33357225202c5d34\n"
".quad 0x3170252140090a3b,0x2409206172622035,0x3732345f385f744c,0x3c2f2f200a3b3435\n"
".quad 0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f,0x39333120656e696c\n"
".quad 0x6c2064616568202c,0x242064656c656261,0x3034325f385f744c,0x636f6c2e090a3636\n"
".quad 0x0937323109363109,0x68732e7473090a30,0x3233752e64657261,0x30336472255b0920\n"
".quad 0x317225202c5d302b,0x636f6c2e090a3b33,0x0938323109363109,0x68732e7473090a30\n"
".quad 0x3233752e64657261,0x31336472255b0920,0x347225202c5d302b,0x2e627573090a3b30\n"
".quad 0x3266250920323366,0x202c356625202c37,0x6261090a3b376625,0x2509203233662e73\n"
".quad 0x326625202c303466,0x2e747663090a3b37,0x203233662e343666,0x25202c3564662509\n"
".quad 0x6261090a3b303466,0x2509203233662e73,0x376625202c313466,0x662e78616d090a3b\n"
".quad 0x3234662509203233,0x202c35326625202c,0x6d090a3b31346625,0x09203233662e6c75\n"
".quad 0x6625202c33346625,0x32346625202c3632,0x662e747663090a3b,0x09203233662e3436\n"
".quad 0x6625202c36646625,0x766f6d090a3b3334,0x662509203436662e,0x38336430202c3764\n"
".quad 0x3339343834343536,0x093b323765326432,0x37332d6535202f2f,0x36662e78616d090a\n"
".quad 0x2c38646625092034,0x25202c3664662520,0x6573090a3b376466,0x36662e656c2e7074\n"
".quad 0x2c32327025092034,0x25202c3564662520,0x2140090a3b386466,0x6172622032327025\n"
".quad 0x5f385f744c240920,0x200a3b3636323334,0x3e706f6f6c3c2f2f,0x666f207472615020\n"
".quad 0x6f6220706f6f6c20,0x20656e696c207964,0x616568202c393331,0x656c6562616c2064\n"
".quad 0x5f385f744c242064,0x6d090a3636303432,0x09203233662e766f,0x6630202c34346625\n"
".quad 0x3030303030303030,0x2f2f09202020203b,0x70746573090a3020,0x203233662e746c2e\n"
".quad 0x25202c3831702509,0x34346625202c3766,0x702e766f6d090a3b,0x3570250920646572\n"
".quad 0x0a3b38317025202c,0x6572702e766f6d09,0x2c33327025092064,0x090a3b3032702520\n"
".quad 0x203233662e766f6d,0x30202c3534662509,0x3030303030303066,0x2f09202020203b30\n"
".quad 0x746573090a30202f,0x3233662e746c2e70,0x202c343270250920,0x346625202c356625\n"
".quad 0x70252140090a3b35,0x0920617262203432,0x33345f385f744c24,0x2f2f200a3b383737\n"
".quad 0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f,0x333120656e696c20\n"
".quad 0x2064616568202c39,0x2064656c6562616c,0x34325f385f744c24,0x6f6c2e090a363630\n"
".quad 0x3633310936310963,0x706c6573090a3009,0x722509203233732e,0x30202c31202c3435\n"
".quad 0x090a3b357025202c,0x20696e752e617262,0x345f385f744c2409,0x4c240a3b32323533\n"
".quad 0x373733345f385f74,0x6c3c2f2f200a3a38,0x726150203e706f6f,0x6f6f6c20666f2074\n"
".quad 0x6c2079646f622070,0x2c39333120656e69,0x616c206461656820,0x4c242064656c6562\n"
".quad 0x363034325f385f74,0x2e706c6573090a36,0x3572250920323373,0x2c31202c30202c34\n"
".quad 0x240a3b3831702520,0x3533345f385f744c,0x3c2f2f200a3a3232,0x6150203e706f6f6c\n"
".quad 0x6f6c20666f207472,0x2079646f6220706f,0x39333120656e696c,0x6c2064616568202c\n"
".quad 0x242064656c656261,0x3034325f385f744c,0x636f6c2e090a3636,0x0939333109363109\n"
".quad 0x662e646461090a30,0x3634662509203233,0x25202c356625202c,0x766f6d090a3b3766\n"
".quad 0x662509203233662e,0x66336630202c3734,0x203b303030303030,0x30202f2f09202020\n"
".quad 0x2e616d66090a352e,0x09203233662e6e72,0x6625202c38346625,0x37346625202c3732\n"
".quad 0x090a3b376625202c,0x203233662e766f6d,0x30202c3934662509,0x3030303030663366\n"
".quad 0x2f09202020203b30,0x6d090a352e30202f,0x09203233662e6c75,0x6625202c30356625\n"
".quad 0x39346625202c3634,0x732e67656e090a3b,0x3535722509203233,0x0a3b34357225202c\n"
".quad 0x33662e74636c7309,0x2509203233732e32,0x356625202c313566,0x2c38346625202c30\n"
".quad 0x090a3b3535722520,0x65726168732e7473,0x5b09203233662e64,0x5d302b3832647225\n"
".quad 0x0a3b31356625202c,0x363109636f6c2e09,0x090a300930343109,0x65726168732e7473\n"
".quad 0x5b09203233662e64,0x5d302b3932647225,0x0a3b31356625202c,0x696e752e61726209\n"
".quad 0x5f385f744c240920,0x240a3b3433303434,0x3233345f385f744c,0x3c2f2f200a3a3636\n"
".quad 0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f,0x39333120656e696c\n"
".quad 0x6c2064616568202c,0x242064656c656261,0x3034325f385f744c,0x636f6c2e090a3636\n"
".quad 0x0935343109363109,0x68732e7473090a30,0x3233662e64657261,0x38326472255b0920\n"
".quad 0x376625202c5d302b,0x09636f6c2e090a3b,0x3009363431093631,0x6168732e7473090a\n"
".quad 0x203233662e646572,0x2b39326472255b09,0x3b356625202c5d30,0x6e752e617262090a\n"
".quad 0x385f744c24092069,0x0a3b34333034345f,0x32345f385f744c24,0x2f2f200a3a343537\n"
".quad 0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f,0x333120656e696c20\n"
".quad 0x2064616568202c39,0x2064656c6562616c,0x34325f385f744c24,0x6f6c2e090a363630\n"
".quad 0x3732310936310963,0x732e7473090a3009,0x33752e6465726168,0x336472255b092032\n"
".quad 0x7225202c5d302b30,0x6f6c2e090a3b3034,0x3832310936310963,0x732e7473090a3009\n"
".quad 0x33752e6465726168,0x336472255b092032,0x7225202c5d302b31,0x627573090a3b3231\n"
".quad 0x662509203233662e,0x2c366625202c3235,0x61090a3b35662520,0x09203233662e7362\n"
".quad 0x6625202c33356625,0x747663090a3b3235,0x3233662e3436662e,0x202c396466250920\n"
".quad 0x61090a3b33356625,0x09203233662e7362,0x6625202c34356625,0x2e78616d090a3b36\n"
".quad 0x3566250920323366,0x2c35326625202c35,0x090a3b3435662520,0x203233662e6c756d\n"
".quad 0x25202c3635662509,0x356625202c363266,0x2e747663090a3b35,0x203233662e343666\n"
".quad 0x202c303164662509,0x6d090a3b36356625,0x09203436662e766f,0x30202c3131646625\n"
".quad 0x3834343536383364,0x3765326432333934,0x6535202f2f093b32,0x78616d090a37332d\n"
".quad 0x662509203436662e,0x646625202c323164,0x31646625202c3031,0x70746573090a3b31\n"
".quad 0x203436662e656c2e,0x25202c3532702509,0x646625202c396466,0x252140090a3b3231\n"
".quad 0x2061726220353270,0x345f385f744c2409,0x2f200a3b30393234,0x203e706f6f6c3c2f\n"
".quad 0x20666f2074726150,0x646f6220706f6f6c,0x3120656e696c2079,0x64616568202c3933\n"
".quad 0x64656c6562616c20,0x325f385f744c2420,0x6f6d090a36363034,0x2509203233662e76\n"
".quad 0x306630202c373566,0x3b30303030303030,0x202f2f0920202020,0x2e70746573090a30\n"
".quad 0x09203233662e746c,0x6625202c36327025,0x3b37356625202c35,0x72702e766f6d090a\n"
".quad 0x3732702509206465,0x0a3b36327025202c,0x6572702e766f6d09,0x2c38327025092064\n"
".quad 0x090a3b3932702520,0x203233662e766f6d,0x30202c3835662509,0x3030303030303066\n"
".quad 0x2f09202020203b30,0x746573090a30202f,0x3233662e746c2e70,0x202c303370250920\n"
".quad 0x356625202c366625,0x70252140090a3b38,0x0920617262203033,0x34345f385f744c24\n"
".quad 0x2f2f200a3b323038,0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f\n"
".quad 0x333120656e696c20,0x2064616568202c39,0x2064656c6562616c,0x34325f385f744c24\n"
".quad 0x6f6c2e090a363630,0x3633310936310963,0x706c6573090a3009,0x722509203233732e\n"
".quad 0x30202c31202c3635,0x0a3b37327025202c,0x696e752e61726209,0x5f385f744c240920\n"
".quad 0x240a3b3634353434,0x3834345f385f744c,0x3c2f2f200a3a3230,0x6150203e706f6f6c\n"
".quad 0x6f6c20666f207472,0x2079646f6220706f,0x39333120656e696c,0x6c2064616568202c\n"
".quad 0x242064656c656261,0x3034325f385f744c,0x706c6573090a3636,0x722509203233732e\n"
".quad 0x31202c30202c3635,0x0a3b36327025202c,0x34345f385f744c24,0x2f2f200a3a363435\n"
".quad 0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f,0x333120656e696c20\n"
".quad 0x2064616568202c39,0x2064656c6562616c,0x34325f385f744c24,0x6f6c2e090a363630\n"
".quad 0x3933310936310963,0x2e646461090a3009,0x3566250920323366,0x202c356625202c39\n"
".quad 0x6f6d090a3b366625,0x2509203233662e76,0x336630202c303666,0x3b30303030303066\n"
".quad 0x202f2f0920202020,0x616d66090a352e30,0x203233662e6e722e,0x25202c3136662509\n"
".quad 0x366625202c323566,0x0a3b356625202c30,0x3233662e766f6d09,0x202c323666250920\n"
".quad 0x3030303066336630,0x09202020203b3030,0x090a352e30202f2f,0x203233662e6c756d\n"
".quad 0x25202c3336662509,0x366625202c393566,0x2e67656e090a3b32,0x3572250920323373\n"
".quad 0x3b36357225202c37,0x662e74636c73090a,0x09203233732e3233,0x6625202c34366625\n"
".quad 0x31366625202c3336,0x0a3b37357225202c,0x726168732e747309,0x09203233662e6465\n"
".quad 0x302b38326472255b,0x3b34366625202c5d,0x3109636f6c2e090a,0x0a30093034310936\n"
".quad 0x726168732e747309,0x09203233662e6465,0x302b39326472255b,0x3b34366625202c5d\n"
".quad 0x6e752e617262090a,0x385f744c24092069,0x0a3b34333034345f,0x34345f385f744c24\n"
".quad 0x2f2f200a3a303932,0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f\n"
".quad 0x333120656e696c20,0x2064616568202c39,0x2064656c6562616c,0x34325f385f744c24\n"
".quad 0x6f6c2e090a363630,0x3534310936310963,0x732e7473090a3009,0x33662e6465726168\n"
".quad 0x326472255b092032,0x6625202c5d302b38,0x636f6c2e090a3b35,0x0936343109363109\n"
".quad 0x68732e7473090a30,0x3233662e64657261,0x39326472255b0920,0x366625202c5d302b\n"
".quad 0x5f385f744c240a3b,0x240a3a3433303434,0x3432345f385f744c,0x3c2f2f200a3a3839\n"
".quad 0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f,0x39333120656e696c\n"
".quad 0x6c2064616568202c,0x242064656c656261,0x3034325f385f744c,0x636f6c2e090a3636\n"
".quad 0x0931343309363109,0x752e766f6d090a30,0x3235722509203233,0x7262090a3b30202c\n"
".quad 0x240920696e752e61,0x3939335f385f744c,0x5f744c240a3b3833,0x3a36303730345f38\n"
".quad 0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f,0x6e696c2079646f62\n"
".quad 0x68202c3933312065,0x6562616c20646165,0x5f744c242064656c,0x0a36363034325f38\n"
".quad 0x303309636f6c2e09,0x090a300934303209,0x203233752e627573,0x25202c3835722509\n"
".quad 0x317225202c323172,0x2e766f6d090a3b33,0x3572250920323375,0x73090a3b31202c39\n"
".quad 0x752e656e2e707465,0x3133702509203233,0x202c38357225202c,0x40090a3b39357225\n"
".quad 0x6172622031337025,0x5f385f744c240920,0x200a3b3431333534,0x3e706f6f6c3c2f2f\n"
".quad 0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964,0x616568202c393331\n"
".quad 0x656c6562616c2064,0x5f385f744c242064,0x2e090a3636303432,0x3509363109636f6c\n"
".quad 0x7473090a30093633,0x2e6465726168732e,0x72255b0920323366,0x202c5d302b383264\n"
".quad 0x6c2e090a3b376625,0x333509363109636f,0x2e7473090a300937,0x662e646572616873\n"
".quad 0x6472255b09203233,0x25202c5d302b3932,0x6f6c2e090a3b3666,0x3833350936310963\n"
".quad 0x732e7473090a3009,0x33752e6465726168,0x336472255b092032,0x7225202c5d302b30\n"
".quad 0x6f6c2e090a3b3331,0x3933350936310963,0x732e7473090a3009,0x33752e6465726168\n"
".quad 0x336472255b092032,0x7225202c5d302b31,0x6f6c2e090a3b3231,0x3334350936310963\n"
".quad 0x2e766f6d090a3009,0x3672250920323375,0x73090a3b30202c30,0x6465726168732e74\n"
".quad 0x255b09203233752e,0x2c5d342b37326472,0x090a3b3036722520,0x203233752e766f6d\n"
".quad 0x30202c3235722509,0x752e617262090a3b,0x5f744c240920696e,0x3b38333939335f38\n"
".quad 0x345f385f744c240a,0x2f200a3a34313335,0x203e706f6f6c3c2f,0x20666f2074726150\n"
".quad 0x646f6220706f6f6c,0x3120656e696c2079,0x64616568202c3933,0x64656c6562616c20\n"
".quad 0x325f385f744c2420,0x6c2e090a36363034,0x343509363109636f,0x726873090a300938\n"
".quad 0x722509203233752e,0x38357225202c3136,0x6461090a3b31202c,0x2509203233752e64\n"
".quad 0x367225202c323672,0x3b33317225202c31,0x33732e766f6d090a,0x2c30347225092032\n"
".quad 0x090a3b3236722520,0x09363109636f6c2e,0x73090a3009313535,0x6465726168732e74\n"
".quad 0x255b09203233662e,0x2c5d302b38326472,0x2e090a3b37662520,0x3509363109636f6c\n"
".quad 0x7473090a30093235,0x2e6465726168732e,0x72255b0920323366,0x202c5d302b393264\n"
".quad 0x6c2e090a3b366625,0x353509363109636f,0x2e7473090a300933,0x752e646572616873\n"
".quad 0x6472255b09203233,0x25202c5d302b3033,0x6c2e090a3b333172,0x353509363109636f\n"
".quad 0x2e7473090a300934,0x752e646572616873,0x6472255b09203233,0x25202c5d302b3133\n"
".quad 0x6c2e090a3b323672,0x353509363109636f,0x766f6d090a300936,0x662509203233662e\n"
".quad 0x0a3b376625202c35,0x363109636f6c2e09,0x090a300930363509,0x203233752e766f6d\n"
".quad 0x31202c3336722509,0x68732e7473090a3b,0x3233752e64657261,0x37326472255b0920\n"
".quad 0x367225202c5d342b,0x636f6c2e090a3b33,0x0931363509363109,0x752e766f6d090a30\n"
".quad 0x3436722509203233,0x7473090a3b31202c,0x2e6465726168732e,0x5f5f5b0920323375\n"
".quad 0x636f6c5f61647563,0x335f7261765f6c61,0x5f30345f31313537,0x736e6f635f6e6f6e\n"
".quad 0x6361706d6f635f74,0x646e6f6365735f74,0x2c5d6b6e7568635f,0x090a3b3436722520\n"
".quad 0x203233752e766f6d,0x31202c3235722509,0x752e617262090a3b,0x5f744c240920696e\n"
".quad 0x3b38333939335f38,0x345f385f744c240a,0x2f200a3a34393130,0x203e706f6f6c3c2f\n"
".quad 0x20666f2074726150,0x646f6220706f6f6c,0x3120656e696c2079,0x64616568202c3933\n"
".quad 0x64656c6562616c20,0x325f385f744c2420,0x6c2e090a36363034,0x303209303309636f\n"
".quad 0x766f6d090a300934,0x722509203233752e,0x240a3b30202c3235,0x3939335f385f744c\n"
".quad 0x3c2f2f200a3a3833,0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f\n"
".quad 0x39333120656e696c,0x6c2064616568202c,0x242064656c656261,0x3034325f385f744c\n"
".quad 0x636f6c2e090a3636,0x0934313209303309,0x732e726162090a30,0x0a3b300920636e79\n"
".quad 0x726168732e646c09,0x09203233752e6465,0x5f5b202c35367225,0x6f6c5f616475635f\n"
".quad 0x5f7261765f6c6163,0x30345f3131353733,0x6e6f635f6e6f6e5f,0x61706d6f635f7473\n"
".quad 0x6e6f6365735f7463,0x5d6b6e7568635f64,0x752e766f6d090a3b,0x3636722509203233\n"
".quad 0x6573090a3b30202c,0x33752e71652e7074,0x2c32337025092032,0x25202c3536722520\n"
".quad 0x2540090a3b363672,0x2061726220323370,0x345f385f744c2409,0x2f200a3b34353139\n"
".quad 0x203e706f6f6c3c2f,0x20666f2074726150,0x646f6220706f6f6c,0x3120656e696c2079\n"
".quad 0x64616568202c3933,0x64656c6562616c20,0x325f385f744c2420,0x6c2e090a36363034\n"
".quad 0x323209303309636f,0x2e646c090a300931,0x752e646572616873,0x3736722509203233\n"
".quad 0x6475635f5f5b202c,0x5f6c61636f6c5f61,0x313537335f726176,0x6e6f6e5f30345f38\n"
".quad 0x6e5f74736e6f635f,0x61657268745f6d75,0x61706d6f635f7364,0x0a3b5d6e6f697463\n"
".quad 0x363109636f6c2e09,0x090a300937363309,0x203233752e726873,0x25202c3836722509\n"
".quad 0x0a3b31202c373672,0x3233732e766f6d09,0x202c393672250920,0x6d090a3b38367225\n"
".quad 0x09203233752e766f,0x3b30202c30377225,0x6c2e70746573090a,0x2509203233732e65\n"
".quad 0x367225202c333370,0x3b30377225202c38,0x203333702540090a,0x744c240920617262\n"
".quad 0x30373931355f385f,0x6f6c3c2f2f200a3b,0x74726150203e706f,0x706f6f6c20666f20\n"
".quad 0x696c2079646f6220,0x202c39333120656e,0x62616c2064616568,0x744c242064656c65\n"
".quad 0x36363034325f385f,0x33752e766f6d090a,0x2c31377225092032,0x5f744c240a3b3120\n"
".quad 0x3a34393536345f38,0x6f6f6c3c2f2f200a,0x20706f6f4c203e70,0x6e696c2079646f62\n"
".quad 0x2e090a3936332065,0x3309363109636f6c,0x6162090a30093936,0x0920636e79732e72\n"
".quad 0x70746573090a3b30,0x203233752e656c2e,0x25202c3433702509,0x317225202c393672\n"
".quad 0x3433702540090a3b,0x4c24092061726220,0x353836345f385f74,0x6c3c2f2f200a3b30\n"
".quad 0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070,0x2c39363320656e69\n"
".quad 0x616c206461656820,0x4c242064656c6562,0x393536345f385f74,0x09636f6c2e090a34\n"
".quad 0x3009393733093631,0x6f6c2e6c756d090a,0x722509203233752e,0x2c317225202c3237\n"
".quad 0x646461090a3b3220,0x722509203233752e,0x32377225202c3337,0x6461090a3b31202c\n"
".quad 0x2509203233752e64,0x377225202c343772,0x6d090a3b32202c32,0x33752e6f6c2e6c75\n"
".quad 0x2c35377225092032,0x25202c3337722520,0x756d090a3b313772,0x3233752e6f6c2e6c\n"
".quad 0x202c363772250920,0x7225202c34377225,0x766f6d090a3b3137,0x722509203233752e\n"
".quad 0x090a3b30202c3737,0x2e656e2e70746573,0x3370250920323375,0x2c36377225202c35\n"
".quad 0x090a3b3737722520,0x203233752e627573,0x25202c3837722509,0x0a3b31202c363772\n"
".quad 0x3233752e766f6d09,0x202c393772250920,0x706c6573090a3b30,0x722509203233752e\n"
".quad 0x38377225202c3038,0x202c39377225202c,0x6d090a3b35337025,0x33752e6f6c2e6c75\n"
".quad 0x2c31387225092032,0x34202c3038722520,0x752e747663090a3b,0x09203233752e3436\n"
".quad 0x25202c3233647225,0x6461090a3b313872,0x2509203436752e64,0x7225202c33336472\n"
".quad 0x647225202c323364,0x732e646c090a3b33,0x33752e6465726168,0x2c32387225092032\n"
".quad 0x2b33336472255b20,0x627573090a3b5d34,0x722509203233752e,0x35377225202c3338\n"
".quad 0x6f6d090a3b31202c,0x2509203233752e76,0x0a3b30202c343872,0x3233752e766f6d09\n"
".quad 0x202c353872250920,0x70746573090a3b30,0x203233752e656e2e,0x25202c3633702509\n"
".quad 0x387225202c353772,0x706c6573090a3b35,0x722509203233752e,0x33387225202c3638\n"
".quad 0x202c34387225202c,0x6d090a3b36337025,0x33752e6f6c2e6c75,0x2c37387225092032\n"
".quad 0x34202c3638722520,0x752e747663090a3b,0x09203233752e3436,0x25202c3433647225\n"
".quad 0x6461090a3b373872,0x2509203436752e64,0x7225202c35336472,0x647225202c343364\n"
".quad 0x732e646c090a3b33,0x33752e6465726168,0x2c38387225092032,0x2b35336472255b20\n"
".quad 0x646461090a3b5d34,0x722509203233752e,0x32387225202c3938,0x0a3b38387225202c\n"
".quad 0x726168732e747309,0x09203233752e6465,0x342b33336472255b,0x3b39387225202c5d\n"
".quad 0x345f385f744c240a,0x2f200a3a30353836,0x203e706f6f6c3c2f,0x20666f2074726150\n"
".quad 0x646f6220706f6f6c,0x3320656e696c2079,0x64616568202c3936,0x64656c6562616c20\n"
".quad 0x345f385f744c2420,0x6c2e090a34393536,0x383309363109636f,0x6c6873090a300933\n"
".quad 0x722509203233622e,0x31377225202c3137,0x6c2e090a3b31202c,0x363309363109636f\n"
".quad 0x726873090a300937,0x722509203233732e,0x39367225202c3936,0x6f6d090a3b31202c\n"
".quad 0x2509203233752e76,0x0a3b30202c303972,0x74672e7074657309,0x702509203233732e\n"
".quad 0x39367225202c3733,0x0a3b30397225202c,0x6220373370254009,0x5f744c2409206172\n"
".quad 0x3b34393536345f38,0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f\n"
".quad 0x6e696c2079646f62,0x68202c3933312065,0x6562616c20646165,0x5f744c242064656c\n"
".quad 0x0a36363034325f38,0x696e752e61726209,0x5f385f744c240920,0x240a3b3238303634\n"
".quad 0x3931355f385f744c,0x3c2f2f200a3a3037,0x6150203e706f6f6c,0x6f6c20666f207472\n"
".quad 0x2079646f6220706f,0x39333120656e696c,0x6c2064616568202c,0x242064656c656261\n"
".quad 0x3034325f385f744c,0x2e766f6d090a3636,0x3772250920323375,0x4c240a3b31202c31\n"
".quad 0x383036345f385f74,0x6c3c2f2f200a3a32,0x726150203e706f6f,0x6f6f6c20666f2074\n"
".quad 0x6c2079646f622070,0x2c39333120656e69,0x616c206461656820,0x4c242064656c6562\n"
".quad 0x363034325f385f74,0x752e766f6d090a36,0x3139722509203233,0x6573090a3b32202c\n"
".quad 0x33752e656c2e7074,0x2c38337025092032,0x25202c3736722520,0x2540090a3b313972\n"
".quad 0x2061726220383370,0x345f385f744c2409,0x2f200a3b38313637,0x203e706f6f6c3c2f\n"
".quad 0x20666f2074726150,0x646f6220706f6f6c,0x3120656e696c2079,0x64616568202c3933\n"
".quad 0x64656c6562616c20,0x325f385f744c2420,0x6f6d090a36363034,0x2509203233732e76\n"
".quad 0x0a3b32202c323972,0x38345f385f744c24,0x2f2f200a3a303331,0x4c203e706f6f6c3c\n"
".quad 0x79646f6220706f6f,0x363320656e696c20,0x697473656e202c37,0x687470656420676e\n"
".quad 0x747365202c31203a,0x6920646574616d69,0x6e6f697461726574,0x6f6e6b6e75203a73\n"
".quad 0x636f6c2e090a6e77,0x0939383309363109,0x752e726873090a30,0x3137722509203233\n"
".quad 0x202c31377225202c,0x636f6c2e090a3b31,0x0930393309363109,0x732e726162090a30\n"
".quad 0x0a3b300920636e79,0x3233752e62757309,0x202c333972250920,0x3b31202c32397225\n"
".quad 0x672e70746573090a,0x2509203233752e65,0x317225202c393370,0x0a3b33397225202c\n"
".quad 0x6220393370254009,0x5f744c2409206172,0x3b36383338345f38,0x6f6f6c3c2f2f200a\n"
".quad 0x2074726150203e70,0x20706f6f6c20666f,0x6e696c2079646f62,0x68202c3736332065\n"
".quad 0x6562616c20646165,0x5f744c242064656c,0x0a30333138345f38,0x363109636f6c2e09\n"
".quad 0x090a300937393309,0x203233752e726873,0x25202c3439722509,0x0a3b31202c313772\n"
".quad 0x3233752e64646109,0x202c353972250920,0x0a3b31202c317225,0x2e6f6c2e6c756d09\n"
".quad 0x3972250920323375,0x2c35397225202c36,0x090a3b3137722520,0x203233752e646461\n"
".quad 0x25202c3739722509,0x397225202c343972,0x2e6c756d090a3b36,0x09203233752e6f6c\n"
".quad 0x7225202c38397225,0x090a3b34202c3739,0x2e3436752e747663,0x6472250920323375\n"
".quad 0x38397225202c3633,0x752e646461090a3b,0x3364722509203436,0x3633647225202c37\n"
".quad 0x0a3b33647225202c,0x726168732e646c09,0x09203233752e6465,0x255b202c39397225\n"
".quad 0x3b5d302b37336472,0x6f6c2e6c756d090a,0x722509203233752e,0x397225202c303031\n"
".quad 0x63090a3b34202c36,0x752e3436752e7476,0x3364722509203233,0x3030317225202c38\n"
".quad 0x752e646461090a3b,0x3364722509203436,0x3833647225202c39,0x0a3b33647225202c\n"
".quad 0x726168732e646c09,0x09203233752e6465,0x5b202c3130317225,0x5d302b3933647225\n"
".quad 0x752e646461090a3b,0x3031722509203233,0x2c39397225202c32,0x0a3b313031722520\n"
".quad 0x726168732e747309,0x09203233752e6465,0x302b37336472255b,0x3230317225202c5d\n"
".quad 0x5f385f744c240a3b,0x200a3a3638333834,0x3e706f6f6c3c2f2f,0x666f207472615020\n"
".quad 0x6f6220706f6f6c20,0x20656e696c207964,0x616568202c373633,0x656c6562616c2064\n"
".quad 0x5f385f744c242064,0x2e090a3033313834,0x3309363109636f6c,0x6873090a30093738\n"
".quad 0x2509203233622e6c,0x397225202c323972,0x73090a3b31202c32,0x752e746c2e707465\n"
".quad 0x3034702509203233,0x202c32397225202c,0x40090a3b37367225,0x6172622030347025\n"
".quad 0x5f385f744c240920,0x240a3b3033313834,0x3637345f385f744c,0x3c2f2f200a3a3831\n"
".quad 0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f,0x39333120656e696c\n"
".quad 0x6c2064616568202c,0x242064656c656261,0x3034325f385f744c,0x636f6c2e090a3636\n"
".quad 0x0932303409363109,0x732e726162090a30,0x0a3b300920636e79,0x303309636f6c2e09\n"
".quad 0x090a300933323209,0x65726168732e646c,0x2509203233752e64,0x5f5b202c33303172\n"
".quad 0x6f6c5f616475635f,0x5f7261765f6c6163,0x30345f3531353733,0x6e6f635f6e6f6e5f\n"
".quad 0x745f6d756e5f7473,0x615f736461657268,0x0a3b5d6576697463,0x3233752e766f6d09\n"
".quad 0x2c34303172250920,0x746573090a3b3120,0x2e3233752e71652e,0x3172250920323375\n"
".quad 0x32357225202c3530,0x3b3430317225202c,0x33732e67656e090a,0x3630317225092032\n"
".quad 0x3b3530317225202c,0x74672e746573090a,0x3233752e3233752e,0x2c37303172250920\n"
".quad 0x202c333031722520,0x656e090a3b317225,0x2509203233732e67,0x7225202c38303172\n"
".quad 0x6e61090a3b373031,0x2509203233622e64,0x7225202c39303172,0x317225202c363031\n"
".quad 0x766f6d090a3b3830,0x722509203233752e,0x0a3b30202c303131,0x71652e7074657309\n"
".quad 0x702509203233732e,0x30317225202c3134,0x3031317225202c39,0x3134702540090a3b\n"
".quad 0x4c24092061726220,0x353139345f385f74,0x6c3c2f2f200a3b34,0x726150203e706f6f\n"
".quad 0x6f6f6c20666f2074,0x6c2079646f622070,0x2c39333120656e69,0x616c206461656820\n"
".quad 0x4c242064656c6562,0x363034325f385f74,0x09636f6c2e090a36,0x3009323434093631\n"
".quad 0x6f6c2e6c756d090a,0x722509203233752e,0x317225202c313131,0x7663090a3b34202c\n"
".quad 0x33752e3436752e74,0x3034647225092032,0x3b3131317225202c,0x36752e646461090a\n"
".quad 0x3732647225092034,0x2c3034647225202c,0x090a3b3364722520,0x65726168732e646c\n"
".quad 0x2509203233752e64,0x255b202c32313172,0x3b5d302b37326472,0x33752e646461090a\n"
".quad 0x3331317225092032,0x2c3231317225202c,0x0a3b333031722520,0x2e6f6c2e6c756d09\n"
".quad 0x3172250920323375,0x31317225202c3431,0x63090a3b34202c33,0x752e3436752e7476\n"
".quad 0x3464722509203233,0x3431317225202c31,0x752e646461090a3b,0x3464722509203436\n"
".quad 0x3134647225202c32,0x0a3b31647225202c,0x726168732e747309,0x09203233662e6465\n"
".quad 0x302b32346472255b,0x0a3b356625202c5d,0x363109636f6c2e09,0x090a300933343409\n"
".quad 0x203436752e646461,0x202c333464722509,0x25202c3134647225,0x7473090a3b346472\n"
".quad 0x2e6465726168732e,0x72255b0920323366,0x202c5d302b333464,0x6c2e090a3b366625\n"
".quad 0x343409363109636f,0x646461090a300934,0x722509203436752e,0x647225202c343464\n"
".quad 0x32647225202c3134,0x68732e7473090a3b,0x3233752e64657261,0x34346472255b0920\n"
".quad 0x347225202c5d302b,0x636f6c2e090a3b30,0x0935343409363109,0x752e646461090a30\n"
".quad 0x3464722509203436,0x3134647225202c35,0x0a3b35647225202c,0x726168732e747309\n"
".quad 0x09203233752e6465,0x302b35346472255b,0x3b32317225202c5d,0x345f385f744c240a\n"
".quad 0x4c240a3a34353139,0x373535345f385f74,0x6c3c2f2f200a3a30,0x726150203e706f6f\n"
".quad 0x6f6f6c20666f2074,0x6c2079646f622070,0x2c39333120656e69,0x616c206461656820\n"
".quad 0x4c242064656c6562,0x363034325f385f74,0x09636f6c2e090a36,0x3009393232093033\n"
".quad 0x79732e726162090a,0x090a3b300920636e,0x7262203170252140,0x385f744c24092061\n"
".quad 0x0a3b36363639345f,0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066\n"
".quad 0x656e696c2079646f,0x6568202c39333120,0x6c6562616c206461,0x385f744c24206465\n"
".quad 0x090a36363034325f,0x09303309636f6c2e,0x6c090a3009343332,0x6465726168732e64\n"
".quad 0x722509203233752e,0x5f5f5b202c353131,0x636f6c5f61647563,0x335f7261765f6c61\n"
".quad 0x5f30345f35313537,0x736e6f635f6e6f6e,0x68745f6d756e5f74,0x63615f7364616572\n"
".quad 0x090a3b5d65766974,0x2e3436752e747663,0x6472250920323375,0x31317225202c3634\n"
".quad 0x2e6c756d090a3b35,0x3233752e65646977,0x2c37346472250920,0x202c353131722520\n"
".quad 0x2e646461090a3b34,0x6472250920343675,0x33647225202c3834,0x3b3734647225202c\n"
".quad 0x6168732e646c090a,0x203233752e646572,0x202c363131722509,0x302b38346472255b\n"
".quad 0x2e646461090a3b5d,0x3172250920323375,0x31317225202c3330,0x3531317225202c36\n"
".quad 0x68732e7473090a3b,0x3233752e64657261,0x6475635f5f5b0920,0x5f6c61636f6c5f61\n"
".quad 0x313537335f726176,0x6e6f6e5f30345f35,0x6e5f74736e6f635f,0x61657268745f6d75\n"
".quad 0x76697463615f7364,0x30317225202c5d65,0x636f6c2e090a3b33,0x0936333209303309\n"
".quad 0x732e627573090a30,0x3131722509203233,0x3330317225202c37,0x6e61090a3b31202c\n"
".quad 0x2509203233622e64,0x7225202c38313172,0x317225202c333031,0x766f6d090a3b3731\n"
".quad 0x722509203233752e,0x0a3b30202c393131,0x656e2e7074657309,0x702509203233732e\n"
".quad 0x31317225202c3234,0x3931317225202c38,0x3234702540090a3b,0x4c24092061726220\n"
".quad 0x373130355f385f74,0x6c3c2f2f200a3b38,0x726150203e706f6f,0x6f6f6c20666f2074\n"
".quad 0x6c2079646f622070,0x2c39333120656e69,0x616c206461656820,0x4c242064656c6562\n"
".quad 0x363034325f385f74,0x09636f6c2e090a36,0x0a30093337093631,0x3233732e766f6d09\n"
".quad 0x2c30323172250920,0x0a3b333031722520,0x696e752e61726209,0x6e6557444c240920\n"
".quad 0x70786572665f6964,0x3b325f3638315f66,0x355f385f744c240a,0x2f200a3a38373130\n"
".quad 0x203e706f6f6c3c2f,0x20666f2074726150,0x646f6220706f6f6c,0x3120656e696c2079\n"
".quad 0x64616568202c3933,0x64656c6562616c20,0x325f385f744c2420,0x6c2e090a36363034\n"
".quad 0x383209373109636f,0x747663090a300935,0x2e3233662e6e722e,0x3666250920323373\n"
".quad 0x3330317225202c35,0x662e766f6d090a3b,0x3636662509203233,0x0a3b35366625202c\n"
".quad 0x3233662e73626109,0x202c373666250920,0x6d090a3b35366625,0x09203233662e766f\n"
".quad 0x6630202c38366625,0x3030303030383030,0x2f2f09202020203b,0x39343537312e3120\n"
".quad 0x6573090a38332d65,0x33662e746c2e7074,0x2c33347025092032,0x25202c3736662520\n"
".quad 0x2140090a3b383666,0x6172622033347025,0x5f385f744c240920,0x200a3b3634393035\n"
".quad 0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964\n"
".quad 0x616568202c393331,0x656c6562616c2064,0x5f385f744c242064,0x2e090a3636303432\n"
".quad 0x3209393109636f6c,0x6d090a3009333633,0x09203233662e766f,0x6630202c39366625\n"
".quad 0x3030303030386234,0x2f2f09202020203b,0x32373737362e3120,0x756d090a37302b65\n"
".quad 0x2509203233662e6c,0x366625202c363666,0x3b39366625202c35,0x33752e766f6d090a\n"
".quad 0x3132317225092032,0x62090a3b3432202c,0x0920696e752e6172,0x30355f385f744c24\n"
".quad 0x744c240a3b303936,0x36343930355f385f,0x6f6c3c2f2f200a3a,0x74726150203e706f\n"
".quad 0x706f6f6c20666f20,0x696c2079646f6220,0x202c39333120656e,0x62616c2064616568\n"
".quad 0x744c242064656c65,0x36363034325f385f,0x3109636f6c2e090a,0x3009363633320939\n"
".quad 0x33752e766f6d090a,0x3132317225092032,0x744c240a3b30202c,0x30393630355f385f\n"
".quad 0x6f6c3c2f2f200a3a,0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220\n"
".quad 0x202c39333120656e,0x62616c2064616568,0x744c242064656c65,0x36363034325f385f\n"
".quad 0x3109636f6c2e090a,0x090a300938370936,0x203233622e766f6d,0x202c323231722509\n"
".quad 0x73090a3b36366625,0x09203233732e7268,0x25202c3332317225,0x3332202c32323172\n"
".quad 0x622e646e61090a3b,0x3231722509203233,0x3332317225202c34,0x090a3b353532202c\n"
".quad 0x203233752e766f6d,0x202c353231722509,0x2e627573090a3b30,0x3172250920323375\n"
".quad 0x32317225202c3632,0x3132317225202c34,0x752e627573090a3b,0x3231722509203233\n"
".quad 0x3632317225202c37,0x090a3b363231202c,0x203233752e766f6d,0x202c383231722509\n"
".quad 0x6573090a3b353532,0x3233752e71652e74,0x722509203233752e,0x317225202c393231\n"
".quad 0x32317225202c3432,0x2e67656e090a3b38,0x3172250920323373,0x32317225202c3033\n"
".quad 0x2e766f6d090a3b39,0x3766250920323366,0x3030306630202c30,0x20203b3030303030\n"
".quad 0x0a30202f2f092020,0x2e71652e74657309,0x203233662e323375,0x202c313331722509\n"
".quad 0x6625202c37366625,0x67656e090a3b3037,0x722509203233732e,0x317225202c323331\n"
".quad 0x2e726f090a3b3133,0x3172250920323362,0x33317225202c3333,0x3233317225202c30\n"
".quad 0x732e67656e090a3b,0x3331722509203233,0x3333317225202c34,0x2e74636c73090a3b\n"
".quad 0x203233732e323375,0x202c353331722509,0x25202c3732317225,0x7225202c35323172\n"
".quad 0x6873090a3b343331,0x2509203233622e6c,0x2c31202c30323172,0x0a3b353331722520\n"
".quad 0x69646e6557444c24,0x5f6670786572665f,0x200a3a325f363831,0x3e706f6f6c3c2f2f\n"
".quad 0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964,0x616568202c393331\n"
".quad 0x656c6562616c2064,0x5f385f744c242064,0x2e090a3636303432,0x3209303309636f6c\n"
".quad 0x7473090a30093633,0x2e6465726168732e,0x5f5f5b0920323375,0x636f6c5f61647563\n"
".quad 0x335f7261765f6c61,0x5f30345f38313537,0x736e6f635f6e6f6e,0x68745f6d756e5f74\n"
".quad 0x6f635f7364616572,0x6e6f69746361706d,0x3032317225202c5d,0x09636f6c2e090a3b\n"
".quad 0x3009383332093033,0x33752e766f6d090a,0x3633317225092032,0x7473090a3b30202c\n"
".quad 0x2e6465726168732e,0x5f5f5b0920323375,0x636f6c5f61647563,0x335f7261765f6c61\n"
".quad 0x5f30345f31313537,0x736e6f635f6e6f6e,0x6361706d6f635f74,0x646e6f6365735f74\n"
".quad 0x2c5d6b6e7568635f,0x0a3b363331722520,0x39345f385f744c24,0x2f2f200a3a363636\n"
".quad 0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f,0x333120656e696c20\n"
".quad 0x2064616568202c39,0x2064656c6562616c,0x34325f385f744c24,0x6f6c2e090a363630\n"
".quad 0x3134320930330963,0x2e726162090a3009,0x3b300920636e7973,0x6e752e617262090a\n"
".quad 0x385f744c24092069,0x0a3b36363034325f,0x35325f385f744c24,0x636f6c2e090a3a38\n"
".quad 0x0935343209303309,0x732e726162090a30,0x0a3b300920636e79,0x6220327025214009\n"
".quad 0x5f744c2409206172,0x3b32303231355f38,0x3309636f6c2e090a,0x0a30093535320930\n"
".quad 0x2e6f6c2e6c756d09,0x3172250920323375,0x2c317225202c3733,0x747663090a3b3420\n"
".quad 0x3233752e3436752e,0x2c33316472250920,0x0a3b373331722520,0x726168732e646c09\n"
".quad 0x09203233662e6465,0x255b202c31376625,0x0a3b5d302b396472,0x617261702e646c09\n"
".quad 0x2509203436752e6d,0x5f5b202c39346472,0x726170616475635f,0x696232315a5f5f6d\n"
".quad 0x6e72654b74636573,0x536a5f5366506c65,0x5f30536a505f535f,0x5f675f666a6a6666\n"
".quad 0x090a3b5d7466656c,0x203436752e646461,0x202c303564722509,0x25202c3934647225\n"
".quad 0x73090a3b33316472,0x6c61626f6c672e74,0x255b09203233662e,0x2c5d302b30356472\n"
".quad 0x090a3b3137662520,0x09303309636f6c2e,0x6c090a3009373532,0x6465726168732e64\n"
".quad 0x722509203233752e,0x72255b202c383331,0x0a3b5d302b313164,0x617261702e646c09\n"
".quad 0x2509203436752e6d,0x5f5b202c31356472,0x726170616475635f,0x696232315a5f5f6d\n"
".quad 0x6e72654b74636573,0x536a5f5366506c65,0x5f30536a505f535f,0x5f675f666a6a6666\n"
".quad 0x756f635f7466656c,0x6461090a3b5d746e,0x2509203436752e64,0x7225202c32356472\n"
".quad 0x647225202c313564,0x2e7473090a3b3331,0x752e6c61626f6c67,0x6472255b09203233\n"
".quad 0x25202c5d302b3235,0x4c240a3b38333172,0x303231355f385f74,0x636f6c2e090a3a32\n"
".quad 0x0930363209303309,0x3b74697865090a30,0x646e6557444c240a,0x73696232315a5f5f\n"
".quad 0x656e72654b746365,0x5f536a5f5366506c,0x665f30536a505f53,0x7d090a3a666a6a66\n"
".quad 0x32315a5f202f2f20,0x654b746365736962,0x5f5366506c656e72,0x536a505f535f536a\n"
".quad 0x0a666a6a66665f30,0x62697369762e090a,0x636e75662e20656c,0x6d617261702e2820\n"
".quad 0x5f5f203233662e20,0x6674657261647563,0x72663574535a5f5f,0x2029695066707865\n"
".quad 0x6572663574535a5f,0x2e28206950667078,0x662e206d61726170,0x6475635f5f203233\n"
".quad 0x5f31666d72617061,0x6572663574535a5f,0x2e202c6950667078,0x752e206d61726170\n"
".quad 0x6475635f5f203436,0x5f32666d72617061,0x6572663574535a5f,0x090a296950667078\n"
".quad 0x206765722e090a7b,0x3c7225203233752e,0x722e090a3b3e3731,0x203436752e206765\n"
".quad 0x0a3b3e343c647225,0x662e206765722e09,0x30313c6625203233,0x6765722e090a3b3e\n"
".quad 0x2520646572702e20,0x2e090a3b3e343c70,0x3209373109636f6c,0x444c240a30093538\n"
".quad 0x5f5f6e6967656257,0x786572663574535a,0x6c090a3a69506670,0x2e6d617261702e64\n"
".quad 0x3166250920323366,0x6475635f5f5b202c,0x5f31666d72617061,0x6572663574535a5f\n"
".quad 0x0a3b5d6950667078,0x3233662e766f6d09,0x25202c3266250920,0x2e646c090a3b3166\n"
".quad 0x36752e6d61726170,0x2c31647225092034,0x616475635f5f5b20,0x5f5f32666d726170\n"
".quad 0x786572663574535a,0x090a3b5d69506670,0x203436732e766f6d,0x25202c3264722509\n"
".quad 0x6f6d090a3b316472,0x2509203233662e76,0x3b326625202c3366,0x33662e736261090a\n"
".quad 0x202c346625092032,0x6f6d090a3b326625,0x2509203233662e76,0x30306630202c3566\n"
".quad 0x203b303030303038,0x202f2f0920202020,0x6539343537312e31,0x746573090a38332d\n"
".quad 0x3233662e746c2e70,0x25202c3170250920,0x3b356625202c3466,0x203170252140090a\n"
".quad 0x744c240920617262,0x3b363033325f395f,0x3109636f6c2e090a,0x3009333633320939\n"
".quad 0x33662e766f6d090a,0x202c366625092032,0x3030303862346630,0x20202020203b3030\n"
".quad 0x37362e31202f2f09,0x0a37302b65323737,0x3233662e6c756d09,0x25202c3366250920\n"
".quad 0x3b366625202c3266,0x33752e766f6d090a,0x202c317225092032,0x617262090a3b3432\n"
".quad 0x4c240920696e752e,0x303530325f395f74,0x5f395f744c240a3b,0x2e090a3a36303332\n"
".quad 0x3209393109636f6c,0x6d090a3009363633,0x09203233752e766f,0x0a3b30202c317225\n"
".quad 0x30325f395f744c24,0x766f6d090a3a3035,0x722509203233622e,0x0a3b336625202c32\n"
".quad 0x3233732e72687309,0x25202c3372250920,0x0a3b3332202c3272,0x3233622e646e6109\n"
".quad 0x25202c3472250920,0x3b353532202c3372,0x33752e766f6d090a,0x202c357225092032\n"
".quad 0x6573090a3b353532,0x3233752e71652e74,0x722509203233752e,0x202c347225202c36\n"
".quad 0x656e090a3b357225,0x2509203233732e67,0x3b367225202c3772,0x33662e766f6d090a\n"
".quad 0x202c376625092032,0x3030303030306630,0x20202020203b3030,0x73090a30202f2f09\n"
".quad 0x33752e71652e7465,0x2509203233662e32,0x2c346625202c3872,0x6e090a3b37662520\n"
".quad 0x09203233732e6765,0x387225202c397225,0x33622e726f090a3b,0x2c30317225092032\n"
".quad 0x7225202c37722520,0x2e766f6d090a3b39,0x3172250920323375,0x73090a3b30202c31\n"
".quad 0x732e71652e707465,0x2c32702509203233,0x25202c3031722520,0x2540090a3b313172\n"
".quad 0x0920617262203270,0x38325f395f744c24,0x6f6c2e090a3b3831,0x3733320939310963\n"
".quad 0x646461090a300931,0x662509203233662e,0x202c336625202c33,0x6f6d090a3b336625\n"
".quad 0x2509203233752e76,0x0a3b30202c323172,0x696e752e61726209,0x5f395f744c240920\n"
".quad 0x4c240a3b32363532,0x383138325f395f74,0x09636f6c2e090a3a,0x0933373332093931\n"
".quad 0x752e627573090a30,0x3331722509203233,0x25202c347225202c,0x627573090a3b3172\n"
".quad 0x722509203233752e,0x33317225202c3231,0x090a3b363231202c,0x09393109636f6c2e\n"
".quad 0x090a300934373332,0x203233622e646e61,0x25202c3431722509,0x3331322d202c3272\n"
".quad 0x3b31343035393039,0x3233622e726f090a,0x202c353172250920,0x3031202c34317225\n"
".quad 0x3830363436393635,0x622e766f6d090a3b,0x2c33662509203233,0x240a3b3531722520\n"
".quad 0x3635325f395f744c,0x636f6c2e090a3a32,0x3637333209393109,0x732e7473090a3009\n"
".quad 0x6472255b09203233,0x7225202c5d302b32,0x6f6c2e090a3b3231,0x3538320937310963\n"
".quad 0x2e766f6d090a3009,0x3866250920323366,0x090a3b336625202c,0x6d617261702e7473\n"
".quad 0x5f5b09203233662e,0x746572616475635f,0x663574535a5f5f66,0x5d69506670786572\n"
".quad 0x090a3b386625202c,0x444c240a3b746572,0x535a5f5f646e6557,0x6670786572663574\n"
".quad 0x2f207d090a3a6950,0x663574535a5f202f,0x0a69506670786572,0x000000000000000a\n"
".text");

extern "C" {

extern const unsigned long long __deviceText_$compute_20$[8300];

}

static __cudaFatPtxEntry __ptxEntries [] = {{(char*)"compute_20",(char*)__deviceText_$compute_20$},{0,0}};
static __cudaFatCubinEntry __cubinEntries[] = {{0,0}};
static __cudaFatDebugEntry __debugEntries0 = {0, 0, 0, 0} ;
static __cudaFatElfEntry __elfEntries0 = {0, 0, 0, 0} ;
static __cudaFatElfEntry __elfEntries1 = {(char*)"sm_21", (char*)__deviceText_$sm_21$, &__elfEntries0, (unsigned int)sizeof(__deviceText_$sm_21$)};



static __cudaFatCudaBinary __fatDeviceText __attribute__ ((section (".nvFatBinSegment")))= {0x1ee55a01,0x00000004,0xa14f518d,(char*)"b940323fb1104dbb",(char*)"/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_small.cu",(char*)" ",__ptxEntries,__cubinEntries,&__debugEntries0,0,0,0,0,0,0x8f61865f,&__elfEntries1};
# 3 "/tmp/tmpxft_000016c7_00000000-1_bisect_small.cudafe1.stub.c" 2
struct __T20 {float *__par0;float *__par1;unsigned __par2;float *__par3;float *__par4;unsigned *__par5;unsigned *__par6;float __par7;float __par8;unsigned __par9;unsigned __par10;float __par11;int __dummy_field;};
extern void __device_stub__Z12bisectKernelPfS_jS_S_PjS0_ffjjf(float *, float *, const unsigned, float *, float *, unsigned *, unsigned *, const float, const float, const unsigned, const unsigned, float);
static void __sti____cudaRegisterAll_47_tmpxft_000016c7_00000000_4_bisect_small_cpp1_ii_d55b4611(void) __attribute__((__constructor__));
void __device_stub__Z12bisectKernelPfS_jS_S_PjS0_ffjjf(float *__par0, float *__par1, const unsigned __par2, float *__par3, float *__par4, unsigned *__par5, unsigned *__par6, const float __par7, const float __par8, const unsigned __par9, const unsigned __par10, float __par11){ struct __T20 *__T21 = 0;
if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T21->__par0) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T21->__par1) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T21->__par2) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T21->__par3) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T21->__par4) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par5, sizeof(__par5), (size_t)&__T21->__par5) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par6, sizeof(__par6), (size_t)&__T21->__par6) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par7, sizeof(__par7), (size_t)&__T21->__par7) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par8, sizeof(__par8), (size_t)&__T21->__par8) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par9, sizeof(__par9), (size_t)&__T21->__par9) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par10, sizeof(__par10), (size_t)&__T21->__par10) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par11, sizeof(__par11), (size_t)&__T21->__par11) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(float *, float *, const unsigned, float *, float *, unsigned *, unsigned *, const float, const float, const unsigned, const unsigned, float))bisectKernel)); (void)cudaLaunch(((char *)((void ( *)(float *, float *, const unsigned, float *, float *, unsigned *, unsigned *, const float, const float, const unsigned, const unsigned, float))bisectKernel))); };}
void bisectKernel( float *__cuda_0,float *__cuda_1,const unsigned __cuda_2,float *__cuda_3,float *__cuda_4,unsigned *__cuda_5,unsigned *__cuda_6,const float __cuda_7,const float __cuda_8,const unsigned __cuda_9,const unsigned __cuda_10,float __cuda_11)
# 70 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_kernel_small.cu"
{__device_stub__Z12bisectKernelPfS_jS_S_PjS0_ffjjf( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6,__cuda_7,__cuda_8,__cuda_9,__cuda_10,__cuda_11);
# 260 "/home/normal/checkout/gpuocelot/tests-ptx-2.1/cuda2.2/tests/eigenvalues/bisect_kernel_small.cu"
}
# 1 "/tmp/tmpxft_000016c7_00000000-1_bisect_small.cudafe1.stub.c"
static void __sti____cudaRegisterAll_47_tmpxft_000016c7_00000000_4_bisect_small_cpp1_ii_d55b4611(void) { __cudaFatCubinHandle = __cudaRegisterFatBinary((void*)&__fatDeviceText); atexit(__cudaUnregisterBinaryUtil); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(float *, float *, const unsigned, float *, float *, unsigned *, unsigned *, const float, const float, const unsigned, const unsigned, float))bisectKernel), (char*)"_Z12bisectKernelPfS_jS_S_PjS0_ffjjf", "_Z12bisectKernelPfS_jS_S_PjS0_ffjjf", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); }
# 1 "/tmp/tmpxft_000016c7_00000000-1_bisect_small.cudafe1.stub.c" 2
