# 1 "/tmp/tmpxft_00003fb3_00000000-1_scanLargeArray.cudafe1.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/tmp/tmpxft_00003fb3_00000000-1_scanLargeArray.cudafe1.cpp"
# 1 "scanLargeArray.cu"
# 233 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/c++config.h" 3
namespace std __attribute__((visibility("default"))) {
# 245 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/c++config.h" 3
}
# 46 "/home/normal/cuda/bin/../include/device_types.h"
# 152 "/usr/lib/gcc/x86_64-linux-gnu/4.3.3/include/stddef.h" 3
typedef long ptrdiff_t;
# 214 "/usr/lib/gcc/x86_64-linux-gnu/4.3.3/include/stddef.h" 3
typedef unsigned long size_t;
# 1 "/home/normal/cuda/bin/../include/crt/host_runtime.h" 1 3
# 80 "/home/normal/cuda/bin/../include/crt/host_runtime.h" 3
# 1 "/home/normal/cuda/bin/../include/cuda_runtime_api.h" 1 3
# 53 "/home/normal/cuda/bin/../include/cuda_runtime_api.h" 3
# 1 "/home/normal/cuda/bin/../include/host_defines.h" 1 3
# 54 "/home/normal/cuda/bin/../include/cuda_runtime_api.h" 2 3
# 1 "/home/normal/cuda/bin/../include/builtin_types.h" 1 3
# 42 "/home/normal/cuda/bin/../include/builtin_types.h" 3
# 1 "/home/normal/cuda/bin/../include/device_types.h" 1 3
# 46 "/home/normal/cuda/bin/../include/device_types.h" 3
enum cudaRoundMode
{
  cudaRoundNearest,
  cudaRoundZero,
  cudaRoundPosInf,
  cudaRoundMinInf
};
# 43 "/home/normal/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/home/normal/cuda/bin/../include/driver_types.h" 1 3
# 90 "/home/normal/cuda/bin/../include/driver_types.h" 3
enum cudaError
{
  cudaSuccess = 0,
  cudaErrorMissingConfiguration = 1,
  cudaErrorMemoryAllocation = 2,
  cudaErrorInitializationError = 3,
  cudaErrorLaunchFailure = 4,
  cudaErrorPriorLaunchFailure = 5,
  cudaErrorLaunchTimeout = 6,
  cudaErrorLaunchOutOfResources = 7,
  cudaErrorInvalidDeviceFunction = 8,
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
  cudaErrorAddressOfConstant = 22,
  cudaErrorTextureFetchFailed = 23,
  cudaErrorTextureNotBound = 24,
  cudaErrorSynchronizationError = 25,
  cudaErrorInvalidFilterSetting = 26,
  cudaErrorInvalidNormSetting = 27,
  cudaErrorMixedDeviceExecution = 28,
  cudaErrorCudartUnloading = 29,
  cudaErrorUnknown = 30,
  cudaErrorNotYetImplemented = 31,
  cudaErrorMemoryValueTooLarge = 32,
  cudaErrorInvalidResourceHandle = 33,
  cudaErrorNotReady = 34,
  cudaErrorInsufficientDriver = 35,
  cudaErrorSetOnActiveProcess = 36,
  cudaErrorNoDevice = 38,
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





struct cudaFuncAttributes
{
   size_t sharedSizeBytes;
   size_t constSizeBytes;
   size_t localSizeBytes;
   int maxThreadsPerBlock;
   int numRegs;
   int __cudaReserved[8];
};





enum cudaComputeMode
{
  cudaComputeModeDefault = 0,
  cudaComputeModeExclusive = 1,
  cudaComputeModeProhibited = 2
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
  int __cudaReserved[36];
};
# 318 "/home/normal/cuda/bin/../include/driver_types.h" 3
typedef enum cudaError cudaError_t;





typedef int cudaStream_t;





typedef int cudaEvent_t;
# 44 "/home/normal/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/home/normal/cuda/bin/../include/texture_types.h" 1 3
# 54 "/home/normal/cuda/bin/../include/texture_types.h" 3
enum cudaTextureAddressMode
{
  cudaAddressModeWrap,
  cudaAddressModeClamp
};


enum cudaTextureFilterMode
{
  cudaFilterModePoint,
  cudaFilterModeLinear
};


enum cudaTextureReadMode
{
  cudaReadModeElementType,
  cudaReadModeNormalizedFloat
};


struct textureReference
{
  int normalized;
  enum cudaTextureFilterMode filterMode;
  enum cudaTextureAddressMode addressMode[3];
  struct cudaChannelFormatDesc channelDesc;
  int __cudaReserved[16];
};
# 45 "/home/normal/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/home/normal/cuda/bin/../include/vector_types.h" 1 3
# 54 "/home/normal/cuda/bin/../include/vector_types.h" 3
struct char1
{
  signed char x;
};


struct uchar1
{
  unsigned char x;
};


struct char2
{
  signed char x, y;
};


struct uchar2
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


struct char4
{
  signed char x, y, z, w;
};


struct uchar4
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


struct short2
{
  short x, y;
};


struct ushort2
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


struct short4
{
  short x, y, z, w;
};


struct ushort4
{
  unsigned short x, y, z, w;
};


struct int1
{
  int x;
};


struct uint1
{
  unsigned int x;
};


struct int2
{
  int x, y;
};


struct uint2
{
  unsigned int x, y;
};


struct int3
{
  int x, y, z;
};


struct uint3
{
  unsigned int x, y, z;
};


struct int4
{
  int x, y, z, w;
};


struct uint4
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


struct



      

                                             long2
{
  long int x, y;
};


struct



      

                                                      ulong2
{
  unsigned long int x, y;
};
# 262 "/home/normal/cuda/bin/../include/vector_types.h" 3
struct float1
{
  float x;
};


struct float2
{
  float x, y;
};


struct float3
{
  float x, y, z;
};


struct float4
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


struct longlong2
{
  long long int x, y;
};


struct ulonglong2
{
  unsigned long long int x, y;
};


struct double1
{
  double x;
};


struct double2
{
  double x, y;
};
# 328 "/home/normal/cuda/bin/../include/vector_types.h" 3
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

typedef struct double1 double1;

typedef struct double2 double2;
# 419 "/home/normal/cuda/bin/../include/vector_types.h" 3
typedef struct dim3 dim3;


struct dim3
{
    unsigned int x, y, z;

    dim3(unsigned int x = 1, unsigned int y = 1, unsigned int z = 1) : x(x), y(y), z(z) {}
    dim3(uint3 v) : x(v.x), y(v.y), z(v.z) {}
    operator uint3(void) { uint3 t; t.x = x; t.y = y; t.z = z; return t; }

};
# 45 "/home/normal/cuda/bin/../include/builtin_types.h" 2 3
# 55 "/home/normal/cuda/bin/../include/cuda_runtime_api.h" 2 3
# 80 "/home/normal/cuda/bin/../include/cuda_runtime_api.h" 3
extern "C" {
# 89 "/home/normal/cuda/bin/../include/cuda_runtime_api.h" 3
extern cudaError_t cudaMalloc3D(struct cudaPitchedPtr* pitchedDevPtr, struct cudaExtent extent);
extern cudaError_t cudaMalloc3DArray(struct cudaArray** arrayPtr, const struct cudaChannelFormatDesc* desc, struct cudaExtent extent);
extern cudaError_t cudaMemset3D(struct cudaPitchedPtr pitchedDevPtr, int value, struct cudaExtent extent);
extern cudaError_t cudaMemcpy3D(const struct cudaMemcpy3DParms *p);
extern cudaError_t cudaMemcpy3DAsync(const struct cudaMemcpy3DParms *p, cudaStream_t stream);
# 102 "/home/normal/cuda/bin/../include/cuda_runtime_api.h" 3
extern cudaError_t cudaMalloc(void **devPtr, size_t size);
extern cudaError_t cudaMallocHost(void **ptr, size_t size);
extern cudaError_t cudaMallocPitch(void **devPtr, size_t *pitch, size_t width, size_t height);
extern cudaError_t cudaMallocArray(struct cudaArray **array, const struct cudaChannelFormatDesc *desc, size_t width, size_t height );
extern cudaError_t cudaFree(void *devPtr);
extern cudaError_t cudaFreeHost(void *ptr);
extern cudaError_t cudaFreeArray(struct cudaArray *array);

extern cudaError_t cudaHostAlloc(void **pHost, size_t bytes, unsigned int flags);
extern cudaError_t cudaHostGetDevicePointer(void **pDevice, void *pHost, unsigned int flags);
# 120 "/home/normal/cuda/bin/../include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy(void *dst, const void *src, size_t count, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpyToArray(struct cudaArray *dst, size_t wOffset, size_t hOffset, const void *src, size_t count, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpyFromArray(void *dst, const struct cudaArray *src, size_t wOffset, size_t hOffset, size_t count, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpyArrayToArray(struct cudaArray *dst, size_t wOffsetDst, size_t hOffsetDst, const struct cudaArray *src, size_t wOffsetSrc, size_t hOffsetSrc, size_t count, enum cudaMemcpyKind kind );
extern cudaError_t cudaMemcpy2D(void *dst, size_t dpitch, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpy2DToArray(struct cudaArray *dst, size_t wOffset, size_t hOffset, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpy2DFromArray(void *dst, size_t dpitch, const struct cudaArray *src, size_t wOffset, size_t hOffset, size_t width, size_t height, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpy2DArrayToArray(struct cudaArray *dst, size_t wOffsetDst, size_t hOffsetDst, const struct cudaArray *src, size_t wOffsetSrc, size_t hOffsetSrc, size_t width, size_t height, enum cudaMemcpyKind kind );
extern cudaError_t cudaMemcpyToSymbol(const char *symbol, const void *src, size_t count, size_t offset , enum cudaMemcpyKind kind );
extern cudaError_t cudaMemcpyFromSymbol(void *dst, const char *symbol, size_t count, size_t offset , enum cudaMemcpyKind kind );







extern cudaError_t cudaMemcpyAsync(void *dst, const void *src, size_t count, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpyToArrayAsync(struct cudaArray *dst, size_t wOffset, size_t hOffset, const void *src, size_t count, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpyFromArrayAsync(void *dst, const struct cudaArray *src, size_t wOffset, size_t hOffset, size_t count, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpy2DAsync(void *dst, size_t dpitch, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpy2DToArrayAsync(struct cudaArray *dst, size_t wOffset, size_t hOffset, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpy2DFromArrayAsync(void *dst, size_t dpitch, const struct cudaArray *src, size_t wOffset, size_t hOffset, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpyToSymbolAsync(const char *symbol, const void *src, size_t count, size_t offset, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpyFromSymbolAsync(void *dst, const char *symbol, size_t count, size_t offset, enum cudaMemcpyKind kind, cudaStream_t stream);







extern cudaError_t cudaMemset(void *devPtr, int value, size_t count);
extern cudaError_t cudaMemset2D(void *devPtr, size_t pitch, int value, size_t width, size_t height);







extern cudaError_t cudaGetSymbolAddress(void **devPtr, const char *symbol);
extern cudaError_t cudaGetSymbolSize(size_t *size, const char *symbol);







extern cudaError_t cudaGetDeviceCount(int *count);
extern cudaError_t cudaGetDeviceProperties(struct cudaDeviceProp *prop, int device);
extern cudaError_t cudaChooseDevice(int *device, const struct cudaDeviceProp *prop);
extern cudaError_t cudaSetDevice(int device);
extern cudaError_t cudaGetDevice(int *device);
extern cudaError_t cudaSetValidDevices(int *device_arr, int len);
extern cudaError_t cudaSetDeviceFlags( int flags );







extern cudaError_t cudaBindTexture(size_t *offset, const struct textureReference *texref, const void *devPtr, const struct cudaChannelFormatDesc *desc, size_t size );
extern cudaError_t cudaBindTexture2D(size_t *offset,const struct textureReference *texref,const void *devPtr, const struct cudaChannelFormatDesc *desc,size_t width, size_t height, size_t pitch);
extern cudaError_t cudaBindTextureToArray(const struct textureReference *texref, const struct cudaArray *array, const struct cudaChannelFormatDesc *desc);
extern cudaError_t cudaUnbindTexture(const struct textureReference *texref);
extern cudaError_t cudaGetTextureAlignmentOffset(size_t *offset, const struct textureReference *texref);
extern cudaError_t cudaGetTextureReference(const struct textureReference **texref, const char *symbol);







extern cudaError_t cudaGetChannelDesc(struct cudaChannelFormatDesc *desc, const struct cudaArray *array);
extern struct cudaChannelFormatDesc cudaCreateChannelDesc(int x, int y, int z, int w, enum cudaChannelFormatKind f);







extern cudaError_t cudaGetLastError(void);
extern const char* cudaGetErrorString(cudaError_t error);







extern cudaError_t cudaConfigureCall(dim3 gridDim, dim3 blockDim, size_t sharedMem , cudaStream_t stream );
extern cudaError_t cudaSetupArgument(const void *arg, size_t size, size_t offset);
extern cudaError_t cudaLaunch(const char *entry);
extern cudaError_t cudaFuncGetAttributes(struct cudaFuncAttributes *attr, const char *func);







extern cudaError_t cudaStreamCreate(cudaStream_t *pStream);
extern cudaError_t cudaStreamDestroy(cudaStream_t stream);
extern cudaError_t cudaStreamSynchronize(cudaStream_t stream);
extern cudaError_t cudaStreamQuery(cudaStream_t stream);







extern cudaError_t cudaEventCreate(cudaEvent_t *event);
extern cudaError_t cudaEventCreateWithFlags(cudaEvent_t *event, int flags);
extern cudaError_t cudaEventRecord(cudaEvent_t event, cudaStream_t stream);
extern cudaError_t cudaEventQuery(cudaEvent_t event);
extern cudaError_t cudaEventSynchronize(cudaEvent_t event);
extern cudaError_t cudaEventDestroy(cudaEvent_t event);
extern cudaError_t cudaEventElapsedTime(float *ms, cudaEvent_t start, cudaEvent_t end);







extern cudaError_t cudaSetDoubleForDevice(double *d);
extern cudaError_t cudaSetDoubleForHost(double *d);







extern cudaError_t cudaThreadExit(void);
extern cudaError_t cudaThreadSynchronize(void);







extern cudaError_t cudaDriverGetVersion(int *driverVersion);
extern cudaError_t cudaRuntimeGetVersion(int *runtimeVersion);


}
# 81 "/home/normal/cuda/bin/../include/crt/host_runtime.h" 2 3
# 1 "/home/normal/cuda/bin/../include/crt/storage_class.h" 1 3
# 82 "/home/normal/cuda/bin/../include/crt/host_runtime.h" 2 3
# 216 "/usr/lib/gcc/x86_64-linux-gnu/4.3.3/include/stddef.h" 2 3
# 90 "/home/normal/cuda/bin/../include/driver_types.h"
# 138 "/home/normal/cuda/bin/../include/driver_types.h"
# 150 "/home/normal/cuda/bin/../include/driver_types.h"
# 163 "/home/normal/cuda/bin/../include/driver_types.h"
# 169 "/home/normal/cuda/bin/../include/driver_types.h"
# 181 "/home/normal/cuda/bin/../include/driver_types.h"
# 193 "/home/normal/cuda/bin/../include/driver_types.h"
# 204 "/home/normal/cuda/bin/../include/driver_types.h"
# 215 "/home/normal/cuda/bin/../include/driver_types.h"
# 233 "/home/normal/cuda/bin/../include/driver_types.h"
# 247 "/home/normal/cuda/bin/../include/driver_types.h"
# 259 "/home/normal/cuda/bin/../include/driver_types.h"
# 318 "/home/normal/cuda/bin/../include/driver_types.h"
# 324 "/home/normal/cuda/bin/../include/driver_types.h"
# 330 "/home/normal/cuda/bin/../include/driver_types.h"
# 54 "/home/normal/cuda/bin/../include/texture_types.h"
# 61 "/home/normal/cuda/bin/../include/texture_types.h"
# 68 "/home/normal/cuda/bin/../include/texture_types.h"
# 75 "/home/normal/cuda/bin/../include/texture_types.h"
# 54 "/home/normal/cuda/bin/../include/vector_types.h"
# 60 "/home/normal/cuda/bin/../include/vector_types.h"
# 66 "/home/normal/cuda/bin/../include/vector_types.h"
# 72 "/home/normal/cuda/bin/../include/vector_types.h"
# 78 "/home/normal/cuda/bin/../include/vector_types.h"
# 84 "/home/normal/cuda/bin/../include/vector_types.h"
# 90 "/home/normal/cuda/bin/../include/vector_types.h"
# 96 "/home/normal/cuda/bin/../include/vector_types.h"
# 102 "/home/normal/cuda/bin/../include/vector_types.h"
# 108 "/home/normal/cuda/bin/../include/vector_types.h"
# 114 "/home/normal/cuda/bin/../include/vector_types.h"
# 120 "/home/normal/cuda/bin/../include/vector_types.h"
# 126 "/home/normal/cuda/bin/../include/vector_types.h"
# 132 "/home/normal/cuda/bin/../include/vector_types.h"
# 138 "/home/normal/cuda/bin/../include/vector_types.h"
# 144 "/home/normal/cuda/bin/../include/vector_types.h"
# 150 "/home/normal/cuda/bin/../include/vector_types.h"
# 156 "/home/normal/cuda/bin/../include/vector_types.h"
# 162 "/home/normal/cuda/bin/../include/vector_types.h"
# 168 "/home/normal/cuda/bin/../include/vector_types.h"
# 174 "/home/normal/cuda/bin/../include/vector_types.h"
# 180 "/home/normal/cuda/bin/../include/vector_types.h"
# 186 "/home/normal/cuda/bin/../include/vector_types.h"
# 192 "/home/normal/cuda/bin/../include/vector_types.h"
# 198 "/home/normal/cuda/bin/../include/vector_types.h"
# 204 "/home/normal/cuda/bin/../include/vector_types.h"
# 216 "/home/normal/cuda/bin/../include/vector_types.h"
# 228 "/home/normal/cuda/bin/../include/vector_types.h"
# 262 "/home/normal/cuda/bin/../include/vector_types.h"
# 268 "/home/normal/cuda/bin/../include/vector_types.h"
# 274 "/home/normal/cuda/bin/../include/vector_types.h"
# 280 "/home/normal/cuda/bin/../include/vector_types.h"
# 286 "/home/normal/cuda/bin/../include/vector_types.h"
# 292 "/home/normal/cuda/bin/../include/vector_types.h"
# 298 "/home/normal/cuda/bin/../include/vector_types.h"
# 304 "/home/normal/cuda/bin/../include/vector_types.h"
# 310 "/home/normal/cuda/bin/../include/vector_types.h"
# 316 "/home/normal/cuda/bin/../include/vector_types.h"
# 328 "/home/normal/cuda/bin/../include/vector_types.h"
# 330 "/home/normal/cuda/bin/../include/vector_types.h"
# 332 "/home/normal/cuda/bin/../include/vector_types.h"
# 334 "/home/normal/cuda/bin/../include/vector_types.h"
# 336 "/home/normal/cuda/bin/../include/vector_types.h"
# 338 "/home/normal/cuda/bin/../include/vector_types.h"
# 340 "/home/normal/cuda/bin/../include/vector_types.h"
# 342 "/home/normal/cuda/bin/../include/vector_types.h"
# 344 "/home/normal/cuda/bin/../include/vector_types.h"
# 346 "/home/normal/cuda/bin/../include/vector_types.h"
# 348 "/home/normal/cuda/bin/../include/vector_types.h"
# 350 "/home/normal/cuda/bin/../include/vector_types.h"
# 352 "/home/normal/cuda/bin/../include/vector_types.h"
# 354 "/home/normal/cuda/bin/../include/vector_types.h"
# 356 "/home/normal/cuda/bin/../include/vector_types.h"
# 358 "/home/normal/cuda/bin/../include/vector_types.h"
# 360 "/home/normal/cuda/bin/../include/vector_types.h"
# 362 "/home/normal/cuda/bin/../include/vector_types.h"
# 364 "/home/normal/cuda/bin/../include/vector_types.h"
# 366 "/home/normal/cuda/bin/../include/vector_types.h"
# 368 "/home/normal/cuda/bin/../include/vector_types.h"
# 370 "/home/normal/cuda/bin/../include/vector_types.h"
# 372 "/home/normal/cuda/bin/../include/vector_types.h"
# 374 "/home/normal/cuda/bin/../include/vector_types.h"
# 376 "/home/normal/cuda/bin/../include/vector_types.h"
# 378 "/home/normal/cuda/bin/../include/vector_types.h"
# 380 "/home/normal/cuda/bin/../include/vector_types.h"
# 382 "/home/normal/cuda/bin/../include/vector_types.h"
# 384 "/home/normal/cuda/bin/../include/vector_types.h"
# 386 "/home/normal/cuda/bin/../include/vector_types.h"
# 388 "/home/normal/cuda/bin/../include/vector_types.h"
# 390 "/home/normal/cuda/bin/../include/vector_types.h"
# 392 "/home/normal/cuda/bin/../include/vector_types.h"
# 394 "/home/normal/cuda/bin/../include/vector_types.h"
# 396 "/home/normal/cuda/bin/../include/vector_types.h"
# 398 "/home/normal/cuda/bin/../include/vector_types.h"
# 400 "/home/normal/cuda/bin/../include/vector_types.h"
# 402 "/home/normal/cuda/bin/../include/vector_types.h"
# 404 "/home/normal/cuda/bin/../include/vector_types.h"
# 406 "/home/normal/cuda/bin/../include/vector_types.h"
# 408 "/home/normal/cuda/bin/../include/vector_types.h"
# 410 "/home/normal/cuda/bin/../include/vector_types.h"
# 419 "/home/normal/cuda/bin/../include/vector_types.h"
# 422 "/home/normal/cuda/bin/../include/vector_types.h"
# 89 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc3D(cudaPitchedPtr *, cudaExtent);
extern "C" cudaError_t cudaMalloc3DArray(cudaArray **, const cudaChannelFormatDesc *, cudaExtent);
extern "C" cudaError_t cudaMemset3D(cudaPitchedPtr, int, cudaExtent);
extern "C" cudaError_t cudaMemcpy3D(const cudaMemcpy3DParms *);
extern "C" cudaError_t cudaMemcpy3DAsync(const cudaMemcpy3DParms *, cudaStream_t);
# 102 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc(void **, size_t);
extern "C" cudaError_t cudaMallocHost(void **, size_t);
extern "C" cudaError_t cudaMallocPitch(void **, size_t *, size_t, size_t);
extern "C" cudaError_t cudaMallocArray(cudaArray **, const cudaChannelFormatDesc *, size_t, size_t = (1));
extern "C" cudaError_t cudaFree(void *);
extern "C" cudaError_t cudaFreeHost(void *);
extern "C" cudaError_t cudaFreeArray(cudaArray *);

extern "C" cudaError_t cudaHostAlloc(void **, size_t, unsigned);
extern "C" cudaError_t cudaHostGetDevicePointer(void **, void *, unsigned);
# 120 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy(void *, const void *, size_t, cudaMemcpyKind);
extern "C" cudaError_t cudaMemcpyToArray(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind);
extern "C" cudaError_t cudaMemcpyFromArray(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind);
extern "C" cudaError_t cudaMemcpyArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice);
extern "C" cudaError_t cudaMemcpy2D(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind);
extern "C" cudaError_t cudaMemcpy2DToArray(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind);
extern "C" cudaError_t cudaMemcpy2DFromArray(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind);
extern "C" cudaError_t cudaMemcpy2DArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice);
extern "C" cudaError_t cudaMemcpyToSymbol(const char *, const void *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyHostToDevice);
extern "C" cudaError_t cudaMemcpyFromSymbol(void *, const char *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyDeviceToHost);
# 137 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyAsync(void *, const void *, size_t, cudaMemcpyKind, cudaStream_t);
extern "C" cudaError_t cudaMemcpyToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind, cudaStream_t);
extern "C" cudaError_t cudaMemcpyFromArrayAsync(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t);
extern "C" cudaError_t cudaMemcpy2DAsync(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t);
extern "C" cudaError_t cudaMemcpy2DToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t);
extern "C" cudaError_t cudaMemcpy2DFromArrayAsync(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t);
extern "C" cudaError_t cudaMemcpyToSymbolAsync(const char *, const void *, size_t, size_t, cudaMemcpyKind, cudaStream_t);
extern "C" cudaError_t cudaMemcpyFromSymbolAsync(void *, const char *, size_t, size_t, cudaMemcpyKind, cudaStream_t);
# 152 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset(void *, int, size_t);
extern "C" cudaError_t cudaMemset2D(void *, size_t, int, size_t, size_t);
# 161 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSymbolAddress(void **, const char *);
extern "C" cudaError_t cudaGetSymbolSize(size_t *, const char *);
# 170 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDeviceCount(int *);
extern "C" cudaError_t cudaGetDeviceProperties(cudaDeviceProp *, int);
extern "C" cudaError_t cudaChooseDevice(int *, const cudaDeviceProp *);
extern "C" cudaError_t cudaSetDevice(int);
extern "C" cudaError_t cudaGetDevice(int *);
extern "C" cudaError_t cudaSetValidDevices(int *, int);
extern "C" cudaError_t cudaSetDeviceFlags(int);
# 184 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTexture(size_t *, const textureReference *, const void *, const cudaChannelFormatDesc *, size_t = (((2147483647) * 2U) + 1U));
extern "C" cudaError_t cudaBindTexture2D(size_t *, const textureReference *, const void *, const cudaChannelFormatDesc *, size_t, size_t, size_t);
extern "C" cudaError_t cudaBindTextureToArray(const textureReference *, const cudaArray *, const cudaChannelFormatDesc *);
extern "C" cudaError_t cudaUnbindTexture(const textureReference *);
extern "C" cudaError_t cudaGetTextureAlignmentOffset(size_t *, const textureReference *);
extern "C" cudaError_t cudaGetTextureReference(const textureReference **, const char *);
# 197 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetChannelDesc(cudaChannelFormatDesc *, const cudaArray *);
extern "C" cudaChannelFormatDesc cudaCreateChannelDesc(int, int, int, int, cudaChannelFormatKind);
# 206 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetLastError();
extern "C" const char *cudaGetErrorString(cudaError_t);
# 215 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaConfigureCall(dim3, dim3, size_t = (0), cudaStream_t = (0));
extern "C" cudaError_t cudaSetupArgument(const void *, size_t, size_t);
extern "C" cudaError_t cudaLaunch(const char *);
extern "C" cudaError_t cudaFuncGetAttributes(cudaFuncAttributes *, const char *);
# 226 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamCreate(cudaStream_t *);
extern "C" cudaError_t cudaStreamDestroy(cudaStream_t);
extern "C" cudaError_t cudaStreamSynchronize(cudaStream_t);
extern "C" cudaError_t cudaStreamQuery(cudaStream_t);
# 237 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventCreate(cudaEvent_t *);
extern "C" cudaError_t cudaEventCreateWithFlags(cudaEvent_t *, int);
extern "C" cudaError_t cudaEventRecord(cudaEvent_t, cudaStream_t);
extern "C" cudaError_t cudaEventQuery(cudaEvent_t);
extern "C" cudaError_t cudaEventSynchronize(cudaEvent_t);
extern "C" cudaError_t cudaEventDestroy(cudaEvent_t);
extern "C" cudaError_t cudaEventElapsedTime(float *, cudaEvent_t, cudaEvent_t);
# 251 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDoubleForDevice(double *);
extern "C" cudaError_t cudaSetDoubleForHost(double *);
# 260 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadExit();
extern "C" cudaError_t cudaThreadSynchronize();
# 269 "/home/normal/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDriverGetVersion(int *);
extern "C" cudaError_t cudaRuntimeGetVersion(int *);
# 93 "/home/normal/cuda/bin/../include/channel_descriptor.h"
template<class T> inline cudaChannelFormatDesc cudaCreateChannelDesc()
{
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char> ()
{
auto int e = (((int)sizeof(char)) * 8);




return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);

}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> ()
{
auto int e = (((int)sizeof(signed char)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> ()
{
auto int e = (((int)sizeof(unsigned char)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> ()
{
auto int e = (((int)sizeof(signed char)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> ()
{
auto int e = (((int)sizeof(unsigned char)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> ()
{
auto int e = (((int)sizeof(signed char)) * 8);

return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> ()
{
auto int e = (((int)sizeof(unsigned char)) * 8);

return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> ()
{
auto int e = (((int)sizeof(signed char)) * 8);

return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> ()
{
auto int e = (((int)sizeof(unsigned char)) * 8);

return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short> ()
{
auto int e = (((int)sizeof(short)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> ()
{
auto int e = (((int)sizeof(unsigned short)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> ()
{
auto int e = (((int)sizeof(short)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> ()
{
auto int e = (((int)sizeof(unsigned short)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> ()
{
auto int e = (((int)sizeof(short)) * 8);

return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> ()
{
auto int e = (((int)sizeof(unsigned short)) * 8);

return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> ()
{
auto int e = (((int)sizeof(short)) * 8);

return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> ()
{
auto int e = (((int)sizeof(unsigned short)) * 8);

return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int> ()
{
auto int e = (((int)sizeof(int)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> ()
{
auto int e = (((int)sizeof(unsigned)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> ()
{
auto int e = (((int)sizeof(int)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> ()
{
auto int e = (((int)sizeof(unsigned)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> ()
{
auto int e = (((int)sizeof(int)) * 8);

return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> ()
{
auto int e = (((int)sizeof(unsigned)) * 8);

return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> ()
{
auto int e = (((int)sizeof(int)) * 8);

return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> ()
{
auto int e = (((int)sizeof(unsigned)) * 8);

return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
}
# 337 "/home/normal/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float> ()
{
auto int e = (((int)sizeof(float)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> ()
{
auto int e = (((int)sizeof(float)) * 8);

return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> ()
{
auto int e = (((int)sizeof(float)) * 8);

return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat);
}

template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> ()
{
auto int e = (((int)sizeof(float)) * 8);

return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat);
}
# 54 "/home/normal/cuda/bin/../include/driver_functions.h"
static inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz)
{
auto cudaPitchedPtr s;

(s.ptr) = d;
(s.pitch) = p;
(s.xsize) = xsz;
(s.ysize) = ysz;

return s;
}

static inline cudaPos make_cudaPos(size_t x, size_t y, size_t z)
{
auto cudaPos p;

(p.x) = x;
(p.y) = y;
(p.z) = z;

return p;
}

static inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d)
{
auto cudaExtent e;

(e.width) = w;
(e.height) = h;
(e.depth) = d;

return e;
}
# 54 "/home/normal/cuda/bin/../include/vector_functions.h"
static inline char1 make_char1(signed char x)
{
auto char1 t; (t.x) = x; return t;
}

static inline uchar1 make_uchar1(unsigned char x)
{
auto uchar1 t; (t.x) = x; return t;
}

static inline char2 make_char2(signed char x, signed char y)
{
auto char2 t; (t.x) = x; (t.y) = y; return t;
}

static inline uchar2 make_uchar2(unsigned char x, unsigned char y)
{
auto uchar2 t; (t.x) = x; (t.y) = y; return t;
}

static inline char3 make_char3(signed char x, signed char y, signed char z)
{
auto char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
}

static inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z)
{
auto uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
}

static inline char4 make_char4(signed char x, signed char y, signed char z, signed char w)
{
auto char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
}

static inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w)
{
auto uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
}

static inline short1 make_short1(short x)
{
auto short1 t; (t.x) = x; return t;
}

static inline ushort1 make_ushort1(unsigned short x)
{
auto ushort1 t; (t.x) = x; return t;
}

static inline short2 make_short2(short x, short y)
{
auto short2 t; (t.x) = x; (t.y) = y; return t;
}

static inline ushort2 make_ushort2(unsigned short x, unsigned short y)
{
auto ushort2 t; (t.x) = x; (t.y) = y; return t;
}

static inline short3 make_short3(short x, short y, short z)
{
auto short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
}

static inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z)
{
auto ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
}

static inline short4 make_short4(short x, short y, short z, short w)
{
auto short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
}

static inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w)
{
auto ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
}

static inline int1 make_int1(int x)
{
auto int1 t; (t.x) = x; return t;
}

static inline uint1 make_uint1(unsigned x)
{
auto uint1 t; (t.x) = x; return t;
}

static inline int2 make_int2(int x, int y)
{
auto int2 t; (t.x) = x; (t.y) = y; return t;
}

static inline uint2 make_uint2(unsigned x, unsigned y)
{
auto uint2 t; (t.x) = x; (t.y) = y; return t;
}

static inline int3 make_int3(int x, int y, int z)
{
auto int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
}

static inline uint3 make_uint3(unsigned x, unsigned y, unsigned z)
{
auto uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
}

static inline int4 make_int4(int x, int y, int z, int w)
{
auto int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
}

static inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w)
{
auto uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
}

static inline long1 make_long1(long x)
{
auto long1 t; (t.x) = x; return t;
}

static inline ulong1 make_ulong1(unsigned long x)
{
auto ulong1 t; (t.x) = x; return t;
}

static inline long2 make_long2(long x, long y)
{
auto long2 t; (t.x) = x; (t.y) = y; return t;
}

static inline ulong2 make_ulong2(unsigned long x, unsigned long y)
{
auto ulong2 t; (t.x) = x; (t.y) = y; return t;
}
# 218 "/home/normal/cuda/bin/../include/vector_functions.h"
static inline float1 make_float1(float x)
{
auto float1 t; (t.x) = x; return t;
}

static inline float2 make_float2(float x, float y)
{
auto float2 t; (t.x) = x; (t.y) = y; return t;
}

static inline float3 make_float3(float x, float y, float z)
{
auto float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
}

static inline float4 make_float4(float x, float y, float z, float w)
{
auto float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
}

static inline longlong1 make_longlong1(long long x)
{
auto longlong1 t; (t.x) = x; return t;
}

static inline ulonglong1 make_ulonglong1(unsigned long long x)
{
auto ulonglong1 t; (t.x) = x; return t;
}

static inline longlong2 make_longlong2(long long x, long long y)
{
auto longlong2 t; (t.x) = x; (t.y) = y; return t;
}

static inline ulonglong2 make_ulonglong2(unsigned long long x, unsigned long long y)
{
auto ulonglong2 t; (t.x) = x; (t.y) = y; return t;
}

static inline double1 make_double1(double x)
{
auto double1 t; (t.x) = x; return t;
}

static inline double2 make_double2(double x, double y)
{
auto double2 t; (t.x) = x; (t.y) = y; return t;
}
# 31 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned char __u_char; }
extern "C" { typedef unsigned short __u_short; }
extern "C" { typedef unsigned __u_int; }
extern "C" { typedef unsigned long __u_long; }


extern "C" { typedef signed char __int8_t; }
extern "C" { typedef unsigned char __uint8_t; }
extern "C" { typedef signed short __int16_t; }
extern "C" { typedef unsigned short __uint16_t; }
extern "C" { typedef signed int __int32_t; }
extern "C" { typedef unsigned __uint32_t; }

extern "C" { typedef signed long __int64_t; }
extern "C" { typedef unsigned long __uint64_t; }
# 53 "/usr/include/bits/types.h" 3
extern "C" { typedef long __quad_t; }
extern "C" { typedef unsigned long __u_quad_t; }
# 134 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __dev_t; }
extern "C" { typedef unsigned __uid_t; }
extern "C" { typedef unsigned __gid_t; }
extern "C" { typedef unsigned long __ino_t; }
extern "C" { typedef unsigned long __ino64_t; }
extern "C" { typedef unsigned __mode_t; }
extern "C" { typedef unsigned long __nlink_t; }
extern "C" { typedef long __off_t; }
extern "C" { typedef long __off64_t; }
extern "C" { typedef int __pid_t; }
extern "C" { typedef struct __fsid_t { int __val[2]; } __fsid_t; }
extern "C" { typedef long __clock_t; }
extern "C" { typedef unsigned long __rlim_t; }
extern "C" { typedef unsigned long __rlim64_t; }
extern "C" { typedef unsigned __id_t; }
extern "C" { typedef long __time_t; }
extern "C" { typedef unsigned __useconds_t; }
extern "C" { typedef long __suseconds_t; }

extern "C" { typedef int __daddr_t; }
extern "C" { typedef long __swblk_t; }
extern "C" { typedef int __key_t; }


extern "C" { typedef int __clockid_t; }


extern "C" { typedef void *__timer_t; }


extern "C" { typedef long __blksize_t; }




extern "C" { typedef long __blkcnt_t; }
extern "C" { typedef long __blkcnt64_t; }


extern "C" { typedef unsigned long __fsblkcnt_t; }
extern "C" { typedef unsigned long __fsblkcnt64_t; }


extern "C" { typedef unsigned long __fsfilcnt_t; }
extern "C" { typedef unsigned long __fsfilcnt64_t; }

extern "C" { typedef long __ssize_t; }



extern "C" { typedef __off64_t __loff_t; }
extern "C" { typedef __quad_t *__qaddr_t; }
extern "C" { typedef char *__caddr_t; }


extern "C" { typedef long __intptr_t; }


extern "C" { typedef unsigned __socklen_t; }
# 61 "/usr/include/time.h" 3
extern "C" { typedef __clock_t clock_t; }
# 77 "/usr/include/time.h" 3
extern "C" { typedef __time_t time_t; }
# 93 "/usr/include/time.h" 3
extern "C" { typedef __clockid_t clockid_t; }
# 105 "/usr/include/time.h" 3
extern "C" { typedef __timer_t timer_t; }
# 121 "/usr/include/time.h" 3
extern "C" { struct timespec {

__time_t tv_sec;
long tv_nsec;
}; }
# 134 "/usr/include/time.h" 3
extern "C" { struct tm {

int tm_sec;
int tm_min;
int tm_hour;
int tm_mday;
int tm_mon;
int tm_year;
int tm_wday;
int tm_yday;
int tm_isdst;


long tm_gmtoff;
const char *tm_zone;




}; }
# 162 "/usr/include/time.h" 3
extern "C" { struct itimerspec {

timespec it_interval;
timespec it_value;
}; }


struct sigevent;
# 175 "/usr/include/time.h" 3
extern "C" { typedef __pid_t pid_t; }
# 184 "/usr/include/time.h" 3
extern "C" __attribute__((__weak__)) clock_t clock() throw();


extern "C" time_t time(time_t *) throw();


extern "C" double difftime(time_t, time_t) throw() __attribute__((__const__));



extern "C" time_t mktime(tm *) throw();
# 200 "/usr/include/time.h" 3
extern "C" size_t strftime(char *__restrict__, size_t, const char *__restrict__, const tm *__restrict__) throw();
# 208 "/usr/include/time.h" 3
extern "C" char *strptime(const char *__restrict__, const char *__restrict__, tm *) throw();
# 40 "/usr/include/xlocale.h" 3
extern "C" { typedef
# 28 "/usr/include/xlocale.h" 3
struct __locale_struct {


struct locale_data *__locales[13];


const unsigned short *__ctype_b;
const int *__ctype_tolower;
const int *__ctype_toupper;


const char *__names[13];
} *__locale_t; }
# 218 "/usr/include/time.h" 3
extern "C" size_t strftime_l(char *__restrict__, size_t, const char *__restrict__, const tm *__restrict__, __locale_t) throw();




extern "C" char *strptime_l(const char *__restrict__, const char *__restrict__, tm *, __locale_t) throw();
# 232 "/usr/include/time.h" 3
extern "C" tm *gmtime(const time_t *) throw();



extern "C" tm *localtime(const time_t *) throw();
# 242 "/usr/include/time.h" 3
extern "C" tm *gmtime_r(const time_t *__restrict__, tm *__restrict__) throw();




extern "C" tm *localtime_r(const time_t *__restrict__, tm *__restrict__) throw();
# 254 "/usr/include/time.h" 3
extern "C" char *asctime(const tm *) throw();


extern "C" char *ctime(const time_t *) throw();
# 265 "/usr/include/time.h" 3
extern "C" char *asctime_r(const tm *__restrict__, char *__restrict__) throw();



extern "C" char *ctime_r(const time_t *__restrict__, char *__restrict__) throw();
# 275 "/usr/include/time.h" 3
extern "C" { extern char *__tzname[2]; }
extern "C" { extern int __daylight; }
extern "C" { extern long __timezone; }




extern "C" { extern char *tzname[2]; }



extern "C" void tzset() throw();



extern "C" { extern int daylight; }
extern "C" { extern long timezone; }
# 297 "/usr/include/time.h" 3
extern "C" int stime(const time_t *) throw();
# 312 "/usr/include/time.h" 3
extern "C" time_t timegm(tm *) throw();


extern "C" time_t timelocal(tm *) throw();


extern "C" int dysize(int) throw() __attribute__((__const__));
# 327 "/usr/include/time.h" 3
extern "C" int nanosleep(const timespec *, timespec *);




extern "C" int clock_getres(clockid_t, timespec *) throw();


extern "C" int clock_gettime(clockid_t, timespec *) throw();


extern "C" int clock_settime(clockid_t, const timespec *) throw();
# 346 "/usr/include/time.h" 3
extern "C" int clock_nanosleep(clockid_t, int, const timespec *, timespec *);




extern "C" int clock_getcpuclockid(pid_t, clockid_t *) throw();




extern "C" int timer_create(clockid_t, sigevent *__restrict__, timer_t *__restrict__) throw();




extern "C" int timer_delete(timer_t) throw();


extern "C" int timer_settime(timer_t, int, const itimerspec *__restrict__, itimerspec *__restrict__) throw();




extern "C" int timer_gettime(timer_t, itimerspec *) throw();



extern "C" int timer_getoverrun(timer_t) throw();
# 389 "/usr/include/time.h" 3
extern "C" { extern int getdate_err; }
# 398 "/usr/include/time.h" 3
extern "C" tm *getdate(const char *);
# 412 "/usr/include/time.h" 3
extern "C" int getdate_r(const char *__restrict__, tm *__restrict__);
# 38 "/usr/include/string.h" 3
extern "C" { extern inline __attribute__((__weak__)) void *memcpy(void *__restrict__, const void *__restrict__, size_t) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }




extern "C" { extern inline void *memmove(void *, const void *, size_t) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }
# 51 "/usr/include/string.h" 3
extern "C" void *memccpy(void *__restrict__, const void *__restrict__, int, size_t) throw();
# 59 "/usr/include/string.h" 3
extern "C" { extern inline __attribute__((__weak__)) void *memset(void *, int, size_t) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }


extern "C" int memcmp(const void *, const void *, size_t) throw() __attribute__((__pure__));



extern "C" void *memchr(const void *, int, size_t) throw() __attribute__((__pure__));
# 73 "/usr/include/string.h" 3
extern "C" void *rawmemchr(const void *, int) throw() __attribute__((__pure__));



extern "C" void *memrchr(const void *, int, size_t) throw() __attribute__((__pure__));
# 84 "/usr/include/string.h" 3
extern "C" { extern inline char *strcpy(char *__restrict__, const char *__restrict__) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }


extern "C" { extern inline char *strncpy(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }




extern "C" { extern inline char *strcat(char *__restrict__, const char *__restrict__) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }


extern "C" { extern inline char *strncat(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }



extern "C" int strcmp(const char *, const char *) throw() __attribute__((__pure__));


extern "C" int strncmp(const char *, const char *, size_t) throw() __attribute__((__pure__));



extern "C" int strcoll(const char *, const char *) throw() __attribute__((__pure__));


extern "C" size_t strxfrm(char *__restrict__, const char *__restrict__, size_t) throw();
# 121 "/usr/include/string.h" 3
extern "C" int strcoll_l(const char *, const char *, __locale_t) throw() __attribute__((__pure__));


extern "C" size_t strxfrm_l(char *, const char *, size_t, __locale_t) throw();
# 130 "/usr/include/string.h" 3
extern "C" char *strdup(const char *) throw() __attribute__((__malloc__));
# 138 "/usr/include/string.h" 3
extern "C" char *strndup(const char *, size_t) throw() __attribute__((__malloc__));
# 167 "/usr/include/string.h" 3
extern "C" char *strchr(const char *, int) throw() __attribute__((__pure__));


extern "C" char *strrchr(const char *, int) throw() __attribute__((__pure__));
# 177 "/usr/include/string.h" 3
extern "C" char *strchrnul(const char *, int) throw() __attribute__((__pure__));
# 184 "/usr/include/string.h" 3
extern "C" size_t strcspn(const char *, const char *) throw() __attribute__((__pure__));



extern "C" size_t strspn(const char *, const char *) throw() __attribute__((__pure__));


extern "C" char *strpbrk(const char *, const char *) throw() __attribute__((__pure__));


extern "C" char *strstr(const char *, const char *) throw() __attribute__((__pure__));




extern "C" char *strtok(char *__restrict__, const char *__restrict__) throw();
# 205 "/usr/include/string.h" 3
extern "C" char *__strtok_r(char *__restrict__, const char *__restrict__, char **__restrict__) throw();




extern "C" char *strtok_r(char *__restrict__, const char *__restrict__, char **__restrict__) throw();
# 217 "/usr/include/string.h" 3
extern "C" char *strcasestr(const char *, const char *) throw() __attribute__((__pure__));
# 225 "/usr/include/string.h" 3
extern "C" void *memmem(const void *, size_t, const void *, size_t) throw() __attribute__((__pure__));
# 231 "/usr/include/string.h" 3
extern "C" void *__mempcpy(void *__restrict__, const void *__restrict__, size_t) throw();


extern "C" { extern inline void *mempcpy(void *__restrict__, const void *__restrict__, size_t) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }
# 242 "/usr/include/string.h" 3
extern "C" size_t strlen(const char *) throw() __attribute__((__pure__));
# 249 "/usr/include/string.h" 3
extern "C" size_t strnlen(const char *, size_t) throw() __attribute__((__pure__));
# 256 "/usr/include/string.h" 3
extern "C" char *strerror(int) throw();
# 281 "/usr/include/string.h" 3
extern "C" char *strerror_r(int, char *, size_t) throw();
# 288 "/usr/include/string.h" 3
extern "C" char *strerror_l(int, __locale_t) throw();
# 294 "/usr/include/string.h" 3
extern "C" void __bzero(void *, size_t) throw();



extern "C" { extern inline void bcopy(const void *, void *, size_t) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }



extern "C" { extern inline void bzero(void *, size_t) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }


extern "C" int bcmp(const void *, const void *, size_t) throw() __attribute__((__pure__));



extern "C" char *index(const char *, int) throw() __attribute__((__pure__));



extern "C" char *rindex(const char *, int) throw() __attribute__((__pure__));




extern "C" int ffs(int) throw() __attribute__((__const__));




extern "C" int ffsl(long) throw() __attribute__((__const__));

extern "C" int ffsll(long long) throw() __attribute__((__const__));
# 331 "/usr/include/string.h" 3
extern "C" int strcasecmp(const char *, const char *) throw() __attribute__((__pure__));



extern "C" int strncasecmp(const char *, const char *, size_t) throw() __attribute__((__pure__));
# 342 "/usr/include/string.h" 3
extern "C" int strcasecmp_l(const char *, const char *, __locale_t) throw() __attribute__((__pure__));



extern "C" int strncasecmp_l(const char *, const char *, size_t, __locale_t) throw() __attribute__((__pure__));
# 354 "/usr/include/string.h" 3
extern "C" char *strsep(char **__restrict__, const char *__restrict__) throw();
# 361 "/usr/include/string.h" 3
extern "C" int strverscmp(const char *, const char *) throw() __attribute__((__pure__));



extern "C" char *strsignal(int) throw();


extern "C" char *__stpcpy(char *__restrict__, const char *__restrict__) throw();

extern "C" { extern inline char *stpcpy(char *__restrict__, const char *__restrict__) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }




extern "C" char *__stpncpy(char *__restrict__, const char *__restrict__, size_t) throw();


extern "C" { extern inline char *stpncpy(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }




extern "C" char *strfry(char *) throw();


extern "C" void *memfrob(void *, size_t) throw();
# 393 "/usr/include/string.h" 3
extern "C" char *basename(const char *) throw();
# 23 "/usr/include/bits/string3.h" 3
extern "C" void __warn_memset_zero_len();
# 49 "/usr/include/bits/string3.h" 3
extern "C" { inline __attribute__((__weak__)) __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) void *memcpy(void *__restrict__ __dest, const void *__restrict__ __src, size_t __len) throw()

{
return __builtin___memcpy_chk(__dest, __src, __len, __builtin_object_size(__dest, 0));
} }


extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) void *memmove(void *__restrict__ __dest, const void *__restrict__ __src, size_t __len) throw()

{
return __builtin___memmove_chk(__dest, __src, __len, __builtin_object_size(__dest, 0));
} }



extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) void *mempcpy(void *__restrict__ __dest, const void *__restrict__ __src, size_t __len) throw()

{
return __builtin___mempcpy_chk(__dest, __src, __len, __builtin_object_size(__dest, 0));
} }
# 78 "/usr/include/bits/string3.h" 3
extern "C" { inline __attribute__((__weak__)) __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) void *memset(void *__dest, int __ch, size_t __len) throw()
{
if ((__builtin_constant_p(__len)) && (__len == (0)))
{
__warn_memset_zero_len();
return __dest;
}
return __builtin___memset_chk(__dest, __ch, __len, __builtin_object_size(__dest, 0));
} }



extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) void bcopy(const void *__restrict__ __src, void *__restrict__ __dest, size_t __len) throw()

{
(void)__builtin___memmove_chk(__dest, __src, __len, __builtin_object_size(__dest, 0));
} }


extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) void bzero(void *__dest, size_t __len) throw()
{
(void)__builtin___memset_chk(__dest, '\000', __len, __builtin_object_size(__dest, 0));
} }



extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) char *strcpy(char *__restrict__ __dest, const char *__restrict__ __src) throw()
{
return __builtin___strcpy_chk(__dest, __src, __builtin_object_size(__dest, 2 > 1));
} }



extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) char *stpcpy(char *__restrict__ __dest, const char *__restrict__ __src) throw()
{
return __builtin___stpcpy_chk(__dest, __src, __builtin_object_size(__dest, 2 > 1));
} }




extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) char *strncpy(char *__restrict__ __dest, const char *__restrict__ __src, size_t __len) throw()

{
return __builtin___strncpy_chk(__dest, __src, __len, __builtin_object_size(__dest, 2 > 1));
} }


extern "C" char *__stpncpy_chk(char *, const char *, size_t, size_t) throw();

extern "C" char *__stpncpy_alias(char *, const char *, size_t) throw() __asm__("stpncpy");




extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) char *stpncpy(char *__dest, const char *__src, size_t __n) throw()
{
if ((__builtin_object_size(__dest, 2 > 1) != ((size_t)(-1))) && ((!(__builtin_constant_p(__n))) || (__n <= __builtin_object_size(__dest, 2 > 1)))) {

return __stpncpy_chk(__dest, __src, __n, __builtin_object_size(__dest, 2 > 1)); }
return __stpncpy_alias(__dest, __src, __n);
} }



extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) char *strcat(char *__restrict__ __dest, const char *__restrict__ __src) throw()
{
return __builtin___strcat_chk(__dest, __src, __builtin_object_size(__dest, 2 > 1));
} }



extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) char *strncat(char *__restrict__ __dest, const char *__restrict__ __src, size_t __len) throw()

{
return __builtin___strncat_chk(__dest, __src, __len, __builtin_object_size(__dest, 2 > 1));
} }
# 56 "/home/normal/cuda/bin/../include/common_functions.h"
extern "C" __attribute__((__weak__)) clock_t clock() throw();


extern "C" { extern inline __attribute__((__weak__)) void *memset(void *, int, size_t) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }


extern "C" { extern inline __attribute__((__weak__)) void *memcpy(void *, const void *, size_t) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }
# 65 "/home/normal/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) int abs(int) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) long labs(long) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) long long llabs(long long) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) double fabs(double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) float fabsf(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) int min(int, int);

extern "C" __attribute__((__weak__)) unsigned umin(unsigned, unsigned);

extern "C" __attribute__((__weak__)) float fminf(float, float) throw();

extern "C" __attribute__((__weak__)) double fmin(double, double) throw();


extern "C" __attribute__((__weak__)) int max(int, int);

extern "C" __attribute__((__weak__)) unsigned umax(unsigned, unsigned);

extern "C" __attribute__((__weak__)) float fmaxf(float, float) throw();

extern "C" __attribute__((__weak__)) double fmax(double, double) throw();


extern "C" __attribute__((__weak__)) double sin(double) throw();

extern "C" __attribute__((__weak__)) float sinf(float) throw();


extern "C" __attribute__((__weak__)) double cos(double) throw();

extern "C" __attribute__((__weak__)) float cosf(float) throw();


extern "C" __attribute__((__weak__)) void sincos(double, double *, double *) throw();

extern "C" __attribute__((__weak__)) void sincosf(float, float *, float *) throw();


extern "C" __attribute__((__weak__)) double tan(double) throw();

extern "C" __attribute__((__weak__)) float tanf(float) throw();


extern "C" __attribute__((__weak__)) double sqrt(double) throw();

extern "C" __attribute__((__weak__)) float sqrtf(float) throw();


extern "C" __attribute__((__weak__)) double rsqrt(double);

extern "C" __attribute__((__weak__)) float rsqrtf(float);


extern "C" __attribute__((__weak__)) double exp2(double) throw();

extern "C" __attribute__((__weak__)) float exp2f(float) throw();


extern "C" __attribute__((__weak__)) double exp10(double) throw();

extern "C" __attribute__((__weak__)) float exp10f(float) throw();


extern "C" __attribute__((__weak__)) double expm1(double) throw();

extern "C" __attribute__((__weak__)) float expm1f(float) throw();


extern "C" __attribute__((__weak__)) double log2(double) throw();

extern "C" __attribute__((__weak__)) float log2f(float) throw();


extern "C" __attribute__((__weak__)) double log10(double) throw();

extern "C" __attribute__((__weak__)) float log10f(float) throw();


extern "C" __attribute__((__weak__)) double log(double) throw();

extern "C" __attribute__((__weak__)) float logf(float) throw();


extern "C" __attribute__((__weak__)) double log1p(double) throw();

extern "C" __attribute__((__weak__)) float log1pf(float) throw();


extern "C" __attribute__((__weak__)) double floor(double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) float floorf(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) double exp(double) throw();

extern "C" __attribute__((__weak__)) float expf(float) throw();


extern "C" __attribute__((__weak__)) double cosh(double) throw();

extern "C" __attribute__((__weak__)) float coshf(float) throw();


extern "C" __attribute__((__weak__)) double sinh(double) throw();

extern "C" __attribute__((__weak__)) float sinhf(float) throw();


extern "C" __attribute__((__weak__)) double tanh(double) throw();

extern "C" __attribute__((__weak__)) float tanhf(float) throw();


extern "C" __attribute__((__weak__)) double acosh(double) throw();

extern "C" __attribute__((__weak__)) float acoshf(float) throw();


extern "C" __attribute__((__weak__)) double asinh(double) throw();

extern "C" __attribute__((__weak__)) float asinhf(float) throw();


extern "C" __attribute__((__weak__)) double atanh(double) throw();

extern "C" __attribute__((__weak__)) float atanhf(float) throw();


extern "C" __attribute__((__weak__)) double ldexp(double, int) throw();

extern "C" __attribute__((__weak__)) float ldexpf(float, int) throw();


extern "C" __attribute__((__weak__)) double logb(double) throw();

extern "C" __attribute__((__weak__)) float logbf(float) throw();


extern "C" __attribute__((__weak__)) int ilogb(double) throw();

extern "C" __attribute__((__weak__)) int ilogbf(float) throw();


extern "C" __attribute__((__weak__)) double scalbn(double, int) throw();

extern "C" __attribute__((__weak__)) float scalbnf(float, int) throw();


extern "C" __attribute__((__weak__)) double scalbln(double, long) throw();

extern "C" __attribute__((__weak__)) float scalblnf(float, long) throw();


extern "C" __attribute__((__weak__)) double frexp(double, int *) throw();

extern "C" __attribute__((__weak__)) float frexpf(float, int *) throw();


extern "C" __attribute__((__weak__)) double round(double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) float roundf(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) long lround(double) throw();

extern "C" __attribute__((__weak__)) long lroundf(float) throw();


extern "C" __attribute__((__weak__)) long long llround(double) throw();

extern "C" __attribute__((__weak__)) long long llroundf(float) throw();


extern "C" __attribute__((__weak__)) double rint(double) throw();

extern "C" __attribute__((__weak__)) float rintf(float) throw();


extern "C" __attribute__((__weak__)) long lrint(double) throw();

extern "C" __attribute__((__weak__)) long lrintf(float) throw();


extern "C" __attribute__((__weak__)) long long llrint(double) throw();

extern "C" __attribute__((__weak__)) long long llrintf(float) throw();


extern "C" __attribute__((__weak__)) double nearbyint(double) throw();

extern "C" __attribute__((__weak__)) float nearbyintf(float) throw();


extern "C" __attribute__((__weak__)) double ceil(double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) float ceilf(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) double trunc(double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) float truncf(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) double fdim(double, double) throw();

extern "C" __attribute__((__weak__)) float fdimf(float, float) throw();


extern "C" __attribute__((__weak__)) double atan2(double, double) throw();

extern "C" __attribute__((__weak__)) float atan2f(float, float) throw();


extern "C" __attribute__((__weak__)) double atan(double) throw();

extern "C" __attribute__((__weak__)) float atanf(float) throw();


extern "C" __attribute__((__weak__)) double asin(double) throw();

extern "C" __attribute__((__weak__)) float asinf(float) throw();


extern "C" __attribute__((__weak__)) double acos(double) throw();

extern "C" __attribute__((__weak__)) float acosf(float) throw();


extern "C" __attribute__((__weak__)) double hypot(double, double) throw();

extern "C" __attribute__((__weak__)) float hypotf(float, float) throw();


extern "C" __attribute__((__weak__)) double cbrt(double) throw();

extern "C" __attribute__((__weak__)) float cbrtf(float) throw();


extern "C" __attribute__((__weak__)) double pow(double, double) throw();

extern "C" __attribute__((__weak__)) float powf(float, float) throw();


extern "C" __attribute__((__weak__)) double modf(double, double *) throw();

extern "C" __attribute__((__weak__)) float modff(float, float *) throw();


extern "C" __attribute__((__weak__)) double fmod(double, double) throw();

extern "C" __attribute__((__weak__)) float fmodf(float, float) throw();


extern "C" __attribute__((__weak__)) double remainder(double, double) throw();

extern "C" __attribute__((__weak__)) float remainderf(float, float) throw();


extern "C" __attribute__((__weak__)) double remquo(double, double, int *) throw();

extern "C" __attribute__((__weak__)) float remquof(float, float, int *) throw();


extern "C" __attribute__((__weak__)) double erf(double) throw();

extern "C" __attribute__((__weak__)) float erff(float) throw();


extern "C" __attribute__((__weak__)) double erfinv(double) throw();

extern "C" __attribute__((__weak__)) float erfinvf(float) throw();


extern "C" __attribute__((__weak__)) double erfc(double) throw();

extern "C" __attribute__((__weak__)) float erfcf(float) throw();


extern "C" __attribute__((__weak__)) double erfcinv(double) throw();

extern "C" __attribute__((__weak__)) float erfcinvf(float) throw();


extern "C" __attribute__((__weak__)) double lgamma(double) throw();

extern "C" __attribute__((__weak__)) float lgammaf(float) throw();


extern "C" __attribute__((__weak__)) double tgamma(double) throw();

extern "C" __attribute__((__weak__)) float tgammaf(float) throw();


extern "C" __attribute__((__weak__)) double copysign(double, double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) float copysignf(float, float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) double nextafter(double, double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) float nextafterf(float, float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) double nan(const char *) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) float nanf(const char *) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) int __isinf(double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) int __isinff(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) int __isnan(double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) int __isnanf(float) throw() __attribute__((__const__));
# 400 "/home/normal/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __finite(double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) int __finitef(float) throw() __attribute__((__const__));

extern "C" { extern inline __attribute__((__weak__)) int __signbit(double) throw() __attribute__((__gnu_inline__)) __attribute__((__const__)); }




extern "C" { extern inline __attribute__((__weak__)) int __signbitf(float) throw() __attribute__((__gnu_inline__)) __attribute__((__const__)); }


extern "C" __attribute__((__weak__)) double fma(double, double, double) throw();

extern "C" __attribute__((__weak__)) float fmaf(float, float, float) throw();
# 31 "/usr/include/bits/mathdef.h" 3
extern "C" { typedef float float_t; }
extern "C" { typedef double double_t; }
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double acos(double) throw(); extern "C" double __acos(double) throw();

extern "C" __attribute__((__weak__)) double asin(double) throw(); extern "C" double __asin(double) throw();

extern "C" __attribute__((__weak__)) double atan(double) throw(); extern "C" double __atan(double) throw();

extern "C" __attribute__((__weak__)) double atan2(double, double) throw(); extern "C" double __atan2(double, double) throw();


extern "C" __attribute__((__weak__)) double cos(double) throw(); extern "C" double __cos(double) throw();

extern "C" __attribute__((__weak__)) double sin(double) throw(); extern "C" double __sin(double) throw();

extern "C" __attribute__((__weak__)) double tan(double) throw(); extern "C" double __tan(double) throw();




extern "C" __attribute__((__weak__)) double cosh(double) throw(); extern "C" double __cosh(double) throw();

extern "C" __attribute__((__weak__)) double sinh(double) throw(); extern "C" double __sinh(double) throw();

extern "C" __attribute__((__weak__)) double tanh(double) throw(); extern "C" double __tanh(double) throw();




extern "C" __attribute__((__weak__)) void sincos(double, double *, double *) throw(); extern "C" void __sincos(double, double *, double *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double acosh(double) throw(); extern "C" double __acosh(double) throw();

extern "C" __attribute__((__weak__)) double asinh(double) throw(); extern "C" double __asinh(double) throw();

extern "C" __attribute__((__weak__)) double atanh(double) throw(); extern "C" double __atanh(double) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double exp(double) throw(); extern "C" double __exp(double) throw();


extern "C" __attribute__((__weak__)) double frexp(double, int *) throw(); extern "C" double __frexp(double, int *) throw();


extern "C" __attribute__((__weak__)) double ldexp(double, int) throw(); extern "C" double __ldexp(double, int) throw();


extern "C" __attribute__((__weak__)) double log(double) throw(); extern "C" double __log(double) throw();


extern "C" __attribute__((__weak__)) double log10(double) throw(); extern "C" double __log10(double) throw();


extern "C" __attribute__((__weak__)) double modf(double, double *) throw(); extern "C" double __modf(double, double *) throw();




extern "C" __attribute__((__weak__)) double exp10(double) throw(); extern "C" double __exp10(double) throw();

extern "C" double pow10(double) throw(); extern "C" double __pow10(double) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double expm1(double) throw(); extern "C" double __expm1(double) throw();


extern "C" __attribute__((__weak__)) double log1p(double) throw(); extern "C" double __log1p(double) throw();


extern "C" __attribute__((__weak__)) double logb(double) throw(); extern "C" double __logb(double) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double exp2(double) throw(); extern "C" double __exp2(double) throw();


extern "C" __attribute__((__weak__)) double log2(double) throw(); extern "C" double __log2(double) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double pow(double, double) throw(); extern "C" double __pow(double, double) throw();


extern "C" __attribute__((__weak__)) double sqrt(double) throw(); extern "C" double __sqrt(double) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double hypot(double, double) throw(); extern "C" double __hypot(double, double) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double cbrt(double) throw(); extern "C" double __cbrt(double) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double ceil(double) throw() __attribute__((__const__)); extern "C" double __ceil(double) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) double fabs(double) throw() __attribute__((__const__)); extern "C" double __fabs(double) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) double floor(double) throw() __attribute__((__const__)); extern "C" double __floor(double) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) double fmod(double, double) throw(); extern "C" double __fmod(double, double) throw();




extern "C" __attribute__((__weak__)) int __isinf(double) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) int __finite(double) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinf(double) throw() __attribute__((__const__));


extern "C" int finite(double) throw() __attribute__((__const__));


extern "C" double drem(double, double) throw(); extern "C" double __drem(double, double) throw();



extern "C" double significand(double) throw(); extern "C" double __significand(double) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double copysign(double, double) throw() __attribute__((__const__)); extern "C" double __copysign(double, double) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double nan(const char *) throw() __attribute__((__const__)); extern "C" double __nan(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int __isnan(double) throw() __attribute__((__const__));



extern "C" int isnan(double) throw() __attribute__((__const__));


extern "C" double j0(double) throw(); extern "C" double __j0(double) throw();
extern "C" double j1(double) throw(); extern "C" double __j1(double) throw();
extern "C" double jn(int, double) throw(); extern "C" double __jn(int, double) throw();
extern "C" double y0(double) throw(); extern "C" double __y0(double) throw();
extern "C" double y1(double) throw(); extern "C" double __y1(double) throw();
extern "C" double yn(int, double) throw(); extern "C" double __yn(int, double) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double erf(double) throw(); extern "C" double __erf(double) throw();
extern "C" __attribute__((__weak__)) double erfc(double) throw(); extern "C" double __erfc(double) throw();
extern "C" __attribute__((__weak__)) double lgamma(double) throw(); extern "C" double __lgamma(double) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double tgamma(double) throw(); extern "C" double __tgamma(double) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" double gamma(double) throw(); extern "C" double __gamma(double) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" double lgamma_r(double, int *) throw(); extern "C" double __lgamma_r(double, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double rint(double) throw(); extern "C" double __rint(double) throw();


extern "C" __attribute__((__weak__)) double nextafter(double, double) throw() __attribute__((__const__)); extern "C" double __nextafter(double, double) throw() __attribute__((__const__));

extern "C" double nexttoward(double, long double) throw() __attribute__((__const__)); extern "C" double __nexttoward(double, long double) throw() __attribute__((__const__));



extern "C" __attribute__((__weak__)) double remainder(double, double) throw(); extern "C" double __remainder(double, double) throw();



extern "C" __attribute__((__weak__)) double scalbn(double, int) throw(); extern "C" double __scalbn(double, int) throw();



extern "C" __attribute__((__weak__)) int ilogb(double) throw(); extern "C" int __ilogb(double) throw();




extern "C" __attribute__((__weak__)) double scalbln(double, long) throw(); extern "C" double __scalbln(double, long) throw();



extern "C" __attribute__((__weak__)) double nearbyint(double) throw(); extern "C" double __nearbyint(double) throw();



extern "C" __attribute__((__weak__)) double round(double) throw() __attribute__((__const__)); extern "C" double __round(double) throw() __attribute__((__const__));



extern "C" __attribute__((__weak__)) double trunc(double) throw() __attribute__((__const__)); extern "C" double __trunc(double) throw() __attribute__((__const__));




extern "C" __attribute__((__weak__)) double remquo(double, double, int *) throw(); extern "C" double __remquo(double, double, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) long lrint(double) throw(); extern "C" long __lrint(double) throw();
extern "C" __attribute__((__weak__)) long long llrint(double) throw(); extern "C" long long __llrint(double) throw();



extern "C" __attribute__((__weak__)) long lround(double) throw(); extern "C" long __lround(double) throw();
extern "C" __attribute__((__weak__)) long long llround(double) throw(); extern "C" long long __llround(double) throw();



extern "C" __attribute__((__weak__)) double fdim(double, double) throw(); extern "C" double __fdim(double, double) throw();


extern "C" __attribute__((__weak__)) double fmax(double, double) throw(); extern "C" double __fmax(double, double) throw();


extern "C" __attribute__((__weak__)) double fmin(double, double) throw(); extern "C" double __fmin(double, double) throw();



extern "C" int __fpclassify(double) throw() __attribute__((__const__));



extern "C" { extern inline __attribute__((__weak__)) int __signbit(double) throw() __attribute__((__gnu_inline__)) __attribute__((__const__)); }




extern "C" __attribute__((__weak__)) double fma(double, double, double) throw(); extern "C" double __fma(double, double, double) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" double scalb(double, double) throw(); extern "C" double __scalb(double, double) throw();
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float acosf(float) throw(); extern "C" float __acosf(float) throw();

extern "C" __attribute__((__weak__)) float asinf(float) throw(); extern "C" float __asinf(float) throw();

extern "C" __attribute__((__weak__)) float atanf(float) throw(); extern "C" float __atanf(float) throw();

extern "C" __attribute__((__weak__)) float atan2f(float, float) throw(); extern "C" float __atan2f(float, float) throw();


extern "C" __attribute__((__weak__)) float cosf(float) throw();

extern "C" __attribute__((__weak__)) float sinf(float) throw();

extern "C" __attribute__((__weak__)) float tanf(float) throw();




extern "C" __attribute__((__weak__)) float coshf(float) throw(); extern "C" float __coshf(float) throw();

extern "C" __attribute__((__weak__)) float sinhf(float) throw(); extern "C" float __sinhf(float) throw();

extern "C" __attribute__((__weak__)) float tanhf(float) throw(); extern "C" float __tanhf(float) throw();




extern "C" __attribute__((__weak__)) void sincosf(float, float *, float *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float acoshf(float) throw(); extern "C" float __acoshf(float) throw();

extern "C" __attribute__((__weak__)) float asinhf(float) throw(); extern "C" float __asinhf(float) throw();

extern "C" __attribute__((__weak__)) float atanhf(float) throw(); extern "C" float __atanhf(float) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float expf(float) throw();


extern "C" __attribute__((__weak__)) float frexpf(float, int *) throw(); extern "C" float __frexpf(float, int *) throw();


extern "C" __attribute__((__weak__)) float ldexpf(float, int) throw(); extern "C" float __ldexpf(float, int) throw();


extern "C" __attribute__((__weak__)) float logf(float) throw();


extern "C" __attribute__((__weak__)) float log10f(float) throw();


extern "C" __attribute__((__weak__)) float modff(float, float *) throw(); extern "C" float __modff(float, float *) throw();




extern "C" __attribute__((__weak__)) float exp10f(float) throw();

extern "C" float pow10f(float) throw(); extern "C" float __pow10f(float) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float expm1f(float) throw(); extern "C" float __expm1f(float) throw();


extern "C" __attribute__((__weak__)) float log1pf(float) throw(); extern "C" float __log1pf(float) throw();


extern "C" __attribute__((__weak__)) float logbf(float) throw(); extern "C" float __logbf(float) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float exp2f(float) throw(); extern "C" float __exp2f(float) throw();


extern "C" __attribute__((__weak__)) float log2f(float) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float powf(float, float) throw();


extern "C" __attribute__((__weak__)) float sqrtf(float) throw(); extern "C" float __sqrtf(float) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float hypotf(float, float) throw(); extern "C" float __hypotf(float, float) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float cbrtf(float) throw(); extern "C" float __cbrtf(float) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float ceilf(float) throw() __attribute__((__const__)); extern "C" float __ceilf(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) float fabsf(float) throw() __attribute__((__const__)); extern "C" float __fabsf(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) float floorf(float) throw() __attribute__((__const__)); extern "C" float __floorf(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) float fmodf(float, float) throw(); extern "C" float __fmodf(float, float) throw();




extern "C" __attribute__((__weak__)) int __isinff(float) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) int __finitef(float) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinff(float) throw() __attribute__((__const__));


extern "C" int finitef(float) throw() __attribute__((__const__));


extern "C" float dremf(float, float) throw(); extern "C" float __dremf(float, float) throw();



extern "C" float significandf(float) throw(); extern "C" float __significandf(float) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float copysignf(float, float) throw() __attribute__((__const__)); extern "C" float __copysignf(float, float) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float nanf(const char *) throw() __attribute__((__const__)); extern "C" float __nanf(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int __isnanf(float) throw() __attribute__((__const__));



extern "C" int isnanf(float) throw() __attribute__((__const__));


extern "C" float j0f(float) throw(); extern "C" float __j0f(float) throw();
extern "C" float j1f(float) throw(); extern "C" float __j1f(float) throw();
extern "C" float jnf(int, float) throw(); extern "C" float __jnf(int, float) throw();
extern "C" float y0f(float) throw(); extern "C" float __y0f(float) throw();
extern "C" float y1f(float) throw(); extern "C" float __y1f(float) throw();
extern "C" float ynf(int, float) throw(); extern "C" float __ynf(int, float) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float erff(float) throw(); extern "C" float __erff(float) throw();
extern "C" __attribute__((__weak__)) float erfcf(float) throw(); extern "C" float __erfcf(float) throw();
extern "C" __attribute__((__weak__)) float lgammaf(float) throw(); extern "C" float __lgammaf(float) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float tgammaf(float) throw(); extern "C" float __tgammaf(float) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" float gammaf(float) throw(); extern "C" float __gammaf(float) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" float lgammaf_r(float, int *) throw(); extern "C" float __lgammaf_r(float, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float rintf(float) throw(); extern "C" float __rintf(float) throw();


extern "C" __attribute__((__weak__)) float nextafterf(float, float) throw() __attribute__((__const__)); extern "C" float __nextafterf(float, float) throw() __attribute__((__const__));

extern "C" float nexttowardf(float, long double) throw() __attribute__((__const__)); extern "C" float __nexttowardf(float, long double) throw() __attribute__((__const__));



extern "C" __attribute__((__weak__)) float remainderf(float, float) throw(); extern "C" float __remainderf(float, float) throw();



extern "C" __attribute__((__weak__)) float scalbnf(float, int) throw(); extern "C" float __scalbnf(float, int) throw();



extern "C" __attribute__((__weak__)) int ilogbf(float) throw(); extern "C" int __ilogbf(float) throw();




extern "C" __attribute__((__weak__)) float scalblnf(float, long) throw(); extern "C" float __scalblnf(float, long) throw();



extern "C" __attribute__((__weak__)) float nearbyintf(float) throw(); extern "C" float __nearbyintf(float) throw();



extern "C" __attribute__((__weak__)) float roundf(float) throw() __attribute__((__const__)); extern "C" float __roundf(float) throw() __attribute__((__const__));



extern "C" __attribute__((__weak__)) float truncf(float) throw() __attribute__((__const__)); extern "C" float __truncf(float) throw() __attribute__((__const__));




extern "C" __attribute__((__weak__)) float remquof(float, float, int *) throw(); extern "C" float __remquof(float, float, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) long lrintf(float) throw(); extern "C" long __lrintf(float) throw();
extern "C" __attribute__((__weak__)) long long llrintf(float) throw(); extern "C" long long __llrintf(float) throw();



extern "C" __attribute__((__weak__)) long lroundf(float) throw(); extern "C" long __lroundf(float) throw();
extern "C" __attribute__((__weak__)) long long llroundf(float) throw(); extern "C" long long __llroundf(float) throw();



extern "C" __attribute__((__weak__)) float fdimf(float, float) throw(); extern "C" float __fdimf(float, float) throw();


extern "C" __attribute__((__weak__)) float fmaxf(float, float) throw(); extern "C" float __fmaxf(float, float) throw();


extern "C" __attribute__((__weak__)) float fminf(float, float) throw(); extern "C" float __fminf(float, float) throw();



extern "C" int __fpclassifyf(float) throw() __attribute__((__const__));



extern "C" { extern inline __attribute__((__weak__)) int __signbitf(float) throw() __attribute__((__gnu_inline__)) __attribute__((__const__)); }




extern "C" __attribute__((__weak__)) float fmaf(float, float, float) throw(); extern "C" float __fmaf(float, float, float) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" float scalbf(float, float) throw(); extern "C" float __scalbf(float, float) throw();
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" long double acosl(long double) throw(); extern "C" long double __acosl(long double) throw();

extern "C" long double asinl(long double) throw(); extern "C" long double __asinl(long double) throw();

extern "C" long double atanl(long double) throw(); extern "C" long double __atanl(long double) throw();

extern "C" long double atan2l(long double, long double) throw(); extern "C" long double __atan2l(long double, long double) throw();


extern "C" long double cosl(long double) throw(); extern "C" long double __cosl(long double) throw();

extern "C" long double sinl(long double) throw(); extern "C" long double __sinl(long double) throw();

extern "C" long double tanl(long double) throw(); extern "C" long double __tanl(long double) throw();




extern "C" long double coshl(long double) throw(); extern "C" long double __coshl(long double) throw();

extern "C" long double sinhl(long double) throw(); extern "C" long double __sinhl(long double) throw();

extern "C" long double tanhl(long double) throw(); extern "C" long double __tanhl(long double) throw();




extern "C" void sincosl(long double, long double *, long double *) throw(); extern "C" void __sincosl(long double, long double *, long double *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" long double acoshl(long double) throw(); extern "C" long double __acoshl(long double) throw();

extern "C" long double asinhl(long double) throw(); extern "C" long double __asinhl(long double) throw();

extern "C" long double atanhl(long double) throw(); extern "C" long double __atanhl(long double) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" long double expl(long double) throw(); extern "C" long double __expl(long double) throw();


extern "C" long double frexpl(long double, int *) throw(); extern "C" long double __frexpl(long double, int *) throw();


extern "C" long double ldexpl(long double, int) throw(); extern "C" long double __ldexpl(long double, int) throw();


extern "C" long double logl(long double) throw(); extern "C" long double __logl(long double) throw();


extern "C" long double log10l(long double) throw(); extern "C" long double __log10l(long double) throw();


extern "C" long double modfl(long double, long double *) throw(); extern "C" long double __modfl(long double, long double *) throw();




extern "C" long double exp10l(long double) throw(); extern "C" long double __exp10l(long double) throw();

extern "C" long double pow10l(long double) throw(); extern "C" long double __pow10l(long double) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" long double expm1l(long double) throw(); extern "C" long double __expm1l(long double) throw();


extern "C" long double log1pl(long double) throw(); extern "C" long double __log1pl(long double) throw();


extern "C" long double logbl(long double) throw(); extern "C" long double __logbl(long double) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" long double exp2l(long double) throw(); extern "C" long double __exp2l(long double) throw();


extern "C" long double log2l(long double) throw(); extern "C" long double __log2l(long double) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" long double powl(long double, long double) throw(); extern "C" long double __powl(long double, long double) throw();


extern "C" long double sqrtl(long double) throw(); extern "C" long double __sqrtl(long double) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" long double hypotl(long double, long double) throw(); extern "C" long double __hypotl(long double, long double) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" long double cbrtl(long double) throw(); extern "C" long double __cbrtl(long double) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ceill(long double) throw() __attribute__((__const__)); extern "C" long double __ceill(long double) throw() __attribute__((__const__));


extern "C" long double fabsl(long double) throw() __attribute__((__const__)); extern "C" long double __fabsl(long double) throw() __attribute__((__const__));


extern "C" long double floorl(long double) throw() __attribute__((__const__)); extern "C" long double __floorl(long double) throw() __attribute__((__const__));


extern "C" long double fmodl(long double, long double) throw(); extern "C" long double __fmodl(long double, long double) throw();




extern "C" __attribute__((__weak__)) int __isinfl(long double) throw() __attribute__((__const__));


extern "C" __attribute__((__weak__)) int __finitel(long double) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinfl(long double) throw() __attribute__((__const__));


extern "C" int finitel(long double) throw() __attribute__((__const__));


extern "C" long double dreml(long double, long double) throw(); extern "C" long double __dreml(long double, long double) throw();



extern "C" long double significandl(long double) throw(); extern "C" long double __significandl(long double) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" long double copysignl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __copysignl(long double, long double) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nanl(const char *) throw() __attribute__((__const__)); extern "C" long double __nanl(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int __isnanl(long double) throw() __attribute__((__const__));



extern "C" int isnanl(long double) throw() __attribute__((__const__));


extern "C" long double j0l(long double) throw(); extern "C" long double __j0l(long double) throw();
extern "C" long double j1l(long double) throw(); extern "C" long double __j1l(long double) throw();
extern "C" long double jnl(int, long double) throw(); extern "C" long double __jnl(int, long double) throw();
extern "C" long double y0l(long double) throw(); extern "C" long double __y0l(long double) throw();
extern "C" long double y1l(long double) throw(); extern "C" long double __y1l(long double) throw();
extern "C" long double ynl(int, long double) throw(); extern "C" long double __ynl(int, long double) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" long double erfl(long double) throw(); extern "C" long double __erfl(long double) throw();
extern "C" long double erfcl(long double) throw(); extern "C" long double __erfcl(long double) throw();
extern "C" long double lgammal(long double) throw(); extern "C" long double __lgammal(long double) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tgammal(long double) throw(); extern "C" long double __tgammal(long double) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" long double gammal(long double) throw(); extern "C" long double __gammal(long double) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" long double lgammal_r(long double, int *) throw(); extern "C" long double __lgammal_r(long double, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" long double rintl(long double) throw(); extern "C" long double __rintl(long double) throw();


extern "C" long double nextafterl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __nextafterl(long double, long double) throw() __attribute__((__const__));

extern "C" long double nexttowardl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __nexttowardl(long double, long double) throw() __attribute__((__const__));



extern "C" long double remainderl(long double, long double) throw(); extern "C" long double __remainderl(long double, long double) throw();



extern "C" long double scalbnl(long double, int) throw(); extern "C" long double __scalbnl(long double, int) throw();



extern "C" int ilogbl(long double) throw(); extern "C" int __ilogbl(long double) throw();




extern "C" long double scalblnl(long double, long) throw(); extern "C" long double __scalblnl(long double, long) throw();



extern "C" long double nearbyintl(long double) throw(); extern "C" long double __nearbyintl(long double) throw();



extern "C" long double roundl(long double) throw() __attribute__((__const__)); extern "C" long double __roundl(long double) throw() __attribute__((__const__));



extern "C" long double truncl(long double) throw() __attribute__((__const__)); extern "C" long double __truncl(long double) throw() __attribute__((__const__));




extern "C" long double remquol(long double, long double, int *) throw(); extern "C" long double __remquol(long double, long double, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" long lrintl(long double) throw(); extern "C" long __lrintl(long double) throw();
extern "C" long long llrintl(long double) throw(); extern "C" long long __llrintl(long double) throw();



extern "C" long lroundl(long double) throw(); extern "C" long __lroundl(long double) throw();
extern "C" long long llroundl(long double) throw(); extern "C" long long __llroundl(long double) throw();



extern "C" long double fdiml(long double, long double) throw(); extern "C" long double __fdiml(long double, long double) throw();


extern "C" long double fmaxl(long double, long double) throw(); extern "C" long double __fmaxl(long double, long double) throw();


extern "C" long double fminl(long double, long double) throw(); extern "C" long double __fminl(long double, long double) throw();



extern "C" int __fpclassifyl(long double) throw() __attribute__((__const__));



extern "C" { extern inline __attribute__((__weak__)) int __signbitl(long double) throw() __attribute__((__gnu_inline__)) __attribute__((__const__)); }




extern "C" long double fmal(long double, long double, long double) throw(); extern "C" long double __fmal(long double, long double, long double) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalbl(long double, long double) throw(); extern "C" long double __scalbl(long double, long double) throw();
# 157 "/usr/include/math.h" 3
extern "C" { extern int signgam; }
# 199 "/usr/include/math.h" 3
enum __cuda_FP_NAN {
FP_NAN,

FP_INFINITE,

FP_ZERO,

FP_SUBNORMAL,

FP_NORMAL

};
# 291 "/usr/include/math.h" 3
extern "C" { typedef
# 285 "/usr/include/math.h" 3
enum {
_IEEE_ = (-1),
_SVID_,
_XOPEN_,
_POSIX_,
_ISOC_
} _LIB_VERSION_TYPE; }




extern "C" { extern _LIB_VERSION_TYPE _LIB_VERSION; }
# 307 "/usr/include/math.h" 3
extern "C" { struct __exception {




int type;
char *name;
double arg1;
double arg2;
double retval;
}; }


extern "C" int matherr(__exception *) throw();
# 36 "/usr/include/bits/mathinline.h" 3
extern "C" { inline __attribute__((__weak__)) __attribute__((__gnu_inline__)) __attribute__((__const__)) int __signbitf(float __x) throw()
{
auto union { float __f; int __i; } __u = {__f: __x};
return (__u.__i) < 0;
} }

extern "C" { inline __attribute__((__weak__)) __attribute__((__gnu_inline__)) __attribute__((__const__)) int __signbit(double __x) throw()
{
auto union { double __d; int __i[2]; } __u = {__d: __x};
return ((__u.__i)[1]) < 0;
} }

extern "C" { inline __attribute__((__weak__)) __attribute__((__gnu_inline__)) __attribute__((__const__)) int __signbitl(long double __x) throw()
{
auto union { long double __l; int __i[3]; } __u = {__l: __x};
return (((__u.__i)[2]) & 32768) != 0;
} }
# 67 "/usr/include/bits/waitstatus.h" 3
extern "C" { union wait {

int w_status;

struct {

unsigned __w_termsig:7;
unsigned __w_coredump:1;
unsigned __w_retcode:8;
unsigned:16;
# 84 "/usr/include/bits/waitstatus.h" 3
} __wait_terminated;

struct {

unsigned __w_stopval:8;
unsigned __w_stopsig:8;
unsigned:16;
# 97 "/usr/include/bits/waitstatus.h" 3
} __wait_stopped;
}; }
# 102 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 99 "/usr/include/stdlib.h" 3
struct div_t {
int quot;
int rem;
} div_t; }
# 110 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 107 "/usr/include/stdlib.h" 3
struct ldiv_t {
long quot;
long rem;
} ldiv_t; }
# 122 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 119 "/usr/include/stdlib.h" 3
struct lldiv_t {
long long quot;
long long rem;
} lldiv_t; }
# 140 "/usr/include/stdlib.h" 3
extern "C" size_t __ctype_get_mb_cur_max() throw();




extern "C" { extern inline double atof(const char *) throw() __attribute__((__pure__)) __attribute__((__gnu_inline__)); }


extern "C" { extern inline int atoi(const char *) throw() __attribute__((__pure__)) __attribute__((__gnu_inline__)); }


extern "C" { extern inline long atol(const char *) throw() __attribute__((__pure__)) __attribute__((__gnu_inline__)); }
# 158 "/usr/include/stdlib.h" 3
extern "C" { extern inline long long atoll(const char *) throw() __attribute__((__pure__)) __attribute__((__gnu_inline__)); }
# 165 "/usr/include/stdlib.h" 3
extern "C" double strtod(const char *__restrict__, char **__restrict__) throw();
# 173 "/usr/include/stdlib.h" 3
extern "C" float strtof(const char *__restrict__, char **__restrict__) throw();


extern "C" long double strtold(const char *__restrict__, char **__restrict__) throw();
# 184 "/usr/include/stdlib.h" 3
extern "C" long strtol(const char *__restrict__, char **__restrict__, int) throw();



extern "C" unsigned long strtoul(const char *__restrict__, char **__restrict__, int) throw();
# 196 "/usr/include/stdlib.h" 3
extern "C" long long strtoq(const char *__restrict__, char **__restrict__, int) throw();




extern "C" unsigned long long strtouq(const char *__restrict__, char **__restrict__, int) throw();
# 210 "/usr/include/stdlib.h" 3
extern "C" long long strtoll(const char *__restrict__, char **__restrict__, int) throw();




extern "C" unsigned long long strtoull(const char *__restrict__, char **__restrict__, int) throw();
# 240 "/usr/include/stdlib.h" 3
extern "C" long strtol_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw();



extern "C" unsigned long strtoul_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw();
# 250 "/usr/include/stdlib.h" 3
extern "C" long long strtoll_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw();
# 256 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtoull_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw();




extern "C" double strtod_l(const char *__restrict__, char **__restrict__, __locale_t) throw();



extern "C" float strtof_l(const char *__restrict__, char **__restrict__, __locale_t) throw();



extern "C" long double strtold_l(const char *__restrict__, char **__restrict__, __locale_t) throw();
# 279 "/usr/include/stdlib.h" 3
extern "C" { inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) double atof(const char *__nptr) throw()
{
return strtod(__nptr, (char **)__null);
} }

extern "C" { inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) int atoi(const char *__nptr) throw()
{
return (int)strtol(__nptr, (char **)__null, 10);
} }

extern "C" { inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) long atol(const char *__nptr) throw()
{
return strtol(__nptr, (char **)__null, 10);
} }
# 298 "/usr/include/stdlib.h" 3
extern "C" { inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) long long atoll(const char *__nptr) throw()
{
return strtoll(__nptr, (char **)__null, 10);
} }
# 311 "/usr/include/stdlib.h" 3
extern "C" char *l64a(long) throw();


extern "C" long a64l(const char *) throw() __attribute__((__pure__));
# 35 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_char u_char; }
extern "C" { typedef __u_short u_short; }
extern "C" { typedef __u_int u_int; }
extern "C" { typedef __u_long u_long; }
extern "C" { typedef __quad_t quad_t; }
extern "C" { typedef __u_quad_t u_quad_t; }
extern "C" { typedef __fsid_t fsid_t; }




extern "C" { typedef __loff_t loff_t; }



extern "C" { typedef __ino_t ino_t; }
# 57 "/usr/include/sys/types.h" 3
extern "C" { typedef __ino64_t ino64_t; }




extern "C" { typedef __dev_t dev_t; }




extern "C" { typedef __gid_t gid_t; }




extern "C" { typedef __mode_t mode_t; }




extern "C" { typedef __nlink_t nlink_t; }




extern "C" { typedef __uid_t uid_t; }
# 88 "/usr/include/sys/types.h" 3
extern "C" { typedef __off_t off_t; }
# 95 "/usr/include/sys/types.h" 3
extern "C" { typedef __off64_t off64_t; }
# 105 "/usr/include/sys/types.h" 3
extern "C" { typedef __id_t id_t; }




extern "C" { typedef __ssize_t ssize_t; }
# 116 "/usr/include/sys/types.h" 3
extern "C" { typedef __daddr_t daddr_t; }
extern "C" { typedef __caddr_t caddr_t; }
# 123 "/usr/include/sys/types.h" 3
extern "C" { typedef __key_t key_t; }
# 137 "/usr/include/sys/types.h" 3
extern "C" { typedef __useconds_t useconds_t; }



extern "C" { typedef __suseconds_t suseconds_t; }
# 151 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned long ulong; }
extern "C" { typedef unsigned short ushort; }
extern "C" { typedef unsigned uint; }
# 195 "/usr/include/sys/types.h" 3
extern "C" { typedef signed char int8_t; }
extern "C" { typedef short int16_t; }
extern "C" { typedef int int32_t; }
extern "C" { typedef long int64_t; }


extern "C" { typedef unsigned char u_int8_t; }
extern "C" { typedef unsigned short u_int16_t; }
extern "C" { typedef unsigned u_int32_t; }
extern "C" { typedef unsigned long u_int64_t; }

extern "C" { typedef int register_t; }
# 24 "/usr/include/bits/sigset.h" 3
extern "C" { typedef int __sig_atomic_t; }
# 32 "/usr/include/bits/sigset.h" 3
extern "C" { typedef
# 30 "/usr/include/bits/sigset.h" 3
struct __sigset_t {
unsigned long __val[((1024) / ((8) * sizeof(unsigned long)))];
} __sigset_t; }
# 38 "/usr/include/sys/select.h" 3
extern "C" { typedef __sigset_t sigset_t; }
# 69 "/usr/include/bits/time.h" 3
extern "C" { struct timeval {

__time_t tv_sec;
__suseconds_t tv_usec;
}; }
# 55 "/usr/include/sys/select.h" 3
extern "C" { typedef long __fd_mask; }
# 78 "/usr/include/sys/select.h" 3
extern "C" { typedef
# 68 "/usr/include/sys/select.h" 3
struct fd_set {



__fd_mask fds_bits[((1024) / ((8) * sizeof(__fd_mask)))];
# 78 "/usr/include/sys/select.h" 3
} fd_set; }
# 85 "/usr/include/sys/select.h" 3
extern "C" { typedef __fd_mask fd_mask; }
# 109 "/usr/include/sys/select.h" 3
extern "C" int select(int, fd_set *__restrict__, fd_set *__restrict__, fd_set *__restrict__, timeval *__restrict__);
# 121 "/usr/include/sys/select.h" 3
extern "C" int pselect(int, fd_set *__restrict__, fd_set *__restrict__, fd_set *__restrict__, const timespec *__restrict__, const __sigset_t *__restrict__);
# 31 "/usr/include/sys/sysmacros.h" 3
extern "C" { extern inline unsigned gnu_dev_major(unsigned long long) throw() __attribute__((__gnu_inline__)); }


extern "C" { extern inline unsigned gnu_dev_minor(unsigned long long) throw() __attribute__((__gnu_inline__)); }


extern "C" { extern inline unsigned long long gnu_dev_makedev(unsigned, unsigned) throw() __attribute__((__gnu_inline__)); }
# 43 "/usr/include/sys/sysmacros.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) unsigned gnu_dev_major(unsigned long long __dev) throw()
{
return ((__dev >> 8) & (4095)) | (((unsigned)(__dev >> 32)) & (~4095));
} }


extern "C" { inline __attribute__((__gnu_inline__)) unsigned gnu_dev_minor(unsigned long long __dev) throw()
{
return (__dev & (255)) | (((unsigned)(__dev >> 12)) & (~255));
} }


extern "C" { inline __attribute__((__gnu_inline__)) unsigned long long gnu_dev_makedev(unsigned __major, unsigned __minor) throw()
{
return (((__minor & (255)) | ((__major & (4095)) << 8)) | (((unsigned long long)(__minor & (~255))) << 12)) | (((unsigned long long)(__major & (~4095))) << 32);


} }
# 228 "/usr/include/sys/types.h" 3
extern "C" { typedef __blksize_t blksize_t; }
# 235 "/usr/include/sys/types.h" 3
extern "C" { typedef __blkcnt_t blkcnt_t; }



extern "C" { typedef __fsblkcnt_t fsblkcnt_t; }



extern "C" { typedef __fsfilcnt_t fsfilcnt_t; }
# 262 "/usr/include/sys/types.h" 3
extern "C" { typedef __blkcnt64_t blkcnt64_t; }
extern "C" { typedef __fsblkcnt64_t fsblkcnt64_t; }
extern "C" { typedef __fsfilcnt64_t fsfilcnt64_t; }
# 50 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef unsigned long pthread_t; }
# 57 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 54 "/usr/include/bits/pthreadtypes.h" 3
union pthread_attr_t {
char __size[56];
long __align;
} pthread_attr_t; }
# 65 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 61 "/usr/include/bits/pthreadtypes.h" 3
struct __pthread_internal_list {

__pthread_internal_list *__prev;
__pthread_internal_list *__next;
} __pthread_list_t; }
# 104 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 77 "/usr/include/bits/pthreadtypes.h" 3
union pthread_mutex_t {
struct __pthread_mutex_s {

int __lock;
unsigned __count;
int __owner;

unsigned __nusers;



int __kind;

int __spins;
__pthread_list_t __list;
# 101 "/usr/include/bits/pthreadtypes.h" 3
} __data;
char __size[40];
long __align;
} pthread_mutex_t; }
# 110 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 107 "/usr/include/bits/pthreadtypes.h" 3
union pthread_mutexattr_t {
char __size[4];
int __align;
} pthread_mutexattr_t; }
# 130 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 116 "/usr/include/bits/pthreadtypes.h" 3
union pthread_cond_t {

struct {
int __lock;
unsigned __futex;
unsigned long long __total_seq;
unsigned long long __wakeup_seq;
unsigned long long __woken_seq;
void *__mutex;
unsigned __nwaiters;
unsigned __broadcast_seq;
} __data;
char __size[48];
long long __align;
} pthread_cond_t; }
# 136 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 133 "/usr/include/bits/pthreadtypes.h" 3
union pthread_condattr_t {
char __size[4];
int __align;
} pthread_condattr_t; }



extern "C" { typedef unsigned pthread_key_t; }



extern "C" { typedef int pthread_once_t; }
# 189 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 151 "/usr/include/bits/pthreadtypes.h" 3
union pthread_rwlock_t {


struct {
int __lock;
unsigned __nr_readers;
unsigned __readers_wakeup;
unsigned __writer_wakeup;
unsigned __nr_readers_queued;
unsigned __nr_writers_queued;
int __writer;
int __shared;
unsigned long __pad1;
unsigned long __pad2;


unsigned __flags;
} __data;
# 187 "/usr/include/bits/pthreadtypes.h" 3
char __size[56];
long __align;
} pthread_rwlock_t; }
# 195 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 192 "/usr/include/bits/pthreadtypes.h" 3
union pthread_rwlockattr_t {
char __size[8];
long __align;
} pthread_rwlockattr_t; }
# 201 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef volatile int pthread_spinlock_t; }
# 210 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 207 "/usr/include/bits/pthreadtypes.h" 3
union pthread_barrier_t {
char __size[32];
long __align;
} pthread_barrier_t; }
# 216 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 213 "/usr/include/bits/pthreadtypes.h" 3
union pthread_barrierattr_t {
char __size[4];
int __align;
} pthread_barrierattr_t; }
# 327 "/usr/include/stdlib.h" 3
extern "C" long random() throw();


extern "C" void srandom(unsigned) throw();
# 336 "/usr/include/stdlib.h" 3
extern "C" char *initstate(unsigned, char *, size_t) throw();




extern "C" char *setstate(char *) throw();
# 349 "/usr/include/stdlib.h" 3
extern "C" { struct random_data {

int32_t *fptr;
int32_t *rptr;
int32_t *state;
int rand_type;
int rand_deg;
int rand_sep;
int32_t *end_ptr;
}; }

extern "C" int random_r(random_data *__restrict__, int32_t *__restrict__) throw();


extern "C" int srandom_r(unsigned, random_data *) throw();


extern "C" int initstate_r(unsigned, char *__restrict__, size_t, random_data *__restrict__) throw();




extern "C" int setstate_r(char *__restrict__, random_data *__restrict__) throw();
# 380 "/usr/include/stdlib.h" 3
extern "C" int rand() throw();

extern "C" void srand(unsigned) throw();




extern "C" int rand_r(unsigned *) throw();
# 395 "/usr/include/stdlib.h" 3
extern "C" double drand48() throw();
extern "C" double erand48(unsigned short [3]) throw();


extern "C" long lrand48() throw();
extern "C" long nrand48(unsigned short [3]) throw();



extern "C" long mrand48() throw();
extern "C" long jrand48(unsigned short [3]) throw();



extern "C" void srand48(long) throw();
extern "C" unsigned short *seed48(unsigned short [3]) throw();

extern "C" void lcong48(unsigned short [7]) throw();
# 418 "/usr/include/stdlib.h" 3
extern "C" { struct drand48_data {

unsigned short __x[3];
unsigned short __old_x[3];
unsigned short __c;
unsigned short __init;
unsigned long long __a;
}; }


extern "C" int drand48_r(drand48_data *__restrict__, double *__restrict__) throw();

extern "C" int erand48_r(unsigned short [3], drand48_data *__restrict__, double *__restrict__) throw();




extern "C" int lrand48_r(drand48_data *__restrict__, long *__restrict__) throw();


extern "C" int nrand48_r(unsigned short [3], drand48_data *__restrict__, long *__restrict__) throw();
# 444 "/usr/include/stdlib.h" 3
extern "C" int mrand48_r(drand48_data *__restrict__, long *__restrict__) throw();


extern "C" int jrand48_r(unsigned short [3], drand48_data *__restrict__, long *__restrict__) throw();
# 453 "/usr/include/stdlib.h" 3
extern "C" int srand48_r(long, drand48_data *) throw();


extern "C" int seed48_r(unsigned short [3], drand48_data *) throw();


extern "C" int lcong48_r(unsigned short [7], drand48_data *) throw();
# 471 "/usr/include/stdlib.h" 3
extern "C" void *malloc(size_t) throw() __attribute__((__malloc__));

extern "C" void *calloc(size_t, size_t) throw() __attribute__((__malloc__));
# 485 "/usr/include/stdlib.h" 3
extern "C" void *realloc(void *, size_t) throw();


extern "C" void free(void *) throw();




extern "C" void cfree(void *) throw();
# 33 "/usr/include/alloca.h" 3
extern "C" void *alloca(size_t) throw();
# 502 "/usr/include/stdlib.h" 3
extern "C" void *valloc(size_t) throw() __attribute__((__malloc__));




extern "C" int posix_memalign(void **, size_t, size_t) throw();
# 513 "/usr/include/stdlib.h" 3
extern "C" void abort() throw() __attribute__((__noreturn__));



extern "C" int atexit(void (*)(void)) throw();
# 523 "/usr/include/stdlib.h" 3
extern "C" int on_exit(void (*)(int, void *), void *) throw();
# 531 "/usr/include/stdlib.h" 3
extern "C" void exit(int) throw() __attribute__((__noreturn__));
# 538 "/usr/include/stdlib.h" 3
extern "C" void _Exit(int) throw() __attribute__((__noreturn__));
# 545 "/usr/include/stdlib.h" 3
extern "C" char *getenv(const char *) throw();




extern "C" char *__secure_getenv(const char *) throw();
# 557 "/usr/include/stdlib.h" 3
extern "C" int putenv(char *) throw();
# 563 "/usr/include/stdlib.h" 3
extern "C" int setenv(const char *, const char *, int) throw();



extern "C" int unsetenv(const char *) throw();
# 574 "/usr/include/stdlib.h" 3
extern "C" int clearenv() throw();
# 583 "/usr/include/stdlib.h" 3
extern "C" char *mktemp(char *) throw();
# 594 "/usr/include/stdlib.h" 3
extern "C" int mkstemp(char *);
# 604 "/usr/include/stdlib.h" 3
extern "C" int mkstemp64(char *);
# 614 "/usr/include/stdlib.h" 3
extern "C" char *mkdtemp(char *) throw();
# 625 "/usr/include/stdlib.h" 3
extern "C" int mkostemp(char *, int);
# 635 "/usr/include/stdlib.h" 3
extern "C" int mkostemp64(char *, int);
# 645 "/usr/include/stdlib.h" 3
extern "C" int system(const char *);
# 652 "/usr/include/stdlib.h" 3
extern "C" char *canonicalize_file_name(const char *) throw();
# 662 "/usr/include/stdlib.h" 3
extern "C" { extern inline char *realpath(const char *__restrict__, char *__restrict__) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }
# 670 "/usr/include/stdlib.h" 3
extern "C" { typedef int (*__compar_fn_t)(const void *, const void *); }


extern "C" { typedef __compar_fn_t comparison_fn_t; }



extern "C" { typedef int (*__compar_d_fn_t)(const void *, const void *, void *); }
# 683 "/usr/include/stdlib.h" 3
extern "C" void *bsearch(const void *, const void *, size_t, size_t, __compar_fn_t);
# 689 "/usr/include/stdlib.h" 3
extern "C" void qsort(void *, size_t, size_t, __compar_fn_t);


extern "C" void qsort_r(void *, size_t, size_t, __compar_d_fn_t, void *);
# 699 "/usr/include/stdlib.h" 3
extern "C" __attribute__((__weak__)) int abs(int) throw() __attribute__((__const__));
extern "C" __attribute__((__weak__)) long labs(long) throw() __attribute__((__const__));



extern "C" __attribute__((__weak__)) long long llabs(long long) throw() __attribute__((__const__));
# 713 "/usr/include/stdlib.h" 3
extern "C" div_t div(int, int) throw() __attribute__((__const__));

extern "C" ldiv_t ldiv(long, long) throw() __attribute__((__const__));
# 721 "/usr/include/stdlib.h" 3
extern "C" lldiv_t lldiv(long long, long long) throw() __attribute__((__const__));
# 735 "/usr/include/stdlib.h" 3
extern "C" char *ecvt(double, int, int *__restrict__, int *__restrict__) throw();
# 741 "/usr/include/stdlib.h" 3
extern "C" char *fcvt(double, int, int *__restrict__, int *__restrict__) throw();
# 747 "/usr/include/stdlib.h" 3
extern "C" char *gcvt(double, int, char *) throw();
# 753 "/usr/include/stdlib.h" 3
extern "C" char *qecvt(long double, int, int *__restrict__, int *__restrict__) throw();


extern "C" char *qfcvt(long double, int, int *__restrict__, int *__restrict__) throw();


extern "C" char *qgcvt(long double, int, char *) throw();
# 765 "/usr/include/stdlib.h" 3
extern "C" int ecvt_r(double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw();


extern "C" int fcvt_r(double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw();



extern "C" int qecvt_r(long double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw();



extern "C" int qfcvt_r(long double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw();
# 787 "/usr/include/stdlib.h" 3
extern "C" int mblen(const char *, size_t) throw();


extern "C" int mbtowc(wchar_t *__restrict__, const char *__restrict__, size_t) throw();



extern "C" { extern inline int wctomb(char *, wchar_t) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }



extern "C" { extern inline size_t mbstowcs(wchar_t *__restrict__, const char *__restrict__, size_t) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }


extern "C" { extern inline size_t wcstombs(char *__restrict__, const wchar_t *__restrict__, size_t) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }
# 812 "/usr/include/stdlib.h" 3
extern "C" int rpmatch(const char *) throw();
# 823 "/usr/include/stdlib.h" 3
extern "C" int getsubopt(char **__restrict__, char *const *__restrict__, char **__restrict__) throw();
# 832 "/usr/include/stdlib.h" 3
extern "C" void setkey(const char *) throw();
# 840 "/usr/include/stdlib.h" 3
extern "C" int posix_openpt(int);
# 848 "/usr/include/stdlib.h" 3
extern "C" int grantpt(int) throw();



extern "C" int unlockpt(int) throw();




extern "C" char *ptsname(int) throw();
# 864 "/usr/include/stdlib.h" 3
extern "C" { extern inline int ptsname_r(int, char *, size_t) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }



extern "C" int getpt();
# 875 "/usr/include/stdlib.h" 3
extern "C" int getloadavg(double [], int) throw();
# 24 "/usr/include/bits/stdlib.h" 3
extern "C" char *__realpath_chk(const char *__restrict__, char *__restrict__, size_t) throw();


extern "C" char *__realpath_alias(const char *__restrict__, char *__restrict__) throw() __asm__("realpath");


extern "C" char *__realpath_chk_warn(const char *__restrict__, char *__restrict__, size_t) throw() __asm__("__realpath_chk");
# 38 "/usr/include/bits/stdlib.h" 3
extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) char *realpath(const char *__restrict__ __name, char *__restrict__ __resolved) throw()
{
if (__builtin_object_size(__resolved, 2 > 1) != ((size_t)(-1)))
{

if (__builtin_object_size(__resolved, 2 > 1) < (4096)) {
return __realpath_chk_warn(__name, __resolved, __builtin_object_size(__resolved, 2 > 1)); }

return __realpath_chk(__name, __resolved, __builtin_object_size(__resolved, 2 > 1));
}

return __realpath_alias(__name, __resolved);
} }


extern "C" int __ptsname_r_chk(int, char *, size_t, size_t) throw();

extern "C" int __ptsname_r_alias(int, char *, size_t) throw() __asm__("ptsname_r");


extern "C" int __ptsname_r_chk_warn(int, char *, size_t, size_t) throw() __asm__("__ptsname_r_chk");
# 65 "/usr/include/bits/stdlib.h" 3
extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) int ptsname_r(int __fd, char *__buf, size_t __buflen) throw()
{
if (__builtin_object_size(__buf, 2 > 1) != ((size_t)(-1)))
{
if (!(__builtin_constant_p(__buflen))) {
return __ptsname_r_chk(__fd, __buf, __buflen, __builtin_object_size(__buf, 2 > 1)); }
if (__buflen > __builtin_object_size(__buf, 2 > 1)) {
return __ptsname_r_chk_warn(__fd, __buf, __buflen, __builtin_object_size(__buf, 2 > 1)); }
}
return __ptsname_r_alias(__fd, __buf, __buflen);
} }


extern "C" int __wctomb_chk(char *, wchar_t, size_t) throw();

extern "C" int __wctomb_alias(char *, wchar_t) throw() __asm__("wctomb");



extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) int wctomb(char *__s, wchar_t __wchar) throw()
{
# 93 "/usr/include/bits/stdlib.h" 3
if ((__builtin_object_size(__s, 2 > 1) != ((size_t)(-1))) && ((16) > __builtin_object_size(__s, 2 > 1))) {
return __wctomb_chk(__s, __wchar, __builtin_object_size(__s, 2 > 1)); }
return __wctomb_alias(__s, __wchar);
} }


extern "C" size_t __mbstowcs_chk(wchar_t *__restrict__, const char *__restrict__, size_t, size_t) throw();


extern "C" size_t __mbstowcs_alias(wchar_t *__restrict__, const char *__restrict__, size_t) throw() __asm__("mbstowcs");



extern "C" size_t __mbstowcs_chk_warn(wchar_t *__restrict__, const char *__restrict__, size_t, size_t) throw() __asm__("__mbstowcs_chk");
# 114 "/usr/include/bits/stdlib.h" 3
extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) size_t mbstowcs(wchar_t *__restrict__ __dst, const char *__restrict__ __src, size_t __len) throw()

{
if (__builtin_object_size(__dst, 2 > 1) != ((size_t)(-1)))
{
if (!(__builtin_constant_p(__len))) {
return __mbstowcs_chk(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1) / sizeof(wchar_t)); }


if (__len > (__builtin_object_size(__dst, 2 > 1) / sizeof(wchar_t))) {
return __mbstowcs_chk_warn(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1) / sizeof(wchar_t)); }

}
return __mbstowcs_alias(__dst, __src, __len);
} }


extern "C" size_t __wcstombs_chk(char *__restrict__, const wchar_t *__restrict__, size_t, size_t) throw();


extern "C" size_t __wcstombs_alias(char *__restrict__, const wchar_t *__restrict__, size_t) throw() __asm__("wcstombs");



extern "C" size_t __wcstombs_chk_warn(char *__restrict__, const wchar_t *__restrict__, size_t, size_t) throw() __asm__("__wcstombs_chk");
# 145 "/usr/include/bits/stdlib.h" 3
extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) size_t wcstombs(char *__restrict__ __dst, const wchar_t *__restrict__ __src, size_t __len) throw()

{
if (__builtin_object_size(__dst, 2 > 1) != ((size_t)(-1)))
{
if (!(__builtin_constant_p(__len))) {
return __wcstombs_chk(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1)); }
if (__len > __builtin_object_size(__dst, 2 > 1)) {
return __wcstombs_chk_warn(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1)); }
}
return __wcstombs_alias(__dst, __src, __len);
} }
# 74 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {

template<class _Iterator, class _Container> class __normal_iterator;


}

namespace std __attribute__((visibility("default"))) {

struct __true_type { };
struct __false_type { };

template<bool __T0>
struct __truth_type {
typedef __false_type __type; };


template<> struct __truth_type< true> {
typedef __true_type __type; };



template<class _Sp, class _Tp>
struct __traitor {

enum __cuda___value { __value = (((bool)_Sp::__value) || ((bool)_Tp::__value))};
typedef typename __truth_type< (((bool)_Sp::__value) || ((bool)_Tp::__value))> ::__type __type;
};



template<class _Sp, class _Tp>
struct __traitand {

enum __cuda___value { __value = (((bool)_Sp::__value) && ((bool)_Tp::__value))};
typedef typename __truth_type< (((bool)_Sp::__value) && ((bool)_Tp::__value))> ::__type __type;
};


template<class , class >
struct __are_same {

enum __cuda___value { __value};
typedef __false_type __type;
};

template<class _Tp>
struct __are_same< _Tp, _Tp> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<class _Tp>
struct __is_void {

enum __cuda___value { __value};
typedef __false_type __type;
};


template<> struct __is_void< void> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};




template<class _Tp>
struct __is_integer {

enum __cuda___value { __value};
typedef __false_type __type;
};
# 156 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_integer< bool> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< char> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< signed char> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< unsigned char> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};



template<> struct __is_integer< wchar_t> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};



template<> struct __is_integer< short> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< unsigned short> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< int> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< unsigned> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< long> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< unsigned long> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< long long> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_integer< unsigned long long> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};




template<class _Tp>
struct __is_floating {

enum __cuda___value { __value};
typedef __false_type __type;
};



template<> struct __is_floating< float> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_floating< double> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_floating< long double> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};




template<class _Tp>
struct __is_pointer {

enum __cuda___value { __value};
typedef __false_type __type;
};

template<class _Tp>
struct __is_pointer< _Tp *> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};




template<class _Tp>
struct __is_normal_iterator {

enum __cuda___value { __value};
typedef __false_type __type;
};

template<class _Iterator, class _Container>
struct __is_normal_iterator< __gnu_cxx::__normal_iterator< _Iterator, _Container> > {


enum __cuda___value { __value = 1};
typedef __true_type __type;
};




template<class _Tp>
struct __is_arithmetic : public __traitor< __is_integer< _Tp> , __is_floating< _Tp> > {

};




template<class _Tp>
struct __is_fundamental : public __traitor< __is_void< _Tp> , __is_arithmetic< _Tp> > {

};




template<class _Tp>
struct __is_scalar : public __traitor< __is_arithmetic< _Tp> , __is_pointer< _Tp> > {

};




template<class _Tp>
struct __is_char {

enum __cuda___value { __value};
typedef __false_type __type;
};


template<> struct __is_char< char> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};



template<> struct __is_char< wchar_t> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<class _Tp>
struct __is_byte {

enum __cuda___value { __value};
typedef __false_type __type;
};


template<> struct __is_byte< char> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_byte< signed char> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};


template<> struct __is_byte< unsigned char> {

enum __cuda___value { __value = 1};
typedef __true_type __type;
};




template<class _Tp>
struct __is_move_iterator {

enum __cuda___value { __value};
typedef __false_type __type;
};
# 415 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
}
# 43 "/usr/include/c++/4.3/ext/type_traits.h" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {


template<bool __T1, class >
struct __enable_if {
};

template<class _Tp>
struct __enable_if< true, _Tp> {
typedef _Tp __type; };



template<bool _Cond, class _Iftrue, class _Iffalse>
struct __conditional_type {
typedef _Iftrue __type; };

template<class _Iftrue, class _Iffalse>
struct __conditional_type< false, _Iftrue, _Iffalse> {
typedef _Iffalse __type; };



template<class _Tp>
struct __add_unsigned {


private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp> __if_type;


public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type;
};


template<> struct __add_unsigned< char> {
typedef unsigned char __type; };


template<> struct __add_unsigned< signed char> {
typedef unsigned char __type; };


template<> struct __add_unsigned< short> {
typedef unsigned short __type; };


template<> struct __add_unsigned< int> {
typedef unsigned __type; };


template<> struct __add_unsigned< long> {
typedef unsigned long __type; };


template<> struct __add_unsigned< long long> {
typedef unsigned long long __type; };



template<> struct __add_unsigned< bool> ;


template<> struct __add_unsigned< wchar_t> ;



template<class _Tp>
struct __remove_unsigned {


private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp> __if_type;


public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type;
};


template<> struct __remove_unsigned< char> {
typedef signed char __type; };


template<> struct __remove_unsigned< unsigned char> {
typedef signed char __type; };


template<> struct __remove_unsigned< unsigned short> {
typedef short __type; };


template<> struct __remove_unsigned< unsigned> {
typedef int __type; };


template<> struct __remove_unsigned< unsigned long> {
typedef long __type; };


template<> struct __remove_unsigned< unsigned long long> {
typedef long long __type; };



template<> struct __remove_unsigned< bool> ;


template<> struct __remove_unsigned< wchar_t> ;



template < typename _Type >
    inline bool
    __is_null_pointer ( _Type * __ptr )
    { return __ptr == 0; }

template < typename _Type >
    inline bool
    __is_null_pointer ( _Type )
    { return false; }



template<class _Tp, bool __T2 = std::__is_integer< _Tp> ::__value>
struct __promote {
typedef double __type; };

template<class _Tp>
struct __promote< _Tp, false> {
typedef _Tp __type; };

template<class _Tp, class _Up>
struct __promote_2 {


private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;


public: typedef __typeof__((__type1() + __type2())) __type;
};

template<class _Tp, class _Up, class _Vp>
struct __promote_3 {


private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
typedef typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type __type3;


public: typedef __typeof__(((__type1() + __type2()) + __type3())) __type;
};

template<class _Tp, class _Up, class _Vp, class _Wp>
struct __promote_4 {


private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
typedef typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type __type3;
typedef typename __promote< _Wp, std::__is_integer< _Wp> ::__value> ::__type __type4;


public: typedef __typeof__((((__type1() + __type2()) + __type3()) + __type4())) __type;
};

}
# 82 "/usr/include/c++/4.3/cmath" 3
namespace std __attribute__((visibility("default"))) {



template < typename _Tp >
    _Tp __cmath_power ( _Tp, unsigned int );

template < typename _Tp >
    inline _Tp
    __pow_helper ( _Tp __x, int __n )
    {
      return __n < 0
        ? _Tp ( 1 ) / __cmath_power ( __x, - __n )
        : __cmath_power ( __x, __n );
    }


inline double abs(double __x)
{ return __builtin_fabs(__x); }


inline float abs(float __x)
{ return __builtin_fabsf(__x); }


inline long double abs(long double __x)
{ return __builtin_fabsl(__x); }

using ::acos;


inline float acos(float __x)
{ return __builtin_acosf(__x); }


inline long double acos(long double __x)
{ return __builtin_acosl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    acos ( _Tp __x )
    { return __builtin_acos ( __x ); }

using ::asin;


inline float asin(float __x)
{ return __builtin_asinf(__x); }


inline long double asin(long double __x)
{ return __builtin_asinl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    asin ( _Tp __x )
    { return __builtin_asin ( __x ); }

using ::atan;


inline float atan(float __x)
{ return __builtin_atanf(__x); }


inline long double atan(long double __x)
{ return __builtin_atanl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    atan ( _Tp __x )
    { return __builtin_atan ( __x ); }

using ::atan2;


inline float atan2(float __y, float __x)
{ return __builtin_atan2f(__y, __x); }


inline long double atan2(long double __y, long double __x)
{ return __builtin_atan2l(__y, __x); }

template < typename _Tp, typename _Up >
    inline
    typename __gnu_cxx :: __promote_2 <
    typename __gnu_cxx :: __enable_if < __traitand < __is_arithmetic < _Tp >,
            __is_arithmetic < _Up > > :: __value,
        _Tp > :: __type, _Up > :: __type
    atan2 ( _Tp __y, _Up __x )
    {
      typedef typename __gnu_cxx :: __promote_2 < _Tp, _Up > :: __type __type;
      return atan2 ( __type ( __y ), __type ( __x ) );
    }

using ::ceil;


inline float ceil(float __x)
{ return __builtin_ceilf(__x); }


inline long double ceil(long double __x)
{ return __builtin_ceill(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    ceil ( _Tp __x )
    { return __builtin_ceil ( __x ); }

using ::cos;


inline float cos(float __x)
{ return __builtin_cosf(__x); }


inline long double cos(long double __x)
{ return __builtin_cosl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    cos ( _Tp __x )
    { return __builtin_cos ( __x ); }

using ::cosh;


inline float cosh(float __x)
{ return __builtin_coshf(__x); }


inline long double cosh(long double __x)
{ return __builtin_coshl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    cosh ( _Tp __x )
    { return __builtin_cosh ( __x ); }

using ::exp;


inline float exp(float __x)
{ return __builtin_expf(__x); }


inline long double exp(long double __x)
{ return __builtin_expl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    exp ( _Tp __x )
    { return __builtin_exp ( __x ); }

using ::fabs;


inline float fabs(float __x)
{ return __builtin_fabsf(__x); }


inline long double fabs(long double __x)
{ return __builtin_fabsl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    fabs ( _Tp __x )
    { return __builtin_fabs ( __x ); }

using ::floor;


inline float floor(float __x)
{ return __builtin_floorf(__x); }


inline long double floor(long double __x)
{ return __builtin_floorl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    floor ( _Tp __x )
    { return __builtin_floor ( __x ); }

using ::fmod;


inline float fmod(float __x, float __y)
{ return __builtin_fmodf(__x, __y); }


inline long double fmod(long double __x, long double __y)
{ return __builtin_fmodl(__x, __y); }

using ::frexp;


inline float frexp(float __x, int *__exp)
{ return __builtin_frexpf(__x, __exp); }


inline long double frexp(long double __x, int *__exp)
{ return __builtin_frexpl(__x, __exp); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    frexp ( _Tp __x, int * __exp )
    { return __builtin_frexp ( __x, __exp ); }

using ::ldexp;


inline float ldexp(float __x, int __exp)
{ return __builtin_ldexpf(__x, __exp); }


inline long double ldexp(long double __x, int __exp)
{ return __builtin_ldexpl(__x, __exp); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
  ldexp ( _Tp __x, int __exp )
  { return __builtin_ldexp ( __x, __exp ); }

using ::log;


inline float log(float __x)
{ return __builtin_logf(__x); }


inline long double log(long double __x)
{ return __builtin_logl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    log ( _Tp __x )
    { return __builtin_log ( __x ); }

using ::log10;


inline float log10(float __x)
{ return __builtin_log10f(__x); }


inline long double log10(long double __x)
{ return __builtin_log10l(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    log10 ( _Tp __x )
    { return __builtin_log10 ( __x ); }

using ::modf;


inline float modf(float __x, float *__iptr)
{ return __builtin_modff(__x, __iptr); }


inline long double modf(long double __x, long double *__iptr)
{ return __builtin_modfl(__x, __iptr); }

using ::pow;


inline float pow(float __x, float __y)
{ return __builtin_powf(__x, __y); }


inline long double pow(long double __x, long double __y)
{ return __builtin_powl(__x, __y); }



inline double pow(double __x, int __i)
{ return __builtin_powi(__x, __i); }


inline float pow(float __x, int __n)
{ return __builtin_powif(__x, __n); }


inline long double pow(long double __x, int __n)
{ return __builtin_powil(__x, __n); }

template < typename _Tp, typename _Up >
    inline
    typename __gnu_cxx :: __promote_2 <
    typename __gnu_cxx :: __enable_if < __traitand < __is_arithmetic < _Tp >,
            __is_arithmetic < _Up > > :: __value,
        _Tp > :: __type, _Up > :: __type
    pow ( _Tp __x, _Up __y )
    {
      typedef typename __gnu_cxx :: __promote_2 < _Tp, _Up > :: __type __type;
      return pow ( __type ( __x ), __type ( __y ) );
    }

using ::sin;


inline float sin(float __x)
{ return __builtin_sinf(__x); }


inline long double sin(long double __x)
{ return __builtin_sinl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sin ( _Tp __x )
    { return __builtin_sin ( __x ); }

using ::sinh;


inline float sinh(float __x)
{ return __builtin_sinhf(__x); }


inline long double sinh(long double __x)
{ return __builtin_sinhl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sinh ( _Tp __x )
    { return __builtin_sinh ( __x ); }

using ::sqrt;


inline float sqrt(float __x)
{ return __builtin_sqrtf(__x); }


inline long double sqrt(long double __x)
{ return __builtin_sqrtl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sqrt ( _Tp __x )
    { return __builtin_sqrt ( __x ); }

using ::tan;


inline float tan(float __x)
{ return __builtin_tanf(__x); }


inline long double tan(long double __x)
{ return __builtin_tanl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    tan ( _Tp __x )
    { return __builtin_tan ( __x ); }

using ::tanh;


inline float tanh(float __x)
{ return __builtin_tanhf(__x); }


inline long double tanh(long double __x)
{ return __builtin_tanhl(__x); }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    tanh ( _Tp __x )
    { return __builtin_tanh ( __x ); }

}
# 483 "/usr/include/c++/4.3/cmath" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {

template < typename _Tp >
    inline int
    __capture_fpclassify ( _Tp __f ) { return ( sizeof ( __f ) == sizeof ( float ) ? __fpclassifyf ( __f ) : sizeof ( __f ) == sizeof ( double ) ? __fpclassify ( __f ) : __fpclassifyl ( __f ) ); }

}
# 505 "/usr/include/c++/4.3/cmath" 3
namespace std __attribute__((visibility("default"))) {

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    fpclassify ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return :: __gnu_cxx :: __capture_fpclassify ( __type ( __f ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isfinite ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isfinite ( __type ( __f ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isinf ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isinf ( __type ( __f ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isnan ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isnan ( __type ( __f ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isnormal ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isnormal ( __type ( __f ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    signbit ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_signbit ( __type ( __f ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isgreater ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isgreater ( __type ( __f1 ), __type ( __f2 ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isgreaterequal ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isgreaterequal ( __type ( __f1 ), __type ( __f2 ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isless ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isless ( __type ( __f1 ), __type ( __f2 ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    islessequal ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_islessequal ( __type ( __f1 ), __type ( __f2 ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    islessgreater ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_islessgreater ( __type ( __f1 ), __type ( __f2 ) );
    }

template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isunordered ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isunordered ( __type ( __f1 ), __type ( __f2 ) );
    }

}
# 40 "/usr/include/c++/4.3/bits/cmath.tcc" 3
namespace std __attribute__((visibility("default"))) {

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

}
# 54 "/usr/include/c++/4.3/cstddef" 3
namespace std __attribute__((visibility("default"))) {

using ::ptrdiff_t;
using ::size_t;

}
# 105 "/usr/include/c++/4.3/cstdlib" 3
namespace std __attribute__((visibility("default"))) {

using ::div_t;
using ::ldiv_t;

using ::abort;
using ::abs;
using ::atexit;
using ::atof;
using ::atoi;
using ::atol;
using ::bsearch;
using ::calloc;
using ::div;
using ::exit;
using ::free;
using ::getenv;
using ::labs;
using ::ldiv;
using ::malloc;

using ::mblen;
using ::mbstowcs;
using ::mbtowc;

using ::qsort;
using ::rand;
using ::realloc;
using ::srand;
using ::strtod;
using ::strtol;
using ::strtoul;
using ::system;

using ::wcstombs;
using ::wctomb;



inline long abs(long __i) { return labs(__i); }


inline ldiv_t div(long __i, long __j) { return ldiv(__i, __j); }

}
# 162 "/usr/include/c++/4.3/cstdlib" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {


using ::lldiv_t;
# 171 "/usr/include/c++/4.3/cstdlib" 3
using ::_Exit;



inline long long abs(long long __x) { return (__x >= (0)) ? __x : (-__x); }


using ::llabs;


inline lldiv_t div(long long __n, long long __d)
{ auto lldiv_t __q; (__q.quot) = __n / __d; (__q.rem) = __n % __d; return __q; }

using ::lldiv;
# 195 "/usr/include/c++/4.3/cstdlib" 3
using ::atoll;
using ::strtoll;
using ::strtoull;

using ::strtof;
using ::strtold;

}

namespace std __attribute__((visibility("default"))) {


using __gnu_cxx::lldiv_t;

using __gnu_cxx::_Exit;
using __gnu_cxx::abs;

using __gnu_cxx::llabs;
using __gnu_cxx::div;
using __gnu_cxx::lldiv;

using __gnu_cxx::atoll;
using __gnu_cxx::strtof;
using __gnu_cxx::strtoll;
using __gnu_cxx::strtoull;
using __gnu_cxx::strtold;

}
# 434 "/home/normal/cuda/bin/../include/math_functions.h"
extern "C" { extern inline __attribute__((__weak__)) int __signbitl(long double) throw() __attribute__((__gnu_inline__)) __attribute__((__const__)); }

extern "C" __attribute__((__weak__)) int __isinfl(long double) throw() __attribute__((__const__));

extern "C" __attribute__((__weak__)) int __isnanl(long double) throw() __attribute__((__const__));
# 448 "/home/normal/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __finitel(long double) throw() __attribute__((__const__));
# 473 "/home/normal/cuda/bin/../include/math_functions.h"
namespace __gnu_cxx {

extern inline long long abs(long long) __attribute__((visibility("default")));
}

namespace std {

template<class T> extern inline T __pow_helper(T, int);
template<class T> extern inline T __cmath_power(T, unsigned);
}

using std::abs;
using std::fabs;
using std::ceil;
using std::floor;
using std::sqrt;
using std::pow;
using std::log;
using std::log10;
using std::fmod;
using std::modf;
using std::exp;
using std::frexp;
using std::ldexp;
using std::asin;
using std::sin;
using std::sinh;
using std::acos;
using std::cos;
using std::cosh;
using std::atan;
using std::atan2;
using std::tan;
using std::tanh;
# 560 "/home/normal/cuda/bin/../include/math_functions.h"
namespace std {


extern inline long abs(long) __attribute__((visibility("default")));
extern inline float abs(float) __attribute__((visibility("default")));
extern inline double abs(double) __attribute__((visibility("default")));
extern inline float fabs(float) __attribute__((visibility("default")));
extern inline float ceil(float) __attribute__((visibility("default")));
extern inline float floor(float) __attribute__((visibility("default")));
extern inline float sqrt(float) __attribute__((visibility("default")));
extern inline float pow(float, float) __attribute__((visibility("default")));
extern inline float pow(float, int) __attribute__((visibility("default")));
extern inline double pow(double, int) __attribute__((visibility("default")));
extern inline float log(float) __attribute__((visibility("default")));
extern inline float log10(float) __attribute__((visibility("default")));
extern inline float fmod(float, float) __attribute__((visibility("default")));
extern inline float modf(float, float *) __attribute__((visibility("default")));
extern inline float exp(float) __attribute__((visibility("default")));
extern inline float frexp(float, int *) __attribute__((visibility("default")));
extern inline float ldexp(float, int) __attribute__((visibility("default")));
extern inline float asin(float) __attribute__((visibility("default")));
extern inline float sin(float) __attribute__((visibility("default")));
extern inline float sinh(float) __attribute__((visibility("default")));
extern inline float acos(float) __attribute__((visibility("default")));
extern inline float cos(float) __attribute__((visibility("default")));
extern inline float cosh(float) __attribute__((visibility("default")));
extern inline float atan(float) __attribute__((visibility("default")));
extern inline float atan2(float, float) __attribute__((visibility("default")));
extern inline float tan(float) __attribute__((visibility("default")));
extern inline float tanh(float) __attribute__((visibility("default")));


}


static inline float logb(float a)
{
return logbf(a);
}

static inline int ilogb(float a)
{
return ilogbf(a);
}

static inline float scalbn(float a, int b)
{
return scalbnf(a, b);
}

static inline float scalbln(float a, long b)
{
return scalblnf(a, b);
}

static inline float exp2(float a)
{
return exp2f(a);
}

static inline float exp10(float a)
{
return exp10f(a);
}

static inline float expm1(float a)
{
return expm1f(a);
}

static inline float log2(float a)
{
return log2f(a);
}

static inline float log1p(float a)
{
return log1pf(a);
}

static inline float rsqrt(float a)
{
return rsqrtf(a);
}

static inline float acosh(float a)
{
return acoshf(a);
}

static inline float asinh(float a)
{
return asinhf(a);
}

static inline float atanh(float a)
{
return atanhf(a);
}

static inline float hypot(float a, float b)
{
return hypotf(a, b);
}

static inline float cbrt(float a)
{
return cbrtf(a);
}

static inline void sincos(float a, float *sptr, float *cptr)
{
sincosf(a, sptr, cptr);
}

static inline float erf(float a)
{
return erff(a);
}

static inline float erfinv(float a)
{
return erfinvf(a);
}

static inline float erfc(float a)
{
return erfcf(a);
}

static inline float erfcinv(float a)
{
return erfcinvf(a);
}

static inline float lgamma(float a)
{
return lgammaf(a);
}

static inline float tgamma(float a)
{
return tgammaf(a);
}

static inline float copysign(float a, float b)
{
return copysignf(a, b);
}

static inline double copysign(double a, float b)
{
return copysign(a, (double)b);
}

static inline float copysign(float a, double b)
{
return copysignf(a, (float)b);
}

static inline float nextafter(float a, float b)
{
return nextafterf(a, b);
}

static inline float remainder(float a, float b)
{
return remainderf(a, b);
}

static inline float remquo(float a, float b, int *quo)
{
return remquof(a, b, quo);
}

static inline float round(float a)
{
return roundf(a);
}

static inline long lround(float a)
{
return lroundf(a);
}

static inline long long llround(float a)
{
return llroundf(a);
}

static inline float trunc(float a)
{
return truncf(a);
}

static inline float rint(float a)
{
return rintf(a);
}

static inline long lrint(float a)
{
return lrintf(a);
}

static inline long long llrint(float a)
{
return llrintf(a);
}

static inline float nearbyint(float a)
{
return nearbyintf(a);
}

static inline float fdim(float a, float b)
{
return fdimf(a, b);
}

static inline float fma(float a, float b, float c)
{
return fmaf(a, b, c);
}

static inline unsigned min(unsigned a, unsigned b)
{
return umin(a, b);
}

static inline unsigned min(int a, unsigned b)
{
return umin((unsigned)a, b);
}

static inline unsigned min(unsigned a, int b)
{
return umin(a, (unsigned)b);
}

static inline float min(float a, float b)
{
return fminf(a, b);
}

static inline double min(double a, double b)
{
return fmin(a, b);
}

static inline double min(float a, double b)
{
return fmin((double)a, b);
}

static inline double min(double a, float b)
{
return fmin(a, (double)b);
}

static inline unsigned max(unsigned a, unsigned b)
{
return umax(a, b);
}

static inline unsigned max(int a, unsigned b)
{
return umax((unsigned)a, b);
}

static inline unsigned max(unsigned a, int b)
{
return umax(a, (unsigned)b);
}

static inline float max(float a, float b)
{
return fmaxf(a, b);
}

static inline double max(double a, double b)
{
return fmax(a, b);
}

static inline double max(float a, double b)
{
return fmax((double)a, b);
}

static inline double max(double a, float b)
{
return fmax(a, (double)b);
}
# 59 "/home/normal/cuda/bin/../include/cuda_texture_types.h"
template<class T, int dim = 1, cudaTextureReadMode mode = cudaReadModeElementType>
struct texture : public textureReference {

texture(int norm = 0, cudaTextureFilterMode
fMode = cudaFilterModePoint, cudaTextureAddressMode
aMode = cudaAddressModeClamp)
{
(this->normalized) = norm;
(this->filterMode) = fMode;
((this->addressMode)[0]) = aMode;
((this->addressMode)[1]) = aMode;
((this->addressMode)[2]) = aMode;
(this->channelDesc) = cudaCreateChannelDesc< T> ();
}

texture(int norm, cudaTextureFilterMode
fMode, cudaTextureAddressMode
aMode, cudaChannelFormatDesc
desc)
{
(this->normalized) = norm;
(this->filterMode) = fMode;
((this->addressMode)[0]) = aMode;
((this->addressMode)[1]) = aMode;
((this->addressMode)[2]) = aMode;
(this->channelDesc) = desc;
}
};
# 53 "/home/normal/cuda/bin/../include/device_launch_parameters.h"
# 55 "/home/normal/cuda/bin/../include/device_launch_parameters.h"
# 57 "/home/normal/cuda/bin/../include/device_launch_parameters.h"
# 59 "/home/normal/cuda/bin/../include/device_launch_parameters.h"
# 61 "/home/normal/cuda/bin/../include/device_launch_parameters.h"
# 98 "/home/normal/cuda/bin/../include/cuda_runtime.h"
template<class T> inline cudaError_t
cudaSetupArgument(T
arg, size_t
offset)

{
return cudaSetupArgument((const void *)(&arg), sizeof(T), offset);
}
# 120 "/home/normal/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyToSymbol(char *
symbol, const void *
src, size_t
count, size_t
offset = (0), cudaMemcpyKind
kind = cudaMemcpyHostToDevice)

{
return cudaMemcpyToSymbol((const char *)symbol, src, count, offset, kind);
}

template<class T> inline cudaError_t
cudaMemcpyToSymbol(const T &
symbol, const void *
src, size_t
count, size_t
offset = (0), cudaMemcpyKind
kind = cudaMemcpyHostToDevice)

{
return cudaMemcpyToSymbol((const char *)(&symbol), src, count, offset, kind);
}

static inline cudaError_t cudaMemcpyToSymbolAsync(char *
symbol, const void *
src, size_t
count, size_t
offset, cudaMemcpyKind
kind, cudaStream_t
stream)

{
return cudaMemcpyToSymbolAsync((const char *)symbol, src, count, offset, kind, stream);
}

template<class T> inline cudaError_t
cudaMemcpyToSymbolAsync(const T &
symbol, const void *
src, size_t
count, size_t
offset, cudaMemcpyKind
kind, cudaStream_t
stream)

{
return cudaMemcpyToSymbolAsync((const char *)(&symbol), src, count, offset, kind, stream);
}
# 174 "/home/normal/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyFromSymbol(void *
dst, char *
symbol, size_t
count, size_t
offset = (0), cudaMemcpyKind
kind = cudaMemcpyDeviceToHost)

{
return cudaMemcpyFromSymbol(dst, (const char *)symbol, count, offset, kind);
}

template<class T> inline cudaError_t
cudaMemcpyFromSymbol(void *
dst, const T &
symbol, size_t
count, size_t
offset = (0), cudaMemcpyKind
kind = cudaMemcpyDeviceToHost)

{
return cudaMemcpyFromSymbol(dst, (const char *)(&symbol), count, offset, kind);
}

static inline cudaError_t cudaMemcpyFromSymbolAsync(void *
dst, char *
symbol, size_t
count, size_t
offset, cudaMemcpyKind
kind, cudaStream_t
stream)

{
return cudaMemcpyFromSymbolAsync(dst, (const char *)symbol, count, offset, kind, stream);
}

template<class T> inline cudaError_t
cudaMemcpyFromSymbolAsync(void *
dst, const T &
symbol, size_t
count, size_t
offset, cudaMemcpyKind
kind, cudaStream_t
stream)

{
return cudaMemcpyFromSymbolAsync(dst, (const char *)(&symbol), count, offset, kind, stream);
}

static inline cudaError_t cudaGetSymbolAddress(void **
devPtr, char *
symbol)

{
return cudaGetSymbolAddress(devPtr, (const char *)symbol);
}
# 252 "/home/normal/cuda/bin/../include/cuda_runtime.h"
template<class T> inline cudaError_t
cudaGetSymbolAddress(void **
devPtr, const T &
symbol)

{
return cudaGetSymbolAddress(devPtr, (const char *)(&symbol));
}
# 267 "/home/normal/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaGetSymbolSize(size_t *
size, char *
symbol)

{
return cudaGetSymbolSize(size, (const char *)symbol);
}
# 296 "/home/normal/cuda/bin/../include/cuda_runtime.h"
template<class T> inline cudaError_t
cudaGetSymbolSize(size_t *
size, const T &
symbol)

{
return cudaGetSymbolSize(size, (const char *)(&symbol));
}
# 352 "/home/normal/cuda/bin/../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
cudaBindTexture(size_t *
offset, const texture< T, dim, readMode> &
tex, const void *
devPtr, const cudaChannelFormatDesc &
desc, size_t
size = (((2147483647) * 2U) + 1U))

{
return cudaBindTexture(offset, &tex, devPtr, (&desc), size);
}
# 396 "/home/normal/cuda/bin/../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
cudaBindTexture(size_t *
offset, const texture< T, dim, readMode> &
tex, const void *
devPtr, size_t
size = (((2147483647) * 2U) + 1U))

{
return cudaBindTexture(offset, tex, devPtr, (tex.channelDesc), size);
}
# 451 "/home/normal/cuda/bin/../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
cudaBindTexture2D(size_t *
offset, const texture< T, dim, readMode> &
tex, const void *
devPtr, const cudaChannelFormatDesc &
desc, size_t
width, size_t
height, size_t
pitch)

{
return cudaBindTexture2D(offset, &tex, devPtr, (&desc), width, height, pitch);
}
# 493 "/home/normal/cuda/bin/../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
cudaBindTextureToArray(const texture< T, dim, readMode> &
tex, const cudaArray *
array, const cudaChannelFormatDesc &
desc)

{
return cudaBindTextureToArray(&tex, array, (&desc));
}
# 530 "/home/normal/cuda/bin/../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
cudaBindTextureToArray(const texture< T, dim, readMode> &
tex, const cudaArray *
array)

{
auto cudaChannelFormatDesc desc;
auto cudaError_t err = cudaGetChannelDesc(&desc, array);

return (err == (cudaSuccess)) ? (cudaBindTextureToArray(tex, array, desc)) : err;
}
# 568 "/home/normal/cuda/bin/../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
cudaUnbindTexture(const texture< T, dim, readMode> &
tex)

{
return cudaUnbindTexture(&tex);
}
# 607 "/home/normal/cuda/bin/../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
cudaGetTextureAlignmentOffset(size_t *
offset, const texture< T, dim, readMode> &
tex)

{
return cudaGetTextureAlignmentOffset(offset, &tex);
}
# 649 "/home/normal/cuda/bin/../include/cuda_runtime.h"
template<class T> inline cudaError_t
cudaLaunch(T *
entry)

{
return cudaLaunch((const char *)entry);
}
# 45 "/usr/include/stdio.h" 3
struct _IO_FILE;



extern "C" { typedef _IO_FILE FILE; }
# 65 "/usr/include/stdio.h" 3
extern "C" { typedef _IO_FILE __FILE; }
# 90 "/usr/include/wchar.h" 3
extern "C" { typedef
# 79 "/usr/include/wchar.h" 3
struct __mbstate_t {
int __count;

union {

unsigned __wch;



char __wchb[4];
} __value;
} __mbstate_t; }
# 26 "/usr/include/_G_config.h" 3
extern "C" { typedef
# 23 "/usr/include/_G_config.h" 3
struct _G_fpos_t {
__off_t __pos;
__mbstate_t __state;
} _G_fpos_t; }




extern "C" { typedef
# 28 "/usr/include/_G_config.h" 3
struct _G_fpos64_t {
__off64_t __pos;
__mbstate_t __state;
} _G_fpos64_t; }
# 53 "/usr/include/_G_config.h" 3
extern "C" { typedef short _G_int16_t; }
extern "C" { typedef int _G_int32_t; }
extern "C" { typedef unsigned short _G_uint16_t; }
extern "C" { typedef unsigned _G_uint32_t; }
# 43 "/usr/lib/gcc/x86_64-linux-gnu/4.3.3/include/stdarg.h" 3
extern "C" { typedef __builtin_va_list __gnuc_va_list; }
# 170 "/usr/include/libio.h" 3
struct _IO_jump_t; struct _IO_FILE;
# 180 "/usr/include/libio.h" 3
extern "C" { typedef void _IO_lock_t; }
# 186 "/usr/include/libio.h" 3
extern "C" { struct _IO_marker {
_IO_marker *_next;
_IO_FILE *_sbuf;



int _pos;
# 203 "/usr/include/libio.h" 3
}; }


enum __codecvt_result {

__codecvt_ok,
__codecvt_partial,
__codecvt_error,
__codecvt_noconv
};
# 271 "/usr/include/libio.h" 3
extern "C" { struct _IO_FILE {
int _flags;




char *_IO_read_ptr;
char *_IO_read_end;
char *_IO_read_base;
char *_IO_write_base;
char *_IO_write_ptr;
char *_IO_write_end;
char *_IO_buf_base;
char *_IO_buf_end;

char *_IO_save_base;
char *_IO_backup_base;
char *_IO_save_end;

_IO_marker *_markers;

_IO_FILE *_chain;

int _fileno;



int _flags2;

__off_t _old_offset;



unsigned short _cur_column;
signed char _vtable_offset;
char _shortbuf[1];



_IO_lock_t *_lock;
# 319 "/usr/include/libio.h" 3
__off64_t _offset;
# 328 "/usr/include/libio.h" 3
void *__pad1;
void *__pad2;
void *__pad3;
void *__pad4;
size_t __pad5;

int _mode;

char _unused2[((((15) * sizeof(int)) - ((4) * sizeof(void *))) - sizeof(size_t))];

}; }
# 344 "/usr/include/libio.h" 3
struct _IO_FILE_plus;

extern "C" { extern _IO_FILE_plus _IO_2_1_stdin_; }
extern "C" { extern _IO_FILE_plus _IO_2_1_stdout_; }
extern "C" { extern _IO_FILE_plus _IO_2_1_stderr_; }
# 364 "/usr/include/libio.h" 3
extern "C" { typedef __ssize_t __io_read_fn(void *, char *, size_t); }
# 372 "/usr/include/libio.h" 3
extern "C" { typedef __ssize_t __io_write_fn(void *, const char *, size_t); }
# 381 "/usr/include/libio.h" 3
extern "C" { typedef int __io_seek_fn(void *, __off64_t *, int); }


extern "C" { typedef int __io_close_fn(void *); }




extern "C" { typedef __io_read_fn cookie_read_function_t; }
extern "C" { typedef __io_write_fn cookie_write_function_t; }
extern "C" { typedef __io_seek_fn cookie_seek_function_t; }
extern "C" { typedef __io_close_fn cookie_close_function_t; }
# 401 "/usr/include/libio.h" 3
extern "C" { typedef
# 396 "/usr/include/libio.h" 3
struct _IO_cookie_io_functions_t {
__io_read_fn *read;
__io_write_fn *write;
__io_seek_fn *seek;
__io_close_fn *close;
} _IO_cookie_io_functions_t; }
extern "C" { typedef _IO_cookie_io_functions_t cookie_io_functions_t; }

struct _IO_cookie_file;


extern "C" void _IO_cookie_init(_IO_cookie_file *, int, void *, _IO_cookie_io_functions_t);
# 416 "/usr/include/libio.h" 3
extern "C" int __underflow(_IO_FILE *);
extern "C" int __uflow(_IO_FILE *);
extern "C" int __overflow(_IO_FILE *, int);
# 458 "/usr/include/libio.h" 3
extern "C" int _IO_getc(_IO_FILE *);
extern "C" int _IO_putc(int, _IO_FILE *);
extern "C" int _IO_feof(_IO_FILE *) throw();
extern "C" int _IO_ferror(_IO_FILE *) throw();

extern "C" int _IO_peekc_locked(_IO_FILE *);
# 469 "/usr/include/libio.h" 3
extern "C" void _IO_flockfile(_IO_FILE *) throw();
extern "C" void _IO_funlockfile(_IO_FILE *) throw();
extern "C" int _IO_ftrylockfile(_IO_FILE *) throw();
# 488 "/usr/include/libio.h" 3
extern "C" int _IO_vfscanf(_IO_FILE *__restrict__, const char *__restrict__, __gnuc_va_list, int *__restrict__);

extern "C" int _IO_vfprintf(_IO_FILE *__restrict__, const char *__restrict__, __gnuc_va_list);

extern "C" __ssize_t _IO_padn(_IO_FILE *, int, __ssize_t);
extern "C" size_t _IO_sgetn(_IO_FILE *, void *, size_t);

extern "C" __off64_t _IO_seekoff(_IO_FILE *, __off64_t, int, int);
extern "C" __off64_t _IO_seekpos(_IO_FILE *, __off64_t, int);

extern "C" void _IO_free_backup_area(_IO_FILE *) throw();
# 80 "/usr/include/stdio.h" 3
extern "C" { typedef __gnuc_va_list va_list; }
# 91 "/usr/include/stdio.h" 3
extern "C" { typedef _G_fpos_t fpos_t; }
# 97 "/usr/include/stdio.h" 3
extern "C" { typedef _G_fpos64_t fpos64_t; }
# 145 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stdin; }
extern "C" { extern _IO_FILE *stdout; }
extern "C" { extern _IO_FILE *stderr; }
# 155 "/usr/include/stdio.h" 3
extern "C" int remove(const char *) throw();

extern "C" int rename(const char *, const char *) throw();




extern "C" int renameat(int, const char *, int, const char *) throw();
# 172 "/usr/include/stdio.h" 3
extern "C" FILE *tmpfile();
# 182 "/usr/include/stdio.h" 3
extern "C" FILE *tmpfile64();



extern "C" char *tmpnam(char *) throw();
# 192 "/usr/include/stdio.h" 3
extern "C" char *tmpnam_r(char *) throw();
# 204 "/usr/include/stdio.h" 3
extern "C" char *tempnam(const char *, const char *) throw() __attribute__((__malloc__));
# 214 "/usr/include/stdio.h" 3
extern "C" int fclose(FILE *);




extern "C" int fflush(FILE *);
# 229 "/usr/include/stdio.h" 3
extern "C" int fflush_unlocked(FILE *);
# 239 "/usr/include/stdio.h" 3
extern "C" int fcloseall();
# 249 "/usr/include/stdio.h" 3
extern "C" FILE *fopen(const char *__restrict__, const char *__restrict__);
# 255 "/usr/include/stdio.h" 3
extern "C" FILE *freopen(const char *__restrict__, const char *__restrict__, FILE *__restrict__);
# 274 "/usr/include/stdio.h" 3
extern "C" FILE *fopen64(const char *__restrict__, const char *__restrict__);

extern "C" FILE *freopen64(const char *__restrict__, const char *__restrict__, FILE *__restrict__);
# 283 "/usr/include/stdio.h" 3
extern "C" FILE *fdopen(int, const char *) throw();
# 289 "/usr/include/stdio.h" 3
extern "C" FILE *fopencookie(void *__restrict__, const char *__restrict__, _IO_cookie_io_functions_t) throw();




extern "C" FILE *fmemopen(void *, size_t, const char *) throw();
# 300 "/usr/include/stdio.h" 3
extern "C" FILE *open_memstream(char **, size_t *) throw();
# 307 "/usr/include/stdio.h" 3
extern "C" void setbuf(FILE *__restrict__, char *__restrict__) throw();



extern "C" int setvbuf(FILE *__restrict__, char *__restrict__, int, size_t) throw();
# 318 "/usr/include/stdio.h" 3
extern "C" void setbuffer(FILE *__restrict__, char *__restrict__, size_t) throw();



extern "C" void setlinebuf(FILE *) throw();
# 331 "/usr/include/stdio.h" 3
extern "C" int fprintf(FILE *__restrict__, const char *__restrict__, ...);
# 337 "/usr/include/stdio.h" 3
extern "C" int printf(const char *__restrict__, ...);

extern "C" int sprintf(char *__restrict__, const char *__restrict__, ...) throw();
# 346 "/usr/include/stdio.h" 3
extern "C" { extern inline int vfprintf(FILE *__restrict__, const char *__restrict__, __gnuc_va_list) __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }
# 352 "/usr/include/stdio.h" 3
extern "C" { extern inline int vprintf(const char *__restrict__, __gnuc_va_list) __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }

extern "C" { extern inline int vsprintf(char *__restrict__, const char *__restrict__, __gnuc_va_list) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }
# 361 "/usr/include/stdio.h" 3
extern "C" int snprintf(char *__restrict__, size_t, const char *__restrict__, ...) throw();



extern "C" { extern inline int vsnprintf(char *__restrict__, size_t, const char *__restrict__, __gnuc_va_list) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }
# 374 "/usr/include/stdio.h" 3
extern "C" { extern inline int vasprintf(char **__restrict__, const char *__restrict__, __gnuc_va_list) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }


extern "C" int __asprintf(char **__restrict__, const char *__restrict__, ...) throw();


extern "C" int asprintf(char **__restrict__, const char *__restrict__, ...) throw();
# 390 "/usr/include/stdio.h" 3
extern "C" { extern inline int vdprintf(int, const char *__restrict__, __gnuc_va_list) __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }


extern "C" int dprintf(int, const char *__restrict__, ...);
# 403 "/usr/include/stdio.h" 3
extern "C" int fscanf(FILE *__restrict__, const char *__restrict__, ...);
# 409 "/usr/include/stdio.h" 3
extern "C" int scanf(const char *__restrict__, ...);

extern "C" int sscanf(const char *__restrict__, const char *__restrict__, ...) throw();
# 449 "/usr/include/stdio.h" 3
extern "C" int vfscanf(FILE *__restrict__, const char *__restrict__, __gnuc_va_list);
# 457 "/usr/include/stdio.h" 3
extern "C" int vscanf(const char *__restrict__, __gnuc_va_list);



extern "C" int vsscanf(const char *__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 509 "/usr/include/stdio.h" 3
extern "C" int fgetc(FILE *);
extern "C" int getc(FILE *);
# 516 "/usr/include/stdio.h" 3
extern "C" { extern inline int getchar() __attribute__((__gnu_inline__)); }
# 528 "/usr/include/stdio.h" 3
extern "C" { extern inline int getc_unlocked(FILE *) __attribute__((__gnu_inline__)); }
extern "C" { extern inline int getchar_unlocked() __attribute__((__gnu_inline__)); }
# 539 "/usr/include/stdio.h" 3
extern "C" { extern inline int fgetc_unlocked(FILE *) __attribute__((__gnu_inline__)); }
# 551 "/usr/include/stdio.h" 3
extern "C" int fputc(int, FILE *);
extern "C" int putc(int, FILE *);
# 558 "/usr/include/stdio.h" 3
extern "C" { extern inline int putchar(int) __attribute__((__gnu_inline__)); }
# 572 "/usr/include/stdio.h" 3
extern "C" { extern inline int fputc_unlocked(int, FILE *) __attribute__((__gnu_inline__)); }
# 580 "/usr/include/stdio.h" 3
extern "C" { extern inline int putc_unlocked(int, FILE *) __attribute__((__gnu_inline__)); }
extern "C" { extern inline int putchar_unlocked(int) __attribute__((__gnu_inline__)); }
# 588 "/usr/include/stdio.h" 3
extern "C" int getw(FILE *);


extern "C" int putw(int, FILE *);
# 600 "/usr/include/stdio.h" 3
extern "C" { extern inline char *fgets(char *__restrict__, int, FILE *__restrict__) __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }
# 608 "/usr/include/stdio.h" 3
extern "C" { extern inline char *gets(char *) __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }
# 618 "/usr/include/stdio.h" 3
extern "C" { extern inline char *fgets_unlocked(char *__restrict__, int, FILE *__restrict__) __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }
# 634 "/usr/include/stdio.h" 3
extern "C" __ssize_t __getdelim(char **__restrict__, size_t *__restrict__, int, FILE *__restrict__);


extern "C" __ssize_t getdelim(char **__restrict__, size_t *__restrict__, int, FILE *__restrict__);
# 647 "/usr/include/stdio.h" 3
extern "C" { extern inline __ssize_t getline(char **__restrict__, size_t *__restrict__, FILE *__restrict__) __attribute__((__gnu_inline__)); }
# 658 "/usr/include/stdio.h" 3
extern "C" int fputs(const char *__restrict__, FILE *__restrict__);
# 664 "/usr/include/stdio.h" 3
extern "C" int puts(const char *);
# 671 "/usr/include/stdio.h" 3
extern "C" int ungetc(int, FILE *);
# 678 "/usr/include/stdio.h" 3
extern "C" { extern inline size_t fread(void *__restrict__, size_t, size_t, FILE *__restrict__) __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }
# 684 "/usr/include/stdio.h" 3
extern "C" size_t fwrite(const void *__restrict__, size_t, size_t, FILE *__restrict__);
# 695 "/usr/include/stdio.h" 3
extern "C" int fputs_unlocked(const char *__restrict__, FILE *__restrict__);
# 706 "/usr/include/stdio.h" 3
extern "C" { extern inline size_t fread_unlocked(void *__restrict__, size_t, size_t, FILE *__restrict__) __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }

extern "C" size_t fwrite_unlocked(const void *__restrict__, size_t, size_t, FILE *__restrict__);
# 718 "/usr/include/stdio.h" 3
extern "C" int fseek(FILE *, long, int);




extern "C" long ftell(FILE *);




extern "C" void rewind(FILE *);
# 742 "/usr/include/stdio.h" 3
extern "C" int fseeko(FILE *, __off_t, int);




extern "C" __off_t ftello(FILE *);
# 767 "/usr/include/stdio.h" 3
extern "C" int fgetpos(FILE *__restrict__, fpos_t *__restrict__);




extern "C" int fsetpos(FILE *, const fpos_t *);
# 787 "/usr/include/stdio.h" 3
extern "C" int fseeko64(FILE *, __off64_t, int);
extern "C" __off64_t ftello64(FILE *);
extern "C" int fgetpos64(FILE *__restrict__, fpos64_t *__restrict__);
extern "C" int fsetpos64(FILE *, const fpos64_t *);




extern "C" void clearerr(FILE *) throw();

extern "C" int feof(FILE *) throw();

extern "C" int ferror(FILE *) throw();




extern "C" void clearerr_unlocked(FILE *) throw();
extern "C" { extern inline int feof_unlocked(FILE *) throw() __attribute__((__gnu_inline__)); }
extern "C" { extern inline int ferror_unlocked(FILE *) throw() __attribute__((__gnu_inline__)); }
# 815 "/usr/include/stdio.h" 3
extern "C" void perror(const char *);
# 27 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern int sys_nerr; }
extern "C" { extern const char *const sys_errlist[]; }


extern "C" { extern int _sys_nerr; }
extern "C" { extern const char *const _sys_errlist[]; }
# 827 "/usr/include/stdio.h" 3
extern "C" int fileno(FILE *) throw();




extern "C" int fileno_unlocked(FILE *) throw();
# 842 "/usr/include/stdio.h" 3
extern "C" FILE *popen(const char *, const char *);
# 848 "/usr/include/stdio.h" 3
extern "C" int pclose(FILE *);
# 854 "/usr/include/stdio.h" 3
extern "C" char *ctermid(char *) throw();
# 860 "/usr/include/stdio.h" 3
extern "C" char *cuserid(char *);




struct obstack;


extern "C" int obstack_printf(obstack *__restrict__, const char *__restrict__, ...) throw();


extern "C" { extern inline int obstack_vprintf(obstack *__restrict__, const char *__restrict__, __gnuc_va_list) throw() __attribute__((__always_inline__)) __attribute__((__gnu_inline__)); }
# 882 "/usr/include/stdio.h" 3
extern "C" void flockfile(FILE *) throw();



extern "C" int ftrylockfile(FILE *) throw();


extern "C" void funlockfile(FILE *) throw();
# 45 "/usr/include/bits/stdio.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) int getchar()
{
return _IO_getc(stdin);
} }
# 54 "/usr/include/bits/stdio.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) int fgetc_unlocked(FILE *__fp)
{
return (__builtin_expect((__fp->_IO_read_ptr) >= (__fp->_IO_read_end), 0)) ? __uflow(__fp) : (*((unsigned char *)((__fp->_IO_read_ptr)++)));
} }
# 64 "/usr/include/bits/stdio.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) int getc_unlocked(FILE *__fp)
{
return (__builtin_expect((__fp->_IO_read_ptr) >= (__fp->_IO_read_end), 0)) ? __uflow(__fp) : (*((unsigned char *)((__fp->_IO_read_ptr)++)));
} }



extern "C" { inline __attribute__((__gnu_inline__)) int getchar_unlocked()
{
return (__builtin_expect((stdin->_IO_read_ptr) >= (stdin->_IO_read_end), 0)) ? __uflow(stdin) : (*((unsigned char *)((stdin->_IO_read_ptr)++)));
} }
# 80 "/usr/include/bits/stdio.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) int putchar(int __c)
{
return _IO_putc(__c, stdout);
} }
# 89 "/usr/include/bits/stdio.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) int fputc_unlocked(int __c, FILE *__stream)
{
return (__builtin_expect((__stream->_IO_write_ptr) >= (__stream->_IO_write_end), 0)) ? __overflow(__stream, (unsigned char)__c) : ((unsigned char)((*((__stream->_IO_write_ptr)++)) = __c));
} }
# 99 "/usr/include/bits/stdio.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) int putc_unlocked(int __c, FILE *__stream)
{
return (__builtin_expect((__stream->_IO_write_ptr) >= (__stream->_IO_write_end), 0)) ? __overflow(__stream, (unsigned char)__c) : ((unsigned char)((*((__stream->_IO_write_ptr)++)) = __c));
} }



extern "C" { inline __attribute__((__gnu_inline__)) int putchar_unlocked(int __c)
{
return (__builtin_expect((stdout->_IO_write_ptr) >= (stdout->_IO_write_end), 0)) ? __overflow(stdout, (unsigned char)__c) : ((unsigned char)((*((stdout->_IO_write_ptr)++)) = __c));
} }
# 116 "/usr/include/bits/stdio.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __ssize_t getline(char **__lineptr, size_t *__n, FILE *__stream)
{
return __getdelim(__lineptr, __n, '\n', __stream);
} }
# 126 "/usr/include/bits/stdio.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) int feof_unlocked(FILE *__stream) throw()
{
return ((__stream->_flags) & 16) != 0;
} }



extern "C" { inline __attribute__((__gnu_inline__)) int ferror_unlocked(FILE *__stream) throw()
{
return ((__stream->_flags) & 32) != 0;
} }
# 24 "/usr/include/bits/stdio2.h" 3
extern "C" int __sprintf_chk(char *__restrict__, int, size_t, const char *__restrict__, ...) throw();

extern "C" int __vsprintf_chk(char *__restrict__, int, size_t, const char *__restrict__, __gnuc_va_list) throw();
# 44 "/usr/include/bits/stdio2.h" 3
extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) int vsprintf(char *__restrict__ __s, const char *__restrict__ __fmt, __gnuc_va_list __ap) throw()

{
return __builtin___vsprintf_chk(__s, 2 - 1, __builtin_object_size(__s, 2 > 1), __fmt, __ap);

} }



extern "C" int __snprintf_chk(char *__restrict__, size_t, int, size_t, const char *__restrict__, ...) throw();


extern "C" int __vsnprintf_chk(char *__restrict__, size_t, int, size_t, const char *__restrict__, __gnuc_va_list) throw();
# 75 "/usr/include/bits/stdio2.h" 3
extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) int vsnprintf(char *__restrict__ __s, size_t __n, const char *__restrict__ __fmt, __gnuc_va_list __ap) throw()

{
return __builtin___vsnprintf_chk(__s, __n, 2 - 1, __builtin_object_size(__s, 2 > 1), __fmt, __ap);

} }
# 86 "/usr/include/bits/stdio2.h" 3
extern "C" int __fprintf_chk(FILE *__restrict__, int, const char *__restrict__, ...);

extern "C" int __printf_chk(int, const char *__restrict__, ...);
extern "C" int __vfprintf_chk(FILE *__restrict__, int, const char *__restrict__, __gnuc_va_list);

extern "C" int __vprintf_chk(int, const char *__restrict__, __gnuc_va_list);
# 115 "/usr/include/bits/stdio2.h" 3
extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) int vprintf(const char *__restrict__ __fmt, __gnuc_va_list __ap)
{

return __vfprintf_chk(stdout, 2 - 1, __fmt, __ap);



} }


extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) int vfprintf(FILE *__restrict__ __stream, const char *__restrict__
__fmt, __gnuc_va_list __ap)
{
return __vfprintf_chk(__stream, 2 - 1, __fmt, __ap);
} }



extern "C" int __asprintf_chk(char **__restrict__, int, const char *__restrict__, ...) throw();


extern "C" int __vasprintf_chk(char **__restrict__, int, const char *__restrict__, __gnuc_va_list) throw();


extern "C" int __dprintf_chk(int, int, const char *__restrict__, ...);

extern "C" int __vdprintf_chk(int, int, const char *__restrict__, __gnuc_va_list);


extern "C" int __obstack_printf_chk(obstack *__restrict__, int, const char *__restrict__, ...) throw();



extern "C" int __obstack_vprintf_chk(obstack *__restrict__, int, const char *__restrict__, __gnuc_va_list) throw();
# 196 "/usr/include/bits/stdio2.h" 3
extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) int vasprintf(char **__restrict__ __ptr, const char *__restrict__ __fmt, __gnuc_va_list __ap) throw()

{
return __vasprintf_chk(__ptr, 2 - 1, __fmt, __ap);
} }


extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) int vdprintf(int __fd, const char *__restrict__ __fmt, __gnuc_va_list __ap)
{
return __vdprintf_chk(__fd, 2 - 1, __fmt, __ap);
} }


extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) int obstack_vprintf(obstack *__restrict__ __obstack, const char *__restrict__ __fmt, __gnuc_va_list __ap) throw()

{
return __obstack_vprintf_chk(__obstack, 2 - 1, __fmt, __ap);

} }
# 220 "/usr/include/bits/stdio2.h" 3
extern "C" char *__gets_chk(char *, size_t);
extern "C" char *__gets_warn(char *) __asm__("gets");




extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) char *gets(char *__str)
{
if (__builtin_object_size(__str, 2 > 1) != ((size_t)(-1))) {
return __gets_chk(__str, __builtin_object_size(__str, 2 > 1)); }
return __gets_warn(__str);
} }

extern "C" char *__fgets_chk(char *__restrict__, size_t, int, FILE *__restrict__);

extern "C" char *__fgets_alias(char *__restrict__, int, FILE *__restrict__) __asm__("fgets");


extern "C" char *__fgets_chk_warn(char *__restrict__, size_t, int, FILE *__restrict__) __asm__("__fgets_chk");
# 245 "/usr/include/bits/stdio2.h" 3
extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) char *fgets(char *__restrict__ __s, int __n, FILE *__restrict__ __stream)
{
if (__builtin_object_size(__s, 2 > 1) != ((size_t)(-1)))
{
if ((!(__builtin_constant_p(__n))) || (__n <= 0)) {
return __fgets_chk(__s, __builtin_object_size(__s, 2 > 1), __n, __stream); }

if (((unsigned long)__n) > __builtin_object_size(__s, 2 > 1)) {
return __fgets_chk_warn(__s, __builtin_object_size(__s, 2 > 1), __n, __stream); }
}
return __fgets_alias(__s, __n, __stream);
} }

extern "C" size_t __fread_chk(void *__restrict__, size_t, size_t, size_t, FILE *__restrict__);


extern "C" size_t __fread_alias(void *__restrict__, size_t, size_t, FILE *__restrict__) __asm__("fread");



extern "C" size_t __fread_chk_warn(void *__restrict__, size_t, size_t, size_t, FILE *__restrict__) __asm__("__fread_chk");
# 274 "/usr/include/bits/stdio2.h" 3
extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) size_t fread(void *__restrict__ __ptr, size_t __size, size_t __n, FILE *__restrict__
__stream)
{
if (__builtin_object_size(__ptr, 0) != ((size_t)(-1)))
{
if (((!(__builtin_constant_p(__size))) || (!(__builtin_constant_p(__n)))) || ((__size | __n) >= (((size_t)1) << (((8) * sizeof(size_t)) / (2))))) {


return __fread_chk(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream); }

if ((__size * __n) > __builtin_object_size(__ptr, 0)) {
return __fread_chk_warn(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream); }
}
return __fread_alias(__ptr, __size, __n, __stream);
} }


extern "C" char *__fgets_unlocked_chk(char *__restrict__, size_t, int, FILE *__restrict__);

extern "C" char *__fgets_unlocked_alias(char *__restrict__, int, FILE *__restrict__) __asm__("fgets_unlocked");


extern "C" char *__fgets_unlocked_chk_warn(char *__restrict__, size_t, int, FILE *__restrict__) __asm__("__fgets_unlocked_chk");
# 303 "/usr/include/bits/stdio2.h" 3
extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) char *fgets_unlocked(char *__restrict__ __s, int __n, FILE *__restrict__ __stream)
{
if (__builtin_object_size(__s, 2 > 1) != ((size_t)(-1)))
{
if ((!(__builtin_constant_p(__n))) || (__n <= 0)) {
return __fgets_unlocked_chk(__s, __builtin_object_size(__s, 2 > 1), __n, __stream); }

if (((unsigned long)__n) > __builtin_object_size(__s, 2 > 1)) {
return __fgets_unlocked_chk_warn(__s, __builtin_object_size(__s, 2 > 1), __n, __stream); }
}
return __fgets_unlocked_alias(__s, __n, __stream);
} }




extern "C" size_t __fread_unlocked_chk(void *__restrict__, size_t, size_t, size_t, FILE *__restrict__);


extern "C" size_t __fread_unlocked_alias(void *__restrict__, size_t, size_t, FILE *__restrict__) __asm__("fread_unlocked");



extern "C" size_t __fread_unlocked_chk_warn(void *__restrict__, size_t, size_t, size_t, FILE *__restrict__) __asm__("__fread_unlocked_chk");
# 335 "/usr/include/bits/stdio2.h" 3
extern "C" { inline __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) size_t fread_unlocked(void *__restrict__ __ptr, size_t __size, size_t __n, FILE *__restrict__
__stream)
{
if (__builtin_object_size(__ptr, 0) != ((size_t)(-1)))
{
if (((!(__builtin_constant_p(__size))) || (!(__builtin_constant_p(__n)))) || ((__size | __n) >= (((size_t)1) << (((8) * sizeof(size_t)) / (2))))) {


return __fread_unlocked_chk(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream); }


if ((__size * __n) > __builtin_object_size(__ptr, 0)) {
return __fread_unlocked_chk_warn(__ptr, __builtin_object_size(__ptr, 0), __size, __n, __stream); }

}


if ((((__builtin_constant_p(__size)) && (__builtin_constant_p(__n))) && ((__size | __n) < (((size_t)1) << (((8) * sizeof(size_t)) / (2))))) && ((__size * __n) <= (8)))



{
auto size_t __cnt = (__size * __n);
auto char *__cptr = ((char *)__ptr);
if (__cnt == (0)) {
return 0; }

for (; __cnt > (0); --__cnt)
{
auto int __c = ((__builtin_expect((__stream->_IO_read_ptr) >= (__stream->_IO_read_end), 0)) ? __uflow(__stream) : (*((unsigned char *)((__stream->_IO_read_ptr)++))));
if (__c == (-1)) {
break; }
(*(__cptr++)) = __c;
}
return (__cptr - (char *)__ptr) / __size;
}

return __fread_unlocked_alias(__ptr, __size, __n, __stream);
} }
# 62 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef unsigned CUdeviceptr; }

extern "C" { typedef int CUdevice; }
extern "C" { typedef struct CUctx_st *CUcontext; }
extern "C" { typedef struct CUmod_st *CUmodule; }
extern "C" { typedef struct CUfunc_st *CUfunction; }
extern "C" { typedef struct CUarray_st *CUarray; }
extern "C" { typedef struct CUtexref_st *CUtexref; }
extern "C" { typedef struct CUevent_st *CUevent; }
extern "C" { typedef struct CUstream_st *CUstream; }
# 90 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 82 "/home/normal/cuda/bin/../include/cuda.h"
enum CUctx_flags_enum {
CU_CTX_SCHED_AUTO,
CU_CTX_SCHED_SPIN,
CU_CTX_SCHED_YIELD,
CU_CTX_SCHED_MASK,
CU_CTX_BLOCKING_SYNC,
CU_CTX_MAP_HOST = 8,
CU_CTX_FLAGS_MASK = 15
} CUctx_flags; }
# 98 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 95 "/home/normal/cuda/bin/../include/cuda.h"
enum CUevent_flags_enum {
CU_EVENT_DEFAULT,
CU_EVENT_BLOCKING_SYNC
} CUevent_flags; }
# 112 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 103 "/home/normal/cuda/bin/../include/cuda.h"
enum CUarray_format_enum {
CU_AD_FORMAT_UNSIGNED_INT8 = 1,
CU_AD_FORMAT_UNSIGNED_INT16,
CU_AD_FORMAT_UNSIGNED_INT32,
CU_AD_FORMAT_SIGNED_INT8 = 8,
CU_AD_FORMAT_SIGNED_INT16,
CU_AD_FORMAT_SIGNED_INT32,
CU_AD_FORMAT_HALF = 16,
CU_AD_FORMAT_FLOAT = 32
} CUarray_format; }
# 121 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 117 "/home/normal/cuda/bin/../include/cuda.h"
enum CUaddress_mode_enum {
CU_TR_ADDRESS_MODE_WRAP,
CU_TR_ADDRESS_MODE_CLAMP,
CU_TR_ADDRESS_MODE_MIRROR
} CUaddress_mode; }
# 129 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 126 "/home/normal/cuda/bin/../include/cuda.h"
enum CUfilter_mode_enum {
CU_TR_FILTER_MODE_POINT,
CU_TR_FILTER_MODE_LINEAR
} CUfilter_mode; }
# 158 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 134 "/home/normal/cuda/bin/../include/cuda.h"
enum CUdevice_attribute_enum {
CU_DEVICE_ATTRIBUTE_MAX_THREADS_PER_BLOCK = 1,
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_X,
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Y,
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Z,
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_X,
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Y,
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Z,
CU_DEVICE_ATTRIBUTE_MAX_SHARED_MEMORY_PER_BLOCK,
CU_DEVICE_ATTRIBUTE_SHARED_MEMORY_PER_BLOCK = 8,
CU_DEVICE_ATTRIBUTE_TOTAL_CONSTANT_MEMORY,
CU_DEVICE_ATTRIBUTE_WARP_SIZE,
CU_DEVICE_ATTRIBUTE_MAX_PITCH,
CU_DEVICE_ATTRIBUTE_MAX_REGISTERS_PER_BLOCK,
CU_DEVICE_ATTRIBUTE_REGISTERS_PER_BLOCK = 12,
CU_DEVICE_ATTRIBUTE_CLOCK_RATE,
CU_DEVICE_ATTRIBUTE_TEXTURE_ALIGNMENT,

CU_DEVICE_ATTRIBUTE_GPU_OVERLAP,
CU_DEVICE_ATTRIBUTE_MULTIPROCESSOR_COUNT,
CU_DEVICE_ATTRIBUTE_KERNEL_EXEC_TIMEOUT,
CU_DEVICE_ATTRIBUTE_INTEGRATED,
CU_DEVICE_ATTRIBUTE_CAN_MAP_HOST_MEMORY,
CU_DEVICE_ATTRIBUTE_COMPUTE_MODE
} CUdevice_attribute; }
# 174 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 163 "/home/normal/cuda/bin/../include/cuda.h"
struct CUdevprop_st {
int maxThreadsPerBlock;
int maxThreadsDim[3];
int maxGridSize[3];
int sharedMemPerBlock;
int totalConstantMemory;
int SIMDWidth;
int memPitch;
int regsPerBlock;
int clockRate;
int textureAlign;
} CUdevprop; }
# 211 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 179 "/home/normal/cuda/bin/../include/cuda.h"
enum CUfunction_attribute_enum {
# 185 "/home/normal/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_MAX_THREADS_PER_BLOCK,
# 192 "/home/normal/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_SHARED_SIZE_BYTES,
# 198 "/home/normal/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_CONST_SIZE_BYTES,




CU_FUNC_ATTRIBUTE_LOCAL_SIZE_BYTES,




CU_FUNC_ATTRIBUTE_NUM_REGS,

CU_FUNC_ATTRIBUTE_MAX
} CUfunction_attribute; }
# 220 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 216 "/home/normal/cuda/bin/../include/cuda.h"
enum CUmemorytype_enum {
CU_MEMORYTYPE_HOST = 1,
CU_MEMORYTYPE_DEVICE,
CU_MEMORYTYPE_ARRAY
} CUmemorytype; }
# 229 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 225 "/home/normal/cuda/bin/../include/cuda.h"
enum CUcomputemode_enum {
CU_COMPUTEMODE_DEFAULT,
CU_COMPUTEMODE_EXCLUSIVE,
CU_COMPUTEMODE_PROHIBITED
} CUcomputemode; }
# 308 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 234 "/home/normal/cuda/bin/../include/cuda.h"
enum CUjit_option_enum {




CU_JIT_MAX_REGISTERS,
# 251 "/home/normal/cuda/bin/../include/cuda.h"
CU_JIT_THREADS_PER_BLOCK,
# 257 "/home/normal/cuda/bin/../include/cuda.h"
CU_JIT_WALL_TIME,
# 263 "/home/normal/cuda/bin/../include/cuda.h"
CU_JIT_INFO_LOG_BUFFER,
# 270 "/home/normal/cuda/bin/../include/cuda.h"
CU_JIT_INFO_LOG_BUFFER_SIZE_BYTES,
# 276 "/home/normal/cuda/bin/../include/cuda.h"
CU_JIT_ERROR_LOG_BUFFER,
# 283 "/home/normal/cuda/bin/../include/cuda.h"
CU_JIT_ERROR_LOG_BUFFER_SIZE_BYTES,
# 289 "/home/normal/cuda/bin/../include/cuda.h"
CU_JIT_OPTIMIZATION_LEVEL,
# 295 "/home/normal/cuda/bin/../include/cuda.h"
CU_JIT_TARGET_FROM_CUCONTEXT,




CU_JIT_TARGET,
# 306 "/home/normal/cuda/bin/../include/cuda.h"
CU_JIT_FALLBACK_STRATEGY

} CUjit_option; }
# 319 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 313 "/home/normal/cuda/bin/../include/cuda.h"
enum CUjit_target_enum {

CU_TARGET_COMPUTE_10,
CU_TARGET_COMPUTE_11,
CU_TARGET_COMPUTE_12,
CU_TARGET_COMPUTE_13
} CUjit_target; }
# 332 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 324 "/home/normal/cuda/bin/../include/cuda.h"
enum CUjit_fallback_enum {


CU_PREFER_PTX,


CU_PREFER_BINARY

} CUjit_fallback; }
# 380 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 343 "/home/normal/cuda/bin/../include/cuda.h"
enum cudaError_enum {

CUDA_SUCCESS,
CUDA_ERROR_INVALID_VALUE,
CUDA_ERROR_OUT_OF_MEMORY,
CUDA_ERROR_NOT_INITIALIZED,
CUDA_ERROR_DEINITIALIZED,

CUDA_ERROR_NO_DEVICE = 100,
CUDA_ERROR_INVALID_DEVICE,

CUDA_ERROR_INVALID_IMAGE = 200,
CUDA_ERROR_INVALID_CONTEXT,
CUDA_ERROR_CONTEXT_ALREADY_CURRENT,
CUDA_ERROR_MAP_FAILED = 205,
CUDA_ERROR_UNMAP_FAILED,
CUDA_ERROR_ARRAY_IS_MAPPED,
CUDA_ERROR_ALREADY_MAPPED,
CUDA_ERROR_NO_BINARY_FOR_GPU,
CUDA_ERROR_ALREADY_ACQUIRED,
CUDA_ERROR_NOT_MAPPED,

CUDA_ERROR_INVALID_SOURCE = 300,
CUDA_ERROR_FILE_NOT_FOUND,

CUDA_ERROR_INVALID_HANDLE = 400,

CUDA_ERROR_NOT_FOUND = 500,

CUDA_ERROR_NOT_READY = 600,

CUDA_ERROR_LAUNCH_FAILED = 700,
CUDA_ERROR_LAUNCH_OUT_OF_RESOURCES,
CUDA_ERROR_LAUNCH_TIMEOUT,
CUDA_ERROR_LAUNCH_INCOMPATIBLE_TEXTURING,

CUDA_ERROR_UNKNOWN = 999
} CUresult; }
# 426 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 406 "/home/normal/cuda/bin/../include/cuda.h"
struct CUDA_MEMCPY2D_st {

unsigned srcXInBytes;
unsigned srcY;
CUmemorytype srcMemoryType;
const void *srcHost;
CUdeviceptr srcDevice;
CUarray srcArray;
unsigned srcPitch;

unsigned dstXInBytes;
unsigned dstY;
CUmemorytype dstMemoryType;
void *dstHost;
CUdeviceptr dstDevice;
CUarray dstArray;
unsigned dstPitch;

unsigned WidthInBytes;
unsigned Height;
} CUDA_MEMCPY2D; }
# 460 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 431 "/home/normal/cuda/bin/../include/cuda.h"
struct CUDA_MEMCPY3D_st {

unsigned srcXInBytes;
unsigned srcY;
unsigned srcZ;
unsigned srcLOD;
CUmemorytype srcMemoryType;
const void *srcHost;
CUdeviceptr srcDevice;
CUarray srcArray;
void *reserved0;
unsigned srcPitch;
unsigned srcHeight;

unsigned dstXInBytes;
unsigned dstY;
unsigned dstZ;
unsigned dstLOD;
CUmemorytype dstMemoryType;
void *dstHost;
CUdeviceptr dstDevice;
CUarray dstArray;
void *reserved1;
unsigned dstPitch;
unsigned dstHeight;

unsigned WidthInBytes;
unsigned Height;
unsigned Depth;
} CUDA_MEMCPY3D; }
# 473 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 466 "/home/normal/cuda/bin/../include/cuda.h"
struct CUDA_ARRAY_DESCRIPTOR {
unsigned Width;
unsigned Height;

CUarray_format Format;

unsigned NumChannels;
} CUDA_ARRAY_DESCRIPTOR; }
# 489 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 479 "/home/normal/cuda/bin/../include/cuda.h"
struct CUDA_ARRAY3D_DESCRIPTOR {
unsigned Width;
unsigned Height;
unsigned Depth;

CUarray_format Format;

unsigned NumChannels;

unsigned Flags;
} CUDA_ARRAY3D_DESCRIPTOR; }
# 528 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuInit(unsigned);




extern "C" CUresult cuDriverGetVersion(int *);
# 541 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceGet(CUdevice *, int);
extern "C" CUresult cuDeviceGetCount(int *);
extern "C" CUresult cuDeviceGetName(char *, int, CUdevice);
extern "C" CUresult cuDeviceComputeCapability(int *, int *, CUdevice);
extern "C" CUresult cuDeviceTotalMem(unsigned *, CUdevice);
extern "C" CUresult cuDeviceGetProperties(CUdevprop *, CUdevice);
extern "C" CUresult cuDeviceGetAttribute(int *, CUdevice_attribute, CUdevice);
# 555 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxCreate(CUcontext *, unsigned, CUdevice);
extern "C" CUresult cuCtxDestroy(CUcontext);
extern "C" CUresult cuCtxAttach(CUcontext *, unsigned);
extern "C" CUresult cuCtxDetach(CUcontext);
extern "C" CUresult cuCtxPushCurrent(CUcontext);
extern "C" CUresult cuCtxPopCurrent(CUcontext *);
extern "C" CUresult cuCtxGetDevice(CUdevice *);
extern "C" CUresult cuCtxSynchronize();
# 571 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleLoad(CUmodule *, const char *);
extern "C" CUresult cuModuleLoadData(CUmodule *, const void *);
extern "C" CUresult cuModuleLoadDataEx(CUmodule *, const void *, unsigned, CUjit_option *, void **);
extern "C" CUresult cuModuleLoadFatBinary(CUmodule *, const void *);
extern "C" CUresult cuModuleUnload(CUmodule);
extern "C" CUresult cuModuleGetFunction(CUfunction *, CUmodule, const char *);
extern "C" CUresult cuModuleGetGlobal(CUdeviceptr *, unsigned *, CUmodule, const char *);
extern "C" CUresult cuModuleGetTexRef(CUtexref *, CUmodule, const char *);
# 586 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemGetInfo(unsigned *, unsigned *);

extern "C" CUresult cuMemAlloc(CUdeviceptr *, unsigned);
extern "C" CUresult cuMemAllocPitch(CUdeviceptr *, unsigned *, unsigned, unsigned, unsigned);
# 597 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemFree(CUdeviceptr);
extern "C" CUresult cuMemGetAddressRange(CUdeviceptr *, unsigned *, CUdeviceptr);

extern "C" CUresult cuMemAllocHost(void **, unsigned);
extern "C" CUresult cuMemFreeHost(void *);

extern "C" CUresult cuMemHostAlloc(void **, size_t, unsigned);

extern "C" CUresult cuMemHostGetDevicePointer(CUdeviceptr *, void *, unsigned);
# 618 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyHtoD(CUdeviceptr, const void *, unsigned);
extern "C" CUresult cuMemcpyDtoH(void *, CUdeviceptr, unsigned);


extern "C" CUresult cuMemcpyDtoD(CUdeviceptr, CUdeviceptr, unsigned);


extern "C" CUresult cuMemcpyDtoA(CUarray, unsigned, CUdeviceptr, unsigned);
extern "C" CUresult cuMemcpyAtoD(CUdeviceptr, CUarray, unsigned, unsigned);


extern "C" CUresult cuMemcpyHtoA(CUarray, unsigned, const void *, unsigned);
extern "C" CUresult cuMemcpyAtoH(void *, CUarray, unsigned, unsigned);


extern "C" CUresult cuMemcpyAtoA(CUarray, unsigned, CUarray, unsigned, unsigned);



extern "C" CUresult cuMemcpy2D(const CUDA_MEMCPY2D *);
extern "C" CUresult cuMemcpy2DUnaligned(const CUDA_MEMCPY2D *);



extern "C" CUresult cuMemcpy3D(const CUDA_MEMCPY3D *);
# 657 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyHtoDAsync(CUdeviceptr, const void *, unsigned, CUstream);

extern "C" CUresult cuMemcpyDtoHAsync(void *, CUdeviceptr, unsigned, CUstream);



extern "C" CUresult cuMemcpyHtoAAsync(CUarray, unsigned, const void *, unsigned, CUstream);

extern "C" CUresult cuMemcpyAtoHAsync(void *, CUarray, unsigned, unsigned, CUstream);



extern "C" CUresult cuMemcpy2DAsync(const CUDA_MEMCPY2D *, CUstream);


extern "C" CUresult cuMemcpy3DAsync(const CUDA_MEMCPY3D *, CUstream);
# 679 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD8(CUdeviceptr, unsigned char, unsigned);
extern "C" CUresult cuMemsetD16(CUdeviceptr, unsigned short, unsigned);
extern "C" CUresult cuMemsetD32(CUdeviceptr, unsigned, unsigned);

extern "C" CUresult cuMemsetD2D8(CUdeviceptr, unsigned, unsigned char, unsigned, unsigned);
extern "C" CUresult cuMemsetD2D16(CUdeviceptr, unsigned, unsigned short, unsigned, unsigned);
extern "C" CUresult cuMemsetD2D32(CUdeviceptr, unsigned, unsigned, unsigned, unsigned);
# 694 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuFuncSetBlockShape(CUfunction, int, int, int);
extern "C" CUresult cuFuncSetSharedSize(CUfunction, unsigned);
extern "C" CUresult cuFuncGetAttribute(int *, CUfunction_attribute, CUfunction);
# 704 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuArrayCreate(CUarray *, const CUDA_ARRAY_DESCRIPTOR *);
extern "C" CUresult cuArrayGetDescriptor(CUDA_ARRAY_DESCRIPTOR *, CUarray);
extern "C" CUresult cuArrayDestroy(CUarray);

extern "C" CUresult cuArray3DCreate(CUarray *, const CUDA_ARRAY3D_DESCRIPTOR *);
extern "C" CUresult cuArray3DGetDescriptor(CUDA_ARRAY3D_DESCRIPTOR *, CUarray);
# 717 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefCreate(CUtexref *);
extern "C" CUresult cuTexRefDestroy(CUtexref);

extern "C" CUresult cuTexRefSetArray(CUtexref, CUarray, unsigned);
extern "C" CUresult cuTexRefSetAddress(unsigned *, CUtexref, CUdeviceptr, unsigned);
extern "C" CUresult cuTexRefSetAddress2D(CUtexref, const CUDA_ARRAY_DESCRIPTOR *, CUdeviceptr, unsigned);
extern "C" CUresult cuTexRefSetFormat(CUtexref, CUarray_format, int);
extern "C" CUresult cuTexRefSetAddressMode(CUtexref, int, CUaddress_mode);
extern "C" CUresult cuTexRefSetFilterMode(CUtexref, CUfilter_mode);
extern "C" CUresult cuTexRefSetFlags(CUtexref, unsigned);

extern "C" CUresult cuTexRefGetAddress(CUdeviceptr *, CUtexref);
extern "C" CUresult cuTexRefGetArray(CUarray *, CUtexref);
extern "C" CUresult cuTexRefGetAddressMode(CUaddress_mode *, CUtexref, int);
extern "C" CUresult cuTexRefGetFilterMode(CUfilter_mode *, CUtexref);
extern "C" CUresult cuTexRefGetFormat(CUarray_format *, int *, CUtexref);
extern "C" CUresult cuTexRefGetFlags(unsigned *, CUtexref);
# 741 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuParamSetSize(CUfunction, unsigned);
extern "C" CUresult cuParamSeti(CUfunction, int, unsigned);
extern "C" CUresult cuParamSetf(CUfunction, int, float);
extern "C" CUresult cuParamSetv(CUfunction, int, void *, unsigned);
extern "C" CUresult cuParamSetTexRef(CUfunction, int, CUtexref);
# 753 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuLaunch(CUfunction);
extern "C" CUresult cuLaunchGrid(CUfunction, int, int);
extern "C" CUresult cuLaunchGridAsync(CUfunction, int, int, CUstream);
# 762 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuEventCreate(CUevent *, unsigned);
extern "C" CUresult cuEventRecord(CUevent, CUstream);
extern "C" CUresult cuEventQuery(CUevent);
extern "C" CUresult cuEventSynchronize(CUevent);
extern "C" CUresult cuEventDestroy(CUevent);
extern "C" CUresult cuEventElapsedTime(float *, CUevent, CUevent);
# 774 "/home/normal/cuda/bin/../include/cuda.h"
extern "C" CUresult cuStreamCreate(CUstream *, unsigned);
extern "C" CUresult cuStreamQuery(CUstream);
extern "C" CUresult cuStreamSynchronize(CUstream);
extern "C" CUresult cuStreamDestroy(CUstream);
# 64 "../../sdk/cutil.h"
enum CUTBoolean {

CUTFalse,
CUTTrue
};
# 76 "../../sdk/cutil.h"
extern "C" void cutFree(void *);
# 94 "../../sdk/cutil.h"
extern "C" void cutCheckBankAccess(unsigned, unsigned, unsigned, unsigned, unsigned, unsigned, const char *, const int, const char *, const int);
# 107 "../../sdk/cutil.h"
extern "C" char *cutFindFilePath(const char *, const char *);
# 122 "../../sdk/cutil.h"
extern "C" CUTBoolean cutReadFilef(const char *, float **, unsigned *, bool = false);
# 138 "../../sdk/cutil.h"
extern "C" CUTBoolean cutReadFiled(const char *, double **, unsigned *, bool = false);
# 154 "../../sdk/cutil.h"
extern "C" CUTBoolean cutReadFilei(const char *, int **, unsigned *, bool = false);
# 169 "../../sdk/cutil.h"
extern "C" CUTBoolean cutReadFileui(const char *, unsigned **, unsigned *, bool = false);
# 185 "../../sdk/cutil.h"
extern "C" CUTBoolean cutReadFileb(const char *, char **, unsigned *, bool = false);
# 201 "../../sdk/cutil.h"
extern "C" CUTBoolean cutReadFileub(const char *, unsigned char **, unsigned *, bool = false);
# 215 "../../sdk/cutil.h"
extern "C" CUTBoolean cutWriteFilef(const char *, const float *, unsigned, const float, bool = false);
# 229 "../../sdk/cutil.h"
extern "C" CUTBoolean cutWriteFiled(const char *, const float *, unsigned, const double, bool = false);
# 241 "../../sdk/cutil.h"
extern "C" CUTBoolean cutWriteFilei(const char *, const int *, unsigned, bool = false);
# 253 "../../sdk/cutil.h"
extern "C" CUTBoolean cutWriteFileui(const char *, const unsigned *, unsigned, bool = false);
# 265 "../../sdk/cutil.h"
extern "C" CUTBoolean cutWriteFileb(const char *, const char *, unsigned, bool = false);
# 277 "../../sdk/cutil.h"
extern "C" CUTBoolean cutWriteFileub(const char *, const unsigned char *, unsigned, bool = false);
# 293 "../../sdk/cutil.h"
extern "C" CUTBoolean cutLoadPGMub(const char *, unsigned char **, unsigned *, unsigned *);
# 306 "../../sdk/cutil.h"
extern "C" CUTBoolean cutLoadPPMub(const char *, unsigned char **, unsigned *, unsigned *);
# 320 "../../sdk/cutil.h"
extern "C" CUTBoolean cutLoadPPM4ub(const char *, unsigned char **, unsigned *, unsigned *);
# 336 "../../sdk/cutil.h"
extern "C" CUTBoolean cutLoadPGMi(const char *, unsigned **, unsigned *, unsigned *);
# 352 "../../sdk/cutil.h"
extern "C" CUTBoolean cutLoadPGMs(const char *, unsigned short **, unsigned *, unsigned *);
# 367 "../../sdk/cutil.h"
extern "C" CUTBoolean cutLoadPGMf(const char *, float **, unsigned *, unsigned *);
# 379 "../../sdk/cutil.h"
extern "C" CUTBoolean cutSavePGMub(const char *, unsigned char *, unsigned, unsigned);
# 391 "../../sdk/cutil.h"
extern "C" CUTBoolean cutSavePPMub(const char *, unsigned char *, unsigned, unsigned);
# 404 "../../sdk/cutil.h"
extern "C" CUTBoolean cutSavePPM4ub(const char *, unsigned char *, unsigned, unsigned);
# 416 "../../sdk/cutil.h"
extern "C" CUTBoolean cutSavePGMi(const char *, unsigned *, unsigned, unsigned);
# 428 "../../sdk/cutil.h"
extern "C" CUTBoolean cutSavePGMs(const char *, unsigned short *, unsigned, unsigned);
# 440 "../../sdk/cutil.h"
extern "C" CUTBoolean cutSavePGMf(const char *, float *, unsigned, unsigned);
# 461 "../../sdk/cutil.h"
extern "C" CUTBoolean cutCheckCmdLineFlag(const int, const char **, const char *);
# 475 "../../sdk/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumenti(const int, const char **, const char *, int *);
# 489 "../../sdk/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumentf(const int, const char **, const char *, float *);
# 503 "../../sdk/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumentstr(const int, const char **, const char *, char **);
# 518 "../../sdk/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumentListstr(const int, const char **, const char *, char **, unsigned *);
# 532 "../../sdk/cutil.h"
extern "C" CUTBoolean cutCheckCondition(int, const char *, const int);
# 544 "../../sdk/cutil.h"
extern "C" CUTBoolean cutComparef(const float *, const float *, const unsigned);
# 557 "../../sdk/cutil.h"
extern "C" CUTBoolean cutComparei(const int *, const int *, const unsigned);
# 571 "../../sdk/cutil.h"
extern "C" CUTBoolean cutCompareuit(const unsigned *, const unsigned *, const unsigned, const float, const float);
# 584 "../../sdk/cutil.h"
extern "C" CUTBoolean cutCompareub(const unsigned char *, const unsigned char *, const unsigned);
# 599 "../../sdk/cutil.h"
extern "C" CUTBoolean cutCompareubt(const unsigned char *, const unsigned char *, const unsigned, const float, const float);
# 613 "../../sdk/cutil.h"
extern "C" CUTBoolean cutCompareube(const unsigned char *, const unsigned char *, const unsigned, const float);
# 627 "../../sdk/cutil.h"
extern "C" CUTBoolean cutComparefe(const float *, const float *, const unsigned, const float);
# 642 "../../sdk/cutil.h"
extern "C" CUTBoolean cutComparefet(const float *, const float *, const unsigned, const float, const float);
# 657 "../../sdk/cutil.h"
extern "C" CUTBoolean cutCompareL2fe(const float *, const float *, const unsigned, const float);
# 672 "../../sdk/cutil.h"
extern "C" CUTBoolean cutComparePPM(const char *, const char *, const float, const float, bool = false);
# 685 "../../sdk/cutil.h"
extern "C" CUTBoolean cutCreateTimer(unsigned *);
# 694 "../../sdk/cutil.h"
extern "C" CUTBoolean cutDeleteTimer(unsigned);
# 702 "../../sdk/cutil.h"
extern "C" CUTBoolean cutStartTimer(const unsigned);
# 710 "../../sdk/cutil.h"
extern "C" CUTBoolean cutStopTimer(const unsigned);
# 718 "../../sdk/cutil.h"
extern "C" CUTBoolean cutResetTimer(const unsigned);
# 727 "../../sdk/cutil.h"
extern "C" float cutGetTimerValue(const unsigned);
# 738 "../../sdk/cutil.h"
extern "C" float cutGetAverageTimerValue(const unsigned);
# 19 "../../sdk/cutil_inline_bankchecker.h"
inline void __cutilBankChecker(unsigned tidx, unsigned tidy, unsigned tidz, unsigned
bdimx, unsigned bdimy, unsigned bdimz, char *
aname, int index, char *file, int line)
{
cutCheckBankAccess(tidx, tidy, tidz, bdimx, bdimy, bdimz, file, line, aname, index);
}
# 162 "/home/normal/cuda/bin/../include/cuComplex.h"
extern "C" { typedef float2 cuFloatComplex; }

extern "C" { static inline float cuCrealf(cuFloatComplex x)
{
return x.x;
} }

extern "C" { static inline float cuCimagf(cuFloatComplex x)
{
return x.y;
} }

extern "C" { static inline cuFloatComplex make_cuFloatComplex(float
r, float i)
{
auto cuFloatComplex res;
(res.x) = r;
(res.y) = i;
return res;
} }

extern "C" { static inline cuFloatComplex cuConjf(cuFloatComplex x)
{
return make_cuFloatComplex(cuCrealf(x), -cuCimagf(x));
} }
extern "C" { static inline cuFloatComplex cuCaddf(cuFloatComplex x, cuFloatComplex
y)
{
return make_cuFloatComplex(cuCrealf(x) + cuCrealf(y), cuCimagf(x) + cuCimagf(y));

} }

extern "C" { static inline cuFloatComplex cuCsubf(cuFloatComplex x, cuFloatComplex
y)
{
return make_cuFloatComplex(cuCrealf(x) - cuCrealf(y), cuCimagf(x) - cuCimagf(y));

} }
# 206 "/home/normal/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuFloatComplex cuCmulf(cuFloatComplex x, cuFloatComplex
y)
{
auto cuFloatComplex prod;
prod = make_cuFloatComplex(cuCrealf(x) * cuCrealf(y) - cuCimagf(x) * cuCimagf(y), cuCrealf(x) * cuCimagf(y) + cuCimagf(x) * cuCrealf(y));



return prod;
} }
# 222 "/home/normal/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuFloatComplex cuCdivf(cuFloatComplex x, cuFloatComplex
y)
{
auto cuFloatComplex quot;
auto float s = ((float)fabs((double)cuCrealf(y)) + (float)fabs((double)cuCimagf(y)));

auto float oos = ((1.0F) / s);
auto float ars = (cuCrealf(x) * oos);
auto float ais = (cuCimagf(x) * oos);
auto float brs = (cuCrealf(y) * oos);
auto float bis = (cuCimagf(y) * oos);
s = brs * brs + bis * bis;
oos = (1.0F) / s;
quot = make_cuFloatComplex((ars * brs + ais * bis) * oos, (ais * brs - ars * bis) * oos);

return quot;
} }
# 248 "/home/normal/cuda/bin/../include/cuComplex.h"
extern "C" { static inline float cuCabsf(cuFloatComplex x)
{
auto float a = cuCrealf(x);
auto float b = cuCimagf(x);
auto float v; auto float w; auto float t;
a = (float)fabs(a);
b = (float)fabs(b);
if (a > b) {
v = a;
w = b;
} else {
v = b;
w = a;
}
t = w / v;
t = (1.0F) + t * t;
t = v * (float)sqrt(t);
if (((v == (0.0F)) || (v > (3.402823466e+38F))) || (w > (3.402823466e+38F))) {
t = v + w;
}
return t;
} }


extern "C" { typedef double2 cuDoubleComplex; }

extern "C" { static inline double cuCreal(cuDoubleComplex x)
{
return x.x;
} }

extern "C" { static inline double cuCimag(cuDoubleComplex x)
{
return x.y;
} }

extern "C" { static inline cuDoubleComplex make_cuDoubleComplex(double
r, double i)
{
auto cuDoubleComplex res;
(res.x) = r;
(res.y) = i;
return res;
} }

extern "C" { static inline cuDoubleComplex cuConj(cuDoubleComplex x)
{
return make_cuDoubleComplex(cuCreal(x), -cuCimag(x));
} }

extern "C" { static inline cuDoubleComplex cuCadd(cuDoubleComplex x, cuDoubleComplex
y)
{
return make_cuDoubleComplex(cuCreal(x) + cuCreal(y), cuCimag(x) + cuCimag(y));

} }

extern "C" { static inline cuDoubleComplex cuCsub(cuDoubleComplex x, cuDoubleComplex
y)
{
return make_cuDoubleComplex(cuCreal(x) - cuCreal(y), cuCimag(x) - cuCimag(y));

} }
# 317 "/home/normal/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuDoubleComplex cuCmul(cuDoubleComplex x, cuDoubleComplex
y)
{
auto cuDoubleComplex prod;
prod = make_cuDoubleComplex(cuCreal(x) * cuCreal(y) - cuCimag(x) * cuCimag(y), cuCreal(x) * cuCimag(y) + cuCimag(x) * cuCreal(y));



return prod;
} }
# 333 "/home/normal/cuda/bin/../include/cuComplex.h"
extern "C" { static inline cuDoubleComplex cuCdiv(cuDoubleComplex x, cuDoubleComplex
y)
{
auto cuDoubleComplex quot;
auto double s = (fabs(cuCreal(y)) + fabs(cuCimag(y)));
auto double oos = ((1.0) / s);
auto double ars = (cuCreal(x) * oos);
auto double ais = (cuCimag(x) * oos);
auto double brs = (cuCreal(y) * oos);
auto double bis = (cuCimag(y) * oos);
s = brs * brs + bis * bis;
oos = (1.0) / s;
quot = make_cuDoubleComplex((ars * brs + ais * bis) * oos, (ais * brs - ars * bis) * oos);

return quot;
} }
# 356 "/home/normal/cuda/bin/../include/cuComplex.h"
extern "C" { static inline double cuCabs(cuDoubleComplex x)
{
auto double a = cuCreal(x);
auto double b = cuCimag(x);
auto double v; auto double w; auto double t;
a = fabs(a);
b = fabs(b);
if (a > b) {
v = a;
w = b;
} else {
v = b;
w = a;
}
t = w / v;
t = (1.0) + t * t;
t = v * sqrt(t);
if (((v == (0.0)) || (v > (1.797693134862315708e+308))) || (w > (1.797693134862315708e+308)))
{
t = v + w;
}
return t;
} }
# 387 "/home/normal/cuda/bin/../include/cuComplex.h"
typedef cuFloatComplex cuComplex;
static inline cuComplex make_cuComplex(float x, float
y)
{
return make_cuFloatComplex(x, y);
}


static inline cuDoubleComplex cuComplexFloatToDouble(cuFloatComplex
c)
{
return make_cuDoubleComplex((double)cuCrealf(c), (double)cuCimagf(c));
}

static inline cuFloatComplex cuComplexDoubleToFloat(cuDoubleComplex
c)
{
return make_cuFloatComplex((float)cuCreal(c), (float)cuCimag(c));
}
# 69 "/home/normal/cuda/bin/../include/cufft.h"
extern "C" { typedef
# 59 "/home/normal/cuda/bin/../include/cufft.h"
enum cufftResult_t {
CUFFT_SUCCESS,
CUFFT_INVALID_PLAN,
CUFFT_ALLOC_FAILED,
CUFFT_INVALID_TYPE,
CUFFT_INVALID_VALUE,
CUFFT_INTERNAL_ERROR,
CUFFT_EXEC_FAILED,
CUFFT_SETUP_FAILED,
CUFFT_INVALID_SIZE
} cufftResult; }




extern "C" { typedef unsigned cufftHandle; }


extern "C" { typedef float cufftReal; }




extern "C" { typedef cuComplex cufftComplex; }
# 93 "/home/normal/cuda/bin/../include/cufft.h"
extern "C" { typedef
# 89 "/home/normal/cuda/bin/../include/cufft.h"
enum cufftType_t {
CUFFT_R2C = 42,
CUFFT_C2R = 44,
CUFFT_C2C = 41
} cufftType; }

extern "C" cufftResult cufftPlan1d(cufftHandle *, int, cufftType, int);




extern "C" cufftResult cufftPlan2d(cufftHandle *, int, int, cufftType);



extern "C" cufftResult cufftPlan3d(cufftHandle *, int, int, int, cufftType);



extern "C" cufftResult cufftDestroy(cufftHandle);

extern "C" cufftResult cufftExecC2C(cufftHandle, cufftComplex *, cufftComplex *, int);




extern "C" cufftResult cufftExecR2C(cufftHandle, cufftReal *, cufftComplex *);



extern "C" cufftResult cufftExecC2R(cufftHandle, cufftComplex *, cufftReal *);
# 22 "../../sdk/cutil_inline_runtime.h"
inline void __cutilCondition(int val, char *file, int line)
{
if ((CUTFalse) == (cutCheckCondition(val, file, line))) {
exit(1);
}
}

inline void __cutilExit(int argc, char **argv)
{
if (!(cutCheckCmdLineFlag(argc, (const char **)argv, "noprompt"))) {
printf("\nPress ENTER to exit...\n");
fflush(stdout);
fflush(stderr);
getchar();
}
exit(0);
}


inline int cutGetMaxGflopsDeviceId()
{
auto int device_count = 0;
cudaGetDeviceCount(&device_count);

auto cudaDeviceProp device_properties;
auto int max_gflops_device = 0;
auto int max_gflops = 0;

auto int current_device = 0;
cudaGetDeviceProperties(&device_properties, current_device);
max_gflops = device_properties.multiProcessorCount * device_properties.clockRate;
++current_device;

while (current_device < device_count)
{
cudaGetDeviceProperties(&device_properties, current_device);
auto int gflops = (device_properties.multiProcessorCount * device_properties.clockRate);
if (gflops > max_gflops)
{
max_gflops = gflops;
max_gflops_device = current_device;
}
++current_device;
}

return max_gflops_device;
}

inline void __cudaSafeCallNoSync(cudaError err, const char *file, const int line)
{
if ((cudaSuccess) != err) {
fprintf(stderr, "cudaSafeCallNoSync() Runtime API error in file <%s>, line %i : %s.\n", file, line, cudaGetErrorString(err));

exit(-1);
}
}

inline void __cudaSafeCall(cudaError err, const char *file, const int line)
{
if ((cudaSuccess) != err) {
fprintf(stderr, "cudaSafeCall() Runtime API error in file <%s>, line %i : %s.\n", file, line, cudaGetErrorString(err));

exit(-1);
}
}

inline void __cudaSafeThreadSync(const char *file, const int line)
{
auto cudaError err = cudaThreadSynchronize();
if ((cudaSuccess) != err) {
fprintf(stderr, "cudaThreadSynchronize() Driver API error in file \'%s\' in line %i : %s.\n", file, line, cudaGetErrorString(err));

exit(-1);
}
}

inline void __cufftSafeCall(cufftResult err, const char *file, const int line)
{
if ((CUFFT_SUCCESS) != err) {
fprintf(stderr, "cufftSafeCall() CUFFT error in file <%s>, line %i.\n", file, line);

exit(-1);
}
}

inline void __cutilCheckError(CUTBoolean err, const char *file, const int line)
{
if ((CUTTrue) != err) {
fprintf(stderr, "CUTIL CUDA error in file <%s>, line %i.\n", file, line);

exit(-1);
}
}

inline void __cutilCheckMsg(const char *errorMessage, const char *file, const int line)
{
auto cudaError_t err = cudaGetLastError();
if ((cudaSuccess) != err) {
fprintf(stderr, "cutilCheckMsg() CUTIL CUDA error: %s in file <%s>, line %i : %s.\n", errorMessage, file, line, cudaGetErrorString(err));

exit(-1);
}
# 132 "../../sdk/cutil_inline_runtime.h"
}
inline void __cutilSafeMalloc(void *pointer, const char *file, const int line)
{
if (!(pointer)) {
fprintf(stderr, "cutilSafeMalloc host malloc failure in file <%s>, line %i\n", file, line);

exit(-1);
}
}


inline void cutilDeviceInit(int ARGC, char **ARGV) { }
# 171 "../../sdk/cutil_inline_runtime.h"
inline void cutilCudaCheckCtxLost(const char *errorMessage, const char *file, const int line)
{
auto cudaError_t err = cudaGetLastError();
if ((cudaSuccess) != err) {
fprintf(stderr, "CUDA error: %s in file \'%s\' in line %i : %s.\n", errorMessage, file, line, cudaGetErrorString(err));

exit(-1);
}
err = cudaThreadSynchronize();
if ((cudaSuccess) != err) {
fprintf(stderr, "CCUDA error: %s in file \'%s\' in line %i : %s.\n", errorMessage, file, line, cudaGetErrorString(err));

exit(-1);
}
}
# 16 "../../sdk/cutil_inline_drvapi.h"
inline void __cuSafeCallNoSync(CUresult err, const char *file, const int line)
{
if ((CUDA_SUCCESS) != err) {
fprintf(stderr, "cuSafeCallNoSync() Driver API error = %04d from file <%s>, line %i.\n", err, file, line);

exit(-1);
}
}
inline void __cuSafeCall(CUresult err, const char *file, const int line)
{
__cuSafeCallNoSync(err, file, line);
}

inline void __cuCtxSync(const char *file, const int line)
{
auto CUresult err = cuCtxSynchronize();
if ((CUDA_SUCCESS) != err) {
fprintf(stderr, "cuCtxSynchronize() API error = %04d in file <%s>, line %i.\n", err, file, line);

exit(-1);
}
}

inline void __cuCheckMsg(const char *msg, const char *file, const int line)
{
auto CUresult err = cuCtxSynchronize();
if ((CUDA_SUCCESS) != err) {
fprintf(stderr, "cutilDrvCheckMsg -> %s", msg);
fprintf(stderr, "cutilDrvCheckMsg -> cuCtxSynchronize API error = %04d in file <%s>, line %i.\n", err, file, line);

exit(-1);
}
}



inline void cutilDeviceInitDrv(int cuDevice, int ARGC, char **ARGV) { }
# 78 "../../sdk/cutil_inline_drvapi.h"
inline void cutilDrvCudaCheckCtxLost(const char *errorMessage, const char *file, const int line)
{
auto CUresult err = cuCtxSynchronize();
if ((CUDA_ERROR_INVALID_CONTEXT) != err) {
fprintf(stderr, "Cuda error: %s in file \'%s\' in line %i\n", errorMessage, file, line);

exit(-1);
}
err = cuCtxSynchronize();
if ((CUDA_SUCCESS) != err) {
fprintf(stderr, "Cuda error: %s in file \'%s\' in line %i\n", errorMessage, file, line);

exit(-1);
}
}
# 12 "../../sdk/cutil_inline.h"
inline void print_NVCC_min_spec(const char *sSDKsample, const char *sNVCCReq, const char *sDriverReq)
{
printf("CUDA %d.%02d Toolkit built this project.\n", 2020 / 1000, 2020 % 100);
printf("  [ %s ] requirements:\n", sSDKsample);
printf(" -> CUDA %s Toolkit\n", sNVCCReq);
printf(" -> %s NVIDIA Display Driver.\n", sDriverReq);
}
# 218 "./scanLargeArray_kernel.cu"
template<bool storeSum, bool isNP2> static void
__wrapper__device_stub_prescan(float *&g_odata, const float *&
g_idata, float *&
g_blockSums, int &
n, int &
blockIndex, int &
baseIndex);
# 218 "./scanLargeArray_kernel.cu"
template<bool storeSum, bool isNP2> void
prescan__entry(float *g_odata, const float *
g_idata, float *
g_blockSums, int
n, int
blockIndex, int
baseIndex){__wrapper__device_stub_prescan<storeSum,isNP2>(g_odata,g_idata,g_blockSums,n,blockIndex,baseIndex);}
# 244 "./scanLargeArray_kernel.cu"
void uniformAdd__entry(float *g_data, float *
uniforms, int
n, int
blockOffset, int
baseIndex);
# 71 "/usr/include/assert.h" 3
extern "C" void __assert_fail(const char *, const char *, unsigned, const char *) throw() __attribute__((__noreturn__));




extern "C" void __assert_perror_fail(int, const char *, unsigned, const char *) throw() __attribute__((__noreturn__));
# 84 "/usr/include/assert.h" 3
extern "C" void __assert(const char *, const char *, int) throw() __attribute__((__noreturn__));
# 37 "./scan.cu"
inline bool isPowerOfTwo(int n)
{
return (n & (n - 1)) == 0;
}


inline int floorPow2(int n)
{
# 52 "./scan.cu"
auto int exp;
frexp((float)n, &exp);
return 1 << (exp - 1);

}



float **g_scanBlockSums;
unsigned g_numEltsAllocated = (0);
unsigned g_numLevelsAllocated = (0);

void preallocBlockSums(unsigned maxNumElements)
{
(g_numEltsAllocated == (0)) ? (static_cast< void>(0)) : __assert_fail("g_numEltsAllocated == 0", "./scan.cu", 66, __PRETTY_FUNCTION__);

g_numEltsAllocated = maxNumElements;

auto unsigned blockSize = (256);
auto unsigned numElts = maxNumElements;

auto int level = 0;

do
{
auto unsigned numBlocks = (max(1, (int)ceil((float)numElts / ((2.0F) * blockSize))));

if (numBlocks > (1))
{
level++;
}
numElts = numBlocks;
} while (numElts > (1));

g_scanBlockSums = (float **)malloc(level * sizeof(float *));
g_numLevelsAllocated = level;

numElts = maxNumElements;
level = 0;

do
{
auto unsigned numBlocks = (max(1, (int)ceil((float)numElts / ((2.0F) * blockSize))));

if (numBlocks > (1))
{
__cudaSafeCall(cudaMalloc((void **)(g_scanBlockSums + level++), numBlocks * sizeof(float)), "./scan.cu", 99);

}
numElts = numBlocks;
} while (numElts > (1));

__cutilCheckMsg("preallocBlockSums", "./scan.cu", 104);
}

void deallocBlockSums()
{
for (unsigned i = (0); i < g_numLevelsAllocated; i++)
{
cudaFree(g_scanBlockSums[i]);
}

__cutilCheckMsg("deallocBlockSums", "./scan.cu", 114);

free((void **)g_scanBlockSums);

g_scanBlockSums = (0);
g_numEltsAllocated = (0);
g_numLevelsAllocated = (0);
}


void prescanArrayRecursive(float *outArray, const float *
inArray, int
numElements, int
level)
{
auto unsigned blockSize = (256);
auto unsigned numBlocks = (max(1, (int)ceil((float)numElements / ((2.0F) * blockSize))));

auto unsigned numThreads;

if (numBlocks > (1)) {
numThreads = blockSize; } else {
if (isPowerOfTwo(numElements)) {
numThreads = numElements / 2; } else {

numThreads = floorPow2(numElements); } }

auto unsigned numEltsPerBlock = (numThreads * (2));



auto unsigned numEltsLastBlock = (numElements - (numBlocks - (1)) * numEltsPerBlock);

auto unsigned numThreadsLastBlock = max(1, numEltsLastBlock / (2));
auto unsigned np2LastBlock = (0);
auto unsigned sharedMemLastBlock = (0);

if (numEltsLastBlock != numEltsPerBlock)
{
np2LastBlock = (1);

if (!isPowerOfTwo(numEltsLastBlock)) {
numThreadsLastBlock = floorPow2(numEltsLastBlock); }

auto unsigned extraSpace = (((2) * numThreadsLastBlock) / (16));
sharedMemLastBlock = sizeof(float) * ((2) * numThreadsLastBlock + extraSpace);

}


auto unsigned extraSpace = (numEltsPerBlock / (16));
auto unsigned sharedMemSize = (sizeof(float) * (numEltsPerBlock + extraSpace));
# 177 "./scan.cu"
auto dim3 grid(max(1, numBlocks - np2LastBlock), 1, 1);
auto dim3 threads(numThreads, 1, 1);


__cutilCheckMsg("prescanArrayRecursive before kernels", "./scan.cu", 181);


if (numBlocks > (1))
{
cudaConfigureCall(grid, threads, sharedMemSize) ? ((void)0) : (prescan__entry< true, false> )(outArray, inArray, g_scanBlockSums[level], numThreads * (2), 0, 0);



__cutilCheckMsg("prescanWithBlockSums", "./scan.cu", 190);
if (np2LastBlock)
{
cudaConfigureCall(1, numThreadsLastBlock, sharedMemLastBlock) ? ((void)0) : (prescan__entry< true, true> )(outArray, inArray, g_scanBlockSums[level], numEltsLastBlock, numBlocks - (1), numElements - numEltsLastBlock);


__cutilCheckMsg("prescanNP2WithBlockSums", "./scan.cu", 196);
}
# 204 "./scan.cu"
prescanArrayRecursive(g_scanBlockSums[level], g_scanBlockSums[level], numBlocks, level + 1);




cudaConfigureCall(grid, threads) ? ((void)0) : uniformAdd__entry(outArray, g_scanBlockSums[level], numElements - numEltsLastBlock, 0, 0);



__cutilCheckMsg("uniformAdd", "./scan.cu", 213);
if (np2LastBlock)
{
cudaConfigureCall(1, numThreadsLastBlock) ? ((void)0) : uniformAdd__entry(outArray, g_scanBlockSums[level], numEltsLastBlock, numBlocks - (1), numElements - numEltsLastBlock);




__cutilCheckMsg("uniformAdd", "./scan.cu", 221);
}
} else {
if (isPowerOfTwo(numElements))
{
cudaConfigureCall(grid, threads, sharedMemSize) ? ((void)0) : (prescan__entry< false, false> )(outArray, inArray, 0, numThreads * (2), 0, 0);

__cutilCheckMsg("prescan", "./scan.cu", 228);
} else

{
cudaConfigureCall(grid, threads, sharedMemSize) ? ((void)0) : (prescan__entry< false, true> )(outArray, inArray, 0, numElements, 0, 0);

__cutilCheckMsg("prescanNP2", "./scan.cu", 234);
} }
}

void prescanArray(float *outArray, float *inArray, int numElements)
{
prescanArrayRecursive(outArray, inArray, numElements, 0);
}
# 45 "scanLargeArray.cu"
extern void runTest(int, char **);



extern "C" unsigned compare(const float *, const float *, const unsigned);


extern "C" void computeGold(float *, float *, const unsigned);
# 58 "scanLargeArray.cu"
int main(int argc, char **argv)
{
runTest(argc, argv);
__cutilExit(argc, argv); return 0;
}
# 68 "scanLargeArray.cu"
void runTest(int argc, char **argv)
{

if (cutCheckCmdLineFlag(argc, (const char **)argv, "device")) {
cutilDeviceInit(argc, argv); } else {

cudaSetDevice(cutGetMaxGflopsDeviceId()); }
# 80 "scanLargeArray.cu"
auto unsigned num_test_iterations = (1);
auto unsigned num_elements = (10000);


cutGetCmdLineArgumenti(argc, (const char **)argv, "n", (int *)(&num_elements));
cutGetCmdLineArgumenti(argc, (const char **)argv, "i", (int *)(&num_test_iterations));

auto unsigned mem_size = (sizeof(float) * num_elements);

auto unsigned timerGPU; auto unsigned timerCPU;
__cutilCheckError(cutCreateTimer(&timerCPU), "scanLargeArray.cu", 90);
__cutilCheckError(cutCreateTimer(&timerGPU), "scanLargeArray.cu", 91);


auto float *h_data = ((float *)malloc(mem_size));


for (unsigned i = (0); i < num_elements; ++i)
{
(h_data[i]) = (1.0F);
}


auto float *reference = ((float *)malloc(mem_size));
cutStartTimer(timerCPU);
for (unsigned i = (0); i < num_test_iterations; i++)
{
computeGold(reference, h_data, num_elements);
}
cutStopTimer(timerCPU);


auto float *d_idata = (__null);
auto float *d_odata = (__null);

__cudaSafeCall(cudaMalloc((void **)(&d_idata), mem_size), "scanLargeArray.cu", 115);
__cudaSafeCall(cudaMalloc((void **)(&d_odata), mem_size), "scanLargeArray.cu", 116);


__cudaSafeCall(cudaMemcpy(d_idata, h_data, mem_size, cudaMemcpyHostToDevice), "scanLargeArray.cu", 119);

__cudaSafeCall(cudaMemcpy(d_odata, h_data, mem_size, cudaMemcpyHostToDevice), "scanLargeArray.cu", 121);

printf("Running parallel prefix sum (prescan) of %d elements\n", num_elements);
printf("This version is work efficient (O(n) adds)\n");
printf("and has very few shared memory bank conflicts\n\n");

preallocBlockSums(num_elements);


prescanArray(d_odata, d_idata, num_elements);



cutStartTimer(timerGPU);
for (unsigned i = (0); i < num_test_iterations; i++)
{

prescanArray(d_odata, d_idata, num_elements);
}
cutStopTimer(timerGPU);

deallocBlockSums();


__cudaSafeCall(cudaMemcpy(h_data, d_odata, sizeof(float) * num_elements, cudaMemcpyDeviceToHost), "scanLargeArray.cu", 146);



if (cutCheckCmdLineFlag(argc, (const char **)argv, "regression"))
{

cutWriteFilef("./data/result.dat", h_data, num_elements, (0.0));
} else

{


auto unsigned result_regtest = (cutComparef(reference, h_data, num_elements));
printf("Test %s\n", ((1) == result_regtest) ? ((const char *)"PASSED") : ((const char *)"FAILED"));
printf("Average GPU execution time: %f ms\n", cutGetTimerValue(timerGPU) / num_test_iterations);
printf("CPU execution time:         %f ms\n", cutGetTimerValue(timerCPU) / num_test_iterations);
}

printf("\nCheck out the CUDA Data Parallel Primitives Library for more on scan.\n");
printf("http://www.gpgpu.org/developer/cudpp\n");


cutDeleteTimer(timerCPU);
cutDeleteTimer(timerGPU);
free(h_data);
free(reference);
cudaFree(d_odata);
cudaFree(d_idata);

cudaThreadExit();
}

# 1 "/tmp/tmpxft_00003fb3_00000000-1_scanLargeArray.cudafe1.stub.c" 1

extern "C" {

# 1 "/tmp/tmpxft_00003fb3_00000000-3_scanLargeArray.fatbin.c" 1
# 1 "/home/normal/cuda/bin/../include/__cudaFatFormat.h" 1
# 83 "/home/normal/cuda/bin/../include/__cudaFatFormat.h"
extern "C" {
# 97 "/home/normal/cuda/bin/../include/__cudaFatFormat.h"
typedef struct {
    char* gpuProfileName;
    char* cubin;
} __cudaFatCubinEntry;
# 113 "/home/normal/cuda/bin/../include/__cudaFatFormat.h"
typedef struct {
    char* gpuProfileName;
    char* ptx;
} __cudaFatPtxEntry;
# 125 "/home/normal/cuda/bin/../include/__cudaFatFormat.h"
typedef struct {
    char* gpuProfileName;
    char* debug;
} __cudaFatDebugEntry;


typedef enum {
      __cudaFatDontSearchFlag = (1 << 0),
      __cudaFatDontCacheFlag = (1 << 1),
      __cudaFatSassDebugFlag = (1 << 2)
} __cudaFatCudaBinaryFlag;
# 144 "/home/normal/cuda/bin/../include/__cudaFatFormat.h"
typedef struct {
    char* name;
} __cudaFatSymbol;
# 158 "/home/normal/cuda/bin/../include/__cudaFatFormat.h"
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
} __cudaFatCudaBinary;
# 194 "/home/normal/cuda/bin/../include/__cudaFatFormat.h"
    typedef enum {
        __cudaFatAvoidPTX,
        __cudaFatPreferBestCode
    } __cudaFatCompilationPolicy;
# 217 "/home/normal/cuda/bin/../include/__cudaFatFormat.h"
void fatGetCubinForGpuWithPolicy( __cudaFatCudaBinary *binary, __cudaFatCompilationPolicy policy, char* gpuName, char* *cubin, char* *dbgInfoFile );
# 228 "/home/normal/cuda/bin/../include/__cudaFatFormat.h"
void fatFreeCubin( char* cubin, char* dbgInfoFile );


}
# 2 "/tmp/tmpxft_00003fb3_00000000-3_scanLargeArray.fatbin.c" 2




extern "C" {


static const unsigned long long __deviceText_$compute_10$[] = {
0x6f69737265762e09ull,0x2e090a342e31206eull,0x7320746567726174ull,0x616d202c30315f6dull,
0x6f745f3436665f70ull,0x2f2f090a3233665full,0x656c69706d6f6320ull,0x2f20687469772064ull,
0x61636f6c2f727375ull,0x6f2f616475632f6cull,0x696c2f34366e6570ull,0x2f090a65622f2f62ull,
0x6e65706f766e202full,0x746c697562206363ull,0x39303032206e6f20ull,0x0a0a39302d34302dull,
0x752e206765722e09ull,0x313c617225203233ull,0x65722e090a3b3e37ull,0x25203436752e2067ull,
0x3b3e37313c616472ull,0x2e206765722e090aull,0x3c61662520323366ull,0x722e090a3b3e3731ull,
0x203436662e206765ull,0x3e37313c61646625ull,0x206765722e090a3bull,0x767225203233752eull,
0x722e090a3b3e353cull,0x203436752e206765ull,0x3b3e353c76647225ull,0x2e206765722e090aull,
0x3c76662520323366ull,0x65722e090a3b3e35ull,0x25203436662e2067ull,0x0a3b3e353c766466ull,
0x2d2d2d2f2f090a0aull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x6d6f43202f2f090aull,0x2f20676e696c6970ull,0x78706d742f706d74ull,0x33303030305f7466ull,
0x303030305f336266ull,0x735f372d30303030ull,0x656772614c6e6163ull,0x70632e7961727241ull,
0x742f2820692e3370ull,0x23494263632f706dull,0x293952417765532eull,0x2d2d2d2d2f2f090aull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x0a2d2d2d2d2d2d2dull,0x2d2d2d2d2f2f090aull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x0a2d2d2d2d2d2d2dull,0x6974704f202f2f09ull,
0x2f2f090a3a736e6full,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x202f2f090a2d2d2dull,0x3a74656772615420ull,0x415349202c787470ull,0x202c30315f6d733aull,
0x6c3a6e6169646e45ull,0x50202c656c747469ull,0x53207265746e696full,0x090a34363a657a69ull,
0x09334f2d20202f2full,0x7a696d6974704f28ull,0x656c206e6f697461ull,0x2f2f090a296c6576ull,
0x44280930672d2020ull,0x76656c2067756265ull,0x202f2f090a296c65ull,0x65522809326d2d20ull,
0x7664612074726f70ull,0x29736569726f7369ull,0x2d2d2d2d2f2f090aull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x0a2d2d2d2d2d2d2dull,0x09656c69662e090aull,0x6d6d6f633c220931ull,
0x656e696c2d646e61ull,0x6c69662e090a223eull,0x6d742f2209320965ull,0x746678706d742f70ull,
0x626633303030305full,0x3030303030305f33ull,0x6163735f362d3030ull,0x7241656772614c6eull,
0x616475632e796172ull,0x227570672e326566ull,0x09656c69662e090aull,0x2f7273752f220933ull,
0x2f6363672f62696cull,0x6c2d34365f363878ull,0x756e672d78756e69ull,0x692f332e332e342full,
0x732f6564756c636eull,0x22682e6665646474ull,0x09656c69662e090aull,0x656d6f682f220934ull,
0x2f6c616d726f6e2full,0x6e69622f61647563ull,0x6c636e692f2e2e2full,0x2f7472632f656475ull,
0x725f656369766564ull,0x682e656d69746e75ull,0x656c69662e090a22ull,0x6d6f682f22093509ull,
0x6c616d726f6e2f65ull,0x69622f616475632full,0x636e692f2e2e2f6eull,0x736f682f6564756cull,
0x656e696665645f74ull,0x662e090a22682e73ull,0x2f22093609656c69ull,0x726f6e2f656d6f68ull,
0x616475632f6c616dull,0x2f2e2e2f6e69622full,0x2f6564756c636e69ull,0x5f6e69746c697562ull,
0x22682e7365707974ull,0x09656c69662e090aull,0x656d6f682f220937ull,0x2f6c616d726f6e2full,
0x6e69622f61647563ull,0x6c636e692f2e2e2full,0x697665642f656475ull,0x73657079745f6563ull,
0x69662e090a22682eull,0x682f22093809656cull,0x6d726f6e2f656d6full,0x2f616475632f6c61ull,
0x692f2e2e2f6e6962ull,0x642f6564756c636eull,0x79745f7265766972ull,0x090a22682e736570ull,
0x093909656c69662eull,0x6e2f656d6f682f22ull,0x75632f6c616d726full,0x2e2f6e69622f6164ull,
0x64756c636e692f2eull,0x7275747865742f65ull,0x2e73657079745f65ull,0x6c69662e090a2268ull,
0x682f220930310965ull,0x6d726f6e2f656d6full,0x2f616475632f6c61ull,0x692f2e2e2f6e6962ull,
0x762f6564756c636eull,0x79745f726f746365ull,0x090a22682e736570ull,0x313109656c69662eull,
0x2f656d6f682f2209ull,0x632f6c616d726f6eull,0x2f6e69622f616475ull,0x756c636e692f2e2eull,
0x63697665642f6564ull,0x68636e75616c5f65ull,0x74656d617261705full,0x090a22682e737265ull,
0x323109656c69662eull,0x2f656d6f682f2209ull,0x632f6c616d726f6eull,0x2f6e69622f616475ull,
0x756c636e692f2e2eull,0x732f7472632f6564ull,0x635f656761726f74ull,0x0a22682e7373616cull,
0x3109656c69662e09ull,0x2f7273752f220933ull,0x2f6564756c636e69ull,0x7079742f73746962ull,
0x2e090a22682e7365ull,0x09343109656c6966ull,0x6e692f7273752f22ull,0x69742f6564756c63ull,
0x2e090a22682e656dull,0x09353109656c6966ull,0x72614c6e61637322ull,0x5f79617272416567ull,
0x632e6c656e72656bull,0x6c69662e090a2275ull,0x752f220936310965ull,0x756c636e692f7273ull,
0x342f2b2b632f6564ull,0x6874616d632f332eull,0x656c69662e090a22ull,0x6f682f2209373109ull,
0x616d726f6e2f656dull,0x622f616475632f6cull,0x6e692f2e2e2f6e69ull,0x6f632f6564756c63ull,
0x6e75665f6e6f6d6dull,0x682e736e6f697463ull,0x656c69662e090a22ull,0x6f682f2209383109ull,
0x616d726f6e2f656dull,0x622f616475632f6cull,0x6e692f2e2e2f6e69ull,0x72632f6564756c63ull,
0x6d5f636e75662f74ull,0x0a22682e6f726361ull,0x3109656c69662e09ull,0x656d6f682f220939ull,
0x2f6c616d726f6e2full,0x6e69622f61647563ull,0x6c636e692f2e2e2full,0x6874616d2f656475ull,
0x6f6974636e75665full,0x2e090a22682e736eull,0x09303209656c6966ull,0x6e2f656d6f682f22ull,
0x75632f6c616d726full,0x2e2f6e69622f6164ull,0x64756c636e692f2eull,0x6563697665642f65ull,
0x6f6974636e75665full,0x2e090a22682e736eull,0x09313209656c6966ull,0x6e2f656d6f682f22ull,
0x75632f6c616d726full,0x2e2f6e69622f6164ull,0x64756c636e692f2eull,0x635f6874616d2f65ull,
0x73746e6174736e6full,0x69662e090a22682eull,0x2f2209323209656cull,0x726f6e2f656d6f68ull,
0x616475632f6c616dull,0x2f2e2e2f6e69622full,0x2f6564756c636e69ull,0x74615f31315f6d73ull,
0x6e75665f63696d6full,0x682e736e6f697463ull,0x656c69662e090a22ull,0x6f682f2209333209ull,
0x616d726f6e2f656dull,0x622f616475632f6cull,0x6e692f2e2e2f6e69ull,0x6d732f6564756c63ull,
0x6d6f74615f32315full,0x74636e75665f6369ull,0x0a22682e736e6f69ull,0x3209656c69662e09ull,
0x656d6f682f220934ull,0x2f6c616d726f6e2full,0x6e69622f61647563ull,0x6c636e692f2e2e2full,
0x315f6d732f656475ull,0x656c62756f645f33ull,0x6f6974636e75665full,0x2e090a22682e736eull,
0x09353209656c6966ull,0x6e2f656d6f682f22ull,0x75632f6c616d726full,0x2e2f6e69622f6164ull,
0x64756c636e692f2eull,0x6e6f6d6d6f632f65ull,0x682e73657079745full,0x656c69662e090a22ull,
0x6f682f2209363209ull,0x616d726f6e2f656dull,0x622f616475632f6cull,0x6e692f2e2e2f6e69ull,
0x65742f6564756c63ull,0x65665f6572757478ull,0x636e75665f686374ull,0x22682e736e6f6974ull,
0x09656c69662e090aull,0x6d6f682f22093732ull,0x6c616d726f6e2f65ull,0x69622f616475632full,
0x636e692f2e2e2f6eull,0x74616d2f6564756cull,0x6974636e75665f68ull,0x5f6c62645f736e6full,
0x0a22682e31787470ull,0x72657478652e090aull,0x65726168732e096eull,0x6e67696c612e2064ull,
0x732038622e203420ull,0x3b5d5b617461645full,0x72746e652e090a0aull,0x6e7530315a5f2079ull,
0x6464416d726f6669ull,0x206969695f536650ull,0x7261702e09090a28ull,0x203436752e206d61ull,
0x6170616475635f5full,0x7530315a5f5f6d72ull,0x64416d726f66696eull,0x6969695f53665064ull,
0x2c617461645f675full,0x617261702e09090aull,0x5f203436752e206dull,0x726170616475635full,
0x6e7530315a5f5f6dull,0x6464416d726f6669ull,0x5f6969695f536650ull,0x736d726f66696e75ull,
0x7261702e09090a2cull,0x203233732e206d61ull,0x6170616475635f5full,0x7530315a5f5f6d72ull,
0x64416d726f66696eull,0x6969695f53665064ull,0x702e09090a2c6e5full,0x33732e206d617261ull,
0x616475635f5f2032ull,0x315a5f5f6d726170ull,0x6d726f66696e7530ull,0x695f536650646441ull,
0x6b636f6c625f6969ull,0x0a2c74657366664full,0x6d617261702e0909ull,0x5f5f203233732e20ull,
0x6d72617061647563ull,0x696e7530315a5f5full,0x506464416d726f66ull,0x625f6969695f5366ull,
0x7865646e49657361ull,0x722e090a7b090a29ull,0x203233752e206765ull,0x0a3b3e36313c7225ull,
0x752e206765722e09ull,0x313c647225203436ull,0x65722e090a3b3e33ull,0x25203233662e2067ull,
0x2e090a3b3e383c66ull,0x6572702e20676572ull,0x3b3e343c70252064ull,0x65726168732e090aull,
0x75203233662e2064ull,0x6f6c2e090a3b696eull,0x3834320935310963ull,0x3142424c240a3009ull,
0x696e7530315a5f5full,0x506464416d726f66ull,0x0a3a6969695f5366ull,0x3233732e74766309ull,
0x722509203631752eull,0x6961746325202c31ull,0x092020203b782e64ull,0x747663090a202f2full,
0x3631752e3233752eull,0x25202c3272250920ull,0x20203b782e646974ull,0x0a202f2f09202020ull,
0x3233752e766f6d09ull,0x30202c3372250920ull,0x202020202020203bull,0x0920202020202020ull,
0x746573090a202f2full,0x3233752e656e2e70ull,0x25202c3170250920ull,0x3b337225202c3272ull,
0x0a202f2f09202020ull,0x7262203170254009ull,0x305f744c24092061ull,0x20203b343937315full,
0x0920202020202020ull,0x6f6c2e090a202f2full,0x3235320935310963ull,0x702e646c090a3009ull,
0x3436752e6d617261ull,0x202c316472250920ull,0x70616475635f5f5bull,0x30315a5f5f6d7261ull,
0x416d726f66696e75ull,0x69695f5366506464ull,0x726f66696e755f69ull,0x202f2f093b5d736dull,
0x5f5f2038333a6469ull,0x6d72617061647563ull,0x696e7530315a5f5full,0x506464416d726f66ull,
0x755f6969695f5366ull,0x2b736d726f66696eull,0x2e646c090a307830ull,0x33752e6d61726170ull,
0x202c347225092032ull,0x70616475635f5f5bull,0x30315a5f5f6d7261ull,0x416d726f66696e75ull,
0x69695f5366506464ull,0x4f6b636f6c625f69ull,0x093b5d7465736666ull,0x39333a6469202f2full,
0x70616475635f5f20ull,0x30315a5f5f6d7261ull,0x416d726f66696e75ull,0x69695f5366506464ull,
0x4f6b636f6c625f69ull,0x78302b7465736666ull,0x752e646461090a30ull,0x2c35722509203233ull,
0x7225202c31722520ull,0x2020202020203b34ull,0x63090a202f2f0920ull,0x752e3436752e7476ull,
0x3264722509203233ull,0x20203b357225202cull,0x2f2f092020202020ull,0x6c2e6c756d090a20ull,
0x2509203436752e6full,0x647225202c336472ull,0x2020203b34202c32ull,0x61090a202f2f0920ull,
0x09203436752e6464ull,0x7225202c34647225ull,0x33647225202c3164ull,0x2f2f09202020203bull,
0x6c672e646c090a20ull,0x3233662e6c61626full,0x5b202c3166250920ull,0x3b5d302b34647225ull,
0x3a6469202f2f0920ull,0x732e7473090a3034ull,0x33662e6465726168ull,0x5d696e755b092032ull,
0x20203b316625202cull,0x6469202f2f092020ull,0x2b696e752033333aull,0x5f744c240a307830ull,
0x0a3a343937315f30ull,0x353109636f6c2e09ull,0x090a300936353209ull,0x636e79732e726162ull,
0x202020203b300920ull,0x2020202020202020ull,0x2f09202020202020ull,0x636f6c2e090a202full,
0x0939353209353109ull,0x752e747663090a30ull,0x09203631752e3233ull,0x746e25202c367225ull,
0x2020203b782e6469ull,0x73090a202f2f0920ull,0x09203233622e6c68ull,0x367225202c377225ull,
0x202020203b31202cull,0x2f2f092020202020ull,0x34326c756d090a20ull,0x203233732e6f6c2eull,
0x7225202c38722509ull,0x203b377225202c31ull,0x6c090a202f2f0920ull,0x2e6d617261702e64ull,
0x3972250920323373ull,0x6475635f5f5b202cull,0x5a5f5f6d72617061ull,0x726f66696e753031ull,
0x5f5366506464416dull,0x657361625f696969ull,0x093b5d7865646e49ull,0x31343a6469202f2full,
0x70616475635f5f20ull,0x30315a5f5f6d7261ull,0x416d726f66696e75ull,0x69695f5366506464ull,
0x6e49657361625f69ull,0x0a3078302b786564ull,0x3233732e64646109ull,0x202c303172250920ull,
0x387225202c397225ull,0x092020202020203bull,0x646461090a202f2full,0x722509203233752eull,
0x30317225202c3131ull,0x20203b327225202cull,0x0a202f2f09202020ull,0x617261702e646c09ull,
0x2509203436752e6dull,0x5f5f5b202c356472ull,0x6d72617061647563ull,0x696e7530315a5f5full,
0x506464416d726f66ull,0x675f6969695f5366ull,0x093b5d617461645full,0x34333a6469202f2full,
0x70616475635f5f20ull,0x30315a5f5f6d7261ull,0x416d726f66696e75ull,0x69695f5366506464ull,
0x617461645f675f69ull,0x7663090a3078302bull,0x33752e3436752e74ull,0x2c36647225092032ull,
0x20203b3131722520ull,0x202f2f0920202020ull,0x6f6c2e6c756d090aull,0x722509203436752eull,
0x36647225202c3764ull,0x202020203b34202cull,0x6461090a202f2f09ull,0x2509203436752e64ull,
0x647225202c386472ull,0x3b37647225202c35ull,0x202f2f0920202020ull,0x6168732e646c090aull,
0x203233662e646572ull,0x755b202c32662509ull,0x202020203b5d696eull,0x333a6469202f2f09ull,
0x78302b696e752033ull,0x6c672e646c090a30ull,0x3233662e6c61626full,0x5b202c3366250920ull,
0x3b5d302b38647225ull,0x3a6469202f2f0920ull,0x2e646461090a3234ull,0x3466250920323366ull,
0x25202c336625202cull,0x20202020203b3266ull,0x090a202f2f092020ull,0x61626f6c672e7473ull,
0x5b09203233662e6cull,0x2c5d302b38647225ull,0x2f09203b34662520ull,0x0a33343a6469202full,
0x617261702e646c09ull,0x2509203233752e6dull,0x5f5f5b202c323172ull,0x6d72617061647563ull,
0x696e7530315a5f5full,0x506464416d726f66ull,0x6e5f6969695f5366ull,0x6469202f2f093b5dull,
0x75635f5f2034343aull,0x5f5f6d7261706164ull,0x6f66696e7530315aull,0x5366506464416d72ull,
0x302b6e5f6969695full,0x2e646461090a3078ull,0x3172250920323375ull,0x202c367225202c33ull,
0x202020203b327225ull,0x090a202f2f092020ull,0x2e656c2e70746573ull,0x3270250920323375ull,
0x202c32317225202cull,0x2f09203b33317225ull,0x32702540090a202full,0x4c24092061726220ull,
0x363033325f305f74ull,0x202020202020203bull,0x090a202f2f092020ull,0x09353109636f6c2eull,
0x61090a3009303632ull,0x09203233752e6464ull,0x7225202c34317225ull,0x3b367225202c3131ull,
0x2f2f092020202020ull,0x752e747663090a20ull,0x09203233752e3436ull,0x7225202c39647225ull,
0x20202020203b3431ull,0x6d090a202f2f0920ull,0x36752e6f6c2e6c75ull,0x3031647225092034ull,
0x202c39647225202cull,0x2f2f092020203b34ull,0x752e646461090a20ull,0x3164722509203436ull,
0x2c35647225202c31ull,0x203b303164722520ull,0x6c090a202f2f0920ull,0x6c61626f6c672e64ull,
0x662509203233662eull,0x316472255b202c35ull,0x2f2f093b5d302b31ull,0x090a35343a646920ull,
0x09353109636f6c2eull,0x6c090a3009393532ull,0x6465726168732e64ull,0x662509203233662eull,
0x5d696e755b202c32ull,0x2f2f09202020203bull,0x09636f6c2e090a20ull,0x3009303632093531ull,
0x33662e646461090aull,0x202c366625092032ull,0x326625202c356625ull,0x202020202020203bull,
0x7473090a202f2f09ull,0x2e6c61626f6c672eull,0x72255b0920323366ull,0x202c5d302b313164ull,
0x202f2f093b366625ull,0x4c240a36343a6469ull,0x363033325f305f74ull,0x09636f6c2e090a3aull,
0x3009313632093531ull,0x203b74697865090aull,0x2020202020202020ull,0x2020202020202020ull,
0x2020202020202020ull,0x444c240a202f2f09ull,0x315a5f5f646e6557ull,0x6d726f66696e7530ull,
0x695f536650646441ull,0x2f207d090a3a6969ull,0x6e7530315a5f202full,0x6464416d726f6669ull,
0x0a6969695f536650ull,0x7972746e652e090aull,0x73657270375a5f20ull,0x4531624c496e6163ull,
0x665076454530624cull,0x69695f3053664b50ull,0x702e09090a282069ull,0x36752e206d617261ull,
0x616475635f5f2034ull,0x375a5f5f6d726170ull,0x496e616373657270ull,0x4530624c4531624cull,
0x53664b5066507645ull,0x5f675f6969695f30ull,0x090a2c617461646full,0x206d617261702e09ull,
0x635f5f203436752eull,0x5f6d726170616475ull,0x6373657270375a5full,0x4c4531624c496e61ull,
0x5066507645453062ull,0x6969695f3053664bull,0x61746164695f675full,0x7261702e09090a2cull,
0x203436752e206d61ull,0x6170616475635f5full,0x7270375a5f5f6d72ull,0x624c496e61637365ull,
0x76454530624c4531ull,0x5f3053664b506650ull,0x6c625f675f696969ull,0x2c736d75536b636full,
0x617261702e09090aull,0x5f203233732e206dull,0x726170616475635full,0x657270375a5f5f6dull,
0x31624c496e616373ull,0x5076454530624c45ull,0x695f3053664b5066ull,0x09090a2c6e5f6969ull,
0x2e206d617261702eull,0x75635f5f20323373ull,0x5f5f6d7261706164ull,0x616373657270375aull,
0x624c4531624c496eull,0x4b50665076454530ull,0x5f6969695f305366ull,0x646e496b636f6c62ull,
0x702e09090a2c7865ull,0x33732e206d617261ull,0x616475635f5f2032ull,0x375a5f5f6d726170ull,
0x496e616373657270ull,0x4530624c4531624cull,0x53664b5066507645ull,0x61625f6969695f30ull,
0x297865646e496573ull,0x65722e090a7b090aull,0x25203233752e2067ull,0x090a3b3e34353c72ull,
0x36752e206765722eull,0x38333c6472252034ull,0x6765722e090a3b3eull,0x6625203233662e20ull,
0x2e090a3b3e35313cull,0x6572702e20676572ull,0x3e31313c70252064ull,0x09636f6c2e090a3bull,
0x3009343232093531ull,0x5f5f3142424c240aull,0x616373657270375aull,0x624c4531624c496eull,
0x4b50665076454530ull,0x3a6969695f305366ull,0x3109636f6c2e090aull,0x0a30093033320935ull,
0x3233752e74766309ull,0x722509203631752eull,0x6469746e25202c31ull,0x09202020203b782eull,
0x2e646c090a202f2full,0x33732e6d61726170ull,0x202c327225092032ull,0x70616475635f5f5bull,
0x70375a5f5f6d7261ull,0x4c496e6163736572ull,0x454530624c453162ull,0x3053664b50665076ull,
0x7361625f6969695full,0x3b5d7865646e4965ull,0x313a6469202f2f09ull,0x6475635f5f203633ull,
0x5a5f5f6d72617061ull,0x6e61637365727037ull,0x30624c4531624c49ull,0x664b506650764545ull,
0x625f6969695f3053ull,0x7865646e49657361ull,0x6f6d090a3078302bull,0x2509203233752e76ull,
0x20203b30202c3372ull,0x2020202020202020ull,0x202f2f0920202020ull,0x6e2e70746573090aull,
0x2509203233732e65ull,0x2c327225202c3170ull,0x2020203b33722520ull,0x2540090a202f2f09ull,
0x0920617262203170ull,0x30315f315f744c24ull,0x202020203b323432ull,0x202f2f0920202020ull,
0x33732e747663090aull,0x2509203631752e32ull,0x61746325202c3472ull,0x2020203b782e6469ull,
0x6873090a202f2f09ull,0x2509203233622e6cull,0x2c317225202c3572ull,0x20202020203b3120ull,
0x202f2f0920202020ull,0x2e34326c756d090aull,0x09203233732e6f6cull,0x347225202c367225ull,
0x20203b357225202cull,0x7262090a202f2f09ull,0x240920696e752e61ull,0x3839395f315f744cull,
0x2020202020203b36ull,0x202f2f0920202020ull,0x315f315f744c240aull,0x6d090a3a32343230ull,
0x09203233732e766full,0x327225202c367225ull,0x202020202020203bull,0x2f2f092020202020ull,
0x5f315f744c240a20ull,0x6d090a3a36383939ull,0x09203436752e766full,0x5f73202c31647225ull,
0x2020203b61746164ull,0x2f2f092020202020ull,0x09636f6c2e090a20ull,0x0a30093639093531ull,
0x3233732e74766309ull,0x722509203631752eull,0x2e64697425202c37ull,0x0920202020203b78ull,
0x646461090a202f2full,0x722509203233752eull,0x202c367225202c38ull,0x202020203b377225ull,
0x0a202f2f09202020ull,0x3436752e74766309ull,0x722509203233732eull,0x3b387225202c3264ull,
0x0920202020202020ull,0x6c756d090a202f2full,0x203436752e6f6c2eull,0x25202c3364722509ull,
0x203b34202c326472ull,0x0a202f2f09202020ull,0x3233732e72687309ull,0x25202c3972250920ull,
0x20203b34202c3772ull,0x0920202020202020ull,0x646461090a202f2full,0x722509203233732eull,
0x2c377225202c3031ull,0x2020203b39722520ull,0x0a202f2f09202020ull,0x3436732e74766309ull,
0x722509203233732eull,0x30317225202c3464ull,0x092020202020203bull,0x6c756d090a202f2full,
0x203436752e6f6c2eull,0x25202c3564722509ull,0x203b34202c346472ull,0x0a202f2f09202020ull,
0x3436752e64646109ull,0x202c366472250920ull,0x7225202c31647225ull,0x09202020203b3564ull,
0x2e646c090a202f2full,0x36752e6d61726170ull,0x2c37647225092034ull,0x616475635f5f5b20ull,
0x375a5f5f6d726170ull,0x496e616373657270ull,0x4530624c4531624cull,0x53664b5066507645ull,
0x5f675f6969695f30ull,0x093b5d6174616469ull,0x33313a6469202f2full,0x616475635f5f2034ull,
0x375a5f5f6d726170ull,0x496e616373657270ull,0x4530624c4531624cull,0x53664b5066507645ull,
0x5f675f6969695f30ull,0x78302b6174616469ull,0x752e646461090a30ull,0x3864722509203436ull,
0x202c33647225202cull,0x2020203b37647225ull,0x6c090a202f2f0920ull,0x6c61626f6c672e64ull,
0x662509203233662eull,0x386472255b202c31ull,0x2f2f09203b5d302bull,0x0a3833313a646920ull,
0x726168732e747309ull,0x09203233662e6465ull,0x5d302b366472255bull,0x09203b316625202cull,
0x33313a6469202f2full,0x617461645f732039ull,0x6c2e090a3078302bull,0x303109353109636full,
0x646461090a300934ull,0x722509203233752eull,0x2c377225202c3131ull,0x2020203b31722520ull,
0x0a202f2f09202020ull,0x3233752e64646109ull,0x202c323172250920ull,0x317225202c387225ull,
0x092020202020203bull,0x747663090a202f2full,0x3233732e3436752eull,0x202c396472250920ull,
0x2020203b32317225ull,0x0a202f2f09202020ull,0x2e6f6c2e6c756d09ull,0x6472250920343675ull,
0x39647225202c3031ull,0x092020203b34202cull,0x726873090a202f2full,0x722509203233732eull,
0x31317225202c3331ull,0x202020203b34202cull,0x0a202f2f09202020ull,0x3233732e64646109ull,
0x202c343172250920ull,0x7225202c31317225ull,0x09202020203b3331ull,0x747663090a202f2full,
0x3233732e3436732eull,0x2c31316472250920ull,0x20203b3431722520ull,0x0a202f2f09202020ull,
0x2e6f6c2e6c756d09ull,0x6472250920343675ull,0x31647225202c3231ull,0x0920203b34202c31ull,
0x646461090a202f2full,0x722509203436752eull,0x647225202c333164ull,0x3231647225202c31ull,
0x0a202f2f0920203bull,0x3436752e64646109ull,0x2c34316472250920ull,0x202c303164722520ull,
0x0920203b37647225ull,0x2e646c090a202f2full,0x662e6c61626f6c67ull,0x2c32662509203233ull,
0x2b34316472255b20ull,0x69202f2f093b5d30ull,0x73090a3034313a64ull,0x6465726168732e74ull,
0x255b09203233662eull,0x2c5d302b33316472ull,0x2f2f093b32662520ull,0x203134313a646920ull,
0x302b617461645f73ull,0x636f6c2e090a3078ull,0x0930363109353109ull,0x732e766f6d090a30ull,
0x3531722509203233ull,0x20203b317225202cull,0x2020202020202020ull,0x6d090a202f2f0920ull,
0x09203233752e766full,0x3b30202c36317225ull,0x2020202020202020ull,0x2f2f092020202020ull,
0x2e70746573090a20ull,0x09203233732e656cull,0x317225202c327025ull,0x203b36317225202cull,
0x6d090a202f2f0920ull,0x09203233752e766full,0x3b31202c37317225ull,0x2020202020202020ull,
0x2f2f092020202020ull,0x2032702540090a20ull,0x744c240920617262ull,0x32383034315f315full,
0x202020202020203bull,0x4c240a202f2f0920ull,0x313031315f315f74ull,0x6c3c2f2f200a3a30ull,
0x6f6f4c203e706f6full,0x6c2079646f622070ull,0x0a32363120656e69ull,0x353109636f6c2e09ull,
0x090a300932363109ull,0x636e79732e726162ull,0x202020203b300920ull,0x2020202020202020ull,
0x2f09202020202020ull,0x70746573090a202full,0x203233752e65672eull,0x7225202c33702509ull,
0x3b35317225202c37ull,0x090a202f2f092020ull,0x6172622033702540ull,0x5f315f744c240920ull,
0x20203b3636323131ull,0x2f09202020202020ull,0x6c3c2f2f200a202full,0x726150203e706f6full,
0x6f6f6c20666f2074ull,0x6c2079646f622070ull,0x2c32363120656e69ull,0x616c206461656820ull,
0x4c242064656c6562ull,0x313031315f315f74ull,0x09636f6c2e090a30ull,0x3009333731093531ull,
0x33732e766f6d090aull,0x2c38317225092032ull,0x20202020203b3220ull,0x2020202020202020ull,
0x756d090a202f2f09ull,0x732e6f6c2e34326cull,0x3931722509203233ull,0x202c38317225202cull,
0x2f2f093b37317225ull,0x34326c756d090a20ull,0x203233732e6f6c2eull,0x25202c3032722509ull,
0x377225202c393172ull,0x61090a202f2f093bull,0x09203233752e6464ull,0x7225202c31327225ull,
0x37317225202c3032ull,0x2f2f09202020203bull,0x752e646461090a20ull,0x3232722509203233ull,
0x202c31327225202cull,0x2020203b37317225ull,0x73090a202f2f0920ull,0x09203233732e6275ull,
0x7225202c33327225ull,0x20203b31202c3232ull,0x2f2f092020202020ull,0x732e726873090a20ull,
0x3432722509203233ull,0x202c33327225202cull,0x2020202020203b34ull,0x61090a202f2f0920ull,
0x09203233732e6464ull,0x7225202c35327225ull,0x34327225202c3232ull,0x2f2f09202020203bull,
0x752e747663090a20ull,0x09203233732e3436ull,0x25202c3531647225ull,0x202020203b353272ull,
0x6d090a202f2f0920ull,0x36752e6f6c2e6c75ull,0x3631647225092034ull,0x2c3531647225202cull,
0x2f2f0920203b3420ull,0x752e646461090a20ull,0x3164722509203436ull,0x2c31647225202c37ull,
0x203b363164722520ull,0x6c090a202f2f0920ull,0x6465726168732e64ull,0x662509203233662eull,
0x316472255b202c33ull,0x2f093b5d342d2b37ull,0x3334313a6469202full,0x2b617461645f7320ull,
0x627573090a307830ull,0x722509203233732eull,0x31327225202c3632ull,0x202020203b31202cull,
0x0a202f2f09202020ull,0x3233732e72687309ull,0x202c373272250920ull,0x3b34202c36327225ull,
0x0920202020202020ull,0x646461090a202f2full,0x722509203233732eull,0x31327225202c3832ull,
0x203b37327225202cull,0x0a202f2f09202020ull,0x3436752e74766309ull,0x722509203233732eull,
0x327225202c383164ull,0x0920202020203b38ull,0x6c756d090a202f2full,0x203436752e6f6c2eull,
0x202c393164722509ull,0x34202c3831647225ull,0x0a202f2f0920203bull,0x3436752e64646109ull,
0x2c30326472250920ull,0x25202c3164722520ull,0x0920203b39316472ull,0x2e646c090a202f2full,
0x662e646572616873ull,0x2c34662509203233ull,0x2b30326472255b20ull,0x202f2f093b5d342dull,
0x73203234313a6469ull,0x78302b617461645full,0x662e646461090a30ull,0x2c35662509203233ull,
0x6625202c33662520ull,0x2020202020203b34ull,0x73090a202f2f0920ull,0x6465726168732e74ull,
0x255b09203233662eull,0x5d342d2b37316472ull,0x2f093b356625202cull,0x3434313a6469202full,
0x2b617461645f7320ull,0x5f744c240a307830ull,0x3a36363231315f31ull,0x6f6f6c3c2f2f200aull,
0x2074726150203e70ull,0x20706f6f6c20666full,0x6e696c2079646f62ull,0x68202c3236312065ull,
0x6562616c20646165ull,0x5f744c242064656cull,0x0a30313031315f31ull,0x353109636f6c2e09ull,
0x090a300936373109ull,0x752e6f6c2e6c756dull,0x3731722509203233ull,0x202c37317225202cull,
0x2f09202020203b32ull,0x636f6c2e090a202full,0x0930363109353109ull,0x732e726873090a30ull,
0x3531722509203233ull,0x202c35317225202cull,0x2020202020203b31ull,0x6d090a202f2f0920ull,
0x09203233752e766full,0x3b30202c39327225ull,0x2020202020202020ull,0x2f2f092020202020ull,
0x2e70746573090a20ull,0x09203233732e7467ull,0x317225202c347025ull,0x3b39327225202c35ull,
0x40090a202f2f0920ull,0x2061726220347025ull,0x315f315f744c2409ull,0x2020203b30313031ull,
0x2f2f092020202020ull,0x752e617262090a20ull,0x5f744c240920696eull,0x3b38393430315f31ull,
0x2020202020202020ull,0x4c240a202f2f0920ull,0x383034315f315f74ull,0x315f744c240a3a32ull,
0x0a3a38393430315full,0x353109636f6c2e09ull,0x090a300933313209ull,0x203233752e766f6dull,
0x30202c3033722509ull,0x202020202020203bull,0x2f09202020202020ull,0x70746573090a202full,
0x203233752e656e2eull,0x7225202c35702509ull,0x3b30337225202c37ull,0x090a202f2f092020ull,
0x6172622035702540ull,0x5f315f744c240920ull,0x20203b3433303231ull,0x2f09202020202020ull,
0x636f6c2e090a202full,0x0934343109353109ull,0x622e6c6873090a30ull,0x3133722509203233ull,
0x31202c317225202cull,0x202020202020203bull,0x73090a202f2f0920ull,0x09203233732e6275ull,
0x7225202c32337225ull,0x20203b31202c3133ull,0x2f2f092020202020ull,0x732e726873090a20ull,
0x3333722509203233ull,0x202c32337225202cull,0x2020202020203b34ull,0x61090a202f2f0920ull,
0x09203233732e6464ull,0x7225202c34337225ull,0x33337225202c3133ull,0x2f2f09202020203bull,
0x752e747663090a20ull,0x09203233732e3436ull,0x25202c3132647225ull,0x202020203b343372ull,
0x6d090a202f2f0920ull,0x36752e6f6c2e6c75ull,0x3232647225092034ull,0x2c3132647225202cull,
0x2f2f0920203b3420ull,0x752e646461090a20ull,0x3264722509203436ull,0x2c31647225202c33ull,
0x203b323264722520ull,0x6c090a202f2f0920ull,0x2e6d617261702e64ull,0x3372250920323373ull,
0x75635f5f5b202c35ull,0x5f5f6d7261706164ull,0x616373657270375aull,0x624c4531624c496eull,
0x4b50665076454530ull,0x5f6969695f305366ull,0x646e496b636f6c62ull,0x202f2f093b5d7865ull,
0x5f203932313a6469ull,0x726170616475635full,0x657270375a5f5f6dull,0x31624c496e616373ull,
0x5076454530624c45ull,0x695f3053664b5066ull,0x6b636f6c625f6969ull,0x78302b7865646e49ull,
0x68732e646c090a30ull,0x3233662e64657261ull,0x5b202c3666250920ull,0x342d2b3332647225ull,
0x6469202f2f093b5dull,0x645f73203534313aull,0x0a3078302b617461ull,0x617261702e646c09ull,
0x2509203436752e6dull,0x5f5b202c34326472ull,0x726170616475635full,0x657270375a5f5f6dull,
0x31624c496e616373ull,0x5076454530624c45ull,0x695f3053664b5066ull,0x6f6c625f675f6969ull,
0x3b5d736d75536b63ull,0x313a6469202f2f09ull,0x6475635f5f203634ull,0x5a5f5f6d72617061ull,
0x6e61637365727037ull,0x30624c4531624c49ull,0x664b506650764545ull,0x675f6969695f3053ull,
0x75536b636f6c625full,0x090a3078302b736dull,0x2e3233732e747663ull,0x3372250920363175ull,
0x6961746325202c36ull,0x2f0920203b782e64ull,0x2e766f6d090a202full,0x3372250920323373ull,
0x2020203b30202c37ull,0x2020202020202020ull,0x090a202f2f092020ull,0x2e71652e70746573ull,
0x3670250920323373ull,0x202c35337225202cull,0x2f09203b37337225ull,0x706c6573090a202full,
0x722509203233732eull,0x36337225202c3833ull,0x202c35337225202cull,0x202f2f093b367025ull,
0x36752e747663090aull,0x2509203233732e34ull,0x7225202c35326472ull,0x20202020203b3833ull,
0x756d090a202f2f09ull,0x3436752e6f6c2e6cull,0x2c36326472250920ull,0x202c353264722520ull,
0x202f2f0920203b34ull,0x36752e646461090aull,0x3732647225092034ull,0x2c3432647225202cull,
0x203b363264722520ull,0x7473090a202f2f09ull,0x2e6c61626f6c672eull,0x72255b0920323366ull,
0x202c5d302b373264ull,0x202f2f093b366625ull,0x090a3734313a6469ull,0x09353109636f6c2eull,
0x6d090a3009383431ull,0x09203233662e766full,0x306630202c376625ull,0x3b30303030303030ull,
0x2f2f092020202020ull,0x732e7473090a3020ull,0x33662e6465726168ull,0x326472255b092032ull,
0x25202c5d342d2b33ull,0x69202f2f093b3766ull,0x5f73203834313a64ull,0x3078302b61746164ull,
0x315f315f744c240aull,0x2e090a3a34333032ull,0x3209353109636f6cull,0x6f6d090a30093531ull,
0x2509203233732e76ull,0x317225202c393372ull,0x2020202020203b37ull,0x202f2f0920202020ull,
0x33752e766f6d090aull,0x2c30347225092032ull,0x20202020203b3120ull,0x2020202020202020ull,
0x6573090a202f2f09ull,0x33752e746c2e7074ull,0x202c377025092032ull,0x347225202c317225ull,
0x202f2f0920203b30ull,0x622037702540090aull,0x5f744c2409206172ull,0x3b36343532315f31ull,
0x2020202020202020ull,0x6f6d090a202f2f09ull,0x2509203233732e76ull,0x203b31202c313472ull,
0x2020202020202020ull,0x202f2f0920202020ull,0x315f315f744c240aull,0x2f200a3a38353033ull,
0x203e706f6f6c3c2full,0x646f6220706f6f4cull,0x3220656e696c2079ull,0x7473656e202c3531ull,
0x7470656420676e69ull,0x7365202c31203a68ull,0x20646574616d6974ull,0x6f69746172657469ull,
0x6e6b6e75203a736eull,0x6f6c2e090a6e776full,0x3938310935310963ull,0x2e726873090a3009ull,
0x3372250920323375ull,0x2c39337225202c39ull,0x20202020203b3120ull,0x090a202f2f092020ull,
0x09353109636f6c2eull,0x62090a3009313931ull,0x20636e79732e7261ull,0x20202020203b3009ull,
0x2020202020202020ull,0x2f2f092020202020ull,0x2e70746573090a20ull,0x09203233752e656cull,
0x347225202c387025ull,0x203b377225202c31ull,0x40090a202f2f0920ull,0x2061726220387025ull,
0x315f315f744c2409ull,0x2020203b34313333ull,0x2f2f092020202020ull,0x6f6c3c2f2f200a20ull,
0x74726150203e706full,0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c35313220656eull,
0x62616c2064616568ull,0x744c242064656c65ull,0x38353033315f315full,0x3109636f6c2e090aull,
0x0a30093230320935ull,0x3233732e766f6d09ull,0x202c323472250920ull,0x2020202020203b32ull,
0x0920202020202020ull,0x6c756d090a202f2full,0x33732e6f6c2e3432ull,0x2c33347225092032ull,
0x25202c3234722520ull,0x202f2f093b393372ull,0x2e34326c756d090aull,0x09203233732e6f6cull,
0x7225202c34347225ull,0x3b377225202c3334ull,0x6461090a202f2f09ull,0x2509203233752e64ull,
0x347225202c353472ull,0x3b39337225202c34ull,0x202f2f0920202020ull,0x33732e627573090aull,
0x2c36347225092032ull,0x31202c3534722520ull,0x202020202020203bull,0x6873090a202f2f09ull,
0x2509203233732e72ull,0x347225202c373472ull,0x2020203b34202c36ull,0x202f2f0920202020ull,
0x33732e646461090aull,0x2c38347225092032ull,0x25202c3534722520ull,0x202020203b373472ull,
0x7663090a202f2f09ull,0x33732e3436752e74ull,0x3832647225092032ull,0x203b38347225202cull,
0x202f2f0920202020ull,0x6f6c2e6c756d090aull,0x722509203436752eull,0x647225202c393264ull,
0x20203b34202c3832ull,0x6461090a202f2f09ull,0x2509203436752e64ull,0x7225202c30336472ull,
0x32647225202c3164ull,0x202f2f0920203b39ull,0x6168732e646c090aull,0x203233662e646572ull,
0x255b202c38662509ull,0x5d342d2b30336472ull,0x3a6469202f2f093bull,0x61645f7320393431ull,
0x090a3078302b6174ull,0x09353109636f6c2eull,0x61090a3009333032ull,0x09203233752e6464ull,
0x7225202c39347225ull,0x39337225202c3534ull,0x2f2f09202020203bull,0x732e627573090a20ull,
0x3035722509203233ull,0x202c39347225202cull,0x2020202020203b31ull,0x73090a202f2f0920ull,
0x09203233732e7268ull,0x7225202c31357225ull,0x20203b34202c3035ull,0x2f2f092020202020ull,
0x732e646461090a20ull,0x3235722509203233ull,0x202c39347225202cull,0x2020203b31357225ull,
0x63090a202f2f0920ull,0x732e3436752e7476ull,0x3364722509203233ull,0x3b32357225202c31ull,
0x2f2f092020202020ull,0x6c2e6c756d090a20ull,0x2509203436752e6full,0x7225202c32336472ull,
0x203b34202c313364ull,0x61090a202f2f0920ull,0x09203436752e6464ull,0x25202c3333647225ull,
0x647225202c316472ull,0x2f2f0920203b3233ull,0x68732e646c090a20ull,0x3233662e64657261ull,
0x5b202c3966250920ull,0x342d2b3333647225ull,0x6469202f2f093b5dull,0x645f73203035313aull,
0x0a3078302b617461ull,0x726168732e747309ull,0x09203233662e6465ull,0x2d2b30336472255bull,
0x3b396625202c5d34ull,0x313a6469202f2f09ull,0x7461645f73203135ull,0x2e090a3078302b61ull,
0x3209353109636f6cull,0x646c090a30093430ull,0x2e6465726168732eull,0x3166250920323366ull,
0x336472255b202c30ull,0x2f093b5d342d2b33ull,0x3235313a6469202full,0x2b617461645f7320ull,
0x646461090a307830ull,0x662509203233662eull,0x30316625202c3131ull,0x20203b386625202cull,
0x0a202f2f09202020ull,0x726168732e747309ull,0x09203233662e6465ull,0x2d2b33336472255bull,
0x31316625202c5d34ull,0x3a6469202f2f093bull,0x61645f7320333531ull,0x240a3078302b6174ull,
0x3333315f315f744cull,0x3c2f2f200a3a3431ull,0x6150203e706f6f6cull,0x6f6c20666f207472ull,
0x2079646f6220706full,0x35313220656e696cull,0x6c2064616568202cull,0x242064656c656261ull,
0x3033315f315f744cull,0x636f6c2e090a3835ull,0x0937383109353109ull,0x6c2e6c756d090a30ull,
0x2509203233732e6full,0x347225202c313472ull,0x2020203b32202c31ull,0x73090a202f2f0920ull,
0x752e656c2e707465ull,0x2c39702509203233ull,0x25202c3134722520ull,0x2f2f0920203b3172ull,
0x2039702540090a20ull,0x744c240920617262ull,0x38353033315f315full,0x202020202020203bull,
0x4c240a202f2f0920ull,0x343532315f315f74ull,0x636f6c2e090a3a36ull,0x0936313109353109ull,
0x732e726162090a30ull,0x203b300920636e79ull,0x2020202020202020ull,0x2020202020202020ull,
0x2e090a202f2f0920ull,0x3109353109636f6cull,0x646c090a30093931ull,0x752e6d617261702eull,
0x3364722509203436ull,0x75635f5f5b202c34ull,0x5f5f6d7261706164ull,0x616373657270375aull,
0x624c4531624c496eull,0x4b50665076454530ull,0x5f6969695f305366ull,0x5d617461646f5f67ull,
0x3a6469202f2f093bull,0x75635f5f20303331ull,0x5f5f6d7261706164ull,0x616373657270375aull,
0x624c4531624c496eull,0x4b50665076454530ull,0x5f6969695f305366ull,0x2b617461646f5f67ull,
0x2e646c090a307830ull,0x662e646572616873ull,0x3231662509203233ull,0x2b366472255b202cull,
0x69202f2f093b5d30ull,0x5f73203435313a64ull,0x3078302b61746164ull,0x36752e646461090aull,
0x3533647225092034ull,0x202c33647225202cull,0x20203b3433647225ull,0x7473090a202f2f09ull,
0x2e6c61626f6c672eull,0x72255b0920323366ull,0x202c5d302b353364ull,0x2f2f093b32316625ull,
0x0a3535313a646920ull,0x353109636f6c2e09ull,0x090a300937323109ull,0x65726168732e646cull,
0x2509203233662e64ull,0x72255b202c333166ull,0x093b5d302b333164ull,0x35313a6469202f2full,
0x617461645f732036ull,0x6461090a3078302bull,0x2509203436752e64ull,0x7225202c36336472ull,
0x647225202c303164ull,0x202f2f09203b3433ull,0x6f6c672e7473090aull,0x203233662e6c6162ull,
0x2b36336472255b09ull,0x33316625202c5d30ull,0x3a6469202f2f093bull,0x6f6c2e090a373531ull,
0x3134320935310963ull,0x74697865090a3009ull,0x202020202020203bull,0x2020202020202020ull,
0x2020202020202020ull,0x240a202f2f092020ull,0x5f5f646e6557444cull,0x616373657270375aull,
0x624c4531624c496eull,0x4b50665076454530ull,0x3a6969695f305366ull,0x5f202f2f207d090aull,
0x616373657270375aull,0x624c4531624c496eull,0x4b50665076454530ull,0x0a6969695f305366ull,
0x7972746e652e090aull,0x73657270375a5f20ull,0x4531624c496e6163ull,0x665076454531624cull,
0x69695f3053664b50ull,0x702e09090a282069ull,0x36752e206d617261ull,0x616475635f5f2034ull,
0x375a5f5f6d726170ull,0x496e616373657270ull,0x4531624c4531624cull,0x53664b5066507645ull,
0x5f675f6969695f30ull,0x090a2c617461646full,0x206d617261702e09ull,0x635f5f203436752eull,
0x5f6d726170616475ull,0x6373657270375a5full,0x4c4531624c496e61ull,0x5066507645453162ull,
0x6969695f3053664bull,0x61746164695f675full,0x7261702e09090a2cull,0x203436752e206d61ull,
0x6170616475635f5full,0x7270375a5f5f6d72ull,0x624c496e61637365ull,0x76454531624c4531ull,
0x5f3053664b506650ull,0x6c625f675f696969ull,0x2c736d75536b636full,0x617261702e09090aull,
0x5f203233732e206dull,0x726170616475635full,0x657270375a5f5f6dull,0x31624c496e616373ull,
0x5076454531624c45ull,0x695f3053664b5066ull,0x09090a2c6e5f6969ull,0x2e206d617261702eull,
0x75635f5f20323373ull,0x5f5f6d7261706164ull,0x616373657270375aull,0x624c4531624c496eull,
0x4b50665076454531ull,0x5f6969695f305366ull,0x646e496b636f6c62ull,0x702e09090a2c7865ull,
0x33732e206d617261ull,0x616475635f5f2032ull,0x375a5f5f6d726170ull,0x496e616373657270ull,
0x4531624c4531624cull,0x53664b5066507645ull,0x61625f6969695f30ull,0x297865646e496573ull,
0x65722e090a7b090aull,0x25203233752e2067ull,0x090a3b3e36353c72ull,0x36752e206765722eull,
0x30343c6472252034ull,0x6765722e090a3b3eull,0x6625203233662e20ull,0x2e090a3b3e35313cull,
0x6572702e20676572ull,0x3e32313c70252064ull,0x09636f6c2e090a3bull,0x3009343232093531ull,
0x5f5f3142424c240aull,0x616373657270375aull,0x624c4531624c496eull,0x4b50665076454531ull,
0x3a6969695f305366ull,0x3109636f6c2e090aull,0x0a30093033320935ull,0x3233752e74766309ull,
0x722509203631752eull,0x6469746e25202c31ull,0x09202020203b782eull,0x2e646c090a202f2full,
0x33732e6d61726170ull,0x202c327225092032ull,0x70616475635f5f5bull,0x70375a5f5f6d7261ull,
0x4c496e6163736572ull,0x454531624c453162ull,0x3053664b50665076ull,0x7361625f6969695full,
0x3b5d7865646e4965ull,0x313a6469202f2f09ull,0x6475635f5f203034ull,0x5a5f5f6d72617061ull,
0x6e61637365727037ull,0x31624c4531624c49ull,0x664b506650764545ull,0x625f6969695f3053ull,
0x7865646e49657361ull,0x6f6d090a3078302bull,0x2509203233752e76ull,0x20203b30202c3372ull,
0x2020202020202020ull,0x202f2f0920202020ull,0x6e2e70746573090aull,0x2509203233732e65ull,
0x2c327225202c3170ull,0x2020203b33722520ull,0x2540090a202f2f09ull,0x0920617262203170ull,
0x30315f325f744c24ull,0x202020203b323432ull,0x202f2f0920202020ull,0x33732e747663090aull,
0x2509203631752e32ull,0x61746325202c3472ull,0x2020203b782e6469ull,0x6873090a202f2f09ull,
0x2509203233622e6cull,0x2c317225202c3572ull,0x20202020203b3120ull,0x202f2f0920202020ull,
0x2e34326c756d090aull,0x09203233732e6f6cull,0x347225202c367225ull,0x20203b357225202cull,
0x7262090a202f2f09ull,0x240920696e752e61ull,0x3839395f325f744cull,0x2020202020203b36ull,
0x202f2f0920202020ull,0x315f325f744c240aull,0x6d090a3a32343230ull,0x09203233732e766full,
0x327225202c367225ull,0x202020202020203bull,0x2f2f092020202020ull,0x5f325f744c240a20ull,
0x6d090a3a36383939ull,0x09203436752e766full,0x5f73202c31647225ull,0x2020203b61746164ull,
0x2f2f092020202020ull,0x09636f6c2e090a20ull,0x0a30093639093531ull,0x3233732e74766309ull,
0x722509203631752eull,0x2e64697425202c37ull,0x0920202020203b78ull,0x646461090a202f2full,
0x722509203233752eull,0x202c367225202c38ull,0x202020203b377225ull,0x0a202f2f09202020ull,
0x3436752e74766309ull,0x722509203233732eull,0x3b387225202c3264ull,0x0920202020202020ull,
0x6c756d090a202f2full,0x203436752e6f6c2eull,0x25202c3364722509ull,0x203b34202c326472ull,
0x0a202f2f09202020ull,0x3233732e72687309ull,0x25202c3972250920ull,0x20203b34202c3772ull,
0x0920202020202020ull,0x646461090a202f2full,0x722509203233732eull,0x2c377225202c3031ull,
0x2020203b39722520ull,0x0a202f2f09202020ull,0x3436732e74766309ull,0x722509203233732eull,
0x30317225202c3464ull,0x092020202020203bull,0x6c756d090a202f2full,0x203436752e6f6c2eull,
0x25202c3564722509ull,0x203b34202c346472ull,0x0a202f2f09202020ull,0x3436752e64646109ull,
0x202c366472250920ull,0x7225202c31647225ull,0x09202020203b3564ull,0x2e646c090a202f2full,
0x36752e6d61726170ull,0x2c37647225092034ull,0x616475635f5f5b20ull,0x375a5f5f6d726170ull,
0x496e616373657270ull,0x4531624c4531624cull,0x53664b5066507645ull,0x5f675f6969695f30ull,
0x093b5d6174616469ull,0x33313a6469202f2full,0x616475635f5f2038ull,0x375a5f5f6d726170ull,
0x496e616373657270ull,0x4531624c4531624cull,0x53664b5066507645ull,0x5f675f6969695f30ull,
0x78302b6174616469ull,0x752e646461090a30ull,0x3864722509203436ull,0x202c33647225202cull,
0x2020203b37647225ull,0x6c090a202f2f0920ull,0x6c61626f6c672e64ull,0x662509203233662eull,
0x386472255b202c31ull,0x2f2f09203b5d302bull,0x0a3234313a646920ull,0x726168732e747309ull,
0x09203233662e6465ull,0x5d302b366472255bull,0x09203b316625202cull,0x34313a6469202f2full,
0x617461645f732033ull,0x6461090a3078302bull,0x2509203233752e64ull,0x377225202c313172ull,
0x20203b317225202cull,0x202f2f0920202020ull,0x7261702e646c090aull,0x09203233732e6d61ull,
0x5f5b202c32317225ull,0x726170616475635full,0x657270375a5f5f6dull,0x31624c496e616373ull,
0x5076454531624c45ull,0x695f3053664b5066ull,0x2f093b5d6e5f6969ull,0x3434313a6469202full,
0x70616475635f5f20ull,0x70375a5f5f6d7261ull,0x4c496e6163736572ull,0x454531624c453162ull,
0x3053664b50665076ull,0x302b6e5f6969695full,0x70746573090a3078ull,0x203233732e74672eull,
0x7225202c32702509ull,0x31317225202c3231ull,0x090a202f2f09203bull,0x7262203270252140ull,
0x325f744c24092061ull,0x203b34353730315full,0x2f09202020202020ull,0x636f6c2e090a202full,
0x0930303109353109ull,0x752e646461090a30ull,0x3331722509203233ull,0x25202c387225202cull,
0x20202020203b3172ull,0x63090a202f2f0920ull,0x732e3436752e7476ull,0x3964722509203233ull,
0x203b33317225202cull,0x2f2f092020202020ull,0x6c2e6c756d090a20ull,0x2509203436752e6full,
0x7225202c30316472ull,0x20203b34202c3964ull,0x61090a202f2f0920ull,0x09203436752e6464ull,
0x25202c3131647225ull,0x647225202c376472ull,0x2f2f0920203b3031ull,0x6c672e646c090a20ull,
0x3233662e6c61626full,0x5b202c3266250920ull,0x5d302b3131647225ull,0x3a6469202f2f093bull,
0x617262090a353431ull,0x4c240920696e752eull,0x393430315f325f74ull,0x2020202020203b38ull,
0x0a202f2f09202020ull,0x30315f325f744c24ull,0x6f6d090a3a343537ull,0x2509203233662e76ull,
0x30306630202c3266ull,0x203b303030303030ull,0x202f2f0920202020ull,0x5f325f744c240a30ull,
0x090a3a3839343031ull,0x203233732e726873ull,0x25202c3431722509ull,0x203b34202c313172ull,
0x2f09202020202020ull,0x2e646461090a202full,0x3172250920323373ull,0x2c31317225202c35ull,
0x20203b3431722520ull,0x090a202f2f092020ull,0x2e3436732e747663ull,0x6472250920323373ull,
0x35317225202c3231ull,0x2f0920202020203bull,0x2e6c756d090a202full,0x09203436752e6f6cull,
0x25202c3331647225ull,0x3b34202c32316472ull,0x090a202f2f092020ull,0x203436752e646461ull,
0x202c343164722509ull,0x7225202c31647225ull,0x2f0920203b333164ull,0x732e7473090a202full,
0x33662e6465726168ull,0x316472255b092032ull,0x6625202c5d302b34ull,0x6469202f2f093b32ull,
0x645f73203634313aull,0x0a3078302b617461ull,0x353109636f6c2e09ull,0x090a300930363109ull,
0x203233732e766f6dull,0x25202c3631722509ull,0x20202020203b3172ull,0x2f09202020202020ull,
0x2e766f6d090a202full,0x3172250920323375ull,0x2020203b30202c37ull,0x2020202020202020ull,
0x090a202f2f092020ull,0x2e656c2e70746573ull,0x3370250920323373ull,0x25202c317225202cull,
0x2f0920203b373172ull,0x2e766f6d090a202full,0x3172250920323375ull,0x2020203b31202c38ull,
0x2020202020202020ull,0x090a202f2f092020ull,0x6172622033702540ull,0x5f325f744c240920ull,
0x20203b3630313531ull,0x2f09202020202020ull,0x325f744c240a202full,0x0a3a32323531315full,
0x706f6f6c3c2f2f20ull,0x6220706f6f4c203eull,0x656e696c2079646full,0x6c2e090a32363120ull,
0x363109353109636full,0x726162090a300932ull,0x300920636e79732eull,0x202020202020203bull,
0x2020202020202020ull,0x0a202f2f09202020ull,0x65672e7074657309ull,0x702509203233752eull,
0x202c377225202c34ull,0x0920203b36317225ull,0x702540090a202f2full,0x2409206172622034ull,
0x3731315f325f744cull,0x20202020203b3837ull,0x0a202f2f09202020ull,0x706f6f6c3c2f2f20ull,
0x6f2074726150203eull,0x6220706f6f6c2066ull,0x656e696c2079646full,0x6568202c32363120ull,
0x6c6562616c206461ull,0x325f744c24206465ull,0x090a32323531315full,0x09353109636f6c2eull,
0x6d090a3009333731ull,0x09203233732e766full,0x3b32202c39317225ull,0x2020202020202020ull,
0x2f2f092020202020ull,0x34326c756d090a20ull,0x203233732e6f6c2eull,0x25202c3032722509ull,
0x317225202c393172ull,0x090a202f2f093b38ull,0x6f6c2e34326c756dull,0x722509203233732eull,
0x30327225202c3132ull,0x2f093b377225202cull,0x2e646461090a202full,0x3272250920323375ull,
0x2c31327225202c32ull,0x20203b3831722520ull,0x090a202f2f092020ull,0x203233752e646461ull,
0x25202c3332722509ull,0x317225202c323272ull,0x2f09202020203b38ull,0x2e627573090a202full,
0x3272250920323373ull,0x2c33327225202c34ull,0x20202020203b3120ull,0x090a202f2f092020ull,
0x203233732e726873ull,0x25202c3532722509ull,0x203b34202c343272ull,0x2f09202020202020ull,
0x2e646461090a202full,0x3272250920323373ull,0x2c33327225202c36ull,0x20203b3532722520ull,
0x090a202f2f092020ull,0x2e3436752e747663ull,0x6472250920323373ull,0x36327225202c3531ull,
0x2f0920202020203bull,0x2e6c756d090a202full,0x09203436752e6f6cull,0x25202c3631647225ull,
0x3b34202c35316472ull,0x090a202f2f092020ull,0x203436752e646461ull,0x202c373164722509ull,
0x7225202c31647225ull,0x2f0920203b363164ull,0x732e646c090a202full,0x33662e6465726168ull,
0x202c336625092032ull,0x2d2b37316472255bull,0x69202f2f093b5d34ull,0x5f73203834313a64ull,
0x3078302b61746164ull,0x33732e627573090aull,0x2c37327225092032ull,0x31202c3232722520ull,
0x202020202020203bull,0x6873090a202f2f09ull,0x2509203233732e72ull,0x327225202c383272ull,
0x2020203b34202c37ull,0x202f2f0920202020ull,0x33732e646461090aull,0x2c39327225092032ull,
0x25202c3232722520ull,0x202020203b383272ull,0x7663090a202f2f09ull,0x33732e3436752e74ull,
0x3831647225092032ull,0x203b39327225202cull,0x202f2f0920202020ull,0x6f6c2e6c756d090aull,
0x722509203436752eull,0x647225202c393164ull,0x20203b34202c3831ull,0x6461090a202f2f09ull,
0x2509203436752e64ull,0x7225202c30326472ull,0x31647225202c3164ull,0x202f2f0920203b39ull,
0x6168732e646c090aull,0x203233662e646572ull,0x255b202c34662509ull,0x5d342d2b30326472ull,
0x3a6469202f2f093bull,0x61645f7320373431ull,0x090a3078302b6174ull,0x203233662e646461ull,
0x6625202c35662509ull,0x203b346625202c33ull,0x2f09202020202020ull,0x732e7473090a202full,
0x33662e6465726168ull,0x316472255b092032ull,0x25202c5d342d2b37ull,0x69202f2f093b3566ull,
0x5f73203934313a64ull,0x3078302b61746164ull,0x315f325f744c240aull,0x2f200a3a38373731ull,
0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,0x3120656e696c2079ull,
0x64616568202c3236ull,0x64656c6562616c20ull,0x315f325f744c2420ull,0x6c2e090a32323531ull,
0x373109353109636full,0x6c756d090a300936ull,0x203233752e6f6c2eull,0x25202c3831722509ull,
0x203b32202c383172ull,0x0a202f2f09202020ull,0x353109636f6c2e09ull,0x090a300930363109ull,
0x203233732e726873ull,0x25202c3631722509ull,0x203b31202c363172ull,0x2f09202020202020ull,
0x2e766f6d090a202full,0x3372250920323375ull,0x2020203b30202c30ull,0x2020202020202020ull,
0x090a202f2f092020ull,0x2e74672e70746573ull,0x3570250920323373ull,0x202c36317225202cull,
0x2f09203b30337225ull,0x35702540090a202full,0x4c24092061726220ull,0x323531315f325f74ull,
0x2020202020203b32ull,0x090a202f2f092020ull,0x20696e752e617262ull,0x315f325f744c2409ull,
0x2020203b30313031ull,0x2f09202020202020ull,0x325f744c240a202full,0x0a3a36303135315full,
0x31315f325f744c24ull,0x6c2e090a3a303130ull,0x313209353109636full,0x766f6d090a300933ull,
0x722509203233752eull,0x20203b30202c3133ull,0x2020202020202020ull,0x0a202f2f09202020ull,
0x656e2e7074657309ull,0x702509203233752eull,0x202c377225202c36ull,0x0920203b31337225ull,
0x702540090a202f2full,0x2409206172622036ull,0x3532315f325f744cull,0x20202020203b3634ull,
0x0a202f2f09202020ull,0x353109636f6c2e09ull,0x090a300934343109ull,0x203233622e6c6873ull,
0x25202c3233722509ull,0x20203b31202c3172ull,0x2f09202020202020ull,0x2e627573090a202full,
0x3372250920323373ull,0x2c32337225202c33ull,0x20202020203b3120ull,0x090a202f2f092020ull,
0x203233732e726873ull,0x25202c3433722509ull,0x203b34202c333372ull,0x2f09202020202020ull,
0x2e646461090a202full,0x3372250920323373ull,0x2c32337225202c35ull,0x20203b3433722520ull,
0x090a202f2f092020ull,0x2e3436752e747663ull,0x6472250920323373ull,0x35337225202c3132ull,
0x2f0920202020203bull,0x2e6c756d090a202full,0x09203436752e6f6cull,0x25202c3232647225ull,
0x3b34202c31326472ull,0x090a202f2f092020ull,0x203436752e646461ull,0x202c333264722509ull,
0x7225202c31647225ull,0x2f0920203b323264ull,0x702e646c090a202full,0x3233732e6d617261ull,
0x202c363372250920ull,0x70616475635f5f5bull,0x70375a5f5f6d7261ull,0x4c496e6163736572ull,
0x454531624c453162ull,0x3053664b50665076ull,0x6f6c625f6969695full,0x5d7865646e496b63ull,
0x3a6469202f2f093bull,0x75635f5f20333331ull,0x5f5f6d7261706164ull,0x616373657270375aull,
0x624c4531624c496eull,0x4b50665076454531ull,0x5f6969695f305366ull,0x646e496b636f6c62ull,
0x090a3078302b7865ull,0x65726168732e646cull,0x2509203233662e64ull,0x6472255b202c3666ull,
0x093b5d342d2b3332ull,0x35313a6469202f2full,0x617461645f732030ull,0x646c090a3078302bull,
0x752e6d617261702eull,0x3264722509203436ull,0x75635f5f5b202c34ull,0x5f5f6d7261706164ull,
0x616373657270375aull,0x624c4531624c496eull,0x4b50665076454531ull,0x5f6969695f305366ull,
0x536b636f6c625f67ull,0x2f2f093b5d736d75ull,0x203135313a646920ull,0x6170616475635f5full,
0x7270375a5f5f6d72ull,0x624c496e61637365ull,0x76454531624c4531ull,0x5f3053664b506650ull,
0x6c625f675f696969ull,0x2b736d75536b636full,0x747663090a307830ull,0x3631752e3233732eull,
0x202c373372250920ull,0x782e646961746325ull,0x0a202f2f0920203bull,0x3233732e766f6d09ull,
0x202c383372250920ull,0x2020202020203b30ull,0x0920202020202020ull,0x746573090a202f2full,
0x3233732e71652e70ull,0x25202c3770250920ull,0x337225202c363372ull,0x0a202f2f09203b38ull,
0x33732e706c657309ull,0x2c39337225092032ull,0x25202c3733722520ull,0x377025202c363372ull,
0x63090a202f2f093bull,0x732e3436752e7476ull,0x3264722509203233ull,0x3b39337225202c35ull,
0x2f2f092020202020ull,0x6c2e6c756d090a20ull,0x2509203436752e6full,0x7225202c36326472ull,
0x203b34202c353264ull,0x61090a202f2f0920ull,0x09203436752e6464ull,0x25202c3732647225ull,
0x7225202c34326472ull,0x2f2f09203b363264ull,0x6c672e7473090a20ull,0x3233662e6c61626full,
0x37326472255b0920ull,0x366625202c5d302bull,0x3a6469202f2f093bull,0x6f6c2e090a323531ull,
0x3834310935310963ull,0x2e766f6d090a3009ull,0x3766250920323366ull,0x303030306630202cull,
0x2020203b30303030ull,0x0a30202f2f092020ull,0x726168732e747309ull,0x09203233662e6465ull,
0x2d2b33326472255bull,0x3b376625202c5d34ull,0x313a6469202f2f09ull,0x7461645f73203335ull,
0x4c240a3078302b61ull,0x343532315f325f74ull,0x636f6c2e090a3a36ull,0x0935313209353109ull,
0x732e766f6d090a30ull,0x3034722509203233ull,0x203b38317225202cull,0x2020202020202020ull,
0x6d090a202f2f0920ull,0x09203233752e766full,0x3b31202c31347225ull,0x2020202020202020ull,
0x2f2f092020202020ull,0x2e70746573090a20ull,0x09203233752e746cull,0x317225202c387025ull,
0x203b31347225202cull,0x40090a202f2f0920ull,0x2061726220387025ull,0x315f325f744c2409ull,
0x2020203b38353033ull,0x2f2f092020202020ull,0x732e766f6d090a20ull,0x3234722509203233ull,
0x202020203b31202cull,0x2020202020202020ull,0x4c240a202f2f0920ull,0x373533315f325f74ull,
0x6c3c2f2f200a3a30ull,0x6f6f4c203e706f6full,0x6c2079646f622070ull,0x2c35313220656e69ull,
0x676e697473656e20ull,0x203a687470656420ull,0x6d69747365202c31ull,0x6574692064657461ull,
0x3a736e6f69746172ull,0x6e776f6e6b6e7520ull,0x3109636f6c2e090aull,0x0a30093938310935ull,
0x3233752e72687309ull,0x202c303472250920ull,0x3b31202c30347225ull,0x0920202020202020ull,
0x6f6c2e090a202f2full,0x3139310935310963ull,0x2e726162090a3009ull,0x3b300920636e7973ull,
0x2020202020202020ull,0x2020202020202020ull,0x090a202f2f092020ull,0x2e656c2e70746573ull,
0x3970250920323375ull,0x202c32347225202cull,0x2f0920203b377225ull,0x39702540090a202full,
0x4c24092061726220ull,0x323833315f325f74ull,0x2020202020203b36ull,0x200a202f2f092020ull,
0x3e706f6f6c3c2f2full,0x666f207472615020ull,0x6f6220706f6f6c20ull,0x20656e696c207964ull,
0x616568202c353132ull,0x656c6562616c2064ull,0x5f325f744c242064ull,0x2e090a3037353331ull,
0x3209353109636f6cull,0x6f6d090a30093230ull,0x2509203233732e76ull,0x203b32202c333472ull,
0x2020202020202020ull,0x202f2f0920202020ull,0x2e34326c756d090aull,0x09203233732e6f6cull,
0x7225202c34347225ull,0x30347225202c3334ull,0x6d090a202f2f093bull,0x2e6f6c2e34326c75ull,
0x3472250920323373ull,0x2c34347225202c35ull,0x2f2f093b37722520ull,0x752e646461090a20ull,
0x3634722509203233ull,0x202c35347225202cull,0x2020203b30347225ull,0x73090a202f2f0920ull,
0x09203233732e6275ull,0x7225202c37347225ull,0x20203b31202c3634ull,0x2f2f092020202020ull,
0x732e726873090a20ull,0x3834722509203233ull,0x202c37347225202cull,0x2020202020203b34ull,
0x61090a202f2f0920ull,0x09203233732e6464ull,0x7225202c39347225ull,0x38347225202c3634ull,
0x2f2f09202020203bull,0x752e747663090a20ull,0x09203233732e3436ull,0x25202c3832647225ull,
0x202020203b393472ull,0x6d090a202f2f0920ull,0x36752e6f6c2e6c75ull,0x3932647225092034ull,
0x2c3832647225202cull,0x2f2f0920203b3420ull,0x752e646461090a20ull,0x3364722509203436ull,
0x2c31647225202c30ull,0x203b393264722520ull,0x6c090a202f2f0920ull,0x6465726168732e64ull,
0x662509203233662eull,0x336472255b202c38ull,0x2f093b5d342d2b30ull,0x3435313a6469202full,
0x2b617461645f7320ull,0x6f6c2e090a307830ull,0x3330320935310963ull,0x2e646461090a3009ull,
0x3572250920323375ull,0x2c36347225202c30ull,0x20203b3034722520ull,0x090a202f2f092020ull,
0x203233732e627573ull,0x25202c3135722509ull,0x203b31202c303572ull,0x2f09202020202020ull,
0x2e726873090a202full,0x3572250920323373ull,0x2c31357225202c32ull,0x20202020203b3420ull,
0x090a202f2f092020ull,0x203233732e646461ull,0x25202c3335722509ull,0x357225202c303572ull,
0x2f09202020203b32ull,0x2e747663090a202full,0x203233732e343675ull,0x202c313364722509ull,
0x2020203b33357225ull,0x090a202f2f092020ull,0x752e6f6c2e6c756dull,0x3364722509203436ull,
0x3133647225202c32ull,0x2f0920203b34202cull,0x2e646461090a202full,0x6472250920343675ull,
0x31647225202c3333ull,0x3b3233647225202cull,0x090a202f2f092020ull,0x65726168732e646cull,
0x2509203233662e64ull,0x6472255b202c3966ull,0x093b5d342d2b3333ull,0x35313a6469202f2full,
0x617461645f732035ull,0x7473090a3078302bull,0x2e6465726168732eull,0x72255b0920323366ull,
0x2c5d342d2b303364ull,0x2f2f093b39662520ull,0x203635313a646920ull,0x302b617461645f73ull,
0x636f6c2e090a3078ull,0x0934303209353109ull,0x68732e646c090a30ull,0x3233662e64657261ull,
0x202c303166250920ull,0x2d2b33336472255bull,0x69202f2f093b5d34ull,0x5f73203735313a64ull,
0x3078302b61746164ull,0x33662e646461090aull,0x2c31316625092032ull,0x25202c3031662520ull,
0x20202020203b3866ull,0x7473090a202f2f09ull,0x2e6465726168732eull,0x72255b0920323366ull,
0x2c5d342d2b333364ull,0x2f093b3131662520ull,0x3835313a6469202full,0x2b617461645f7320ull,
0x5f744c240a307830ull,0x3a36323833315f32ull,0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,
0x20706f6f6c20666full,0x6e696c2079646f62ull,0x68202c3531322065ull,0x6562616c20646165ull,
0x5f744c242064656cull,0x0a30373533315f32ull,0x353109636f6c2e09ull,0x090a300937383109ull,
0x732e6f6c2e6c756dull,0x3234722509203233ull,0x202c32347225202cull,0x2f09202020203b32ull,
0x70746573090a202full,0x203233752e656c2eull,0x25202c3031702509ull,0x317225202c323472ull,
0x090a202f2f09203bull,0x7262203031702540ull,0x325f744c24092061ull,0x203b30373533315full,
0x2f09202020202020ull,0x325f744c240a202full,0x0a3a38353033315full,0x353109636f6c2e09ull,
0x090a300936313109ull,0x636e79732e726162ull,0x202020203b300920ull,0x2020202020202020ull,
0x2f09202020202020ull,0x636f6c2e090a202full,0x0939313109353109ull,0x61702e646c090a30ull,
0x203436752e6d6172ull,0x202c343364722509ull,0x70616475635f5f5bull,0x70375a5f5f6d7261ull,
0x4c496e6163736572ull,0x454531624c453162ull,0x3053664b50665076ull,0x6f5f675f6969695full,
0x2f093b5d61746164ull,0x3433313a6469202full,0x70616475635f5f20ull,0x70375a5f5f6d7261ull,
0x4c496e6163736572ull,0x454531624c453162ull,0x3053664b50665076ull,0x6f5f675f6969695full,
0x3078302b61746164ull,0x6168732e646c090aull,0x203233662e646572ull,0x5b202c3231662509ull,
0x3b5d302b36647225ull,0x313a6469202f2f09ull,0x7461645f73203935ull,0x61090a3078302b61ull,
0x09203436752e6464ull,0x25202c3533647225ull,0x647225202c336472ull,0x2f2f0920203b3433ull,
0x6c672e7473090a20ull,0x3233662e6c61626full,0x35336472255b0920ull,0x316625202c5d302bull,
0x6469202f2f093b32ull,0x2140090a3036313aull,0x2061726220327025ull,0x315f325f744c2409ull,
0x2020203b34393534ull,0x202f2f0920202020ull,0x3109636f6c2e090aull,0x0a30093332310935ull,
0x726168732e646c09ull,0x09203233662e6465ull,0x255b202c33316625ull,0x3b5d302b34316472ull,
0x313a6469202f2f09ull,0x7461645f73203136ull,0x61090a3078302b61ull,0x09203233752e6464ull,
0x7225202c34357225ull,0x203b317225202c38ull,0x2f2f092020202020ull,0x752e747663090a20ull,
0x09203233732e3436ull,0x25202c3633647225ull,0x202020203b343572ull,0x6d090a202f2f0920ull,
0x36752e6f6c2e6c75ull,0x3733647225092034ull,0x2c3633647225202cull,0x2f2f0920203b3420ull,
0x752e646461090a20ull,0x3364722509203436ull,0x3433647225202c38ull,0x3b3733647225202cull,
0x73090a202f2f0920ull,0x6c61626f6c672e74ull,0x255b09203233662eull,0x2c5d302b38336472ull,
0x2f093b3331662520ull,0x3236313a6469202full,0x315f325f744c240aull,0x2e090a3a34393534ull,
0x3209353109636f6cull,0x7865090a30093134ull,0x20202020203b7469ull,0x2020202020202020ull,
0x2020202020202020ull,0x202f2f0920202020ull,0x646e6557444c240aull,0x73657270375a5f5full,
0x4531624c496e6163ull,0x665076454531624cull,0x69695f3053664b50ull,0x2f2f207d090a3a69ull,
0x73657270375a5f20ull,0x4531624c496e6163ull,0x665076454531624cull,0x69695f3053664b50ull,
0x746e652e090a0a69ull,0x7270375a5f207972ull,0x624c496e61637365ull,0x76454530624c4530ull,
0x5f3053664b506650ull,0x09090a2820696969ull,0x2e206d617261702eull,0x75635f5f20343675ull,
0x5f5f6d7261706164ull,0x616373657270375aull,0x624c4530624c496eull,0x4b50665076454530ull,
0x5f6969695f305366ull,0x2c617461646f5f67ull,0x617261702e09090aull,0x5f203436752e206dull,
0x726170616475635full,0x657270375a5f5f6dull,0x30624c496e616373ull,0x5076454530624c45ull,
0x695f3053664b5066ull,0x6164695f675f6969ull,0x702e09090a2c6174ull,0x36752e206d617261ull,
0x616475635f5f2034ull,0x375a5f5f6d726170ull,0x496e616373657270ull,0x4530624c4530624cull,
0x53664b5066507645ull,0x5f675f6969695f30ull,0x6d75536b636f6c62ull,0x61702e09090a2c73ull,
0x3233732e206d6172ull,0x70616475635f5f20ull,0x70375a5f5f6d7261ull,0x4c496e6163736572ull,
0x454530624c453062ull,0x3053664b50665076ull,0x0a2c6e5f6969695full,0x6d617261702e0909ull,
0x5f5f203233732e20ull,0x6d72617061647563ull,0x73657270375a5f5full,0x4530624c496e6163ull,
0x665076454530624cull,0x69695f3053664b50ull,0x496b636f6c625f69ull,0x09090a2c7865646eull,
0x2e206d617261702eull,0x75635f5f20323373ull,0x5f5f6d7261706164ull,0x616373657270375aull,
0x624c4530624c496eull,0x4b50665076454530ull,0x5f6969695f305366ull,0x65646e4965736162ull,
0x2e090a7b090a2978ull,0x3233752e20676572ull,0x3b3e30353c722520ull,0x2e206765722e090aull,
0x3c64722520343675ull,0x722e090a3b3e3433ull,0x203233662e206765ull,0x0a3b3e34313c6625ull,
0x702e206765722e09ull,0x313c702520646572ull,0x6f6c2e090a3b3e30ull,0x3432320935310963ull,
0x3142424c240a3009ull,0x73657270375a5f5full,0x4530624c496e6163ull,0x665076454530624cull,
0x69695f3053664b50ull,0x636f6c2e090a3a69ull,0x0930333209353109ull,0x752e747663090a30ull,
0x09203631752e3233ull,0x746e25202c317225ull,0x2020203b782e6469ull,0x6c090a202f2f0920ull,
0x2e6d617261702e64ull,0x3272250920323373ull,0x6475635f5f5b202cull,0x5a5f5f6d72617061ull,
0x6e61637365727037ull,0x30624c4530624c49ull,0x664b506650764545ull,0x625f6969695f3053ull,
0x7865646e49657361ull,0x6469202f2f093b5dull,0x635f5f203832313aull,0x5f6d726170616475ull,
0x6373657270375a5full,0x4c4530624c496e61ull,0x5066507645453062ull,0x6969695f3053664bull,
0x646e49657361625full,0x090a3078302b7865ull,0x203233752e766f6dull,0x3b30202c33722509ull,
0x2020202020202020ull,0x2f09202020202020ull,0x70746573090a202full,0x203233732e656e2eull,
0x7225202c31702509ull,0x203b337225202c32ull,0x090a202f2f092020ull,0x6172622031702540ull,
0x5f335f744c240920ull,0x20203b3435373031ull,0x2f09202020202020ull,0x2e747663090a202full,
0x203631752e323373ull,0x6325202c34722509ull,0x203b782e64696174ull,0x090a202f2f092020ull,
0x203233622e6c6873ull,0x7225202c35722509ull,0x2020203b31202c31ull,0x2f09202020202020ull,
0x326c756d090a202full,0x3233732e6f6c2e34ull,0x25202c3672250920ull,0x3b357225202c3472ull,
0x090a202f2f092020ull,0x20696e752e617262ull,0x315f335f744c2409ull,0x2020203b38393430ull,
0x2f09202020202020ull,0x335f744c240a202full,0x0a3a34353730315full,0x3233732e766f6d09ull,
0x25202c3672250920ull,0x20202020203b3272ull,0x0920202020202020ull,0x5f744c240a202f2full,
0x3a38393430315f33ull,0x36752e766f6d090aull,0x2c31647225092034ull,0x3b617461645f7320ull,
0x2020202020202020ull,0x6c2e090a202f2f09ull,0x363909353109636full,0x2e747663090a3009ull,
0x203631752e323373ull,0x7425202c37722509ull,0x2020203b782e6469ull,0x090a202f2f092020ull,
0x203233752e646461ull,0x7225202c38722509ull,0x203b377225202c36ull,0x2f09202020202020ull,
0x2e747663090a202full,0x203233732e343675ull,0x25202c3264722509ull,0x20202020203b3872ull,
0x090a202f2f092020ull,0x752e6f6c2e6c756dull,0x3364722509203436ull,0x202c32647225202cull,
0x2f09202020203b34ull,0x2e726873090a202full,0x3972250920323373ull,0x34202c377225202cull,
0x202020202020203bull,0x090a202f2f092020ull,0x203233732e646461ull,0x25202c3031722509ull,
0x3b397225202c3772ull,0x2f09202020202020ull,0x2e747663090a202full,0x203233732e343673ull,
0x25202c3464722509ull,0x202020203b303172ull,0x090a202f2f092020ull,0x752e6f6c2e6c756dull,
0x3564722509203436ull,0x202c34647225202cull,0x2f09202020203b34ull,0x2e646461090a202full,
0x6472250920343675ull,0x2c31647225202c36ull,0x20203b3564722520ull,0x090a202f2f092020ull,
0x6d617261702e646cull,0x722509203436752eull,0x635f5f5b202c3764ull,0x5f6d726170616475ull,
0x6373657270375a5full,0x4c4530624c496e61ull,0x5066507645453062ull,0x6969695f3053664bull,
0x61746164695f675full,0x6469202f2f093b5dull,0x635f5f203632313aull,0x5f6d726170616475ull,
0x6373657270375a5full,0x4c4530624c496e61ull,0x5066507645453062ull,0x6969695f3053664bull,
0x61746164695f675full,0x6461090a3078302bull,0x2509203436752e64ull,0x647225202c386472ull,
0x3b37647225202c33ull,0x202f2f0920202020ull,0x6f6c672e646c090aull,0x203233662e6c6162ull,
0x255b202c31662509ull,0x203b5d302b386472ull,0x313a6469202f2f09ull,0x732e7473090a3033ull,
0x33662e6465726168ull,0x366472255b092032ull,0x316625202c5d302bull,0x6469202f2f09203bull,
0x645f73203133313aull,0x0a3078302b617461ull,0x353109636f6c2e09ull,0x090a300934303109ull,
0x203233752e646461ull,0x25202c3131722509ull,0x3b317225202c3772ull,0x2f09202020202020ull,
0x2e646461090a202full,0x3172250920323375ull,0x202c387225202c32ull,0x202020203b317225ull,
0x090a202f2f092020ull,0x2e3436752e747663ull,0x6472250920323373ull,0x3b32317225202c39ull,
0x2f09202020202020ull,0x2e6c756d090a202full,0x09203436752e6f6cull,0x25202c3031647225ull,
0x203b34202c396472ull,0x090a202f2f092020ull,0x203233732e726873ull,0x25202c3331722509ull,
0x203b34202c313172ull,0x2f09202020202020ull,0x2e646461090a202full,0x3172250920323373ull,
0x2c31317225202c34ull,0x20203b3331722520ull,0x090a202f2f092020ull,0x2e3436732e747663ull,
0x6472250920323373ull,0x34317225202c3131ull,0x2f0920202020203bull,0x2e6c756d090a202full,
0x09203436752e6f6cull,0x25202c3231647225ull,0x3b34202c31316472ull,0x090a202f2f092020ull,
0x203436752e646461ull,0x202c333164722509ull,0x7225202c31647225ull,0x2f0920203b323164ull,
0x2e646461090a202full,0x6472250920343675ull,0x31647225202c3431ull,0x3b37647225202c30ull,
0x090a202f2f092020ull,0x61626f6c672e646cull,0x2509203233662e6cull,0x6472255b202c3266ull,
0x2f093b5d302b3431ull,0x3233313a6469202full,0x6168732e7473090aull,0x203233662e646572ull,
0x2b33316472255b09ull,0x3b326625202c5d30ull,0x313a6469202f2f09ull,0x7461645f73203333ull,
0x2e090a3078302b61ull,0x3109353109636f6cull,0x6f6d090a30093036ull,0x2509203233732e76ull,
0x317225202c353172ull,0x202020202020203bull,0x202f2f0920202020ull,0x33752e766f6d090aull,
0x2c36317225092032ull,0x20202020203b3020ull,0x2020202020202020ull,0x6573090a202f2f09ull,
0x33732e656c2e7074ull,0x202c327025092032ull,0x317225202c317225ull,0x202f2f0920203b36ull,
0x33752e766f6d090aull,0x2c37317225092032ull,0x20202020203b3120ull,0x2020202020202020ull,
0x2540090a202f2f09ull,0x0920617262203270ull,0x34315f335f744c24ull,0x202020203b343935ull,
0x202f2f0920202020ull,0x315f335f744c240aull,0x2f200a3a32323531ull,0x203e706f6f6c3c2full,
0x646f6220706f6f4cull,0x3120656e696c2079ull,0x636f6c2e090a3236ull,0x0932363109353109ull,
0x732e726162090a30ull,0x203b300920636e79ull,0x2020202020202020ull,0x2020202020202020ull,
0x73090a202f2f0920ull,0x752e65672e707465ull,0x2c33702509203233ull,0x7225202c37722520ull,
0x2f2f0920203b3531ull,0x2033702540090a20ull,0x744c240920617262ull,0x38373731315f335full,
0x202020202020203bull,0x2f200a202f2f0920ull,0x203e706f6f6c3c2full,0x20666f2074726150ull,
0x646f6220706f6f6cull,0x3120656e696c2079ull,0x64616568202c3236ull,0x64656c6562616c20ull,
0x315f335f744c2420ull,0x6c2e090a32323531ull,0x373109353109636full,0x766f6d090a300933ull,
0x722509203233732eull,0x20203b32202c3831ull,0x2020202020202020ull,0x0a202f2f09202020ull,
0x6c2e34326c756d09ull,0x2509203233732e6full,0x317225202c393172ull,0x3b37317225202c38ull,
0x756d090a202f2f09ull,0x732e6f6c2e34326cull,0x3032722509203233ull,0x202c39317225202cull,
0x202f2f093b377225ull,0x33752e646461090aull,0x2c31327225092032ull,0x25202c3032722520ull,
0x202020203b373172ull,0x6461090a202f2f09ull,0x2509203233752e64ull,0x327225202c323272ull,
0x3b37317225202c31ull,0x202f2f0920202020ull,0x33732e627573090aull,0x2c33327225092032ull,
0x31202c3232722520ull,0x202020202020203bull,0x6873090a202f2f09ull,0x2509203233732e72ull,
0x327225202c343272ull,0x2020203b34202c33ull,0x202f2f0920202020ull,0x33732e646461090aull,
0x2c35327225092032ull,0x25202c3232722520ull,0x202020203b343272ull,0x7663090a202f2f09ull,
0x33732e3436752e74ull,0x3531647225092032ull,0x203b35327225202cull,0x202f2f0920202020ull,
0x6f6c2e6c756d090aull,0x722509203436752eull,0x647225202c363164ull,0x20203b34202c3531ull,
0x6461090a202f2f09ull,0x2509203436752e64ull,0x7225202c37316472ull,0x31647225202c3164ull,
0x202f2f0920203b36ull,0x6168732e646c090aull,0x203233662e646572ull,0x255b202c33662509ull,
0x5d342d2b37316472ull,0x3a6469202f2f093bull,0x61645f7320353331ull,0x090a3078302b6174ull,
0x203233732e627573ull,0x25202c3632722509ull,0x203b31202c313272ull,0x2f09202020202020ull,
0x2e726873090a202full,0x3272250920323373ull,0x2c36327225202c37ull,0x20202020203b3420ull,
0x090a202f2f092020ull,0x203233732e646461ull,0x25202c3832722509ull,0x327225202c313272ull,
0x2f09202020203b37ull,0x2e747663090a202full,0x203233732e343675ull,0x202c383164722509ull,
0x2020203b38327225ull,0x090a202f2f092020ull,0x752e6f6c2e6c756dull,0x3164722509203436ull,
0x3831647225202c39ull,0x2f0920203b34202cull,0x2e646461090a202full,0x6472250920343675ull,
0x31647225202c3032ull,0x3b3931647225202cull,0x090a202f2f092020ull,0x65726168732e646cull,
0x2509203233662e64ull,0x6472255b202c3466ull,0x093b5d342d2b3032ull,0x33313a6469202f2full,
0x617461645f732034ull,0x6461090a3078302bull,0x2509203233662e64ull,0x2c336625202c3566ull,
0x2020203b34662520ull,0x202f2f0920202020ull,0x6168732e7473090aull,0x203233662e646572ull,
0x2b37316472255b09ull,0x356625202c5d342dull,0x3a6469202f2f093bull,0x61645f7320363331ull,
0x240a3078302b6174ull,0x3731315f335f744cull,0x3c2f2f200a3a3837ull,0x6150203e706f6f6cull,
0x6f6c20666f207472ull,0x2079646f6220706full,0x32363120656e696cull,0x6c2064616568202cull,
0x242064656c656261ull,0x3531315f335f744cull,0x636f6c2e090a3232ull,0x0936373109353109ull,
0x6c2e6c756d090a30ull,0x2509203233752e6full,0x317225202c373172ull,0x2020203b32202c37ull,
0x2e090a202f2f0920ull,0x3109353109636f6cull,0x6873090a30093036ull,0x2509203233732e72ull,
0x317225202c353172ull,0x2020203b31202c35ull,0x202f2f0920202020ull,0x33752e766f6d090aull,
0x2c39327225092032ull,0x20202020203b3020ull,0x2020202020202020ull,0x6573090a202f2f09ull,
0x33732e74672e7074ull,0x202c347025092032ull,0x7225202c35317225ull,0x202f2f09203b3932ull,
0x622034702540090aull,0x5f744c2409206172ull,0x3b32323531315f33ull,0x2020202020202020ull,
0x7262090a202f2f09ull,0x240920696e752e61ull,0x3031315f335f744cull,0x20202020203b3031ull,
0x202f2f0920202020ull,0x315f335f744c240aull,0x4c240a3a34393534ull,0x313031315f335f74ull,
0x636f6c2e090a3a30ull,0x0933313209353109ull,0x752e766f6d090a30ull,0x3033722509203233ull,
0x202020203b30202cull,0x2020202020202020ull,0x73090a202f2f0920ull,0x752e656e2e707465ull,
0x2c35702509203233ull,0x7225202c37722520ull,0x2f2f0920203b3033ull,0x2035702540090a20ull,
0x744c240920617262ull,0x36343532315f335full,0x202020202020203bull,0x2e090a202f2f0920ull,
0x3109353109636f6cull,0x6873090a30093834ull,0x2509203233622e6cull,0x317225202c313372ull,
0x202020203b31202cull,0x202f2f0920202020ull,0x33662e766f6d090aull,0x202c366625092032ull,
0x3030303030306630ull,0x20202020203b3030ull,0x73090a30202f2f09ull,0x09203233732e6275ull,
0x7225202c32337225ull,0x20203b31202c3133ull,0x2f2f092020202020ull,0x732e726873090a20ull,
0x3333722509203233ull,0x202c32337225202cull,0x2020202020203b34ull,0x61090a202f2f0920ull,
0x09203233732e6464ull,0x7225202c34337225ull,0x33337225202c3133ull,0x2f2f09202020203bull,
0x752e747663090a20ull,0x09203233732e3436ull,0x25202c3132647225ull,0x202020203b343372ull,
0x6d090a202f2f0920ull,0x36752e6f6c2e6c75ull,0x3232647225092034ull,0x2c3132647225202cull,
0x2f2f0920203b3420ull,0x752e646461090a20ull,0x3264722509203436ull,0x2c31647225202c33ull,
0x203b323264722520ull,0x73090a202f2f0920ull,0x6465726168732e74ull,0x255b09203233662eull,
0x5d342d2b33326472ull,0x2f093b366625202cull,0x3733313a6469202full,0x2b617461645f7320ull,
0x5f744c240a307830ull,0x3a36343532315f33ull,0x3109636f6c2e090aull,0x0a30093531320935ull,
0x3233732e766f6d09ull,0x202c353372250920ull,0x2020203b37317225ull,0x0920202020202020ull,
0x766f6d090a202f2full,0x722509203233752eull,0x20203b31202c3633ull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x746c2e7074657309ull,0x702509203233752eull,0x202c317225202c36ull,
0x0920203b36337225ull,0x702540090a202f2full,0x2409206172622036ull,0x3033315f335f744cull,
0x20202020203b3835ull,0x0a202f2f09202020ull,0x3233732e766f6d09ull,0x202c373372250920ull,
0x2020202020203b31ull,0x0920202020202020ull,0x5f744c240a202f2full,0x3a30373533315f33ull,
0x6f6f6c3c2f2f200aull,0x20706f6f4c203e70ull,0x6e696c2079646f62ull,0x6e202c3531322065ull,
0x6420676e69747365ull,0x2c31203a68747065ull,0x74616d6974736520ull,0x6172657469206465ull,
0x75203a736e6f6974ull,0x090a6e776f6e6b6eull,0x09353109636f6c2eull,0x73090a3009393831ull,
0x09203233752e7268ull,0x7225202c35337225ull,0x20203b31202c3533ull,0x2f2f092020202020ull,
0x09636f6c2e090a20ull,0x3009313931093531ull,0x79732e726162090aull,0x20203b300920636eull,
0x2020202020202020ull,0x2020202020202020ull,0x6573090a202f2f09ull,0x33752e656c2e7074ull,
0x202c377025092032ull,0x7225202c37337225ull,0x202f2f0920203b37ull,0x622037702540090aull,
0x5f744c2409206172ull,0x3b36323833315f33ull,0x2020202020202020ull,0x2f2f200a202f2f09ull,
0x50203e706f6f6c3cull,0x6c20666f20747261ull,0x79646f6220706f6full,0x313220656e696c20ull,
0x2064616568202c35ull,0x2064656c6562616cull,0x33315f335f744c24ull,0x6f6c2e090a303735ull,
0x3230320935310963ull,0x2e766f6d090a3009ull,0x3372250920323373ull,0x2020203b32202c38ull,
0x2020202020202020ull,0x090a202f2f092020ull,0x6f6c2e34326c756dull,0x722509203233732eull,
0x38337225202c3933ull,0x093b35337225202cull,0x6c756d090a202f2full,0x33732e6f6c2e3432ull,
0x2c30347225092032ull,0x25202c3933722520ull,0x0a202f2f093b3772ull,0x3233752e64646109ull,
0x202c313472250920ull,0x7225202c30347225ull,0x09202020203b3533ull,0x627573090a202f2full,
0x722509203233732eull,0x31347225202c3234ull,0x202020203b31202cull,0x0a202f2f09202020ull,
0x3233732e72687309ull,0x202c333472250920ull,0x3b34202c32347225ull,0x0920202020202020ull,
0x646461090a202f2full,0x722509203233732eull,0x31347225202c3434ull,0x203b33347225202cull,
0x0a202f2f09202020ull,0x3436752e74766309ull,0x722509203233732eull,0x347225202c343264ull,
0x0920202020203b34ull,0x6c756d090a202f2full,0x203436752e6f6c2eull,0x202c353264722509ull,
0x34202c3432647225ull,0x0a202f2f0920203bull,0x3436752e64646109ull,0x2c36326472250920ull,
0x25202c3164722520ull,0x0920203b35326472ull,0x2e646c090a202f2full,0x662e646572616873ull,
0x2c37662509203233ull,0x2b36326472255b20ull,0x202f2f093b5d342dull,0x73203833313a6469ull,
0x78302b617461645full,0x09636f6c2e090a30ull,0x3009333032093531ull,0x33752e646461090aull,
0x2c35347225092032ull,0x25202c3134722520ull,0x202020203b353372ull,0x7573090a202f2f09ull,
0x2509203233732e62ull,0x347225202c363472ull,0x2020203b31202c35ull,0x202f2f0920202020ull,
0x33732e726873090aull,0x2c37347225092032ull,0x34202c3634722520ull,0x202020202020203bull,
0x6461090a202f2f09ull,0x2509203233732e64ull,0x347225202c383472ull,0x3b37347225202c35ull,
0x202f2f0920202020ull,0x36752e747663090aull,0x2509203233732e34ull,0x7225202c37326472ull,
0x20202020203b3834ull,0x756d090a202f2f09ull,0x3436752e6f6c2e6cull,0x2c38326472250920ull,
0x202c373264722520ull,0x202f2f0920203b34ull,0x36752e646461090aull,0x3932647225092034ull,
0x202c31647225202cull,0x20203b3832647225ull,0x646c090a202f2f09ull,0x2e6465726168732eull,
0x3866250920323366ull,0x39326472255b202cull,0x2f2f093b5d342d2bull,0x203933313a646920ull,
0x302b617461645f73ull,0x732e7473090a3078ull,0x33662e6465726168ull,0x326472255b092032ull,
0x25202c5d342d2b36ull,0x69202f2f093b3866ull,0x5f73203034313a64ull,0x3078302b61746164ull,
0x3109636f6c2e090aull,0x0a30093430320935ull,0x726168732e646c09ull,0x09203233662e6465ull,
0x72255b202c396625ull,0x3b5d342d2b393264ull,0x313a6469202f2f09ull,0x7461645f73203134ull,
0x61090a3078302b61ull,0x09203233662e6464ull,0x6625202c30316625ull,0x203b376625202c39ull,
0x2f2f092020202020ull,0x68732e7473090a20ull,0x3233662e64657261ull,0x39326472255b0920ull,
0x6625202c5d342d2bull,0x69202f2f093b3031ull,0x5f73203234313a64ull,0x3078302b61746164ull,
0x315f335f744c240aull,0x2f200a3a36323833ull,0x203e706f6f6c3c2full,0x20666f2074726150ull,
0x646f6220706f6f6cull,0x3220656e696c2079ull,0x64616568202c3531ull,0x64656c6562616c20ull,
0x315f335f744c2420ull,0x6c2e090a30373533ull,0x383109353109636full,0x6c756d090a300937ull,
0x203233732e6f6c2eull,0x25202c3733722509ull,0x203b32202c373372ull,0x0a202f2f09202020ull,
0x656c2e7074657309ull,0x702509203233752eull,0x2c37337225202c38ull,0x0920203b31722520ull,
0x702540090a202f2full,0x2409206172622038ull,0x3533315f335f744cull,0x20202020203b3037ull,
0x0a202f2f09202020ull,0x33315f335f744c24ull,0x6c2e090a3a383530ull,0x313109353109636full,
0x726162090a300936ull,0x300920636e79732eull,0x202020202020203bull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x353109636f6c2e09ull,0x090a300939313109ull,0x6d617261702e646cull,
0x722509203436752eull,0x5f5f5b202c303364ull,0x6d72617061647563ull,0x73657270375a5f5full,
0x4530624c496e6163ull,0x665076454530624cull,0x69695f3053664b50ull,0x7461646f5f675f69ull,
0x69202f2f093b5d61ull,0x5f5f203232313a64ull,0x6d72617061647563ull,0x73657270375a5f5full,
0x4530624c496e6163ull,0x665076454530624cull,0x69695f3053664b50ull,0x7461646f5f675f69ull,
0x6c090a3078302b61ull,0x6465726168732e64ull,0x662509203233662eull,0x6472255b202c3131ull,
0x2f2f093b5d302b36ull,0x203334313a646920ull,0x302b617461645f73ull,0x2e646461090a3078ull,
0x6472250920343675ull,0x33647225202c3133ull,0x3b3033647225202cull,0x090a202f2f092020ull,
0x61626f6c672e7473ull,0x5b09203233662e6cull,0x5d302b3133647225ull,0x093b31316625202cull,
0x34313a6469202f2full,0x09636f6c2e090a34ull,0x3009373231093531ull,0x6168732e646c090aull,
0x203233662e646572ull,0x5b202c3231662509ull,0x5d302b3331647225ull,0x3a6469202f2f093bull,
0x61645f7320353431ull,0x090a3078302b6174ull,0x203436752e646461ull,0x202c323364722509ull,
0x25202c3031647225ull,0x2f09203b30336472ull,0x672e7473090a202full,0x33662e6c61626f6cull,
0x336472255b092032ull,0x6625202c5d302b32ull,0x69202f2f093b3231ull,0x2e090a3634313a64ull,
0x3209353109636f6cull,0x7865090a30093134ull,0x20202020203b7469ull,0x2020202020202020ull,
0x2020202020202020ull,0x202f2f0920202020ull,0x646e6557444c240aull,0x73657270375a5f5full,
0x4530624c496e6163ull,0x665076454530624cull,0x69695f3053664b50ull,0x2f2f207d090a3a69ull,
0x73657270375a5f20ull,0x4530624c496e6163ull,0x665076454530624cull,0x69695f3053664b50ull,
0x746e652e090a0a69ull,0x7270375a5f207972ull,0x624c496e61637365ull,0x76454531624c4530ull,
0x5f3053664b506650ull,0x09090a2820696969ull,0x2e206d617261702eull,0x75635f5f20343675ull,
0x5f5f6d7261706164ull,0x616373657270375aull,0x624c4530624c496eull,0x4b50665076454531ull,
0x5f6969695f305366ull,0x2c617461646f5f67ull,0x617261702e09090aull,0x5f203436752e206dull,
0x726170616475635full,0x657270375a5f5f6dull,0x30624c496e616373ull,0x5076454531624c45ull,
0x695f3053664b5066ull,0x6164695f675f6969ull,0x702e09090a2c6174ull,0x36752e206d617261ull,
0x616475635f5f2034ull,0x375a5f5f6d726170ull,0x496e616373657270ull,0x4531624c4530624cull,
0x53664b5066507645ull,0x5f675f6969695f30ull,0x6d75536b636f6c62ull,0x61702e09090a2c73ull,
0x3233732e206d6172ull,0x70616475635f5f20ull,0x70375a5f5f6d7261ull,0x4c496e6163736572ull,
0x454531624c453062ull,0x3053664b50665076ull,0x0a2c6e5f6969695full,0x6d617261702e0909ull,
0x5f5f203233732e20ull,0x6d72617061647563ull,0x73657270375a5f5full,0x4530624c496e6163ull,
0x665076454531624cull,0x69695f3053664b50ull,0x496b636f6c625f69ull,0x09090a2c7865646eull,
0x2e206d617261702eull,0x75635f5f20323373ull,0x5f5f6d7261706164ull,0x616373657270375aull,
0x624c4530624c496eull,0x4b50665076454531ull,0x5f6969695f305366ull,0x65646e4965736162ull,
0x2e090a7b090a2978ull,0x3233752e20676572ull,0x3b3e32353c722520ull,0x2e206765722e090aull,
0x3c64722520343675ull,0x722e090a3b3e3633ull,0x203233662e206765ull,0x0a3b3e34313c6625ull,
0x702e206765722e09ull,0x313c702520646572ull,0x6f6c2e090a3b3e31ull,0x3432320935310963ull,
0x3142424c240a3009ull,0x73657270375a5f5full,0x4530624c496e6163ull,0x665076454531624cull,
0x69695f3053664b50ull,0x636f6c2e090a3a69ull,0x0930333209353109ull,0x752e747663090a30ull,
0x09203631752e3233ull,0x746e25202c317225ull,0x2020203b782e6469ull,0x6c090a202f2f0920ull,
0x2e6d617261702e64ull,0x3272250920323373ull,0x6475635f5f5b202cull,0x5a5f5f6d72617061ull,
0x6e61637365727037ull,0x31624c4530624c49ull,0x664b506650764545ull,0x625f6969695f3053ull,
0x7865646e49657361ull,0x6469202f2f093b5dull,0x635f5f203233313aull,0x5f6d726170616475ull,
0x6373657270375a5full,0x4c4530624c496e61ull,0x5066507645453162ull,0x6969695f3053664bull,
0x646e49657361625full,0x090a3078302b7865ull,0x203233752e766f6dull,0x3b30202c33722509ull,
0x2020202020202020ull,0x2f09202020202020ull,0x70746573090a202full,0x203233732e656e2eull,
0x7225202c31702509ull,0x203b337225202c32ull,0x090a202f2f092020ull,0x6172622031702540ull,
0x5f345f744c240920ull,0x20203b3435373031ull,0x2f09202020202020ull,0x2e747663090a202full,
0x203631752e323373ull,0x6325202c34722509ull,0x203b782e64696174ull,0x090a202f2f092020ull,
0x203233622e6c6873ull,0x7225202c35722509ull,0x2020203b31202c31ull,0x2f09202020202020ull,
0x326c756d090a202full,0x3233732e6f6c2e34ull,0x25202c3672250920ull,0x3b357225202c3472ull,
0x090a202f2f092020ull,0x20696e752e617262ull,0x315f345f744c2409ull,0x2020203b38393430ull,
0x2f09202020202020ull,0x345f744c240a202full,0x0a3a34353730315full,0x3233732e766f6d09ull,
0x25202c3672250920ull,0x20202020203b3272ull,0x0920202020202020ull,0x5f744c240a202f2full,
0x3a38393430315f34ull,0x36752e766f6d090aull,0x2c31647225092034ull,0x3b617461645f7320ull,
0x2020202020202020ull,0x6c2e090a202f2f09ull,0x363909353109636full,0x2e747663090a3009ull,
0x203631752e323373ull,0x7425202c37722509ull,0x2020203b782e6469ull,0x090a202f2f092020ull,
0x203233752e646461ull,0x7225202c38722509ull,0x203b377225202c36ull,0x2f09202020202020ull,
0x2e747663090a202full,0x203233732e343675ull,0x25202c3264722509ull,0x20202020203b3872ull,
0x090a202f2f092020ull,0x752e6f6c2e6c756dull,0x3364722509203436ull,0x202c32647225202cull,
0x2f09202020203b34ull,0x2e726873090a202full,0x3972250920323373ull,0x34202c377225202cull,
0x202020202020203bull,0x090a202f2f092020ull,0x203233732e646461ull,0x25202c3031722509ull,
0x3b397225202c3772ull,0x2f09202020202020ull,0x2e747663090a202full,0x203233732e343673ull,
0x25202c3464722509ull,0x202020203b303172ull,0x090a202f2f092020ull,0x752e6f6c2e6c756dull,
0x3564722509203436ull,0x202c34647225202cull,0x2f09202020203b34ull,0x2e646461090a202full,
0x6472250920343675ull,0x2c31647225202c36ull,0x20203b3564722520ull,0x090a202f2f092020ull,
0x6d617261702e646cull,0x722509203436752eull,0x635f5f5b202c3764ull,0x5f6d726170616475ull,
0x6373657270375a5full,0x4c4530624c496e61ull,0x5066507645453162ull,0x6969695f3053664bull,
0x61746164695f675full,0x6469202f2f093b5dull,0x635f5f203033313aull,0x5f6d726170616475ull,
0x6373657270375a5full,0x4c4530624c496e61ull,0x5066507645453162ull,0x6969695f3053664bull,
0x61746164695f675full,0x6461090a3078302bull,0x2509203436752e64ull,0x647225202c386472ull,
0x3b37647225202c33ull,0x202f2f0920202020ull,0x6f6c672e646c090aull,0x203233662e6c6162ull,
0x255b202c31662509ull,0x203b5d302b386472ull,0x313a6469202f2f09ull,0x732e7473090a3433ull,
0x33662e6465726168ull,0x366472255b092032ull,0x316625202c5d302bull,0x6469202f2f09203bull,
0x645f73203533313aull,0x0a3078302b617461ull,0x3233752e64646109ull,0x202c313172250920ull,
0x317225202c377225ull,0x092020202020203bull,0x2e646c090a202f2full,0x33732e6d61726170ull,
0x2c32317225092032ull,0x616475635f5f5b20ull,0x375a5f5f6d726170ull,0x496e616373657270ull,
0x4531624c4530624cull,0x53664b5066507645ull,0x5d6e5f6969695f30ull,0x3a6469202f2f093bull,
0x75635f5f20363331ull,0x5f5f6d7261706164ull,0x616373657270375aull,0x624c4530624c496eull,
0x4b50665076454531ull,0x5f6969695f305366ull,0x73090a3078302b6eull,0x732e74672e707465ull,
0x2c32702509203233ull,0x25202c3231722520ull,0x2f2f09203b313172ull,0x3270252140090a20ull,
0x4c24092061726220ull,0x363231315f345f74ull,0x2020202020203b36ull,0x2e090a202f2f0920ull,
0x3109353109636f6cull,0x6461090a30093030ull,0x2509203233752e64ull,0x387225202c333172ull,
0x20203b317225202cull,0x202f2f0920202020ull,0x36752e747663090aull,0x2509203233732e34ull,
0x317225202c396472ull,0x2020202020203b33ull,0x756d090a202f2f09ull,0x3436752e6f6c2e6cull,
0x2c30316472250920ull,0x34202c3964722520ull,0x202f2f092020203bull,0x36752e646461090aull,
0x3131647225092034ull,0x202c37647225202cull,0x20203b3031647225ull,0x646c090a202f2f09ull,
0x2e6c61626f6c672eull,0x3266250920323366ull,0x31316472255b202cull,0x202f2f093b5d302bull,
0x090a3733313a6469ull,0x20696e752e617262ull,0x315f345f744c2409ull,0x2020203b30313031ull,
0x2f09202020202020ull,0x345f744c240a202full,0x0a3a36363231315full,0x3233662e766f6d09ull,
0x30202c3266250920ull,0x3030303030303066ull,0x0920202020203b30ull,0x744c240a30202f2full,
0x30313031315f345full,0x732e726873090a3aull,0x3431722509203233ull,0x202c31317225202cull,
0x2020202020203b34ull,0x61090a202f2f0920ull,0x09203233732e6464ull,0x7225202c35317225ull,
0x34317225202c3131ull,0x2f2f09202020203bull,0x732e747663090a20ull,0x09203233732e3436ull,
0x25202c3231647225ull,0x202020203b353172ull,0x6d090a202f2f0920ull,0x36752e6f6c2e6c75ull,
0x3331647225092034ull,0x2c3231647225202cull,0x2f2f0920203b3420ull,0x752e646461090a20ull,
0x3164722509203436ull,0x2c31647225202c34ull,0x203b333164722520ull,0x73090a202f2f0920ull,
0x6465726168732e74ull,0x255b09203233662eull,0x2c5d302b34316472ull,0x2f2f093b32662520ull,
0x203833313a646920ull,0x302b617461645f73ull,0x636f6c2e090a3078ull,0x0930363109353109ull,
0x732e766f6d090a30ull,0x3631722509203233ull,0x20203b317225202cull,0x2020202020202020ull,
0x6d090a202f2f0920ull,0x09203233752e766full,0x3b30202c37317225ull,0x2020202020202020ull,
0x2f2f092020202020ull,0x2e70746573090a20ull,0x09203233732e656cull,0x317225202c337025ull,
0x203b37317225202cull,0x6d090a202f2f0920ull,0x09203233752e766full,0x3b31202c38317225ull,
0x2020202020202020ull,0x2f2f092020202020ull,0x2033702540090a20ull,0x744c240920617262ull,
0x38313635315f345full,0x202020202020203bull,0x4c240a202f2f0920ull,0x333032315f345f74ull,
0x6c3c2f2f200a3a34ull,0x6f6f4c203e706f6full,0x6c2079646f622070ull,0x0a32363120656e69ull,
0x353109636f6c2e09ull,0x090a300932363109ull,0x636e79732e726162ull,0x202020203b300920ull,
0x2020202020202020ull,0x2f09202020202020ull,0x70746573090a202full,0x203233752e65672eull,
0x7225202c34702509ull,0x3b36317225202c37ull,0x090a202f2f092020ull,0x6172622034702540ull,
0x5f345f744c240920ull,0x20203b3039323231ull,0x2f09202020202020ull,0x6c3c2f2f200a202full,
0x726150203e706f6full,0x6f6f6c20666f2074ull,0x6c2079646f622070ull,0x2c32363120656e69ull,
0x616c206461656820ull,0x4c242064656c6562ull,0x333032315f345f74ull,0x09636f6c2e090a34ull,
0x3009333731093531ull,0x33732e766f6d090aull,0x2c39317225092032ull,0x20202020203b3220ull,
0x2020202020202020ull,0x756d090a202f2f09ull,0x732e6f6c2e34326cull,0x3032722509203233ull,
0x202c39317225202cull,0x2f2f093b38317225ull,0x34326c756d090a20ull,0x203233732e6f6c2eull,
0x25202c3132722509ull,0x377225202c303272ull,0x61090a202f2f093bull,0x09203233752e6464ull,
0x7225202c32327225ull,0x38317225202c3132ull,0x2f2f09202020203bull,0x752e646461090a20ull,
0x3332722509203233ull,0x202c32327225202cull,0x2020203b38317225ull,0x73090a202f2f0920ull,
0x09203233732e6275ull,0x7225202c34327225ull,0x20203b31202c3332ull,0x2f2f092020202020ull,
0x732e726873090a20ull,0x3532722509203233ull,0x202c34327225202cull,0x2020202020203b34ull,
0x61090a202f2f0920ull,0x09203233732e6464ull,0x7225202c36327225ull,0x35327225202c3332ull,
0x2f2f09202020203bull,0x752e747663090a20ull,0x09203233732e3436ull,0x25202c3531647225ull,
0x202020203b363272ull,0x6d090a202f2f0920ull,0x36752e6f6c2e6c75ull,0x3631647225092034ull,
0x2c3531647225202cull,0x2f2f0920203b3420ull,0x752e646461090a20ull,0x3164722509203436ull,
0x2c31647225202c37ull,0x203b363164722520ull,0x6c090a202f2f0920ull,0x6465726168732e64ull,
0x662509203233662eull,0x316472255b202c33ull,0x2f093b5d342d2b37ull,0x3034313a6469202full,
0x2b617461645f7320ull,0x627573090a307830ull,0x722509203233732eull,0x32327225202c3732ull,
0x202020203b31202cull,0x0a202f2f09202020ull,0x3233732e72687309ull,0x202c383272250920ull,
0x3b34202c37327225ull,0x0920202020202020ull,0x646461090a202f2full,0x722509203233732eull,
0x32327225202c3932ull,0x203b38327225202cull,0x0a202f2f09202020ull,0x3436752e74766309ull,
0x722509203233732eull,0x327225202c383164ull,0x0920202020203b39ull,0x6c756d090a202f2full,
0x203436752e6f6c2eull,0x202c393164722509ull,0x34202c3831647225ull,0x0a202f2f0920203bull,
0x3436752e64646109ull,0x2c30326472250920ull,0x25202c3164722520ull,0x0920203b39316472ull,
0x2e646c090a202f2full,0x662e646572616873ull,0x2c34662509203233ull,0x2b30326472255b20ull,
0x202f2f093b5d342dull,0x73203933313a6469ull,0x78302b617461645full,0x662e646461090a30ull,
0x2c35662509203233ull,0x6625202c33662520ull,0x2020202020203b34ull,0x73090a202f2f0920ull,
0x6465726168732e74ull,0x255b09203233662eull,0x5d342d2b37316472ull,0x2f093b356625202cull,
0x3134313a6469202full,0x2b617461645f7320ull,0x5f744c240a307830ull,0x3a30393232315f34ull,
0x6f6f6c3c2f2f200aull,0x2074726150203e70ull,0x20706f6f6c20666full,0x6e696c2079646f62ull,
0x68202c3236312065ull,0x6562616c20646165ull,0x5f744c242064656cull,0x0a34333032315f34ull,
0x353109636f6c2e09ull,0x090a300936373109ull,0x752e6f6c2e6c756dull,0x3831722509203233ull,
0x202c38317225202cull,0x2f09202020203b32ull,0x636f6c2e090a202full,0x0930363109353109ull,
0x732e726873090a30ull,0x3631722509203233ull,0x202c36317225202cull,0x2020202020203b31ull,
0x6d090a202f2f0920ull,0x09203233752e766full,0x3b30202c30337225ull,0x2020202020202020ull,
0x2f2f092020202020ull,0x2e70746573090a20ull,0x09203233732e7467ull,0x317225202c357025ull,
0x3b30337225202c36ull,0x40090a202f2f0920ull,0x2061726220357025ull,0x315f345f744c2409ull,
0x2020203b34333032ull,0x2f2f092020202020ull,0x752e617262090a20ull,0x5f744c240920696eull,
0x3b32323531315f34ull,0x2020202020202020ull,0x4c240a202f2f0920ull,0x313635315f345f74ull,
0x345f744c240a3a38ull,0x0a3a32323531315full,0x353109636f6c2e09ull,0x090a300933313209ull,
0x203233752e766f6dull,0x30202c3133722509ull,0x202020202020203bull,0x2f09202020202020ull,
0x70746573090a202full,0x203233752e656e2eull,0x7225202c36702509ull,0x3b31337225202c37ull,
0x090a202f2f092020ull,0x6172622036702540ull,0x5f345f744c240920ull,0x20203b3835303331ull,
0x2f09202020202020ull,0x636f6c2e090a202full,0x0938343109353109ull,0x622e6c6873090a30ull,
0x3233722509203233ull,0x31202c317225202cull,0x202020202020203bull,0x6d090a202f2f0920ull,
0x09203233662e766full,0x306630202c366625ull,0x3b30303030303030ull,0x2f2f092020202020ull,
0x2e627573090a3020ull,0x3372250920323373ull,0x2c32337225202c33ull,0x20202020203b3120ull,
0x090a202f2f092020ull,0x203233732e726873ull,0x25202c3433722509ull,0x203b34202c333372ull,
0x2f09202020202020ull,0x2e646461090a202full,0x3372250920323373ull,0x2c32337225202c35ull,
0x20203b3433722520ull,0x090a202f2f092020ull,0x2e3436752e747663ull,0x6472250920323373ull,
0x35337225202c3132ull,0x2f0920202020203bull,0x2e6c756d090a202full,0x09203436752e6f6cull,
0x25202c3232647225ull,0x3b34202c31326472ull,0x090a202f2f092020ull,0x203436752e646461ull,
0x202c333264722509ull,0x7225202c31647225ull,0x2f0920203b323264ull,0x732e7473090a202full,
0x33662e6465726168ull,0x326472255b092032ull,0x25202c5d342d2b33ull,0x69202f2f093b3666ull,
0x5f73203234313a64ull,0x3078302b61746164ull,0x315f345f744c240aull,0x2e090a3a38353033ull,
0x3209353109636f6cull,0x6f6d090a30093531ull,0x2509203233732e76ull,0x317225202c363372ull,
0x2020202020203b38ull,0x202f2f0920202020ull,0x33752e766f6d090aull,0x2c37337225092032ull,
0x20202020203b3120ull,0x2020202020202020ull,0x6573090a202f2f09ull,0x33752e746c2e7074ull,
0x202c377025092032ull,0x337225202c317225ull,0x202f2f0920203b37ull,0x622037702540090aull,
0x5f744c2409206172ull,0x3b30373533315f34ull,0x2020202020202020ull,0x6f6d090a202f2f09ull,
0x2509203233732e76ull,0x203b31202c383372ull,0x2020202020202020ull,0x202f2f0920202020ull,
0x315f345f744c240aull,0x2f200a3a32383034ull,0x203e706f6f6c3c2full,0x646f6220706f6f4cull,
0x3220656e696c2079ull,0x7473656e202c3531ull,0x7470656420676e69ull,0x7365202c31203a68ull,
0x20646574616d6974ull,0x6f69746172657469ull,0x6e6b6e75203a736eull,0x6f6c2e090a6e776full,
0x3938310935310963ull,0x2e726873090a3009ull,0x3372250920323375ull,0x2c36337225202c36ull,
0x20202020203b3120ull,0x090a202f2f092020ull,0x09353109636f6c2eull,0x62090a3009313931ull,
0x20636e79732e7261ull,0x20202020203b3009ull,0x2020202020202020ull,0x2f2f092020202020ull,
0x2e70746573090a20ull,0x09203233752e656cull,0x337225202c387025ull,0x203b377225202c38ull,
0x40090a202f2f0920ull,0x2061726220387025ull,0x315f345f744c2409ull,0x2020203b38333334ull,
0x2f2f092020202020ull,0x6f6c3c2f2f200a20ull,0x74726150203e706full,0x706f6f6c20666f20ull,
0x696c2079646f6220ull,0x202c35313220656eull,0x62616c2064616568ull,0x744c242064656c65ull,
0x32383034315f345full,0x3109636f6c2e090aull,0x0a30093230320935ull,0x3233732e766f6d09ull,
0x202c393372250920ull,0x2020202020203b32ull,0x0920202020202020ull,0x6c756d090a202f2full,
0x33732e6f6c2e3432ull,0x2c30347225092032ull,0x25202c3933722520ull,0x202f2f093b363372ull,
0x2e34326c756d090aull,0x09203233732e6f6cull,0x7225202c31347225ull,0x3b377225202c3034ull,
0x6461090a202f2f09ull,0x2509203233752e64ull,0x347225202c323472ull,0x3b36337225202c31ull,
0x202f2f0920202020ull,0x33732e627573090aull,0x2c33347225092032ull,0x31202c3234722520ull,
0x202020202020203bull,0x6873090a202f2f09ull,0x2509203233732e72ull,0x347225202c343472ull,
0x2020203b34202c33ull,0x202f2f0920202020ull,0x33732e646461090aull,0x2c35347225092032ull,
0x25202c3234722520ull,0x202020203b343472ull,0x7663090a202f2f09ull,0x33732e3436752e74ull,
0x3432647225092032ull,0x203b35347225202cull,0x202f2f0920202020ull,0x6f6c2e6c756d090aull,
0x722509203436752eull,0x647225202c353264ull,0x20203b34202c3432ull,0x6461090a202f2f09ull,
0x2509203436752e64ull,0x7225202c36326472ull,0x32647225202c3164ull,0x202f2f0920203b35ull,
0x6168732e646c090aull,0x203233662e646572ull,0x255b202c37662509ull,0x5d342d2b36326472ull,
0x3a6469202f2f093bull,0x61645f7320333431ull,0x090a3078302b6174ull,0x09353109636f6c2eull,
0x61090a3009333032ull,0x09203233752e6464ull,0x7225202c36347225ull,0x36337225202c3234ull,
0x2f2f09202020203bull,0x732e627573090a20ull,0x3734722509203233ull,0x202c36347225202cull,
0x2020202020203b31ull,0x73090a202f2f0920ull,0x09203233732e7268ull,0x7225202c38347225ull,
0x20203b34202c3734ull,0x2f2f092020202020ull,0x732e646461090a20ull,0x3934722509203233ull,
0x202c36347225202cull,0x2020203b38347225ull,0x63090a202f2f0920ull,0x732e3436752e7476ull,
0x3264722509203233ull,0x3b39347225202c37ull,0x2f2f092020202020ull,0x6c2e6c756d090a20ull,
0x2509203436752e6full,0x7225202c38326472ull,0x203b34202c373264ull,0x61090a202f2f0920ull,
0x09203436752e6464ull,0x25202c3932647225ull,0x647225202c316472ull,0x2f2f0920203b3832ull,
0x68732e646c090a20ull,0x3233662e64657261ull,0x5b202c3866250920ull,0x342d2b3932647225ull,
0x6469202f2f093b5dull,0x645f73203434313aull,0x0a3078302b617461ull,0x726168732e747309ull,
0x09203233662e6465ull,0x2d2b36326472255bull,0x3b386625202c5d34ull,0x313a6469202f2f09ull,
0x7461645f73203534ull,0x2e090a3078302b61ull,0x3209353109636f6cull,0x646c090a30093430ull,
0x2e6465726168732eull,0x3966250920323366ull,0x39326472255b202cull,0x2f2f093b5d342d2bull,
0x203634313a646920ull,0x302b617461645f73ull,0x2e646461090a3078ull,0x3166250920323366ull,
0x202c396625202c30ull,0x202020203b376625ull,0x090a202f2f092020ull,0x65726168732e7473ull,
0x5b09203233662e64ull,0x342d2b3932647225ull,0x3b30316625202c5dull,0x313a6469202f2f09ull,
0x7461645f73203734ull,0x4c240a3078302b61ull,0x333334315f345f74ull,0x6c3c2f2f200a3a38ull,
0x726150203e706f6full,0x6f6f6c20666f2074ull,0x6c2079646f622070ull,0x2c35313220656e69ull,
0x616c206461656820ull,0x4c242064656c6562ull,0x383034315f345f74ull,0x09636f6c2e090a32ull,
0x3009373831093531ull,0x6f6c2e6c756d090aull,0x722509203233732eull,0x38337225202c3833ull,
0x202020203b32202cull,0x6573090a202f2f09ull,0x33752e656c2e7074ull,0x202c397025092032ull,
0x7225202c38337225ull,0x202f2f0920203b31ull,0x622039702540090aull,0x5f744c2409206172ull,
0x3b32383034315f34ull,0x2020202020202020ull,0x744c240a202f2f09ull,0x30373533315f345full,
0x09636f6c2e090a3aull,0x3009363131093531ull,0x79732e726162090aull,0x20203b300920636eull,
0x2020202020202020ull,0x2020202020202020ull,0x6c2e090a202f2f09ull,0x313109353109636full,
0x2e646c090a300939ull,0x36752e6d61726170ull,0x3033647225092034ull,0x6475635f5f5b202cull,
0x5a5f5f6d72617061ull,0x6e61637365727037ull,0x31624c4530624c49ull,0x664b506650764545ull,
0x675f6969695f3053ull,0x3b5d617461646f5full,0x313a6469202f2f09ull,0x6475635f5f203632ull,
0x5a5f5f6d72617061ull,0x6e61637365727037ull,0x31624c4530624c49ull,0x664b506650764545ull,
0x675f6969695f3053ull,0x302b617461646f5full,0x732e646c090a3078ull,0x33662e6465726168ull,
0x2c31316625092032ull,0x302b366472255b20ull,0x6469202f2f093b5dull,0x645f73203834313aull,
0x0a3078302b617461ull,0x3436752e64646109ull,0x2c31336472250920ull,0x25202c3364722520ull,
0x0920203b30336472ull,0x2e7473090a202f2full,0x662e6c61626f6c67ull,0x6472255b09203233ull,
0x25202c5d302b3133ull,0x202f2f093b313166ull,0x090a3934313a6469ull,0x7262203270252140ull,
0x345f744c24092061ull,0x203b36303135315full,0x2f09202020202020ull,0x636f6c2e090a202full,
0x0933323109353109ull,0x68732e646c090a30ull,0x3233662e64657261ull,0x202c323166250920ull,
0x302b34316472255bull,0x6469202f2f093b5dull,0x645f73203035313aull,0x0a3078302b617461ull,
0x3233752e64646109ull,0x202c303572250920ull,0x317225202c387225ull,0x092020202020203bull,
0x747663090a202f2full,0x3233732e3436752eull,0x2c32336472250920ull,0x20203b3035722520ull,
0x0a202f2f09202020ull,0x2e6f6c2e6c756d09ull,0x6472250920343675ull,0x33647225202c3333ull,
0x0920203b34202c32ull,0x646461090a202f2full,0x722509203436752eull,0x647225202c343364ull,
0x33647225202c3033ull,0x0a202f2f09203b33ull,0x626f6c672e747309ull,0x09203233662e6c61ull,
0x302b34336472255bull,0x3b32316625202c5dull,0x313a6469202f2f09ull,0x345f744c240a3135ull,
0x0a3a36303135315full,0x353109636f6c2e09ull,0x090a300931343209ull,0x2020203b74697865ull,
0x2020202020202020ull,0x2020202020202020ull,0x2f09202020202020ull,0x6557444c240a202full,
0x7270375a5f5f646eull,0x624c496e61637365ull,0x76454531624c4530ull,0x5f3053664b506650ull,
0x207d090a3a696969ull,0x7270375a5f202f2full,0x624c496e61637365ull,0x76454531624c4530ull,
0x5f3053664b506650ull,0x0000000a0a696969ull
};


}



extern "C" {


static const unsigned long long __deviceText_$sm_10$[] = {
0x6365746968637261ull,0x6d737b2065727574ull,0x6962610a7d30315full,0x206e6f6973726576ull,
0x6f6d0a7d317b2020ull,0x202020656d616e64ull,0x696275637b202020ull,0x2065646f630a7d6eull,
0x20656d616e090a7bull,0x657270375a5f203dull,0x31624c496e616373ull,0x5076454531624c45ull,
0x695f3053664b5066ull,0x6d656d6c090a6969ull,0x6d73090a30203d20ull,0x0a3436203d206d65ull,
0x203d202067657209ull,0x20726162090a3031ull,0x6f63090a31203d20ull,0x09090a7b2074736eull,
0x656d616e67657309ull,0x74736e6f63203d20ull,0x6e6765730909090aull,0x0a31203d20206d75ull,
0x657366666f090909ull,0x090a30203d202074ull,0x2073657479620909ull,0x09090a34203d2020ull,
0x09090a7b206d656dull,0x3030303030783009ull,0x7d09090a20313030ull,0x6e6962090a7d090aull,
0x090a7b2065646f63ull,0x6463373033783009ull,0x6336783020646639ull,0x3020386337343132ull,
0x3032343030306178ull,0x3032343078302035ull,0x09090a2030383730ull,0x6334303030617830ull,
0x3234307830203930ull,0x7830203030353030ull,0x6430323031303033ull,0x3030313463783020ull,
0x3009090a20303035ull,0x3034303330303478ull,0x3130303078302039ull,0x3178302030303538ull,
0x2039303864303030ull,0x3263333234307830ull,0x783009090a203038ull,0x3131303030303061ull,
0x3030303430783020ull,0x3032783020303837ull,0x3020393138303030ull,0x3837383030343078ull,
0x33783009090a2030ull,0x2031303830343030ull,0x3730303163657830ull,0x3030337830203038ull,
0x7830203531633032ull,0x3038373030313463ull,0x3032783009090a20ull,0x3020303038383030ull,
0x3063653530313278ull,0x6530306478302038ull,0x3878302039303430ull,0x2030383730306330ull,
0x303030783009090aull,0x7830203530303032ull,0x3038373030303063ull,0x3030303032783020ull,
0x3430783020313038ull,0x0a20303837343030ull,0x3030303378300909ull,0x3678302064303464ull,
0x2030643730313263ull,0x3032303034307830ull,0x3234657830203130ull,0x090a203038373830ull,
0x3030303061783009ull,0x6330783020646637ull,0x3020386337343130ull,0x3063303030303278ull,
0x3030343078302039ull,0x09090a2030383635ull,0x3430323030337830ull,0x3134637830203930ull,
0x7830203038363130ull,0x3930636330303032ull,0x3930323430783020ull,0x3009090a20303836ull,
0x3034306530306478ull,0x3063303878302039ull,0x3178302030383631ull,0x2039303866303030ull,
0x3164333034307830ull,0x783009090a203030ull,0x6430303034303033ull,0x3030316365783020ull,
0x3032783020303837ull,0x3020313030303030ull,0x3837633030343078ull,0x30783009090a2030ull,
0x2039303030323030ull,0x3730303030637830ull,0x3730337830203038ull,0x7830206466333063ull,
0x3864376330306336ull,0x3830783009090a20ull,0x3020313030323030ull,0x3837383032346578ull,
0x3030303178302030ull,0x3078302031303230ull,0x2030383763333034ull,0x303031783009090aull,
0x7830203930303831ull,0x3330303030303030ull,0x3333303031783020ull,0x3030783020333030ull,
0x0a20303832313030ull,0x6631363878300909ull,0x3078302033306566ull,0x2030303030303030ull,
0x3930303030337830ull,0x3034367830206466ull,0x090a203864373831ull,0x6632303061783009ull,
0x3030783020333030ull,0x3020303030303030ull,0x3030663230303178ull,0x3030303078302033ull,
0x09090a2030383231ull,0x3430313030337830ull,0x3134637830206430ull,0x7830203038373030ull,
0x6330363834343034ull,0x3832303032783020ull,0x3009090a20633136ull,0x3065303030303278ull,
0x3030343078302064ull,0x3278302030383738ull,0x2031326538663330ull,0x6666666666307830ull,
0x783009090a206666ull,0x3532363866333032ull,0x6666666630783020ull,0x3033783020666666ull,
0x3020313230313430ull,0x3837303031636578ull,0x33783009090a2030ull,0x2035323231343030ull,
0x3730303163657830ull,0x3030327830203038ull,0x7830206331653838ull,0x6330363839303032ull,
0x3030783009090a20ull,0x3020643065303230ull,0x3837303030306378ull,0x3230303078302030ull,
0x6378302031313630ull,0x2030383730303030ull,0x306331783009090aull,0x7830206430656430ull,
0x3038376333323430ull,0x6430303062783020ull,0x3030783020643065ull,0x0a20343837633032ull,
0x3030303078300909ull,0x6578302031306531ull,0x2034383763303234ull,0x3030313030337830ull,
0x3163657830203130ull,0x090a203238373030ull,0x3063373033783009ull,0x6336783020646631ull,
0x3020386437303130ull,0x3034303130303378ull,0x3031346378302039ull,0x09090a2030383730ull,
0x3065313030317830ull,0x3030307830203330ull,0x7830203038323130ull,0x6466393063373033ull,
0x3431303436783020ull,0x3009090a20386437ull,0x3030323430306178ull,0x3030303078302033ull,
0x3178302030303030ull,0x2033303032343030ull,0x3231303030307830ull,0x783009090a203038ull,
0x6430323031303033ull,0x3030313463783020ull,0x3032783020303837ull,0x3020643136386633ull,
0x6666666666663078ull,0x33783009090a2066ull,0x2064663764633730ull,0x3738303263367830ull,
0x3030317830203864ull,0x7830203130366430ull,0x3038376333323430ull,0x3033783009090a20ull,
0x3020643165303430ull,0x3837303031636578ull,0x3030306178302030ull,0x3078302031306334ull,
0x2030383231303234ull,0x303032783009090aull,0x7830206430363030ull,0x3038376331303430ull,
0x3032303033783020ull,0x3463783020313030ull,0x0a20303837303031ull,0x3230303078300909ull,
0x6378302064303630ull,0x2030383730303030ull,0x3066303031327830ull,0x3064317830206330ull,
0x090a203030656630ull,0x3065303064783009ull,0x3061783020313036ull,0x3020303837303063ull,
0x3065313030633078ull,0x6633346578302031ull,0x09090a2030383730ull,0x3330303830337830ull,
0x3434367830206466ull,0x7830206164373430ull,0x3330306335303031ull,0x3130303030783020ull,
0x3009090a20303832ull,0x3130383130303178ull,0x3030303078302064ull,0x3378302033303030ull,
0x2039303430313030ull,0x3730303134657830ull,0x783009090a203038ull,0x3330656666313638ull,
0x3030303030783020ull,0x3033783020303030ull,0x3020646666303430ull,0x6437633030343678ull,
0x61783009090a2038ull,0x2033303039353030ull,0x3030303030307830ull,0x3030317830203030ull,
0x7830203330303935ull,0x3038323130303030ull,0x3033783009090a20ull,0x3020313034303130ull,
0x3837303031346378ull,0x3434303478302030ull,0x3278302030303038ull,0x2063303038323030ull,
0x303032783009090aull,0x7830203130363030ull,0x3038373830303430ull,0x3866333032783020ull,
0x6630783020313236ull,0x0a20666666666666ull,0x6633303278300909ull,0x3078302035323038ull,
0x2066666666666666ull,0x3031343030337830ull,0x3163657830203132ull,0x090a203038373030ull,
0x3134303033783009ull,0x6365783020353232ull,0x3020303837303031ull,0x3036383830303278ull,
0x3930303278302063ull,0x09090a2030303038ull,0x3630323030307830ull,0x3030637830203131ull,
0x7830203038373030ull,0x6430303032303030ull,0x3030303063783020ull,0x3009090a20303837ull,
0x3065643030303178ull,0x3332343078302031ull,0x3178302034383763ull,0x2064306564303063ull,
0x3763333234307830ull,0x783009090a203038ull,0x3130653130303030ull,0x6330323465783020ull,
0x6362783020343837ull,0x3020313065643030ull,0x3837303032303078ull,0x30783009090a2030ull,
0x2031306531303063ull,0x3730303234657830ull,0x3030337830203038ull,0x7830206431653031ull,
0x3238373030313463ull,0x3033783009090a20ull,0x3020646666303130ull,0x6437633030343678ull,
0x3430303178302038ull,0x3078302033303035ull,0x2030383231303030ull,0x313638783009090aull,
0x7830203330656666ull,0x3030303030303030ull,0x6330303032783020ull,0x3430783020393038ull,
0x0a20303837343132ull,0x3030343178300909ull,0x3078302031303065ull,0x2030383763333234ull,
0x3430653030647830ull,0x6330617830203130ull,0x090a203038373030ull,0x3030303033783009ull,
0x3030783020333030ull,0x3020303031303030ull,0x3063303030303278ull,0x3030343078302031ull,
0x09090a2030383734ull,0x3030323030337830ull,0x3134637830203530ull,0x7830203038373030ull,
0x3130306530303831ull,0x6333323430783020ull,0x3009090a20303837ull,0x3038633030303278ull,
0x3032343078302035ull,0x6478302030383734ull,0x2031303230653030ull,0x3730306330617830ull,
0x7d0a7d090a203138ull,0x0a7b2065646f630aull,0x203d20656d616e09ull,0x6373657270375a5full,
0x4c4530624c496e61ull,0x5066507645453162ull,0x6969695f3053664bull,0x3d206d656d6c090aull,
0x6d656d73090a3020ull,0x72090a3436203d20ull,0x3031203d20206765ull,0x3d2020726162090aull,
0x736e6f63090a3120ull,0x730909090a7b2074ull,0x3d20656d616e6765ull,0x090a74736e6f6320ull,
0x6d756e6765730909ull,0x09090a31203d2020ull,0x2074657366666f09ull,0x0909090a30203d20ull,
0x2020207365747962ull,0x656d09090a38203dull,0x300909090a7b206dull,0x3030303030303078ull,
0x6666666678302031ull,0x09090a2066666666ull,0x6962090a7d090a7dull,0x0a7b2065646f636eull,
0x6337303378300909ull,0x3678302064663964ull,0x2038633734313263ull,0x3234303030617830ull,
0x3234307830203530ull,0x090a203038373030ull,0x3430303061783009ull,0x3430783020393063ull,
0x3020303035303032ull,0x3032303130303378ull,0x3031346378302064ull,0x09090a2030303530ull,
0x3430333030347830ull,0x3030307830203930ull,0x7830203030353831ull,0x3930386430303031ull,
0x6333323430783020ull,0x3009090a20303832ull,0x3130303030306178ull,0x3030343078302031ull,
0x3278302030383730ull,0x2035313830303030ull,0x3738303034307830ull,0x783009090a203038ull,
0x3130383034303033ull,0x3030316365783020ull,0x3033783020303837ull,0x3020393161303230ull,
0x3837303031346378ull,0x32783009090a2030ull,0x2030303838303030ull,0x6365363031327830ull,
0x3030647830203830ull,0x7830203930343065ull,0x3038373030633038ull,0x3030783009090a20ull,
0x3020353030303230ull,0x3837303030306378ull,0x3030303278302030ull,0x3078302031303830ull,
0x2030383734303034ull,0x303033783009090aull,0x7830206430346430ull,0x3064373031326336ull,
0x3230303430783020ull,0x3465783020313030ull,0x0a20303837383032ull,0x3030306178300909ull,
0x3078302064663730ull,0x2038633734313063ull,0x6130303030327830ull,0x3034307830203930ull,
0x090a203038363530ull,0x3032303033783009ull,0x3463783020393034ull,0x3020303836313031ull,
0x3063633030303278ull,0x3032343078302039ull,0x09090a2030383639ull,0x3430653030647830ull,
0x6330387830203930ull,0x7830203038363130ull,0x3930386630303031ull,0x6433303430783020ull,
0x3009090a20303031ull,0x3030303430303378ull,0x3031636578302064ull,0x3278302030383730ull,
0x2031303030303030ull,0x3763303034307830ull,0x783009090a203038ull,0x3930303032303030ull,
0x3030303063783020ull,0x3033783020303837ull,0x3020646633306337ull,0x6437633030633678ull,
0x30783009090a2038ull,0x2031303032303038ull,0x3738303234657830ull,0x3030317830203038ull,
0x7830203130323030ull,0x3038376333303430ull,0x3031783009090a20ull,0x3020393030383130ull,
0x3030303030303078ull,0x3330303178302033ull,0x3078302033303033ull,0x2030383231303030ull,
0x313638783009090aull,0x7830203330656666ull,0x3030303030303030ull,0x3030303033783020ull,
0x3436783020646639ull,0x0a20386437383130ull,0x3230306178300909ull,0x3078302033303066ull,
0x2030303030303030ull,0x3066323030317830ull,0x3030307830203330ull,0x090a203038323130ull,
0x3031303033783009ull,0x3463783020643034ull,0x3020303837303031ull,0x3036383434303478ull,
0x3230303278302063ull,0x09090a2063313638ull,0x6530303030327830ull,0x3034307830206430ull,
0x7830203038373830ull,0x3132653866333032ull,0x6666666630783020ull,0x3009090a20666666ull,
0x3236386633303278ull,0x6666663078302035ull,0x3378302066666666ull,0x2031323031343030ull,
0x3730303163657830ull,0x783009090a203038ull,0x3532323134303033ull,0x3030316365783020ull,
0x3032783020303837ull,0x3020633165383830ull,0x3036383930303278ull,0x30783009090a2063ull,
0x2064306530323030ull,0x3730303030637830ull,0x3030307830203038ull,0x7830203131363032ull,
0x3038373030303063ull,0x6331783009090a20ull,0x3020643065643030ull,0x3837633332343078ull,
0x3030306278302030ull,0x3078302064306564ull,0x2034383763303230ull,0x303030783009090aull,
0x7830203130653130ull,0x3438376330323465ull,0x3031303033783020ull,0x6365783020313030ull,
0x0a20323837303031ull,0x6337303378300909ull,0x3678302064663130ull,0x2038643730313063ull,
0x3430313030337830ull,0x3134637830203930ull,0x090a203038373030ull,0x6531303031783009ull,
0x3030783020333030ull,0x3020303832313030ull,0x6639306337303378ull,0x3130343678302064ull,
0x09090a2038643734ull,0x3230313030337830ull,0x3134637830203130ull,0x7830203030353130ull,
0x6430303030303132ull,0x3530343430783020ull,0x3009090a20303035ull,0x3036303430303378ull,
0x3031636578302064ull,0x3278302030303531ull,0x2031303030303030ull,0x3564303034307830ull,
0x783009090a203030ull,0x6430303032303030ull,0x3130303063783020ull,0x6330783020303035ull,
0x3020313065313030ull,0x3035316633346578ull,0x33783009090a2030ull,0x2064663330303830ull,
0x3734303434367830ull,0x3030317830203864ull,0x7830203130343030ull,0x3038376333303430ull,
0x3031783009090a20ull,0x3020333030353530ull,0x3832313030303078ull,0x3130303178302030ull,
0x3078302064313038ull,0x2033303030303030ull,0x303033783009090aull,0x7830203130303031ull,
0x3038373030313465ull,0x6666313638783020ull,0x3030783020333065ull,0x0a20303030303030ull,
0x3430303378300909ull,0x3678302064666630ull,0x2038643763303034ull,0x3032353030617830ull,
0x3030307830203330ull,0x090a203030303030ull,0x3235303031783009ull,0x3030783020333030ull,
0x3020303832313030ull,0x3030303130303378ull,0x3031346378302039ull,0x09090a2030383730ull,
0x3438343430347830ull,0x3030327830203830ull,0x7830206330343830ull,0x3930363030303032ull,
0x3030303430783020ull,0x3009090a20303837ull,0x3236386633303278ull,0x6666663078302031ull,
0x3278302066666666ull,0x2035323438663330ull,0x6666666666307830ull,0x783009090a206666ull,
0x3132303134303033ull,0x3030316365783020ull,0x3033783020303837ull,0x3020353232313430ull,
0x3837303031636578ull,0x32783009090a2030ull,0x2063303638383030ull,0x3438393030327830ull,
0x3030307830203830ull,0x7830203131363032ull,0x3038373030303063ull,0x3030783009090a20ull,
0x3020643034303230ull,0x3837303030306378ull,0x3030303178302030ull,0x3078302039306564ull,
0x2034383763333234ull,0x306331783009090aull,0x7830206430656430ull,0x3038376333323430ull,
0x3130303030783020ull,0x3465783020313065ull,0x0a20343837633032ull,0x3030636278300909ull,
0x3078302039306564ull,0x2030383738303230ull,0x6531303063307830ull,0x3234657830203130ull,
0x090a203038373830ull,0x3031303033783009ull,0x3463783020643165ull,0x3020323837303031ull,
0x6666303130303378ull,0x3030343678302064ull,0x09090a2038643763ull,0x3065333030317830ull,
0x3030307830203330ull,0x7830203038323130ull,0x3330656666313638ull,0x3030303030783020ull,
0x3009090a20303030ull,0x3038633030303278ull,0x3132343078302039ull,0x3178302030383738ull,
0x2031303065303034ull,0x3763333234307830ull,0x783009090a203038ull,0x3130343065303064ull,
0x3030633061783020ull,0x3033783020303837ull,0x3020333030303030ull,0x3031303030303078ull,
0x32783009090a2030ull,0x2031306130303030ull,0x3734303034307830ull,0x3030337830203038ull,
0x7830203530303032ull,0x3038373030313463ull,0x3831783009090a20ull,0x3020313030653030ull,
0x3837633332343078ull,0x3030303278302030ull,0x3078302035303863ull,0x2030383734303234ull,
0x303064783009090aull,0x7830203130323065ull,0x3138373030633061ull,0x630a7d0a7d090a20ull,
0x6e090a7b2065646full,0x5a5f203d20656d61ull,0x6e61637365727037ull,0x30624c4531624c49ull,
0x664b506650764545ull,0x090a6969695f3053ull,0x30203d206d656d6cull,0x3d206d656d73090aull,
0x676572090a343620ull,0x090a3031203d2020ull,0x31203d2020726162ull,0x2074736e6f63090aull,
0x6765730909090a7bull,0x63203d20656d616eull,0x0909090a74736e6full,0x20206d756e676573ull,
0x6f0909090a31203dull,0x3d20207465736666ull,0x79620909090a3020ull,0x203d202020736574ull,
0x206d656d09090a34ull,0x3078300909090a7bull,0x2031303030303030ull,0x0a7d090a7d09090aull,
0x65646f636e696209ull,0x33783009090a7b20ull,0x2064663964633730ull,0x3734313263367830ull,
0x3030617830203863ull,0x7830203530323430ull,0x3038373030323430ull,0x3061783009090a20ull,
0x3020393063343030ull,0x3035303032343078ull,0x3130303378302030ull,0x6378302064303230ull,
0x2030303530303134ull,0x303034783009090aull,0x7830203930343033ull,0x3030353831303030ull,
0x6430303031783020ull,0x3430783020393038ull,0x0a20303832633332ull,0x3030306178300909ull,
0x3078302031313030ull,0x2030383730303034ull,0x3830303030327830ull,0x3034307830203130ull,
0x090a203038373830ull,0x3034303033783009ull,0x6365783020643038ull,0x3020303837303031ull,
0x3032303030303278ull,0x3030343078302039ull,0x09090a2030383730ull,0x3030323030337830ull,
0x3134637830203931ull,0x7830203038373030ull,0x6430383030303032ull,0x6330303430783020ull,
0x3009090a20303837ull,0x3134303230303378ull,0x3031346378302035ull,0x3278302030383730ull,
0x2031306363303030ull,0x3738313234307830ull,0x783009090a203038ull,0x3130303065303064ull,
0x3030633038783020ull,0x3030783020303837ull,0x3020393036303230ull,0x3837303030306378ull,
0x32783009090a2030ull,0x2039306363303030ull,0x3734313234307830ull,0x3030647830203038ull,
0x7830203930343065ull,0x3038373030633038ull,0x3032783009090a20ull,0x3020643038303030ull,
0x3837343030343078ull,0x3430303378302030ull,0x6578302064313630ull,0x2030383730303163ull,
0x303032783009090aull,0x7830206430363030ull,0x3038376331303430ull,0x3230303830783020ull,
0x3465783020313030ull,0x0a20303837303032ull,0x3230303078300909ull,0x6378302035303630ull,
0x2030383730303030ull,0x3330633730337830ull,0x3063367830206466ull,0x090a203863376330ull,
0x3230303430783009ull,0x3465783020313030ull,0x3020303837383032ull,0x3032303030303178ull,
0x3330343078302031ull,0x09090a2030383763ull,0x3038313030317830ull,0x3030307830203930ull,
0x7830203330303030ull,0x3330303133303031ull,0x3030303030783020ull,0x3009090a20303832ull,
0x3065666631363878ull,0x3030303078302033ull,0x3378302030303030ull,0x2064663930303030ull,
0x3738313034367830ull,0x783009090a203863ull,0x3330306432303061ull,0x3030303030783020ull,
0x3031783020303030ull,0x3020333030643230ull,0x3832303030303078ull,0x33783009090a2030ull,
0x2064303430313030ull,0x3730303134637830ull,0x3430347830203038ull,0x7830206330363834ull,
0x6331363832303032ull,0x3032783009090a20ull,0x3020643065303030ull,0x3837383030343078ull,
0x6633303278302030ull,0x3078302031326538ull,0x2066666666666666ull,0x333032783009090aull,
0x7830203532363866ull,0x6666666666666630ull,0x3134303033783020ull,0x6365783020313230ull,
0x0a20303837303031ull,0x3430303378300909ull,0x6578302035323231ull,0x2030383730303163ull,
0x6538383030327830ull,0x3030327830206331ull,0x090a206330363839ull,0x3032303030783009ull,
0x3063783020643065ull,0x3020303837303030ull,0x3136303230303078ull,0x3030306378302031ull,
0x09090a2030383730ull,0x6564303063317830ull,0x3234307830206430ull,0x7830203038376333ull,
0x6430656430303062ull,0x6330323030783020ull,0x3009090a20343837ull,0x3065313030303078ull,
0x3032346578302031ull,0x3378302034383763ull,0x2031303030313030ull,0x3730303163657830ull,
0x783009090a203238ull,0x6466313063373033ull,0x3031306336783020ull,0x3033783020386337ull,
0x3020393034303130ull,0x3837303031346378ull,0x31783009090a2030ull,0x2033303063313030ull,
0x3230303030307830ull,0x3730337830203038ull,0x7830206466393063ull,0x3863373431303436ull,
0x3061783009090a20ull,0x3020333030303430ull,0x3030303030303078ull,0x3430303178302030ull,
0x3078302033303030ull,0x2030383230303030ull,0x303033783009090aull,0x7830206430323031ull,
0x3038373030313463ull,0x3866333032783020ull,0x6630783020643136ull,0x0a20666666666666ull,
0x6337303378300909ull,0x3678302064663764ull,0x2038633738303263ull,0x3664303030317830ull,
0x3234307830203130ull,0x090a203038376333ull,0x3034303033783009ull,0x6365783020643165ull,
0x3020303837303031ull,0x3063343030306178ull,0x3032343078302031ull,0x09090a2030383230ull,
0x3630303030327830ull,0x3034307830206430ull,0x7830203038376331ull,0x3130303032303033ull,
0x3030313463783020ull,0x3009090a20303837ull,0x3036303230303078ull,0x3030306378302064ull,
0x3278302030383730ull,0x2063303066303031ull,0x6566303064317830ull,0x783009090a203030ull,
0x3130363065303064ull,0x3030633061783020ull,0x6330783020303837ull,0x3020313065313030ull,
0x3837306633346578ull,0x33783009090a2030ull,0x2064663330303830ull,0x3734303434367830ull,
0x3030317830206163ull,0x7830203330306135ull,0x3038323030303030ull,0x3031783009090a20ull,
0x3020643130383130ull,0x3030303030303078ull,0x3130303378302033ull,0x6578302039303430ull,
0x2030383730303134ull,0x313638783009090aull,0x7830203330656666ull,0x3030303030303030ull,
0x3034303033783020ull,0x3436783020646666ull,0x0a20386337633030ull,0x3530306178300909ull,
0x3078302033303037ull,0x2030303030303030ull,0x3037353030317830ull,0x3030307830203330ull,
0x090a203038323030ull,0x3031303033783009ull,0x3463783020313034ull,0x3020303837303031ull,
0x3030383434303478ull,0x3230303278302030ull,0x09090a2063303038ull,0x3630303030327830ull,
0x3034307830203130ull,0x7830203038373830ull,0x3132363866333032ull,0x6666666630783020ull,
0x3009090a20666666ull,0x3230386633303278ull,0x6666663078302035ull,0x3378302066666666ull,
0x2031323031343030ull,0x3730303163657830ull,0x783009090a203038ull,0x3532323134303033ull,
0x3030316365783020ull,0x3032783020303837ull,0x3020633036383830ull,0x3030383930303278ull,
0x30783009090a2030ull,0x2031313630323030ull,0x3730303030637830ull,0x3030307830203038ull,
0x7830206430303032ull,0x3038373030303063ull,0x3031783009090a20ull,0x3020313065643030ull,
0x3837633332343078ull,0x3030633178302034ull,0x3078302064306564ull,0x2030383763333234ull,
0x303030783009090aull,0x7830203130653130ull,0x3438376330323465ull,0x6430306362783020ull,
0x3030783020313065ull,0x0a20303837303032ull,0x3030633078300909ull,0x6578302031306531ull,
0x2030383730303234ull,0x6530313030337830ull,0x3134637830206431ull,0x090a203238373030ull,
0x3031303033783009ull,0x3436783020646666ull,0x3020386337633030ull,0x3030333430303178ull,
0x3030303078302033ull,0x09090a2030383230ull,0x6566663136387830ull,0x3030307830203330ull,
0x7830203030303030ull,0x3530386330303032ull,0x3831323430783020ull,0x3009090a20303837ull,
0x3030653030383178ull,0x3332343078302031ull,0x6478302030383763ull,0x2031303230653030ull,
0x3730306330617830ull,0x783009090a203038ull,0x3530386330303032ull,0x3431323430783020ull,
0x3431783020303837ull,0x3020313030653030ull,0x3837633332343078ull,0x64783009090a2030ull,
0x2031303230653030ull,0x3730306330617830ull,0x7d0a7d090a203138ull,0x0a7b2065646f630aull,
0x203d20656d616e09ull,0x6373657270375a5full,0x4c4530624c496e61ull,0x5066507645453062ull,
0x6969695f3053664bull,0x3d206d656d6c090aull,0x6d656d73090a3020ull,0x72090a3436203d20ull,
0x3031203d20206765ull,0x3d2020726162090aull,0x736e6f63090a3120ull,0x730909090a7b2074ull,
0x3d20656d616e6765ull,0x090a74736e6f6320ull,0x6d756e6765730909ull,0x09090a31203d2020ull,
0x2074657366666f09ull,0x0909090a30203d20ull,0x2020207365747962ull,0x656d09090a38203dull,
0x300909090a7b206dull,0x3030303030303078ull,0x6666666678302031ull,0x09090a2066666666ull,
0x6962090a7d090a7dull,0x0a7b2065646f636eull,0x6337303378300909ull,0x3678302064663964ull,
0x2038633734313263ull,0x3234303030617830ull,0x3234307830203530ull,0x090a203038373030ull,
0x3430303061783009ull,0x3430783020393063ull,0x3020303035303032ull,0x3032303130303378ull,
0x3031346378302064ull,0x09090a2030303530ull,0x3430333030347830ull,0x3030307830203930ull,
0x7830203030353831ull,0x3930386430303031ull,0x6333323430783020ull,0x3009090a20303832ull,
0x3130303030306178ull,0x3030343078302035ull,0x3278302030383730ull,0x2031306130303030ull,
0x3738303034307830ull,0x783009090a203038ull,0x6430613034303033ull,0x3030316365783020ull,
0x3032783020303837ull,0x3020393032303030ull,0x3837303030343078ull,0x33783009090a2030ull,
0x2039313030323030ull,0x3730303134637830ull,0x3030327830203038ull,0x7830203130613030ull,
0x3038376330303430ull,0x3033783009090a20ull,0x3020313134303230ull,0x3837303031346378ull,
0x3030303278302030ull,0x3078302039306363ull,0x2030383738313234ull,0x303030783009090aull,
0x7830203930303032ull,0x3038373030303063ull,0x6330303032783020ull,0x3430783020313063ull,
0x0a20303837303132ull,0x6530306478300909ull,0x3878302039303430ull,0x2030383730306330ull,
0x3030653030647830ull,0x6330387830203130ull,0x090a203038373030ull,0x3030303032783009ull,
0x3430783020643061ull,0x3020303837343030ull,0x3136303430303378ull,0x3031636578302064ull,
0x09090a2030383730ull,0x3630303030327830ull,0x3034307830206430ull,0x7830203038376331ull,
0x3130303230303830ull,0x3830323465783020ull,0x3009090a20303837ull,0x3036303230303078ull,
0x3030306378302035ull,0x3378302030383730ull,0x2064663330633730ull,0x3763303063367830ull,
0x783009090a203863ull,0x3130303230303430ull,0x3030323465783020ull,0x3031783020303837ull,
0x3020313032303030ull,0x3837633330343078ull,0x31783009090a2030ull,0x2039303038313030ull,
0x3030303030307830ull,0x3030317830203330ull,0x7830203330303133ull,0x3038323030303030ull,
0x3638783009090a20ull,0x3020333065666631ull,0x3030303030303078ull,0x3030303378302030ull,
0x3678302064666230ull,0x2038633738313034ull,0x303061783009090aull,0x7830203330306432ull,
0x3030303030303030ull,0x6432303031783020ull,0x3030783020333030ull,0x0a20303832303030ull,
0x3130303378300909ull,0x6378302064303430ull,0x2030383730303134ull,0x3638353430347830ull,
0x3030327830206330ull,0x090a206331363832ull,0x3030303032783009ull,0x3430783020643065ull,
0x3020303837383030ull,0x3265386633303278ull,0x6666663078302031ull,0x09090a2066666666ull,
0x3638663330327830ull,0x6666307830203532ull,0x7830206666666666ull,0x3132303134303033ull,
0x3030316365783020ull,0x3009090a20303837ull,0x3232313430303378ull,0x3031636578302035ull,
0x3278302030383730ull,0x2063316538383030ull,0x3638393030327830ull,0x783009090a206330ull,
0x6430653032303030ull,0x3030303063783020ull,0x3030783020303837ull,0x3020313136303230ull,
0x3837303030306378ull,0x31783009090a2030ull,0x2064306564303063ull,0x3763333234307830ull,
0x3030627830203038ull,0x7830206430656430ull,0x3438376330323030ull,0x3030783009090a20ull,
0x3020313065313030ull,0x3837633032346578ull,0x3130303378302034ull,0x6578302031303030ull,
0x2032383730303163ull,0x373033783009090aull,0x7830206466313063ull,0x3863373031306336ull,
0x3031303033783020ull,0x3463783020393034ull,0x0a20303837303031ull,0x3130303178300909ull,
0x3078302033303063ull,0x2030383230303030ull,0x6230633730337830ull,0x3034367830206466ull,
0x090a203863373431ull,0x3031303033783009ull,0x3463783020313032ull,0x3020303035303031ull,
0x3030303030313278ull,0x3034343078302064ull,0x09090a2030303534ull,0x3630343030337830ull,
0x3163657830206430ull,0x7830203030353030ull,0x3130303030303032ull,0x6330303430783020ull,
0x3009090a20303035ull,0x3030303230303078ull,0x3030306378302064ull,0x3078302030303530ull,
0x2031306531303063ull,0x3530663334657830ull,0x783009090a203030ull,0x6466333030383033ull,
0x3430343436783020ull,0x3031783020386337ull,0x3020313034303030ull,0x3837633330343078ull,
0x31783009090a2030ull,0x2033303033353030ull,0x3230303030307830ull,0x3030317830203038ull,
0x7830206431303831ull,0x3330303030303030ull,0x3033783009090a20ull,0x3020313030303130ull,
0x3837303031346578ull,0x6631363878302030ull,0x3078302033306566ull,0x2030303030303030ull,
0x303033783009090aull,0x7830206466663035ull,0x3863376330303436ull,0x3035303061783020ull,
0x3030783020333030ull,0x0a20303030303030ull,0x3530303178300909ull,0x3078302033303030ull,
0x2030383230303030ull,0x3030313030337830ull,0x3134637830203930ull,0x090a203038373030ull,
0x3835343034783009ull,0x3032783020383034ull,0x3020633034383030ull,0x3036303030303278ull,
0x3030343078302039ull,0x09090a2030383730ull,0x3638663330327830ull,0x6666307830203132ull,
0x7830206666666666ull,0x3532343866333032ull,0x6666666630783020ull,0x3009090a20666666ull,
0x3230313430303378ull,0x3031636578302031ull,0x3378302030383730ull,0x2035323231343030ull,
0x3730303163657830ull,0x783009090a203038ull,0x6330363838303032ull,0x3839303032783020ull,
0x3030783020383034ull,0x3020313136303230ull,0x3837303030306378ull,0x30783009090a2030ull,
0x2064303430323030ull,0x3730303030637830ull,0x3030317830203038ull,0x7830203930656430ull,
0x3438376333323430ull,0x6331783009090a20ull,0x3020643065643030ull,0x3837633332343078ull,
0x3030303078302030ull,0x6578302031306531ull,0x2034383763303234ull,0x306362783009090aull,
0x7830203930656430ull,0x3038373830323030ull,0x3130306330783020ull,0x3465783020313065ull,
0x0a20303837383032ull,0x3130303378300909ull,0x6378302064316530ull,0x2032383730303134ull,
0x6630313030337830ull,0x3034367830206466ull,0x090a203863376330ull,0x6333303031783009ull,
0x3030783020333030ull,0x3020303832303030ull,0x3065666631363878ull,0x3030303078302033ull,
0x09090a2030303030ull,0x3863303030327830ull,0x3234307830203530ull,0x7830203038373831ull,
0x3130306530303831ull,0x6333323430783020ull,0x3009090a20303837ull,0x3032306530306478ull,
0x3063306178302031ull,0x3278302030383730ull,0x2035303863303030ull,0x3730313234307830ull,
0x783009090a203038ull,0x3130306530303431ull,0x6333323430783020ull,0x3064783020303837ull,
0x3020313032306530ull,0x3837303063306178ull,0x0a7d0a7d090a2031ull,0x090a7b2065646f63ull,
0x5f203d20656d616eull,0x6f66696e7530315aull,0x5366506464416d72ull,0x6d6c090a6969695full,
0x090a30203d206d65ull,0x34203d206d656d73ull,0x2020676572090a38ull,0x726162090a35203dull,
0x62090a31203d2020ull,0x7b2065646f636e69ull,0x303061783009090aull,0x7830203530303030ull,
0x3063373030303430ull,0x3430303061783020ull,0x3430783020643063ull,0x0a20303837303032ull,
0x3030303278300909ull,0x3078302031303264ull,0x2030303563303234ull,0x3030323030337830ull,
0x3134637830203130ull,0x090a203030353030ull,0x6330303032783009ull,0x3430783020313063ull,
0x3020303035303032ull,0x3030306530306478ull,0x3063303878302031ull,0x09090a2030303530ull,
0x3631303030307830ull,0x3234657830203130ull,0x7830203030353030ull,0x3330656666313638ull,
0x3030303030783020ull,0x3009090a20303030ull,0x3032343030306178ull,0x3032343078302039ull,
0x3178302030383730ull,0x2031303464303030ull,0x3763333234307830ull,0x783009090a203038ull,
0x3131343031303033ull,0x3030313463783020ull,0x3036783020303837ull,0x3020313036303430ull,
0x3837303030303878ull,0x32783009090a2030ull,0x2031303030303030ull,0x3734303034307830ull,
0x3030337830203038ull,0x7830206430303032ull,0x3038373030313463ull,0x3032783009090a20ull,
0x3020343034383130ull,0x3038653330313278ull,0x3130303378302063ull,0x3678302064663164ull,
0x2038633763303234ull,0x303064783009090aull,0x7830203530363065ull,0x3038373030633038ull,
0x6430303062783020ull,0x3030783020353036ull,0x0a20303837343032ull,0x6530306478300909ull,
0x6178302035303630ull,0x2030383730306330ull,0x3030303030337830ull,0x3030307830203330ull,
0x090a203038323030ull,0x3030303032783009ull,0x3430783020313030ull,0x3020303837383030ull,
0x3030303230303378ull,0x3031346378302031ull,0x09090a2030383730ull,0x3863303030327830ull,
0x3234307830203530ull,0x7830203038373030ull,0x3130323065303064ull,0x3030633038783020ull,
0x3009090a20303837ull,0x3036643030306278ull,0x3032303078302031ull,0x6478302030383730ull,
0x2031303230653030ull,0x3730306330617830ull,0x7d0a7d090a203138ull,0x000000000000000aull
};


}


static __cudaFatPtxEntry __ptxEntries [] = {{(char*)"compute_10",(char*)__deviceText_$compute_10$},{0,0}};
static __cudaFatCubinEntry __cubinEntries[] = {{(char*)"sm_10",(char*)__deviceText_$sm_10$},{0,0}};
static __cudaFatDebugEntry __debugEntries[] = {{0,0}};



static __cudaFatCudaBinary __fatDeviceText __attribute__ ((section (".nvFatBinSegment")))= {0x1ee55a01,0x00000003,0x8ecc680c,(char*)"40731fcc40de46c6",(char*)"scanLargeArray.cu",(char*)" ",__ptxEntries,__cubinEntries,__debugEntries,0,0,0,0,0,0x370702b7};
# 5 "/tmp/tmpxft_00003fb3_00000000-1_scanLargeArray.cudafe1.stub.c" 2
# 1 "/home/normal/cuda/bin/../include/crt/host_runtime.h" 1
# 85 "/home/normal/cuda/bin/../include/crt/host_runtime.h"
# 1 "/home/normal/cuda/bin/../include/host_defines.h" 1
# 86 "/home/normal/cuda/bin/../include/crt/host_runtime.h" 2
# 111 "/home/normal/cuda/bin/../include/crt/host_runtime.h"
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

extern void __cudaRegisterShared(
  void **fatCubinHandle,
  void **devicePtr
);

extern void __cudaRegisterSharedVar(
  void **fatCubinHandle,
  void **devicePtr,
  size_t size,
  size_t alignment,
  int storage
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


}




extern int atexit(void(*)(void)) throw();







static void **__cudaFatCubinHandle;

static void __cudaUnregisterBinaryUtil(void)
{
  __cudaUnregisterFatBinary(__cudaFatCubinHandle);
}
# 226 "/home/normal/cuda/bin/../include/crt/host_runtime.h"
# 1 "/home/normal/cuda/bin/../include/common_functions.h" 1
# 68 "/home/normal/cuda/bin/../include/common_functions.h"
# 1 "/home/normal/cuda/bin/../include/crt/func_macro.h" 1 3
# 69 "/home/normal/cuda/bin/../include/common_functions.h" 2

static clock_t __cuda_clock(void)
{
  return clock();
}

static void *__cuda_memset(void *s, int c, size_t n)
{
  return memset(s, c, n);
}

static void *__cuda_memcpy(void *d, const void *s, size_t n)
{
  return memcpy(d, s, n);
}
# 93 "/home/normal/cuda/bin/../include/common_functions.h"
# 1 "/home/normal/cuda/bin/../include/math_functions.h" 1 3
# 864 "/home/normal/cuda/bin/../include/math_functions.h" 3
extern __attribute__((__weak__)) int __cuda_error_not_implememted(void); int __cuda_error_not_implememted(void);
# 920 "/home/normal/cuda/bin/../include/math_functions.h" 3
static int __cuda_abs(int a)
{
  return abs(a);
}

static float __cuda_fabsf(float a)
{
  return fabsf(a);
}

static long long int __cuda_llabs(long long int a)
{

  return ::llabs(a);



}

static float __cuda_exp2f(float a)
{
  return exp2f(a);
}

# 1 "/home/normal/cuda/bin/../include/device_functions.h" 1 3
# 426 "/home/normal/cuda/bin/../include/device_functions.h" 3
# 1 "/home/normal/cuda/bin/../include/math_constants.h" 1 3
# 427 "/home/normal/cuda/bin/../include/device_functions.h" 2 3
# 2367 "/home/normal/cuda/bin/../include/device_functions.h" 3
# 1 "/home/normal/cuda/bin/../include/common_types.h" 1 3
# 37 "/home/normal/cuda/bin/../include/common_types.h" 3
union __cudart_FloatUintCvt {
    float f;
    unsigned int i;
};

union __cudart_FloatIntCvt {
    float f;
    int i;
};

union __cudart_DoubleUlonglongCvt {
    double d;
    unsigned long long int i;
};

union __cudart_DoubleLonglongCvt {
    double d;
    long long int i;
};

union __cudart_DoubleInthiloCvt {
    double d;
    signed int i[2];
};

struct __cudart_UintUint {
    unsigned int lo;
    unsigned int hi;
};
# 2368 "/home/normal/cuda/bin/../include/device_functions.h" 2 3

static const unsigned char __internal_rcpTab[128] =
{
  0xff, 0xfd, 0xfb, 0xf9, 0xf7, 0xf5, 0xf4, 0xf2,
  0xf0, 0xee, 0xed, 0xeb, 0xe9, 0xe8, 0xe6, 0xe4,
  0xe3, 0xe1, 0xe0, 0xde, 0xdd, 0xdb, 0xda, 0xd8,
  0xd7, 0xd5, 0xd4, 0xd3, 0xd1, 0xd0, 0xcf, 0xcd,
  0xcc, 0xcb, 0xca, 0xc8, 0xc7, 0xc6, 0xc5, 0xc4,
  0xc2, 0xc1, 0xc0, 0xbf, 0xbe, 0xbd, 0xbc, 0xbb,
  0xba, 0xb9, 0xb8, 0xb7, 0xb6, 0xb5, 0xb4, 0xb3,
  0xb2, 0xb1, 0xb0, 0xaf, 0xae, 0xad, 0xac, 0xab,
  0xaa, 0xa9, 0xa8, 0xa8, 0xa7, 0xa6, 0xa5, 0xa4,
  0xa3, 0xa3, 0xa2, 0xa1, 0xa0, 0x9f, 0x9f, 0x9e,
  0x9d, 0x9c, 0x9c, 0x9b, 0x9a, 0x99, 0x99, 0x98,
  0x97, 0x97, 0x96, 0x95, 0x95, 0x94, 0x93, 0x93,
  0x92, 0x91, 0x91, 0x90, 0x8f, 0x8f, 0x8e, 0x8e,
  0x8d, 0x8c, 0x8c, 0x8b, 0x8b, 0x8a, 0x89, 0x89,
  0x88, 0x88, 0x87, 0x87, 0x86, 0x85, 0x85, 0x84,
  0x84, 0x83, 0x83, 0x82, 0x82, 0x81, 0x81, 0x80
};

static const unsigned int __internal_invSqrtCubeTab[96] =
{
  0xfa0bf8fe, 0xee6b28fa, 0xe5f024f7, 0xdaf268f3,
  0xd2f000f0, 0xc890c0ec, 0xc10378e9, 0xb9a758e6,
  0xb4da40e4, 0xadcea0e1, 0xa6f278de, 0xa279c0dc,
  0x9beb48d9, 0x97a5c4d7, 0x916340d4, 0x8d4fc8d2,
  0x895000d0, 0x8563b8ce, 0x818ac0cc, 0x7dc4e8ca,
  0x7a1200c8, 0x7671d8c6, 0x72e440c4, 0x6f6908c2,
  0x6db240c1, 0x6a523cbf, 0x670424bd, 0x6563c0bc,
  0x623028ba, 0x609ce8b9, 0x5d8364b7, 0x5bfd18b6,
  0x58fd40b4, 0x5783a8b3, 0x560e48b2, 0x533000b0,
  0x51c70caf, 0x506238ae, 0x4da4c0ac, 0x4c4c10ab,
  0x4af768aa, 0x49a6b8a9, 0x485a00a8, 0x471134a7,
  0x45cc58a6, 0x434e40a4, 0x4214f8a3, 0x40df88a2,
  0x3fade0a1, 0x3e8000a0, 0x3d55dc9f, 0x3c2f789e,
  0x3c2f789e, 0x3b0cc49d, 0x39edc09c, 0x38d2609b,
  0x37baa89a, 0x36a68899, 0x35960098, 0x34890497,
  0x34890497, 0x337f9896, 0x3279ac95, 0x31774094,
  0x30784893, 0x30784893, 0x2f7cc892, 0x2e84b091,
  0x2d900090, 0x2d900090, 0x2c9eac8f, 0x2bb0b88e,
  0x2bb0b88e, 0x2ac6148d, 0x29dec08c, 0x29dec08c,
  0x28fab08b, 0x2819e88a, 0x2819e88a, 0x273c5889,
  0x273c5889, 0x26620088, 0x258ad487, 0x258ad487,
  0x24b6d886, 0x24b6d886, 0x23e5fc85, 0x23184084,
  0x23184084, 0x224d9883, 0x224d9883, 0x21860882,
  0x21860882, 0x20c18081, 0x20c18081, 0x20000080
};

static float __internal_frcp_kernel (float x,enum cudaRoundMode mode)
{
  unsigned long long prod;
  volatile union __cudart_FloatUintCvt arg;
  unsigned int expo;
  unsigned int sign;
  unsigned f, y;

  arg.f = x;
  sign = arg.i & 0x80000000;
  expo = (arg.i >> 23);
  expo = expo & 0xff;
  f = expo - 1;

  if (f <= 0xFD) {
    y = (arg.i << 8);
    y = y | 0x80000000;

    arg.i = __internal_rcpTab[(y >> 24) - 128];

    f = arg.i * arg.i;
    f = f << 16;
    prod = ((unsigned long long)y) * f;
    arg.i = (arg.i << 24) - (unsigned)(prod >> 32);

    f = arg.i + arg.i;
    prod = ((unsigned long long)y) * f;
    f = (unsigned)(-(int)(prod >> 32));
    prod = ((unsigned long long)arg.i) * f;
    y = y >> 8;

    expo = (2 * 127) - expo - 2;
    arg.i = (unsigned)(prod >> 32);
    if (mode == cudaRoundNearest) {
      arg.i = arg.i >> 6;
    } else {
      arg.i = (arg.i + 32) >> 6;
    }
    if ((int)expo >= 0) {
      f = y * arg.i;
      arg.i = ((expo << 23) + arg.i) | sign;
    } else {

      expo = -(int)expo;
      arg.i = arg.i >> expo;
      f = y * arg.i;
      arg.i = arg.i | sign;
    }
    if (mode == cudaRoundNearest) {
      expo = f + y;
      if ((int)f < 0) f = (unsigned)(-(int)f);
      if ((int)expo < 0) expo = (unsigned)(-(int)expo);
      if (expo < f) arg.i++;
    } else if (mode == cudaRoundZero) {
      if ((int)f > 0) arg.i = arg.i - 1;
    } else if (mode == cudaRoundPosInf) {
      if (((int)f > 0) && sign) arg.i = arg.i - 1;
      if (((int)f < 0) && !sign) arg.i = arg.i + 1;
    } else {
      if (((int)f > 0) && !sign) arg.i = arg.i - 1;
      if (((int)f < 0) && sign) arg.i = arg.i + 1;
    }
    return arg.f;
  } else {

    if (!(arg.i << 1)) {
      arg.i = 0x7F800000 | arg.i;
      return arg.f;
    }

    if ((arg.i << 1) == 0xff000000) {
      arg.i &= 0x80000000;
      return arg.f;
    }

    if ((arg.i << 1) > 0xff000000) {
      arg.i |= 0x00400000;
      return arg.f;
    }

    f = 0;
    arg.i <<= 8;
    do {
      f++;
      arg.i <<= 1;
    } while ((int)arg.i > 0);
    arg.i >>= 8;
    arg.i |= sign;
    arg.f = __internal_frcp_kernel (arg.f, mode);
    expo = ((arg.i << 1) >> 24);
    if ((expo + f) < 255) {
      arg.i = (arg.i + (f << 23));
      return arg.f;
    }
    if (mode == cudaRoundNearest) {
      arg.i = (arg.i & 0x80000000) | 0x7f800000;
    } else if (mode == cudaRoundZero) {
      arg.i = (arg.i & 0x80000000) | 0x7f7fffff;
    } else if (mode == cudaRoundPosInf) {
      arg.i = (arg.i & 0x80000000) | ((sign) ? 0x7f7fffff : 0x7f800000);
    } else {
      arg.i = (arg.i & 0x80000000) | ((sign) ? 0x7f800000 : 0x7f7fffff);
    }
    return arg.f;
  }
}

static float __internal_fsqrt_kernel (float radicand, enum cudaRoundMode mode)

{
  unsigned long long prod;
  volatile union __cudart_FloatUintCvt arg;
  unsigned int expo;
  unsigned int s, f, x;

  arg.f = radicand;
  expo = arg.i >> 23;
  expo = expo & 0xff;
  f = expo - 1;

  if ((arg.i <= 0x80000000) && (f <= 0xFD)) {

    x = (arg.i << 8) | 0x80000000;
    x = x >> (expo & 1);

    arg.i = f = __internal_invSqrtCubeTab[((unsigned)x >> 25) - 32];

    prod = ((unsigned long long)x) * f;
    arg.i = ((arg.i * 3) << 22) - (unsigned)(prod >> 32);

    prod = ((unsigned long long)arg.i) * arg.i;
    s = (unsigned)(prod >> 32);
    prod = ((unsigned long long)x) * s;
    f = 0x30000000 - (unsigned)(prod >> 32);
    prod = ((unsigned long long)f) * arg.i;
    arg.i = (unsigned)(prod >> 32);

    prod = ((unsigned long long)x) * arg.i;
    arg.i = (unsigned)(prod >> 32);
    if (mode == cudaRoundNearest) {
      arg.i = arg.i >> 3;
    } else {
      arg.i = (arg.i + 4) >> 3;
    }
    x = (x << 16) - (arg.i * arg.i);

    if (mode == cudaRoundNearest) {
      f = x - (2 * arg.i + 1);
      if ((int)f < 0) f = (unsigned)(-(int)f);
      if ((int)x < 0) x = (unsigned)(-(int)x);
      if (f < x) arg.i ++;
    } else if ((mode == cudaRoundZero) || (mode == cudaRoundMinInf)) {
      if ((int)x < 0) arg.i--;
    } else if (mode == cudaRoundPosInf) {
      if ((int)x > 0) arg.i++;
    }
    arg.i = arg.i + (((expo + 125) & ~0x1) << 22);
    return arg.f;
  } else {

    if (!(arg.i << 1) || (arg.i == 0x7F800000)) {
      return arg.f;
    }

    if ((arg.i << 1) > 0xFF000000) {
      arg.i |= 0x00400000;
      return arg.f;
    }

    if (arg.i & 0x80000000) {
      arg.i = 0xFFC00000;
      return arg.f;
    }

    x = 0;
    arg.i <<= 8;
    do {
      x++;
      arg.i <<= 1;
    } while ((int)arg.i > 0);
    arg.i >>= 8;
    arg.i += (x & 1) << 23;
    x += (x & 1);
    arg.f = __internal_fsqrt_kernel (arg.f, mode);
    arg.i -= ((x >> 1) << 23);
    return arg.f;
  }
}

static float __internal_fdiv_kernel (float dividend, float divisor, enum cudaRoundMode mode)

{
  unsigned long long prod;
  unsigned r, f, x, y, expox, expoy, sign;
  volatile union __cudart_FloatUintCvt cvtx, cvty, res;

  cvtx.f = dividend;
  cvty.f = divisor;
  expox = ((cvtx.i >> 23) & 0xff) - 1;
  expoy = ((cvty.i >> 23) & 0xff) - 1;
  sign = ((cvtx.i ^ cvty.i) & 0x80000000);

  if ((expox <= 0xFD) && (expoy <= 0xFD)) {
divide:
    expox = expox - expoy + 127 - 1;
    expoy = expox;

    y = (cvty.i << 8) | 0x80000000;
    x = (cvtx.i & 0x00ffffff) | 0x00800000;

    r = __internal_rcpTab[(y >> 24) - 128];

    f = r * r;
    prod = ((unsigned long long)y) * (f << 16);
    r = (r << 24) - (unsigned)(prod >> 32);

    prod = ((unsigned long long)y) * (r << 1);
    f = (unsigned)-(int)(prod >> 32);
    prod = ((unsigned long long)f) * (r << 1);
    r = (unsigned)(prod >> 32);

    prod = ((unsigned long long)x) * (r << 1);

    if (((int)((prod >> 32) << 8)) > 0) {
      expox--;
      prod = prod + prod;
    }
    if (mode == cudaRoundNearest) {

      r = (unsigned)(prod >> 32);
      y = y >> 8;

      if (expox <= 0xFD) {
        int rem0, rem1, inc;

        prod = ((unsigned long long)y) * r;
        x = x << (23 + ((prod >> 32) >> 15));
        rem1 = x - (unsigned)(prod & 0xffffffff);
        rem0 = rem1 - y;
        inc = abs(rem0) < abs(rem1);

        res.i = sign | ((expox << 23) + r + inc);
        return res.f;
      } else if ((int)expox >= 254) {

        res.i = sign | 0x7f800000;
        return res.f;
      } else {

        int shift = -(int)expox;
        if (shift > 23) {

          r = (shift < 25) && ((x != y) || (r > 0x00ff0000));
          res.i = sign | r;
          return res.f;
        }
        if (x == y) {

          shift = -(int)expoy;
          r = 0x00800000 >> shift;
          res.i = sign | r;
          return res.f;
        }
        {
          unsigned long long tempx;
          long long remlo, remhi;

          r = r >> shift;
          prod = ((unsigned long long)y) * r;
          tempx = ((unsigned long long)x) << (23 - shift);
          remlo = 2 * tempx - 2 * prod - y;
          remhi = remlo + 2 * tempx;
          if (remlo < 0) remlo = -remlo;
          if (remhi < 0) remhi = -remhi;
          if (remhi < remlo) tempx = 2 * tempx;
          remlo = tempx - prod;
          remhi = remlo - y;
          if (remlo < 0) remlo = -remlo;
          if (remhi < 0) remhi = -remhi;
          if ((remhi < remlo) || ((remhi == remlo) && (r & 1))) r++;
          res.i = sign | r;
          return res.f;
        }
      }
    } else if (mode == cudaRoundZero) {

      prod += 0x0000000080000000ULL;
      r = (unsigned)(prod >> 32);
      y = y >> 8;

      if (expox <= 0xFD) {
        int rem1;
        prod = ((unsigned long long)y) * r;
        x = x << (23 + ((prod >> 32) >> 15));
        rem1 = x - (unsigned)(prod & 0xffffffff);
        if (rem1 < 0) r--;
        r = (expox << 23) + r;
        if (r == 0x7f800000) r = 0x7f7fffff;
        res.i = sign | r;
        return res.f;
      } else if ((int)expox >= 254) {

        res.i = sign | 0x7f7fffff;
        return res.f;
      } else {

        int shift = -(int)expox;
        if ((x == y) && (shift < 31)) {
          shift = -(int)expoy;
          r = 0x00800000 >> shift;
          res.i = sign | r;
          return res.f;
        }
        if (shift > 23) {
          r = 0;
          res.i = sign | r;
          return res.f;
        }
        {
          unsigned long long tempx;
          long long remlo, remhi;

          r = r >> shift;
          prod = ((unsigned long long)y) * r;
          tempx = ((unsigned long long)x) << (23 - shift);
          remlo = 2 * tempx - 2 * prod - y;
          remhi = remlo + 2 * tempx;
          if (remlo < 0) remlo = -remlo;
          if (remhi < 0) remhi = -remhi;
          if (remhi < remlo) tempx = 2 * tempx;
          remlo = tempx - prod;
          if ((remlo < 0) & (r != 0)) r--;
          res.i = sign | r;
          return res.f;
        }
      }
    } else if (mode == cudaRoundPosInf) {

      prod += 0x0000000080000000ULL;
      r = (unsigned)(prod >> 32);
      y = y >> 8;

      if (expox <= 0xFD) {
        int rem1;
        prod = ((unsigned long long)y) * r;
        x = x << (23 + ((prod >> 32) >> 15));
        rem1 = x - (unsigned)(prod & 0xffffffff);
        if ((rem1 < 0) && (sign)) r--;
        if ((rem1 > 0) && (!sign)) r++;
        r = (expox << 23) + r;
        if ((r == 0x7f800000) && (sign)) r = 0x7f7fffff;
        res.i = sign | r;
        return res.f;
      } else if ((int)expox >= 254) {

        r = sign ? 0x7f7fffff : 0x7f800000;
        res.i = sign | r;
        return res.f;
      } else {

        int shift = -(int)expox;
        if ((x == y) && (shift <= 24)) {
          shift = -(int)expoy;
          r = 0x00800000 >> shift;
          if (r == 0) r = !sign;
          res.i = sign | r;
          return res.f;
        }
        if (shift > 23) {
          r = !sign;
          res.i = sign | r;
          return res.f;
        }
        {
          unsigned long long tempx;
          long long remlo, remhi;

          r = r >> shift;
          prod = ((unsigned long long)y) * r;
          tempx = ((unsigned long long)x) << (23 - shift);
          remlo = 2 * tempx - 2 * prod - y;
          remhi = remlo + 2 * tempx;
          if (remlo < 0) remlo = -remlo;
          if (remhi < 0) remhi = -remhi;
          if (remhi < remlo) tempx = 2 * tempx;
          remlo = tempx - prod;
          if ((remlo < 0) && (r != 0) && (sign)) r--;
          if ((remlo > 0) && (!sign)) r++;
          res.i = sign | r;
          return res.f;
        }
      }
    } else if (mode == cudaRoundMinInf) {

      prod += 0x0000000080000000ULL;
      r = (unsigned)(prod >> 32);
      y = y >> 8;

      if (expox <= 0xFD) {
        int rem1;
        prod = ((unsigned long long)y) * r;
        x = x << (23 + ((prod >> 32) >> 15));
        rem1 = x - (unsigned)(prod & 0xffffffff);
        if ((rem1 < 0) && (!sign)) r--;
        if ((rem1 > 0) && (sign)) r++;
        r = (expox << 23) + r;
        if ((r == 0x7f800000) && (!sign)) r = 0x7f7fffff;
        res.i = sign | r;
        return res.f;
      } else if ((int)expox >= 254) {

        r = sign ? 0x7f800000 : 0x7f7fffff;
        res.i = sign | r;
        return res.f;
      } else {

        int shift = -(int)expox;
        if ((x == y) && (shift <= 24)) {
          shift = -(int)expoy;
          r = 0x00800000 >> shift;
          if (r == 0) r = !!sign;
          res.i = sign | r;
          return res.f;
        }
        if (shift > 23) {
          r = !!sign;
          res.i = sign | r;
          return res.f;
        }
        {
          unsigned long long tempx;
          long long remlo, remhi;

          r = r >> shift;
          prod = ((unsigned long long)y) * r;
          tempx = ((unsigned long long)x) << (23 - shift);
          remlo = 2 * tempx - 2 * prod - y;
          remhi = remlo + 2 * tempx;
          if (remlo < 0) remlo = -remlo;
          if (remhi < 0) remhi = -remhi;
          if (remhi < remlo) tempx = 2 * tempx;
          remlo = tempx - prod;
          if ((remlo < 0) && (r != 0) && (!sign)) r--;
          if ((remlo > 0) && (sign)) r++;
          res.i = sign | r;
          return res.f;
        }
      }
    }
  }
  {
    int xzero, yzero, xinf, yinf, xnan, ynan;

    xnan = (cvtx.i << 1) > 0xff000000;
    ynan = (cvty.i << 1) > 0xff000000;

    if (xnan) {
      res.i = cvtx.i | 0x00400000;
      return res.f;
    }
    if (ynan) {
      res.i = cvty.i | 0x00400000;
      return res.f;
    }
    xzero = (cvtx.i << 1) == 0x00000000;
    yzero = (cvty.i << 1) == 0x00000000;
    xinf = (cvtx.i << 1) == 0xff000000;
    yinf = (cvty.i << 1) == 0xff000000;

    if ((xzero & yzero) | (xinf & yinf)) {
      res.i = 0xffc00000;
      return res.f;
    }

    if (xzero | yinf) {
      res.i = sign;
      return res.f;
    }

    if (yzero | xinf) {
      res.i = sign | 0x7f800000;
      return res.f;
    }

    if ((int)expox < 0) {
      cvtx.i = cvtx.i << 9;
      while ((int)cvtx.i >= 0) {
        expox--;
        cvtx.i = cvtx.i + cvtx.i;
      }
      cvtx.i = cvtx.i >> 8;
    }
    if ((int)expoy < 0) {
      cvty.i = cvty.i << 9;
      while ((int)cvty.i >= 0) {
        expoy--;
        cvty.i = cvty.i + cvty.i;
      }
      cvty.i = cvty.i >> 8;
    }
    goto divide;
  }
}

static float __internal_fmul_kernel2 (float a, float b, enum cudaRoundMode mode)

{
  unsigned long long product;
  volatile union __cudart_FloatUintCvt xx, yy;

  unsigned expo_x, expo_y;

  xx.f = a;
  yy.f = b;

  expo_y = 0xFF;
  expo_x = expo_y & (xx.i >> 23);
  expo_x = expo_x - 1;
  expo_y = expo_y & (yy.i >> 23);
  expo_y = expo_y - 1;

  if ((expo_x <= 0xFD) &&
      (expo_y <= 0xFD)) {
multiply:
    expo_x = expo_x + expo_y;
    expo_y = xx.i ^ yy.i;
    xx.i = xx.i & 0x00ffffff;
    yy.i = yy.i << 8;
    xx.i = xx.i | 0x00800000;
    yy.i = yy.i | 0x80000000;

    product = ((unsigned long long)xx.i) * yy.i;
    expo_x = expo_x - 127 + 2;
    expo_y = expo_y & 0x80000000;
    xx.i = (unsigned int)(product >> 32);
    yy.i = (unsigned int)(product & 0xffffffff);

    if (xx.i < 0x00800000) {
      xx.i = (xx.i << 1) | (yy.i >> 31);
      yy.i = (yy.i << 1);
      expo_x--;
    }
    if (expo_x <= 0xFD) {
      xx.i = xx.i | expo_y;
      xx.i = xx.i + (expo_x << 23);

      if (mode == cudaRoundNearest) {
        if (yy.i < 0x80000000) return xx.f;
        xx.i += ((yy.i == 0x80000000) ? (xx.i & 1) : (yy.i >> 31));
      } else if (mode == cudaRoundZero) {
      } else if (mode == cudaRoundPosInf) {
        xx.i += (yy.i && !expo_y);
      } else if (mode == cudaRoundMinInf) {
        xx.i += (yy.i && expo_y);
      }
      return xx.f;
    } else if ((int)expo_x >= 254) {

      if (mode == cudaRoundNearest) {
         xx.i = expo_y | 0x7F800000;
      } else if (mode == cudaRoundZero) {
         xx.i = expo_y | 0x7F7FFFFF;
      } else if (mode == cudaRoundPosInf) {
         xx.i = (expo_y ? 0xff7fffff : 0x7F800000);
      } else {
         xx.i = (expo_y ? 0xFF800000 : 0x7f7fffff);
      }
      return xx.f;
    } else {

      expo_x = ((unsigned int)-((int)expo_x));
      if (mode == cudaRoundNearest) {
        if (expo_x > 25) {

          xx.i = expo_y;
          return xx.f;
        } else {
          yy.i = (xx.i << (32 - expo_x)) | ((yy.i) ? 1 : 0);
          xx.i = expo_y + (xx.i >> expo_x);
          xx.i += ((yy.i == 0x80000000) ? (xx.i & 1) : (yy.i >> 31));
          return xx.f;
        }
      } else if (mode == cudaRoundZero) {
        if (expo_x > 25) expo_x = 25;
        xx.i = expo_y + (xx.i >> expo_x);
        return xx.f;
      } else if (mode == cudaRoundPosInf) {
        if (expo_x > 25) expo_x = 25;
        yy.i = (xx.i << (32 - expo_x)) | ((yy.i) ? 1 : 0);
        xx.i = expo_y + (xx.i >> expo_x);
        xx.i += (yy.i && !expo_y);
        return xx.f;
      } else {
        if (expo_x > 25) expo_x = 25;
        yy.i = (xx.i << (32 - expo_x)) | ((yy.i) ? 1 : 0);
        xx.i = expo_y + (xx.i >> expo_x);
        xx.i += (yy.i && expo_y);
        return xx.f;
      }
    }
  } else {
    product = xx.i ^ yy.i;
    product = product & 0x80000000;
    if (!(xx.i & 0x7fffffff)) {
      if (expo_y != 254) {
        xx.i = (unsigned int)product;
        return xx.f;
      }
      expo_y = yy.i << 1;
      if (expo_y == 0xFF000000) {
        xx.i = expo_y | 0x00C00000;
      } else {
        xx.i = yy.i | 0x00400000;
      }
      return xx.f;
    }
    if (!(yy.i & 0x7fffffff)) {
      if (expo_x != 254) {
        xx.i = (unsigned int)product;
        return xx.f;
      }
      expo_x = xx.i << 1;
      if (expo_x == 0xFF000000) {
        xx.i = expo_x | 0x00C00000;
      } else {
        xx.i = xx.i | 0x00400000;
      }
      return xx.f;
    }
    if ((expo_y != 254) && (expo_x != 254)) {
      expo_y++;
      expo_x++;
      if (expo_x == 0) {
        expo_y |= xx.i & 0x80000000;




        xx.i = xx.i << 8;
        while (!(xx.i & 0x80000000)) {
          xx.i <<= 1;
          expo_x--;
        }
        xx.i = (xx.i >> 8) | (expo_y & 0x80000000);
        expo_y &= ~0x80000000;
        expo_y--;
        goto multiply;
      }
      if (expo_y == 0) {
        expo_x |= yy.i & 0x80000000;
        yy.i = yy.i << 8;
        while (!(yy.i & 0x80000000)) {
          yy.i <<= 1;
          expo_y--;
        }
        yy.i = (yy.i >> 8) | (expo_x & 0x80000000);
        expo_x &= ~0x80000000;
        expo_x--;
        goto multiply;
      }
    }
    expo_x = xx.i << 1;
    expo_y = yy.i << 1;

    if (expo_x > 0xFF000000) {

      xx.i = xx.i | 0x00400000;
      return xx.f;
    }

    if (expo_y > 0xFF000000) {

      xx.i = yy.i | 0x00400000;
      return xx.f;
    }
    xx.i = (unsigned int)product | 0x7f800000;
    return xx.f;
  }
}

static float __internal_fmaf_kernel (float a, float b, float c, enum cudaRoundMode mode)

{
  unsigned long long product;
  unsigned int xx, yy, zz, ww;
  unsigned int temp, s, u;
  unsigned int expo_x, expo_y, expo_z;
  volatile union __cudart_FloatUintCvt cvt;

  cvt.f = a;
  xx = cvt.i;
  cvt.f = b;
  yy = cvt.i;
  cvt.f = c;
  zz = cvt.i;

  temp = 0xff;
  expo_x = temp & (xx >> 23);
  expo_x = expo_x - 1;
  expo_y = temp & (yy >> 23);
  expo_y = expo_y - 1;
  expo_z = temp & (zz >> 23);
  expo_z = expo_z - 1;

  if (!((expo_x <= 0xFD) &&
        (expo_y <= 0xFD) &&
        (expo_z <= 0xFD))) {




    if ((yy << 1) > 0xff000000) {
      return b + b;
    }
    if ((zz << 1) > 0xff000000) {
      return c + c;
    }
    if ((xx << 1) > 0xff000000) {
      return a + a;
    }
# 3148 "/home/normal/cuda/bin/../include/device_functions.h" 3
    if ((((xx << 1) == 0) && ((yy << 1) == 0xff000000)) ||
        (((yy << 1) == 0) && ((xx << 1) == 0xff000000))) {
      cvt.i = 0xffc00000;
      return cvt.f;
    }
    if ((zz << 1) == 0xff000000) {
      if (((yy << 1) == 0xff000000) || ((xx << 1) == 0xff000000)) {
        if ((int)(xx ^ yy ^ zz) < 0) {
          cvt.i = 0xffc00000;
          return cvt.f;
        }
      }
    }




    if ((xx << 1) == 0xff000000) {
      xx = xx ^ (yy & 0x80000000);
      cvt.i = xx;
      return cvt.f;
    }
    if ((yy << 1) == 0xff000000) {
      yy = yy ^ (xx & 0x80000000);
      cvt.i = yy;
      return cvt.f;
    }
    if ((zz << 1) == 0xff000000) {
      cvt.i = zz;
      return cvt.f;
    }





    if (zz == 0x80000000) {
      if (((xx << 1) == 0) || ((yy << 1) == 0)) {
        if ((int)(xx ^ yy) < 0) {
          cvt.i = zz;
          return cvt.f;
        }
      }
    }



    if (((zz << 1) == 0) &&
        (((xx << 1) == 0) || ((yy << 1) == 0))) {
      if (mode == cudaRoundMinInf) {
        zz = 0x80000000 & (xx ^ yy ^ zz);
      } else {
        zz &= 0x7fffffff;
      }
      cvt.i = zz;
      return cvt.f;
    }



    if (((xx << 1) == 0) || ((yy << 1) == 0)) {
      cvt.i = zz;
      return cvt.f;
    }

    if (expo_x == (unsigned)-1) {
      temp = xx & 0x80000000;
      xx = xx << 8;
      while (!(xx & 0x80000000)) {
        xx <<= 1;
        expo_x--;
      }
      expo_x++;
      xx = (xx >> 8) | temp;
    }

    if (expo_y == (unsigned)-1) {
      temp = yy & 0x80000000;
      yy = yy << 8;
      while (!(yy & 0x80000000)) {
        yy <<= 1;
        expo_y--;
      }
      expo_y++;
      yy = (yy >> 8) | temp;
    }

    if ((expo_z == (unsigned)-1) && ((zz << 1) != 0)) {
      temp = zz & 0x80000000;
      zz = zz << 8;
      while (!(zz & 0x80000000)) {
        zz <<= 1;
        expo_z--;
      }
      expo_z++;
      zz = (zz >> 8) | temp;
    }
  }

  expo_x = expo_x + expo_y;
  expo_y = xx ^ yy;
  xx = xx & 0x00ffffff;
  yy = yy << 8;
  xx = xx | 0x00800000;
  yy = yy | 0x80000000;

  product = ((unsigned long long)xx) * yy;
  xx = (unsigned)(product >> 32);
  yy = (unsigned)(product & 0xffffffff);

  expo_x = expo_x - 127 + 2;
  expo_y = expo_y & 0x80000000;

  if (xx < 0x00800000) {
    xx = (xx << 1) | (yy >> 31);
    yy = (yy << 1);
    expo_x--;
  }
  temp = 0;

  if ((zz << 1) != 0) {
    s = zz & 0x80000000;
    zz &= 0x00ffffff;
    zz |= 0x00800000;
    ww = 0;

    if ((int)expo_z > (int)expo_x) {
      temp = expo_z;
      expo_z = expo_x;
      expo_x = temp;
      temp = zz;
      zz = xx;
      xx = temp;
      temp = ww;
      ww = yy;
      yy = temp;
      temp = expo_y;
      expo_y = s;
      s = temp;
    }


    expo_z = expo_x - expo_z;
    u = expo_y ^ s;
    if (expo_z <= 49) {

      temp = 0;
      while (expo_z >= 32) {
        temp = ww | (temp != 0);
        ww = zz;
        zz = 0;
        expo_z -= 32;
      }
      if (expo_z) {
        temp = ((temp >> expo_z) | (ww << (32 - expo_z)) |
                ((temp << (32 - expo_z)) != 0));
        ww = (ww >> expo_z) | (zz << (32 - expo_z));
        zz = (zz >> expo_z);
      }

    } else {
      temp = 1;
      ww = 0;
      zz = 0;
    }
    if ((int)u < 0) {

      temp = (unsigned)(-(int)temp);
      s = (temp != 0);
      u = yy - s;
      s = u > yy;
      yy = u - ww;
      s += yy > u;
      xx = (xx - zz) - s;
      if (!(xx | yy | temp)) {

        if (mode == cudaRoundMinInf) {
          xx = 0x80000000;
        }
        cvt.i = xx;
        return cvt.f;
      }
      if ((int)xx < 0) {


        temp = ~temp;
        yy = ~yy;
        xx = ~xx;
        if (++temp == 0) {
          if (++yy == 0) {
            ++xx;
          }
        }
        expo_y ^= 0x80000000;
      }

      while (!(xx & 0x00800000)) {
        xx = (xx << 1) | (yy >> 31);
        yy = (yy << 1);
        expo_x--;
      }
    } else {

      yy = yy + ww;
      s = yy < ww;
      xx = xx + zz + s;
      if (xx & 0x01000000) {
        temp = temp | (yy << 31);
        yy = (yy >> 1) | (xx << 31);
        xx = ((xx & 0x80000000) | (xx >> 1)) & ~0x40000000;
        expo_x++;
      }
    }
  }
  temp = yy | (temp != 0);
  if (expo_x <= 0xFD) {

    xx |= expo_y;
    if (mode == cudaRoundNearest) {
      s = xx & 1;
      xx += (temp == 0x80000000) ? s : (temp >> 31);
    } else if (mode == cudaRoundPosInf) {
      xx += temp && !expo_y;
    } else if (mode == cudaRoundMinInf) {
      xx += temp && expo_y;
    }
    xx = xx + (expo_x << 23);
    cvt.i = xx;
    return cvt.f;
  } else if ((int)expo_x >= 126) {

    if (mode == cudaRoundNearest) {
      xx = expo_y | 0x7f800000;
    } else if (mode == cudaRoundZero) {
      xx = expo_y | 0x7F7FFFFF;
    } else if (mode == cudaRoundPosInf) {
      xx = expo_y ? 0xFF7FFFFF : 0x7f800000;
    } else if (mode == cudaRoundMinInf) {
      xx = expo_y ? 0xff800000 : 0x7f7fffff;
    }
    cvt.i = xx;
    return cvt.f;
  }

  expo_x = (unsigned int)(-(int)expo_x);
  if (expo_x > 25) {

    xx = 0;
    if (mode == cudaRoundPosInf) {
      xx += !expo_y;
    } else if (mode == cudaRoundMinInf) {
      xx += !!expo_y;
    }
    cvt.i = expo_y | xx;
    return cvt.f;
  }
  temp = (xx << (32 - expo_x)) | ((temp) ? 1 : 0);
  xx = xx >> expo_x;
  if (mode == cudaRoundNearest) {
    xx = xx + ((temp == 0x80000000) ? (xx & 1) : (temp >> 31));
  } else if (mode == cudaRoundPosInf) {
    xx = xx + (!expo_y && temp);
  } else if (mode == cudaRoundMinInf) {
    xx = xx + (expo_y && temp);
  }
  xx = expo_y + xx;
  cvt.i = xx;
  return cvt.f;
}


static float __internal_fadd_kernel2 (float a, float b, enum cudaRoundMode mode)

{
  volatile union __cudart_FloatUintCvt xx, yy;
  unsigned int expo_x;
  unsigned int expo_y;
  unsigned int temp;

  xx.f = a;
  yy.f = b;


  expo_y = yy.i << 1;
  if (expo_y > (xx.i << 1)) {
    expo_y = xx.i;
    xx.i = yy.i;
    yy.i = expo_y;
  }

  temp = 0xff;
  expo_x = temp & (xx.i >> 23);
  expo_x = expo_x - 1;
  expo_y = temp & (yy.i >> 23);
  expo_y = expo_y - 1;

  if ((expo_x <= 0xFD) &&
      (expo_y <= 0xFD)) {
add:
    expo_y = expo_x - expo_y;
    if (expo_y > 25) {
      expo_y = 31;
    }
    temp = xx.i ^ yy.i;
    xx.i = xx.i & ~0x7f000000;
    xx.i = xx.i | 0x00800000;
    yy.i = yy.i & ~0xff000000;
    yy.i = yy.i | 0x00800000;

    if ((int)temp < 0) {

      temp = 32 - expo_y;
      temp = (expo_y) ? (yy.i << temp) : 0;
      temp = (unsigned)(-((int)temp));
      xx.i = xx.i - (yy.i >> expo_y) - (temp ? 1 : 0);
      if (xx.i & 0x00800000) {
        if (expo_x <= 0xFD) {
          xx.i = xx.i + (expo_x << 23);
          if (mode == cudaRoundMinInf) {
            xx.i += (temp && (xx.i & 0x80000000));
          } else if (mode == cudaRoundPosInf) {
            xx.i += (temp && !(xx.i & 0x80000000));
          }
          return xx.f;
        }
      } else {
        if ((temp | (xx.i << 1)) == 0) {

          if (mode == cudaRoundMinInf) {
            xx.i = 0x80000000;
          } else if (mode == cudaRoundPosInf) {
            xx.i = 0;
          }
          return xx.f;
        }

        yy.i = xx.i & 0x80000000;
        do {
          xx.i = (xx.i << 1) | (temp >> 31);
          temp <<= 1;
          expo_x--;
        } while (!(xx.i & 0x00800000));
        xx.i = xx.i | yy.i;
      }
    } else {

      temp = 32 - expo_y;
      temp = (expo_y) ? (yy.i << temp) : 0;
      xx.i = xx.i + (yy.i >> expo_y);
      if (!(xx.i & 0x01000000)) {
        if (expo_x <= 0xFD) {
          xx.i = xx.i + (expo_x << 23);
          if (mode == cudaRoundMinInf) {
            xx.i += (temp && (xx.i & 0x80000000));
          } else if (mode == cudaRoundPosInf) {
            xx.i += (temp && !(xx.i & 0x80000000));
          }
          return xx.f;
        }
      } else {

        temp = (xx.i << 31) | (temp >> 1);
        xx.i = ((xx.i & 0x80000000) | (xx.i >> 1)) & ~0x40000000;
        expo_x++;
      }
    }
    if (expo_x <= 0xFD) {
      if (mode == cudaRoundMinInf) {
        xx.i += (temp && (xx.i & 0x80000000));
      } else if (mode == cudaRoundPosInf) {
        xx.i += (temp && !(xx.i & 0x80000000));
      }
      xx.i = xx.i + (expo_x << 23);
      return xx.f;
    }
    if ((int)expo_x >= 254) {

      temp = xx.i & 0x80000000;
      if (mode == cudaRoundMinInf) {
        xx.i = (temp ? 0xFF800000 : 0x7f7fffff);
      } else if (mode == cudaRoundPosInf) {
        xx.i = (temp ? 0xff7fffff : 0x7F800000);
      }
      return xx.f;
    }

    expo_y = expo_x + 32;
    yy.i = xx.i & 0x80000000;
    xx.i = xx.i & ~0xff000000;
    expo_x = (unsigned)(-((int)expo_x));
    temp = xx.i << expo_y | ((temp) ? 1 : 0);
    xx.i = yy.i | (xx.i >> expo_x);
    if (mode == cudaRoundMinInf) {
      xx.i += (temp && yy.i);
    } else if (mode == cudaRoundPosInf) {
      xx.i += (temp && !yy.i);
    }
    return xx.f;
  } else {

    if (!(yy.i << 1)) {
      if (mode == cudaRoundMinInf) {
        if (!(xx.i << 1)) {
          xx.i = xx.i | yy.i;
        }
      } else if (mode == cudaRoundPosInf) {
        if (xx.i == 0x80000000) {
          xx.i = yy.i;
        }
      }
      if ((xx.i << 1) > 0xff000000) {
        xx.i |= 0x00400000;
      }
      return xx.f;
    }
    if ((expo_y != 254) && (expo_x != 254)) {

      if (expo_x == (unsigned int) -1) {
        temp = xx.i & 0x80000000;
        xx.i = xx.i << 8;
        while (!(xx.i & 0x80000000)) {
          xx.i <<= 1;
          expo_x--;
        }
        expo_x++;
        xx.i = (xx.i >> 8) | temp;
      }
      if (expo_y == (unsigned int) -1) {
        temp = yy.i & 0x80000000;
        yy.i = yy.i << 8;
        while (!(yy.i & 0x80000000)) {
          yy.i <<= 1;
          expo_y--;
        }
        expo_y++;
        yy.i = (yy.i >> 8) | temp;
      }
      goto add;
    }
    expo_x = xx.i << 1;
    expo_y = yy.i << 1;

    if (expo_x > 0xff000000) {

      xx.i = xx.i | 0x00400000;
      return xx.f;
    }

    if (expo_y > 0xff000000) {

      xx.i = yy.i | 0x00400000;
      return xx.f;
    }
    if ((expo_x == 0xff000000) && (expo_y == 0xff000000)) {




      expo_x = xx.i ^ yy.i;
      xx.i = xx.i | ((expo_x) ? 0xffc00000 : 0);
      return xx.f;
    }

    if (expo_y == 0xff000000) {
      xx.i = yy.i;
    }
    return xx.f;
  }
}

static float __frcp_rn (float a)
{
  return __internal_frcp_kernel (a, cudaRoundNearest);
}

static float __frcp_rz (float a)
{
  return __internal_frcp_kernel (a, cudaRoundZero);
}

static float __frcp_rd (float a)
{
  return __internal_frcp_kernel (a, cudaRoundMinInf);
}

static float __frcp_ru (float a)
{
  return __internal_frcp_kernel (a, cudaRoundPosInf);
}

static float __fsqrt_rn (float a)
{
  return __internal_fsqrt_kernel (a, cudaRoundNearest);
}

static float __fsqrt_rz (float a)
{
  return __internal_fsqrt_kernel (a, cudaRoundZero);
}

static float __fsqrt_rd (float a)
{
  return __internal_fsqrt_kernel (a, cudaRoundMinInf);
}

static float __fsqrt_ru (float a)
{
  return __internal_fsqrt_kernel (a, cudaRoundPosInf);
}

static float __fdiv_rn (float a, float b)
{
  return __internal_fdiv_kernel (a, b, cudaRoundNearest);
}

static float __fdiv_rz (float a, float b)
{
  return __internal_fdiv_kernel (a, b, cudaRoundZero);
}

static float __fdiv_rd (float a, float b)
{
  return __internal_fdiv_kernel (a, b, cudaRoundMinInf);
}

static float __fdiv_ru (float a, float b)
{
  return __internal_fdiv_kernel (a, b, cudaRoundPosInf);
}

static float __fadd_rd (float a, float b)
{
  return __internal_fadd_kernel2 (a, b, cudaRoundMinInf);
}

static float __fadd_ru (float a, float b)
{
  return __internal_fadd_kernel2 (a, b, cudaRoundPosInf);
}

static float __fmul_rd (float a, float b)
{
  return __internal_fmul_kernel2 (a, b, cudaRoundMinInf);
}

static float __fmul_ru (float a, float b)
{
  return __internal_fmul_kernel2 (a, b, cudaRoundPosInf);
}

static float __fmaf_rn (float a, float b, float c)
{
  return __internal_fmaf_kernel (a, b, c, cudaRoundNearest);
}

static float __fmaf_rz (float a, float b, float c)
{
  return __internal_fmaf_kernel (a, b, c, cudaRoundZero);
}

static float __fmaf_ru (float a, float b, float c)
{
  return __internal_fmaf_kernel (a, b, c, cudaRoundPosInf);
}

static float __fmaf_rd (float a, float b, float c)
{
  return __internal_fmaf_kernel (a, b, c, cudaRoundMinInf);
}

static int __cuda___isnan(double a);
static int __cuda___isnanf(float a);
static int __double2int_rz(double);
static unsigned int __double2uint_rz(double);
static long long int __double2ll_rz(double);
static unsigned long long int __double2ull_rz(double);
# 3737 "/home/normal/cuda/bin/../include/device_functions.h" 3
static int __mulhi(int a, int b)
{
  long long int c = (long long int)a * (long long int)b;

  return (int)(c >> 32);
}

static unsigned int __umulhi(unsigned int a, unsigned int b)
{
  unsigned long long int c = (unsigned long long int)a * (unsigned long long int)b;

  return (unsigned int)(c >> 32);
}

static unsigned long long int __umul64hi(unsigned long long int a, unsigned long long int b)
{
  unsigned int a_lo = (unsigned int)a;
  unsigned long long int a_hi = a >> 32;
  unsigned int b_lo = (unsigned int)b;
  unsigned long long int b_hi = b >> 32;
  unsigned long long int m1 = a_lo * b_hi;
  unsigned long long int m2 = a_hi * b_lo;
  unsigned int carry;

  carry = (0ULL + __umulhi(a_lo, b_lo) + (unsigned int)m1 + (unsigned int)m2) >> 32;

  return a_hi * b_hi + (m1 >> 32) + (m2 >> 32) + carry;
}

static long long int __mul64hi(long long int a, long long int b)
{
  long long int res;
  res = __umul64hi(a, b);
  if (a < 0LL) res = res - b;
  if (b < 0LL) res = res - a;
  return res;
}

static float __saturatef(float a)
{
  if (__cuda___isnanf(a)) return 0.0f;
  return a >= 1.0f ? 1.0f : a <= 0.0f ? 0.0f : a;
}

static unsigned int __sad(int a, int b, unsigned int c)
{
  long long int diff = (long long int)a - (long long int)b;

  return (unsigned int)(__cuda_llabs(diff) + (long long int)c);
}

static unsigned int __usad(unsigned int a, unsigned int b, unsigned int c)
{
  long long int diff = (long long int)a - (long long int)b;

  return (unsigned int)(__cuda_llabs(diff) + (long long int)c);
}

static int __mul24(int a, int b)
{

  a &= 0xffffff;
  a = (a & 0x800000) != 0 ? a | ~0xffffff : a;
  b &= 0xffffff;
  b = (b & 0x800000) != 0 ? b | ~0xffffff : b;


  return a * b;
}

static unsigned int __umul24(unsigned int a, unsigned int b)
{

  a &= 0xffffff;
  b &= 0xffffff;


  return a * b;
}

static float __int_as_float(int a)
{
  volatile union __cudart_FloatIntCvt u;

  u.i = a;
  return u.f;
}

static int __float_as_int(float a)
{
  volatile union __cudart_FloatIntCvt u;

  u.f = a;
  return u.i;
}

static long long int __internal_float2ll_kernel(float a, long long int max, long long int min, long long int nan, enum cudaRoundMode rndMode)
{
  unsigned long long int res, t = 0ULL;
  int shift;
  unsigned int ia;

  if (sizeof(a) == sizeof(double) && __cuda___isnan((double)a)) return nan; if (sizeof(a) == sizeof(float) && __cuda___isnanf((float)a)) return nan; if (a >= max) return max; if (a <= min) return min;
  ia = __float_as_int(a);
  shift = 189 - ((ia >> 23) & 0xff);
  res = (unsigned long long int)(((ia << 8) | 0x80000000) >> 1) << 32;
  if (shift >= 64) {
    t = res;
    res = 0;
  } else if (shift) {
    t = res << (64 - shift);
    res = res >> shift;
  }
  if (rndMode == cudaRoundNearest && (long long int)t < 0LL) {
    res += t == 0x8000000000000000ULL ? res & 1ULL : 1ULL;
  }
  else if (rndMode == cudaRoundMinInf && t != 0ULL && ia > 0x80000000) {
    res++;
  }
  else if (rndMode == cudaRoundPosInf && t != 0ULL && (int)ia > 0) {
    res++;
  }
  if ((int)ia < 0) res = (unsigned long long int)-(long long int)res;
  return (long long int)res;
}

static int __internal_float2int(float a, enum cudaRoundMode rndMode)
{
  return (int)__internal_float2ll_kernel(a, 2147483647LL, -2147483648LL, 0LL, rndMode);
}

static int __float2int_rz(float a)
{



  return __internal_float2int(a, cudaRoundZero);

}

static int __float2int_ru(float a)
{
  return __internal_float2int(a, cudaRoundPosInf);
}

static int __float2int_rd(float a)
{
  return __internal_float2int(a, cudaRoundMinInf);
}

static int __float2int_rn(float a)
{
  return __internal_float2int(a, cudaRoundNearest);
}

static long long int __internal_float2ll(float a, enum cudaRoundMode rndMode)
{
  return __internal_float2ll_kernel(a, 9223372036854775807LL, -9223372036854775807LL -1LL, -9223372036854775807LL -1LL, rndMode);
}

static long long int __float2ll_rz(float a)
{



  return __internal_float2ll(a, cudaRoundZero);

}

static long long int __float2ll_ru(float a)
{
  return __internal_float2ll(a, cudaRoundPosInf);
}

static long long int __float2ll_rd(float a)
{
  return __internal_float2ll(a, cudaRoundMinInf);
}

static long long int __float2ll_rn(float a)
{
  return __internal_float2ll(a, cudaRoundNearest);
}

static unsigned long long int __internal_float2ull_kernel(float a, unsigned long long int max, unsigned long long int nan, enum cudaRoundMode rndMode)
{
  unsigned long long int res, t = 0ULL;
  int shift;
  unsigned int ia;

  if (sizeof(a) == sizeof(double) && __cuda___isnan((double)a)) return nan; if (sizeof(a) == sizeof(float) && __cuda___isnanf((float)a)) return nan; if (a >= max) return max; if (a <= 0LL) return 0LL;
  ia = __float_as_int(a);
  shift = 190 - ((ia >> 23) & 0xff);
  res = (unsigned long long int)((ia << 8) | 0x80000000) << 32;
  if (shift >= 64) {
    t = res >> (int)(shift > 64);
    res = 0;
  } else if (shift) {
    t = res << (64 - shift);
    res = res >> shift;
  }
  if (rndMode == cudaRoundNearest && (long long int)t < 0LL) {
    res += t == 0x8000000000000000ULL ? res & 1ULL : 1ULL;
  }
  else if (rndMode == cudaRoundPosInf && t != 0ULL) {
    res++;
  }
  return res;
}

static unsigned int __internal_float2uint(float a, enum cudaRoundMode rndMode)
{
  return (unsigned int)__internal_float2ull_kernel(a, 4294967295U, 0U, rndMode);
}

static unsigned int __float2uint_rz(float a)
{



  return __internal_float2uint(a, cudaRoundZero);

}

static unsigned int __float2uint_ru(float a)
{
  return __internal_float2uint(a, cudaRoundPosInf);
}

static unsigned int __float2uint_rd(float a)
{
  return __internal_float2uint(a, cudaRoundMinInf);
}

static unsigned int __float2uint_rn(float a)
{
  return __internal_float2uint(a, cudaRoundNearest);
}

static unsigned long long int __internal_float2ull(float a, enum cudaRoundMode rndMode)
{
  return __internal_float2ull_kernel(a, 18446744073709551615ULL, 9223372036854775808ULL, rndMode);
}

static unsigned long long int __float2ull_rz(float a)
{



  return __internal_float2ull(a, cudaRoundZero);

}

static unsigned long long int __float2ull_ru(float a)
{
  return __internal_float2ull(a, cudaRoundPosInf);
}

static unsigned long long int __float2ull_rd(float a)
{
  return __internal_float2ull(a, cudaRoundMinInf);
}

static unsigned long long int __float2ull_rn(float a)
{
  return __internal_float2ull(a, cudaRoundNearest);
}

static int __internal_normalize64(unsigned long long int *a)
{
  int lz = 0;

  if ((*a & 0xffffffff00000000ULL) == 0ULL) {
    *a <<= 32;
    lz += 32;
  }
  if ((*a & 0xffff000000000000ULL) == 0ULL) {
    *a <<= 16;
    lz += 16;
  }
  if ((*a & 0xff00000000000000ULL) == 0ULL) {
    *a <<= 8;
    lz += 8;
  }
  if ((*a & 0xf000000000000000ULL) == 0ULL) {
    *a <<= 4;
    lz += 4;
  }
  if ((*a & 0xC000000000000000ULL) == 0ULL) {
    *a <<= 2;
    lz += 2;
  }
  if ((*a & 0x8000000000000000ULL) == 0ULL) {
    *a <<= 1;
    lz += 1;
  }
  return lz;
}

static int __internal_normalize(unsigned int *a)
{
  unsigned long long int t = (unsigned long long int)*a;
  int lz = __internal_normalize64(&t);

  *a = (unsigned int)(t >> 32);

  return lz - 32;
}

static float __internal_int2float_kernel(int a, enum cudaRoundMode rndMode)
{
  volatile union __cudart_FloatUintCvt res;
  int shift;
  unsigned int t;
  res.i = a;
  if (a == 0) return res.f;
  if (a < 0) res.i = (unsigned int)-a;
  shift = __internal_normalize((unsigned int*)&res.i);
  t = res.i << 24;
  res.i = (res.i >> 8);
  res.i += (127 + 30 - shift) << 23;
  if (a < 0) res.i |= 0x80000000;
  if ((rndMode == cudaRoundNearest) && (t >= 0x80000000)) {
    res.i += (t == 0x80000000) ? (res.i & 1) : (t >> 31);
  }
  else if ((rndMode == cudaRoundMinInf) && t && (a < 0)) {
    res.i++;
  }
  else if ((rndMode == cudaRoundPosInf) && t && (a > 0)) {
    res.i++;
  }
  return res.f;
}

static float __int2float_rz(int a)
{
  return __internal_int2float_kernel(a, cudaRoundZero);
}

static float __int2float_ru(int a)
{
  return __internal_int2float_kernel(a, cudaRoundPosInf);
}

static float __int2float_rd(int a)
{
  return __internal_int2float_kernel(a, cudaRoundMinInf);
}

static float __int2float_rn(int a)
{



  return __internal_int2float_kernel(a, cudaRoundNearest);

}

static float __internal_uint2float_kernel(unsigned int a, enum cudaRoundMode rndMode)
{
  volatile union __cudart_FloatUintCvt res;
  int shift;
  unsigned int t;
  res.i = a;
  if (a == 0) return res.f;
  shift = __internal_normalize((unsigned int*)&res.i);
  t = res.i << 24;
  res.i = (res.i >> 8);
  res.i += (127 + 30 - shift) << 23;
  if ((rndMode == cudaRoundNearest) && (t >= 0x80000000)) {
    res.i += (t == 0x80000000) ? (res.i & 1) : (t >> 31);
  }
  else if ((rndMode == cudaRoundPosInf) && t) {
    res.i++;
  }
  return res.f;
}

static float __uint2float_rz(unsigned int a)
{
  return __internal_uint2float_kernel(a, cudaRoundZero);
}

static float __uint2float_ru(unsigned int a)
{
  return __internal_uint2float_kernel(a, cudaRoundPosInf);
}

static float __uint2float_rd(unsigned int a)
{
  return __internal_uint2float_kernel(a, cudaRoundMinInf);
}

static float __uint2float_rn(unsigned int a)
{



  return __internal_uint2float_kernel(a, cudaRoundNearest);

}

static float __ll2float_rn(long long int a)
{
  return (float)a;
}

static float __ull2float_rn(unsigned long long int a)
{



  unsigned long long int temp;
  unsigned int res, t;
  int shift;
  if (a == 0ULL) return 0.0f;
  temp = a;
  shift = __internal_normalize64(&temp);
  temp = (temp >> 8) | ((temp & 0xffULL) ? 1ULL : 0ULL);
  res = (unsigned int)(temp >> 32);
  t = (unsigned int)temp;
  res += (127 + 62 - shift) << 23;
  res += t == 0x80000000 ? res & 1 : t >> 31;
  return __int_as_float(res);

}

static float __internal_fmul_kernel(float a, float b, int rndNearest)
{
  unsigned long long product;
  volatile union __cudart_FloatUintCvt xx, yy;
  unsigned expo_x, expo_y;

  xx.f = a;
  yy.f = b;

  expo_y = 0xFF;
  expo_x = expo_y & (xx.i >> 23);
  expo_x = expo_x - 1;
  expo_y = expo_y & (yy.i >> 23);
  expo_y = expo_y - 1;

  if ((expo_x <= 0xFD) &&
      (expo_y <= 0xFD)) {
multiply:
    expo_x = expo_x + expo_y;
    expo_y = xx.i ^ yy.i;
    xx.i = xx.i & 0x00ffffff;
    yy.i = yy.i << 8;
    xx.i = xx.i | 0x00800000;
    yy.i = yy.i | 0x80000000;

    product = ((unsigned long long)xx.i) * yy.i;
    expo_x = expo_x - 127 + 2;
    expo_y = expo_y & 0x80000000;
    xx.i = (unsigned int)(product >> 32);
    yy.i = (unsigned int)(product & 0xffffffff);

    if (xx.i < 0x00800000) {
      xx.i = (xx.i << 1) | (yy.i >> 31);
      yy.i = (yy.i << 1);
      expo_x--;
    }
    if (expo_x <= 0xFD) {
      xx.i = xx.i | expo_y;
      xx.i = xx.i + (expo_x << 23);

      if (yy.i < 0x80000000) return xx.f;
      xx.i += (((yy.i == 0x80000000) ? (xx.i & 1) : (yy.i >> 31))
               && rndNearest);
      return xx.f;
    } else if ((int)expo_x >= 254) {

      xx.i = (expo_y | 0x7F800000) - (!rndNearest);
      return xx.f;
    } else {

      expo_x = ((unsigned int)-((int)expo_x));
      if (expo_x > 25) {

        xx.i = expo_y;
        return xx.f;
      } else {
        yy.i = (xx.i << (32 - expo_x)) | ((yy.i) ? 1 : 0);
        xx.i = expo_y + (xx.i >> expo_x);
        xx.i += (((yy.i == 0x80000000) ? (xx.i & 1) : (yy.i >> 31))
                 && rndNearest);
        return xx.f;
      }
    }
  } else {
    product = xx.i ^ yy.i;
    product = product & 0x80000000;
    if (!(xx.i & 0x7fffffff)) {
      if (expo_y != 254) {
        xx.i = (unsigned int)product;
        return xx.f;
      }
      expo_y = yy.i << 1;
      if (expo_y == 0xFF000000) {
        xx.i = expo_y | 0x00C00000;
      } else {
        xx.i = yy.i | 0x00400000;
      }
      return xx.f;
    }
    if (!(yy.i & 0x7fffffff)) {
      if (expo_x != 254) {
        xx.i = (unsigned int)product;
        return xx.f;
      }
      expo_x = xx.i << 1;
      if (expo_x == 0xFF000000) {
        xx.i = expo_x | 0x00C00000;
      } else {
        xx.i = xx.i | 0x00400000;
      }
      return xx.f;
    }
    if ((expo_y != 254) && (expo_x != 254)) {
      expo_y++;
      expo_x++;
      if (expo_x == 0) {
        expo_y |= xx.i & 0x80000000;




        xx.i = xx.i << 8;
        while (!(xx.i & 0x80000000)) {
          xx.i <<= 1;
          expo_x--;
        }
        xx.i = (xx.i >> 8) | (expo_y & 0x80000000);
        expo_y &= ~0x80000000;
        expo_y--;
        goto multiply;
      }
      if (expo_y == 0) {
        expo_x |= yy.i & 0x80000000;
        yy.i = yy.i << 8;
        while (!(yy.i & 0x80000000)) {
          yy.i <<= 1;
          expo_y--;
        }
        yy.i = (yy.i >> 8) | (expo_x & 0x80000000);
        expo_x &= ~0x80000000;
        expo_x--;
        goto multiply;
      }
    }
    expo_x = xx.i << 1;
    expo_y = yy.i << 1;

    if (expo_x > 0xFF000000) {

      xx.i = xx.i | 0x00400000;
      return xx.f;
    }

    if (expo_y > 0xFF000000) {

      xx.i = yy.i | 0x00400000;
      return xx.f;
    }
    xx.i = (unsigned int)product | 0x7f800000;
    return xx.f;
  }
}

static float __internal_fadd_kernel(float a, float b, int rndNearest)
{
  volatile union __cudart_FloatUintCvt xx, yy;
  unsigned int expo_x;
  unsigned int expo_y;
  unsigned int temp;

  xx.f = a;
  yy.f = b;


  expo_y = yy.i << 1;
  if (expo_y > (xx.i << 1)) {
    expo_y = xx.i;
    xx.i = yy.i;
    yy.i = expo_y;
  }

  temp = 0xff;
  expo_x = temp & (xx.i >> 23);
  expo_x = expo_x - 1;
  expo_y = temp & (yy.i >> 23);
  expo_y = expo_y - 1;

  if ((expo_x <= 0xFD) &&
      (expo_y <= 0xFD)) {

add:
    expo_y = expo_x - expo_y;
    if (expo_y > 25) {
      expo_y = 31;
    }
    temp = xx.i ^ yy.i;
    xx.i = xx.i & ~0x7f000000;
    xx.i = xx.i | 0x00800000;
    yy.i = yy.i & ~0xff000000;
    yy.i = yy.i | 0x00800000;

    if ((int)temp < 0) {

      temp = 32 - expo_y;
      temp = (expo_y) ? (yy.i << temp) : 0;
      temp = (unsigned int)(-((int)temp));
      xx.i = xx.i - (yy.i >> expo_y) - (temp ? 1 : 0);
      if (xx.i & 0x00800000) {
        if (expo_x <= 0xFD) {
          xx.i = xx.i & ~0x00800000;
          xx.i = (xx.i + (expo_x << 23)) + 0x00800000;
          if (temp < 0x80000000) return xx.f;
          xx.i += (((temp == 0x80000000) ? (xx.i & 1) : (temp >> 31))
                   && rndNearest);
          return xx.f;
        }
      } else {
        if ((temp | (xx.i << 1)) == 0) {

          xx.i = 0;
          return xx.f;
        }

        yy.i = xx.i & 0x80000000;
        do {
          xx.i = (xx.i << 1) | (temp >> 31);
          temp <<= 1;
          expo_x--;
        } while (!(xx.i & 0x00800000));
        xx.i = xx.i | yy.i;
      }
    } else {

      temp = 32 - expo_y;
      temp = (expo_y) ? (yy.i << temp) : 0;
      xx.i = xx.i + (yy.i >> expo_y);
      if (!(xx.i & 0x01000000)) {
        if (expo_x <= 0xFD) {
          expo_y = xx.i & 1;
          xx.i = xx.i + (expo_x << 23);
          if (temp < 0x80000000) return xx.f;
          xx.i += (((temp == 0x80000000) ? expo_y : (temp >> 31))
                   && rndNearest);
          return xx.f;
        }
      } else {

        temp = (xx.i << 31) | (temp >> 1);

        xx.i = ((xx.i & 0x80000000) | (xx.i >> 1)) & ~0x40000000;
        expo_x++;
      }
    }
    if (expo_x <= 0xFD) {
      expo_y = xx.i & 1;
      xx.i += (((temp == 0x80000000) ? expo_y : (temp >> 31))
               && rndNearest);
      xx.i = xx.i + (expo_x << 23);
      return xx.f;
    }
    if ((int)expo_x >= 254) {

        xx.i = ((xx.i & 0x80000000) | 0x7f800000) - (!rndNearest);
        return xx.f;
    }

    expo_y = expo_x + 32;
    yy.i = xx.i & 0x80000000;
    xx.i = xx.i & ~0xff000000;

    expo_x = (unsigned int)(-((int)expo_x));
    temp = xx.i << expo_y | ((temp) ? 1 : 0);
    xx.i = yy.i | (xx.i >> expo_x);
    xx.i += (((temp == 0x80000000) ? (xx.i & 1) : (temp >> 31))
             && rndNearest);
    return xx.f;
  } else {

    if (!(yy.i << 1)) {
      if (xx.i == 0x80000000) {
        xx.i = yy.i;
      }
      if ((xx.i << 1) > 0xff000000) {
        xx.i |= 0x00400000;
      }
      return xx.f;
    }
    if ((expo_y != 254) && (expo_x != 254)) {

      if (expo_x == (unsigned int) -1) {
        temp = xx.i & 0x80000000;
        xx.i = xx.i << 8;
        while (!(xx.i & 0x80000000)) {
          xx.i <<= 1;
          expo_x--;
        }
        expo_x++;
        xx.i = (xx.i >> 8) | temp;
      }
      if (expo_y == (unsigned int) -1) {
        temp = yy.i & 0x80000000;
        yy.i = yy.i << 8;
        while (!(yy.i & 0x80000000)) {
          yy.i <<= 1;
          expo_y--;
        }
        expo_y++;
        yy.i = (yy.i >> 8) | temp;
      }
      goto add;
    }
    expo_x = xx.i << 1;
    expo_y = yy.i << 1;

    if (expo_x > 0xff000000) {

      xx.i = xx.i | 0x00400000;
      return xx.f;
    }

    if (expo_y > 0xff000000) {

      xx.i = yy.i | 0x00400000;
      return xx.f;
    }
    if ((expo_x == 0xff000000) && (expo_y == 0xff000000)) {




      expo_x = xx.i ^ yy.i;
      xx.i = xx.i | ((expo_x) ? 0xffc00000 : 0);
      return xx.f;
    }

    if (expo_y == 0xff000000) {
      xx.i = yy.i;
    }
    return xx.f;
  }
}

static float __fadd_rz(float a, float b)
{
  return __internal_fadd_kernel(a, b, 0);
}

static float __fmul_rz(float a, float b)
{
  return __internal_fmul_kernel(a, b, 0);
}

static float __fadd_rn(float a, float b)
{
  return __internal_fadd_kernel(a, b, 1);
}

static float __fmul_rn(float a, float b)
{
  return __internal_fmul_kernel(a, b, 1);
}

static void __brkpt(int c)
{

}
# 4518 "/home/normal/cuda/bin/../include/device_functions.h" 3
extern int __cudaSynchronizeThreads(void**, void*);



static inline __attribute__((always_inline)) void __syncthreads(void)
{
  volatile int _ = 0;
  L: if (__cudaSynchronizeThreads((void**)&&L, (void*)&_)) goto L;
}
# 4537 "/home/normal/cuda/bin/../include/device_functions.h" 3
static void __prof_trigger(int a)
{
}

static void __threadfence(void)
{
}

static void __threadfence_block(void)
{
}



static void __trap(void)
{
  __builtin_trap();
}
# 4573 "/home/normal/cuda/bin/../include/device_functions.h" 3
static float __fdividef(float a, float b)
{






  if (__cuda_fabsf(b) > 8.507059173e37f) {
    if (__cuda_fabsf(a) <= 3.402823466e38f) {
      return ((a / b) / 3.402823466e38f) / 3.402823466e38f;
    } else {
      return __int_as_float(0xffc00000);
    }
  } else {
    return a / b;
  }

}

static float __sinf(float a)
{
  return sinf(a);
}

static float __cosf(float a)
{
  return cosf(a);
}

static float __log2f(float a)
{
  return log2f(a);
}







static float __internal_accurate_fdividef(float a, float b)
{
  if (__cuda_fabsf(b) > 8.507059173e37f) {
    a *= .25f;
    b *= .25f;
  }
  return __fdividef(a, b);
}

static float __tanf(float a)
{



  return __fdividef (__sinf(a), __cosf(a));

}

static void __sincosf(float a, float *sptr, float *cptr)
{



  *sptr = __sinf(a);
  *cptr = __cosf(a);

}

static float __expf(float a)
{



  return __cuda_exp2f(a * 1.442695041f);

}

static float __exp10f(float a)
{



  return __cuda_exp2f(a * 3.321928094f);

}

static float __log10f(float a)
{



  return 0.301029996f * __log2f(a);

}

static float __logf(float a)
{



  return 0.693147181f * __log2f(a);

}

static float __powf(float a, float b)
{



  return __cuda_exp2f(b * __log2f(a));

}

static float fdividef(float a, float b)
{





  return __internal_accurate_fdividef(a, b);

}

static int __clz(int a)
{
  return (a)?(158-(__float_as_int(__uint2float_rz((unsigned int)a))>>23)):32;
}

static int __clzll(long long int a)
{
  int ahi = ((int)((unsigned long long)a >> 32));
  int alo = ((int)((unsigned long long)a & 0xffffffffULL));
  int res;
  if (ahi) {
    res = 0;
  } else {
    res = 32;
    ahi = alo;
  }
  res = res + __clz(ahi);
  return res;
}

static int __popc(unsigned int a)
{
  a = a - ((a >> 1) & 0x55555555);
  a = (a & 0x33333333) + ((a >> 2) & 0x33333333);
  a = (a + (a >> 4)) & 0x0f0f0f0f;
  a = ((__umul24(a, 0x808080) << 1) + a) >> 24;
  return a;
}

static int __popcll(unsigned long long int a)
{
  unsigned int ahi = ((unsigned int)(a >> 32));
  unsigned int alo = ((unsigned int)(a & 0xffffffffULL));
  alo = alo - ((alo >> 1) & 0x55555555);
  alo = (alo & 0x33333333) + ((alo >> 2) & 0x33333333);
  ahi = ahi - ((ahi >> 1) & 0x55555555);
  ahi = (ahi & 0x33333333) + ((ahi >> 2) & 0x33333333);
  alo = alo + ahi;
  alo = (alo & 0x0f0f0f0f) + ((alo >> 4) & 0x0f0f0f0f);
  alo = ((__umul24(alo, 0x808080) << 1) + alo) >> 24;
  return alo;
}

static unsigned int __brev(unsigned int a)
{
  a = ((a >> 1) & 0x55555555) + ((a & 0x55555555) << 1);
  a = ((a >> 2) & 0x33333333) + ((a & 0x33333333) << 2);
  a = ((a >> 4) & 0x0F0F0F0F) + ((a & 0x0F0F0F0F) << 4);
  a = ((a >> 8) & 0x00FF00FF) + ((a & 0x00FF00FF) << 8);
  a = ( a >> 16 ) + ( a << 16);
  return a;
}

static unsigned long long int __brevll(unsigned long long int a)
{
  unsigned int hi = (unsigned int)(a >> 32);
  unsigned int lo = (unsigned int)(a & 0xffffffffULL);
  unsigned int t;
  t = __brev(lo);
  lo = __brev(hi);
  return ((unsigned long long int)t << 32) + (unsigned long long int)lo;
}

static int __ffs(int a)
{
  return 32 - __clz (a & -a);
}

static int __ffsll(long long int a)
{
  return 64 - __clzll (a & -a);
}
# 4779 "/home/normal/cuda/bin/../include/device_functions.h" 3
static double fdivide(double a, double b)
{
  return (double)fdividef((float)a, (float)b);
}



static int __double2int_rz(double a)
{
  return __float2int_rz((float)a);
}

static unsigned int __double2uint_rz(double a)
{
  return __float2uint_rz((float)a);
}

static long long int __double2ll_rz(double a)
{
  return __float2ll_rz((float)a);
}

static unsigned long long int __double2ull_rz(double a)
{
  return __float2ull_rz((float)a);
}
# 4856 "/home/normal/cuda/bin/../include/device_functions.h" 3
# 1 "/home/normal/cuda/bin/../include/sm_11_atomic_functions.h" 1 3
# 257 "/home/normal/cuda/bin/../include/sm_11_atomic_functions.h" 3
extern void __cudaMutexOperation(int lock);






static int __iAtomicAdd(int *address, int val)
{
  int old;

  __cudaMutexOperation(1); old = *address; *address = old + val; __cudaMutexOperation(0);



  return old;
}

static unsigned int __uAtomicAdd(unsigned int *address, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = old + val; __cudaMutexOperation(0);




  return old;
}

static int __iAtomicExch(int *address, int val)
{
  int old;

  __cudaMutexOperation(1); old = *address; *address = val; __cudaMutexOperation(0);




  return old;
}

static unsigned int __uAtomicExch(unsigned int *address, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = val; __cudaMutexOperation(0);




  return old;
}

static float __fAtomicExch(float *address, float val)
{
  float old;

  __cudaMutexOperation(1); old = *address; *address = val; __cudaMutexOperation(0);




  return old;
}

static int __iAtomicMin(int *address, int val)
{
  int old;

  __cudaMutexOperation(1); old = *address; *address = old < val ? old : val; __cudaMutexOperation(0);




  return old;
}

static unsigned int __uAtomicMin(unsigned int *address, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = old < val ? old : val; __cudaMutexOperation(0);




  return old;
}

static int __iAtomicMax(int *address, int val)
{
  int old;

  __cudaMutexOperation(1); old = *address; *address = old > val ? old : val; __cudaMutexOperation(0);




  return old;
}

static unsigned int __uAtomicMax(unsigned int *address, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = old > val ? old : val; __cudaMutexOperation(0);




  return old;
}

static unsigned int __uAtomicInc(unsigned int *address, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = (old >= val) ? 0 : old + 1; __cudaMutexOperation(0);




  return old;
}

static unsigned int __uAtomicDec(unsigned int *address, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = ((old == 0) | (old > val)) ? val : (old - 1); __cudaMutexOperation(0);




  return old;
}

static int __iAtomicAnd(int *address, int val)
{
  int old;

  __cudaMutexOperation(1); old = *address; *address = old & val; __cudaMutexOperation(0);




  return old;
}

static unsigned int __uAtomicAnd(unsigned int *address, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = old & val; __cudaMutexOperation(0);




  return old;
}

static int __iAtomicOr(int *address, int val)
{
  int old;

  __cudaMutexOperation(1); old = *address; *address = old | val; __cudaMutexOperation(0);




  return old;
}

static unsigned int __uAtomicOr(unsigned int *address, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = old | val; __cudaMutexOperation(0);




  return old;
}

static int __iAtomicXor(int *address, int val)
{
  int old;

  __cudaMutexOperation(1); old = *address; *address = old ^ val; __cudaMutexOperation(0);




  return old;
}

static unsigned int __uAtomicXor(unsigned int *address, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = old ^ val; __cudaMutexOperation(0);




  return old;
}

static int __iAtomicCAS(int *address, int compare, int val)
{
  int old;

  __cudaMutexOperation(1); old = *address; *address = old == compare ? val : old; __cudaMutexOperation(0);




  return old;
}

static unsigned int __uAtomicCAS(unsigned int *address, unsigned int compare, unsigned int val)
{
  unsigned int old;

  __cudaMutexOperation(1); old = *address; *address = old == compare ? val : old; __cudaMutexOperation(0);




  return old;
}
# 4857 "/home/normal/cuda/bin/../include/device_functions.h" 2 3
# 1 "/home/normal/cuda/bin/../include/sm_12_atomic_functions.h" 1 3
# 118 "/home/normal/cuda/bin/../include/sm_12_atomic_functions.h" 3
extern void __cudaMutexOperation(int lock);






static unsigned long long int __ullAtomicAdd(unsigned long long int *address, unsigned long long int val)
{
  unsigned long long int old;

  __cudaMutexOperation(1); old = *address; *address = old + val; __cudaMutexOperation(0);



  return old;
}

static unsigned long long int __ullAtomicExch(unsigned long long int *address, unsigned long long int val)
{
  unsigned long long int old;

  __cudaMutexOperation(1); old = *address; *address = val; __cudaMutexOperation(0);



  return old;
}

static unsigned long long int __ullAtomicCAS(unsigned long long int *address, unsigned long long int compare, unsigned long long int val)
{
  unsigned long long int old;

  __cudaMutexOperation(1); old = *address; *address = old == compare ? val : old; __cudaMutexOperation(0);



  return old;
}





static int __any(int cond)
{
  return cond;
}

static int __all(int cond)
{
  return cond;
}
# 4858 "/home/normal/cuda/bin/../include/device_functions.h" 2 3
# 1 "/home/normal/cuda/bin/../include/sm_13_double_functions.h" 1 3
# 267 "/home/normal/cuda/bin/../include/sm_13_double_functions.h" 3
static double __longlong_as_double(long long int a)
{
  volatile union __cudart_DoubleLonglongCvt u;
  u.i = a;
  return u.d;
}

static long long int __double_as_longlong(double a)
{
  volatile union __cudart_DoubleLonglongCvt u;
  u.d = a;
  return u.i;
}

static float __internal_double2float_kernel(double a)
{
  volatile union __cudart_DoubleUlonglongCvt xx;
  volatile union __cudart_FloatUintCvt res;

  int shift;
  xx.d = a;
  if (xx.i == 0) return 0.0f;
  res.i = (((unsigned int) (xx.i >> 32)) & 0x80000000);
  if ((xx.i & 0x7ff0000000000000ULL) == 0x7ff0000000000000ULL) {
    if ((xx.i & 0x7fffffffffffffffULL) > 0x7ff0000000000000ULL) {

      res.i = 0x7f8fffff;
    } else {

      res.i |= 0x7f800000;
    }
    return res.f;
  }
  shift = ((int) ((xx.i >> 52) & 0x7ff)) - 1023;

  xx.i = (xx.i & 0x000fffffffffffffULL);
  if (shift >= 128) {
    res.i |= 0x7f7fffff;
    return res.f;
  }
  if (shift <= -127) {
    if (shift < -180) {

      xx.i = 0;
    } else {
      xx.i |= 0x0010000000000000ULL;
      xx.i >>= 127 + shift;
    }
  } else {
    res.i |= (unsigned int) (127 + shift) << 23;
  }
  res.i |= ((unsigned int) (xx.i >> 29)) & 0x007fffff;
  xx.i &= 0x1fffffff;
  return res.f;
}

static double __internal_ll2double_kernel(long long int a, enum cudaRoundMode rndMode)
{
  volatile union __cudart_DoubleUlonglongCvt res;
  int shift;
  unsigned int t;
  res.i = a;
  if (a == 0) return res.d;
  if (a < 0) res.i = (unsigned long long int)-a;
  shift = __internal_normalize64((unsigned long long int*)&res.i);
  t = ((unsigned int) res.i) << 21;
  res.i >>= 11;
  res.i += ((unsigned long long int)(1023 + 62 - shift)) << 52;
  if (a < 0) res.i |= 0x8000000000000000ULL;
  if ((rndMode == cudaRoundNearest) && (t >= 0x80000000)) {
    res.i += (t == 0x80000000) ? (res.i & 1) : 1;
  }
  else if ((rndMode == cudaRoundMinInf) && t && (a < 0)) {
    res.i++;
  }
  else if ((rndMode == cudaRoundPosInf) && t && (a > 0)) {
    res.i++;
  }
  return res.d;
}

static double __internal_ull2double_kernel(unsigned long long int a, enum cudaRoundMode rndMode)
{
  volatile union __cudart_DoubleUlonglongCvt res;
  int shift;
  unsigned int t;
  res.i = a;
  if (a == 0) return res.d;
  shift = __internal_normalize64((unsigned long long int *)&res.i);
  t = ((unsigned int) res.i) << 21;
  res.i >>= 11;
  res.i += ((unsigned long long int)(1023 + 62 - shift)) << 52;
  if ((rndMode == cudaRoundNearest) && (t >= 0x80000000)) {
    res.i += (t == 0x80000000) ? (res.i & 1) : 1;
  }
  else if ((rndMode == cudaRoundPosInf) && t) {
    res.i++;
  }
  return res.d;
}

static long long int __internal_double2ll_kernel(double a, long long int max, long long int min, long long int nan, enum cudaRoundMode rndMode)
{
  volatile union __cudart_DoubleUlonglongCvt xx, res;
  unsigned long long int t = 0;
  int shift;

  xx.d = a;
  if (sizeof(a) == sizeof(double) && __cuda___isnan((double)a)) return nan; if (sizeof(a) == sizeof(float) && __cuda___isnanf((float)a)) return nan; if (a >= max) return max; if (a <= min) return min;
  shift = (int) (1023 + 62 - ((xx.i >> 52) & 0x7ff));
  res.i = ((xx.i << 11) | 0x8000000000000000ULL) >> 1;
  if (shift >= 64) {
    t = res.i;
    res.i = 0;
  } else if (shift) {
    t = res.i << (64 - shift);
    res.i = res.i >> shift;
  }
  if ((rndMode == cudaRoundNearest) && (t >= 0x8000000000000000ULL)) {
    res.i += (t == 0x8000000000000000ULL) ? (res.i & 1) : 1;
  }
  else if ((rndMode == cudaRoundMinInf) && t &&
          (xx.i > 0x8000000000000000ULL)) {
    res.i++;
  }
  else if ((rndMode == cudaRoundPosInf) && t && ((long long int)xx.i > 0)) {
    res.i++;
  }
  if ((long long int)xx.i < 0) {
    res.i = (unsigned long long int)(-(long long int)res.i);
  }
  return res.i;
}

static unsigned long long int __internal_double2ull_kernel(double a, unsigned long long int max, unsigned long long int nan, enum cudaRoundMode rndMode)
{
  volatile union __cudart_DoubleUlonglongCvt xx, res;
  unsigned long long int t = 0;
  int shift;

  xx.d = a;
  if (sizeof(a) == sizeof(double) && __cuda___isnan((double)a)) return nan; if (sizeof(a) == sizeof(float) && __cuda___isnanf((float)a)) return nan; if (a >= max) return max; if (a <= 0LL) return 0LL;

  if (a == 0.0) return 0LL;
  shift = (int) (1023 + 63 - ((xx.i >> 52) & 0x7ff));
  res.i = ((xx.i << 11) | 0x8000000000000000ULL);
  if (shift >= 64) {
    t = res.i >> (int)(shift > 64);
    res.i = 0;
  } else if (shift) {
    t = res.i << (64 - shift);
    res.i = res.i >> shift;
  }
  if ((rndMode == cudaRoundNearest) && (t >= 0x8000000000000000ULL)) {
    res.i += (t == 0x8000000000000000ULL) ? (res.i & 1) : 1;
  }
  else if ((rndMode == cudaRoundPosInf) && t) {
    res.i++;
  }
  return res.i;
}

static int __double2hiint(double a)
{
  volatile union __cudart_DoubleInthiloCvt cvt;

  cvt.d = a;
  return cvt.i[1];
}

static int __double2loint(double a)
{
  volatile union __cudart_DoubleInthiloCvt cvt;

  cvt.d = a;
  return cvt.i[0];
}

static double __hiloint2double(int a, int b)
{
  volatile union __cudart_DoubleInthiloCvt cvt;

  cvt.i[0] = b;
  cvt.i[1] = a;
  return cvt.d;
}

static float __double2float_rn(double a)
{
  return (float)a;
}

static float __double2float_rz(double a)
{
  return __internal_double2float_kernel(a);
}

static int __internal_double2int(double a, enum cudaRoundMode rndMode)
{
  return (int)__internal_double2ll_kernel(a, 2147483647LL, -2147483648LL, -2147483648LL, rndMode);
}

static int __double2int_rn(double a)
{
  return __internal_double2int(a, cudaRoundNearest);
}

static int __double2int_ru(double a)
{
  return __internal_double2int(a, cudaRoundPosInf);
}

static int __double2int_rd(double a)
{
  return __internal_double2int(a, cudaRoundMinInf);
}

static unsigned int __internal_double2uint(double a, enum cudaRoundMode rndMode)
{
  return (unsigned int)__internal_double2ull_kernel(a, 4294967295ULL, 2147483648ULL, rndMode);
}

static unsigned int __double2uint_rn(double a)
{
  return __internal_double2uint(a, cudaRoundNearest);
}

static unsigned int __double2uint_ru(double a)
{
  return __internal_double2uint(a, cudaRoundPosInf);
}

static unsigned int __double2uint_rd(double a)
{
  return __internal_double2uint(a, cudaRoundMinInf);
}

static long long int __internal_double2ll(double a, enum cudaRoundMode rndMode)
{
  return __internal_double2ll_kernel(a, 9223372036854775807LL, -9223372036854775807LL -1LL, -9223372036854775807LL -1LL, rndMode);
}

static long long int __double2ll_rn(double a)
{
  return __internal_double2ll(a, cudaRoundNearest);
}

static long long int __double2ll_ru(double a)
{
  return __internal_double2ll(a, cudaRoundPosInf);
}

static long long int __double2ll_rd(double a)
{
  return __internal_double2ll(a, cudaRoundMinInf);
}

static unsigned long long int __internal_double2ull(double a, enum cudaRoundMode rndMode)
{
  return __internal_double2ull_kernel(a, 18446744073709551615ULL, 9223372036854775808ULL, rndMode);
}

static unsigned long long int __double2ull_rn(double a)
{
  return __internal_double2ull(a, cudaRoundNearest);
}

static unsigned long long int __double2ull_ru(double a)
{
  return __internal_double2ull(a, cudaRoundPosInf);
}

static unsigned long long int __double2ull_rd(double a)
{
  return __internal_double2ull(a, cudaRoundMinInf);
}

static double __int2double_rn(int a)
{
  return (double)a;
}

static double __uint2double_rn(unsigned int a)
{
  return (double)a;
}

static double __ll2double_rn(long long int a)
{
  return (double)a;
}

static double __ll2double_rz(long long int a)
{
  return __internal_ll2double_kernel(a, cudaRoundZero);
}

static double __ll2double_rd(long long int a)
{
  return __internal_ll2double_kernel(a, cudaRoundMinInf);
}

static double __ll2double_ru(long long int a)
{
  return __internal_ll2double_kernel(a, cudaRoundPosInf);
}

static double __ull2double_rn(unsigned long long int a)
{
  return __internal_ull2double_kernel(a, cudaRoundNearest);
}

static double __ull2double_rz(unsigned long long int a)
{
  return __internal_ull2double_kernel(a, cudaRoundZero);
}

static double __ull2double_rd(unsigned long long int a)
{
  return __internal_ull2double_kernel(a, cudaRoundMinInf);
}

static double __ull2double_ru(unsigned long long int a)
{
  return __internal_ull2double_kernel(a, cudaRoundPosInf);
}





static double __internal_fma_kernel(double x, double y, double z, enum cudaRoundMode rndMode)
{



  struct __cudart_UintUint xx, yy, zz, ww;
  unsigned int s, t, u, prod0, prod1, prod2, prod3, expo_x, expo_y, expo_z;

  xx.hi = __double2hiint(x);
  xx.lo = __double2loint(x);
  yy.hi = __double2hiint(y);
  yy.lo = __double2loint(y);
  zz.hi = __double2hiint(z);
  zz.lo = __double2loint(z);

  expo_z = 0x7FF;
  t = xx.hi >> 20;
  expo_x = expo_z & t;
  expo_x = expo_x - 1;
  t = yy.hi >> 20;
  expo_y = expo_z & t;
  expo_y = expo_y - 1;
  t = zz.hi >> 20;
  expo_z = expo_z & t;
  expo_z = expo_z - 1;

  if (!((expo_x <= 0x7FD) &&
        (expo_y <= 0x7FD) &&
        (expo_z <= 0x7FD))) {





    if (((yy.hi << 1) | (yy.lo != 0)) > 0xffe00000) {
      yy.hi |= 0x00080000;
      return __hiloint2double(yy.hi, yy.lo);
    }
    if (((zz.hi << 1) | (zz.lo != 0)) > 0xffe00000) {
      zz.hi |= 0x00080000;
      return __hiloint2double(zz.hi, zz.lo);
    }
    if (((xx.hi << 1) | (xx.lo != 0)) > 0xffe00000) {
      xx.hi |= 0x00080000;
      return __hiloint2double(xx.hi, xx.lo);
    }
# 656 "/home/normal/cuda/bin/../include/sm_13_double_functions.h" 3
    if (((((xx.hi << 1) | xx.lo) == 0) &&
         (((yy.hi << 1) | (yy.lo != 0)) == 0xffe00000)) ||
        ((((yy.hi << 1) | yy.lo) == 0) &&
         (((xx.hi << 1) | (xx.lo != 0)) == 0xffe00000))) {
      xx.hi = 0xfff80000;
      xx.lo = 0x00000000;
      return __hiloint2double(xx.hi, xx.lo);
    }
    if (((zz.hi << 1) | (zz.lo != 0)) == 0xffe00000) {
      if ((((yy.hi << 1) | (yy.lo != 0)) == 0xffe00000) ||
          (((xx.hi << 1) | (xx.lo != 0)) == 0xffe00000)) {
        if ((int)(xx.hi ^ yy.hi ^ zz.hi) < 0) {
          xx.hi = 0xfff80000;
          xx.lo = 0x00000000;
          return __hiloint2double(xx.hi, xx.lo);
        }
      }
    }




    if (((xx.hi << 1) | (xx.lo != 0)) == 0xffe00000) {
      xx.hi = xx.hi ^ (yy.hi & 0x80000000);
      return __hiloint2double(xx.hi, xx.lo);
    }
    if (((yy.hi << 1) | (yy.lo != 0)) == 0xffe00000) {
      yy.hi = yy.hi ^ (xx.hi & 0x80000000);
      return __hiloint2double(yy.hi, yy.lo);
    }
    if (((zz.hi << 1) | (zz.lo != 0)) == 0xffe00000) {
      return __hiloint2double(zz.hi, zz.lo);
    }





    if ((zz.hi == 0x80000000) && (zz.lo == 0)) {
      if ((((xx.hi << 1) | xx.lo) == 0) ||
          (((yy.hi << 1) | yy.lo) == 0)) {
        if ((int)(xx.hi ^ yy.hi) < 0) {
          return __hiloint2double(zz.hi, zz.lo);
        }
      }
    }



    if ((((zz.hi << 1) | zz.lo) == 0) &&
        ((((xx.hi << 1) | xx.lo) == 0) ||
         (((yy.hi << 1) | yy.lo) == 0))) {
      if (rndMode == cudaRoundMinInf) {
        return __hiloint2double((xx.hi ^ yy.hi ^ zz.hi) & 0x80000000, zz.lo);
      } else {
        zz.hi &= 0x7fffffff;
        return __hiloint2double(zz.hi, zz.lo);
      }
    }




    if ((((xx.hi << 1) | xx.lo) == 0) ||
        (((yy.hi << 1) | yy.lo) == 0)) {
      return __hiloint2double(zz.hi, zz.lo);
    }

    if (expo_x == 0xffffffff) {
      expo_x++;
      t = xx.hi & 0x80000000;
      s = xx.lo >> 21;
      xx.lo = xx.lo << 11;
      xx.hi = xx.hi << 11;
      xx.hi = xx.hi | s;
      if (!xx.hi) {
        xx.hi = xx.lo;
        xx.lo = 0;
        expo_x -= 32;
      }
      while ((int)xx.hi > 0) {
        s = xx.lo >> 31;
        xx.lo = xx.lo + xx.lo;
        xx.hi = xx.hi + xx.hi;
        xx.hi = xx.hi | s;
        expo_x--;
      }
      xx.lo = (xx.lo >> 11);
      xx.lo |= (xx.hi << 21);
      xx.hi = (xx.hi >> 11) | t;
    }
    if (expo_y == 0xffffffff) {
      expo_y++;
      t = yy.hi & 0x80000000;
      s = yy.lo >> 21;
      yy.lo = yy.lo << 11;
      yy.hi = yy.hi << 11;
      yy.hi = yy.hi | s;
      if (!yy.hi) {
        yy.hi = yy.lo;
        yy.lo = 0;
        expo_y -= 32;
      }
      while ((int)yy.hi > 0) {
        s = yy.lo >> 31;
        yy.lo = yy.lo + yy.lo;
        yy.hi = yy.hi + yy.hi;
        yy.hi = yy.hi | s;
        expo_y--;
      }
      yy.lo = (yy.lo >> 11);
      yy.lo |= (yy.hi << 21);
      yy.hi = (yy.hi >> 11) | t;
    }
    if (expo_z == 0xffffffff) {
      expo_z++;
      t = zz.hi & 0x80000000;
      s = zz.lo >> 21;
      zz.lo = zz.lo << 11;
      zz.hi = zz.hi << 11;
      zz.hi = zz.hi | s;
      if (!zz.hi) {
        zz.hi = zz.lo;
        zz.lo = 0;
        expo_z -= 32;
      }
      while ((int)zz.hi > 0) {
        s = zz.lo >> 31;
        zz.lo = zz.lo + zz.lo;
        zz.hi = zz.hi + zz.hi;
        zz.hi = zz.hi | s;
        expo_z--;
      }
      zz.lo = (zz.lo >> 11);
      zz.lo |= (zz.hi << 21);
      zz.hi = (zz.hi >> 11) | t;
    }
  }

  expo_x = expo_x + expo_y;
  expo_y = xx.hi ^ yy.hi;
  t = xx.lo >> 21;
  xx.lo = xx.lo << 11;
  xx.hi = xx.hi << 11;
  xx.hi = xx.hi | t;
  yy.hi = yy.hi & 0x000fffff;
  xx.hi = xx.hi | 0x80000000;
  yy.hi = yy.hi | 0x00100000;

  prod0 = xx.lo * yy.lo;
  prod1 = __umulhi (xx.lo, yy.lo);
  prod2 = xx.hi * yy.lo;
  prod3 = xx.lo * yy.hi;
  prod1 += prod2;
  t = prod1 < prod2;
  prod1 += prod3;
  t += prod1 < prod3;
  prod2 = __umulhi (xx.hi, yy.lo);
  prod3 = __umulhi (xx.lo, yy.hi);
  prod2 += prod3;
  s = prod2 < prod3;
  prod3 = xx.hi * yy.hi;
  prod2 += prod3;
  s += prod2 < prod3;
  prod2 += t;
  s += prod2 < t;
  prod3 = __umulhi (xx.hi, yy.hi) + s;

  yy.lo = prod0;
  yy.hi = prod1;
  xx.lo = prod2;
  xx.hi = prod3;
  expo_x = expo_x - (1023 - 2);
  expo_y = expo_y & 0x80000000;

  if (xx.hi < 0x00100000) {
    s = xx.lo >> 31;
    s = (xx.hi << 1) + s;
    xx.hi = s;
    s = yy.hi >> 31;
    s = (xx.lo << 1) + s;
    xx.lo = s;
    s = yy.lo >> 31;
    s = (yy.hi << 1) + s;
    yy.hi = s;
    s = yy.lo << 1;
    yy.lo = s;
    expo_x--;
  }

  t = 0;
  if (((zz.hi << 1) | zz.lo) != 0) {

    s = zz.hi & 0x80000000;

    zz.hi &= 0x000fffff;
    zz.hi |= 0x00100000;
    ww.hi = 0;
    ww.lo = 0;


    if ((int)expo_z > (int)expo_x) {
      t = expo_z;
      expo_z = expo_x;
      expo_x = t;
      t = zz.hi;
      zz.hi = xx.hi;
      xx.hi = t;
      t = zz.lo;
      zz.lo = xx.lo;
      xx.lo = t;
      t = ww.hi;
      ww.hi = yy.hi;
      yy.hi = t;
      t = ww.lo;
      ww.lo = yy.lo;
      yy.lo = t;
      t = expo_y;
      expo_y = s;
      s = t;
    }



    expo_z = expo_x - expo_z;
    u = expo_y ^ s;
    if (expo_z <= 107) {

      t = 0;
      while (expo_z >= 32) {
        t = ww.lo | (t != 0);
        ww.lo = ww.hi;
        ww.hi = zz.lo;
        zz.lo = zz.hi;
        zz.hi = 0;
        expo_z -= 32;
      }
      if (expo_z) {
        t = (t >> expo_z) | (ww.lo << (32 - expo_z)) |
                ((t << (32 - expo_z)) != 0);
        ww.lo = (ww.lo >> expo_z) | (ww.hi << (32 - expo_z));
        ww.hi = (ww.hi >> expo_z) | (zz.lo << (32 - expo_z));
        zz.lo = (zz.lo >> expo_z) | (zz.hi << (32 - expo_z));
        zz.hi = (zz.hi >> expo_z);
      }
    } else {
      t = 1;
      ww.lo = 0;
      ww.hi = 0;
      zz.lo = 0;
      zz.hi = 0;
    }
    if ((int)u < 0) {

      t = (unsigned)(-(int)t);
      s = (t != 0);
      u = yy.lo - s;
      s = u > yy.lo;
      yy.lo = u - ww.lo;
      s += yy.lo > u;
      u = yy.hi - s;
      s = u > yy.hi;
      yy.hi = u - ww.hi;
      s += yy.hi > u;
      u = xx.lo - s;
      s = u > xx.lo;
      xx.lo = u - zz.lo;
      s += xx.lo > u;
      xx.hi = (xx.hi - zz.hi) - s;
      if (!(xx.hi | xx.lo | yy.hi | yy.lo | t)) {

        if (rndMode == cudaRoundMinInf) {
          return __hiloint2double(0x80000000, xx.lo);
        } else {
          return __hiloint2double(xx.hi, xx.lo);
        }
      }
      if ((int)xx.hi < 0) {



        t = ~t;
        yy.lo = ~yy.lo;
        yy.hi = ~yy.hi;
        xx.lo = ~xx.lo;
        xx.hi = ~xx.hi;
        if (++t == 0) {
          if (++yy.lo == 0) {
            if (++yy.hi == 0) {
              if (++xx.lo == 0) {
              ++xx.hi;
              }
            }
          }
        }
        expo_y ^= 0x80000000;
      }


      while (!(xx.hi & 0x00100000)) {
        xx.hi = (xx.hi << 1) | (xx.lo >> 31);
        xx.lo = (xx.lo << 1) | (yy.hi >> 31);
        yy.hi = (yy.hi << 1) | (yy.lo >> 31);
        yy.lo = (yy.lo << 1);
        expo_x--;
      }
    } else {

      yy.lo = yy.lo + ww.lo;
      s = yy.lo < ww.lo;
      yy.hi = yy.hi + s;
      u = yy.hi < s;
      yy.hi = yy.hi + ww.hi;
      u += yy.hi < ww.hi;
      xx.lo = xx.lo + u;
      s = xx.lo < u;
      xx.lo = xx.lo + zz.lo;
      s += xx.lo < zz.lo;
      xx.hi = xx.hi + zz.hi + s;
      if (xx.hi & 0x00200000) {
        t = t | (yy.lo << 31);
        yy.lo = (yy.lo >> 1) | (yy.hi << 31);
        yy.hi = (yy.hi >> 1) | (xx.lo << 31);
        xx.lo = (xx.lo >> 1) | (xx.hi << 31);
        xx.hi = ((xx.hi & 0x80000000) | (xx.hi >> 1)) & ~0x40000000;
        expo_x++;
      }
    }
  }
  t = yy.lo | (t != 0);
  t = yy.hi | (t != 0);

  xx.hi |= expo_y;
  if (expo_x <= 0x7FD) {

    xx.hi = xx.hi & ~0x00100000;
    s = xx.lo & 1;
    u = xx.lo;
    if (rndMode == cudaRoundNearest) {
      xx.lo += (t == 0x80000000) ? s : (t >> 31);
    } else if (((rndMode == cudaRoundPosInf) && t && (!expo_y)) ||
               ((rndMode == cudaRoundMinInf) && t && expo_y)) {
      xx.lo += 1;
    }
    xx.hi += (u > xx.lo);
    xx.hi += ((expo_x + 1) << 20);
    return __hiloint2double(xx.hi, xx.lo);
  } else if ((int)expo_x >= 2046) {

    if ((rndMode == cudaRoundNearest) ||
        ((rndMode == cudaRoundPosInf) && (!expo_y)) ||
        ((rndMode == cudaRoundMinInf) && expo_y)) {
      xx.hi = (xx.hi & 0x80000000) | 0x7ff00000;
      xx.lo = 0;
    } else {
      xx.hi = (xx.hi & 0x80000000) | 0x7fefffff;
      xx.lo = 0xffffffff;
    }
    return __hiloint2double(xx.hi, xx.lo);
  }

  expo_x = (unsigned)(-(int)expo_x);
  if (expo_x > 54) {

    if (((rndMode == cudaRoundPosInf) && (!expo_y)) ||
        ((rndMode == cudaRoundMinInf) && expo_y)) {
      return __hiloint2double(xx.hi & 0x80000000, 1);
    } else {
      return __hiloint2double(xx.hi & 0x80000000, 0);
    }
  }
  yy.hi = xx.hi & 0x80000000;
  xx.hi = xx.hi & ~0xffe00000;
  if (expo_x >= 32) {
    t = xx.lo | (t != 0);
    xx.lo = xx.hi;
    xx.hi = 0;
    expo_x -= 32;
  }
  if (expo_x) {
    t = (t >> expo_x) | (xx.lo << (32 - expo_x)) | (t != 0);
    xx.lo = (xx.lo >> expo_x) | (xx.hi << (32 - expo_x));
    xx.hi = (xx.hi >> expo_x);
  }
  expo_x = xx.lo & 1;
  u = xx.lo;
  if (rndMode == cudaRoundNearest) {
    xx.lo += (t == 0x80000000) ? expo_x : (t >> 31);
  } else if (((rndMode == cudaRoundPosInf) && t && (!expo_y)) ||
             ((rndMode == cudaRoundMinInf) && t && expo_y)) {
    xx.lo += 1;
  }
  xx.hi += (u > xx.lo);
  xx.hi |= yy.hi;
  return __hiloint2double(xx.hi, xx.lo);
}

static double __fma_rn(double x, double y, double z)
{
  return __internal_fma_kernel(x, y, z, cudaRoundNearest);
}

static double __fma_rd(double x, double y, double z)
{
  return __internal_fma_kernel(x, y, z, cudaRoundMinInf);
}

static double __fma_ru(double x, double y, double z)
{
  return __internal_fma_kernel(x, y, z, cudaRoundPosInf);
}

static double __fma_rz(double x, double y, double z)
{
  return __internal_fma_kernel(x, y, z, cudaRoundZero);
}

static double __dadd_rz(double a, double b)
{
  return __fma_rz(a, 1.0, b);
}

static double __dadd_ru(double a, double b)
{
  return __fma_ru(a, 1.0, b);
}

static double __dadd_rd(double a, double b)
{
  return __fma_rd(a, 1.0, b);
}

static double __dmul_rz(double a, double b)
{
  return __fma_rz(a, b, __hiloint2double(0x80000000, 0x00000000));
}

static double __dmul_ru(double a, double b)
{
  return __fma_ru(a, b, __hiloint2double(0x80000000, 0x00000000));
}

static double __dmul_rd(double a, double b)
{
  return __fma_rd(a, b, 0.0);
}

static double __dadd_rn(double a, double b)
{
  return __fma_rn(a, 1.0, b);
}

static double __dmul_rn(double a, double b)
{
  return __fma_rn(a, b, __hiloint2double(0x80000000, 0x00000000));
}
# 4859 "/home/normal/cuda/bin/../include/device_functions.h" 2 3
# 1 "/home/normal/cuda/bin/../include/texture_fetch_functions.h" 1 3
# 1910 "/home/normal/cuda/bin/../include/texture_fetch_functions.h" 3
extern void __cudaTextureFetch(const void *tex, void *index, int integer, void *val);

static int4 __itexfetchi(const void *tex, int4 index)
{
  int4 val;

  __cudaTextureFetch(tex, (void*)&index, 1, (void*)&val);

  return val;
}

static uint4 __utexfetchi(const void *tex, int4 index)
{
  uint4 val;

  __cudaTextureFetch(tex, (void*)&index, 1, (void*)&val);

  return val;
}

static float4 __ftexfetchi(const void *tex, int4 index)
{
  float4 val;

  __cudaTextureFetch(tex, (void*)&index, 1, (void*)&val);

  return val;
}

static int4 __itexfetch(const void *tex, float4 index, int dim)
{
  int4 val;

  __cudaTextureFetch(tex, (void*)&index, 0, (void*)&val);

  return val;
}

static uint4 __utexfetch(const void *tex, float4 index, int dim)
{
  uint4 val;

  __cudaTextureFetch(tex, (void*)&index, 0, (void*)&val);

  return val;
}

static float4 __ftexfetch(const void *tex, float4 index, int dim)
{
  float4 val;

  __cudaTextureFetch(tex, (void*)&index, 0, (void*)&val);

  return val;
}
# 4860 "/home/normal/cuda/bin/../include/device_functions.h" 2 3
# 945 "/home/normal/cuda/bin/../include/math_functions.h" 2 3


static int __cuda___signbitf(float a)
{
  return (int)((unsigned int)__float_as_int(a) >> 31);
}




static float __cuda_copysignf(float a, float b)
{
  return __int_as_float((__float_as_int(b) & 0x80000000) |
                        (__float_as_int(a) & ~0x80000000));
}
# 969 "/home/normal/cuda/bin/../include/math_functions.h" 3
extern __attribute__((__weak__)) int min(int a, int b); int min(int a, int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) unsigned int umin(unsigned int a, unsigned int b); unsigned int umin(unsigned int a, unsigned int b)
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
# 1055 "/home/normal/cuda/bin/../include/math_functions.h" 3
static float __internal_nearbyintf(float a)
{
  float fa = fabsf(a);

  if (fa >= 8388608.0f) {
    return a;
  } else {
    volatile float u = 8388608.0f + fa;

    u = u - 8388608.0f;
    return copysignf(u, a);
  }
}

static float __internal_fminf(float a, float b)
{
  volatile union {
    float f;
    unsigned int i;
  } cvta, cvtb;
  int nana, nanb;

  cvta.f = a;
  cvtb.f = b;
  nana = ((cvta.i << 1) > 0xff000000);
  nanb = ((cvtb.i << 1) > 0xff000000);
  if (nana && nanb) return a + b;
  if (nana) return b;
  if (nanb) return a;
  if ((cvta.i | cvtb.i) == 0x80000000) {
    return __int_as_float(0x80000000);
  }
  return a < b ? a : b;
}

static float __internal_fmaxf(float a, float b)
{
  volatile union {
    float f;
    unsigned int i;
  } cvta, cvtb;
  int nana, nanb;

  cvta.f = a;
  cvtb.f = b;
  nana = ((cvta.i << 1) > 0xff000000);
  nanb = ((cvtb.i << 1) > 0xff000000);
  if (nana && nanb) return a + b;
  if (nana) return b;
  if (nanb) return a;
  if ((cvta.f == 0.0f) && (cvtb.f == 0.0f)) {
    cvta.i &= cvtb.i;
    return cvta.f;
  }
  return a > b ? a : b;
}
# 1151 "/home/normal/cuda/bin/../include/math_functions.h" 3
static long int __cuda_labs(long int a)
{
  return labs(a);
}

static float __cuda_ceilf(float a)
{
  return ceilf(a);
}

static float __cuda_floorf(float a)
{
  return floorf(a);
}

static float __cuda_sqrtf(float a)
{
  return sqrtf(a);
}

static float __cuda_rsqrtf(float a)
{
  return 1.0f / sqrtf(a);
}

static float __cuda_truncf(float a)
{
  return truncf(a);
}

static int __cuda_max(int a, int b)
{
  return max(a, b);
}

static int __cuda_min(int a, int b)
{
  return min(a, b);
}

static unsigned int __cuda_umax(unsigned int a, unsigned int b)
{
  return umax(a, b);
}

static unsigned int __cuda_umin(unsigned int a, unsigned int b)
{
  return umin(a, b);
}

static long long int __cuda_llrintf(float a)
{



  return __float2ll_rn(a);

}

static long int __cuda_lrintf(float a)
{




  return (long int)__cuda_llrintf(a);




}

static float __cuda_nearbyintf(float a)
{





  return __internal_nearbyintf(a);

}

static float __cuda_fmaxf(float a, float b)
{





  return __internal_fmaxf(a, b);

}

static float __cuda_fminf(float a, float b)
{





  return __internal_fminf(a, b);

}
# 1272 "/home/normal/cuda/bin/../include/math_functions.h" 3
static int __cuda___finitef(float a)
{
  return __cuda_fabsf(a) < __int_as_float(0x7f800000);
}
# 1286 "/home/normal/cuda/bin/../include/math_functions.h" 3
static int __cuda___isinff(float a)
{
  return __cuda_fabsf(a) == __int_as_float(0x7f800000);
}

static int __cuda___isnanf(float a)
{
  return !(__cuda_fabsf(a) <= __int_as_float(0x7f800000));
}

static float __cuda_nextafterf(float a, float b)
{
  unsigned int ia;
  unsigned int ib;
  ia = __float_as_int(a);
  ib = __float_as_int(b);




  if (__cuda___isnanf(a) || __cuda___isnanf(b)) return a + b;
  if (__int_as_float (ia | ib) == 0.0f) return __int_as_float(ib);





  if (__int_as_float(ia) == 0.0f) {
    return __cuda_copysignf(__int_as_float(0x00000001), b);
  }

  if ((a < b) && (a < 0.0f)) ia--;
  if ((a < b) && (a > 0.0f)) ia++;
  if ((a > b) && (a < 0.0f)) ia++;
  if ((a > b) && (a > 0.0f)) ia--;
  a = __int_as_float(ia);





  return a;
}

static float __cuda_nanf(const char *tagp)
{

  return __int_as_float(0x7fffffff);
}

static float __internal_fmad(float a, float b, float c)
{
  return a * b + c;
}


static float __internal_atanhf_kernel(float a_1, float a_2)
{
  float a, a2, t;

  a = a_1 + a_2;
  a2 = a * a;
  t = 1.566305595598990E-001f/64.0f;
  t = __internal_fmad (t, a2, 1.995081856004762E-001f/16.0f);
  t = __internal_fmad (t, a2, 3.333382699617026E-001f/4.0f);
  t = t * a2;
  t = __internal_fmad (t, a, a_2);
  t = t + a_1;
  return t;
}




static float __internal_atanf_kernel(float a)
{
  float t4, t0, t1;

  t4 = a * a;
  t0 = -5.674867153f;
  t0 = __internal_fmad (t4, -0.823362947f, t0);
  t0 = __internal_fmad (t0, t4, -6.565555096f);
  t0 = t0 * t4;
  t0 = t0 * a;
  t1 = t4 + 11.33538818f;
  t1 = __internal_fmad (t1, t4, 28.84246826f);
  t1 = __internal_fmad (t1, t4, 19.69667053f);
  t1 = 1.0f / t1;
  a = __internal_fmad (t0, t1, a);
  return a;
}


static float __internal_tan_kernel(float a)
{
  float a2, s, t;

  a2 = a * a;
  t = __internal_fmad (4.114678393115178E-003f, a2, -8.231194034909670E-001f);
  s = a2 - 2.469348886157666E+000f;
  s = 1.0f / s;
  t = t * s;
  t = t * a2;
  t = __internal_fmad (t, a, a);
  return t;
}

static float __internal_accurate_logf(float a)
{
  float t;
  float z;
  float m;
  int ia, e;
  ia = __float_as_int(a);

  if ((ia < 0x00800000) || (ia > 0x7f7fffff)) {
    return __logf(a);
  }

  m = __int_as_float((ia & 0x807fffff) | 0x3f800000);
  e = ((unsigned)ia >> 23) - 127;
  if (m > 1.414213562f) {
    m = m * 0.5f;
    e = e + 1;
  }
  t = m - 1.0f;
  z = m + 1.0f;
  z = __fdividef (t, z);
  z = -t * z;
  z = __internal_atanhf_kernel(t, z);
  z = __internal_fmad ((float)e, 0.693147181f, z);
  return z;
}

static float2 __internal_log_ep(float a)
{
  float2 res;
  int expo;
  float m;
  float log_hi, log_lo;
  float t_hi, t_lo;
  float f, g, u, v, q;



  float r, s, e;

  expo = (__float_as_int(a) >> 23) & 0xff;


  if (expo == 0) {
    a *= 16777216.0f;
    expo = (__float_as_int(a) >> 23) & 0xff;
    expo -= 24;
  }

  expo -= 127;
  m = __int_as_float((__float_as_int(a) & 0x807fffff) | 0x3f800000);
  if (m > 1.414213562f) {
    m = m * 0.5f;
    expo = expo + 1;
  }






  f = m - 1.0f;
  g = m + 1.0f;
  g = 1.0f / g;
  u = 2.0f * f * g;
  v = u * u;
  q = 1.49356810919559350E-001f/64.0f;
  q = __internal_fmad (q, v, 1.99887797540072460E-001f/16.0f);
  q = __internal_fmad (q, v, 3.33333880955515580E-001f/4.0f);
  q = q * v;
  q = q * u;
  log_hi = __int_as_float(__float_as_int(u) & 0xfffff000);
  v = __int_as_float(__float_as_int(f) & 0xfffff000);
  u = 2.0f * (f - log_hi);
  f = f - v;
  u = __internal_fmad (-log_hi, v, u);
  u = __internal_fmad (-log_hi, f, u);
  u = g * u;



  r = log_hi + u;
  s = u - (r - log_hi);
  log_hi = r;
  log_lo = s;

  r = log_hi + q;
  s = ((log_hi - r) + q) + log_lo;
  log_hi = e = r + s;
  log_lo = (r - e) + s;


  t_hi = expo * 0.6931457519f;
  t_lo = expo * 1.4286067653e-6f;


  r = t_hi + log_hi;
  s = (((t_hi - r) + log_hi) + log_lo) + t_lo;
  res.y = e = r + s;
  res.x = (r - e) + s;
  return res;
}

static float __internal_accurate_log2f(float a)
{
  return 1.442695041f * __internal_accurate_logf(a);
}




static float2 __internal_dsmul (float2 x, float2 y)
{
    float2 z;

    volatile float up, vp, u1, u2, v1, v2, mh, ml;



    up = x.y * 4097.0f;
    u1 = (x.y - up) + up;
    u2 = x.y - u1;
    vp = y.y * 4097.0f;
    v1 = (y.y - vp) + vp;
    v2 = y.y - v1;
    mh = __fmul_rn(x.y,y.y);
    ml = (((u1 * v1 - mh) + u1 * v2) + u2 * v1) + u2 * v2;
    ml = (__fmul_rn(x.y,y.x) + __fmul_rn(x.x,y.y)) + ml;
    z.y = up = mh + ml;
    z.x = (mh - up) + ml;
    return z;
}


static unsigned int __cudart_i2opi_f [] = {
  0x3c439041,
  0xdb629599,
  0xf534ddc0,
  0xfc2757d1,
  0x4e441529,
  0xa2f9836e,
};


static float __internal_trig_reduction_kernel(float a, int *quadrant)
{
  float j;
  int q;
  if (__cuda_fabsf(a) > 48039.0f) {

    unsigned int ia = __float_as_int(a);
    unsigned int s = ia & 0x80000000;
    unsigned int result[7];
    unsigned int phi, plo;
    unsigned int hi, lo;
    unsigned int e;
    int idx;
    e = ((ia >> 23) & 0xff) - 128;
    ia = (ia << 8) | 0x80000000;

    idx = 4 - (e >> 5);
    hi = 0;



    for (q = 0; q < 6; q++) {
      plo = __cudart_i2opi_f[q] * ia;
      phi = __umulhi (__cudart_i2opi_f[q], ia);
      lo = hi + plo;
      hi = phi + (lo < plo);
      result[q] = lo;
    }
    result[q] = hi;
    e = e & 31;



    hi = result[idx+2];
    lo = result[idx+1];
    if (e) {
      q = 32 - e;
      hi = (hi << e) + (lo >> q);
      lo = (lo << e) + (result[idx] >> q);
    }
    q = hi >> 30;

    hi = (hi << 2) + (lo >> 30);
    lo = (lo << 2);
    e = (hi + (lo > 0)) > 0x80000000;
    q += e;
    if (s) q = -q;
    if (e) {
      unsigned int t;
      hi = ~hi;
      lo = -(int)lo;
      t = (lo == 0);
      hi += t;
      s = s ^ 0x80000000;
    }
    *quadrant = q;

    e = 0;
    while ((int)hi > 0) {
      hi = (hi << 1) + (lo >> 31);
      lo = (lo << 1);
      e--;
    }
    lo = hi * 0xc90fdaa2;
    hi = __umulhi(hi, 0xc90fdaa2);
    if ((int)hi > 0) {
      hi = (hi << 1) + (lo >> 31);
      lo = (lo << 1);
      e--;
    }
    hi = hi + (lo > 0);
    ia = s | (((e + 126) << 23) + (hi >> 8) + ((hi << 24) >= 0x80000000));
    return __int_as_float(ia);
  }
  q = __float2int_rn (a * 0.636619772f);
  j = (float)q;
  a = __internal_fmad (-j, 1.5703125000000000e+000f, a);
  a = __internal_fmad (-j, 4.8351287841796875e-004f, a);
  a = __internal_fmad (-j, 3.1385570764541626e-007f, a);
  a = __internal_fmad (-j, 6.0771005065061922e-011f, a);
  *quadrant = q;
  return a;
}
# 1630 "/home/normal/cuda/bin/../include/math_functions.h" 3
static float __internal_expf_kernel(float a, float scale)
{
  float j, z;

  j = __cuda_truncf(a * 1.442695041f);
  z = __internal_fmad (j, -0.6931457519f, a);
  z = __internal_fmad (j, -1.4286067653e-6f, z);
  z = z * 1.442695041f;
  z = __cuda_exp2f(z) * __cuda_exp2f(j + scale);
  return z;
}

static float __internal_accurate_expf(float a)
{
  float z;

  z = __internal_expf_kernel(a, 0.0f);
  if (a < -105.0f) z = 0.0f;
  if (a > 105.0f) z = __int_as_float(0x7f800000);
  return z;
}

static float __internal_accurate_exp10f(float a)
{
  float j, z;

  j = __cuda_truncf(a * 3.321928094f);
  z = __internal_fmad (j, -3.0102920532226563e-001f, a);
  z = __internal_fmad (j, -7.9034171557301747e-007f, z);
  z = z * 3.321928094f;
  z = __cuda_exp2f(z) * __cuda_exp2f(j);
  if (a < -46.0f) z = 0.0f;
  if (a > 46.0f) z = __int_as_float(0x7f800000);
  return z;
}

static float __internal_lgammaf_pos(float a)
{
  float sum;
  float s, t;

  if (a == __int_as_float(0x7f800000)) {
    return a;
  }
  if (a >= 3.0f) {
    if (a >= 7.8f) {



      s = 1.0f / a;
      t = s * s;
      sum = 0.77783067e-3f;
      sum = __internal_fmad (sum, t, -0.2777655457e-2f);
      sum = __internal_fmad (sum, t, 0.83333273853e-1f);
      sum = __internal_fmad (sum, s, 0.918938533204672f);
      s = 0.5f * __internal_accurate_logf(a);
      t = a - 0.5f;
      s = s * t;
      t = s - a;
      s = __fadd_rn(s, sum);
      t = t + s;
      return t;
    } else {
      a = a - 3.0f;
      s = -7.488903254816711E+002f;
      s = __internal_fmad (s, a, -1.234974215949363E+004f);
      s = __internal_fmad (s, a, -4.106137688064877E+004f);
      s = __internal_fmad (s, a, -4.831066242492429E+004f);
      s = __internal_fmad (s, a, -1.430333998207429E+005f);
      t = a - 2.592509840117874E+002f;
      t = __internal_fmad (t, a, -1.077717972228532E+004f);
      t = __internal_fmad (t, a, -9.268505031444956E+004f);
      t = __internal_fmad (t, a, -2.063535768623558E+005f);
      t = __fdividef (s, t);
      t = t + a;
      return t;
    }
  } else if (a >= 1.5f) {
    a = a - 2.0f;
    t = 4.959849168282574E-005f;
    t = __internal_fmad (t, a, -2.208948403848352E-004f);
    t = __internal_fmad (t, a, 5.413142447864599E-004f);
    t = __internal_fmad (t, a, -1.204516976842832E-003f);
    t = __internal_fmad (t, a, 2.884251838546602E-003f);
    t = __internal_fmad (t, a, -7.382757963931180E-003f);
    t = __internal_fmad (t, a, 2.058131963026755E-002f);
    t = __internal_fmad (t, a, -6.735248600734503E-002f);
    t = __internal_fmad (t, a, 3.224670187176319E-001f);
    t = __internal_fmad (t, a, 4.227843368636472E-001f);
    t = t * a;
    return t;
  } else if (a >= 0.7f) {
    a = 1.0f - a;
    t = 4.588266515364258E-002f;
    t = __internal_fmad (t, a, 1.037396712740616E-001f);
    t = __internal_fmad (t, a, 1.228036339653591E-001f);
    t = __internal_fmad (t, a, 1.275242157462838E-001f);
    t = __internal_fmad (t, a, 1.432166835245778E-001f);
    t = __internal_fmad (t, a, 1.693435824224152E-001f);
    t = __internal_fmad (t, a, 2.074079329483975E-001f);
    t = __internal_fmad (t, a, 2.705875136435339E-001f);
    t = __internal_fmad (t, a, 4.006854436743395E-001f);
    t = __internal_fmad (t, a, 8.224669796332661E-001f);
    t = __internal_fmad (t, a, 5.772156651487230E-001f);
    t = t * a;
    return t;
  } else {
    t = 3.587515669447039E-003f;
    t = __internal_fmad (t, a, -5.471285428060787E-003f);
    t = __internal_fmad (t, a, -4.462712795343244E-002f);
    t = __internal_fmad (t, a, 1.673177015593242E-001f);
    t = __internal_fmad (t, a, -4.213597883575600E-002f);
    t = __internal_fmad (t, a, -6.558672843439567E-001f);
    t = __internal_fmad (t, a, 5.772153712885004E-001f);
    t = t * a;
    t = __internal_fmad (t, a, a);
    return -__internal_accurate_logf(t);
  }
}


static float __internal_sin_kernel(float x)
{
  float x2, z;

  x2 = x * x;
  z = -1.95152959e-4f;
  z = __internal_fmad (z, x2, 8.33216087e-3f);
  z = __internal_fmad (z, x2, -1.66666546e-1f);
  z = z * x2;
  z = __internal_fmad (z, x, x);
  return z;
}


static float __internal_cos_kernel(float x)
{
  float x2, z;

  x2 = x * x;
  z = 2.44331571e-5f;
  z = __internal_fmad (z, x2, -1.38873163e-3f);
  z = __internal_fmad (z, x2, 4.16666457e-2f);
  z = __internal_fmad (z, x2, -5.00000000e-1f);
  z = __internal_fmad (z, x2, 1.00000000e+0f);
  return z;
}

static float __internal_accurate_sinf(float a)
{
  float z;
  int i;

  if ((__cuda___isinff(a)) || (a == 0.0f)) {
    return __fmul_rn (a, 0.0f);
  }
  z = __internal_trig_reduction_kernel(a, &i);

  if (i & 1) {
    z = __internal_cos_kernel(z);
  } else {
    z = __internal_sin_kernel(z);
  }
  if (i & 2) {
    z = -z;
  }
  return z;
}







static float __cuda_rintf(float a)
{



  return __cuda_nearbyintf(a);

}

static float __cuda_sinf(float a)
{





  return __internal_accurate_sinf(a);

}

static float __cuda_cosf(float a)
{





  float z;
  int i;

  if (__cuda___isinff(a)) {
    return __fadd_rn (a, -a);
  }
  z = __internal_trig_reduction_kernel(a, &i);

  i++;
  if (i & 1) {
    z = __internal_cos_kernel(z);
  } else {
    z = __internal_sin_kernel(z);
  }
  if (i & 2) {
    z = -z;
  }
  return z;

}

static float __cuda_tanf(float a)
{





  float z;
  int i;

  if (__cuda___isinff(a)) {
    return __int_as_float(0x7fffffff);
  }
  z = __internal_trig_reduction_kernel(a, &i);

  z = __internal_tan_kernel(z);
  if (i & 1) {
    z = - (1.0f / z);
  }
  return z;

}

static float __cuda_log2f(float a)
{





  return __internal_accurate_log2f(a);

}

static float __cuda_expf(float a)
{





  return __internal_accurate_expf(a);

}

static float __cuda_exp10f(float a)
{





  return __internal_accurate_exp10f(a);

}

static float __cuda_coshf(float a)
{
  float z;

  a = __cuda_fabsf(a);
  z = __internal_expf_kernel(a, -2.0f);
  z = __internal_fmad (2.0f, z, __fdividef (0.125f, z));
  if (a >= 90.0f) {
    z = __int_as_float(0x7f800000);
  }
  return z;
}

static float __cuda_sinhf(float a)
{
  float s, z;

  s = a;
  a = __cuda_fabsf(a);
  if (a < 1.0f) {
    float a2 = a * a;

    z = 2.816951222e-6f;
    z = __internal_fmad (z, a2, 1.983615978e-4f);
    z = __internal_fmad (z, a2, 8.333350058e-3f);
    z = __internal_fmad (z, a2, 1.666666650e-1f);
    z = z * a2;
    z = __internal_fmad (z, a, a);
  } else {
    z = __internal_expf_kernel(a, -2.0f);
    z = __internal_fmad (2.0f, z, -__fdividef (0.125f, z));
    if (a >= 90.0f) {
      z = __int_as_float(0x7f800000);
    }
  }
  return __cuda_copysignf(z, s);
}

static float __cuda_tanhf(float a)
{
  float s, t;

  t = __cuda_fabsf(a);
  if (t < 0.55f) {
    float z, z2;
    z = t;
    z2 = z * z;
    t = 1.643758066599993e-2f;
    t = __internal_fmad (t, z2, -5.267181327760551e-2f);
    t = __internal_fmad (t, z2, 1.332072505223051e-1f);
    t = __internal_fmad (t, z2, -3.333294663641083e-1f);
    t = t * z2;
    s = __internal_fmad (t, z, z);
  } else {
    s = 1.0f - __fdividef(2.0f,(__internal_expf_kernel(2.0f * t, 0.0f)+1.0f));
    if (t >= 88.0f) {
      s = 1.0f;
    }
  }
  return __cuda_copysignf(s, a);
}

static float __cuda_atan2f(float a, float b)
{



  float t0, t1, t3, fa, fb;



  fb = __cuda_fabsf(b);
  fa = __cuda_fabsf(a);

  if (fa == 0.0f && fb == 0.0f) {
    t3 = __cuda___signbitf(b) ? 3.141592654f : 0;
  } else if ((fa == __int_as_float(0x7f800000)) && (fb == __int_as_float(0x7f800000))) {
    t3 = __cuda___signbitf(b) ? 2.356194490f : 0.785398163f;
  } else {

    if (fb < fa) {
      t0 = fa;
      t1 = fb;
    } else {
      t0 = fb;
      t1 = fa;
    }
    t3 = __internal_accurate_fdividef(t1, t0);
    t3 = __internal_atanf_kernel(t3);

    if (fa > fb) t3 = 1.570796327f - t3;
    if (b < 0.0f) t3 = 3.141592654f - t3;
  }
  t3 = __cuda_copysignf(t3, a);

  return t3;

}

static float __cuda_atanf(float a)
{
  float t0, t1;


  t0 = __cuda_fabsf(a);
  t1 = t0;
  if (t0 > 1.0f) {
    t1 = 1.0f / t1;
  }

  t1 = __internal_atanf_kernel(t1);

  if (t0 > 1.0f) {
    t1 = 1.570796327f - t1;
  }
  return __cuda_copysignf(t1, a);
}


static float __internal_asinf_kernel(float a)
{
  float t2, t3, t4;

  t2 = a * a;
  t3 = -0.501162291f;
  t3 = __internal_fmad (t3, t2, 0.915201485f);
  t3 = t3 * t2;
  t3 = t3 * a;
  t4 = t2 - 5.478654385f;
  t4 = __internal_fmad (t4, t2, 5.491230488f);
  t4 = 1.0f / t4;
  a = __internal_fmad (t3, t4, a);
  return a;
}

static float __cuda_asinf(float a)
{
  float t0, t1, t2;

  t0 = __cuda_fabsf(a);
  t2 = 1.0f - t0;
  t2 = 0.5f * t2;
  t2 = __cuda_sqrtf(t2);
  t1 = t0 > 0.575f ? t2 : t0;
  t1 = __internal_asinf_kernel(t1);
  t2 = __internal_fmad (-2.0f, t1, 1.570796327f);
  if (t0 > 0.575f) {
    t1 = t2;
  }
  return __cuda_copysignf(t1, a);
}

static float __cuda_acosf(float a)
{
  float t0, t1, t2;

  t0 = __cuda_fabsf(a);
  t2 = 1.0f - t0;
  t2 = 0.5f * t2;
  t2 = __cuda_sqrtf(t2);
  t1 = t0 > 0.575f ? t2 : t0;
  t1 = __internal_asinf_kernel(t1);
  t1 = t0 > 0.575f ? 2.0f * t1 : 1.570796327f - t1;
  if (__cuda___signbitf(a)) {
    t1 = 3.141592654f - t1;
  }
  return t1;
}

static float __cuda_logf(float a)
{





  return __internal_accurate_logf(a);

}

static float __cuda_log10f(float a)
{





  return 0.434294482f * __internal_accurate_logf(a);

}

static float __cuda_log1pf(float a)
{



  float t;




  if (a >= -0.394f && a <= 0.65f) {

    t = a + 2.0f;
    t = __fdividef (a, t);
    t = -a * t;
    t = __internal_atanhf_kernel (a, t);
  } else {
    t = __internal_accurate_logf (1.0f + a);
  }
  return t;

}

static float __cuda_acoshf(float a)
{



  float t;

  t = a - 1.0f;
  if (__cuda_fabsf(t) > 8388608.0f) {

    return 0.693147181f + __internal_accurate_logf(a);
  } else {
    t = t + __cuda_sqrtf(__internal_fmad (a, t, t));
    return __cuda_log1pf(t);
  }

}

static float __cuda_asinhf(float a)
{



  float fa, oofa, t;

  fa = __cuda_fabsf(a);
  if (fa > 8.507059173e37f) {
    t = 0.693147181f + __logf(fa);
  } else {
    oofa = 1.0f / fa;
    t =fa+__fdividef (fa,(oofa+__cuda_sqrtf(__internal_fmad(oofa,oofa,1.0f))));
    t = __cuda_log1pf(t);
  }
  return __cuda_copysignf(t, a);

}

static float __cuda_atanhf(float a)
{



  float fa, t;

  fa = __cuda_fabsf(a);
  t = __fdividef ((2.0f * fa), (1.0f - fa));
  t = 0.5f * __cuda_log1pf(t);
  return __cuda_copysignf(t, a);

}

static float __cuda_expm1f(float a)
{
  float t, z, j, u;

  t = __cuda_rintf (a * 1.442695041f);
  z = __internal_fmad (-t, 0.6931457519f, a);
  z = __internal_fmad (-t, 1.4286067653e-6f, z);

  if (__cuda_fabsf(a) < 0.41f) {
    z = a;
    t = 0.0f;
  }

  j = t;
  if (t == 128.0f) j = j - 1.0f;

  u = 1.38795078474044430E-003f;
  u = __internal_fmad (u, z, 8.38241261853264930E-003f);
  u = __internal_fmad (u, z, 4.16678317762833940E-002f);
  u = __internal_fmad (u, z, 1.66663978874356580E-001f);
  u = __internal_fmad (u, z, 4.99999940395997040E-001f);
  u = u * z;
  u = __internal_fmad (u, z, z);
  if (a == 0.0f) u = a;

  z = __cuda_exp2f (j);
  a = z - 1.0f;
  if (a != 0.0f) u = __internal_fmad (u, z, a);
  if (t == 128.0f) u = u + u;

  if (j > 128.0f) u = __int_as_float(0x7f800000);
  if (j < -25.0f) u = -1.0f;
  return u;
}

static float __cuda_hypotf(float a, float b)
{



  float v, w, t;

  a = __cuda_fabsf(a);
  b = __cuda_fabsf(b);

  if (a > b) {
    v = a;
    w = b;
  } else {
    v = b;
    w = a;
  }
  t = __internal_accurate_fdividef(w, v);
  t = __internal_fmad (t, t, 1.0f);
  t = v * __cuda_sqrtf(t);
  if (v == 0.0f) {
    t = v + w;
  }
  if ((v == __int_as_float(0x7f800000)) || (w == __int_as_float(0x7f800000))) {
    t = __int_as_float(0x7f800000);
  }
  return t;

}

static float __cuda_cbrtf(float a)
{



  float s, t;

  s = __cuda_fabsf(a);
  if ((a == 0.0f) || (s == __int_as_float(0x7f800000))) {
    return a;
  }
  t = __cuda_exp2f(0.333333333f * __log2f(s));
  t = t-(t-(__fdividef(s,(t*t))))*0.333333333f;
  if (__cuda___signbitf(a)) {
    t = -t;
  }
  return t;

}

static float __cuda_erff(float a)
{
  float t, r, q;

  t = __cuda_fabsf(a);
  if (t < 1.0f) {
    t = t * t;
    r = -5.58510127926029810E-004f;
    r = __internal_fmad (r, t, 4.90688891415893070E-003f);
    r = __internal_fmad (r, t, -2.67027980930150640E-002f);
    r = __internal_fmad (r, t, 1.12799056505903940E-001f);
    r = __internal_fmad (r, t, -3.76122956138427440E-001f);
    r = __internal_fmad (r, t, 1.12837911712623450E+000f);
    a = a * r;
  } else if (t <= __int_as_float(0x7f800000)) {



    q = __internal_fmad (t, 0.3275911f, 1.0f);
    q = 1.0f / q;
    r = 1.061405429f;
    r = __internal_fmad (r, q, -1.453152027f);
    r = __internal_fmad (r, q, 1.421413741f);
    r = __internal_fmad (r, q, -0.284496736f);
    r = __internal_fmad (r, q, 0.254829592f);
    r = r * q;
    q = __internal_expf_kernel(-a * a, 0.0f);
    r = __internal_fmad (-q, r, 1.0f);
    if (t >= 5.5f) {
      r = 1.0f;
    }
    a = __int_as_float (__float_as_int(r) | (__float_as_int(a) & 0x80000000));
  }
  return a;
}

static float __cuda_erfinvf (float a)
{
  float fa, t;

  fa = fabsf(a);
  if (fa >= 1.0f) {
    t = __cuda_rsqrtf (__int_as_float (0xffc00000));
    if (fa == 1.0f) {
      t = a * __int_as_float(0x7f800000);
    }
  } else if (fa > 0.9375f) {




    float p, q;

    t = __cuda_log1pf(-fa);
    t = __cuda_rsqrtf(-t);
    p = -1.64441567910e-1f;
    p = __internal_fmad (p, t, 6.80544246825e-1f);
    p = __internal_fmad (p, t, -1.12808139162e+0f);
    p = __internal_fmad (p, t, 6.90969348887e-1f);
    p = __internal_fmad (p, t, 1.38271964963e+0f);
    p = __internal_fmad (p, t, 1.55047000312e-1f);
    q = t + 1.38522814199e+0f;
    q = __internal_fmad (q, t, 1.55024849822e-1f);
    q = q * t;
    t = __fdividef (p, q);
    if (a < 0.0f) t = -t;
  } else if (fa > 0.75f) {




    float p, q;

    t = __internal_fmad (a, a, -0.87890625f);
    p = -7.1986748896e+0f;
    p = __internal_fmad (p, t, +1.3411974175e+1f);
    p = __internal_fmad (p, t, -5.1381573203e+0f);
    p = __internal_fmad (p, t, 4.9633374831e-1f);
    q = t -1.1436535838e+1f;
    q = __internal_fmad (q, t, 1.3568885572e+1f);
    q = __internal_fmad (q, t, -4.1747509256e+0f);
    q = __internal_fmad (q, t, 3.5327242323e-1f);
    p = __fdividef (p, q);
    t = a * p;
  } else {
    float a2;

    a2 = a * a;
    t = 6.1046168794766742E-001f;
    t = __internal_fmad (t, a2, -8.9504882462753121E-001f);
    t = __internal_fmad (t, a2, 7.0224162369928511E-001f);
    t = __internal_fmad (t, a2, -1.9993784895823222E-001f);
    t = __internal_fmad (t, a2, 1.1920613463949599E-001f);
    t = __internal_fmad (t, a2, 8.0131492246997685E-002f);
    t = __internal_fmad (t, a2, 1.2793154958377403E-001f);
    t = __internal_fmad (t, a2, 2.3200529172828793E-001f);
    t = __internal_fmad (t, a2, 8.8622695604694379E-001f);
    t = t * a;
  }
  return t;
}

static float __cuda_erfcf(float a)
{
  if (a <= 0.55f) {
    return 1.0f - __cuda_erff(a);
  } else if (a > 10.0f) {
    return 0.0f;
  } else {
    float p;
    float q;
    float h;
    float l;




    p = 4.014893410762552E-006f;
    p = __internal_fmad (p, a, 5.640401259462436E-001f);
    p = __internal_fmad (p, a, 2.626649872281140E+000f);
    p = __internal_fmad (p, a, 5.486372652389673E+000f);
    p = __internal_fmad (p, a, 5.250714831459401E+000f);
    q = a + 4.651376250488319E+000f;
    q = __internal_fmad (q, a, 1.026302828878470E+001f);
    q = __internal_fmad (q, a, 1.140762166021288E+001f);
    q = __internal_fmad (q, a, 5.251211619089947E+000f);

    h = 1.0f / q;
    q = __internal_fmad (-q * h, h, 2.0f * h);
    p = p * q;

    h = __int_as_float(__float_as_int(a) & 0xfffff000);
    l = __fadd_rn (a, -h);
    q = __fmul_rn (-h, h);
    q = __internal_expf_kernel(q, 0.0f);
    a = a + h;
    l = l * a;
    h = __internal_expf_kernel(-l, 0.0f);
    q = q * h;
    p = p * q;
    return p;
  }
}

static float __cuda_erfcinvf (float a)
{
  float t;
  if (a <= 0.0f) {
    t = __int_as_float(0x7fffffff);
    if (a == 0.0f) {
      t = (1.0f - a) * __int_as_float(0x7f800000);
    }
  }
  else if (a >= 0.0625f) {
    t = __cuda_erfinvf (1.0f - a);
  }
  else {
    float p, q;
    t = __cuda_logf(a);
    t = __cuda_rsqrtf(-t);
    p = -1.64441567910e-1f;
    p = __internal_fmad (p, t, 6.80544246825e-1f);
    p = __internal_fmad (p, t, -1.12808139162e+0f);
    p = __internal_fmad (p, t, 6.90969348887e-1f);
    p = __internal_fmad (p, t, 1.38271964963e+0f);
    p = __internal_fmad (p, t, 1.55047000312e-1f);
    q = t + 1.38522814199e+0f;
    q = __internal_fmad (q, t, 1.55024849822e-1f);
    q = q * t;
    t = __fdividef (p, q);
  }
  return t;
}

static float __cuda_lgammaf(float a)
{
  float t;
  float i;
  int quot;
  t = __internal_lgammaf_pos(__cuda_fabsf(a));
  if (a >= 0.0f) return t;
  a = __cuda_fabsf(a);
  i = __cuda_floorf(a);
  if (a == i) return __int_as_float(0x7f800000);
  if (a < 1e-19f) return -__internal_accurate_logf(a);
  i = __cuda_rintf (2.0f * a);
  quot = (int)i;
  i = __internal_fmad (-i, 0.5f, a);
  i = i * 3.141592654f;
  if (quot & 1) {
    i = __internal_cos_kernel(i);
  } else {
    i = __internal_sin_kernel(i);
  }
  i = __cuda_fabsf(i);
  t = 1.144729886f - __internal_accurate_logf(i * a) - t;
  return t;
}

static float __cuda_ldexpf(float a, int b)
{



  float fa = __cuda_fabsf(a);

  if ((fa == 0.0f) || (fa == __int_as_float(0x7f800000)) || (b == 0)) {
    if (!(fa > 0.0f)) a = a + a;
    return a;
  } else if (__cuda_abs(b) < 126) {
    return a * __cuda_exp2f((float)b);
  } else if (__cuda_abs(b) < 252) {
    int bhalf = b / 2;
    return a * __cuda_exp2f((float)bhalf) * __cuda_exp2f((float)(b - bhalf));
  } else {
    int bquarter = b / 4;
    float t = __cuda_exp2f((float)bquarter);
    return a * t * t * t * __cuda_exp2f((float)(b - 3 * bquarter));
  }

}

static float __cuda_scalbnf(float a, int b)
{




  return __cuda_ldexpf(a, b);

}

static float __cuda_scalblnf(float a, long int b)
{



  int t;
  if (b > 2147483647L) {
    t = 2147483647;
  } else if (b < (-2147483647 - 1)) {
    t = (-2147483647 - 1);
  } else {
    t = (int)b;
  }
  return __cuda_scalbnf(a, t);

}

static float __cuda_frexpf(float a, int *b)
{
  float fa = __cuda_fabsf(a);
  unsigned int expo;
  unsigned int denorm;

  if (fa < 1.175494351e-38f) {
    a *= 16777216.0f;
    denorm = 24;
  } else {
    denorm = 0;
  }
  expo = ((__float_as_int(a) >> 23) & 0xff);
  if ((fa == 0.0f) || (expo == 0xff)) {
    expo = 0;
    a = a + a;
  } else {
    expo = expo - denorm - 126;
    a = __int_as_float(((__float_as_int(a) & 0x807fffff) | 0x3f000000));
  }
  *b = expo;
  return a;
}

static float __cuda_modff(float a, float *b)
{



  float t;
  if (__cuda___finitef(a)) {
    t = __cuda_truncf(a);
    *b = t;
    t = a - t;
    return __cuda_copysignf(t, a);
  } else if (__cuda___isinff(a)) {
    t = 0.0f;
    *b = a;
    return __cuda_copysignf(t, a);
  } else {
    *b = a;
    return a;
  }

}

static float __cuda_fmodf(float a, float b)
{



  float orig_a = a;
  float orig_b = b;
  a = __cuda_fabsf(a);
  b = __cuda_fabsf(b);
  if (!((a <= __int_as_float(0x7f800000)) && (b <= __int_as_float(0x7f800000)))) {
    return orig_a + orig_b;
  }
  if ((a == __int_as_float(0x7f800000)) || (b == 0.0f)) {
    return __cuda_rsqrtf (__int_as_float (0xffc00000));
  } else if (a >= b) {


    int expoa = (a < 1.175494351e-38f) ?
        ((int)__log2f(a)) : (((__float_as_int(a) >> 23) & 0xff) - 127);
    int expob = (b < 1.175494351e-38f) ?
        ((int)__log2f(b)) : (((__float_as_int(b) >> 23) & 0xff) - 127);
    int scale = expoa - expob;
    float scaled_b = __cuda_ldexpf(b, scale);
    if (scaled_b <= 0.5f * a) {
      scaled_b *= 2.0f;
    }







    while (scaled_b >= b) {
      if (a >= scaled_b) {
        a -= scaled_b;
      }
      scaled_b *= 0.5f;
    }
    return __cuda_copysignf(a, orig_a);
  } else {
    if (!(a > 0.0f)) orig_a = orig_a + orig_a;
    return orig_a;
  }

}

static float __cuda_remainderf(float a, float b)
{

  float twoa = 0.0f;
  unsigned int quot0 = 0;
  float orig_a = a;
  float orig_b = b;

  a = __cuda_fabsf(a);
  b = __cuda_fabsf(b);
  if (!((a <= __int_as_float(0x7f800000)) && (b <= __int_as_float(0x7f800000)))) {
    return orig_a + orig_b;
  }
  if ((a == __int_as_float(0x7f800000)) || (b == 0.0f)) {
    return __cuda_rsqrtf (__int_as_float (0xffc00000));
  } else if (a >= b) {

    int expoa = (a < 1.175494351e-38f) ?
        ((int)__log2f(a)) : (((__float_as_int(a) >> 23) & 0xff) - 127);
    int expob = (b < 1.175494351e-38f) ?
        ((int)__log2f(b)) : (((__float_as_int(b) >> 23) & 0xff) - 127);
    int scale = expoa - expob;
    float scaled_b = __cuda_ldexpf(b, scale);
    if (scaled_b <= 0.5f * a) {
      scaled_b *= 2.0f;
    }
# 2638 "/home/normal/cuda/bin/../include/math_functions.h" 3
    while (scaled_b >= b) {
      quot0 = 0;
      if (a >= scaled_b) {
        twoa = (2.0f * a - scaled_b) - scaled_b;
        a -= scaled_b;
        quot0 = 1;
      }
      scaled_b *= 0.5f;
    }
  }


  twoa = 2.0f * a;
  if ((twoa > b) || ((twoa == b) && quot0)) {
    a -= b;
    a = __cuda_copysignf (a, -1.0f);
  }
# 2670 "/home/normal/cuda/bin/../include/math_functions.h" 3
  a = __int_as_float((__float_as_int(orig_a) & 0x80000000)^
                     __float_as_int(a));
  return a;
}

static float __cuda_remquof(float a, float b, int* quo)
{
  float twoa = 0.0f;
  unsigned int quot = 0;
  unsigned int sign;
  float orig_a = a;
  float orig_b = b;


  sign = 0 - (__cuda___signbitf(a) != __cuda___signbitf(b));
  a = __cuda_fabsf(a);
  b = __cuda_fabsf(b);
  if (!((a <= __int_as_float(0x7f800000)) && (b <= __int_as_float(0x7f800000)))) {
    *quo = quot;
    return orig_a + orig_b;
  }
  if ((a == __int_as_float(0x7f800000)) || (b == 0.0f)) {
    *quo = quot;
    return __cuda_rsqrtf (__int_as_float (0xffc00000));
  } else if (a >= b) {


    int expoa = (a < 1.175494351e-38f) ?
        ((int)__log2f(a)) : (((__float_as_int(a) >> 23) & 0xff) - 127);
    int expob = (b < 1.175494351e-38f) ?
        ((int)__log2f(b)) : (((__float_as_int(b) >> 23) & 0xff) - 127);
    int scale = expoa - expob;
    float scaled_b = __cuda_ldexpf(b, scale);
    if (scaled_b <= 0.5f * a) {
      scaled_b *= 2.0f;
    }
# 2723 "/home/normal/cuda/bin/../include/math_functions.h" 3
    while (scaled_b >= b) {
      quot <<= 1;
      if (a >= scaled_b) {
        twoa = (2.0f * a - scaled_b) - scaled_b;
        a -= scaled_b;
        quot += 1;
      }
      scaled_b *= 0.5f;
    }
  }


  twoa = 2.0f * a;
  if ((twoa > b) || ((twoa == b) && (quot & 1))) {
    quot++;
    a -= b;
    a = __cuda_copysignf (a, -1.0f);
  }
# 2758 "/home/normal/cuda/bin/../include/math_functions.h" 3
  a = __int_as_float((__float_as_int(orig_a) & 0x80000000)^
                     __float_as_int(a));
  quot = quot & (~((~0)<<3));
  quot = quot ^ sign;
  quot = quot - sign;
  *quo = quot;
  return a;
}

static float __cuda_fmaf(float a, float b, float c)
{
  return __fmaf_rn(a, b, c);
}

static float __internal_accurate_powf(float a, float b)
{
  float2 loga, prod;



  float t;



  loga = __internal_log_ep(a);


  if (__cuda_fabsf(b) > 1.0e34f) b *= 1.220703125e-4f;
  prod.y = b;
  prod.x = 0.0f;
  prod = __internal_dsmul (prod, loga);


  if (__float_as_int(prod.y) == 0x42b17218) {
    prod.y = __int_as_float(__float_as_int(prod.y) - 1);
    prod.x = prod.x + __int_as_float(0x37000000);
  }


  t = __cuda_expf(prod.y);

  if (t != __int_as_float(0x7f800000)) {



    t = __internal_fmad (t, prod.x, t);
  }
  return t;
}

static float __cuda_powif(float a, int b)
{
  unsigned int e = __cuda_abs(b);
  float r = 1.0f;

  while (1) {
    if ((e & 1) != 0) {
      r = r * a;
    }
    e = e >> 1;
    if (e == 0) {
      return b < 0 ? 1.0f / r : r;
    }
    a = a * a;
  }
}

static double __cuda_powi(double a, int b)
{
  unsigned int e = __cuda_abs(b);
  double r = 1.0;

  while (1) {
    if ((e & 1) != 0) {
      r = r * a;
    }
    e = e >> 1;
    if (e == 0) {
      return b < 0 ? 1.0 / r : r;
    }
    a = a * a;
  }
}

static float __cuda_powf(float a, float b)
{





  int bIsOddInteger;
  float t;
  if (a == 1.0f || b == 0.0f) {
    return 1.0f;
  }
  if (__cuda___isnanf(a) || __cuda___isnanf(b)) {
    return a + b;
  }
  if (a == __int_as_float(0x7f800000)) {
    return __cuda___signbitf(b) ? 0.0f : __int_as_float(0x7f800000);
  }
  if (__cuda___isinff(b)) {
    if (a == -1.0f) {
      return 1.0f;
    }
    t = (__cuda_fabsf(a) > 1.0f) ? __int_as_float(0x7f800000) : 0.0f;
    if (b < 0.0f) {
      t = 1.0f / t;
    }
    return t;
  }
  bIsOddInteger = (b - (2.0f * floorf(0.5f * b))) == 1.0f;
  if (a == 0.0f) {
    t = bIsOddInteger ? a : 0.0f;
    if (b < 0.0f) {
      t = 1.0f / t;
    }
    return t;
  }
  if (a == -__int_as_float(0x7f800000)) {
    t = - ((b < 0.0f) ? (1.0f / a) : a);
    if (bIsOddInteger) {
      t = __int_as_float(__float_as_int(t) ^ 0x80000000);
    }
    return t;
  }
  if ((a < 0.0f) && (b != __cuda_truncf(b))) {
    return __cuda_rsqrtf(__int_as_float(0xffc00000));
  }
  t = __cuda_fabsf(a);
  t = __internal_accurate_powf(t, b);
  if ((a < 0.0f) && bIsOddInteger) {
    t = __int_as_float(__float_as_int(t) ^ 0x80000000);
  }
  return t;

}


static float __internal_tgammaf_kernel(float a)
{
  float t;
  t = -1.05767296987211380E-003f;
  t = __internal_fmad (t, a, 7.09279059435508670E-003f);
  t = __internal_fmad (t, a, -9.65347121958557050E-003f);
  t = __internal_fmad (t, a, -4.21736613253687960E-002f);
  t = __internal_fmad (t, a, 1.66542401247154280E-001f);
  t = __internal_fmad (t, a, -4.20043267827838460E-002f);
  t = __internal_fmad (t, a, -6.55878234051332940E-001f);
  t = __internal_fmad (t, a, 5.77215696929794240E-001f);
  t = __internal_fmad (t, a, 1.00000000000000000E+000f);
  return t;
}





static float __cuda_tgammaf(float a)
{
  float s, xx, x=a;
  if (x >= 0.0f) {
    if (x > 36.0f) x = 36.0f;
    s = 1.0f;
    xx = x;
    if (x > 34.03f) {
      xx -= 1.0f;
    }
    while (xx > 1.5f) {
      xx = xx - 1.0f;
      s = s * xx;
    }
    if (x >= 0.5f) {
      xx = xx - 1.0f;
    }
    xx = __internal_tgammaf_kernel(xx);
    if (x < 0.5f) {
      xx = xx * x;
    }
    s = __fdividef(s, xx);
    if (x > 34.03f) {

      xx = x - 1.0f;
      s = s * xx;
    }
    return s;
  } else {
    if (x == __cuda_floorf(x)) {
      x = __int_as_float(0x7fffffff);

      return x;

    }
    if (x < -41.1f) x = -41.1f;
    xx = x;
    if (x < -34.03f) {
      xx += 6.0f;
    }
    s = xx;
    while (xx < -0.5f) {
      xx = xx + 1.0f;
      s = s * xx;
    }
    xx = __internal_tgammaf_kernel(xx);
    s = s * xx;
    s = 1.0f / s;
    if (x < -34.03f) {
      xx = x;
      xx *= (x + 1.0f);
      xx *= (x + 2.0f);
      xx *= (x + 3.0f);
      xx *= (x + 4.0f);
      xx *= (x + 5.0f);
      xx = 1.0f / xx;
      s = s * xx;
      if ((a < -42.0f) && !(((int)a)&1)) {
        s = __int_as_float(0x80000000);
      }
    }
    return s;
  }
}

static float __cuda_roundf(float a)
{



  float fa = __cuda_fabsf(a);
  float u = __cuda_copysignf (0.5f, a);
  u = __cuda_truncf (a + u);
  if (fa > 8388608.0f) u = a;
  if (fa < 0.5f) u = __cuda_truncf (a);
  return u;

}

static long long int __internal_llroundf_kernel(float a)
{
  unsigned long long int res, t = 0LL;
  int shift;
  unsigned int ia = __float_as_int(a);
  if ((ia << 1) > 0xff000000) return 0LL;
  if ((int)ia >= 0x5f000000) return 0x7fffffffffffffffLL;
  if (ia >= 0xdf000000) return 0x8000000000000000LL;
  shift = 189 - ((ia >> 23) & 0xff);
  res = ((long long int)(((ia << 8) | 0x80000000) >> 1)) << 32;
  if (shift >= 64) {
    t = res;
    res = 0;
  } else if (shift) {
    t = res << (64 - shift);
    res = res >> shift;
  }
  if (t >= 0x8000000000000000LL) {
    res++;
  }
  if ((int)ia < 0) res = (unsigned long long int)(-(long long int)res);
  return (long long int)res;
}

static long long int __cuda_llroundf(float a)
{



  return __internal_llroundf_kernel(a);

}

static long int __cuda_lroundf(float a)
{




  return (long int)__cuda_llroundf(a);
# 3045 "/home/normal/cuda/bin/../include/math_functions.h" 3
}

static float __cuda_fdimf(float a, float b)
{
  float t;
  t = a - b;
  if (a <= b) {
    t = 0.0f;
  }
  return t;
}

static int __cuda_ilogbf(float a)
{
  unsigned int i;
  int expo;
  a = __cuda_fabsf(a);
  if (a <= 1.175494351e-38f) {

    if (a == 0.0f) {
      expo = -((int)((unsigned int)-1 >> 1))-1;
    } else {
      expo = -126;
      i = __float_as_int(a);
      i = i << 8;
      while ((int)i >= 0) {
        expo--;
        i = i + i;
      }
    }
  } else {
    i = __float_as_int(a);
    expo = ((int)((i >> 23) & 0xff)) - 127;
    if ((i == 0x7f800000)) {
      expo = ((int)((unsigned int)-1 >> 1));
    }
    if ((i > 0x7f800000)) {
      expo = -((int)((unsigned int)-1 >> 1))-1;
    }
  }
  return expo;
}

static float __cuda_logbf(float a)
{



  unsigned int i;
  int expo;
  float res;

  if (__cuda___isnanf(a)) return a + a;

  a = __cuda_fabsf(a);
  if (a <= 1.175494351e-38f) {

    if (a == 0.0f) {
      res = -__int_as_float(0x7f800000);
    } else {
      expo = -126;
      i = __float_as_int(a);
      i = i << 8;
      while ((int)i >= 0) {
        expo--;
        i = i + i;
      }
      res = (float)expo;
    }
  } else {
    i = __float_as_int(a);
    expo = ((int)((i >> 23) & 0xff)) - 127;
    res = (float)expo;
    if ((i >= 0x7f800000)) {

      res = a + a;
    }
  }
  return res;

}

static void __cuda_sincosf(float a, float *sptr, float *cptr)
{





  float t, u, s, c;
  int quadrant;
  if (__cuda___isinff(a)) {
    *sptr = __int_as_float(0x7fffffff);
    *cptr = __int_as_float(0x7fffffff);
    return;
  }
  if (a == 0.0f) {
    *sptr = a;
    *cptr = 1.0f;
    return;
  }
  t = __internal_trig_reduction_kernel(a, &quadrant);
  u = __internal_cos_kernel(t);
  t = __internal_sin_kernel(t);
  if (quadrant & 1) {
    s = u;
    c = t;
  } else {
    s = t;
    c = u;
  }
  if (quadrant & 2) {
    s = -s;
  }
  quadrant++;
  if (quadrant & 2) {
    c = -c;
  }
  *sptr = s;
  *cptr = c;

}
# 3176 "/home/normal/cuda/bin/../include/math_functions.h" 3
extern __attribute__((__weak__)) double rsqrt(double a); double rsqrt(double a)
{
  return 1.0 / sqrt(a);
}

extern __attribute__((__weak__)) float rsqrtf(float a); float rsqrtf(float a)
{
  return (float)rsqrt((double)a);
}
# 3728 "/home/normal/cuda/bin/../include/math_functions.h" 3
# 1 "/home/normal/cuda/bin/../include/math_functions_dbl_ptx1.h" 1 3
# 45 "/home/normal/cuda/bin/../include/math_functions_dbl_ptx1.h" 3
static double __cuda_fabs(double a)
{
  return (float)__cuda_fabsf((float)a);
}

static double __cuda_fmax(double a, double b)
{
  return (float)__cuda_fmaxf((float)a, (float)b);
}

static double __cuda_fmin(double a, double b)
{
  return (float)__cuda_fminf((float)a, (float)b);
}

static int __cuda___finite(double a)
{
  return __cuda___finitef((float)a);
}

static int __cuda___isinf(double a)
{
  return __cuda___isinff((float)a);
}

static int __cuda___isnan(double a)
{
  return __cuda___isnanf((float)a);
}

static int __cuda___signbit(double a)
{
  return __cuda___signbitf((float)a);
}

static double __cuda_sqrt(double a)
{
  return (double)__cuda_sqrtf((float)a);
}

static double __cuda_rsqrt(double a)
{
  return (double)__cuda_rsqrtf((float)a);
}

static double __cuda_ceil(double a)
{
  return (double)__cuda_ceilf((float)a);
}

static double __cuda_trunc(double a)
{
  return (double)__cuda_truncf((float)a);
}

static double __cuda_floor(double a)
{
  return (double)__cuda_floorf((float)a);
}

static double __cuda_copysign(double a, double b)
{
  return (double)__cuda_copysignf((float)a, (float)b);
}

static double __cuda_sin(double a)
{
  return (double)__cuda_sinf((float)a);
}

static double __cuda_cos(double a)
{
  return (double)__cuda_cosf((float)a);
}

static void __cuda_sincos(double a, double *sptr, double *cptr)
{
  float fs, fc;

  __cuda_sincosf((float)a, &fs, &fc);

  *sptr = (double)fs;
  *cptr = (double)fc;
}

static double __cuda_tan(double a)
{
  return (double)__cuda_tanf((float)a);
}

static double __cuda_exp(double a)
{
  return (double)__cuda_expf((float)a);
}

static double __cuda_exp2(double a)
{
  return (double)__cuda_exp2f((float)a);
}

static double __cuda_exp10(double a)
{
  return (double)__cuda_exp10f((float)a);
}

static double __cuda_expm1(double a)
{
  return (double)__cuda_expm1f((float)a);
}

static double __cuda_cosh(double a)
{
  return (double)__cuda_coshf((float)a);
}

static double __cuda_sinh(double a)
{
  return (double)__cuda_sinhf((float)a);
}

static double __cuda_tanh(double a)
{
  return (double)__cuda_tanhf((float)a);
}

static double __cuda_asin(double a)
{
  return (double)__cuda_asinf((float)a);
}

static double __cuda_acos(double a)
{
  return (double)__cuda_acosf((float)a);
}

static double __cuda_atan(double a)
{
  return (double)__cuda_atanf((float)a);
}

static double __cuda_atan2(double a, double b)
{
  return (double)__cuda_atan2f((float)a, (float)b);
}

static double __cuda_log(double a)
{
  return (double)__cuda_logf((float)a);
}

static double __cuda_log2(double a)
{
  return (double)__cuda_log2f((float)a);
}

static double __cuda_log10(double a)
{
  return (double)__cuda_log10f((float)a);
}

static double __cuda_log1p(double a)
{
  return (double)__cuda_log1pf((float)a);
}

static double __cuda_acosh(double a)
{
  return (double)__cuda_acoshf((float)a);
}

static double __cuda_asinh(double a)
{
  return (double)__cuda_asinhf((float)a);
}

static double __cuda_atanh(double a)
{
  return (double)__cuda_atanhf((float)a);
}

static double __cuda_hypot(double a, double b)
{
  return (double)__cuda_hypotf((float)a, (float)b);
}

static double __cuda_cbrt(double a)
{
  return (double)__cuda_cbrtf((float)a);
}

static double __cuda_erf(double a)
{
  return (double)__cuda_erff((float)a);
}

static double __cuda_erfinv(double a)
{
  return (double)__cuda_erfinvf((float)a);
}

static double __cuda_erfc(double a)
{
  return (double)__cuda_erfcf((float)a);
}

static double __cuda_erfcinv(double a)
{
  return (double)__cuda_erfcinvf((float)a);
}

static double __cuda_lgamma(double a)
{
  return (double)__cuda_lgammaf((float)a);
}

static double __cuda_tgamma(double a)
{
  return (double)__cuda_tgammaf((float)a);
}

static double __cuda_ldexp(double a, int b)
{
  return (double)__cuda_ldexpf((float)a, b);
}

static double __cuda_scalbn(double a, int b)
{
  return (double)__cuda_scalbnf((float)a, b);
}

static double __cuda_scalbln(double a, long b)
{
  return (double)__cuda_scalblnf((float)a, b);
}

static double __cuda_frexp(double a, int *b)
{
  return (double)__cuda_frexpf((float)a, b);
}

static double __cuda_modf(double a, double *b)
{
  float fb;
  float fa = __cuda_modff((float)a, &fb);

  *b = (double)fb;

  return (double)fa;
}

static double __cuda_fmod(double a, double b)
{
  return (double)__cuda_fmodf((float)a, (float)b);
}

static double __cuda_remainder(double a, double b)
{
  return (double)__cuda_remainderf((float)a, (float)b);
}

static double __cuda_remquo(double a, double b, int *c)
{
  return (double)__cuda_remquof((float)a, (float)b, c);
}

static double __cuda_nextafter(double a, double b)
{
  return (double)__cuda_nextafterf((float)a, (float)b);
}

static double __cuda_nan(const char *tagp)
{
  return (double)__cuda_nanf(tagp);
}

static double __cuda_pow(double a, double b)
{
  return (double)__cuda_powf((float)a, (float)b);
}

static double __cuda_round(double a)
{
  return (double)__cuda_roundf((float)a);
}

static long __cuda_lround(double a)
{
  return __cuda_lroundf((float)a);
}

static long long __cuda_llround(double a)
{
  return __cuda_llroundf((float)a);
}

static double __cuda_rint(double a)
{
  return (double)__cuda_rintf((float)a);
}

static long __cuda_lrint(double a)
{
  return __cuda_lrintf((float)a);
}

static long long __cuda_llrint(double a)
{
  return __cuda_llrintf((float)a);
}

static double __cuda_nearbyint(double a)
{
  return (double)__cuda_nearbyintf((float)a);
}

static double __cuda_fdim(double a, double b)
{
  return (double)__cuda_fdimf((float)a, (float)b);
}

static int __cuda_ilogb(double a)
{
  return __cuda_ilogbf((float)a);
}

static double __cuda_logb(double a)
{
  return (double)__cuda_logbf((float)a);
}

static double __cuda_fma(double a, double b, double c)
{
  return (double)__cuda_fmaf((float)a, (float)b, (float)c);
}
# 3729 "/home/normal/cuda/bin/../include/math_functions.h" 2 3
# 94 "/home/normal/cuda/bin/../include/common_functions.h" 2
# 227 "/home/normal/cuda/bin/../include/crt/host_runtime.h" 2
# 6 "/tmp/tmpxft_00003fb3_00000000-1_scanLargeArray.cudafe1.stub.c" 2
struct __T20 {float *__par0;float *__par1;int __par2;int __par3;int __par4;int __dummy_field;};
struct __T21 {float *__par0;const float *__par1;float *__par2;int __par3;int __par4;int __par5;int __dummy_field;};
struct __T22 {float *__par0;const float *__par1;float *__par2;int __par3;int __par4;int __par5;int __dummy_field;};
struct __T23 {float *__par0;const float *__par1;float *__par2;int __par3;int __par4;int __par5;int __dummy_field;};
struct __T24 {float *__par0;const float *__par1;float *__par2;int __par3;int __par4;int __par5;int __dummy_field;};
static void __sti____cudaRegisterAll_49_tmpxft_00003fb3_00000000_4_scanLargeArray_cpp1_ii_839760fd(void) __attribute__((__constructor__));
void __device_stub__Z10uniformAddPfS_iii(float *__par0, float *__par1, int __par2, int __par3, int __par4){auto struct __T20 *__T27;
char __[256]; *(char**)&__T27 = __;if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T27->__par0 - (size_t)__T27) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T27->__par1 - (size_t)__T27) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T27->__par2 - (size_t)__T27) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T27->__par3 - (size_t)__T27) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T27->__par4 - (size_t)__T27) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(float *, float *, int, int, int))uniformAdd__entry)); (void)cudaLaunch(((char *)((void ( *)(float *, float *, int, int, int))uniformAdd__entry))); };}

}
void uniformAdd__entry( float * __cuda_0,float * __cuda_1,int __cuda_2,int __cuda_3,int __cuda_4)
{__device_stub__Z10uniformAddPfS_iii( __cuda_0, __cuda_1, __cuda_2, __cuda_3, __cuda_4);}
extern "C"{

static void __device_stub__Z7prescanILb1ELb0EEvPfPKfS0_iii(float *__par0, const float *__par1, float *__par2, int __par3, int __par4, int __par5){auto struct __T21 *__T252;
char __[256]; *(char**)&__T252 = __;if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T252->__par0 - (size_t)__T252) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T252->__par1 - (size_t)__T252) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T252->__par2 - (size_t)__T252) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T252->__par3 - (size_t)__T252) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T252->__par4 - (size_t)__T252) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par5, sizeof(__par5), (size_t)&__T252->__par5 - (size_t)__T252) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(float *, const float *, float *, int, int, int))prescan__entry<(bool)1, (bool)0> )); (void)cudaLaunch(((char *)((void ( *)(float *, const float *, float *, int, int, int))prescan__entry<(bool)1, (bool)0> ))); };}

}
template<>



void __wrapper__device_stub_prescan<true,false>( float *&__cuda_0,const float *&__cuda_1,float *&__cuda_2,int &__cuda_3,int &__cuda_4,int &__cuda_5)
{__device_stub__Z7prescanILb1ELb0EEvPfPKfS0_iii( __cuda_0, __cuda_1, __cuda_2, __cuda_3, __cuda_4, __cuda_5);}
extern "C"{

static void __device_stub__Z7prescanILb1ELb1EEvPfPKfS0_iii(float *__par0, const float *__par1, float *__par2, int __par3, int __par4, int __par5){auto struct __T22 *__T253;
char __[256]; *(char**)&__T253 = __;if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T253->__par0 - (size_t)__T253) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T253->__par1 - (size_t)__T253) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T253->__par2 - (size_t)__T253) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T253->__par3 - (size_t)__T253) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T253->__par4 - (size_t)__T253) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par5, sizeof(__par5), (size_t)&__T253->__par5 - (size_t)__T253) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(float *, const float *, float *, int, int, int))prescan__entry<(bool)1, (bool)1> )); (void)cudaLaunch(((char *)((void ( *)(float *, const float *, float *, int, int, int))prescan__entry<(bool)1, (bool)1> ))); };}

}
template<>



void __wrapper__device_stub_prescan<true,true>( float *&__cuda_0,const float *&__cuda_1,float *&__cuda_2,int &__cuda_3,int &__cuda_4,int &__cuda_5)
{__device_stub__Z7prescanILb1ELb1EEvPfPKfS0_iii( __cuda_0, __cuda_1, __cuda_2, __cuda_3, __cuda_4, __cuda_5);}
extern "C"{

static void __device_stub__Z7prescanILb0ELb0EEvPfPKfS0_iii(float *__par0, const float *__par1, float *__par2, int __par3, int __par4, int __par5){auto struct __T23 *__T254;
char __[256]; *(char**)&__T254 = __;if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T254->__par0 - (size_t)__T254) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T254->__par1 - (size_t)__T254) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T254->__par2 - (size_t)__T254) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T254->__par3 - (size_t)__T254) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T254->__par4 - (size_t)__T254) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par5, sizeof(__par5), (size_t)&__T254->__par5 - (size_t)__T254) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(float *, const float *, float *, int, int, int))prescan__entry<(bool)0, (bool)0> )); (void)cudaLaunch(((char *)((void ( *)(float *, const float *, float *, int, int, int))prescan__entry<(bool)0, (bool)0> ))); };}

}
template<>



void __wrapper__device_stub_prescan<false,false>( float *&__cuda_0,const float *&__cuda_1,float *&__cuda_2,int &__cuda_3,int &__cuda_4,int &__cuda_5)
{__device_stub__Z7prescanILb0ELb0EEvPfPKfS0_iii( __cuda_0, __cuda_1, __cuda_2, __cuda_3, __cuda_4, __cuda_5);}
extern "C"{

static void __device_stub__Z7prescanILb0ELb1EEvPfPKfS0_iii(float *__par0, const float *__par1, float *__par2, int __par3, int __par4, int __par5){auto struct __T24 *__T255;
char __[256]; *(char**)&__T255 = __;if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T255->__par0 - (size_t)__T255) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T255->__par1 - (size_t)__T255) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T255->__par2 - (size_t)__T255) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T255->__par3 - (size_t)__T255) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T255->__par4 - (size_t)__T255) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par5, sizeof(__par5), (size_t)&__T255->__par5 - (size_t)__T255) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(float *, const float *, float *, int, int, int))prescan__entry<(bool)0, (bool)1> )); (void)cudaLaunch(((char *)((void ( *)(float *, const float *, float *, int, int, int))prescan__entry<(bool)0, (bool)1> ))); };}

}
template<>



void __wrapper__device_stub_prescan<false,true>( float *&__cuda_0,const float *&__cuda_1,float *&__cuda_2,int &__cuda_3,int &__cuda_4,int &__cuda_5)
{__device_stub__Z7prescanILb0ELb1EEvPfPKfS0_iii( __cuda_0, __cuda_1, __cuda_2, __cuda_3, __cuda_4, __cuda_5);}
extern "C"{
# 83 "/tmp/tmpxft_00003fb3_00000000-1_scanLargeArray.cudafe1.stub.c"
static void __sti____cudaRegisterAll_49_tmpxft_00003fb3_00000000_4_scanLargeArray_cpp1_ii_839760fd(void){__cudaFatCubinHandle = __cudaRegisterFatBinary((void*)(&__fatDeviceText)); atexit(__cudaUnregisterBinaryUtil);__cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(float *, const float *, float *, int, int, int))prescan__entry<(bool)0, (bool)1> ), (char*)"_Z7prescanILb0ELb1EEvPfPKfS0_iii", "_Z7prescanILb0ELb1EEvPfPKfS0_iii", (-1), (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0);__cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(float *, const float *, float *, int, int, int))prescan__entry<(bool)0, (bool)0> ), (char*)"_Z7prescanILb0ELb0EEvPfPKfS0_iii", "_Z7prescanILb0ELb0EEvPfPKfS0_iii", (-1), (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0);__cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(float *, const float *, float *, int, int, int))prescan__entry<(bool)1, (bool)1> ), (char*)"_Z7prescanILb1ELb1EEvPfPKfS0_iii", "_Z7prescanILb1ELb1EEvPfPKfS0_iii", (-1), (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0);__cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(float *, const float *, float *, int, int, int))prescan__entry<(bool)1, (bool)0> ), (char*)"_Z7prescanILb1ELb0EEvPfPKfS0_iii", "_Z7prescanILb1ELb0EEvPfPKfS0_iii", (-1), (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0);__cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(float *, float *, int, int, int))uniformAdd__entry), (char*)"_Z10uniformAddPfS_iii", "_Z10uniformAddPfS_iii", (-1), (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0);__cudaRegisterShared(__cudaFatCubinHandle, (void**)"s_data");}

}
# 178 "scanLargeArray.cu" 2
