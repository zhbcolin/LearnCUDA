#pragma section("__nv_managed_data__")
static char __nv_inited_managed_rt = 0; static void **__nv_fatbinhandle_for_managed_rt; static void __nv_save_fatbinhandle_for_managed_rt(void **in){__nv_fatbinhandle_for_managed_rt = in;} static char __nv_init_managed_rt_with_module(void **); static inline void __nv_init_managed_rt(void) { __nv_inited_managed_rt = (__nv_inited_managed_rt ? __nv_inited_managed_rt                 : __nv_init_managed_rt_with_module(__nv_fatbinhandle_for_managed_rt));}
#line 1 "CMakeCUDACompilerId.cu"
#define __nv_is_extended_device_lambda_closure_type(X) false
#define __nv_is_extended_host_device_lambda_closure_type(X) false

#line 1
#line 67 "D:/NVIDIA GPU Computing Toolkit/CUDA/v10.0/bin/../include\\cuda_runtime.h"
#pragma warning(push)
#pragma warning(disable: 4820)
#line 708 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\sal.h"
#pragma region Input Buffer SAL 1 compatibility macros
#line 1472
#pragma endregion Input Buffer SAL 1 compatibility macros
#line 2361 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\sal.h"
extern "C" {
#line 2967 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\sal.h"
}
#line 22 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\concurrencysal.h"
extern "C" {
#line 354 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\concurrencysal.h"
}
#line 15 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\vadefs.h"
#pragma pack ( push, 8 )
#line 18
extern "C" {
#line 28 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\vadefs.h"
typedef unsigned __int64 uintptr_t; 
#line 39 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\vadefs.h"
typedef char *va_list; 
#line 112 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\vadefs.h"
void __cdecl __va_start(va_list *, ...); 
#line 124 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\vadefs.h"
}
#line 128 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\vadefs.h"
extern "C++" {
#line 130
template< class _Ty> 
#line 131
struct __vcrt_va_list_is_reference { 
#line 133
enum: bool { __the_value}; 
#line 134
}; 
#line 136
template< class _Ty> 
#line 137
struct __vcrt_va_list_is_reference< _Ty &>  { 
#line 139
enum: bool { __the_value = '\001'}; 
#line 140
}; 
#line 142
template< class _Ty> 
#line 143
struct __vcrt_va_list_is_reference< _Ty &&>  { 
#line 145
enum: bool { __the_value = '\001'}; 
#line 146
}; 
#line 148
template< class _Ty> 
#line 149
struct __vcrt_assert_va_start_is_not_reference { 
#line 151
static_assert((!__vcrt_va_list_is_reference< _Ty> ::__the_value), "va_start argument must not have reference type and must not be parenthesized");
#line 153
}; 
#line 154
}
#line 164 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\vadefs.h"
#pragma pack ( pop )
#line 83 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 180 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime.h"
typedef unsigned __int64 size_t; 
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#line 181
typedef __int64 ptrdiff_t; 
#line 182
typedef __int64 intptr_t; 
#line 190 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime.h"
typedef bool __vcrt_bool; 
#line 233 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime.h"
extern "C++" {
#line 235
template< class _CountofType, size_t _SizeOfArray> char (*__countof_helper(__unaligned _CountofType (& _Array)[_SizeOfArray]))[_SizeOfArray]; 
#line 239
}
#line 277 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime.h"
void __cdecl __security_init_cookie(); 
#line 283
void __cdecl __security_check_cookie(uintptr_t _StackCookie); 
#line 284
__declspec(noreturn) void __cdecl __report_gsfailure(uintptr_t _StackCookie); 
#line 288 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime.h"
extern uintptr_t __security_cookie; 
#line 296 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime.h"
}__pragma( pack ( pop )) 
#line 12 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 136 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt.h"
extern "C++" {
#line 138
template< bool _Enable, class _Ty> struct _CrtEnableIf; 
#line 141
template< class _Ty> 
#line 142
struct _CrtEnableIf< true, _Ty>  { 
#line 144
typedef _Ty _Type; 
#line 145
}; 
#line 146
}
#line 150 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt.h"
typedef bool __crt_bool; 
#line 278 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt.h"
void __cdecl _invalid_parameter_noinfo(); 
#line 279
__declspec(noreturn) void __cdecl _invalid_parameter_noinfo_noreturn(); 
#line 281
__declspec(noreturn) void __cdecl 
#line 282
_invoke_watson(const __wchar_t * _Expression, const __wchar_t * _FunctionName, const __wchar_t * _FileName, unsigned _LineNo, uintptr_t _Reserved); 
#line 510 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt.h"
typedef int errno_t; 
#line 511
typedef unsigned short wint_t; 
#line 512
typedef unsigned short wctype_t; 
#line 513
typedef long __time32_t; 
#line 514
typedef __int64 __time64_t; 
#line 521
typedef 
#line 516
struct __crt_locale_data_public { 
#line 518
const unsigned short *_locale_pctype; 
#line 519
int _locale_mb_cur_max; 
#line 520
unsigned _locale_lc_codepage; 
#line 521
} __crt_locale_data_public; 
#line 527
typedef 
#line 523
struct __crt_locale_pointers { 
#line 525
struct __crt_locale_data *locinfo; 
#line 526
struct __crt_multibyte_data *mbcinfo; 
#line 527
} __crt_locale_pointers; 
#line 529
typedef __crt_locale_pointers *_locale_t; 
#line 535
typedef 
#line 531
struct _Mbstatet { 
#line 533
unsigned long _Wchar; 
#line 534
unsigned short _Byte, _State; 
#line 535
} _Mbstatet; 
#line 537
typedef _Mbstatet mbstate_t; 
#line 551 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt.h"
typedef __time64_t time_t; 
#line 561 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt.h"
typedef size_t rsize_t; 
#line 2010 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt.h"
}__pragma( pack ( pop )) 
#line 66 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\device_types.h"
#if 0
#line 66
enum cudaRoundMode { 
#line 68
cudaRoundNearest, 
#line 69
cudaRoundZero, 
#line 70
cudaRoundPosInf, 
#line 71
cudaRoundMinInf
#line 72
}; 
#endif
#line 98 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 98
struct char1 { 
#line 100
signed char x; 
#line 101
}; 
#endif
#line 103 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 103
struct uchar1 { 
#line 105
unsigned char x; 
#line 106
}; 
#endif
#line 109 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 109
struct __declspec(align(2)) char2 { 
#line 111
signed char x, y; 
#line 112
}; 
#endif
#line 114 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 114
struct __declspec(align(2)) uchar2 { 
#line 116
unsigned char x, y; 
#line 117
}; 
#endif
#line 119 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 119
struct char3 { 
#line 121
signed char x, y, z; 
#line 122
}; 
#endif
#line 124 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 124
struct uchar3 { 
#line 126
unsigned char x, y, z; 
#line 127
}; 
#endif
#line 129 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 129
struct __declspec(align(4)) char4 { 
#line 131
signed char x, y, z, w; 
#line 132
}; 
#endif
#line 134 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 134
struct __declspec(align(4)) uchar4 { 
#line 136
unsigned char x, y, z, w; 
#line 137
}; 
#endif
#line 139 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 139
struct short1 { 
#line 141
short x; 
#line 142
}; 
#endif
#line 144 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 144
struct ushort1 { 
#line 146
unsigned short x; 
#line 147
}; 
#endif
#line 149 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 149
struct __declspec(align(4)) short2 { 
#line 151
short x, y; 
#line 152
}; 
#endif
#line 154 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 154
struct __declspec(align(4)) ushort2 { 
#line 156
unsigned short x, y; 
#line 157
}; 
#endif
#line 159 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 159
struct short3 { 
#line 161
short x, y, z; 
#line 162
}; 
#endif
#line 164 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 164
struct ushort3 { 
#line 166
unsigned short x, y, z; 
#line 167
}; 
#endif
#line 169 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 169
struct __declspec(align(8)) short4 { short x; short y; short z; short w; }; 
#endif
#line 170 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 170
struct __declspec(align(8)) ushort4 { unsigned short x; unsigned short y; unsigned short z; unsigned short w; }; 
#endif
#line 172 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 172
struct int1 { 
#line 174
int x; 
#line 175
}; 
#endif
#line 177 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 177
struct uint1 { 
#line 179
unsigned x; 
#line 180
}; 
#endif
#line 182 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 182
struct __declspec(align(8)) int2 { int x; int y; }; 
#endif
#line 183 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 183
struct __declspec(align(8)) uint2 { unsigned x; unsigned y; }; 
#endif
#line 185 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 185
struct int3 { 
#line 187
int x, y, z; 
#line 188
}; 
#endif
#line 190 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 190
struct uint3 { 
#line 192
unsigned x, y, z; 
#line 193
}; 
#endif
#line 195 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 195
struct __declspec(align(16)) int4 { 
#line 197
int x, y, z, w; 
#line 198
}; 
#endif
#line 200 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 200
struct __declspec(align(16)) uint4 { 
#line 202
unsigned x, y, z, w; 
#line 203
}; 
#endif
#line 205 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 205
struct long1 { 
#line 207
long x; 
#line 208
}; 
#endif
#line 210 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 210
struct ulong1 { 
#line 212
unsigned long x; 
#line 213
}; 
#endif
#line 216 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 216
struct __declspec(align(8)) long2 { long x; long y; }; 
#endif
#line 217 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 217
struct __declspec(align(8)) ulong2 { unsigned long x; unsigned long y; }; 
#endif
#line 232 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 232
struct long3 { 
#line 234
long x, y, z; 
#line 235
}; 
#endif
#line 237 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 237
struct ulong3 { 
#line 239
unsigned long x, y, z; 
#line 240
}; 
#endif
#line 242 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 242
struct __declspec(align(16)) long4 { 
#line 244
long x, y, z, w; 
#line 245
}; 
#endif
#line 247 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 247
struct __declspec(align(16)) ulong4 { 
#line 249
unsigned long x, y, z, w; 
#line 250
}; 
#endif
#line 252 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 252
struct float1 { 
#line 254
float x; 
#line 255
}; 
#endif
#line 274 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 274
struct __declspec(align(8)) float2 { float x; float y; }; 
#endif
#line 279 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 279
struct float3 { 
#line 281
float x, y, z; 
#line 282
}; 
#endif
#line 284 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 284
struct __declspec(align(16)) float4 { 
#line 286
float x, y, z, w; 
#line 287
}; 
#endif
#line 289 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 289
struct longlong1 { 
#line 291
__int64 x; 
#line 292
}; 
#endif
#line 294 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 294
struct ulonglong1 { 
#line 296
unsigned __int64 x; 
#line 297
}; 
#endif
#line 299 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 299
struct __declspec(align(16)) longlong2 { 
#line 301
__int64 x, y; 
#line 302
}; 
#endif
#line 304 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 304
struct __declspec(align(16)) ulonglong2 { 
#line 306
unsigned __int64 x, y; 
#line 307
}; 
#endif
#line 309 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 309
struct longlong3 { 
#line 311
__int64 x, y, z; 
#line 312
}; 
#endif
#line 314 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 314
struct ulonglong3 { 
#line 316
unsigned __int64 x, y, z; 
#line 317
}; 
#endif
#line 319 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 319
struct __declspec(align(16)) longlong4 { 
#line 321
__int64 x, y, z, w; 
#line 322
}; 
#endif
#line 324 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 324
struct __declspec(align(16)) ulonglong4 { 
#line 326
unsigned __int64 x, y, z, w; 
#line 327
}; 
#endif
#line 329 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 329
struct double1 { 
#line 331
double x; 
#line 332
}; 
#endif
#line 334 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 334
struct __declspec(align(16)) double2 { 
#line 336
double x, y; 
#line 337
}; 
#endif
#line 339 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 339
struct double3 { 
#line 341
double x, y, z; 
#line 342
}; 
#endif
#line 344 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 344
struct __declspec(align(16)) double4 { 
#line 346
double x, y, z, w; 
#line 347
}; 
#endif
#line 361 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef char1 
#line 361
char1; 
#endif
#line 362 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef uchar1 
#line 362
uchar1; 
#endif
#line 363 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef char2 
#line 363
char2; 
#endif
#line 364 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef uchar2 
#line 364
uchar2; 
#endif
#line 365 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef char3 
#line 365
char3; 
#endif
#line 366 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef uchar3 
#line 366
uchar3; 
#endif
#line 367 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef char4 
#line 367
char4; 
#endif
#line 368 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef uchar4 
#line 368
uchar4; 
#endif
#line 369 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef short1 
#line 369
short1; 
#endif
#line 370 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef ushort1 
#line 370
ushort1; 
#endif
#line 371 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef short2 
#line 371
short2; 
#endif
#line 372 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef ushort2 
#line 372
ushort2; 
#endif
#line 373 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef short3 
#line 373
short3; 
#endif
#line 374 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef ushort3 
#line 374
ushort3; 
#endif
#line 375 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef short4 
#line 375
short4; 
#endif
#line 376 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef ushort4 
#line 376
ushort4; 
#endif
#line 377 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef int1 
#line 377
int1; 
#endif
#line 378 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef uint1 
#line 378
uint1; 
#endif
#line 379 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef int2 
#line 379
int2; 
#endif
#line 380 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef uint2 
#line 380
uint2; 
#endif
#line 381 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef int3 
#line 381
int3; 
#endif
#line 382 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef uint3 
#line 382
uint3; 
#endif
#line 383 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef int4 
#line 383
int4; 
#endif
#line 384 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef uint4 
#line 384
uint4; 
#endif
#line 385 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef long1 
#line 385
long1; 
#endif
#line 386 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef ulong1 
#line 386
ulong1; 
#endif
#line 387 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef long2 
#line 387
long2; 
#endif
#line 388 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef ulong2 
#line 388
ulong2; 
#endif
#line 389 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef long3 
#line 389
long3; 
#endif
#line 390 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef ulong3 
#line 390
ulong3; 
#endif
#line 391 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef long4 
#line 391
long4; 
#endif
#line 392 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef ulong4 
#line 392
ulong4; 
#endif
#line 393 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef float1 
#line 393
float1; 
#endif
#line 394 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef float2 
#line 394
float2; 
#endif
#line 395 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef float3 
#line 395
float3; 
#endif
#line 396 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef float4 
#line 396
float4; 
#endif
#line 397 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef longlong1 
#line 397
longlong1; 
#endif
#line 398 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef ulonglong1 
#line 398
ulonglong1; 
#endif
#line 399 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef longlong2 
#line 399
longlong2; 
#endif
#line 400 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef ulonglong2 
#line 400
ulonglong2; 
#endif
#line 401 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef longlong3 
#line 401
longlong3; 
#endif
#line 402 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef ulonglong3 
#line 402
ulonglong3; 
#endif
#line 403 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef longlong4 
#line 403
longlong4; 
#endif
#line 404 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef ulonglong4 
#line 404
ulonglong4; 
#endif
#line 405 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef double1 
#line 405
double1; 
#endif
#line 406 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef double2 
#line 406
double2; 
#endif
#line 407 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef double3 
#line 407
double3; 
#endif
#line 408 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef double4 
#line 408
double4; 
#endif
#line 416 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
#line 416
struct dim3 { 
#line 418
unsigned x, y, z; 
#line 424 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
}; 
#endif
#line 426 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_types.h"
#if 0
typedef dim3 
#line 426
dim3; 
#endif
#line 13 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\limits.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 88 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\limits.h"
}__pragma( pack ( pop )) 
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stddef.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 19
namespace std { 
#line 21
typedef decltype((nullptr)) nullptr_t; 
#line 22
}
#line 24
using std::nullptr_t;
#line 31 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stddef.h"
int *__cdecl _errno(); 
#line 34
errno_t __cdecl _set_errno(int _Value); 
#line 35
errno_t __cdecl _get_errno(int * _Value); 
#line 51 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stddef.h"
extern unsigned long __cdecl __threadid(); 
#line 53
extern uintptr_t __cdecl __threadhandle(); 
#line 57
}__pragma( pack ( pop )) 
#line 189 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 189
enum cudaError { 
#line 196
cudaSuccess, 
#line 202
cudaErrorMissingConfiguration, 
#line 208
cudaErrorMemoryAllocation, 
#line 214
cudaErrorInitializationError, 
#line 223
cudaErrorLaunchFailure, 
#line 232
cudaErrorPriorLaunchFailure, 
#line 243
cudaErrorLaunchTimeout, 
#line 252
cudaErrorLaunchOutOfResources, 
#line 258
cudaErrorInvalidDeviceFunction, 
#line 267
cudaErrorInvalidConfiguration, 
#line 273
cudaErrorInvalidDevice, 
#line 279
cudaErrorInvalidValue, 
#line 285
cudaErrorInvalidPitchValue, 
#line 291
cudaErrorInvalidSymbol, 
#line 296
cudaErrorMapBufferObjectFailed, 
#line 301
cudaErrorUnmapBufferObjectFailed, 
#line 307
cudaErrorInvalidHostPointer, 
#line 313
cudaErrorInvalidDevicePointer, 
#line 319
cudaErrorInvalidTexture, 
#line 325
cudaErrorInvalidTextureBinding, 
#line 332
cudaErrorInvalidChannelDescriptor, 
#line 338
cudaErrorInvalidMemcpyDirection, 
#line 348
cudaErrorAddressOfConstant, 
#line 357
cudaErrorTextureFetchFailed, 
#line 366
cudaErrorTextureNotBound, 
#line 375
cudaErrorSynchronizationError, 
#line 381
cudaErrorInvalidFilterSetting, 
#line 387
cudaErrorInvalidNormSetting, 
#line 395
cudaErrorMixedDeviceExecution, 
#line 402
cudaErrorCudartUnloading, 
#line 407
cudaErrorUnknown, 
#line 415
cudaErrorNotYetImplemented, 
#line 424
cudaErrorMemoryValueTooLarge, 
#line 431
cudaErrorInvalidResourceHandle, 
#line 439
cudaErrorNotReady, 
#line 446
cudaErrorInsufficientDriver, 
#line 459
cudaErrorSetOnActiveProcess, 
#line 465
cudaErrorInvalidSurface, 
#line 471
cudaErrorNoDevice, 
#line 477
cudaErrorECCUncorrectable, 
#line 482
cudaErrorSharedObjectSymbolNotFound, 
#line 487
cudaErrorSharedObjectInitFailed, 
#line 493
cudaErrorUnsupportedLimit, 
#line 499
cudaErrorDuplicateVariableName, 
#line 505
cudaErrorDuplicateTextureName, 
#line 511
cudaErrorDuplicateSurfaceName, 
#line 521
cudaErrorDevicesUnavailable, 
#line 526
cudaErrorInvalidKernelImage, 
#line 534
cudaErrorNoKernelImageForDevice, 
#line 547
cudaErrorIncompatibleDriverContext, 
#line 554
cudaErrorPeerAccessAlreadyEnabled, 
#line 561
cudaErrorPeerAccessNotEnabled, 
#line 567
cudaErrorDeviceAlreadyInUse = 54, 
#line 574
cudaErrorProfilerDisabled, 
#line 582
cudaErrorProfilerNotInitialized, 
#line 589
cudaErrorProfilerAlreadyStarted, 
#line 596
cudaErrorProfilerAlreadyStopped, 
#line 603
cudaErrorAssert, 
#line 610
cudaErrorTooManyPeers, 
#line 616
cudaErrorHostMemoryAlreadyRegistered, 
#line 622
cudaErrorHostMemoryNotRegistered, 
#line 627
cudaErrorOperatingSystem, 
#line 633
cudaErrorPeerAccessUnsupported, 
#line 640
cudaErrorLaunchMaxDepthExceeded, 
#line 648
cudaErrorLaunchFileScopedTex, 
#line 656
cudaErrorLaunchFileScopedSurf, 
#line 671
cudaErrorSyncDepthExceeded, 
#line 683
cudaErrorLaunchPendingCountExceeded, 
#line 688
cudaErrorNotPermitted, 
#line 694
cudaErrorNotSupported, 
#line 703
cudaErrorHardwareStackError, 
#line 711
cudaErrorIllegalInstruction, 
#line 720
cudaErrorMisalignedAddress, 
#line 731
cudaErrorInvalidAddressSpace, 
#line 739
cudaErrorInvalidPc, 
#line 747
cudaErrorIllegalAddress, 
#line 753
cudaErrorInvalidPtx, 
#line 758
cudaErrorInvalidGraphicsContext, 
#line 764
cudaErrorNvlinkUncorrectable, 
#line 771
cudaErrorJitCompilerNotFound, 
#line 780
cudaErrorCooperativeLaunchTooLarge, 
#line 787
cudaErrorSystemNotReady, 
#line 793
cudaErrorIllegalState, 
#line 798
cudaErrorStartupFailure = 127, 
#line 803
cudaErrorStreamCaptureUnsupported = 900, 
#line 809
cudaErrorStreamCaptureInvalidated, 
#line 815
cudaErrorStreamCaptureMerge, 
#line 820
cudaErrorStreamCaptureUnmatched, 
#line 826
cudaErrorStreamCaptureUnjoined, 
#line 833
cudaErrorStreamCaptureIsolation, 
#line 839
cudaErrorStreamCaptureImplicit, 
#line 845
cudaErrorCapturedEvent, 
#line 853
cudaErrorApiFailureBase = 10000
#line 854
}; 
#endif
#line 859 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 859
enum cudaChannelFormatKind { 
#line 861
cudaChannelFormatKindSigned, 
#line 862
cudaChannelFormatKindUnsigned, 
#line 863
cudaChannelFormatKindFloat, 
#line 864
cudaChannelFormatKindNone
#line 865
}; 
#endif
#line 870 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 870
struct cudaChannelFormatDesc { 
#line 872
int x; 
#line 873
int y; 
#line 874
int z; 
#line 875
int w; 
#line 876
cudaChannelFormatKind f; 
#line 877
}; 
#endif
#line 882 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
typedef struct cudaArray *cudaArray_t; 
#line 887
typedef const cudaArray *cudaArray_const_t; 
#line 889
struct cudaArray; 
#line 894
typedef struct cudaMipmappedArray *cudaMipmappedArray_t; 
#line 899
typedef const cudaMipmappedArray *cudaMipmappedArray_const_t; 
#line 901
struct cudaMipmappedArray; 
#line 906
#if 0
#line 906
enum cudaMemoryType { 
#line 908
cudaMemoryTypeUnregistered, 
#line 909
cudaMemoryTypeHost, 
#line 910
cudaMemoryTypeDevice, 
#line 911
cudaMemoryTypeManaged
#line 912
}; 
#endif
#line 917 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 917
enum cudaMemcpyKind { 
#line 919
cudaMemcpyHostToHost, 
#line 920
cudaMemcpyHostToDevice, 
#line 921
cudaMemcpyDeviceToHost, 
#line 922
cudaMemcpyDeviceToDevice, 
#line 923
cudaMemcpyDefault
#line 924
}; 
#endif
#line 931 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 931
struct cudaPitchedPtr { 
#line 933
void *ptr; 
#line 934
size_t pitch; 
#line 935
size_t xsize; 
#line 936
size_t ysize; 
#line 937
}; 
#endif
#line 944 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 944
struct cudaExtent { 
#line 946
size_t width; 
#line 947
size_t height; 
#line 948
size_t depth; 
#line 949
}; 
#endif
#line 956 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 956
struct cudaPos { 
#line 958
size_t x; 
#line 959
size_t y; 
#line 960
size_t z; 
#line 961
}; 
#endif
#line 966 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 966
struct cudaMemcpy3DParms { 
#line 968
cudaArray_t srcArray; 
#line 969
cudaPos srcPos; 
#line 970
cudaPitchedPtr srcPtr; 
#line 972
cudaArray_t dstArray; 
#line 973
cudaPos dstPos; 
#line 974
cudaPitchedPtr dstPtr; 
#line 976
cudaExtent extent; 
#line 977
cudaMemcpyKind kind; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
#line 978
}; 
#endif
#line 983 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 983
struct cudaMemcpy3DPeerParms { 
#line 985
cudaArray_t srcArray; 
#line 986
cudaPos srcPos; 
#line 987
cudaPitchedPtr srcPtr; 
#line 988
int srcDevice; 
#line 990
cudaArray_t dstArray; 
#line 991
cudaPos dstPos; 
#line 992
cudaPitchedPtr dstPtr; 
#line 993
int dstDevice; 
#line 995
cudaExtent extent; 
#line 996
}; 
#endif
#line 1001 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 1001
struct cudaMemsetParams { 
#line 1002
void *dst; 
#line 1003
size_t pitch; 
#line 1004
unsigned value; 
#line 1005
unsigned elementSize; 
#line 1006
size_t width; 
#line 1007
size_t height; 
#line 1008
}; 
#endif
#line 1020 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
typedef void (__stdcall *cudaHostFn_t)(void * userData); 
#line 1025
#if 0
#line 1025
struct cudaHostNodeParams { 
#line 1026
cudaHostFn_t fn; 
#line 1027
void *userData; 
#line 1028
}; 
#endif
#line 1033 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 1033
enum cudaStreamCaptureStatus { 
#line 1034
cudaStreamCaptureStatusNone, 
#line 1035
cudaStreamCaptureStatusActive, 
#line 1036
cudaStreamCaptureStatusInvalidated
#line 1038
}; 
#endif
#line 1043 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
struct cudaGraphicsResource; 
#line 1048
#if 0
#line 1048
enum cudaGraphicsRegisterFlags { 
#line 1050
cudaGraphicsRegisterFlagsNone, 
#line 1051
cudaGraphicsRegisterFlagsReadOnly, 
#line 1052
cudaGraphicsRegisterFlagsWriteDiscard, 
#line 1053
cudaGraphicsRegisterFlagsSurfaceLoadStore = 4, 
#line 1054
cudaGraphicsRegisterFlagsTextureGather = 8
#line 1055
}; 
#endif
#line 1060 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 1060
enum cudaGraphicsMapFlags { 
#line 1062
cudaGraphicsMapFlagsNone, 
#line 1063
cudaGraphicsMapFlagsReadOnly, 
#line 1064
cudaGraphicsMapFlagsWriteDiscard
#line 1065
}; 
#endif
#line 1070 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 1070
enum cudaGraphicsCubeFace { 
#line 1072
cudaGraphicsCubeFacePositiveX, 
#line 1073
cudaGraphicsCubeFaceNegativeX, 
#line 1074
cudaGraphicsCubeFacePositiveY, 
#line 1075
cudaGraphicsCubeFaceNegativeY, 
#line 1076
cudaGraphicsCubeFacePositiveZ, 
#line 1077
cudaGraphicsCubeFaceNegativeZ
#line 1078
}; 
#endif
#line 1083 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 1083
enum cudaResourceType { 
#line 1085
cudaResourceTypeArray, 
#line 1086
cudaResourceTypeMipmappedArray, 
#line 1087
cudaResourceTypeLinear, 
#line 1088
cudaResourceTypePitch2D
#line 1089
}; 
#endif
#line 1094 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 1094
enum cudaResourceViewFormat { 
#line 1096
cudaResViewFormatNone, 
#line 1097
cudaResViewFormatUnsignedChar1, 
#line 1098
cudaResViewFormatUnsignedChar2, 
#line 1099
cudaResViewFormatUnsignedChar4, 
#line 1100
cudaResViewFormatSignedChar1, 
#line 1101
cudaResViewFormatSignedChar2, 
#line 1102
cudaResViewFormatSignedChar4, 
#line 1103
cudaResViewFormatUnsignedShort1, 
#line 1104
cudaResViewFormatUnsignedShort2, 
#line 1105
cudaResViewFormatUnsignedShort4, 
#line 1106
cudaResViewFormatSignedShort1, 
#line 1107
cudaResViewFormatSignedShort2, 
#line 1108
cudaResViewFormatSignedShort4, 
#line 1109
cudaResViewFormatUnsignedInt1, 
#line 1110
cudaResViewFormatUnsignedInt2, 
#line 1111
cudaResViewFormatUnsignedInt4, 
#line 1112
cudaResViewFormatSignedInt1, 
#line 1113
cudaResViewFormatSignedInt2, 
#line 1114
cudaResViewFormatSignedInt4, 
#line 1115
cudaResViewFormatHalf1, 
#line 1116
cudaResViewFormatHalf2, 
#line 1117
cudaResViewFormatHalf4, 
#line 1118
cudaResViewFormatFloat1, 
#line 1119
cudaResViewFormatFloat2, 
#line 1120
cudaResViewFormatFloat4, 
#line 1121
cudaResViewFormatUnsignedBlockCompressed1, 
#line 1122
cudaResViewFormatUnsignedBlockCompressed2, 
#line 1123
cudaResViewFormatUnsignedBlockCompressed3, 
#line 1124
cudaResViewFormatUnsignedBlockCompressed4, 
#line 1125
cudaResViewFormatSignedBlockCompressed4, 
#line 1126
cudaResViewFormatUnsignedBlockCompressed5, 
#line 1127
cudaResViewFormatSignedBlockCompressed5, 
#line 1128
cudaResViewFormatUnsignedBlockCompressed6H, 
#line 1129
cudaResViewFormatSignedBlockCompressed6H, 
#line 1130
cudaResViewFormatUnsignedBlockCompressed7
#line 1131
}; 
#endif
#line 1136 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 1136
struct cudaResourceDesc { 
#line 1137
cudaResourceType resType; 
#line 1139
union { 
#line 1140
struct { 
#line 1141
cudaArray_t array; 
#line 1142
} array; 
#line 1143
struct { 
#line 1144
cudaMipmappedArray_t mipmap; 
#line 1145
} mipmap; 
#line 1146
struct { 
#line 1147
void *devPtr; 
#line 1148
cudaChannelFormatDesc desc; 
#line 1149
size_t sizeInBytes; 
#line 1150
} linear; 
#line 1151
struct { 
#line 1152
void *devPtr; 
#line 1153
cudaChannelFormatDesc desc; 
#line 1154
size_t width; 
#line 1155
size_t height; 
#line 1156
size_t pitchInBytes; 
#line 1157
} pitch2D; 
#line 1158
} res; 
#line 1159
}; 
#endif
#line 1164 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 1164
struct cudaResourceViewDesc { 
#line 1166
cudaResourceViewFormat format; 
#line 1167
size_t width; 
#line 1168
size_t height; 
#line 1169
size_t depth; 
#line 1170
unsigned firstMipmapLevel; 
#line 1171
unsigned lastMipmapLevel; 
#line 1172
unsigned firstLayer; 
#line 1173
unsigned lastLayer; 
#line 1174
}; 
#endif
#line 1179 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 1179
struct cudaPointerAttributes { 
#line 1189
__declspec(deprecated) cudaMemoryType memoryType; 
#line 1195
cudaMemoryType type; 
#line 1206
int device; 
#line 1212
void *devicePointer; 
#line 1221
void *hostPointer; 
#line 1228
__declspec(deprecated) int isManaged; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
#line 1229
}; 
#endif
#line 1234 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 1234
struct cudaFuncAttributes { 
#line 1241
size_t sharedSizeBytes; 
#line 1247
size_t constSizeBytes; 
#line 1252
size_t localSizeBytes; 
#line 1259
int maxThreadsPerBlock; 
#line 1264
int numRegs; 
#line 1271
int ptxVersion; 
#line 1278
int binaryVersion; 
#line 1284
int cacheModeCA; 
#line 1291
int maxDynamicSharedSizeBytes; 
#line 1298
int preferredShmemCarveout; 
#line 1299
}; 
#endif
#line 1304 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 1304
enum cudaFuncAttribute { 
#line 1306
cudaFuncAttributeMaxDynamicSharedMemorySize = 8, 
#line 1307
cudaFuncAttributePreferredSharedMemoryCarveout, 
#line 1308
cudaFuncAttributeMax
#line 1309
}; 
#endif
#line 1314 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 1314
enum cudaFuncCache { 
#line 1316
cudaFuncCachePreferNone, 
#line 1317
cudaFuncCachePreferShared, 
#line 1318
cudaFuncCachePreferL1, 
#line 1319
cudaFuncCachePreferEqual
#line 1320
}; 
#endif
#line 1326 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 1326
enum cudaSharedMemConfig { 
#line 1328
cudaSharedMemBankSizeDefault, 
#line 1329
cudaSharedMemBankSizeFourByte, 
#line 1330
cudaSharedMemBankSizeEightByte
#line 1331
}; 
#endif
#line 1336 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 1336
enum cudaSharedCarveout { 
#line 1337
cudaSharedmemCarveoutDefault = (-1), 
#line 1338
cudaSharedmemCarveoutMaxShared = 100, 
#line 1339
cudaSharedmemCarveoutMaxL1 = 0
#line 1340
}; 
#endif
#line 1345 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 1345
enum cudaComputeMode { 
#line 1347
cudaComputeModeDefault, 
#line 1348
cudaComputeModeExclusive, 
#line 1349
cudaComputeModeProhibited, 
#line 1350
cudaComputeModeExclusiveProcess
#line 1351
}; 
#endif
#line 1356 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 1356
enum cudaLimit { 
#line 1358
cudaLimitStackSize, 
#line 1359
cudaLimitPrintfFifoSize, 
#line 1360
cudaLimitMallocHeapSize, 
#line 1361
cudaLimitDevRuntimeSyncDepth, 
#line 1362
cudaLimitDevRuntimePendingLaunchCount, 
#line 1363
cudaLimitMaxL2FetchGranularity
#line 1364
}; 
#endif
#line 1369 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 1369
enum cudaMemoryAdvise { 
#line 1371
cudaMemAdviseSetReadMostly = 1, 
#line 1372
cudaMemAdviseUnsetReadMostly, 
#line 1373
cudaMemAdviseSetPreferredLocation, 
#line 1374
cudaMemAdviseUnsetPreferredLocation, 
#line 1375
cudaMemAdviseSetAccessedBy, 
#line 1376
cudaMemAdviseUnsetAccessedBy
#line 1377
}; 
#endif
#line 1382 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 1382
enum cudaMemRangeAttribute { 
#line 1384
cudaMemRangeAttributeReadMostly = 1, 
#line 1385
cudaMemRangeAttributePreferredLocation, 
#line 1386
cudaMemRangeAttributeAccessedBy, 
#line 1387
cudaMemRangeAttributeLastPrefetchLocation
#line 1388
}; 
#endif
#line 1393 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 1393
enum cudaOutputMode { 
#line 1395
cudaKeyValuePair, 
#line 1396
cudaCSV
#line 1397
}; 
#endif
#line 1402 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 1402
enum cudaDeviceAttr { 
#line 1404
cudaDevAttrMaxThreadsPerBlock = 1, 
#line 1405
cudaDevAttrMaxBlockDimX, 
#line 1406
cudaDevAttrMaxBlockDimY, 
#line 1407
cudaDevAttrMaxBlockDimZ, 
#line 1408
cudaDevAttrMaxGridDimX, 
#line 1409
cudaDevAttrMaxGridDimY, 
#line 1410
cudaDevAttrMaxGridDimZ, 
#line 1411
cudaDevAttrMaxSharedMemoryPerBlock, 
#line 1412
cudaDevAttrTotalConstantMemory, 
#line 1413
cudaDevAttrWarpSize, 
#line 1414
cudaDevAttrMaxPitch, 
#line 1415
cudaDevAttrMaxRegistersPerBlock, 
#line 1416
cudaDevAttrClockRate, 
#line 1417
cudaDevAttrTextureAlignment, 
#line 1418
cudaDevAttrGpuOverlap, 
#line 1419
cudaDevAttrMultiProcessorCount, 
#line 1420
cudaDevAttrKernelExecTimeout, 
#line 1421
cudaDevAttrIntegrated, 
#line 1422
cudaDevAttrCanMapHostMemory, 
#line 1423
cudaDevAttrComputeMode, 
#line 1424
cudaDevAttrMaxTexture1DWidth, 
#line 1425
cudaDevAttrMaxTexture2DWidth, 
#line 1426
cudaDevAttrMaxTexture2DHeight, 
#line 1427
cudaDevAttrMaxTexture3DWidth, 
#line 1428
cudaDevAttrMaxTexture3DHeight, 
#line 1429
cudaDevAttrMaxTexture3DDepth, 
#line 1430
cudaDevAttrMaxTexture2DLayeredWidth, 
#line 1431
cudaDevAttrMaxTexture2DLayeredHeight, 
#line 1432
cudaDevAttrMaxTexture2DLayeredLayers, 
#line 1433
cudaDevAttrSurfaceAlignment, 
#line 1434
cudaDevAttrConcurrentKernels, 
#line 1435
cudaDevAttrEccEnabled, 
#line 1436
cudaDevAttrPciBusId, 
#line 1437
cudaDevAttrPciDeviceId, 
#line 1438
cudaDevAttrTccDriver, 
#line 1439
cudaDevAttrMemoryClockRate, 
#line 1440
cudaDevAttrGlobalMemoryBusWidth, 
#line 1441
cudaDevAttrL2CacheSize, 
#line 1442
cudaDevAttrMaxThreadsPerMultiProcessor, 
#line 1443
cudaDevAttrAsyncEngineCount, 
#line 1444
cudaDevAttrUnifiedAddressing, 
#line 1445
cudaDevAttrMaxTexture1DLayeredWidth, 
#line 1446
cudaDevAttrMaxTexture1DLayeredLayers, 
#line 1447
cudaDevAttrMaxTexture2DGatherWidth = 45, 
#line 1448
cudaDevAttrMaxTexture2DGatherHeight, 
#line 1449
cudaDevAttrMaxTexture3DWidthAlt, 
#line 1450
cudaDevAttrMaxTexture3DHeightAlt, 
#line 1451
cudaDevAttrMaxTexture3DDepthAlt, 
#line 1452
cudaDevAttrPciDomainId, 
#line 1453
cudaDevAttrTexturePitchAlignment, 
#line 1454
cudaDevAttrMaxTextureCubemapWidth, 
#line 1455
cudaDevAttrMaxTextureCubemapLayeredWidth, 
#line 1456
cudaDevAttrMaxTextureCubemapLayeredLayers, 
#line 1457
cudaDevAttrMaxSurface1DWidth, 
#line 1458
cudaDevAttrMaxSurface2DWidth, 
#line 1459
cudaDevAttrMaxSurface2DHeight, 
#line 1460
cudaDevAttrMaxSurface3DWidth, 
#line 1461
cudaDevAttrMaxSurface3DHeight, 
#line 1462
cudaDevAttrMaxSurface3DDepth, 
#line 1463
cudaDevAttrMaxSurface1DLayeredWidth, 
#line 1464
cudaDevAttrMaxSurface1DLayeredLayers, 
#line 1465
cudaDevAttrMaxSurface2DLayeredWidth, 
#line 1466
cudaDevAttrMaxSurface2DLayeredHeight, 
#line 1467
cudaDevAttrMaxSurface2DLayeredLayers, 
#line 1468
cudaDevAttrMaxSurfaceCubemapWidth, 
#line 1469
cudaDevAttrMaxSurfaceCubemapLayeredWidth, 
#line 1470
cudaDevAttrMaxSurfaceCubemapLayeredLayers, 
#line 1471
cudaDevAttrMaxTexture1DLinearWidth, 
#line 1472
cudaDevAttrMaxTexture2DLinearWidth, 
#line 1473
cudaDevAttrMaxTexture2DLinearHeight, 
#line 1474
cudaDevAttrMaxTexture2DLinearPitch, 
#line 1475
cudaDevAttrMaxTexture2DMipmappedWidth, 
#line 1476
cudaDevAttrMaxTexture2DMipmappedHeight, 
#line 1477
cudaDevAttrComputeCapabilityMajor, 
#line 1478
cudaDevAttrComputeCapabilityMinor, 
#line 1479
cudaDevAttrMaxTexture1DMipmappedWidth, 
#line 1480
cudaDevAttrStreamPrioritiesSupported, 
#line 1481
cudaDevAttrGlobalL1CacheSupported, 
#line 1482
cudaDevAttrLocalL1CacheSupported, 
#line 1483
cudaDevAttrMaxSharedMemoryPerMultiprocessor, 
#line 1484
cudaDevAttrMaxRegistersPerMultiprocessor, 
#line 1485
cudaDevAttrManagedMemory, 
#line 1486
cudaDevAttrIsMultiGpuBoard, 
#line 1487
cudaDevAttrMultiGpuBoardGroupID, 
#line 1488
cudaDevAttrHostNativeAtomicSupported, 
#line 1489
cudaDevAttrSingleToDoublePrecisionPerfRatio, 
#line 1490
cudaDevAttrPageableMemoryAccess, 
#line 1491
cudaDevAttrConcurrentManagedAccess, 
#line 1492
cudaDevAttrComputePreemptionSupported, 
#line 1493
cudaDevAttrCanUseHostPointerForRegisteredMem, 
#line 1494
cudaDevAttrReserved92, 
#line 1495
cudaDevAttrReserved93, 
#line 1496
cudaDevAttrReserved94, 
#line 1497
cudaDevAttrCooperativeLaunch, 
#line 1498
cudaDevAttrCooperativeMultiDeviceLaunch, 
#line 1499
cudaDevAttrMaxSharedMemoryPerBlockOptin, 
#line 1500
cudaDevAttrCanFlushRemoteWrites, 
#line 1501
cudaDevAttrHostRegisterSupported, 
#line 1502
cudaDevAttrPageableMemoryAccessUsesHostPageTables, 
#line 1503
cudaDevAttrDirectManagedMemAccessFromHost
#line 1504
}; 
#endif
#line 1510 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 1510
enum cudaDeviceP2PAttr { 
#line 1511
cudaDevP2PAttrPerformanceRank = 1, 
#line 1512
cudaDevP2PAttrAccessSupported, 
#line 1513
cudaDevP2PAttrNativeAtomicSupported, 
#line 1514
cudaDevP2PAttrCudaArrayAccessSupported
#line 1515
}; 
#endif
#line 1522 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 1522
struct CUuuid_st { 
#line 1523
char bytes[16]; 
#line 1524
}; 
#endif
#line 1525 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
typedef CUuuid_st 
#line 1525
CUuuid; 
#endif
#line 1527 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
typedef CUuuid_st 
#line 1527
cudaUUID_t; 
#endif
#line 1532 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 1532
struct cudaDeviceProp { 
#line 1534
char name[256]; 
#line 1535
cudaUUID_t uuid; 
#line 1536
char luid[8]; 
#line 1537
unsigned luidDeviceNodeMask; 
#line 1538
size_t totalGlobalMem; 
#line 1539
size_t sharedMemPerBlock; 
#line 1540
int regsPerBlock; 
#line 1541
int warpSize; 
#line 1542
size_t memPitch; 
#line 1543
int maxThreadsPerBlock; 
#line 1544
int maxThreadsDim[3]; 
#line 1545
int maxGridSize[3]; 
#line 1546
int clockRate; 
#line 1547
size_t totalConstMem; 
#line 1548
int major; 
#line 1549
int minor; 
#line 1550
size_t textureAlignment; 
#line 1551
size_t texturePitchAlignment; 
#line 1552
int deviceOverlap; 
#line 1553
int multiProcessorCount; 
#line 1554
int kernelExecTimeoutEnabled; 
#line 1555
int integrated; 
#line 1556
int canMapHostMemory; 
#line 1557
int computeMode; 
#line 1558
int maxTexture1D; 
#line 1559
int maxTexture1DMipmap; 
#line 1560
int maxTexture1DLinear; 
#line 1561
int maxTexture2D[2]; 
#line 1562
int maxTexture2DMipmap[2]; 
#line 1563
int maxTexture2DLinear[3]; 
#line 1564
int maxTexture2DGather[2]; 
#line 1565
int maxTexture3D[3]; 
#line 1566
int maxTexture3DAlt[3]; 
#line 1567
int maxTextureCubemap; 
#line 1568
int maxTexture1DLayered[2]; 
#line 1569
int maxTexture2DLayered[3]; 
#line 1570
int maxTextureCubemapLayered[2]; 
#line 1571
int maxSurface1D; 
#line 1572
int maxSurface2D[2]; 
#line 1573
int maxSurface3D[3]; 
#line 1574
int maxSurface1DLayered[2]; 
#line 1575
int maxSurface2DLayered[3]; 
#line 1576
int maxSurfaceCubemap; 
#line 1577
int maxSurfaceCubemapLayered[2]; 
#line 1578
size_t surfaceAlignment; 
#line 1579
int concurrentKernels; 
#line 1580
int ECCEnabled; 
#line 1581
int pciBusID; 
#line 1582
int pciDeviceID; 
#line 1583
int pciDomainID; 
#line 1584
int tccDriver; 
#line 1585
int asyncEngineCount; 
#line 1586
int unifiedAddressing; 
#line 1587
int memoryClockRate; 
#line 1588
int memoryBusWidth; 
#line 1589
int l2CacheSize; 
#line 1590
int maxThreadsPerMultiProcessor; 
#line 1591
int streamPrioritiesSupported; 
#line 1592
int globalL1CacheSupported; 
#line 1593
int localL1CacheSupported; 
#line 1594
size_t sharedMemPerMultiprocessor; 
#line 1595
int regsPerMultiprocessor; 
#line 1596
int managedMemory; 
#line 1597
int isMultiGpuBoard; 
#line 1598
int multiGpuBoardGroupID; 
#line 1599
int hostNativeAtomicSupported; 
#line 1600
int singleToDoublePrecisionPerfRatio; 
#line 1601
int pageableMemoryAccess; 
#line 1602
int concurrentManagedAccess; 
#line 1603
int computePreemptionSupported; 
#line 1604
int canUseHostPointerForRegisteredMem; 
#line 1605
int cooperativeLaunch; 
#line 1606
int cooperativeMultiDeviceLaunch; 
#line 1607
size_t sharedMemPerBlockOptin; 
#line 1608
int pageableMemoryAccessUsesHostPageTables; 
#line 1609
int directManagedMemAccessFromHost; 
#line 1610
}; 
#endif
#line 1703 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
typedef 
#line 1700
struct cudaIpcEventHandle_st { 
#line 1702
char reserved[64]; 
#line 1703
} cudaIpcEventHandle_t; 
#endif
#line 1711 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
typedef 
#line 1708
struct cudaIpcMemHandle_st { 
#line 1710
char reserved[64]; 
#line 1711
} cudaIpcMemHandle_t; 
#endif
#line 1716 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 1716
enum cudaExternalMemoryHandleType { 
#line 1720
cudaExternalMemoryHandleTypeOpaqueFd = 1, 
#line 1724
cudaExternalMemoryHandleTypeOpaqueWin32, 
#line 1728
cudaExternalMemoryHandleTypeOpaqueWin32Kmt, 
#line 1732
cudaExternalMemoryHandleTypeD3D12Heap, 
#line 1736
cudaExternalMemoryHandleTypeD3D12Resource
#line 1737
}; 
#endif
#line 1747 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 1747
struct cudaExternalMemoryHandleDesc { 
#line 1751
cudaExternalMemoryHandleType type; 
#line 1752
union { 
#line 1758
int fd; 
#line 1770
struct { 
#line 1774
void *handle; 
#line 1779
const void *name; 
#line 1780
} win32; 
#line 1781
} handle; 
#line 1785
unsigned __int64 size; 
#line 1789
unsigned flags; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
#line 1790
}; 
#endif
#line 1795 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 1795
struct cudaExternalMemoryBufferDesc { 
#line 1799
unsigned __int64 offset; 
#line 1803
unsigned __int64 size; 
#line 1807
unsigned flags; 
#line 1808
}; 
#endif
#line 1813 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 1813
struct cudaExternalMemoryMipmappedArrayDesc { 
#line 1818
unsigned __int64 offset; 
#line 1822
cudaChannelFormatDesc formatDesc; 
#line 1826
cudaExtent extent; 
#line 1831
unsigned flags; 
#line 1835
unsigned numLevels; 
#line 1836
}; 
#endif
#line 1841 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 1841
enum cudaExternalSemaphoreHandleType { 
#line 1845
cudaExternalSemaphoreHandleTypeOpaqueFd = 1, 
#line 1849
cudaExternalSemaphoreHandleTypeOpaqueWin32, 
#line 1853
cudaExternalSemaphoreHandleTypeOpaqueWin32Kmt, 
#line 1857
cudaExternalSemaphoreHandleTypeD3D12Fence
#line 1858
}; 
#endif
#line 1863 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 1863
struct cudaExternalSemaphoreHandleDesc { 
#line 1867
cudaExternalSemaphoreHandleType type; 
#line 1868
union { 
#line 1873
int fd; 
#line 1884
struct { 
#line 1888
void *handle; 
#line 1893
const void *name; 
#line 1894
} win32; 
#line 1895
} handle; 
#line 1899
unsigned flags; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
#line 1900
}; 
#endif
#line 1905 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 1905
struct cudaExternalSemaphoreSignalParams { 
#line 1906
union { 
#line 1910
struct { 
#line 1914
unsigned __int64 value; 
#line 1915
} fence; 
#line 1916
} params; 
#line 1920
unsigned flags; 
#line 1921
}; 
#endif
#line 1926 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 1926
struct cudaExternalSemaphoreWaitParams { 
#line 1927
union { 
#line 1931
struct { 
#line 1935
unsigned __int64 value; 
#line 1936
} fence; 
#line 1937
} params; 
#line 1941
unsigned flags; 
#line 1942
}; 
#endif
#line 1954 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
typedef cudaError 
#line 1954
cudaError_t; 
#endif
#line 1959 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
typedef struct CUstream_st *
#line 1959
cudaStream_t; 
#endif
#line 1964 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
typedef struct CUevent_st *
#line 1964
cudaEvent_t; 
#endif
#line 1969 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
typedef cudaGraphicsResource *
#line 1969
cudaGraphicsResource_t; 
#endif
#line 1974 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
typedef cudaOutputMode 
#line 1974
cudaOutputMode_t; 
#endif
#line 1979 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
typedef struct CUexternalMemory_st *
#line 1979
cudaExternalMemory_t; 
#endif
#line 1984 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
typedef struct CUexternalSemaphore_st *
#line 1984
cudaExternalSemaphore_t; 
#endif
#line 1989 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
typedef struct CUgraph_st *
#line 1989
cudaGraph_t; 
#endif
#line 1994 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
typedef struct CUgraphNode_st *
#line 1994
cudaGraphNode_t; 
#endif
#line 1999 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 1999
enum cudaCGScope { 
#line 2000
cudaCGScopeInvalid, 
#line 2001
cudaCGScopeGrid, 
#line 2002
cudaCGScopeMultiGrid
#line 2003
}; 
#endif
#line 2008 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 2008
struct cudaLaunchParams { 
#line 2010
void *func; 
#line 2011
dim3 gridDim; 
#line 2012
dim3 blockDim; 
#line 2013
void **args; 
#line 2014
size_t sharedMem; 
#line 2015
cudaStream_t stream; 
#line 2016
}; 
#endif
#line 2021 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 2021
struct cudaKernelNodeParams { 
#line 2022
void *func; 
#line 2023
dim3 gridDim; 
#line 2024
dim3 blockDim; 
#line 2025
unsigned sharedMemBytes; 
#line 2026
void **kernelParams; 
#line 2027
void **extra; 
#line 2028
}; 
#endif
#line 2033 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
#if 0
#line 2033
enum cudaGraphNodeType { 
#line 2034
cudaGraphNodeTypeKernel, 
#line 2035
cudaGraphNodeTypeMemcpy, 
#line 2036
cudaGraphNodeTypeMemset, 
#line 2037
cudaGraphNodeTypeHost, 
#line 2038
cudaGraphNodeTypeGraph, 
#line 2039
cudaGraphNodeTypeEmpty, 
#line 2040
cudaGraphNodeTypeCount
#line 2041
}; 
#endif
#line 2046 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_types.h"
typedef struct CUgraphExec_st *cudaGraphExec_t; 
#line 84 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_types.h"
#if 0
#line 84
enum cudaSurfaceBoundaryMode { 
#line 86
cudaBoundaryModeZero, 
#line 87
cudaBoundaryModeClamp, 
#line 88
cudaBoundaryModeTrap
#line 89
}; 
#endif
#line 94 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_types.h"
#if 0
#line 94
enum cudaSurfaceFormatMode { 
#line 96
cudaFormatModeForced, 
#line 97
cudaFormatModeAuto
#line 98
}; 
#endif
#line 103 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_types.h"
#if 0
#line 103
struct surfaceReference { 
#line 108
cudaChannelFormatDesc channelDesc; 
#line 109
}; 
#endif
#line 114 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_types.h"
#if 0
typedef unsigned __int64 
#line 114
cudaSurfaceObject_t; 
#endif
#line 84 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_types.h"
#if 0
#line 84
enum cudaTextureAddressMode { 
#line 86
cudaAddressModeWrap, 
#line 87
cudaAddressModeClamp, 
#line 88
cudaAddressModeMirror, 
#line 89
cudaAddressModeBorder
#line 90
}; 
#endif
#line 95 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_types.h"
#if 0
#line 95
enum cudaTextureFilterMode { 
#line 97
cudaFilterModePoint, 
#line 98
cudaFilterModeLinear
#line 99
}; 
#endif
#line 104 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_types.h"
#if 0
#line 104
enum cudaTextureReadMode { 
#line 106
cudaReadModeElementType, 
#line 107
cudaReadModeNormalizedFloat
#line 108
}; 
#endif
#line 113 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_types.h"
#if 0
#line 113
struct textureReference { 
#line 118
int normalized; 
#line 122
cudaTextureFilterMode filterMode; 
#line 126
cudaTextureAddressMode addressMode[3]; 
#line 130
cudaChannelFormatDesc channelDesc; 
#line 134
int sRGB; 
#line 138
unsigned maxAnisotropy; 
#line 142
cudaTextureFilterMode mipmapFilterMode; 
#line 146
float mipmapLevelBias; 
#line 150
float minMipmapLevelClamp; 
#line 154
float maxMipmapLevelClamp; 
#line 155
int __cudaReserved[15]; 
#line 156
}; 
#endif
#line 161 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_types.h"
#if 0
#line 161
struct cudaTextureDesc { 
#line 166
cudaTextureAddressMode addressMode[3]; 
#line 170
cudaTextureFilterMode filterMode; 
#line 174
cudaTextureReadMode readMode; 
#line 178
int sRGB; 
#line 182
float borderColor[4]; 
#line 186
int normalizedCoords; 
#line 190
unsigned maxAnisotropy; 
#line 194
cudaTextureFilterMode mipmapFilterMode; 
#line 198
float mipmapLevelBias; 
#line 202
float minMipmapLevelClamp; 
#line 206
float maxMipmapLevelClamp; 
#line 207
}; 
#endif
#line 212 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_types.h"
#if 0
typedef unsigned __int64 
#line 212
cudaTextureObject_t; 
#endif
#line 70 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\library_types.h"
typedef 
#line 54
enum cudaDataType_t { 
#line 56
CUDA_R_16F = 2, 
#line 57
CUDA_C_16F = 6, 
#line 58
CUDA_R_32F = 0, 
#line 59
CUDA_C_32F = 4, 
#line 60
CUDA_R_64F = 1, 
#line 61
CUDA_C_64F = 5, 
#line 62
CUDA_R_8I = 3, 
#line 63
CUDA_C_8I = 7, 
#line 64
CUDA_R_8U, 
#line 65
CUDA_C_8U, 
#line 66
CUDA_R_32I, 
#line 67
CUDA_C_32I, 
#line 68
CUDA_R_32U, 
#line 69
CUDA_C_32U
#line 70
} cudaDataType; 
#line 78
typedef 
#line 73
enum libraryPropertyType_t { 
#line 75
MAJOR_VERSION, 
#line 76
MINOR_VERSION, 
#line 77
PATCH_LEVEL
#line 78
} libraryPropertyType; 
#line 121 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\cuda_device_runtime_api.h"
extern "C" {
#line 123
extern cudaError_t __stdcall cudaDeviceGetAttribute(int * value, cudaDeviceAttr attr, int device); 
#line 124
extern cudaError_t __stdcall cudaDeviceGetLimit(size_t * pValue, cudaLimit limit); 
#line 125
extern cudaError_t __stdcall cudaDeviceGetCacheConfig(cudaFuncCache * pCacheConfig); 
#line 126
extern cudaError_t __stdcall cudaDeviceGetSharedMemConfig(cudaSharedMemConfig * pConfig); 
#line 127
extern cudaError_t __stdcall cudaDeviceSynchronize(); 
#line 128
extern cudaError_t __stdcall cudaGetLastError(); 
#line 129
extern cudaError_t __stdcall cudaPeekAtLastError(); 
#line 130
extern const char *__stdcall cudaGetErrorString(cudaError_t error); 
#line 131
extern const char *__stdcall cudaGetErrorName(cudaError_t error); 
#line 132
extern cudaError_t __stdcall cudaGetDeviceCount(int * count); 
#line 133
extern cudaError_t __stdcall cudaGetDevice(int * device); 
#line 134
extern cudaError_t __stdcall cudaStreamCreateWithFlags(cudaStream_t * pStream, unsigned flags); 
#line 135
extern cudaError_t __stdcall cudaStreamDestroy(cudaStream_t stream); 
#line 136
extern cudaError_t __stdcall cudaStreamWaitEvent(cudaStream_t stream, cudaEvent_t event, unsigned flags); 
#line 137
extern cudaError_t __stdcall cudaStreamWaitEvent_ptsz(cudaStream_t stream, cudaEvent_t event, unsigned flags); 
#line 138
extern cudaError_t __stdcall cudaEventCreateWithFlags(cudaEvent_t * event, unsigned flags); 
#line 139
extern cudaError_t __stdcall cudaEventRecord(cudaEvent_t event, cudaStream_t stream); 
#line 140
extern cudaError_t __stdcall cudaEventRecord_ptsz(cudaEvent_t event, cudaStream_t stream); 
#line 141
extern cudaError_t __stdcall cudaEventDestroy(cudaEvent_t event); 
#line 142
extern cudaError_t __stdcall cudaFuncGetAttributes(cudaFuncAttributes * attr, const void * func); 
#line 143
extern cudaError_t __stdcall cudaFree(void * devPtr); 
#line 144
extern cudaError_t __stdcall cudaMalloc(void ** devPtr, size_t size); 
#line 145
extern cudaError_t __stdcall cudaMemcpyAsync(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream); 
#line 146
extern cudaError_t __stdcall cudaMemcpyAsync_ptsz(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream); 
#line 147
extern cudaError_t __stdcall cudaMemcpy2DAsync(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream); 
#line 148
extern cudaError_t __stdcall cudaMemcpy2DAsync_ptsz(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream); 
#line 149
extern cudaError_t __stdcall cudaMemcpy3DAsync(const cudaMemcpy3DParms * p, cudaStream_t stream); 
#line 150
extern cudaError_t __stdcall cudaMemcpy3DAsync_ptsz(const cudaMemcpy3DParms * p, cudaStream_t stream); 
#line 151
extern cudaError_t __stdcall cudaMemsetAsync(void * devPtr, int value, size_t count, cudaStream_t stream); 
#line 152
extern cudaError_t __stdcall cudaMemsetAsync_ptsz(void * devPtr, int value, size_t count, cudaStream_t stream); 
#line 153
extern cudaError_t __stdcall cudaMemset2DAsync(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream); 
#line 154
extern cudaError_t __stdcall cudaMemset2DAsync_ptsz(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream); 
#line 155
extern cudaError_t __stdcall cudaMemset3DAsync(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream); 
#line 156
extern cudaError_t __stdcall cudaMemset3DAsync_ptsz(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream); 
#line 157
extern cudaError_t __stdcall cudaRuntimeGetVersion(int * runtimeVersion); 
#line 178
extern void *__stdcall cudaGetParameterBuffer(size_t alignment, size_t size); 
#line 206
extern void *__stdcall cudaGetParameterBufferV2(void * func, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize); 
#line 207
extern cudaError_t __stdcall cudaLaunchDevice_ptsz(void * func, void * parameterBuffer, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize, cudaStream_t stream); 
#line 208
extern cudaError_t __stdcall cudaLaunchDeviceV2_ptsz(void * parameterBuffer, cudaStream_t stream); 
#line 226 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\cuda_device_runtime_api.h"
extern cudaError_t __stdcall cudaLaunchDevice(void * func, void * parameterBuffer, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize, cudaStream_t stream); 
#line 227
extern cudaError_t __stdcall cudaLaunchDeviceV2(void * parameterBuffer, cudaStream_t stream); 
#line 230 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\cuda_device_runtime_api.h"
extern cudaError_t __stdcall cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, const void * func, int blockSize, size_t dynamicSmemSize); 
#line 231
extern cudaError_t __stdcall cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, const void * func, int blockSize, size_t dynamicSmemSize, unsigned flags); 
#line 233
extern unsigned __int64 __stdcall cudaCGGetIntrinsicHandle(cudaCGScope scope); 
#line 234
extern cudaError_t __stdcall cudaCGSynchronize(unsigned __int64 handle, unsigned flags); 
#line 235
extern cudaError_t __stdcall cudaCGSynchronizeGrid(unsigned __int64 handle, unsigned flags); 
#line 236
extern cudaError_t __stdcall cudaCGGetSize(unsigned * numThreads, unsigned * numGrids, unsigned __int64 handle); 
#line 237
extern cudaError_t __stdcall cudaCGGetRank(unsigned * threadRank, unsigned * gridRank, unsigned __int64 handle); 
#line 238
}
#line 240
template< class T> static __inline cudaError_t cudaMalloc(T ** devPtr, size_t size); 
#line 241
template< class T> static __inline cudaError_t cudaFuncGetAttributes(cudaFuncAttributes * attr, T * entry); 
#line 242
template< class T> static __inline cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, T func, int blockSize, size_t dynamicSmemSize); 
#line 243
template< class T> static __inline cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, T func, int blockSize, size_t dynamicSmemSize, unsigned flags); 
#line 245 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\cuda_runtime_api.h"
extern "C" {
#line 280 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaDeviceReset(); 
#line 301
extern cudaError_t __stdcall cudaDeviceSynchronize(); 
#line 380
extern cudaError_t __stdcall cudaDeviceSetLimit(cudaLimit limit, size_t value); 
#line 413
extern cudaError_t __stdcall cudaDeviceGetLimit(size_t * pValue, cudaLimit limit); 
#line 446
extern cudaError_t __stdcall cudaDeviceGetCacheConfig(cudaFuncCache * pCacheConfig); 
#line 483
extern cudaError_t __stdcall cudaDeviceGetStreamPriorityRange(int * leastPriority, int * greatestPriority); 
#line 527
extern cudaError_t __stdcall cudaDeviceSetCacheConfig(cudaFuncCache cacheConfig); 
#line 558
extern cudaError_t __stdcall cudaDeviceGetSharedMemConfig(cudaSharedMemConfig * pConfig); 
#line 602
extern cudaError_t __stdcall cudaDeviceSetSharedMemConfig(cudaSharedMemConfig config); 
#line 629
extern cudaError_t __stdcall cudaDeviceGetByPCIBusId(int * device, const char * pciBusId); 
#line 659
extern cudaError_t __stdcall cudaDeviceGetPCIBusId(char * pciBusId, int len, int device); 
#line 706
extern cudaError_t __stdcall cudaIpcGetEventHandle(cudaIpcEventHandle_t * handle, cudaEvent_t event); 
#line 746
extern cudaError_t __stdcall cudaIpcOpenEventHandle(cudaEvent_t * event, cudaIpcEventHandle_t handle); 
#line 789
extern cudaError_t __stdcall cudaIpcGetMemHandle(cudaIpcMemHandle_t * handle, void * devPtr); 
#line 844
extern cudaError_t __stdcall cudaIpcOpenMemHandle(void ** devPtr, cudaIpcMemHandle_t handle, unsigned flags); 
#line 879
extern cudaError_t __stdcall cudaIpcCloseMemHandle(void * devPtr); 
#line 921
__declspec(deprecated) extern cudaError_t __stdcall cudaThreadExit(); 
#line 947
__declspec(deprecated) extern cudaError_t __stdcall cudaThreadSynchronize(); 
#line 996
__declspec(deprecated) extern cudaError_t __stdcall cudaThreadSetLimit(cudaLimit limit, size_t value); 
#line 1029
__declspec(deprecated) extern cudaError_t __stdcall cudaThreadGetLimit(size_t * pValue, cudaLimit limit); 
#line 1065
__declspec(deprecated) extern cudaError_t __stdcall cudaThreadGetCacheConfig(cudaFuncCache * pCacheConfig); 
#line 1112
__declspec(deprecated) extern cudaError_t __stdcall cudaThreadSetCacheConfig(cudaFuncCache cacheConfig); 
#line 1171
extern cudaError_t __stdcall cudaGetLastError(); 
#line 1217
extern cudaError_t __stdcall cudaPeekAtLastError(); 
#line 1233
extern const char *__stdcall cudaGetErrorName(cudaError_t error); 
#line 1249
extern const char *__stdcall cudaGetErrorString(cudaError_t error); 
#line 1277
extern cudaError_t __stdcall cudaGetDeviceCount(int * count); 
#line 1548
extern cudaError_t __stdcall cudaGetDeviceProperties(cudaDeviceProp * prop, int device); 
#line 1735
extern cudaError_t __stdcall cudaDeviceGetAttribute(int * value, cudaDeviceAttr attr, int device); 
#line 1775
extern cudaError_t __stdcall cudaDeviceGetP2PAttribute(int * value, cudaDeviceP2PAttr attr, int srcDevice, int dstDevice); 
#line 1796
extern cudaError_t __stdcall cudaChooseDevice(int * device, const cudaDeviceProp * prop); 
#line 1833
extern cudaError_t __stdcall cudaSetDevice(int device); 
#line 1854
extern cudaError_t __stdcall cudaGetDevice(int * device); 
#line 1885
extern cudaError_t __stdcall cudaSetValidDevices(int * device_arr, int len); 
#line 1951
extern cudaError_t __stdcall cudaSetDeviceFlags(unsigned flags); 
#line 1997
extern cudaError_t __stdcall cudaGetDeviceFlags(unsigned * flags); 
#line 2037
extern cudaError_t __stdcall cudaStreamCreate(cudaStream_t * pStream); 
#line 2069
extern cudaError_t __stdcall cudaStreamCreateWithFlags(cudaStream_t * pStream, unsigned flags); 
#line 2115
extern cudaError_t __stdcall cudaStreamCreateWithPriority(cudaStream_t * pStream, unsigned flags, int priority); 
#line 2142
extern cudaError_t __stdcall cudaStreamGetPriority(cudaStream_t hStream, int * priority); 
#line 2167
extern cudaError_t __stdcall cudaStreamGetFlags(cudaStream_t hStream, unsigned * flags); 
#line 2198
extern cudaError_t __stdcall cudaStreamDestroy(cudaStream_t stream); 
#line 2224
extern cudaError_t __stdcall cudaStreamWaitEvent(cudaStream_t stream, cudaEvent_t event, unsigned flags); 
#line 2232
typedef void (__stdcall *cudaStreamCallback_t)(cudaStream_t stream, cudaError_t status, void * userData); 
#line 2299
extern cudaError_t __stdcall cudaStreamAddCallback(cudaStream_t stream, cudaStreamCallback_t callback, void * userData, unsigned flags); 
#line 2323
extern cudaError_t __stdcall cudaStreamSynchronize(cudaStream_t stream); 
#line 2348
extern cudaError_t __stdcall cudaStreamQuery(cudaStream_t stream); 
#line 2431
extern cudaError_t __stdcall cudaStreamAttachMemAsync(cudaStream_t stream, void * devPtr, size_t length = 0, unsigned flags = 4); 
#line 2460
extern cudaError_t __stdcall cudaStreamBeginCapture(cudaStream_t stream); 
#line 2484
extern cudaError_t __stdcall cudaStreamEndCapture(cudaStream_t stream, cudaGraph_t * pGraph); 
#line 2523
extern cudaError_t __stdcall cudaStreamIsCapturing(cudaStream_t stream, cudaStreamCaptureStatus * pCaptureStatus); 
#line 2561
extern cudaError_t __stdcall cudaEventCreate(cudaEvent_t * event); 
#line 2598
extern cudaError_t __stdcall cudaEventCreateWithFlags(cudaEvent_t * event, unsigned flags); 
#line 2637
extern cudaError_t __stdcall cudaEventRecord(cudaEvent_t event, cudaStream_t stream = 0); 
#line 2668
extern cudaError_t __stdcall cudaEventQuery(cudaEvent_t event); 
#line 2698
extern cudaError_t __stdcall cudaEventSynchronize(cudaEvent_t event); 
#line 2725
extern cudaError_t __stdcall cudaEventDestroy(cudaEvent_t event); 
#line 2768
extern cudaError_t __stdcall cudaEventElapsedTime(float * ms, cudaEvent_t start, cudaEvent_t end); 
#line 2903
extern cudaError_t __stdcall cudaImportExternalMemory(cudaExternalMemory_t * extMem_out, const cudaExternalMemoryHandleDesc * memHandleDesc); 
#line 2955
extern cudaError_t __stdcall cudaExternalMemoryGetMappedBuffer(void ** devPtr, cudaExternalMemory_t extMem, const cudaExternalMemoryBufferDesc * bufferDesc); 
#line 3009
extern cudaError_t __stdcall cudaExternalMemoryGetMappedMipmappedArray(cudaMipmappedArray_t * mipmap, cudaExternalMemory_t extMem, const cudaExternalMemoryMipmappedArrayDesc * mipmapDesc); 
#line 3032
extern cudaError_t __stdcall cudaDestroyExternalMemory(cudaExternalMemory_t extMem); 
#line 3126
extern cudaError_t __stdcall cudaImportExternalSemaphore(cudaExternalSemaphore_t * extSem_out, const cudaExternalSemaphoreHandleDesc * semHandleDesc); 
#line 3165
extern cudaError_t __stdcall cudaSignalExternalSemaphoresAsync(const cudaExternalSemaphore_t * extSemArray, const cudaExternalSemaphoreSignalParams * paramsArray, unsigned numExtSems, cudaStream_t stream = 0); 
#line 3208
extern cudaError_t __stdcall cudaWaitExternalSemaphoresAsync(const cudaExternalSemaphore_t * extSemArray, const cudaExternalSemaphoreWaitParams * paramsArray, unsigned numExtSems, cudaStream_t stream = 0); 
#line 3230
extern cudaError_t __stdcall cudaDestroyExternalSemaphore(cudaExternalSemaphore_t extSem); 
#line 3295
extern cudaError_t __stdcall cudaLaunchKernel(const void * func, dim3 gridDim, dim3 blockDim, void ** args, size_t sharedMem, cudaStream_t stream); 
#line 3352
extern cudaError_t __stdcall cudaLaunchCooperativeKernel(const void * func, dim3 gridDim, dim3 blockDim, void ** args, size_t sharedMem, cudaStream_t stream); 
#line 3451
extern cudaError_t __stdcall cudaLaunchCooperativeKernelMultiDevice(cudaLaunchParams * launchParamsList, unsigned numDevices, unsigned flags = 0); 
#line 3501
extern cudaError_t __stdcall cudaFuncSetCacheConfig(const void * func, cudaFuncCache cacheConfig); 
#line 3557
extern cudaError_t __stdcall cudaFuncSetSharedMemConfig(const void * func, cudaSharedMemConfig config); 
#line 3593
extern cudaError_t __stdcall cudaFuncGetAttributes(cudaFuncAttributes * attr, const void * func); 
#line 3630
extern cudaError_t __stdcall cudaFuncSetAttribute(const void * func, cudaFuncAttribute attr, int value); 
#line 3656
__declspec(deprecated) extern cudaError_t __stdcall cudaSetDoubleForDevice(double * d); 
#line 3682
__declspec(deprecated) extern cudaError_t __stdcall cudaSetDoubleForHost(double * d); 
#line 3748
extern cudaError_t __stdcall cudaLaunchHostFunc(cudaStream_t stream, cudaHostFn_t fn, void * userData); 
#line 3803
extern cudaError_t __stdcall cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, const void * func, int blockSize, size_t dynamicSMemSize); 
#line 3847
extern cudaError_t __stdcall cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, const void * func, int blockSize, size_t dynamicSMemSize, unsigned flags); 
#line 3899
extern cudaError_t __stdcall cudaConfigureCall(dim3 gridDim, dim3 blockDim, size_t sharedMem = 0, cudaStream_t stream = 0); 
#line 3930
extern cudaError_t __stdcall cudaSetupArgument(const void * arg, size_t size, size_t offset); 
#line 3973
extern cudaError_t __stdcall cudaLaunch(const void * func); 
#line 4095
extern cudaError_t __stdcall cudaMallocManaged(void ** devPtr, size_t size, unsigned flags = 1); 
#line 4126
extern cudaError_t __stdcall cudaMalloc(void ** devPtr, size_t size); 
#line 4159
extern cudaError_t __stdcall cudaMallocHost(void ** ptr, size_t size); 
#line 4202
extern cudaError_t __stdcall cudaMallocPitch(void ** devPtr, size_t * pitch, size_t width, size_t height); 
#line 4248
extern cudaError_t __stdcall cudaMallocArray(cudaArray_t * array, const cudaChannelFormatDesc * desc, size_t width, size_t height = 0, unsigned flags = 0); 
#line 4277
extern cudaError_t __stdcall cudaFree(void * devPtr); 
#line 4300
extern cudaError_t __stdcall cudaFreeHost(void * ptr); 
#line 4323
extern cudaError_t __stdcall cudaFreeArray(cudaArray_t array); 
#line 4346
extern cudaError_t __stdcall cudaFreeMipmappedArray(cudaMipmappedArray_t mipmappedArray); 
#line 4412
extern cudaError_t __stdcall cudaHostAlloc(void ** pHost, size_t size, unsigned flags); 
#line 4496
extern cudaError_t __stdcall cudaHostRegister(void * ptr, size_t size, unsigned flags); 
#line 4519
extern cudaError_t __stdcall cudaHostUnregister(void * ptr); 
#line 4564
extern cudaError_t __stdcall cudaHostGetDevicePointer(void ** pDevice, void * pHost, unsigned flags); 
#line 4586
extern cudaError_t __stdcall cudaHostGetFlags(unsigned * pFlags, void * pHost); 
#line 4625
extern cudaError_t __stdcall cudaMalloc3D(cudaPitchedPtr * pitchedDevPtr, cudaExtent extent); 
#line 4764
extern cudaError_t __stdcall cudaMalloc3DArray(cudaArray_t * array, const cudaChannelFormatDesc * desc, cudaExtent extent, unsigned flags = 0); 
#line 4903
extern cudaError_t __stdcall cudaMallocMipmappedArray(cudaMipmappedArray_t * mipmappedArray, const cudaChannelFormatDesc * desc, cudaExtent extent, unsigned numLevels, unsigned flags = 0); 
#line 4932
extern cudaError_t __stdcall cudaGetMipmappedArrayLevel(cudaArray_t * levelArray, cudaMipmappedArray_const_t mipmappedArray, unsigned level); 
#line 5037
extern cudaError_t __stdcall cudaMemcpy3D(const cudaMemcpy3DParms * p); 
#line 5068
extern cudaError_t __stdcall cudaMemcpy3DPeer(const cudaMemcpy3DPeerParms * p); 
#line 5186
extern cudaError_t __stdcall cudaMemcpy3DAsync(const cudaMemcpy3DParms * p, cudaStream_t stream = 0); 
#line 5212
extern cudaError_t __stdcall cudaMemcpy3DPeerAsync(const cudaMemcpy3DPeerParms * p, cudaStream_t stream = 0); 
#line 5234
extern cudaError_t __stdcall cudaMemGetInfo(size_t * free, size_t * total); 
#line 5260
extern cudaError_t __stdcall cudaArrayGetInfo(cudaChannelFormatDesc * desc, cudaExtent * extent, unsigned * flags, cudaArray_t array); 
#line 5303
extern cudaError_t __stdcall cudaMemcpy(void * dst, const void * src, size_t count, cudaMemcpyKind kind); 
#line 5338
extern cudaError_t __stdcall cudaMemcpyPeer(void * dst, int dstDevice, const void * src, int srcDevice, size_t count); 
#line 5379
extern cudaError_t __stdcall cudaMemcpyToArray(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t count, cudaMemcpyKind kind); 
#line 5419
extern cudaError_t __stdcall cudaMemcpyFromArray(void * dst, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t count, cudaMemcpyKind kind); 
#line 5460
extern cudaError_t __stdcall cudaMemcpyArrayToArray(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst, cudaArray_const_t src, size_t wOffsetSrc, size_t hOffsetSrc, size_t count, cudaMemcpyKind kind = cudaMemcpyDeviceToDevice); 
#line 5508
extern cudaError_t __stdcall cudaMemcpy2D(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind); 
#line 5557
extern cudaError_t __stdcall cudaMemcpy2DToArray(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind); 
#line 5606
extern cudaError_t __stdcall cudaMemcpy2DFromArray(void * dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, cudaMemcpyKind kind); 
#line 5653
extern cudaError_t __stdcall cudaMemcpy2DArrayToArray(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst, cudaArray_const_t src, size_t wOffsetSrc, size_t hOffsetSrc, size_t width, size_t height, cudaMemcpyKind kind = cudaMemcpyDeviceToDevice); 
#line 5696
extern cudaError_t __stdcall cudaMemcpyToSymbol(const void * symbol, const void * src, size_t count, size_t offset = 0, cudaMemcpyKind kind = cudaMemcpyHostToDevice); 
#line 5739
extern cudaError_t __stdcall cudaMemcpyFromSymbol(void * dst, const void * symbol, size_t count, size_t offset = 0, cudaMemcpyKind kind = cudaMemcpyDeviceToHost); 
#line 5795
extern cudaError_t __stdcall cudaMemcpyAsync(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 5830
extern cudaError_t __stdcall cudaMemcpyPeerAsync(void * dst, int dstDevice, const void * src, int srcDevice, size_t count, cudaStream_t stream = 0); 
#line 5879
extern cudaError_t __stdcall cudaMemcpyToArrayAsync(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 5927
extern cudaError_t __stdcall cudaMemcpyFromArrayAsync(void * dst, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 5989
extern cudaError_t __stdcall cudaMemcpy2DAsync(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 6046
extern cudaError_t __stdcall cudaMemcpy2DToArrayAsync(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 6102
extern cudaError_t __stdcall cudaMemcpy2DFromArrayAsync(void * dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 6153
extern cudaError_t __stdcall cudaMemcpyToSymbolAsync(const void * symbol, const void * src, size_t count, size_t offset, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 6204
extern cudaError_t __stdcall cudaMemcpyFromSymbolAsync(void * dst, const void * symbol, size_t count, size_t offset, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 6233
extern cudaError_t __stdcall cudaMemset(void * devPtr, int value, size_t count); 
#line 6267
extern cudaError_t __stdcall cudaMemset2D(void * devPtr, size_t pitch, int value, size_t width, size_t height); 
#line 6311
extern cudaError_t __stdcall cudaMemset3D(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent); 
#line 6347
extern cudaError_t __stdcall cudaMemsetAsync(void * devPtr, int value, size_t count, cudaStream_t stream = 0); 
#line 6388
extern cudaError_t __stdcall cudaMemset2DAsync(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream = 0); 
#line 6439
extern cudaError_t __stdcall cudaMemset3DAsync(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream = 0); 
#line 6467
extern cudaError_t __stdcall cudaGetSymbolAddress(void ** devPtr, const void * symbol); 
#line 6494
extern cudaError_t __stdcall cudaGetSymbolSize(size_t * size, const void * symbol); 
#line 6564
extern cudaError_t __stdcall cudaMemPrefetchAsync(const void * devPtr, size_t count, int dstDevice, cudaStream_t stream = 0); 
#line 6680
extern cudaError_t __stdcall cudaMemAdvise(const void * devPtr, size_t count, cudaMemoryAdvise advice, int device); 
#line 6739
extern cudaError_t __stdcall cudaMemRangeGetAttribute(void * data, size_t dataSize, cudaMemRangeAttribute attribute, const void * devPtr, size_t count); 
#line 6778
extern cudaError_t __stdcall cudaMemRangeGetAttributes(void ** data, size_t * dataSizes, cudaMemRangeAttribute * attributes, size_t numAttributes, const void * devPtr, size_t count); 
#line 6944
extern cudaError_t __stdcall cudaPointerGetAttributes(cudaPointerAttributes * attributes, const void * ptr); 
#line 6985
extern cudaError_t __stdcall cudaDeviceCanAccessPeer(int * canAccessPeer, int device, int peerDevice); 
#line 7027
extern cudaError_t __stdcall cudaDeviceEnablePeerAccess(int peerDevice, unsigned flags); 
#line 7049
extern cudaError_t __stdcall cudaDeviceDisablePeerAccess(int peerDevice); 
#line 7112
extern cudaError_t __stdcall cudaGraphicsUnregisterResource(cudaGraphicsResource_t resource); 
#line 7147
extern cudaError_t __stdcall cudaGraphicsResourceSetMapFlags(cudaGraphicsResource_t resource, unsigned flags); 
#line 7186
extern cudaError_t __stdcall cudaGraphicsMapResources(int count, cudaGraphicsResource_t * resources, cudaStream_t stream = 0); 
#line 7221
extern cudaError_t __stdcall cudaGraphicsUnmapResources(int count, cudaGraphicsResource_t * resources, cudaStream_t stream = 0); 
#line 7253
extern cudaError_t __stdcall cudaGraphicsResourceGetMappedPointer(void ** devPtr, size_t * size, cudaGraphicsResource_t resource); 
#line 7291
extern cudaError_t __stdcall cudaGraphicsSubResourceGetMappedArray(cudaArray_t * array, cudaGraphicsResource_t resource, unsigned arrayIndex, unsigned mipLevel); 
#line 7320
extern cudaError_t __stdcall cudaGraphicsResourceGetMappedMipmappedArray(cudaMipmappedArray_t * mipmappedArray, cudaGraphicsResource_t resource); 
#line 7362
extern cudaError_t __stdcall cudaGetChannelDesc(cudaChannelFormatDesc * desc, cudaArray_const_t array); 
#line 7398
extern cudaChannelFormatDesc __stdcall cudaCreateChannelDesc(int x, int y, int z, int w, cudaChannelFormatKind f); 
#line 7451
extern cudaError_t __stdcall cudaBindTexture(size_t * offset, const textureReference * texref, const void * devPtr, const cudaChannelFormatDesc * desc, size_t size = 4294967295U); 
#line 7508
extern cudaError_t __stdcall cudaBindTexture2D(size_t * offset, const textureReference * texref, const void * devPtr, const cudaChannelFormatDesc * desc, size_t width, size_t height, size_t pitch); 
#line 7544
extern cudaError_t __stdcall cudaBindTextureToArray(const textureReference * texref, cudaArray_const_t array, const cudaChannelFormatDesc * desc); 
#line 7582
extern cudaError_t __stdcall cudaBindTextureToMipmappedArray(const textureReference * texref, cudaMipmappedArray_const_t mipmappedArray, const cudaChannelFormatDesc * desc); 
#line 7606
extern cudaError_t __stdcall cudaUnbindTexture(const textureReference * texref); 
#line 7633
extern cudaError_t __stdcall cudaGetTextureAlignmentOffset(size_t * offset, const textureReference * texref); 
#line 7661
extern cudaError_t __stdcall cudaGetTextureReference(const textureReference ** texref, const void * symbol); 
#line 7704
extern cudaError_t __stdcall cudaBindSurfaceToArray(const surfaceReference * surfref, cudaArray_const_t array, const cudaChannelFormatDesc * desc); 
#line 7727
extern cudaError_t __stdcall cudaGetSurfaceReference(const surfaceReference ** surfref, const void * symbol); 
#line 7957
extern cudaError_t __stdcall cudaCreateTextureObject(cudaTextureObject_t * pTexObject, const cudaResourceDesc * pResDesc, const cudaTextureDesc * pTexDesc, const cudaResourceViewDesc * pResViewDesc); 
#line 7976
extern cudaError_t __stdcall cudaDestroyTextureObject(cudaTextureObject_t texObject); 
#line 7996
extern cudaError_t __stdcall cudaGetTextureObjectResourceDesc(cudaResourceDesc * pResDesc, cudaTextureObject_t texObject); 
#line 8016
extern cudaError_t __stdcall cudaGetTextureObjectTextureDesc(cudaTextureDesc * pTexDesc, cudaTextureObject_t texObject); 
#line 8037
extern cudaError_t __stdcall cudaGetTextureObjectResourceViewDesc(cudaResourceViewDesc * pResViewDesc, cudaTextureObject_t texObject); 
#line 8080
extern cudaError_t __stdcall cudaCreateSurfaceObject(cudaSurfaceObject_t * pSurfObject, const cudaResourceDesc * pResDesc); 
#line 8099
extern cudaError_t __stdcall cudaDestroySurfaceObject(cudaSurfaceObject_t surfObject); 
#line 8118
extern cudaError_t __stdcall cudaGetSurfaceObjectResourceDesc(cudaResourceDesc * pResDesc, cudaSurfaceObject_t surfObject); 
#line 8152
extern cudaError_t __stdcall cudaDriverGetVersion(int * driverVersion); 
#line 8177
extern cudaError_t __stdcall cudaRuntimeGetVersion(int * runtimeVersion); 
#line 8224
extern cudaError_t __stdcall cudaGraphCreate(cudaGraph_t * pGraph, unsigned flags); 
#line 8321
extern cudaError_t __stdcall cudaGraphAddKernelNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaKernelNodeParams * pNodeParams); 
#line 8354
extern cudaError_t __stdcall cudaGraphKernelNodeGetParams(cudaGraphNode_t node, cudaKernelNodeParams * pNodeParams); 
#line 8379
extern cudaError_t __stdcall cudaGraphKernelNodeSetParams(cudaGraphNode_t node, const cudaKernelNodeParams * pNodeParams); 
#line 8423
extern cudaError_t __stdcall cudaGraphAddMemcpyNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaMemcpy3DParms * pCopyParams); 
#line 8446
extern cudaError_t __stdcall cudaGraphMemcpyNodeGetParams(cudaGraphNode_t node, cudaMemcpy3DParms * pNodeParams); 
#line 8469
extern cudaError_t __stdcall cudaGraphMemcpyNodeSetParams(cudaGraphNode_t node, const cudaMemcpy3DParms * pNodeParams); 
#line 8511
extern cudaError_t __stdcall cudaGraphAddMemsetNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaMemsetParams * pMemsetParams); 
#line 8534
extern cudaError_t __stdcall cudaGraphMemsetNodeGetParams(cudaGraphNode_t node, cudaMemsetParams * pNodeParams); 
#line 8557
extern cudaError_t __stdcall cudaGraphMemsetNodeSetParams(cudaGraphNode_t node, const cudaMemsetParams * pNodeParams); 
#line 8596
extern cudaError_t __stdcall cudaGraphAddHostNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaHostNodeParams * pNodeParams); 
#line 8619
extern cudaError_t __stdcall cudaGraphHostNodeGetParams(cudaGraphNode_t node, cudaHostNodeParams * pNodeParams); 
#line 8642
extern cudaError_t __stdcall cudaGraphHostNodeSetParams(cudaGraphNode_t node, const cudaHostNodeParams * pNodeParams); 
#line 8680
extern cudaError_t __stdcall cudaGraphAddChildGraphNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, cudaGraphNode_t * pDependencies, size_t numDependencies, cudaGraph_t childGraph); 
#line 8704
extern cudaError_t __stdcall cudaGraphChildGraphNodeGetGraph(cudaGraphNode_t node, cudaGraph_t * pGraph); 
#line 8741
extern cudaError_t __stdcall cudaGraphAddEmptyNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, cudaGraphNode_t * pDependencies, size_t numDependencies); 
#line 8768
extern cudaError_t __stdcall cudaGraphClone(cudaGraph_t * pGraphClone, cudaGraph_t originalGraph); 
#line 8796
extern cudaError_t __stdcall cudaGraphNodeFindInClone(cudaGraphNode_t * pNode, cudaGraphNode_t originalNode, cudaGraph_t clonedGraph); 
#line 8827
extern cudaError_t __stdcall cudaGraphNodeGetType(cudaGraphNode_t node, cudaGraphNodeType * pType); 
#line 8858
extern cudaError_t __stdcall cudaGraphGetNodes(cudaGraph_t graph, cudaGraphNode_t * nodes, size_t * numNodes); 
#line 8889
extern cudaError_t __stdcall cudaGraphGetRootNodes(cudaGraph_t graph, cudaGraphNode_t * pRootNodes, size_t * pNumRootNodes); 
#line 8923
extern cudaError_t __stdcall cudaGraphGetEdges(cudaGraph_t graph, cudaGraphNode_t * from, cudaGraphNode_t * to, size_t * numEdges); 
#line 8954
extern cudaError_t __stdcall cudaGraphNodeGetDependencies(cudaGraphNode_t node, cudaGraphNode_t * pDependencies, size_t * pNumDependencies); 
#line 8986
extern cudaError_t __stdcall cudaGraphNodeGetDependentNodes(cudaGraphNode_t node, cudaGraphNode_t * pDependentNodes, size_t * pNumDependentNodes); 
#line 9017
extern cudaError_t __stdcall cudaGraphAddDependencies(cudaGraph_t graph, cudaGraphNode_t * from, cudaGraphNode_t * to, size_t numDependencies); 
#line 9048
extern cudaError_t __stdcall cudaGraphRemoveDependencies(cudaGraph_t graph, cudaGraphNode_t * from, cudaGraphNode_t * to, size_t numDependencies); 
#line 9074
extern cudaError_t __stdcall cudaGraphDestroyNode(cudaGraphNode_t node); 
#line 9110
extern cudaError_t __stdcall cudaGraphInstantiate(cudaGraphExec_t * pGraphExec, cudaGraph_t graph, cudaGraphNode_t * pErrorNode, char * pLogBuffer, size_t bufferSize); 
#line 9135
extern cudaError_t __stdcall cudaGraphLaunch(cudaGraphExec_t graphExec, cudaStream_t stream); 
#line 9156
extern cudaError_t __stdcall cudaGraphExecDestroy(cudaGraphExec_t graphExec); 
#line 9176
extern cudaError_t __stdcall cudaGraphDestroy(cudaGraph_t graph); 
#line 9181
extern cudaError_t __stdcall cudaGetExportTable(const void ** ppExportTable, const cudaUUID_t * pExportTableId); 
#line 9432 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\cuda_runtime_api.h"
}
#line 104 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\channel_descriptor.h"
template< class T> __inline ::cudaChannelFormatDesc cudaCreateChannelDesc() 
#line 105
{ 
#line 106
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone); 
#line 107
} 
#line 109
static __inline cudaChannelFormatDesc cudaCreateChannelDescHalf() 
#line 110
{ 
#line 111
int e = (((int)sizeof(unsigned short)) * 8); 
#line 113
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
#line 114
} 
#line 116
static __inline cudaChannelFormatDesc cudaCreateChannelDescHalf1() 
#line 117
{ 
#line 118
int e = (((int)sizeof(unsigned short)) * 8); 
#line 120
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
#line 121
} 
#line 123
static __inline cudaChannelFormatDesc cudaCreateChannelDescHalf2() 
#line 124
{ 
#line 125
int e = (((int)sizeof(unsigned short)) * 8); 
#line 127
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
#line 128
} 
#line 130
static __inline cudaChannelFormatDesc cudaCreateChannelDescHalf4() 
#line 131
{ 
#line 132
int e = (((int)sizeof(unsigned short)) * 8); 
#line 134
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
#line 135
} 
#line 137
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< char> () 
#line 138
{ 
#line 139
int e = (((int)sizeof(char)) * 8); 
#line 144 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 146 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\channel_descriptor.h"
} 
#line 148
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> () 
#line 149
{ 
#line 150
int e = (((int)sizeof(signed char)) * 8); 
#line 152
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 153
} 
#line 155
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> () 
#line 156
{ 
#line 157
int e = (((int)sizeof(unsigned char)) * 8); 
#line 159
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 160
} 
#line 162
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> () 
#line 163
{ 
#line 164
int e = (((int)sizeof(signed char)) * 8); 
#line 166
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 167
} 
#line 169
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> () 
#line 170
{ 
#line 171
int e = (((int)sizeof(unsigned char)) * 8); 
#line 173
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 174
} 
#line 176
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> () 
#line 177
{ 
#line 178
int e = (((int)sizeof(signed char)) * 8); 
#line 180
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
#line 181
} 
#line 183
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> () 
#line 184
{ 
#line 185
int e = (((int)sizeof(unsigned char)) * 8); 
#line 187
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
#line 188
} 
#line 190
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> () 
#line 191
{ 
#line 192
int e = (((int)sizeof(signed char)) * 8); 
#line 194
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
#line 195
} 
#line 197
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> () 
#line 198
{ 
#line 199
int e = (((int)sizeof(unsigned char)) * 8); 
#line 201
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
#line 202
} 
#line 204
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< short> () 
#line 205
{ 
#line 206
int e = (((int)sizeof(short)) * 8); 
#line 208
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 209
} 
#line 211
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> () 
#line 212
{ 
#line 213
int e = (((int)sizeof(unsigned short)) * 8); 
#line 215
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 216
} 
#line 218
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> () 
#line 219
{ 
#line 220
int e = (((int)sizeof(short)) * 8); 
#line 222
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 223
} 
#line 225
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> () 
#line 226
{ 
#line 227
int e = (((int)sizeof(unsigned short)) * 8); 
#line 229
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 230
} 
#line 232
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> () 
#line 233
{ 
#line 234
int e = (((int)sizeof(short)) * 8); 
#line 236
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
#line 237
} 
#line 239
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> () 
#line 240
{ 
#line 241
int e = (((int)sizeof(unsigned short)) * 8); 
#line 243
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
#line 244
} 
#line 246
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> () 
#line 247
{ 
#line 248
int e = (((int)sizeof(short)) * 8); 
#line 250
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
#line 251
} 
#line 253
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> () 
#line 254
{ 
#line 255
int e = (((int)sizeof(unsigned short)) * 8); 
#line 257
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
#line 258
} 
#line 260
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< int> () 
#line 261
{ 
#line 262
int e = (((int)sizeof(int)) * 8); 
#line 264
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 265
} 
#line 267
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> () 
#line 268
{ 
#line 269
int e = (((int)sizeof(unsigned)) * 8); 
#line 271
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 272
} 
#line 274
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> () 
#line 275
{ 
#line 276
int e = (((int)sizeof(int)) * 8); 
#line 278
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 279
} 
#line 281
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> () 
#line 282
{ 
#line 283
int e = (((int)sizeof(unsigned)) * 8); 
#line 285
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 286
} 
#line 288
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> () 
#line 289
{ 
#line 290
int e = (((int)sizeof(int)) * 8); 
#line 292
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
#line 293
} 
#line 295
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> () 
#line 296
{ 
#line 297
int e = (((int)sizeof(unsigned)) * 8); 
#line 299
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
#line 300
} 
#line 302
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> () 
#line 303
{ 
#line 304
int e = (((int)sizeof(int)) * 8); 
#line 306
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
#line 307
} 
#line 309
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> () 
#line 310
{ 
#line 311
int e = (((int)sizeof(unsigned)) * 8); 
#line 313
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
#line 314
} 
#line 318
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< long> () 
#line 319
{ 
#line 320
int e = (((int)sizeof(long)) * 8); 
#line 322
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 323
} 
#line 325
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned long> () 
#line 326
{ 
#line 327
int e = (((int)sizeof(unsigned long)) * 8); 
#line 329
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 330
} 
#line 332
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< long1> () 
#line 333
{ 
#line 334
int e = (((int)sizeof(long)) * 8); 
#line 336
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 337
} 
#line 339
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ulong1> () 
#line 340
{ 
#line 341
int e = (((int)sizeof(unsigned long)) * 8); 
#line 343
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 344
} 
#line 346
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< long2> () 
#line 347
{ 
#line 348
int e = (((int)sizeof(long)) * 8); 
#line 350
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
#line 351
} 
#line 353
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ulong2> () 
#line 354
{ 
#line 355
int e = (((int)sizeof(unsigned long)) * 8); 
#line 357
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
#line 358
} 
#line 360
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< long4> () 
#line 361
{ 
#line 362
int e = (((int)sizeof(long)) * 8); 
#line 364
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
#line 365
} 
#line 367
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ulong4> () 
#line 368
{ 
#line 369
int e = (((int)sizeof(unsigned long)) * 8); 
#line 371
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
#line 372
} 
#line 376 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< float> () 
#line 377
{ 
#line 378
int e = (((int)sizeof(float)) * 8); 
#line 380
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
#line 381
} 
#line 383
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> () 
#line 384
{ 
#line 385
int e = (((int)sizeof(float)) * 8); 
#line 387
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
#line 388
} 
#line 390
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> () 
#line 391
{ 
#line 392
int e = (((int)sizeof(float)) * 8); 
#line 394
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
#line 395
} 
#line 397
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> () 
#line 398
{ 
#line 399
int e = (((int)sizeof(float)) * 8); 
#line 401
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
#line 402
} 
#line 79 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\driver_functions.h"
static __inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz) 
#line 80
{ 
#line 81
cudaPitchedPtr s; 
#line 83
(s.ptr) = d; 
#line 84
(s.pitch) = p; 
#line 85
(s.xsize) = xsz; 
#line 86
(s.ysize) = ysz; 
#line 88
return s; 
#line 89
} 
#line 106
static __inline cudaPos make_cudaPos(size_t x, size_t y, size_t z) 
#line 107
{ 
#line 108
cudaPos p; 
#line 110
(p.x) = x; 
#line 111
(p.y) = y; 
#line 112
(p.z) = z; 
#line 114
return p; 
#line 115
} 
#line 132
static __inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d) 
#line 133
{ 
#line 134
cudaExtent e; 
#line 136
(e.width) = w; 
#line 137
(e.height) = h; 
#line 138
(e.depth) = d; 
#line 140
return e; 
#line 141
} 
#line 73 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_functions.h"
static __inline char1 make_char1(signed char x); 
#line 75
static __inline uchar1 make_uchar1(unsigned char x); 
#line 77
static __inline char2 make_char2(signed char x, signed char y); 
#line 79
static __inline uchar2 make_uchar2(unsigned char x, unsigned char y); 
#line 81
static __inline char3 make_char3(signed char x, signed char y, signed char z); 
#line 83
static __inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z); 
#line 85
static __inline char4 make_char4(signed char x, signed char y, signed char z, signed char w); 
#line 87
static __inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w); 
#line 89
static __inline short1 make_short1(short x); 
#line 91
static __inline ushort1 make_ushort1(unsigned short x); 
#line 93
static __inline short2 make_short2(short x, short y); 
#line 95
static __inline ushort2 make_ushort2(unsigned short x, unsigned short y); 
#line 97
static __inline short3 make_short3(short x, short y, short z); 
#line 99
static __inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z); 
#line 101
static __inline short4 make_short4(short x, short y, short z, short w); 
#line 103
static __inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w); 
#line 105
static __inline int1 make_int1(int x); 
#line 107
static __inline uint1 make_uint1(unsigned x); 
#line 109
static __inline int2 make_int2(int x, int y); 
#line 111
static __inline uint2 make_uint2(unsigned x, unsigned y); 
#line 113
static __inline int3 make_int3(int x, int y, int z); 
#line 115
static __inline uint3 make_uint3(unsigned x, unsigned y, unsigned z); 
#line 117
static __inline int4 make_int4(int x, int y, int z, int w); 
#line 119
static __inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w); 
#line 121
static __inline long1 make_long1(long x); 
#line 123
static __inline ulong1 make_ulong1(unsigned long x); 
#line 125
static __inline long2 make_long2(long x, long y); 
#line 127
static __inline ulong2 make_ulong2(unsigned long x, unsigned long y); 
#line 129
static __inline long3 make_long3(long x, long y, long z); 
#line 131
static __inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z); 
#line 133
static __inline long4 make_long4(long x, long y, long z, long w); 
#line 135
static __inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w); 
#line 137
static __inline float1 make_float1(float x); 
#line 139
static __inline float2 make_float2(float x, float y); 
#line 141
static __inline float3 make_float3(float x, float y, float z); 
#line 143
static __inline float4 make_float4(float x, float y, float z, float w); 
#line 145
static __inline longlong1 make_longlong1(__int64 x); 
#line 147
static __inline ulonglong1 make_ulonglong1(unsigned __int64 x); 
#line 149
static __inline longlong2 make_longlong2(__int64 x, __int64 y); 
#line 151
static __inline ulonglong2 make_ulonglong2(unsigned __int64 x, unsigned __int64 y); 
#line 153
static __inline longlong3 make_longlong3(__int64 x, __int64 y, __int64 z); 
#line 155
static __inline ulonglong3 make_ulonglong3(unsigned __int64 x, unsigned __int64 y, unsigned __int64 z); 
#line 157
static __inline longlong4 make_longlong4(__int64 x, __int64 y, __int64 z, __int64 w); 
#line 159
static __inline ulonglong4 make_ulonglong4(unsigned __int64 x, unsigned __int64 y, unsigned __int64 z, unsigned __int64 w); 
#line 161
static __inline double1 make_double1(double x); 
#line 163
static __inline double2 make_double2(double x, double y); 
#line 165
static __inline double3 make_double3(double x, double y, double z); 
#line 167
static __inline double4 make_double4(double x, double y, double z, double w); 
#line 73 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\vector_functions.hpp"
static __inline char1 make_char1(signed char x) 
#line 74
{ 
#line 75
char1 t; (t.x) = x; return t; 
#line 76
} 
#line 78
static __inline uchar1 make_uchar1(unsigned char x) 
#line 79
{ 
#line 80
uchar1 t; (t.x) = x; return t; 
#line 81
} 
#line 83
static __inline char2 make_char2(signed char x, signed char y) 
#line 84
{ 
#line 85
char2 t; (t.x) = x; (t.y) = y; return t; 
#line 86
} 
#line 88
static __inline uchar2 make_uchar2(unsigned char x, unsigned char y) 
#line 89
{ 
#line 90
uchar2 t; (t.x) = x; (t.y) = y; return t; 
#line 91
} 
#line 93
static __inline char3 make_char3(signed char x, signed char y, signed char z) 
#line 94
{ 
#line 95
char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 96
} 
#line 98
static __inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z) 
#line 99
{ 
#line 100
uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 101
} 
#line 103
static __inline char4 make_char4(signed char x, signed char y, signed char z, signed char w) 
#line 104
{ 
#line 105
char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 106
} 
#line 108
static __inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w) 
#line 109
{ 
#line 110
uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 111
} 
#line 113
static __inline short1 make_short1(short x) 
#line 114
{ 
#line 115
short1 t; (t.x) = x; return t; 
#line 116
} 
#line 118
static __inline ushort1 make_ushort1(unsigned short x) 
#line 119
{ 
#line 120
ushort1 t; (t.x) = x; return t; 
#line 121
} 
#line 123
static __inline short2 make_short2(short x, short y) 
#line 124
{ 
#line 125
short2 t; (t.x) = x; (t.y) = y; return t; 
#line 126
} 
#line 128
static __inline ushort2 make_ushort2(unsigned short x, unsigned short y) 
#line 129
{ 
#line 130
ushort2 t; (t.x) = x; (t.y) = y; return t; 
#line 131
} 
#line 133
static __inline short3 make_short3(short x, short y, short z) 
#line 134
{ 
#line 135
short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 136
} 
#line 138
static __inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z) 
#line 139
{ 
#line 140
ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 141
} 
#line 143
static __inline short4 make_short4(short x, short y, short z, short w) 
#line 144
{ 
#line 145
short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 146
} 
#line 148
static __inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w) 
#line 149
{ 
#line 150
ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 151
} 
#line 153
static __inline int1 make_int1(int x) 
#line 154
{ 
#line 155
int1 t; (t.x) = x; return t; 
#line 156
} 
#line 158
static __inline uint1 make_uint1(unsigned x) 
#line 159
{ 
#line 160
uint1 t; (t.x) = x; return t; 
#line 161
} 
#line 163
static __inline int2 make_int2(int x, int y) 
#line 164
{ 
#line 165
int2 t; (t.x) = x; (t.y) = y; return t; 
#line 166
} 
#line 168
static __inline uint2 make_uint2(unsigned x, unsigned y) 
#line 169
{ 
#line 170
uint2 t; (t.x) = x; (t.y) = y; return t; 
#line 171
} 
#line 173
static __inline int3 make_int3(int x, int y, int z) 
#line 174
{ 
#line 175
int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 176
} 
#line 178
static __inline uint3 make_uint3(unsigned x, unsigned y, unsigned z) 
#line 179
{ 
#line 180
uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 181
} 
#line 183
static __inline int4 make_int4(int x, int y, int z, int w) 
#line 184
{ 
#line 185
int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 186
} 
#line 188
static __inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w) 
#line 189
{ 
#line 190
uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 191
} 
#line 193
static __inline long1 make_long1(long x) 
#line 194
{ 
#line 195
long1 t; (t.x) = x; return t; 
#line 196
} 
#line 198
static __inline ulong1 make_ulong1(unsigned long x) 
#line 199
{ 
#line 200
ulong1 t; (t.x) = x; return t; 
#line 201
} 
#line 203
static __inline long2 make_long2(long x, long y) 
#line 204
{ 
#line 205
long2 t; (t.x) = x; (t.y) = y; return t; 
#line 206
} 
#line 208
static __inline ulong2 make_ulong2(unsigned long x, unsigned long y) 
#line 209
{ 
#line 210
ulong2 t; (t.x) = x; (t.y) = y; return t; 
#line 211
} 
#line 213
static __inline long3 make_long3(long x, long y, long z) 
#line 214
{ 
#line 215
long3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 216
} 
#line 218
static __inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z) 
#line 219
{ 
#line 220
ulong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 221
} 
#line 223
static __inline long4 make_long4(long x, long y, long z, long w) 
#line 224
{ 
#line 225
long4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 226
} 
#line 228
static __inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w) 
#line 229
{ 
#line 230
ulong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 231
} 
#line 233
static __inline float1 make_float1(float x) 
#line 234
{ 
#line 235
float1 t; (t.x) = x; return t; 
#line 236
} 
#line 238
static __inline float2 make_float2(float x, float y) 
#line 239
{ 
#line 240
float2 t; (t.x) = x; (t.y) = y; return t; 
#line 241
} 
#line 243
static __inline float3 make_float3(float x, float y, float z) 
#line 244
{ 
#line 245
float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 246
} 
#line 248
static __inline float4 make_float4(float x, float y, float z, float w) 
#line 249
{ 
#line 250
float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 251
} 
#line 253
static __inline longlong1 make_longlong1(__int64 x) 
#line 254
{ 
#line 255
longlong1 t; (t.x) = x; return t; 
#line 256
} 
#line 258
static __inline ulonglong1 make_ulonglong1(unsigned __int64 x) 
#line 259
{ 
#line 260
ulonglong1 t; (t.x) = x; return t; 
#line 261
} 
#line 263
static __inline longlong2 make_longlong2(__int64 x, __int64 y) 
#line 264
{ 
#line 265
longlong2 t; (t.x) = x; (t.y) = y; return t; 
#line 266
} 
#line 268
static __inline ulonglong2 make_ulonglong2(unsigned __int64 x, unsigned __int64 y) 
#line 269
{ 
#line 270
ulonglong2 t; (t.x) = x; (t.y) = y; return t; 
#line 271
} 
#line 273
static __inline longlong3 make_longlong3(__int64 x, __int64 y, __int64 z) 
#line 274
{ 
#line 275
longlong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 276
} 
#line 278
static __inline ulonglong3 make_ulonglong3(unsigned __int64 x, unsigned __int64 y, unsigned __int64 z) 
#line 279
{ 
#line 280
ulonglong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 281
} 
#line 283
static __inline longlong4 make_longlong4(__int64 x, __int64 y, __int64 z, __int64 w) 
#line 284
{ 
#line 285
longlong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 286
} 
#line 288
static __inline ulonglong4 make_ulonglong4(unsigned __int64 x, unsigned __int64 y, unsigned __int64 z, unsigned __int64 w) 
#line 289
{ 
#line 290
ulonglong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 291
} 
#line 293
static __inline double1 make_double1(double x) 
#line 294
{ 
#line 295
double1 t; (t.x) = x; return t; 
#line 296
} 
#line 298
static __inline double2 make_double2(double x, double y) 
#line 299
{ 
#line 300
double2 t; (t.x) = x; (t.y) = y; return t; 
#line 301
} 
#line 303
static __inline double3 make_double3(double x, double y, double z) 
#line 304
{ 
#line 305
double3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 306
} 
#line 308
static __inline double4 make_double4(double x, double y, double z, double w) 
#line 309
{ 
#line 310
double4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 311
} 
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\errno.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 19
int *__cdecl _errno(); 
#line 22
errno_t __cdecl _set_errno(int _Value); 
#line 23
errno_t __cdecl _get_errno(int * _Value); 
#line 25
unsigned long *__cdecl __doserrno(); 
#line 28
errno_t __cdecl _set_doserrno(unsigned long _Value); 
#line 29
errno_t __cdecl _get_doserrno(unsigned long * _Value); 
#line 130 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\errno.h"
}__pragma( pack ( pop )) 
#line 14 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime_string.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 19
const void *__cdecl memchr(const void * _Buf, int _Val, size_t _MaxCount); 
#line 26
int __cdecl memcmp(const void * _Buf1, const void * _Buf2, size_t _Size); 
#line 40 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime_string.h"
void *__cdecl memcpy(void * _Dst, const void * _Src, size_t _Size); 
#line 47
void *__cdecl memmove(void * _Dst, const void * _Src, size_t _Size); 
#line 60 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime_string.h"
void *__cdecl memset(void * _Dst, int _Val, size_t _Size); 
#line 67
const char *__cdecl strchr(const char * _Str, int _Val); 
#line 73
const char *__cdecl strrchr(const char * _Str, int _Ch); 
#line 79
const char *__cdecl strstr(const char * _Str, const char * _SubStr); 
#line 86
const __wchar_t *__cdecl wcschr(const __wchar_t * _Str, __wchar_t _Ch); 
#line 92
const __wchar_t *__cdecl wcsrchr(const __wchar_t * _Str, __wchar_t _Ch); 
#line 99
const __wchar_t *__cdecl wcsstr(const __wchar_t * _Str, const __wchar_t * _SubStr); 
#line 106
}__pragma( pack ( pop )) 
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_memcpy_s.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 35 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_memcpy_s.h"
static __inline errno_t __cdecl memcpy_s(void *const 
#line 36
_Destination, const rsize_t 
#line 37
_DestinationSize, const void *const 
#line 38
_Source, const rsize_t 
#line 39
_SourceSize) 
#line 41
{ 
#line 42
if (_SourceSize == (0)) 
#line 43
{ 
#line 44
return 0; 
#line 45
}  
#line 47
{ int _Expr_val = !(!(_Destination != (0))); if (!_Expr_val) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; }  } ; 
#line 48
if ((_Source == (0)) || (_DestinationSize < _SourceSize)) 
#line 49
{ 
#line 50
memset(_Destination, 0, _DestinationSize); 
#line 52
{ int _Expr_val = !(!(_Source != (0))); if (!_Expr_val) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; }  } ; 
#line 53
{ int _Expr_val = !(!(_DestinationSize >= _SourceSize)); if (!_Expr_val) { (*_errno()) = 34; _invalid_parameter_noinfo(); return 34; }  } ; 
#line 56
return 22; 
#line 57
}  
#pragma warning(suppress:4996)
memcpy(_Destination, _Source, _SourceSize); 
#line 60
return 0; 
#line 61
} 
#line 64
static __inline errno_t __cdecl memmove_s(void *const 
#line 65
_Destination, const rsize_t 
#line 66
_DestinationSize, const void *const 
#line 67
_Source, const rsize_t 
#line 68
_SourceSize) 
#line 70
{ 
#line 71
if (_SourceSize == (0)) 
#line 72
{ 
#line 73
return 0; 
#line 74
}  
#line 76
{ int _Expr_val = !(!(_Destination != (0))); if (!_Expr_val) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; }  } ; 
#line 77
{ int _Expr_val = !(!(_Source != (0))); if (!_Expr_val) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; }  } ; 
#line 78
{ int _Expr_val = !(!(_DestinationSize >= _SourceSize)); if (!_Expr_val) { (*_errno()) = 34; _invalid_parameter_noinfo(); return 34; }  } ; 
#line 80
#pragma warning(suppress:4996)
memmove(_Destination, _Source, _SourceSize); 
#line 82
return 0; 
#line 83
} 
#line 89 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_memcpy_s.h"
}__pragma( pack ( pop )) 
#line 19 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_memory.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 24
int __cdecl _memicmp(const void * _Buf1, const void * _Buf2, size_t _Size); 
#line 31
int __cdecl _memicmp_l(const void * _Buf1, const void * _Buf2, size_t _Size, _locale_t _Locale); 
#line 79 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_memory.h"
void *__cdecl memccpy(void * _Dst, const void * _Src, int _Val, size_t _Size); 
#line 87
int __cdecl memicmp(const void * _Buf1, const void * _Buf2, size_t _Size); 
#line 100 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_memory.h"
extern "C++" inline void *__cdecl memchr(void *
#line 101
_Pv, int 
#line 102
_C, size_t 
#line 103
_N) 
#line 105
{ 
#line 106
const void *const _Pvc = _Pv; 
#line 107
return const_cast< void *>(memchr(_Pvc, _C, _N)); 
#line 108
} 
#line 114 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_memory.h"
}__pragma( pack ( pop )) 
#line 16 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 28
errno_t __cdecl wcscat_s(__wchar_t * _Destination, rsize_t _SizeInWords, const __wchar_t * _Source); 
#line 35
errno_t __cdecl wcscpy_s(__wchar_t * _Destination, rsize_t _SizeInWords, const __wchar_t * _Source); 
#line 42
errno_t __cdecl wcsncat_s(__wchar_t * _Destination, rsize_t _SizeInWords, const __wchar_t * _Source, rsize_t _MaxCount); 
#line 50
errno_t __cdecl wcsncpy_s(__wchar_t * _Destination, rsize_t _SizeInWords, const __wchar_t * _Source, rsize_t _MaxCount); 
#line 58
__wchar_t *__cdecl wcstok_s(__wchar_t * _String, const __wchar_t * _Delimiter, __wchar_t ** _Context); 
#line 79 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__declspec(allocator) __wchar_t *__cdecl _wcsdup(const __wchar_t * _String); 
#line 89 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
extern "C++" {template < size_t _Size > inline errno_t __cdecl wcscat_s ( wchar_t ( & _Destination ) [ _Size ], wchar_t const * _Source ) throw ( ) { return wcscat_s ( _Destination, _Size, _Source ); }}
#line 97 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
__wchar_t *__cdecl wcscat(__wchar_t * _Destination, const __wchar_t * _Source); 
#line 105 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
#pragma warning(pop)
#line 109 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
int __cdecl wcscmp(const __wchar_t * _String1, const __wchar_t * _String2); 
#line 114
extern "C++" {template < size_t _Size > inline errno_t __cdecl wcscpy_s ( wchar_t ( & _Destination ) [ _Size ], wchar_t const * _Source ) throw ( ) { return wcscpy_s ( _Destination, _Size, _Source ); }}
#line 120 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
__wchar_t *__cdecl wcscpy(__wchar_t * _Destination, const __wchar_t * _Source); 
#line 128 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
#pragma warning(pop)
#line 131
size_t __cdecl wcscspn(const __wchar_t * _String, const __wchar_t * _Control); 
#line 137
size_t __cdecl wcslen(const __wchar_t * _String); 
#line 150 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
size_t __cdecl wcsnlen(const __wchar_t * _Source, size_t _MaxCount); 
#line 166 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
static __inline size_t __cdecl wcsnlen_s(const __wchar_t *
#line 167
_Source, size_t 
#line 168
_MaxCount) 
#line 170
{ 
#line 171
return (_Source == (0)) ? 0 : wcsnlen(_Source, _MaxCount); 
#line 172
} 
#line 176 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
extern "C++" {template < size_t _Size > inline errno_t __cdecl wcsncat_s ( wchar_t ( & _Destination ) [ _Size ], wchar_t const * _Source, size_t _Count ) throw ( ) { return wcsncat_s ( _Destination, _Size, _Source, _Count ); }}
#line 183 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl wcsncat(__wchar_t * _Destination, const __wchar_t * _Source, size_t _Count); 
#line 192 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
int __cdecl wcsncmp(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); 
#line 198
extern "C++" {template < size_t _Size > inline errno_t __cdecl wcsncpy_s ( wchar_t ( & _Destination ) [ _Size ], wchar_t const * _Source, size_t _Count ) throw ( ) { return wcsncpy_s ( _Destination, _Size, _Source, _Count ); }}
#line 205 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl wcsncpy(__wchar_t * _Destination, const __wchar_t * _Source, size_t _Count); 
#line 214 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
const __wchar_t *__cdecl wcspbrk(const __wchar_t * _String, const __wchar_t * _Control); 
#line 220
size_t __cdecl wcsspn(const __wchar_t * _String, const __wchar_t * _Control); 
#line 226
__wchar_t *__cdecl wcstok(__wchar_t * _String, const __wchar_t * _Delimiter, __wchar_t ** _Context); 
#line 243 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
#pragma warning(push)
#pragma warning(disable: 4141 4996)
#pragma warning(disable: 28719 28726 28727)
#line 247
static __inline __wchar_t *__cdecl _wcstok(__wchar_t *const 
#line 248
_String, const __wchar_t *const 
#line 249
_Delimiter) 
#line 251
{ 
#line 252
return wcstok(_String, _Delimiter, 0); 
#line 253
} 
#line 261 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
extern "C++" 
#line 260
__declspec(deprecated("wcstok has been changed to conform with the ISO C standard, adding an extra context parameter. To use the legacy Microsoft wcsto" "k, define _CRT_NON_CONFORMING_WCSTOK.")) inline __wchar_t *__cdecl 
#line 261
wcstok(__wchar_t *
#line 262
_String, const __wchar_t *
#line 263
_Delimiter) throw() 
#line 265
{ 
#line 266
return wcstok(_String, _Delimiter, 0); 
#line 267
} 
#line 270 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
#pragma warning(pop)
#line 278 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl _wcserror(int _ErrorNumber); 
#line 283
errno_t __cdecl _wcserror_s(__wchar_t * _Buffer, size_t _SizeInWords, int _ErrorNumber); 
#line 289
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcserror_s ( wchar_t ( & _Buffer ) [ _Size ], int _Error ) throw ( ) { return _wcserror_s ( _Buffer, _Size, _Error ); }}
#line 298 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl __wcserror(const __wchar_t * _String); 
#line 302
errno_t __cdecl __wcserror_s(__wchar_t * _Buffer, size_t _SizeInWords, const __wchar_t * _ErrorMessage); 
#line 308
extern "C++" {template < size_t _Size > inline errno_t __cdecl __wcserror_s ( wchar_t ( & _Buffer ) [ _Size ], wchar_t const * _ErrorMessage ) throw ( ) { return __wcserror_s ( _Buffer, _Size, _ErrorMessage ); }}
#line 314 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
int __cdecl _wcsicmp(const __wchar_t * _String1, const __wchar_t * _String2); 
#line 319
int __cdecl _wcsicmp_l(const __wchar_t * _String1, const __wchar_t * _String2, _locale_t _Locale); 
#line 325
int __cdecl _wcsnicmp(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); 
#line 331
int __cdecl _wcsnicmp_l(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 338
errno_t __cdecl _wcsnset_s(__wchar_t * _Destination, size_t _SizeInWords, __wchar_t _Value, size_t _MaxCount); 
#line 345
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcsnset_s ( wchar_t ( & _Destination ) [ _Size ], wchar_t _Value, size_t _MaxCount ) throw ( ) { return _wcsnset_s ( _Destination, _Size, _Value, _MaxCount ); }}
#line 352 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl _wcsnset(__wchar_t * _String, __wchar_t _Value, size_t _MaxCount); 
#line 360 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl _wcsrev(__wchar_t * _String); 
#line 364
errno_t __cdecl _wcsset_s(__wchar_t * _Destination, size_t _SizeInWords, __wchar_t _Value); 
#line 370
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcsset_s ( wchar_t ( & _String ) [ _Size ], wchar_t _Value ) throw ( ) { return _wcsset_s ( _String, _Size, _Value ); }}
#line 376 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl _wcsset(__wchar_t * _String, __wchar_t _Value); 
#line 383 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
errno_t __cdecl _wcslwr_s(__wchar_t * _String, size_t _SizeInWords); 
#line 388
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcslwr_s ( wchar_t ( & _String ) [ _Size ] ) throw ( ) { return _wcslwr_s ( _String, _Size ); }}
#line 393 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl _wcslwr(__wchar_t * _String); 
#line 399 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
errno_t __cdecl _wcslwr_s_l(__wchar_t * _String, size_t _SizeInWords, _locale_t _Locale); 
#line 405
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcslwr_s_l ( wchar_t ( & _String ) [ _Size ], _locale_t _Locale ) throw ( ) { return _wcslwr_s_l ( _String, _Size, _Locale ); }}
#line 411 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl _wcslwr_l(__wchar_t * _String, _locale_t _Locale); 
#line 419 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
errno_t __cdecl _wcsupr_s(__wchar_t * _String, size_t _Size); 
#line 424
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcsupr_s ( wchar_t ( & _String ) [ _Size ] ) throw ( ) { return _wcsupr_s ( _String, _Size ); }}
#line 429 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl _wcsupr(__wchar_t * _String); 
#line 435 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
errno_t __cdecl _wcsupr_s_l(__wchar_t * _String, size_t _Size, _locale_t _Locale); 
#line 441
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcsupr_s_l ( wchar_t ( & _String ) [ _Size ], _locale_t _Locale ) throw ( ) { return _wcsupr_s_l ( _String, _Size, _Locale ); }}
#line 447 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl _wcsupr_l(__wchar_t * _String, _locale_t _Locale); 
#line 456 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
size_t __cdecl wcsxfrm(__wchar_t * _Destination, const __wchar_t * _Source, size_t _MaxCount); 
#line 464
size_t __cdecl _wcsxfrm_l(__wchar_t * _Destination, const __wchar_t * _Source, size_t _MaxCount, _locale_t _Locale); 
#line 472
int __cdecl wcscoll(const __wchar_t * _String1, const __wchar_t * _String2); 
#line 478
int __cdecl _wcscoll_l(const __wchar_t * _String1, const __wchar_t * _String2, _locale_t _Locale); 
#line 485
int __cdecl _wcsicoll(const __wchar_t * _String1, const __wchar_t * _String2); 
#line 491
int __cdecl _wcsicoll_l(const __wchar_t * _String1, const __wchar_t * _String2, _locale_t _Locale); 
#line 498
int __cdecl _wcsncoll(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); 
#line 505
int __cdecl _wcsncoll_l(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 513
int __cdecl _wcsnicoll(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); 
#line 520
int __cdecl _wcsnicoll_l(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 535
extern "C++" {
#line 539
inline __wchar_t *__cdecl wcschr(__wchar_t *_String, __wchar_t _C) 
#line 540
{ 
#line 541
return const_cast< __wchar_t *>(wcschr(static_cast< const __wchar_t *>(_String), _C)); 
#line 542
} 
#line 545
inline __wchar_t *__cdecl wcspbrk(__wchar_t *_String, const __wchar_t *_Control) 
#line 546
{ 
#line 547
return const_cast< __wchar_t *>(wcspbrk(static_cast< const __wchar_t *>(_String), _Control)); 
#line 548
} 
#line 551
inline __wchar_t *__cdecl wcsrchr(__wchar_t *_String, __wchar_t _C) 
#line 552
{ 
#line 553
return const_cast< __wchar_t *>(wcsrchr(static_cast< const __wchar_t *>(_String), _C)); 
#line 554
} 
#line 558
inline __wchar_t *__cdecl wcsstr(__wchar_t *_String, const __wchar_t *_SubStr) 
#line 559
{ 
#line 560
return const_cast< __wchar_t *>(wcsstr(static_cast< const __wchar_t *>(_String), _SubStr)); 
#line 561
} 
#line 563
}
#line 580 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl wcsdup(const __wchar_t * _String); 
#line 592 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
int __cdecl wcsicmp(const __wchar_t * _String1, const __wchar_t * _String2); 
#line 598
int __cdecl wcsnicmp(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); 
#line 606
__wchar_t *__cdecl wcsnset(__wchar_t * _String, __wchar_t _Value, size_t _MaxCount); 
#line 614
__wchar_t *__cdecl wcsrev(__wchar_t * _String); 
#line 620
__wchar_t *__cdecl wcsset(__wchar_t * _String, __wchar_t _Value); 
#line 627
__wchar_t *__cdecl wcslwr(__wchar_t * _String); 
#line 633
__wchar_t *__cdecl wcsupr(__wchar_t * _String); 
#line 638
int __cdecl wcsicoll(const __wchar_t * _String1, const __wchar_t * _String2); 
#line 647 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
}__pragma( pack ( pop )) 
#line 19 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 28
errno_t __cdecl strcpy_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source); 
#line 35
errno_t __cdecl strcat_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source); 
#line 42
errno_t __cdecl strerror_s(char * _Buffer, size_t _SizeInBytes, int _ErrorNumber); 
#line 48
errno_t __cdecl strncat_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source, rsize_t _MaxCount); 
#line 56
errno_t __cdecl strncpy_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source, rsize_t _MaxCount); 
#line 64
char *__cdecl strtok_s(char * _String, const char * _Delimiter, char ** _Context); 
#line 72 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
void *__cdecl _memccpy(void * _Dst, const void * _Src, int _Val, size_t _MaxCount); 
#line 79
extern "C++" {template < size_t _Size > inline errno_t __cdecl strcat_s ( char ( & _Destination ) [ _Size ], char const * _Source ) throw ( ) { return strcat_s ( _Destination, _Size, _Source ); }}
#line 87 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
char *__cdecl strcat(char * _Destination, const char * _Source); 
#line 95 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
#pragma warning(pop)
#line 100 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
int __cdecl strcmp(const char * _Str1, const char * _Str2); 
#line 106
int __cdecl _strcmpi(const char * _String1, const char * _String2); 
#line 112
int __cdecl strcoll(const char * _String1, const char * _String2); 
#line 118
int __cdecl _strcoll_l(const char * _String1, const char * _String2, _locale_t _Locale); 
#line 124
extern "C++" {template < size_t _Size > inline errno_t __cdecl strcpy_s ( char ( & _Destination ) [ _Size ], char const * _Source ) throw ( ) { return strcpy_s ( _Destination, _Size, _Source ); }}
#line 130 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
char *__cdecl strcpy(char * _Destination, const char * _Source); 
#line 138 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
#pragma warning(pop)
#line 141
size_t __cdecl strcspn(const char * _Str, const char * _Control); 
#line 152 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
__declspec(allocator) char *__cdecl _strdup(const char * _Source); 
#line 163 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
char *__cdecl _strerror(const char * _ErrorMessage); 
#line 168
errno_t __cdecl _strerror_s(char * _Buffer, size_t _SizeInBytes, const char * _ErrorMessage); 
#line 174
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strerror_s ( char ( & _Buffer ) [ _Size ], char const * _ErrorMessage ) throw ( ) { return _strerror_s ( _Buffer, _Size, _ErrorMessage ); }}
#line 182 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
char *__cdecl strerror(int _ErrorMessage); 
#line 186
extern "C++" {template < size_t _Size > inline errno_t __cdecl strerror_s ( char ( & _Buffer ) [ _Size ], int _ErrorMessage ) throw ( ) { return strerror_s ( _Buffer, _Size, _ErrorMessage ); }}
#line 193 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
int __cdecl _stricmp(const char * _String1, const char * _String2); 
#line 199
int __cdecl _stricoll(const char * _String1, const char * _String2); 
#line 205
int __cdecl _stricoll_l(const char * _String1, const char * _String2, _locale_t _Locale); 
#line 212
int __cdecl _stricmp_l(const char * _String1, const char * _String2, _locale_t _Locale); 
#line 219
size_t __cdecl strlen(const char * _Str); 
#line 224
errno_t __cdecl _strlwr_s(char * _String, size_t _Size); 
#line 229
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strlwr_s ( char ( & _String ) [ _Size ] ) throw ( ) { return _strlwr_s ( _String, _Size ); }}
#line 234 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
char *__cdecl _strlwr(char * _String); 
#line 240 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
errno_t __cdecl _strlwr_s_l(char * _String, size_t _Size, _locale_t _Locale); 
#line 246
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strlwr_s_l ( char ( & _String ) [ _Size ], _locale_t _Locale ) throw ( ) { return _strlwr_s_l ( _String, _Size, _Locale ); }}
#line 252 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
char *__cdecl _strlwr_l(char * _String, _locale_t _Locale); 
#line 259 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
extern "C++" {template < size_t _Size > inline errno_t __cdecl strncat_s ( char ( & _Destination ) [ _Size ], char const * _Source, size_t _Count ) throw ( ) { return strncat_s ( _Destination, _Size, _Source, _Count ); }}
#line 266 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
char *__cdecl strncat(char * _Destination, const char * _Source, size_t _Count); 
#line 275 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
int __cdecl strncmp(const char * _Str1, const char * _Str2, size_t _MaxCount); 
#line 282
int __cdecl _strnicmp(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 289
int __cdecl _strnicmp_l(const char * _String1, const char * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 297
int __cdecl _strnicoll(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 304
int __cdecl _strnicoll_l(const char * _String1, const char * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 312
int __cdecl _strncoll(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 319
int __cdecl _strncoll_l(const char * _String1, const char * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 326
size_t __cdecl __strncnt(const char * _String, size_t _Count); 
#line 331
extern "C++" {template < size_t _Size > inline errno_t __cdecl strncpy_s ( char ( & _Destination ) [ _Size ], char const * _Source, size_t _Count ) throw ( ) { return strncpy_s ( _Destination, _Size, _Source, _Count ); }}
#line 338 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
char *__cdecl strncpy(char * _Destination, const char * _Source, size_t _Count); 
#line 355 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
size_t __cdecl strnlen(const char * _String, size_t _MaxCount); 
#line 371 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
static __inline size_t __cdecl strnlen_s(const char *
#line 372
_String, size_t 
#line 373
_MaxCount) 
#line 375
{ 
#line 376
return (_String == (0)) ? 0 : strnlen(_String, _MaxCount); 
#line 377
} 
#line 382 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
errno_t __cdecl _strnset_s(char * _String, size_t _SizeInBytes, int _Value, size_t _MaxCount); 
#line 389
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strnset_s ( char ( & _Destination ) [ _Size ], int _Value, size_t _Count ) throw ( ) { return _strnset_s ( _Destination, _Size, _Value, _Count ); }}
#line 396 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
char *__cdecl _strnset(char * _Destination, int _Value, size_t _Count); 
#line 405 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
const char *__cdecl strpbrk(const char * _Str, const char * _Control); 
#line 410
char *__cdecl _strrev(char * _Str); 
#line 415
errno_t __cdecl _strset_s(char * _Destination, size_t _DestinationSize, int _Value); 
#line 421
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strset_s ( char ( & _Destination ) [ _Size ], int _Value ) throw ( ) { return _strset_s ( _Destination, _Size, _Value ); }}
#line 427 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
char *__cdecl _strset(char * _Destination, int _Value); 
#line 434 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
size_t __cdecl strspn(const char * _Str, const char * _Control); 
#line 440
char *__cdecl strtok(char * _String, const char * _Delimiter); 
#line 446
errno_t __cdecl _strupr_s(char * _String, size_t _Size); 
#line 451
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strupr_s ( char ( & _String ) [ _Size ] ) throw ( ) { return _strupr_s ( _String, _Size ); }}
#line 456 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
char *__cdecl _strupr(char * _String); 
#line 462 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
errno_t __cdecl _strupr_s_l(char * _String, size_t _Size, _locale_t _Locale); 
#line 468
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strupr_s_l ( char ( & _String ) [ _Size ], _locale_t _Locale ) throw ( ) { return _strupr_s_l ( _String, _Size, _Locale ); }}
#line 474 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
char *__cdecl _strupr_l(char * _String, _locale_t _Locale); 
#line 483 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
size_t __cdecl strxfrm(char * _Destination, const char * _Source, size_t _MaxCount); 
#line 491
size_t __cdecl _strxfrm_l(char * _Destination, const char * _Source, size_t _MaxCount, _locale_t _Locale); 
#line 501
extern "C++" {
#line 504
inline char *__cdecl strchr(char *const _String, const int _Ch) 
#line 505
{ 
#line 506
return const_cast< char *>(strchr(static_cast< const char *>(_String), _Ch)); 
#line 507
} 
#line 510
inline char *__cdecl strpbrk(char *const _String, const char *const _Control) 
#line 511
{ 
#line 512
return const_cast< char *>(strpbrk(static_cast< const char *>(_String), _Control)); 
#line 513
} 
#line 516
inline char *__cdecl strrchr(char *const _String, const int _Ch) 
#line 517
{ 
#line 518
return const_cast< char *>(strrchr(static_cast< const char *>(_String), _Ch)); 
#line 519
} 
#line 522
inline char *__cdecl strstr(char *const _String, const char *const _SubString) 
#line 523
{ 
#line 524
return const_cast< char *>(strstr(static_cast< const char *>(_String), _SubString)); 
#line 525
} 
#line 526
}
#line 536 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
char *__cdecl strdup(const char * _String); 
#line 543
int __cdecl strcmpi(const char * _String1, const char * _String2); 
#line 549
int __cdecl stricmp(const char * _String1, const char * _String2); 
#line 555
char *__cdecl strlwr(char * _String); 
#line 560
int __cdecl strnicmp(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 567
char *__cdecl strnset(char * _String, int _Value, size_t _MaxCount); 
#line 574
char *__cdecl strrev(char * _String); 
#line 579
char *__cdecl strset(char * _String, int _Value); 
#line 584
char *__cdecl strupr(char * _String); 
#line 592 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\string.h"
}__pragma( pack ( pop )) 
#line 13 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wtime.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 22
struct tm { 
#line 24
int tm_sec; 
#line 25
int tm_min; 
#line 26
int tm_hour; 
#line 27
int tm_mday; 
#line 28
int tm_mon; 
#line 29
int tm_year; 
#line 30
int tm_wday; 
#line 31
int tm_yday; 
#line 32
int tm_isdst; 
#line 33
}; 
#line 44
__wchar_t *__cdecl _wasctime(const tm * _Tm); 
#line 50
errno_t __cdecl _wasctime_s(__wchar_t * _Buffer, size_t _SizeInWords, const tm * _Tm); 
#line 56
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wasctime_s ( wchar_t ( & _Buffer ) [ _Size ], struct tm const * _Time ) throw ( ) { return _wasctime_s ( _Buffer, _Size, _Time ); }}
#line 65 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wtime.h"
size_t __cdecl wcsftime(__wchar_t * _Buffer, size_t _SizeInWords, const __wchar_t * _Format, const tm * _Tm); 
#line 74
size_t __cdecl _wcsftime_l(__wchar_t * _Buffer, size_t _SizeInWords, const __wchar_t * _Format, const tm * _Tm, _locale_t _Locale); 
#line 84
__wchar_t *__cdecl _wctime32(const __time32_t * _Time); 
#line 89
errno_t __cdecl _wctime32_s(__wchar_t * _Buffer, size_t _SizeInWords, const __time32_t * _Time); 
#line 95
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wctime32_s ( wchar_t ( & _Buffer ) [ _Size ], __time32_t const * _Time ) throw ( ) { return _wctime32_s ( _Buffer, _Size, _Time ); }}
#line 104 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wtime.h"
__wchar_t *__cdecl _wctime64(const __time64_t * _Time); 
#line 109
errno_t __cdecl _wctime64_s(__wchar_t * _Buffer, size_t _SizeInWords, const __time64_t * _Time); 
#line 114
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wctime64_s ( wchar_t ( & _Buffer ) [ _Size ], __time64_t const * _Time ) throw ( ) { return _wctime64_s ( _Buffer, _Size, _Time ); }}
#line 121 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wtime.h"
errno_t __cdecl _wstrdate_s(__wchar_t * _Buffer, size_t _SizeInWords); 
#line 126
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wstrdate_s ( wchar_t ( & _Buffer ) [ _Size ] ) throw ( ) { return _wstrdate_s ( _Buffer, _Size ); }}
#line 131 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wtime.h"
__wchar_t *__cdecl _wstrdate(__wchar_t * _Buffer); 
#line 137 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wtime.h"
errno_t __cdecl _wstrtime_s(__wchar_t * _Buffer, size_t _SizeInWords); 
#line 142
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wstrtime_s ( wchar_t ( & _Buffer ) [ _Size ] ) throw ( ) { return _wstrtime_s ( _Buffer, _Size ); }}
#line 147 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wtime.h"
__wchar_t *__cdecl _wstrtime(__wchar_t * _Buffer); 
#line 160 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wtime.h"
#pragma warning(push)
#pragma warning(disable: 4996)
#line 185
static __inline __wchar_t *__cdecl _wctime(const time_t *const 
#line 186
_Time) 
#line 187
{ 
#line 188
return _wctime64(_Time); 
#line 189
} 
#line 192
static __inline errno_t __cdecl _wctime_s(__wchar_t *const 
#line 193
_Buffer, const size_t 
#line 194
_SizeInWords, const time_t *const 
#line 195
_Time) 
#line 197
{ 
#line 198
return _wctime64_s(_Buffer, _SizeInWords, _Time); 
#line 199
} 
#line 208 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wtime.h"
}
#line 203 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wtime.h"
#pragma warning(pop)
#line 208 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wtime.h"
__pragma( pack ( pop )) 
#line 15 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\time.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 24
typedef long clock_t; 
#line 26
struct _timespec32 { 
#line 28
__time32_t tv_sec; 
#line 29
long tv_nsec; 
#line 30
}; 
#line 32
struct _timespec64 { 
#line 34
__time64_t tv_sec; 
#line 35
long tv_nsec; 
#line 36
}; 
#line 39
struct timespec { 
#line 41
time_t tv_sec; 
#line 42
long tv_nsec; 
#line 43
}; 
#line 62 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\time.h"
int *__cdecl __daylight(); 
#line 68
long *__cdecl __dstbias(); 
#line 74
long *__cdecl __timezone(); 
#line 80
char **__cdecl __tzname(); 
#line 85
errno_t __cdecl _get_daylight(int * _Daylight); 
#line 90
errno_t __cdecl _get_dstbias(long * _DaylightSavingsBias); 
#line 95
errno_t __cdecl _get_timezone(long * _TimeZone); 
#line 100
errno_t __cdecl _get_tzname(size_t * _ReturnValue, char * _Buffer, size_t _SizeInBytes, int _Index); 
#line 117
char *__cdecl asctime(const tm * _Tm); 
#line 124
errno_t __cdecl asctime_s(char * _Buffer, size_t _SizeInBytes, const tm * _Tm); 
#line 131 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\time.h"
extern "C++" {template < size_t _Size > inline errno_t __cdecl asctime_s ( char ( & _Buffer ) [ _Size ], struct tm const * _Time ) throw ( ) { return asctime_s ( _Buffer, _Size, _Time ); }}
#line 138 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\time.h"
clock_t __cdecl clock(); 
#line 143
char *__cdecl _ctime32(const __time32_t * _Time); 
#line 148
errno_t __cdecl _ctime32_s(char * _Buffer, size_t _SizeInBytes, const __time32_t * _Time); 
#line 154
extern "C++" {template < size_t _Size > inline errno_t __cdecl _ctime32_s ( char ( & _Buffer ) [ _Size ], __time32_t const * _Time ) throw ( ) { return _ctime32_s ( _Buffer, _Size, _Time ); }}
#line 163 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\time.h"
char *__cdecl _ctime64(const __time64_t * _Time); 
#line 168
errno_t __cdecl _ctime64_s(char * _Buffer, size_t _SizeInBytes, const __time64_t * _Time); 
#line 174
extern "C++" {template < size_t _Size > inline errno_t __cdecl _ctime64_s ( char ( & _Buffer ) [ _Size ], __time64_t const * _Time ) throw ( ) { return _ctime64_s ( _Buffer, _Size, _Time ); }}
#line 181 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\time.h"
double __cdecl _difftime32(__time32_t _Time1, __time32_t _Time2); 
#line 187
double __cdecl _difftime64(__time64_t _Time1, __time64_t _Time2); 
#line 194
tm *__cdecl _gmtime32(const __time32_t * _Time); 
#line 199
errno_t __cdecl _gmtime32_s(tm * _Tm, const __time32_t * _Time); 
#line 206
tm *__cdecl _gmtime64(const __time64_t * _Time); 
#line 211
errno_t __cdecl _gmtime64_s(tm * _Tm, const __time64_t * _Time); 
#line 218
tm *__cdecl _localtime32(const __time32_t * _Time); 
#line 223
errno_t __cdecl _localtime32_s(tm * _Tm, const __time32_t * _Time); 
#line 230
tm *__cdecl _localtime64(const __time64_t * _Time); 
#line 235
errno_t __cdecl _localtime64_s(tm * _Tm, const __time64_t * _Time); 
#line 241
__time32_t __cdecl _mkgmtime32(tm * _Tm); 
#line 246
__time64_t __cdecl _mkgmtime64(tm * _Tm); 
#line 251
__time32_t __cdecl _mktime32(tm * _Tm); 
#line 256
__time64_t __cdecl _mktime64(tm * _Tm); 
#line 262
size_t __cdecl strftime(char * _Buffer, size_t _SizeInBytes, const char * _Format, const tm * _Tm); 
#line 271
size_t __cdecl _strftime_l(char * _Buffer, size_t _MaxSize, const char * _Format, const tm * _Tm, _locale_t _Locale); 
#line 280
errno_t __cdecl _strdate_s(char * _Buffer, size_t _SizeInBytes); 
#line 285
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strdate_s ( char ( & _Buffer ) [ _Size ] ) throw ( ) { return _strdate_s ( _Buffer, _Size ); }}
#line 290 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\time.h"
char *__cdecl _strdate(char * _Buffer); 
#line 296 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\time.h"
errno_t __cdecl _strtime_s(char * _Buffer, size_t _SizeInBytes); 
#line 301
extern "C++" {template < size_t _Size > inline errno_t __cdecl _strtime_s ( char ( & _Buffer ) [ _Size ] ) throw ( ) { return _strtime_s ( _Buffer, _Size ); }}
#line 306 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\time.h"
char *__cdecl _strtime(char * _Buffer); 
#line 311 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\time.h"
__time32_t __cdecl _time32(__time32_t * _Time); 
#line 315
__time64_t __cdecl _time64(__time64_t * _Time); 
#line 321
int __cdecl _timespec32_get(_timespec32 * _Ts, int _Base); 
#line 328
int __cdecl _timespec64_get(_timespec64 * _Ts, int _Base); 
#line 342
void __cdecl _tzset(); 
#line 345
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using GetLocalTime in" "stead. See online help for details.")) unsigned __cdecl 
#line 346
_getsystime(tm * _Tm); 
#line 350
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using SetLocalTime in" "stead. See online help for details.")) unsigned __cdecl 
#line 351
_setsystime(tm * _Tm, unsigned _Milliseconds); 
#line 476 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\time.h"
static __inline char *__cdecl ctime(const time_t *const 
#line 477
_Time) 
#line 479
{ 
#pragma warning(push)
#pragma warning(disable: 4996)
return _ctime64(_Time); 
#pragma warning(pop)
} 
#line 487
static __inline double __cdecl difftime(const time_t 
#line 488
_Time1, const time_t 
#line 489
_Time2) 
#line 491
{ 
#line 492
return _difftime64(_Time1, _Time2); 
#line 493
} 
#line 496
static __inline tm *__cdecl gmtime(const time_t *const 
#line 497
_Time) 
#line 498
{ 
#pragma warning(push)
#pragma warning(disable: 4996)
return _gmtime64(_Time); 
#pragma warning(pop)
} 
#line 506
static __inline tm *__cdecl localtime(const time_t *const 
#line 507
_Time) 
#line 509
{ 
#pragma warning(push)
#pragma warning(disable: 4996)
return _localtime64(_Time); 
#pragma warning(pop)
} 
#line 517
static __inline time_t __cdecl _mkgmtime(tm *const 
#line 518
_Tm) 
#line 520
{ 
#line 521
return _mkgmtime64(_Tm); 
#line 522
} 
#line 525
static __inline time_t __cdecl mktime(tm *const 
#line 526
_Tm) 
#line 528
{ 
#line 529
return _mktime64(_Tm); 
#line 530
} 
#line 532
static __inline time_t __cdecl time(time_t *const 
#line 533
_Time) 
#line 535
{ 
#line 536
return _time64(_Time); 
#line 537
} 
#line 540
static __inline int __cdecl timespec_get(timespec *const 
#line 541
_Ts, const int 
#line 542
_Base) 
#line 544
{ 
#line 545
return _timespec64_get((_timespec64 *)_Ts, _Base); 
#line 546
} 
#line 550
static __inline errno_t __cdecl ctime_s(char *const 
#line 551
_Buffer, const size_t 
#line 552
_SizeInBytes, const time_t *const 
#line 553
_Time) 
#line 555
{ 
#line 556
return _ctime64_s(_Buffer, _SizeInBytes, _Time); 
#line 557
} 
#line 560
static __inline errno_t __cdecl gmtime_s(tm *const 
#line 561
_Tm, const time_t *const 
#line 562
_Time) 
#line 564
{ 
#line 565
return _gmtime64_s(_Tm, _Time); 
#line 566
} 
#line 569
static __inline errno_t __cdecl localtime_s(tm *const 
#line 570
_Tm, const time_t *const 
#line 571
_Time) 
#line 573
{ 
#line 574
return _localtime64_s(_Tm, _Time); 
#line 575
} 
#line 594 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\time.h"
void __cdecl tzset(); 
#line 601 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\time.h"
}__pragma( pack ( pop )) 
#line 80 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt/common_functions.h"
extern "C" {
#line 83 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt/common_functions.h"
extern clock_t __cdecl clock(); 
#line 88 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt/common_functions.h"
extern void *__cdecl memset(void *, int, size_t); 
#line 89
extern void *__cdecl memcpy(void *, const void *, size_t); 
#line 91
}
#line 108 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern "C" {
#line 192 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern int __cdecl abs(int); 
#line 193
extern long __cdecl labs(long); 
#line 194
extern __int64 llabs(__int64); 
#line 244 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl fabs(double x); 
#line 285
extern __inline float fabsf(float x); 
#line 289 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern inline int min(int, int); 
#line 291
extern inline unsigned umin(unsigned, unsigned); 
#line 292
extern inline __int64 llmin(__int64, __int64); 
#line 293
extern inline unsigned __int64 ullmin(unsigned __int64, unsigned __int64); 
#line 316 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern float __cdecl fminf(float x, float y); 
#line 336 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl fmin(double x, double y); 
#line 341 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern inline int max(int, int); 
#line 343
extern inline unsigned umax(unsigned, unsigned); 
#line 344
extern inline __int64 llmax(__int64, __int64); 
#line 345
extern inline unsigned __int64 ullmax(unsigned __int64, unsigned __int64); 
#line 368 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern float __cdecl fmaxf(float x, float y); 
#line 388 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl fmax(double, double); 
#line 430 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl sin(double x); 
#line 463
extern double __cdecl cos(double x); 
#line 482 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern void sincos(double x, double * sptr, double * cptr); 
#line 498
extern void sincosf(float x, float * sptr, float * cptr); 
#line 543 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl tan(double x); 
#line 612
extern double __cdecl sqrt(double x); 
#line 684 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double rsqrt(double x); 
#line 754
extern float rsqrtf(float x); 
#line 812 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl log2(double x); 
#line 837 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl exp2(double x); 
#line 862 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern float __cdecl exp2f(float x); 
#line 887 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double exp10(double x); 
#line 910
extern float exp10f(float x); 
#line 958 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl expm1(double x); 
#line 1003 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern float __cdecl expm1f(float x); 
#line 1058 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern float __cdecl log2f(float x); 
#line 1110 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl log10(double x); 
#line 1181
extern double __cdecl log(double x); 
#line 1277 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl log1p(double x); 
#line 1374 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern float __cdecl log1pf(float x); 
#line 1447 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl floor(double x); 
#line 1486
extern double __cdecl exp(double x); 
#line 1517
extern double __cdecl cosh(double x); 
#line 1547
extern double __cdecl sinh(double x); 
#line 1577
extern double __cdecl tanh(double x); 
#line 1614 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl acosh(double x); 
#line 1652 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern float __cdecl acoshf(float x); 
#line 1668 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl asinh(double x); 
#line 1684 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern float __cdecl asinhf(float x); 
#line 1738 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl atanh(double x); 
#line 1792 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern float __cdecl atanhf(float x); 
#line 1849 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl ldexp(double x, int exp); 
#line 1905
extern __inline float ldexpf(float x, int exp); 
#line 1959 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl logb(double x); 
#line 2014 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern float __cdecl logbf(float x); 
#line 2044 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern int __cdecl ilogb(double x); 
#line 2074 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern int __cdecl ilogbf(float x); 
#line 2150 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl scalbn(double x, int n); 
#line 2226 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern float __cdecl scalbnf(float x, int n); 
#line 2302 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl scalbln(double x, long n); 
#line 2378 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern float __cdecl scalblnf(float x, long n); 
#line 2454 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl frexp(double x, int * nptr); 
#line 2529
extern __inline float frexpf(float x, int * nptr); 
#line 2545 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl round(double x); 
#line 2562 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern float __cdecl roundf(float x); 
#line 2580 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern long __cdecl lround(double x); 
#line 2598 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern long __cdecl lroundf(float x); 
#line 2616 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern __int64 __cdecl llround(double x); 
#line 2634 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern __int64 __cdecl llroundf(float x); 
#line 2686 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern float __cdecl rintf(float x); 
#line 2703 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern long __cdecl lrint(double x); 
#line 2720 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern long __cdecl lrintf(float x); 
#line 2737 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern __int64 __cdecl llrint(double x); 
#line 2754 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern __int64 __cdecl llrintf(float x); 
#line 2807 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl nearbyint(double x); 
#line 2860 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern float __cdecl nearbyintf(float x); 
#line 2920 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl ceil(double x); 
#line 2934 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl trunc(double x); 
#line 2949 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern float __cdecl truncf(float x); 
#line 2975 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl fdim(double x, double y); 
#line 3001 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern float __cdecl fdimf(float x, float y); 
#line 3035 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl atan2(double y, double x); 
#line 3066
extern double __cdecl atan(double x); 
#line 3089
extern double __cdecl acos(double x); 
#line 3121
extern double __cdecl asin(double x); 
#line 3164 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl hypot(double x, double y); 
#line 3219 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double rhypot(double x, double y); 
#line 3263 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
static __inline float __cdecl hypotf(float x, float y); 
#line 3317 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern float rhypotf(float x, float y); 
#line 3361
extern double __cdecl norm3d(double a, double b, double c); 
#line 3412
extern double rnorm3d(double a, double b, double c); 
#line 3461
extern double __cdecl norm4d(double a, double b, double c, double d); 
#line 3517
extern double rnorm4d(double a, double b, double c, double d); 
#line 3562
extern double norm(int dim, const double * t); 
#line 3613
extern double rnorm(int dim, const double * t); 
#line 3665
extern float rnormf(int dim, const float * a); 
#line 3709
extern float normf(int dim, const float * a); 
#line 3754
extern float norm3df(float a, float b, float c); 
#line 3805
extern float rnorm3df(float a, float b, float c); 
#line 3854
extern float norm4df(float a, float b, float c, float d); 
#line 3910
extern float rnorm4df(float a, float b, float c, float d); 
#line 3999 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl cbrt(double x); 
#line 4085 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern float __cdecl cbrtf(float x); 
#line 4138 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double rcbrt(double x); 
#line 4188
extern float rcbrtf(float x); 
#line 4248
extern double sinpi(double x); 
#line 4308
extern float sinpif(float x); 
#line 4360
extern double cospi(double x); 
#line 4412
extern float cospif(float x); 
#line 4442
extern void sincospi(double x, double * sptr, double * cptr); 
#line 4472
extern void sincospif(float x, float * sptr, float * cptr); 
#line 4784 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl pow(double x, double y); 
#line 4840
extern double __cdecl modf(double x, double * iptr); 
#line 4899
extern double __cdecl fmod(double x, double y); 
#line 4987 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl remainder(double x, double y); 
#line 5077 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern float __cdecl remainderf(float x, float y); 
#line 5131 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl remquo(double x, double y, int * quo); 
#line 5185 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern float __cdecl remquof(float x, float y, int * quo); 
#line 5224 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl j0(double x); 
#line 5266 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern float j0f(float x); 
#line 5327 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl j1(double x); 
#line 5388 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern float j1f(float x); 
#line 5431 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl jn(int n, double x); 
#line 5474 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern float jnf(int n, float x); 
#line 5526 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl y0(double x); 
#line 5578 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern float y0f(float x); 
#line 5630 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl y1(double x); 
#line 5682 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern float y1f(float x); 
#line 5735 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl yn(int n, double x); 
#line 5788 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern float ynf(int n, float x); 
#line 5815
extern double __cdecl cyl_bessel_i0(double x); 
#line 5841
extern float cyl_bessel_i0f(float x); 
#line 5868
extern double __cdecl cyl_bessel_i1(double x); 
#line 5894
extern float cyl_bessel_i1f(float x); 
#line 5979 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl erf(double x); 
#line 6061 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern float __cdecl erff(float x); 
#line 6123 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double erfinv(double y); 
#line 6180
extern float erfinvf(float y); 
#line 6221 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl erfc(double x); 
#line 6259 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern float __cdecl erfcf(float x); 
#line 6387 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl lgamma(double x); 
#line 6448 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double erfcinv(double y); 
#line 6504
extern float erfcinvf(float y); 
#line 6562
extern double normcdfinv(double y); 
#line 6620
extern float normcdfinvf(float y); 
#line 6663
extern double normcdf(double y); 
#line 6706
extern float normcdff(float y); 
#line 6781
extern double erfcx(double x); 
#line 6856
extern float erfcxf(float x); 
#line 6992 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern float __cdecl lgammaf(float x); 
#line 7101 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl tgamma(double x); 
#line 7210 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern float __cdecl tgammaf(float x); 
#line 7223 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl copysign(double x, double y); 
#line 7236 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern float __cdecl copysignf(float x, float y); 
#line 7273 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl nextafter(double x, double y); 
#line 7310 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern float __cdecl nextafterf(float x, float y); 
#line 7326 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl nan(const char * tagp); 
#line 7342 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern float __cdecl nanf(const char * tagp); 
#line 7347 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern int __isinff(float); 
#line 7348
extern int __isnanf(float); 
#line 7358 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern int __finite(double); 
#line 7359
extern int __finitef(float); 
#line 7360
extern int __signbit(double); 
#line 7361
extern int __isnan(double); 
#line 7362
extern int __isinf(double); 
#line 7365 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern int __signbitf(float); 
#line 7526 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern double __cdecl fma(double x, double y, double z); 
#line 7684 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern float __cdecl fmaf(float x, float y, float z); 
#line 7693 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern int __signbitl(long double); 
#line 7699 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern int __finitel(long double); 
#line 7700
extern int __isinfl(long double); 
#line 7701
extern int __isnanl(long double); 
#line 7705 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern float __cdecl acosf(float); 
#line 7706
extern float __cdecl asinf(float); 
#line 7707
extern float __cdecl atanf(float); 
#line 7708
extern float __cdecl atan2f(float, float); 
#line 7709
extern float __cdecl cosf(float); 
#line 7710
extern float __cdecl sinf(float); 
#line 7711
extern float __cdecl tanf(float); 
#line 7712
extern float __cdecl coshf(float); 
#line 7713
extern float __cdecl sinhf(float); 
#line 7714
extern float __cdecl tanhf(float); 
#line 7715
extern float __cdecl expf(float); 
#line 7716
extern float __cdecl logf(float); 
#line 7717
extern float __cdecl log10f(float); 
#line 7718
extern float __cdecl modff(float, float *); 
#line 7719
extern float __cdecl powf(float, float); 
#line 7720
extern float __cdecl sqrtf(float); 
#line 7721
extern float __cdecl ceilf(float); 
#line 7722
extern float __cdecl floorf(float); 
#line 7723
extern float __cdecl fmodf(float, float); 
#line 8856 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
}
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_math.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 16
#pragma warning(push)
#pragma warning(disable:4738)
#pragma warning(disable:4820)
#line 25
struct _exception { 
#line 27
int type; 
#line 28
char *name; 
#line 29
double arg1; 
#line 30
double arg2; 
#line 31
double retval; 
#line 32
}; 
#line 39
struct _complex { 
#line 41
double x, y; 
#line 42
}; 
#line 61 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_math.h"
typedef float float_t; 
#line 62
typedef double double_t; 
#line 80 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_math.h"
extern const double _HUGE; 
#line 171 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_math.h"
void __cdecl _fperrraise(int _Except); 
#line 173
short __cdecl _dclass(double _X); 
#line 174
short __cdecl _ldclass(long double _X); 
#line 175
short __cdecl _fdclass(float _X); 
#line 177
int __cdecl _dsign(double _X); 
#line 178
int __cdecl _ldsign(long double _X); 
#line 179
int __cdecl _fdsign(float _X); 
#line 181
int __cdecl _dpcomp(double _X, double _Y); 
#line 182
int __cdecl _ldpcomp(long double _X, long double _Y); 
#line 183
int __cdecl _fdpcomp(float _X, float _Y); 
#line 185
short __cdecl _dtest(double * _Px); 
#line 186
short __cdecl _ldtest(long double * _Px); 
#line 187
short __cdecl _fdtest(float * _Px); 
#line 189
short __cdecl _d_int(double * _Px, short _Xexp); 
#line 190
short __cdecl _ld_int(long double * _Px, short _Xexp); 
#line 191
short __cdecl _fd_int(float * _Px, short _Xexp); 
#line 193
short __cdecl _dscale(double * _Px, long _Lexp); 
#line 194
short __cdecl _ldscale(long double * _Px, long _Lexp); 
#line 195
short __cdecl _fdscale(float * _Px, long _Lexp); 
#line 197
short __cdecl _dunscale(short * _Pex, double * _Px); 
#line 198
short __cdecl _ldunscale(short * _Pex, long double * _Px); 
#line 199
short __cdecl _fdunscale(short * _Pex, float * _Px); 
#line 201
short __cdecl _dexp(double * _Px, double _Y, long _Eoff); 
#line 202
short __cdecl _ldexp(long double * _Px, long double _Y, long _Eoff); 
#line 203
short __cdecl _fdexp(float * _Px, float _Y, long _Eoff); 
#line 205
short __cdecl _dnorm(unsigned short * _Ps); 
#line 206
short __cdecl _fdnorm(unsigned short * _Ps); 
#line 208
double __cdecl _dpoly(double _X, const double * _Tab, int _N); 
#line 209
long double __cdecl _ldpoly(long double _X, const long double * _Tab, int _N); 
#line 210
float __cdecl _fdpoly(float _X, const float * _Tab, int _N); 
#line 212
double __cdecl _dlog(double _X, int _Baseflag); 
#line 213
long double __cdecl _ldlog(long double _X, int _Baseflag); 
#line 214
float __cdecl _fdlog(float _X, int _Baseflag); 
#line 216
double __cdecl _dsin(double _X, unsigned _Qoff); 
#line 217
long double __cdecl _ldsin(long double _X, unsigned _Qoff); 
#line 218
float __cdecl _fdsin(float _X, unsigned _Qoff); 
#line 225
typedef 
#line 222
union { 
#line 223
unsigned short _Sh[4]; 
#line 224
double _Val; 
#line 225
} _double_val; 
#line 232
typedef 
#line 229
union { 
#line 230
unsigned short _Sh[2]; 
#line 231
float _Val; 
#line 232
} _float_val; 
#line 239
typedef 
#line 236
union { 
#line 237
unsigned short _Sh[4]; 
#line 238
long double _Val; 
#line 239
} _ldouble_val; 
#line 247
typedef 
#line 242
union { 
#line 243
unsigned short _Word[4]; 
#line 244
float _Float; 
#line 245
double _Double; 
#line 246
long double _Long_double; 
#line 247
} _float_const; 
#line 249
extern const _float_const _Denorm_C, _Inf_C, _Nan_C, _Snan_C, _Hugeval_C; 
#line 250
extern const _float_const _FDenorm_C, _FInf_C, _FNan_C, _FSnan_C; 
#line 251
extern const _float_const _LDenorm_C, _LInf_C, _LNan_C, _LSnan_C; 
#line 253
extern const _float_const _Eps_C, _Rteps_C; 
#line 254
extern const _float_const _FEps_C, _FRteps_C; 
#line 255
extern const _float_const _LEps_C, _LRteps_C; 
#line 257
extern const double _Zero_C, _Xbig_C; 
#line 258
extern const float _FZero_C, _FXbig_C; 
#line 259
extern const long double _LZero_C, _LXbig_C; 
#line 288
extern "C++" {
#line 290
inline int fpclassify(float _X) throw() 
#line 291
{ 
#line 292
return _fdtest(&_X); 
#line 293
} 
#line 295
inline int fpclassify(double _X) throw() 
#line 296
{ 
#line 297
return _dtest(&_X); 
#line 298
} 
#line 300
inline int fpclassify(long double _X) throw() 
#line 301
{ 
#line 302
return _ldtest(&_X); 
#line 303
} 
#line 305
inline bool signbit(float _X) throw() 
#line 306
{ 
#line 307
return _fdsign(_X) != 0; 
#line 308
} 
#line 310
inline bool signbit(double _X) throw() 
#line 311
{ 
#line 312
return _dsign(_X) != 0; 
#line 313
} 
#line 315
inline bool signbit(long double _X) throw() 
#line 316
{ 
#line 317
return _ldsign(_X) != 0; 
#line 318
} 
#line 320
inline int _fpcomp(float _X, float _Y) throw() 
#line 321
{ 
#line 322
return _fdpcomp(_X, _Y); 
#line 323
} 
#line 325
inline int _fpcomp(double _X, double _Y) throw() 
#line 326
{ 
#line 327
return _dpcomp(_X, _Y); 
#line 328
} 
#line 330
inline int _fpcomp(long double _X, long double _Y) throw() 
#line 331
{ 
#line 332
return _ldpcomp(_X, _Y); 
#line 333
} 
#line 335
template< class _Trc, class _Tre> struct _Combined_type { 
#line 337
typedef float _Type; 
#line 338
}; 
#line 340
template<> struct _Combined_type< float, double>  { 
#line 342
typedef double _Type; 
#line 343
}; 
#line 345
template<> struct _Combined_type< float, long double>  { 
#line 347
typedef long double _Type; 
#line 348
}; 
#line 350
template< class _Ty, class _T2> struct _Real_widened { 
#line 352
typedef long double _Type; 
#line 353
}; 
#line 355
template<> struct _Real_widened< float, float>  { 
#line 357
typedef float _Type; 
#line 358
}; 
#line 360
template<> struct _Real_widened< float, double>  { 
#line 362
typedef double _Type; 
#line 363
}; 
#line 365
template<> struct _Real_widened< double, float>  { 
#line 367
typedef double _Type; 
#line 368
}; 
#line 370
template<> struct _Real_widened< double, double>  { 
#line 372
typedef double _Type; 
#line 373
}; 
#line 375
template< class _Ty> struct _Real_type { 
#line 377
typedef double _Type; 
#line 378
}; 
#line 380
template<> struct _Real_type< float>  { 
#line 382
typedef float _Type; 
#line 383
}; 
#line 385
template<> struct _Real_type< long double>  { 
#line 387
typedef long double _Type; 
#line 388
}; 
#line 390
template < class _T1, class _T2 >
      inline int _fpcomp ( _T1 _X, _T2 _Y ) throw ( )
    {
        typedef typename _Combined_type < float,
            typename _Real_widened <
            typename _Real_type < _T1 > :: _Type,
            typename _Real_type < _T2 > :: _Type > :: _Type > :: _Type _Tw;
        return _fpcomp ( ( _Tw ) _X, ( _Tw ) _Y );
    }
#line 400
template < class _Ty >
      inline bool isfinite ( _Ty _X ) throw ( )
    {
        return fpclassify ( _X ) <= 0;
    }
#line 406
template < class _Ty >
      inline bool isinf ( _Ty _X ) throw ( )
    {
        return fpclassify ( _X ) == 1;
    }
#line 412
template < class _Ty >
      inline bool isnan ( _Ty _X ) throw ( )
    {
        return fpclassify ( _X ) == 2;
    }
#line 418
template < class _Ty >
      inline bool isnormal ( _Ty _X ) throw ( )
    {
        return fpclassify ( _X ) == ( - 1 );
    }
#line 424
template < class _Ty1, class _Ty2 >
      inline bool isgreater ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return ( _fpcomp ( _X, _Y ) & 4 ) != 0;
    }
#line 430
template < class _Ty1, class _Ty2 >
      inline bool isgreaterequal ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return ( _fpcomp ( _X, _Y ) & ( 2 | 4 ) ) != 0;
    }
#line 436
template < class _Ty1, class _Ty2 >
      inline bool isless ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return ( _fpcomp ( _X, _Y ) & 1 ) != 0;
    }
#line 442
template < class _Ty1, class _Ty2 >
      inline bool islessequal ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return ( _fpcomp ( _X, _Y ) & ( 1 | 2 ) ) != 0;
    }
#line 448
template < class _Ty1, class _Ty2 >
      inline bool islessgreater ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return ( _fpcomp ( _X, _Y ) & ( 1 | 4 ) ) != 0;
    }
#line 454
template < class _Ty1, class _Ty2 >
      inline bool isunordered ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return _fpcomp ( _X, _Y ) == 0;
    }
#line 459
}
#line 466 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_math.h"
int __cdecl abs(int _X); 
#line 467
long __cdecl labs(long _X); 
#line 468
__int64 __cdecl llabs(__int64 _X); 
#line 470
double __cdecl acos(double _X); 
#line 471
double __cdecl asin(double _X); 
#line 472
double __cdecl atan(double _X); 
#line 473
double __cdecl atan2(double _Y, double _X); 
#line 475
double __cdecl cos(double _X); 
#line 476
double __cdecl cosh(double _X); 
#line 477
double __cdecl exp(double _X); 
#line 478
double __cdecl fabs(double _X); 
#line 479
double __cdecl fmod(double _X, double _Y); 
#line 480
double __cdecl log(double _X); 
#line 481
double __cdecl log10(double _X); 
#line 482
double __cdecl pow(double _X, double _Y); 
#line 483
double __cdecl sin(double _X); 
#line 484
double __cdecl sinh(double _X); 
#line 485
double __cdecl sqrt(double _X); 
#line 486
double __cdecl tan(double _X); 
#line 487
double __cdecl tanh(double _X); 
#line 489
double __cdecl acosh(double _X); 
#line 490
double __cdecl asinh(double _X); 
#line 491
double __cdecl atanh(double _X); 
#line 492
double __cdecl atof(const char * _String); 
#line 493
double __cdecl _atof_l(const char * _String, _locale_t _Locale); 
#line 494
double __cdecl _cabs(_complex _Complex_value); 
#line 495
double __cdecl cbrt(double _X); 
#line 496
double __cdecl ceil(double _X); 
#line 497
double __cdecl _chgsign(double _X); 
#line 498
double __cdecl copysign(double _Number, double _Sign); 
#line 499
double __cdecl _copysign(double _Number, double _Sign); 
#line 500
double __cdecl erf(double _X); 
#line 501
double __cdecl erfc(double _X); 
#line 502
double __cdecl exp2(double _X); 
#line 503
double __cdecl expm1(double _X); 
#line 504
double __cdecl fdim(double _X, double _Y); 
#line 505
double __cdecl floor(double _X); 
#line 506
double __cdecl fma(double _X, double _Y, double _Z); 
#line 507
double __cdecl fmax(double _X, double _Y); 
#line 508
double __cdecl fmin(double _X, double _Y); 
#line 509
double __cdecl frexp(double _X, int * _Y); 
#line 510
double __cdecl hypot(double _X, double _Y); 
#line 511
double __cdecl _hypot(double _X, double _Y); 
#line 512
int __cdecl ilogb(double _X); 
#line 513
double __cdecl ldexp(double _X, int _Y); 
#line 514
double __cdecl lgamma(double _X); 
#line 515
__int64 __cdecl llrint(double _X); 
#line 516
__int64 __cdecl llround(double _X); 
#line 517
double __cdecl log1p(double _X); 
#line 518
double __cdecl log2(double _X); 
#line 519
double __cdecl logb(double _X); 
#line 520
long __cdecl lrint(double _X); 
#line 521
long __cdecl lround(double _X); 
#line 523
int __cdecl _matherr(_exception * _Except); 
#line 525
double __cdecl modf(double _X, double * _Y); 
#line 526
double __cdecl nan(const char * _X); 
#line 527
double __cdecl nearbyint(double _X); 
#line 528
double __cdecl nextafter(double _X, double _Y); 
#line 529
double __cdecl nexttoward(double _X, long double _Y); 
#line 530
double __cdecl remainder(double _X, double _Y); 
#line 531
double __cdecl remquo(double _X, double _Y, int * _Z); 
#line 532
double __cdecl rint(double _X); 
#line 533
double __cdecl round(double _X); 
#line 534
double __cdecl scalbln(double _X, long _Y); 
#line 535
double __cdecl scalbn(double _X, int _Y); 
#line 536
double __cdecl tgamma(double _X); 
#line 537
double __cdecl trunc(double _X); 
#line 538
double __cdecl _j0(double _X); 
#line 539
double __cdecl _j1(double _X); 
#line 540
double __cdecl _jn(int _X, double _Y); 
#line 541
double __cdecl _y0(double _X); 
#line 542
double __cdecl _y1(double _X); 
#line 543
double __cdecl _yn(int _X, double _Y); 
#line 545
float __cdecl acoshf(float _X); 
#line 546
float __cdecl asinhf(float _X); 
#line 547
float __cdecl atanhf(float _X); 
#line 548
float __cdecl cbrtf(float _X); 
#line 549
float __cdecl _chgsignf(float _X); 
#line 550
float __cdecl copysignf(float _Number, float _Sign); 
#line 551
float __cdecl _copysignf(float _Number, float _Sign); 
#line 552
float __cdecl erff(float _X); 
#line 553
float __cdecl erfcf(float _X); 
#line 554
float __cdecl expm1f(float _X); 
#line 555
float __cdecl exp2f(float _X); 
#line 556
float __cdecl fdimf(float _X, float _Y); 
#line 557
float __cdecl fmaf(float _X, float _Y, float _Z); 
#line 558
float __cdecl fmaxf(float _X, float _Y); 
#line 559
float __cdecl fminf(float _X, float _Y); 
#line 560
float __cdecl _hypotf(float _X, float _Y); 
#line 561
int __cdecl ilogbf(float _X); 
#line 562
float __cdecl lgammaf(float _X); 
#line 563
__int64 __cdecl llrintf(float _X); 
#line 564
__int64 __cdecl llroundf(float _X); 
#line 565
float __cdecl log1pf(float _X); 
#line 566
float __cdecl log2f(float _X); 
#line 567
float __cdecl logbf(float _X); 
#line 568
long __cdecl lrintf(float _X); 
#line 569
long __cdecl lroundf(float _X); 
#line 570
float __cdecl nanf(const char * _X); 
#line 571
float __cdecl nearbyintf(float _X); 
#line 572
float __cdecl nextafterf(float _X, float _Y); 
#line 573
float __cdecl nexttowardf(float _X, long double _Y); 
#line 574
float __cdecl remainderf(float _X, float _Y); 
#line 575
float __cdecl remquof(float _X, float _Y, int * _Z); 
#line 576
float __cdecl rintf(float _X); 
#line 577
float __cdecl roundf(float _X); 
#line 578
float __cdecl scalblnf(float _X, long _Y); 
#line 579
float __cdecl scalbnf(float _X, int _Y); 
#line 580
float __cdecl tgammaf(float _X); 
#line 581
float __cdecl truncf(float _X); 
#line 591 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_math.h"
float __cdecl _logbf(float _X); 
#line 592
float __cdecl _nextafterf(float _X, float _Y); 
#line 593
int __cdecl _finitef(float _X); 
#line 594
int __cdecl _isnanf(float _X); 
#line 595
int __cdecl _fpclassf(float _X); 
#line 597
int __cdecl _set_FMA3_enable(int _Flag); 
#line 598
int __cdecl _get_FMA3_enable(); 
#line 611 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_math.h"
float __cdecl acosf(float _X); 
#line 612
float __cdecl asinf(float _X); 
#line 613
float __cdecl atan2f(float _Y, float _X); 
#line 614
float __cdecl atanf(float _X); 
#line 615
float __cdecl ceilf(float _X); 
#line 616
float __cdecl cosf(float _X); 
#line 617
float __cdecl coshf(float _X); 
#line 618
float __cdecl expf(float _X); 
#line 670 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_math.h"
__inline float __cdecl fabsf(float _X) 
#line 671
{ 
#line 672
return (float)fabs(_X); 
#line 673
} 
#line 679 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_math.h"
float __cdecl floorf(float _X); 
#line 680
float __cdecl fmodf(float _X, float _Y); 
#line 696 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_math.h"
__inline float __cdecl frexpf(float _X, int *_Y) 
#line 697
{ 
#line 698
return (float)frexp(_X, _Y); 
#line 699
} 
#line 701
__inline float __cdecl hypotf(float _X, float _Y) 
#line 702
{ 
#line 703
return _hypotf(_X, _Y); 
#line 704
} 
#line 706
__inline float __cdecl ldexpf(float _X, int _Y) 
#line 707
{ 
#line 708
return (float)ldexp(_X, _Y); 
#line 709
} 
#line 713
float __cdecl log10f(float _X); 
#line 714
float __cdecl logf(float _X); 
#line 715
float __cdecl modff(float _X, float * _Y); 
#line 716
float __cdecl powf(float _X, float _Y); 
#line 717
float __cdecl sinf(float _X); 
#line 718
float __cdecl sinhf(float _X); 
#line 719
float __cdecl sqrtf(float _X); 
#line 720
float __cdecl tanf(float _X); 
#line 721
float __cdecl tanhf(float _X); 
#line 775 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_math.h"
long double __cdecl acoshl(long double _X); 
#line 777
__inline long double __cdecl acosl(long double _X) 
#line 778
{ 
#line 779
return acos((double)_X); 
#line 780
} 
#line 782
long double __cdecl asinhl(long double _X); 
#line 784
__inline long double __cdecl asinl(long double _X) 
#line 785
{ 
#line 786
return asin((double)_X); 
#line 787
} 
#line 789
__inline long double __cdecl atan2l(long double _Y, long double _X) 
#line 790
{ 
#line 791
return atan2((double)_Y, (double)_X); 
#line 792
} 
#line 794
long double __cdecl atanhl(long double _X); 
#line 796
__inline long double __cdecl atanl(long double _X) 
#line 797
{ 
#line 798
return atan((double)_X); 
#line 799
} 
#line 801
long double __cdecl cbrtl(long double _X); 
#line 803
__inline long double __cdecl ceill(long double _X) 
#line 804
{ 
#line 805
return ceil((double)_X); 
#line 806
} 
#line 808
__inline long double __cdecl _chgsignl(long double _X) 
#line 809
{ 
#line 810
return _chgsign((double)_X); 
#line 811
} 
#line 813
long double __cdecl copysignl(long double _Number, long double _Sign); 
#line 815
__inline long double __cdecl _copysignl(long double _Number, long double _Sign) 
#line 816
{ 
#line 817
return _copysign((double)_Number, (double)_Sign); 
#line 818
} 
#line 820
__inline long double __cdecl coshl(long double _X) 
#line 821
{ 
#line 822
return cosh((double)_X); 
#line 823
} 
#line 825
__inline long double __cdecl cosl(long double _X) 
#line 826
{ 
#line 827
return cos((double)_X); 
#line 828
} 
#line 830
long double __cdecl erfl(long double _X); 
#line 831
long double __cdecl erfcl(long double _X); 
#line 833
__inline long double __cdecl expl(long double _X) 
#line 834
{ 
#line 835
return exp((double)_X); 
#line 836
} 
#line 838
long double __cdecl exp2l(long double _X); 
#line 839
long double __cdecl expm1l(long double _X); 
#line 841
__inline long double __cdecl fabsl(long double _X) 
#line 842
{ 
#line 843
return fabs((double)_X); 
#line 844
} 
#line 846
long double __cdecl fdiml(long double _X, long double _Y); 
#line 848
__inline long double __cdecl floorl(long double _X) 
#line 849
{ 
#line 850
return floor((double)_X); 
#line 851
} 
#line 853
long double __cdecl fmal(long double _X, long double _Y, long double _Z); 
#line 854
long double __cdecl fmaxl(long double _X, long double _Y); 
#line 855
long double __cdecl fminl(long double _X, long double _Y); 
#line 857
__inline long double __cdecl fmodl(long double _X, long double _Y) 
#line 858
{ 
#line 859
return fmod((double)_X, (double)_Y); 
#line 860
} 
#line 862
__inline long double __cdecl frexpl(long double _X, int *_Y) 
#line 863
{ 
#line 864
return frexp((double)_X, _Y); 
#line 865
} 
#line 867
int __cdecl ilogbl(long double _X); 
#line 869
__inline long double __cdecl _hypotl(long double _X, long double _Y) 
#line 870
{ 
#line 871
return _hypot((double)_X, (double)_Y); 
#line 872
} 
#line 874
__inline long double __cdecl hypotl(long double _X, long double _Y) 
#line 875
{ 
#line 876
return _hypot((double)_X, (double)_Y); 
#line 877
} 
#line 879
__inline long double __cdecl ldexpl(long double _X, int _Y) 
#line 880
{ 
#line 881
return ldexp((double)_X, _Y); 
#line 882
} 
#line 884
long double __cdecl lgammal(long double _X); 
#line 885
__int64 __cdecl llrintl(long double _X); 
#line 886
__int64 __cdecl llroundl(long double _X); 
#line 888
__inline long double __cdecl logl(long double _X) 
#line 889
{ 
#line 890
return log((double)_X); 
#line 891
} 
#line 893
__inline long double __cdecl log10l(long double _X) 
#line 894
{ 
#line 895
return log10((double)_X); 
#line 896
} 
#line 898
long double __cdecl log1pl(long double _X); 
#line 899
long double __cdecl log2l(long double _X); 
#line 900
long double __cdecl logbl(long double _X); 
#line 901
long __cdecl lrintl(long double _X); 
#line 902
long __cdecl lroundl(long double _X); 
#line 904
__inline long double __cdecl modfl(long double _X, long double *_Y) 
#line 905
{ 
#line 906
double _F, _I; 
#line 907
_F = modf((double)_X, &_I); 
#line 908
(*_Y) = _I; 
#line 909
return _F; 
#line 910
} 
#line 912
long double __cdecl nanl(const char * _X); 
#line 913
long double __cdecl nearbyintl(long double _X); 
#line 914
long double __cdecl nextafterl(long double _X, long double _Y); 
#line 915
long double __cdecl nexttowardl(long double _X, long double _Y); 
#line 917
__inline long double __cdecl powl(long double _X, long double _Y) 
#line 918
{ 
#line 919
return pow((double)_X, (double)_Y); 
#line 920
} 
#line 922
long double __cdecl remainderl(long double _X, long double _Y); 
#line 923
long double __cdecl remquol(long double _X, long double _Y, int * _Z); 
#line 924
long double __cdecl rintl(long double _X); 
#line 925
long double __cdecl roundl(long double _X); 
#line 926
long double __cdecl scalblnl(long double _X, long _Y); 
#line 927
long double __cdecl scalbnl(long double _X, int _Y); 
#line 929
__inline long double __cdecl sinhl(long double _X) 
#line 930
{ 
#line 931
return sinh((double)_X); 
#line 932
} 
#line 934
__inline long double __cdecl sinl(long double _X) 
#line 935
{ 
#line 936
return sin((double)_X); 
#line 937
} 
#line 939
__inline long double __cdecl sqrtl(long double _X) 
#line 940
{ 
#line 941
return sqrt((double)_X); 
#line 942
} 
#line 944
__inline long double __cdecl tanhl(long double _X) 
#line 945
{ 
#line 946
return tanh((double)_X); 
#line 947
} 
#line 949
__inline long double __cdecl tanl(long double _X) 
#line 950
{ 
#line 951
return tan((double)_X); 
#line 952
} 
#line 954
long double __cdecl tgammal(long double _X); 
#line 955
long double __cdecl truncl(long double _X); 
#line 976 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_math.h"
extern double HUGE; 
#line 981 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_math.h"
double __cdecl j0(double _X); 
#line 982
double __cdecl j1(double _X); 
#line 983
double __cdecl jn(int _X, double _Y); 
#line 984
double __cdecl y0(double _X); 
#line 985
double __cdecl y1(double _X); 
#line 986
double __cdecl yn(int _X, double _Y); 
#line 994 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_math.h"
}
#line 992
#pragma warning(pop)
#line 994
__pragma( pack ( pop )) 
#line 13 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_malloc.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 54 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_malloc.h"
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 55
_calloc_base(size_t _Count, size_t _Size); 
#line 61
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 62
calloc(size_t _Count, size_t _Size); 
#line 68
int __cdecl _callnewh(size_t _Size); 
#line 73
__declspec(allocator) void *__cdecl 
#line 74
_expand(void * _Block, size_t _Size); 
#line 80
void __cdecl _free_base(void * _Block); 
#line 85
void __cdecl free(void * _Block); 
#line 90
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 91
_malloc_base(size_t _Size); 
#line 96
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 97
malloc(size_t _Size); 
#line 103
size_t __cdecl _msize_base(void * _Block); 
#line 109
size_t __cdecl _msize(void * _Block); 
#line 114
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 115
_realloc_base(void * _Block, size_t _Size); 
#line 121
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 122
realloc(void * _Block, size_t _Size); 
#line 128
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 129
_recalloc_base(void * _Block, size_t _Count, size_t _Size); 
#line 136
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 137
_recalloc(void * _Block, size_t _Count, size_t _Size); 
#line 144
void __cdecl _aligned_free(void * _Block); 
#line 149
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 150
_aligned_malloc(size_t _Size, size_t _Alignment); 
#line 156
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 157
_aligned_offset_malloc(size_t _Size, size_t _Alignment, size_t _Offset); 
#line 165
size_t __cdecl _aligned_msize(void * _Block, size_t _Alignment, size_t _Offset); 
#line 172
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 173
_aligned_offset_realloc(void * _Block, size_t _Size, size_t _Alignment, size_t _Offset); 
#line 181
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 182
_aligned_offset_recalloc(void * _Block, size_t _Count, size_t _Size, size_t _Alignment, size_t _Offset); 
#line 191
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 192
_aligned_realloc(void * _Block, size_t _Size, size_t _Alignment); 
#line 199
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 200
_aligned_recalloc(void * _Block, size_t _Count, size_t _Size, size_t _Alignment); 
#line 228 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_malloc.h"
}__pragma( pack ( pop )) 
#line 16 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_search.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 19
typedef int (__cdecl *_CoreCrtSecureSearchSortCompareFunction)(void *, const void *, const void *); 
#line 20
typedef int (__cdecl *_CoreCrtNonSecureSearchSortCompareFunction)(const void *, const void *); 
#line 26
void *__cdecl bsearch_s(const void * _Key, const void * _Base, rsize_t _NumOfElements, rsize_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); 
#line 35
void __cdecl qsort_s(void * _Base, rsize_t _NumOfElements, rsize_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); 
#line 48 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_search.h"
void *__cdecl bsearch(const void * _Key, const void * _Base, size_t _NumOfElements, size_t _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 56
void __cdecl qsort(void * _Base, size_t _NumOfElements, size_t _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 64
void *__cdecl _lfind_s(const void * _Key, const void * _Base, unsigned * _NumOfElements, size_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); 
#line 74
void *__cdecl _lfind(const void * _Key, const void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 83
void *__cdecl _lsearch_s(const void * _Key, void * _Base, unsigned * _NumOfElements, size_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); 
#line 93
void *__cdecl _lsearch(const void * _Key, void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 191 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_search.h"
void *__cdecl lfind(const void * _Key, const void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 200
void *__cdecl lsearch(const void * _Key, void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 212 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_search.h"
}__pragma( pack ( pop )) 
#line 13 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstdlib.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 50
errno_t __cdecl _itow_s(int _Value, __wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 57
extern "C++" {template < size_t _Size > inline errno_t __cdecl _itow_s ( int _Value, wchar_t ( & _Buffer ) [ _Size ], int _Radix ) throw ( ) { return _itow_s ( _Value, _Buffer, _Size, _Radix ); }}
#line 64 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstdlib.h"
__wchar_t *__cdecl _itow(int _Value, __wchar_t * _Buffer, int _Radix); 
#line 73 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstdlib.h"
errno_t __cdecl _ltow_s(long _Value, __wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 80
extern "C++" {template < size_t _Size > inline errno_t __cdecl _ltow_s ( long _Value, wchar_t ( & _Buffer ) [ _Size ], int _Radix ) throw ( ) { return _ltow_s ( _Value, _Buffer, _Size, _Radix ); }}
#line 87 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstdlib.h"
__wchar_t *__cdecl _ltow(long _Value, __wchar_t * _Buffer, int _Radix); 
#line 95 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstdlib.h"
errno_t __cdecl _ultow_s(unsigned long _Value, __wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 102
extern "C++" {template < size_t _Size > inline errno_t __cdecl _ultow_s ( unsigned long _Value, wchar_t ( & _Buffer ) [ _Size ], int _Radix ) throw ( ) { return _ultow_s ( _Value, _Buffer, _Size, _Radix ); }}
#line 109 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstdlib.h"
__wchar_t *__cdecl _ultow(unsigned long _Value, __wchar_t * _Buffer, int _Radix); 
#line 117 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstdlib.h"
double __cdecl wcstod(const __wchar_t * _String, __wchar_t ** _EndPtr); 
#line 123
double __cdecl _wcstod_l(const __wchar_t * _String, __wchar_t ** _EndPtr, _locale_t _Locale); 
#line 130
long __cdecl wcstol(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); 
#line 137
long __cdecl _wcstol_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 145
__int64 __cdecl wcstoll(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); 
#line 152
__int64 __cdecl _wcstoll_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 160
unsigned long __cdecl wcstoul(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); 
#line 167
unsigned long __cdecl _wcstoul_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 175
unsigned __int64 __cdecl wcstoull(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); 
#line 182
unsigned __int64 __cdecl _wcstoull_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 190
long double __cdecl wcstold(const __wchar_t * _String, __wchar_t ** _EndPtr); 
#line 196
long double __cdecl _wcstold_l(const __wchar_t * _String, __wchar_t ** _EndPtr, _locale_t _Locale); 
#line 203
float __cdecl wcstof(const __wchar_t * _String, __wchar_t ** _EndPtr); 
#line 209
float __cdecl _wcstof_l(const __wchar_t * _String, __wchar_t ** _EndPtr, _locale_t _Locale); 
#line 216
double __cdecl _wtof(const __wchar_t * _String); 
#line 221
double __cdecl _wtof_l(const __wchar_t * _String, _locale_t _Locale); 
#line 227
int __cdecl _wtoi(const __wchar_t * _String); 
#line 232
int __cdecl _wtoi_l(const __wchar_t * _String, _locale_t _Locale); 
#line 238
long __cdecl _wtol(const __wchar_t * _String); 
#line 243
long __cdecl _wtol_l(const __wchar_t * _String, _locale_t _Locale); 
#line 249
__int64 __cdecl _wtoll(const __wchar_t * _String); 
#line 254
__int64 __cdecl _wtoll_l(const __wchar_t * _String, _locale_t _Locale); 
#line 260
errno_t __cdecl _i64tow_s(__int64 _Value, __wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 268
__wchar_t *__cdecl _i64tow(__int64 _Value, __wchar_t * _Buffer, int _Radix); 
#line 275
errno_t __cdecl _ui64tow_s(unsigned __int64 _Value, __wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 283
__wchar_t *__cdecl _ui64tow(unsigned __int64 _Value, __wchar_t * _Buffer, int _Radix); 
#line 290
__int64 __cdecl _wtoi64(const __wchar_t * _String); 
#line 295
__int64 __cdecl _wtoi64_l(const __wchar_t * _String, _locale_t _Locale); 
#line 301
__int64 __cdecl _wcstoi64(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); 
#line 308
__int64 __cdecl _wcstoi64_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 316
unsigned __int64 __cdecl _wcstoui64(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); 
#line 323
unsigned __int64 __cdecl _wcstoui64_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 335
__declspec(allocator) __wchar_t *__cdecl _wfullpath(__wchar_t * _Buffer, const __wchar_t * _Path, size_t _BufferCount); 
#line 344
errno_t __cdecl _wmakepath_s(__wchar_t * _Buffer, size_t _BufferCount, const __wchar_t * _Drive, const __wchar_t * _Dir, const __wchar_t * _Filename, const __wchar_t * _Ext); 
#line 353
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wmakepath_s ( wchar_t ( & _Buffer ) [ _Size ], wchar_t const * _Drive, wchar_t const * _Dir, wchar_t const * _Filename, wchar_t const * _Ext ) throw ( ) { return _wmakepath_s ( _Buffer, _Size, _Drive, _Dir, _Filename, _Ext ); }}
#line 362 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstdlib.h"
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
void __cdecl _wmakepath(__wchar_t * _Buffer, const __wchar_t * _Drive, const __wchar_t * _Dir, const __wchar_t * _Filename, const __wchar_t * _Ext); 
#line 373 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstdlib.h"
#pragma warning(pop)
#line 375
void __cdecl _wperror(const __wchar_t * _ErrorMessage); 
#line 380
void __cdecl _wsplitpath(const __wchar_t * _FullPath, __wchar_t * _Drive, __wchar_t * _Dir, __wchar_t * _Filename, __wchar_t * _Ext); 
#line 388
errno_t __cdecl _wsplitpath_s(const __wchar_t * _FullPath, __wchar_t * _Drive, size_t _DriveCount, __wchar_t * _Dir, size_t _DirCount, __wchar_t * _Filename, size_t _FilenameCount, __wchar_t * _Ext, size_t _ExtCount); 
#line 400
extern "C++" {template < size_t _DriveSize, size_t _DirSize, size_t _NameSize, size_t _ExtSize > inline errno_t __cdecl _wsplitpath_s ( wchar_t const * _Path, wchar_t ( & _Drive ) [ _DriveSize ], wchar_t ( & _Dir ) [ _DirSize ], wchar_t ( & _Name ) [ _NameSize ], wchar_t ( & _Ext ) [ _ExtSize ] ) throw ( ) { return _wsplitpath_s ( _Path, _Drive, _DriveSize, _Dir, _DirSize, _Name, _NameSize, _Ext, _ExtSize ); }}
#line 409 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstdlib.h"
errno_t __cdecl _wdupenv_s(__wchar_t ** _Buffer, size_t * _BufferCount, const __wchar_t * _VarName); 
#line 418
__wchar_t *__cdecl _wgetenv(const __wchar_t * _VarName); 
#line 424
errno_t __cdecl _wgetenv_s(size_t * _RequiredCount, __wchar_t * _Buffer, size_t _BufferCount, const __wchar_t * _VarName); 
#line 431
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wgetenv_s ( size_t * _RequiredCount, wchar_t ( & _Buffer ) [ _Size ], wchar_t const * _VarName ) throw ( ) { return _wgetenv_s ( _RequiredCount, _Buffer, _Size, _VarName ); }}
#line 440 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstdlib.h"
int __cdecl _wputenv(const __wchar_t * _EnvString); 
#line 445
errno_t __cdecl _wputenv_s(const __wchar_t * _Name, const __wchar_t * _Value); 
#line 450
errno_t __cdecl _wsearchenv_s(const __wchar_t * _Filename, const __wchar_t * _VarName, __wchar_t * _Buffer, size_t _BufferCount); 
#line 457
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wsearchenv_s ( wchar_t const * _Filename, wchar_t const * _VarName, wchar_t ( & _ResultPath ) [ _Size ] ) throw ( ) { return _wsearchenv_s ( _Filename, _VarName, _ResultPath, _Size ); }}
#line 464 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstdlib.h"
void __cdecl _wsearchenv(const __wchar_t * _Filename, const __wchar_t * _VarName, __wchar_t * _ResultPath); 
#line 471 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstdlib.h"
int __cdecl _wsystem(const __wchar_t * _Command); 
#line 479 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\corecrt_wstdlib.h"
}__pragma( pack ( pop )) 
#line 18 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 34 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
void __cdecl _swab(char * _Buf1, char * _Buf2, int _SizeInBytes); 
#line 52
__declspec(noreturn) void __cdecl exit(int _Code); 
#line 53
__declspec(noreturn) void __cdecl _exit(int _Code); 
#line 54
__declspec(noreturn) void __cdecl _Exit(int _Code); 
#line 55
__declspec(noreturn) void __cdecl quick_exit(int _Code); 
#line 56
__declspec(noreturn) void __cdecl abort(); 
#line 63 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
unsigned __cdecl _set_abort_behavior(unsigned _Flags, unsigned _Mask); 
#line 73
typedef int (__cdecl *_onexit_t)(void); 
#line 140 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
int __cdecl atexit(void (__cdecl *)(void)); 
#line 141
_onexit_t __cdecl _onexit(_onexit_t _Func); 
#line 144 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
int __cdecl at_quick_exit(void (__cdecl *)(void)); 
#line 155
typedef void (__cdecl *_purecall_handler)(void); 
#line 158
typedef void (__cdecl *_invalid_parameter_handler)(const __wchar_t *, const __wchar_t *, const __wchar_t *, unsigned, uintptr_t); 
#line 167
_purecall_handler __cdecl _set_purecall_handler(_purecall_handler _Handler); 
#line 171
_purecall_handler __cdecl _get_purecall_handler(); 
#line 174
_invalid_parameter_handler __cdecl _set_invalid_parameter_handler(_invalid_parameter_handler _Handler); 
#line 178
_invalid_parameter_handler __cdecl _get_invalid_parameter_handler(); 
#line 180
_invalid_parameter_handler __cdecl _set_thread_local_invalid_parameter_handler(_invalid_parameter_handler _Handler); 
#line 184
_invalid_parameter_handler __cdecl _get_thread_local_invalid_parameter_handler(); 
#line 208 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
int __cdecl _set_error_mode(int _Mode); 
#line 213
int *__cdecl _errno(); 
#line 216
errno_t __cdecl _set_errno(int _Value); 
#line 217
errno_t __cdecl _get_errno(int * _Value); 
#line 219
unsigned long *__cdecl __doserrno(); 
#line 222
errno_t __cdecl _set_doserrno(unsigned long _Value); 
#line 223
errno_t __cdecl _get_doserrno(unsigned long * _Value); 
#line 226
char **__cdecl __sys_errlist(); 
#line 229
int *__cdecl __sys_nerr(); 
#line 232
void __cdecl perror(const char * _ErrMsg); 
#line 238 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
char **__cdecl __p__pgmptr(); 
#line 239
__wchar_t **__cdecl __p__wpgmptr(); 
#line 240
int *__cdecl __p__fmode(); 
#line 255 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
errno_t __cdecl _get_pgmptr(char ** _Value); 
#line 258
errno_t __cdecl _get_wpgmptr(__wchar_t ** _Value); 
#line 260
errno_t __cdecl _set_fmode(int _Mode); 
#line 262
errno_t __cdecl _get_fmode(int * _PMode); 
#line 275
typedef 
#line 271
struct _div_t { 
#line 273
int quot; 
#line 274
int rem; 
#line 275
} div_t; 
#line 281
typedef 
#line 277
struct _ldiv_t { 
#line 279
long quot; 
#line 280
long rem; 
#line 281
} ldiv_t; 
#line 287
typedef 
#line 283
struct _lldiv_t { 
#line 285
__int64 quot; 
#line 286
__int64 rem; 
#line 287
} lldiv_t; 
#line 289
int __cdecl abs(int _Number); 
#line 290
long __cdecl labs(long _Number); 
#line 291
__int64 __cdecl llabs(__int64 _Number); 
#line 292
__int64 __cdecl _abs64(__int64 _Number); 
#line 294
unsigned short __cdecl _byteswap_ushort(unsigned short _Number); 
#line 295
unsigned long __cdecl _byteswap_ulong(unsigned long _Number); 
#line 296
unsigned __int64 __cdecl _byteswap_uint64(unsigned __int64 _Number); 
#line 298
div_t __cdecl div(int _Numerator, int _Denominator); 
#line 299
ldiv_t __cdecl ldiv(long _Numerator, long _Denominator); 
#line 300
lldiv_t __cdecl lldiv(__int64 _Numerator, __int64 _Denominator); 
#line 304
#pragma warning (push)
#pragma warning (disable:6540)
#line 307
unsigned __cdecl _rotl(unsigned _Value, int _Shift); 
#line 313
unsigned long __cdecl _lrotl(unsigned long _Value, int _Shift); 
#line 318
unsigned __int64 __cdecl _rotl64(unsigned __int64 _Value, int _Shift); 
#line 323
unsigned __cdecl _rotr(unsigned _Value, int _Shift); 
#line 329
unsigned long __cdecl _lrotr(unsigned long _Value, int _Shift); 
#line 334
unsigned __int64 __cdecl _rotr64(unsigned __int64 _Value, int _Shift); 
#line 339
#pragma warning (pop)
#line 346
void __cdecl srand(unsigned _Seed); 
#line 348
int __cdecl rand(); 
#line 357 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
extern "C++" {
#line 359
inline long abs(const long _X) throw() 
#line 360
{ 
#line 361
return labs(_X); 
#line 362
} 
#line 364
inline __int64 abs(const __int64 _X) throw() 
#line 365
{ 
#line 366
return llabs(_X); 
#line 367
} 
#line 369
inline ldiv_t div(const long _A1, const long _A2) throw() 
#line 370
{ 
#line 371
return ldiv(_A1, _A2); 
#line 372
} 
#line 374
inline lldiv_t div(const __int64 _A1, const __int64 _A2) throw() 
#line 375
{ 
#line 376
return lldiv(_A1, _A2); 
#line 377
} 
#line 378
}
#line 390 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
#pragma pack ( push, 4 )
#line 394
typedef 
#line 392
struct { 
#line 393
unsigned char ld[10]; 
#line 394
} _LDOUBLE; 
#pragma pack ( pop )
#line 414 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
typedef 
#line 412
struct { 
#line 413
double x; 
#line 414
} _CRT_DOUBLE; 
#line 419
typedef 
#line 417
struct { 
#line 418
float f; 
#line 419
} _CRT_FLOAT; 
#line 428
typedef 
#line 426
struct { 
#line 427
long double x; 
#line 428
} _LONGDOUBLE; 
#line 432
#pragma pack ( push, 4 )
#line 436
typedef 
#line 434
struct { 
#line 435
unsigned char ld12[12]; 
#line 436
} _LDBL12; 
#pragma pack ( pop )
#line 446
double __cdecl atof(const char * _String); 
#line 447
int __cdecl atoi(const char * _String); 
#line 448
long __cdecl atol(const char * _String); 
#line 449
__int64 __cdecl atoll(const char * _String); 
#line 450
__int64 __cdecl _atoi64(const char * _String); 
#line 452
double __cdecl _atof_l(const char * _String, _locale_t _Locale); 
#line 453
int __cdecl _atoi_l(const char * _String, _locale_t _Locale); 
#line 454
long __cdecl _atol_l(const char * _String, _locale_t _Locale); 
#line 455
__int64 __cdecl _atoll_l(const char * _String, _locale_t _Locale); 
#line 456
__int64 __cdecl _atoi64_l(const char * _String, _locale_t _Locale); 
#line 458
int __cdecl _atoflt(_CRT_FLOAT * _Result, const char * _String); 
#line 459
int __cdecl _atodbl(_CRT_DOUBLE * _Result, char * _String); 
#line 460
int __cdecl _atoldbl(_LDOUBLE * _Result, char * _String); 
#line 463
int __cdecl _atoflt_l(_CRT_FLOAT * _Result, const char * _String, _locale_t _Locale); 
#line 470
int __cdecl _atodbl_l(_CRT_DOUBLE * _Result, char * _String, _locale_t _Locale); 
#line 478
int __cdecl _atoldbl_l(_LDOUBLE * _Result, char * _String, _locale_t _Locale); 
#line 485
float __cdecl strtof(const char * _String, char ** _EndPtr); 
#line 491
float __cdecl _strtof_l(const char * _String, char ** _EndPtr, _locale_t _Locale); 
#line 498
double __cdecl strtod(const char * _String, char ** _EndPtr); 
#line 504
double __cdecl _strtod_l(const char * _String, char ** _EndPtr, _locale_t _Locale); 
#line 511
long double __cdecl strtold(const char * _String, char ** _EndPtr); 
#line 517
long double __cdecl _strtold_l(const char * _String, char ** _EndPtr, _locale_t _Locale); 
#line 524
long __cdecl strtol(const char * _String, char ** _EndPtr, int _Radix); 
#line 531
long __cdecl _strtol_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 539
__int64 __cdecl strtoll(const char * _String, char ** _EndPtr, int _Radix); 
#line 546
__int64 __cdecl _strtoll_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 554
unsigned long __cdecl strtoul(const char * _String, char ** _EndPtr, int _Radix); 
#line 561
unsigned long __cdecl _strtoul_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 569
unsigned __int64 __cdecl strtoull(const char * _String, char ** _EndPtr, int _Radix); 
#line 576
unsigned __int64 __cdecl _strtoull_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 584
__int64 __cdecl _strtoi64(const char * _String, char ** _EndPtr, int _Radix); 
#line 591
__int64 __cdecl _strtoi64_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 599
unsigned __int64 __cdecl _strtoui64(const char * _String, char ** _EndPtr, int _Radix); 
#line 606
unsigned __int64 __cdecl _strtoui64_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 622
errno_t __cdecl _itoa_s(int _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 629
extern "C++" {template < size_t _Size > inline errno_t __cdecl _itoa_s ( int _Value, char ( & _Buffer ) [ _Size ], int _Radix ) throw ( ) { return _itoa_s ( _Value, _Buffer, _Size, _Radix ); }}
#line 637 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
char *__cdecl _itoa(int _Value, char * _Buffer, int _Radix); 
#line 646 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
#pragma warning(pop)
#line 650
errno_t __cdecl _ltoa_s(long _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 657
extern "C++" {template < size_t _Size > inline errno_t __cdecl _ltoa_s ( long _Value, char ( & _Buffer ) [ _Size ], int _Radix ) throw ( ) { return _ltoa_s ( _Value, _Buffer, _Size, _Radix ); }}
#line 664 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
char *__cdecl _ltoa(long _Value, char * _Buffer, int _Radix); 
#line 673 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
errno_t __cdecl _ultoa_s(unsigned long _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 680
extern "C++" {template < size_t _Size > inline errno_t __cdecl _ultoa_s ( unsigned long _Value, char ( & _Buffer ) [ _Size ], int _Radix ) throw ( ) { return _ultoa_s ( _Value, _Buffer, _Size, _Radix ); }}
#line 687 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
#pragma warning(push)
#pragma warning(disable: 28726)
char *__cdecl _ultoa(unsigned long _Value, char * _Buffer, int _Radix); 
#line 695 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
#pragma warning(pop)
#line 699
errno_t __cdecl _i64toa_s(__int64 _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 708
char *__cdecl _i64toa(__int64 _Value, char * _Buffer, int _Radix); 
#line 716
errno_t __cdecl _ui64toa_s(unsigned __int64 _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 724
char *__cdecl _ui64toa(unsigned __int64 _Value, char * _Buffer, int _Radix); 
#line 744
errno_t __cdecl _ecvt_s(char * _Buffer, size_t _BufferCount, double _Value, int _DigitCount, int * _PtDec, int * _PtSign); 
#line 753
extern "C++" {template < size_t _Size > inline errno_t __cdecl _ecvt_s ( char ( & _Buffer ) [ _Size ], double _Value, int _DigitCount, int * _PtDec, int * _PtSign ) throw ( ) { return _ecvt_s ( _Buffer, _Size, _Value, _DigitCount, _PtDec, _PtSign ); }}
#line 763 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
char *__cdecl _ecvt(double _Value, int _DigitCount, int * _PtDec, int * _PtSign); 
#line 772
errno_t __cdecl _fcvt_s(char * _Buffer, size_t _BufferCount, double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign); 
#line 781
extern "C++" {template < size_t _Size > inline errno_t __cdecl _fcvt_s ( char ( & _Buffer ) [ _Size ], double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign ) throw ( ) { return _fcvt_s ( _Buffer, _Size, _Value, _FractionalDigitCount, _PtDec, _PtSign ); }}
#line 793 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
char *__cdecl _fcvt(double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign); 
#line 801
errno_t __cdecl _gcvt_s(char * _Buffer, size_t _BufferCount, double _Value, int _DigitCount); 
#line 808
extern "C++" {template < size_t _Size > inline errno_t __cdecl _gcvt_s ( char ( & _Buffer ) [ _Size ], double _Value, int _DigitCount ) throw ( ) { return _gcvt_s ( _Buffer, _Size, _Value, _DigitCount ); }}
#line 817 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
char *__cdecl _gcvt(double _Value, int _DigitCount, char * _Buffer); 
#line 846 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
int __cdecl ___mb_cur_max_func(); 
#line 849
int __cdecl ___mb_cur_max_l_func(_locale_t _Locale); 
#line 855 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
int __cdecl mblen(const char * _Ch, size_t _MaxCount); 
#line 861
int __cdecl _mblen_l(const char * _Ch, size_t _MaxCount, _locale_t _Locale); 
#line 869
size_t __cdecl _mbstrlen(const char * _String); 
#line 875
size_t __cdecl _mbstrlen_l(const char * _String, _locale_t _Locale); 
#line 882
size_t __cdecl _mbstrnlen(const char * _String, size_t _MaxCount); 
#line 889
size_t __cdecl _mbstrnlen_l(const char * _String, size_t _MaxCount, _locale_t _Locale); 
#line 896
int __cdecl mbtowc(__wchar_t * _DstCh, const char * _SrcCh, size_t _SrcSizeInBytes); 
#line 903
int __cdecl _mbtowc_l(__wchar_t * _DstCh, const char * _SrcCh, size_t _SrcSizeInBytes, _locale_t _Locale); 
#line 911
errno_t __cdecl mbstowcs_s(size_t * _PtNumOfCharConverted, __wchar_t * _DstBuf, size_t _SizeInWords, const char * _SrcBuf, size_t _MaxCount); 
#line 919
extern "C++" {template < size_t _Size > inline errno_t __cdecl mbstowcs_s ( size_t * _PtNumOfCharConverted, wchar_t ( & _Dest ) [ _Size ], char const * _Source, size_t _MaxCount ) throw ( ) { return mbstowcs_s ( _PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount ); }}
#line 927 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
size_t __cdecl mbstowcs(__wchar_t * _Dest, const char * _Source, size_t _MaxCount); 
#line 935 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
errno_t __cdecl _mbstowcs_s_l(size_t * _PtNumOfCharConverted, __wchar_t * _DstBuf, size_t _SizeInWords, const char * _SrcBuf, size_t _MaxCount, _locale_t _Locale); 
#line 944
extern "C++" {template < size_t _Size > inline errno_t __cdecl _mbstowcs_s_l ( size_t * _PtNumOfCharConverted, wchar_t ( & _Dest ) [ _Size ], char const * _Source, size_t _MaxCount, _locale_t _Locale ) throw ( ) { return _mbstowcs_s_l ( _PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount, _Locale ); }}
#line 953 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
size_t __cdecl _mbstowcs_l(__wchar_t * _Dest, const char * _Source, size_t _MaxCount, _locale_t _Locale); 
#line 966 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
int __cdecl wctomb(char * _MbCh, __wchar_t _WCh); 
#line 972
int __cdecl _wctomb_l(char * _MbCh, __wchar_t _WCh, _locale_t _Locale); 
#line 981
errno_t __cdecl wctomb_s(int * _SizeConverted, char * _MbCh, rsize_t _SizeInBytes, __wchar_t _WCh); 
#line 991 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
errno_t __cdecl _wctomb_s_l(int * _SizeConverted, char * _MbCh, size_t _SizeInBytes, __wchar_t _WCh, _locale_t _Locale); 
#line 999
errno_t __cdecl wcstombs_s(size_t * _PtNumOfCharConverted, char * _Dst, size_t _DstSizeInBytes, const __wchar_t * _Src, size_t _MaxCountInBytes); 
#line 1007
extern "C++" {template < size_t _Size > inline errno_t __cdecl wcstombs_s ( size_t * _PtNumOfCharConverted, char ( & _Dest ) [ _Size ], wchar_t const * _Source, size_t _MaxCount ) throw ( ) { return wcstombs_s ( _PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount ); }}
#line 1015 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
size_t __cdecl wcstombs(char * _Dest, const __wchar_t * _Source, size_t _MaxCount); 
#line 1023 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
errno_t __cdecl _wcstombs_s_l(size_t * _PtNumOfCharConverted, char * _Dst, size_t _DstSizeInBytes, const __wchar_t * _Src, size_t _MaxCountInBytes, _locale_t _Locale); 
#line 1032
extern "C++" {template < size_t _Size > inline errno_t __cdecl _wcstombs_s_l ( size_t * _PtNumOfCharConverted, char ( & _Dest ) [ _Size ], wchar_t const * _Source, size_t _MaxCount, _locale_t _Locale ) throw ( ) { return _wcstombs_s_l ( _PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount, _Locale ); }}
#line 1041 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
size_t __cdecl _wcstombs_l(char * _Dest, const __wchar_t * _Source, size_t _MaxCount, _locale_t _Locale); 
#line 1071 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
__declspec(allocator) char *__cdecl _fullpath(char * _Buffer, const char * _Path, size_t _BufferCount); 
#line 1080
errno_t __cdecl _makepath_s(char * _Buffer, size_t _BufferCount, const char * _Drive, const char * _Dir, const char * _Filename, const char * _Ext); 
#line 1089
extern "C++" {template < size_t _Size > inline errno_t __cdecl _makepath_s ( char ( & _Buffer ) [ _Size ], char const * _Drive, char const * _Dir, char const * _Filename, char const * _Ext ) throw ( ) { return _makepath_s ( _Buffer, _Size, _Drive, _Dir, _Filename, _Ext ); }}
#line 1098 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
void __cdecl _makepath(char * _Buffer, const char * _Drive, const char * _Dir, const char * _Filename, const char * _Ext); 
#line 1109 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
#pragma warning(pop)
#line 1112
void __cdecl _splitpath(const char * _FullPath, char * _Drive, char * _Dir, char * _Filename, char * _Ext); 
#line 1121
errno_t __cdecl _splitpath_s(const char * _FullPath, char * _Drive, size_t _DriveCount, char * _Dir, size_t _DirCount, char * _Filename, size_t _FilenameCount, char * _Ext, size_t _ExtCount); 
#line 1133
extern "C++" {template < size_t _DriveSize, size_t _DirSize, size_t _NameSize, size_t _ExtSize > inline errno_t __cdecl _splitpath_s ( char const * _Dest, char ( & _Drive ) [ _DriveSize ], char ( & _Dir ) [ _DirSize ], char ( & _Name ) [ _NameSize ], char ( & _Ext ) [ _ExtSize ] ) throw ( ) { return _splitpath_s ( _Dest, _Drive, _DriveSize, _Dir, _DirSize, _Name, _NameSize, _Ext, _ExtSize ); }}
#line 1139
errno_t __cdecl getenv_s(size_t * _RequiredCount, char * _Buffer, rsize_t _BufferCount, const char * _VarName); 
#line 1151 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
int *__cdecl __p___argc(); 
#line 1152
char ***__cdecl __p___argv(); 
#line 1153
__wchar_t ***__cdecl __p___wargv(); 
#line 1165 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
char ***__cdecl __p__environ(); 
#line 1166
__wchar_t ***__cdecl __p__wenviron(); 
#line 1191 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
char *__cdecl getenv(const char * _VarName); 
#line 1195
extern "C++" {template < size_t _Size > inline errno_t __cdecl getenv_s ( size_t * _RequiredCount, char ( & _Buffer ) [ _Size ], char const * _VarName ) throw ( ) { return getenv_s ( _RequiredCount, _Buffer, _Size, _VarName ); }}
#line 1208 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
errno_t __cdecl _dupenv_s(char ** _Buffer, size_t * _BufferCount, const char * _VarName); 
#line 1218 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
int __cdecl system(const char * _Command); 
#line 1224
#pragma warning (push)
#pragma warning (disable:6540)
#line 1228
int __cdecl _putenv(const char * _EnvString); 
#line 1233
errno_t __cdecl _putenv_s(const char * _Name, const char * _Value); 
#line 1238
#pragma warning (pop)
#line 1240
errno_t __cdecl _searchenv_s(const char * _Filename, const char * _VarName, char * _Buffer, size_t _BufferCount); 
#line 1247
extern "C++" {template < size_t _Size > inline errno_t __cdecl _searchenv_s ( char const * _Filename, char const * _VarName, char ( & _Buffer ) [ _Size ] ) throw ( ) { return _searchenv_s ( _Filename, _VarName, _Buffer, _Size ); }}
#line 1254 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
void __cdecl _searchenv(const char * _Filename, const char * _VarName, char * _Buffer); 
#line 1262 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using SetErrorMode in" "stead. See online help for details.")) void __cdecl 
#line 1263
_seterrormode(int _Mode); 
#line 1267
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using Beep instead. S" "ee online help for details.")) void __cdecl 
#line 1268
_beep(unsigned _Frequency, unsigned _Duration); 
#line 1273
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using Sleep instead. " "See online help for details.")) void __cdecl 
#line 1274
_sleep(unsigned long _Duration); 
#line 1296 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
#pragma warning(push)
#pragma warning(disable: 4141)
#line 1300
char *__cdecl ecvt(double _Value, int _DigitCount, int * _PtDec, int * _PtSign); 
#line 1308
char *__cdecl fcvt(double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign); 
#line 1316
char *__cdecl gcvt(double _Value, int _DigitCount, char * _DstBuf); 
#line 1323
char *__cdecl itoa(int _Value, char * _Buffer, int _Radix); 
#line 1330
char *__cdecl ltoa(long _Value, char * _Buffer, int _Radix); 
#line 1338
void __cdecl swab(char * _Buf1, char * _Buf2, int _SizeInBytes); 
#line 1345
char *__cdecl ultoa(unsigned long _Value, char * _Buffer, int _Radix); 
#line 1354
int __cdecl putenv(const char * _EnvString); 
#line 1358
#pragma warning(pop)
#line 1360
_onexit_t __cdecl onexit(_onexit_t _Func); 
#line 1366 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\stdlib.h"
}__pragma( pack ( pop )) 
#line 13 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime_new.h"
extern "C++" {
#line 15
#pragma pack ( push, 8 )
#line 17
#pragma warning(push)
#pragma warning(disable: 4985)
#line 49 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime_new.h"
namespace std { 
#line 51
struct nothrow_t { 
#line 53
explicit nothrow_t() = default;
#line 55 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime_new.h"
}; 
#line 60
extern const nothrow_t nothrow; 
#line 62 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime_new.h"
}
#line 66 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime_new.h"
__declspec(allocator) void *__cdecl operator new(size_t _Size); 
#line 71
__declspec(allocator) void *__cdecl operator new(size_t _Size, const std::nothrow_t &) noexcept; 
#line 77
__declspec(allocator) void *__cdecl operator new[](size_t _Size); 
#line 82
__declspec(allocator) void *__cdecl operator new[](size_t _Size, const std::nothrow_t &) noexcept; 
#line 87
void __cdecl operator delete(void * _Block) noexcept; 
#line 91
void __cdecl operator delete(void * _Block, const std::nothrow_t &) noexcept; 
#line 96
void __cdecl operator delete[](void * _Block) noexcept; 
#line 100
void __cdecl operator delete[](void * _Block, const std::nothrow_t &) noexcept; 
#line 105
void __cdecl operator delete(void * _Block, size_t _Size) noexcept; 
#line 110
void __cdecl operator delete[](void * _Block, size_t _Size) noexcept; 
#line 178 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime_new.h"
#pragma warning(push)
#pragma warning(disable: 4577)
#pragma warning(disable: 4514)
#line 184
inline void *__cdecl operator new(size_t _Size, void *_Where) noexcept 
#line 185
{ 
#line 186
(void)_Size; 
#line 187
return _Where; 
#line 188
} 
#line 190
inline void __cdecl operator delete(void *, void *) noexcept 
#line 191
{ 
#line 193
} 
#line 199 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime_new.h"
inline void *__cdecl operator new[](size_t _Size, void *
#line 200
_Where) noexcept 
#line 201
{ 
#line 202
(void)_Size; 
#line 203
return _Where; 
#line 204
} 
#line 206
inline void __cdecl operator delete[](void *, void *) noexcept 
#line 207
{ 
#line 208
} 
#line 217 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime_new.h"
}
#line 210
#pragma warning(pop)
#line 214
#pragma warning(pop)
#pragma pack ( pop )
#line 13 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime_new_debug.h"
extern "C++" {
#line 15
#pragma pack ( push, 8 )
#line 23
__declspec(allocator) void *__cdecl operator new(size_t _Size, int _BlockUse, const char * _FileName, int _LineNumber); 
#line 31
__declspec(allocator) void *__cdecl operator new[](size_t _Size, int _BlockUse, const char * _FileName, int _LineNumber); 
#line 38
void __cdecl operator delete(void * _Block, int _BlockUse, const char * _FileName, int _LineNumber) noexcept; 
#line 45
void __cdecl operator delete[](void * _Block, int _BlockUse, const char * _FileName, int _LineNumber) noexcept; 
#line 58 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime_new_debug.h"
}
#line 56
#pragma pack ( pop )
#line 15 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\crtdbg.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 19
typedef void *_HFILE; 
#line 45
typedef int (__cdecl *_CRT_REPORT_HOOK)(int, char *, int *); 
#line 46
typedef int (__cdecl *_CRT_REPORT_HOOKW)(int, __wchar_t *, int *); 
#line 52
typedef int (__cdecl *_CRT_ALLOC_HOOK)(int, void *, size_t, int, long, const unsigned char *, int); 
#line 108
typedef void (__cdecl *_CRT_DUMP_CLIENT)(void *, size_t); 
#line 114
struct _CrtMemBlockHeader; 
#line 123
typedef 
#line 116
struct _CrtMemState { 
#line 118
_CrtMemBlockHeader *pBlockHeader; 
#line 119
size_t lCounts[5]; 
#line 120
size_t lSizes[5]; 
#line 121
size_t lHighWaterCount; 
#line 122
size_t lTotalCount; 
#line 123
} _CrtMemState; 
#line 809 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.17763.0\\ucrt\\crtdbg.h"
}__pragma( pack ( pop )) 
#line 10 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\yvals.h"
#pragma pack ( push, 8 )
#pragma warning(push,3)
#pragma warning(disable: 4455 4494 4619 4643 4702 4984 4988 )
#line 132 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\yvals.h"
#pragma detect_mismatch("_MSC_VER", "1900")
#line 136 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\yvals.h"
#pragma detect_mismatch("_ITERATOR_DEBUG_LEVEL", "0")
#line 141 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\yvals.h"
#pragma detect_mismatch("RuntimeLibrary", "MT_StaticRelease")
#line 57 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\use_ansi.h"
#pragma comment(lib, "libcpmt")
#line 332 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\yvals.h"
namespace std { 
#line 333
enum _Uninitialized { 
#line 335
_Noinit
#line 336
}; 
#line 339
class _Lockit { 
#line 360 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\yvals.h"
public: __thiscall _Lockit(); 
#line 361
explicit __thiscall _Lockit(int); 
#line 362
__thiscall ~_Lockit() noexcept; 
#line 365 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\yvals.h"
static void __cdecl _Lockit_ctor(int); 
#line 366
static void __cdecl _Lockit_dtor(int); 
#line 369
private: static void __cdecl _Lockit_ctor(_Lockit *); 
#line 370
static void __cdecl _Lockit_ctor(_Lockit *, int); 
#line 371
static void __cdecl _Lockit_dtor(_Lockit *); 
#line 374
public: _Lockit(const _Lockit &) = delete;
#line 375
_Lockit &operator=(const _Lockit &) = delete;
#line 378
private: int _Locktype; 
#line 379
}; 
#line 465 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\yvals.h"
class _Init_locks { 
#line 480 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\yvals.h"
public: __thiscall _Init_locks(); 
#line 481
__thiscall ~_Init_locks() noexcept; 
#line 485 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\yvals.h"
private: static void __cdecl _Init_locks_ctor(_Init_locks *); 
#line 486
static void __cdecl _Init_locks_dtor(_Init_locks *); 
#line 487
}; 
#line 524 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\yvals.h"
}
#line 533 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\yvals.h"
#pragma warning(pop)
#pragma pack ( pop )
#line 11 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\cstdlib"
#pragma pack ( push, 8 )
#pragma warning(push,3)
#pragma warning(disable: 4455 4494 4619 4643 4702 4984 4988 )
#line 19
inline double abs(double _Xx) noexcept 
#line 20
{ 
#line 21
return ::fabs(_Xx); 
#line 22
} 
#line 24
inline float abs(float _Xx) noexcept 
#line 25
{ 
#line 26
return ::fabsf(_Xx); 
#line 27
} 
#line 29
inline long double abs(long double _Xx) noexcept 
#line 30
{ 
#line 31
return ::fabsl(_Xx); 
#line 32
} 
#line 34
namespace std { 
#line 35
using ::size_t;using ::div_t;using ::ldiv_t;
#line 36
using ::abort;using ::abs;using ::atexit;
#line 37
using ::atof;using ::atoi;using ::atol;
#line 38
using ::bsearch;using ::calloc;using ::div;
#line 39
using ::exit;using ::free;
#line 40
using ::labs;using ::ldiv;using ::malloc;
#line 41
using ::mblen;using ::mbstowcs;using ::mbtowc;
#line 42
using ::qsort;using ::rand;using ::realloc;
#line 43
using ::srand;using ::strtod;using ::strtol;
#line 44
using ::strtoul;
#line 45
using ::wcstombs;using ::wctomb;
#line 47
using ::lldiv_t;
#line 50
using ::getenv;
#line 51
using ::system;
#line 54 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\cstdlib"
using ::atoll;using ::llabs;using ::lldiv;
#line 55
using ::strtof;using ::strtold;
#line 56
using ::strtoll;using ::strtoull;
#line 58
using ::_Exit;using ::at_quick_exit;using ::quick_exit;
#line 59
}
#line 63
#pragma warning(pop)
#pragma pack ( pop )
#line 10 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\cmath"
#pragma pack ( push, 8 )
#pragma warning(push,3)
#pragma warning(disable: 4455 4494 4619 4643 4702 4984 4988 )
#line 17
inline double pow(double _Xx, int _Yx) noexcept 
#line 18
{ 
#line 19
if (_Yx == 2) { 
#line 20
return _Xx * _Xx; }  
#line 22
return ::pow(_Xx, static_cast< double>(_Yx)); 
#line 23
} 
#line 25
inline float acos(float _Xx) noexcept 
#line 26
{ 
#line 27
return ::acosf(_Xx); 
#line 28
} 
#line 30
inline float acosh(float _Xx) noexcept 
#line 31
{ 
#line 32
return ::acoshf(_Xx); 
#line 33
} 
#line 35
inline float asin(float _Xx) noexcept 
#line 36
{ 
#line 37
return ::asinf(_Xx); 
#line 38
} 
#line 40
inline float asinh(float _Xx) noexcept 
#line 41
{ 
#line 42
return ::asinhf(_Xx); 
#line 43
} 
#line 45
inline float atan(float _Xx) noexcept 
#line 46
{ 
#line 47
return ::atanf(_Xx); 
#line 48
} 
#line 50
inline float atanh(float _Xx) noexcept 
#line 51
{ 
#line 52
return ::atanhf(_Xx); 
#line 53
} 
#line 55
inline float atan2(float _Yx, float _Xx) noexcept 
#line 56
{ 
#line 57
return ::atan2f(_Yx, _Xx); 
#line 58
} 
#line 60
inline float cbrt(float _Xx) noexcept 
#line 61
{ 
#line 62
return ::cbrtf(_Xx); 
#line 63
} 
#line 65
inline float ceil(float _Xx) noexcept 
#line 66
{ 
#line 67
return ::ceilf(_Xx); 
#line 68
} 
#line 70
inline float copysign(float _Number, float 
#line 71
_Sign) noexcept 
#line 72
{ 
#line 73
return ::copysignf(_Number, _Sign); 
#line 74
} 
#line 76
inline float cos(float _Xx) noexcept 
#line 77
{ 
#line 78
return ::cosf(_Xx); 
#line 79
} 
#line 81
inline float cosh(float _Xx) noexcept 
#line 82
{ 
#line 83
return ::coshf(_Xx); 
#line 84
} 
#line 86
inline float erf(float _Xx) noexcept 
#line 87
{ 
#line 88
return ::erff(_Xx); 
#line 89
} 
#line 91
inline float erfc(float _Xx) noexcept 
#line 92
{ 
#line 93
return ::erfcf(_Xx); 
#line 94
} 
#line 96
inline float exp(float _Xx) noexcept 
#line 97
{ 
#line 98
return ::expf(_Xx); 
#line 99
} 
#line 101
inline float exp2(float _Xx) noexcept 
#line 102
{ 
#line 103
return ::exp2f(_Xx); 
#line 104
} 
#line 106
inline float expm1(float _Xx) noexcept 
#line 107
{ 
#line 108
return ::expm1f(_Xx); 
#line 109
} 
#line 111
inline float fabs(float _Xx) noexcept 
#line 112
{ 
#line 113
return ::fabsf(_Xx); 
#line 114
} 
#line 116
inline float fdim(float _Xx, float _Yx) noexcept 
#line 117
{ 
#line 118
return ::fdimf(_Xx, _Yx); 
#line 119
} 
#line 121
inline float floor(float _Xx) noexcept 
#line 122
{ 
#line 123
return ::floorf(_Xx); 
#line 124
} 
#line 126
inline float fma(float _Xx, float _Yx, float 
#line 127
_Zx) noexcept 
#line 128
{ 
#line 129
return ::fmaf(_Xx, _Yx, _Zx); 
#line 130
} 
#line 132
inline float fmax(float _Xx, float _Yx) noexcept 
#line 133
{ 
#line 134
return ::fmaxf(_Xx, _Yx); 
#line 135
} 
#line 137
inline float fmin(float _Xx, float _Yx) noexcept 
#line 138
{ 
#line 139
return ::fminf(_Xx, _Yx); 
#line 140
} 
#line 142
inline float fmod(float _Xx, float _Yx) noexcept 
#line 143
{ 
#line 144
return ::fmodf(_Xx, _Yx); 
#line 145
} 
#line 147
inline float frexp(float _Xx, int *_Yx) noexcept 
#line 148
{ 
#line 149
return ::frexpf(_Xx, _Yx); 
#line 150
} 
#line 152
inline float hypot(float _Xx, float _Yx) noexcept 
#line 153
{ 
#line 154
return ::hypotf(_Xx, _Yx); 
#line 155
} 
#line 157
inline int ilogb(float _Xx) noexcept 
#line 158
{ 
#line 159
return ::ilogbf(_Xx); 
#line 160
} 
#line 162
inline float ldexp(float _Xx, int _Yx) noexcept 
#line 163
{ 
#line 164
return ::ldexpf(_Xx, _Yx); 
#line 165
} 
#line 167
inline float lgamma(float _Xx) noexcept 
#line 168
{ 
#line 169
return ::lgammaf(_Xx); 
#line 170
} 
#line 172
inline __int64 llrint(float _Xx) noexcept 
#line 173
{ 
#line 174
return ::llrintf(_Xx); 
#line 175
} 
#line 177
inline __int64 llround(float _Xx) noexcept 
#line 178
{ 
#line 179
return ::llroundf(_Xx); 
#line 180
} 
#line 182
inline float log(float _Xx) noexcept 
#line 183
{ 
#line 184
return ::logf(_Xx); 
#line 185
} 
#line 187
inline float log10(float _Xx) noexcept 
#line 188
{ 
#line 189
return ::log10f(_Xx); 
#line 190
} 
#line 192
inline float log1p(float _Xx) noexcept 
#line 193
{ 
#line 194
return ::log1pf(_Xx); 
#line 195
} 
#line 197
inline float log2(float _Xx) noexcept 
#line 198
{ 
#line 199
return ::log2f(_Xx); 
#line 200
} 
#line 202
inline float logb(float _Xx) noexcept 
#line 203
{ 
#line 204
return ::logbf(_Xx); 
#line 205
} 
#line 207
inline long lrint(float _Xx) noexcept 
#line 208
{ 
#line 209
return ::lrintf(_Xx); 
#line 210
} 
#line 212
inline long lround(float _Xx) noexcept 
#line 213
{ 
#line 214
return ::lroundf(_Xx); 
#line 215
} 
#line 217
inline float modf(float _Xx, float *_Yx) noexcept 
#line 218
{ 
#line 219
return ::modff(_Xx, _Yx); 
#line 220
} 
#line 222
inline float nearbyint(float _Xx) noexcept 
#line 223
{ 
#line 224
return ::nearbyintf(_Xx); 
#line 225
} 
#line 227
inline float nextafter(float _Xx, float _Yx) noexcept 
#line 228
{ 
#line 229
return ::nextafterf(_Xx, _Yx); 
#line 230
} 
#line 232
inline float nexttoward(float _Xx, long double 
#line 233
_Yx) noexcept 
#line 234
{ 
#line 235
return ::nexttowardf(_Xx, _Yx); 
#line 236
} 
#line 238
inline float pow(float _Xx, float 
#line 239
_Yx) noexcept 
#line 240
{ 
#line 241
return ::powf(_Xx, _Yx); 
#line 242
} 
#line 244
inline float pow(float _Xx, int _Yx) noexcept 
#line 245
{ 
#line 246
if (_Yx == 2) { 
#line 247
return _Xx * _Xx; }  
#line 249
return ::powf(_Xx, static_cast< float>(_Yx)); 
#line 250
} 
#line 252
inline float remainder(float _Xx, float _Yx) noexcept 
#line 253
{ 
#line 254
return ::remainderf(_Xx, _Yx); 
#line 255
} 
#line 257
inline float remquo(float _Xx, float _Yx, int *
#line 258
_Zx) noexcept 
#line 259
{ 
#line 260
return ::remquof(_Xx, _Yx, _Zx); 
#line 261
} 
#line 263
inline float rint(float _Xx) noexcept 
#line 264
{ 
#line 265
return ::rintf(_Xx); 
#line 266
} 
#line 268
inline float round(float _Xx) noexcept 
#line 269
{ 
#line 270
return ::roundf(_Xx); 
#line 271
} 
#line 273
inline float scalbln(float _Xx, long _Yx) noexcept 
#line 274
{ 
#line 275
return ::scalblnf(_Xx, _Yx); 
#line 276
} 
#line 278
inline float scalbn(float _Xx, int _Yx) noexcept 
#line 279
{ 
#line 280
return ::scalbnf(_Xx, _Yx); 
#line 281
} 
#line 283
inline float sin(float _Xx) noexcept 
#line 284
{ 
#line 285
return ::sinf(_Xx); 
#line 286
} 
#line 288
inline float sinh(float _Xx) noexcept 
#line 289
{ 
#line 290
return ::sinhf(_Xx); 
#line 291
} 
#line 293
inline float sqrt(float _Xx) noexcept 
#line 294
{ 
#line 295
return ::sqrtf(_Xx); 
#line 296
} 
#line 298
inline float tan(float _Xx) noexcept 
#line 299
{ 
#line 300
return ::tanf(_Xx); 
#line 301
} 
#line 303
inline float tanh(float _Xx) noexcept 
#line 304
{ 
#line 305
return ::tanhf(_Xx); 
#line 306
} 
#line 308
inline float tgamma(float _Xx) noexcept 
#line 309
{ 
#line 310
return ::tgammaf(_Xx); 
#line 311
} 
#line 313
inline float trunc(float _Xx) noexcept 
#line 314
{ 
#line 315
return ::truncf(_Xx); 
#line 316
} 
#line 318
inline long double acos(long double _Xx) noexcept 
#line 319
{ 
#line 320
return ::acosl(_Xx); 
#line 321
} 
#line 323
inline long double acosh(long double _Xx) noexcept 
#line 324
{ 
#line 325
return ::acoshl(_Xx); 
#line 326
} 
#line 328
inline long double asin(long double _Xx) noexcept 
#line 329
{ 
#line 330
return ::asinl(_Xx); 
#line 331
} 
#line 333
inline long double asinh(long double _Xx) noexcept 
#line 334
{ 
#line 335
return ::asinhl(_Xx); 
#line 336
} 
#line 338
inline long double atan(long double _Xx) noexcept 
#line 339
{ 
#line 340
return ::atanl(_Xx); 
#line 341
} 
#line 343
inline long double atanh(long double _Xx) noexcept 
#line 344
{ 
#line 345
return ::atanhl(_Xx); 
#line 346
} 
#line 348
inline long double atan2(long double _Yx, long double 
#line 349
_Xx) noexcept 
#line 350
{ 
#line 351
return ::atan2l(_Yx, _Xx); 
#line 352
} 
#line 354
inline long double cbrt(long double _Xx) noexcept 
#line 355
{ 
#line 356
return ::cbrtl(_Xx); 
#line 357
} 
#line 359
inline long double ceil(long double _Xx) noexcept 
#line 360
{ 
#line 361
return ::ceill(_Xx); 
#line 362
} 
#line 364
inline long double copysign(long double _Number, long double 
#line 365
_Sign) noexcept 
#line 366
{ 
#line 367
return ::copysignl(_Number, _Sign); 
#line 368
} 
#line 370
inline long double cos(long double _Xx) noexcept 
#line 371
{ 
#line 372
return ::cosl(_Xx); 
#line 373
} 
#line 375
inline long double cosh(long double _Xx) noexcept 
#line 376
{ 
#line 377
return ::coshl(_Xx); 
#line 378
} 
#line 380
inline long double erf(long double _Xx) noexcept 
#line 381
{ 
#line 382
return ::erfl(_Xx); 
#line 383
} 
#line 385
inline long double erfc(long double _Xx) noexcept 
#line 386
{ 
#line 387
return ::erfcl(_Xx); 
#line 388
} 
#line 390
inline long double exp(long double _Xx) noexcept 
#line 391
{ 
#line 392
return ::expl(_Xx); 
#line 393
} 
#line 395
inline long double exp2(long double _Xx) noexcept 
#line 396
{ 
#line 397
return ::exp2l(_Xx); 
#line 398
} 
#line 400
inline long double expm1(long double _Xx) noexcept 
#line 401
{ 
#line 402
return ::expm1l(_Xx); 
#line 403
} 
#line 405
inline long double fabs(long double _Xx) noexcept 
#line 406
{ 
#line 407
return ::fabsl(_Xx); 
#line 408
} 
#line 410
inline long double fdim(long double _Xx, long double 
#line 411
_Yx) noexcept 
#line 412
{ 
#line 413
return ::fdiml(_Xx, _Yx); 
#line 414
} 
#line 416
inline long double floor(long double _Xx) noexcept 
#line 417
{ 
#line 418
return ::floorl(_Xx); 
#line 419
} 
#line 421
inline long double fma(long double _Xx, long double 
#line 422
_Yx, long double _Zx) noexcept 
#line 423
{ 
#line 424
return ::fmal(_Xx, _Yx, _Zx); 
#line 425
} 
#line 427
inline long double fmax(long double _Xx, long double 
#line 428
_Yx) noexcept 
#line 429
{ 
#line 430
return ::fmaxl(_Xx, _Yx); 
#line 431
} 
#line 433
inline long double fmin(long double _Xx, long double 
#line 434
_Yx) noexcept 
#line 435
{ 
#line 436
return ::fminl(_Xx, _Yx); 
#line 437
} 
#line 439
inline long double fmod(long double _Xx, long double 
#line 440
_Yx) noexcept 
#line 441
{ 
#line 442
return ::fmodl(_Xx, _Yx); 
#line 443
} 
#line 445
inline long double frexp(long double _Xx, int *
#line 446
_Yx) noexcept 
#line 447
{ 
#line 448
return ::frexpl(_Xx, _Yx); 
#line 449
} 
#line 451
inline long double hypot(long double _Xx, long double 
#line 452
_Yx) noexcept 
#line 453
{ 
#line 454
return ::hypotl(_Xx, _Yx); 
#line 455
} 
#line 457
inline int ilogb(long double _Xx) noexcept 
#line 458
{ 
#line 459
return ::ilogbl(_Xx); 
#line 460
} 
#line 462
inline long double ldexp(long double _Xx, int 
#line 463
_Yx) noexcept 
#line 464
{ 
#line 465
return ::ldexpl(_Xx, _Yx); 
#line 466
} 
#line 468
inline long double lgamma(long double _Xx) noexcept 
#line 469
{ 
#line 470
return ::lgammal(_Xx); 
#line 471
} 
#line 473
inline __int64 llrint(long double _Xx) noexcept 
#line 474
{ 
#line 475
return ::llrintl(_Xx); 
#line 476
} 
#line 478
inline __int64 llround(long double _Xx) noexcept 
#line 479
{ 
#line 480
return ::llroundl(_Xx); 
#line 481
} 
#line 483
inline long double log(long double _Xx) noexcept 
#line 484
{ 
#line 485
return ::logl(_Xx); 
#line 486
} 
#line 488
inline long double log10(long double _Xx) noexcept 
#line 489
{ 
#line 490
return ::log10l(_Xx); 
#line 491
} 
#line 493
inline long double log1p(long double _Xx) noexcept 
#line 494
{ 
#line 495
return ::log1pl(_Xx); 
#line 496
} 
#line 498
inline long double log2(long double _Xx) noexcept 
#line 499
{ 
#line 500
return ::log2l(_Xx); 
#line 501
} 
#line 503
inline long double logb(long double _Xx) noexcept 
#line 504
{ 
#line 505
return ::logbl(_Xx); 
#line 506
} 
#line 508
inline long lrint(long double _Xx) noexcept 
#line 509
{ 
#line 510
return ::lrintl(_Xx); 
#line 511
} 
#line 513
inline long lround(long double _Xx) noexcept 
#line 514
{ 
#line 515
return ::lroundl(_Xx); 
#line 516
} 
#line 518
inline long double modf(long double _Xx, long double *
#line 519
_Yx) noexcept 
#line 520
{ 
#line 521
return ::modfl(_Xx, _Yx); 
#line 522
} 
#line 524
inline long double nearbyint(long double _Xx) noexcept 
#line 525
{ 
#line 526
return ::nearbyintl(_Xx); 
#line 527
} 
#line 529
inline long double nextafter(long double _Xx, long double 
#line 530
_Yx) noexcept 
#line 531
{ 
#line 532
return ::nextafterl(_Xx, _Yx); 
#line 533
} 
#line 535
inline long double nexttoward(long double _Xx, long double 
#line 536
_Yx) noexcept 
#line 537
{ 
#line 538
return ::nexttowardl(_Xx, _Yx); 
#line 539
} 
#line 541
inline long double pow(long double _Xx, long double 
#line 542
_Yx) noexcept 
#line 543
{ 
#line 544
return ::powl(_Xx, _Yx); 
#line 545
} 
#line 547
inline long double pow(long double _Xx, int 
#line 548
_Yx) noexcept 
#line 549
{ 
#line 550
if (_Yx == 2) { 
#line 551
return _Xx * _Xx; }  
#line 553
return ::powl(_Xx, static_cast< long double>(_Yx)); 
#line 554
} 
#line 556
inline long double remainder(long double _Xx, long double 
#line 557
_Yx) noexcept 
#line 558
{ 
#line 559
return ::remainderl(_Xx, _Yx); 
#line 560
} 
#line 562
inline long double remquo(long double _Xx, long double 
#line 563
_Yx, int *_Zx) noexcept 
#line 564
{ 
#line 565
return ::remquol(_Xx, _Yx, _Zx); 
#line 566
} 
#line 568
inline long double rint(long double _Xx) noexcept 
#line 569
{ 
#line 570
return ::rintl(_Xx); 
#line 571
} 
#line 573
inline long double round(long double _Xx) noexcept 
#line 574
{ 
#line 575
return ::roundl(_Xx); 
#line 576
} 
#line 578
inline long double scalbln(long double _Xx, long 
#line 579
_Yx) noexcept 
#line 580
{ 
#line 581
return ::scalblnl(_Xx, _Yx); 
#line 582
} 
#line 584
inline long double scalbn(long double _Xx, int 
#line 585
_Yx) noexcept 
#line 586
{ 
#line 587
return ::scalbnl(_Xx, _Yx); 
#line 588
} 
#line 590
inline long double sin(long double _Xx) noexcept 
#line 591
{ 
#line 592
return ::sinl(_Xx); 
#line 593
} 
#line 595
inline long double sinh(long double _Xx) noexcept 
#line 596
{ 
#line 597
return ::sinhl(_Xx); 
#line 598
} 
#line 600
inline long double sqrt(long double _Xx) noexcept 
#line 601
{ 
#line 602
return ::sqrtl(_Xx); 
#line 603
} 
#line 605
inline long double tan(long double _Xx) noexcept 
#line 606
{ 
#line 607
return ::tanl(_Xx); 
#line 608
} 
#line 610
inline long double tanh(long double _Xx) noexcept 
#line 611
{ 
#line 612
return ::tanhl(_Xx); 
#line 613
} 
#line 615
inline long double tgamma(long double _Xx) noexcept 
#line 616
{ 
#line 617
return ::tgammal(_Xx); 
#line 618
} 
#line 620
inline long double trunc(long double _Xx) noexcept 
#line 621
{ 
#line 622
return ::truncl(_Xx); 
#line 623
} 
#line 8 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\xtr1common"
#pragma pack ( push, 8 )
#pragma warning(push,3)
#pragma warning(disable: 4455 4494 4619 4643 4702 4984 4988 )
#line 15
namespace std { 
#line 17
template < class _Ty,
 _Ty _Val >
 struct integral_constant
 {
 static constexpr _Ty value = _Val;

 using value_type = _Ty;
 using type = integral_constant;

 constexpr operator value_type ( ) const noexcept
  {
  return ( value );
  }

  constexpr value_type operator ( ) ( ) const noexcept
  {
  return ( value );
  }
 };
#line 38
template< bool _Val> using bool_constant = integral_constant< bool, _Val> ; 
#line 41
using true_type = bool_constant< true> ; 
#line 42
using false_type = bool_constant< false> ; 
#line 45
template< bool _Test, class 
#line 46
_Ty = void> 
#line 47
struct enable_if { 
#line 49
}; 
#line 51
template< class _Ty> 
#line 52
struct enable_if< true, _Ty>  { 
#line 54
using type = _Ty; 
#line 55
}; 
#line 57
template< bool _Test, class 
#line 58
_Ty = void> using enable_if_t = typename enable_if< _Test, _Ty> ::type; 
#line 62
template< bool _Test, class 
#line 63
_Ty1, class 
#line 64
_Ty2> 
#line 65
struct conditional { 
#line 67
using type = _Ty2; 
#line 68
}; 
#line 70
template< class _Ty1, class 
#line 71
_Ty2> 
#line 72
struct conditional< true, _Ty1, _Ty2>  { 
#line 74
using type = _Ty1; 
#line 75
}; 
#line 77
template< bool _Test, class 
#line 78
_Ty1, class 
#line 79
_Ty2> using conditional_t = typename conditional< _Test, _Ty1, _Ty2> ::type; 
#line 83
template< class _Ty1, class 
#line 84
_Ty2> 
#line 85
struct is_same : public false_type { 
#line 88
}; 
#line 90
template< class _Ty1> 
#line 91
struct is_same< _Ty1, _Ty1>  : public true_type { 
#line 94
}; 
#line 96
template< class _Ty, class 
#line 97
_Uty> constexpr bool 
#line 98
is_same_v = (is_same< _Ty, _Uty> ::value); 
#line 101
template< class _Ty> 
#line 102
struct remove_const { 
#line 104
using type = _Ty; 
#line 105
}; 
#line 107
template< class _Ty> 
#line 108
struct remove_const< const _Ty>  { 
#line 110
using type = _Ty; 
#line 111
}; 
#line 113
template< class _Ty> using remove_const_t = typename remove_const< _Ty> ::type; 
#line 117
template< class _Ty> 
#line 118
struct remove_volatile { 
#line 120
using type = _Ty; 
#line 121
}; 
#line 123
template< class _Ty> 
#line 124
struct remove_volatile< volatile _Ty>  { 
#line 126
using type = _Ty; 
#line 127
}; 
#line 129
template< class _Ty> using remove_volatile_t = typename remove_volatile< _Ty> ::type; 
#line 133
template< class _Ty> 
#line 134
struct remove_cv { 
#line 136
using type = _Ty; 
#line 137
}; 
#line 139
template< class _Ty> 
#line 140
struct remove_cv< const _Ty>  { 
#line 142
using type = _Ty; 
#line 143
}; 
#line 145
template< class _Ty> 
#line 146
struct remove_cv< volatile _Ty>  { 
#line 148
using type = _Ty; 
#line 149
}; 
#line 151
template< class _Ty> 
#line 152
struct remove_cv< const volatile _Ty>  { 
#line 154
using type = _Ty; 
#line 155
}; 
#line 157
template< class _Ty> using remove_cv_t = typename remove_cv< _Ty> ::type; 
#line 161
template< class _Ty> 
#line 162
struct _Is_integral : public false_type { 
#line 165
}; 
#line 168
template<> struct _Is_integral< bool>  : public true_type { 
#line 171
}; 
#line 174
template<> struct _Is_integral< char>  : public true_type { 
#line 177
}; 
#line 180
template<> struct _Is_integral< unsigned char>  : public true_type { 
#line 183
}; 
#line 186
template<> struct _Is_integral< signed char>  : public true_type { 
#line 189
}; 
#line 193
template<> struct _Is_integral< __wchar_t>  : public true_type { 
#line 196
}; 
#line 200 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\xtr1common"
template<> struct _Is_integral< char16_t>  : public true_type { 
#line 203
}; 
#line 206
template<> struct _Is_integral< char32_t>  : public true_type { 
#line 209
}; 
#line 212
template<> struct _Is_integral< unsigned short>  : public true_type { 
#line 215
}; 
#line 218
template<> struct _Is_integral< short>  : public true_type { 
#line 221
}; 
#line 224
template<> struct _Is_integral< unsigned>  : public true_type { 
#line 227
}; 
#line 230
template<> struct _Is_integral< int>  : public true_type { 
#line 233
}; 
#line 236
template<> struct _Is_integral< unsigned long>  : public true_type { 
#line 239
}; 
#line 242
template<> struct _Is_integral< long>  : public true_type { 
#line 245
}; 
#line 248
template<> struct _Is_integral< unsigned __int64>  : public true_type { 
#line 251
}; 
#line 254
template<> struct _Is_integral< __int64>  : public true_type { 
#line 257
}; 
#line 260
template< class _Ty> 
#line 261
struct is_integral : public _Is_integral< remove_cv_t< _Ty> > ::type { 
#line 264
}; 
#line 266
template< class _Ty> constexpr bool 
#line 267
is_integral_v = (is_integral< _Ty> ::value); 
#line 270
template< class _Ty> 
#line 271
struct _Is_floating_point : public false_type { 
#line 274
}; 
#line 277
template<> struct _Is_floating_point< float>  : public true_type { 
#line 280
}; 
#line 283
template<> struct _Is_floating_point< double>  : public true_type { 
#line 286
}; 
#line 289
template<> struct _Is_floating_point< long double>  : public true_type { 
#line 292
}; 
#line 295
template< class _Ty> 
#line 296
struct is_floating_point : public _Is_floating_point< remove_cv_t< _Ty> > ::type { 
#line 299
}; 
#line 301
template< class _Ty> constexpr bool 
#line 302
is_floating_point_v = (is_floating_point< _Ty> ::value); 
#line 305
template< class _Ty> 
#line 306
struct is_arithmetic : public bool_constant< is_integral_v< _Ty>  || is_floating_point_v< _Ty> >  { 
#line 310
}; 
#line 312
template< class _Ty> constexpr bool 
#line 313
is_arithmetic_v = (is_arithmetic< _Ty> ::value); 
#line 316
template< class _Ty> 
#line 317
struct remove_reference { 
#line 319
using type = _Ty; 
#line 320
}; 
#line 322
template< class _Ty> 
#line 323
struct remove_reference< _Ty &>  { 
#line 325
using type = _Ty; 
#line 326
}; 
#line 328
template< class _Ty> 
#line 329
struct remove_reference< _Ty &&>  { 
#line 331
using type = _Ty; 
#line 332
}; 
#line 334
template< class _Ty> using remove_reference_t = typename remove_reference< _Ty> ::type; 
#line 337
}
#line 340
#pragma warning(pop)
#pragma pack ( pop )
#line 12 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\xtgmath.h"
#pragma pack ( push, 8 )
#pragma warning(push,3)
#pragma warning(disable: 4455 4494 4619 4643 4702 4984 4988 )
#line 19
namespace std { 
#line 20
template< class _Ty1, class 
#line 21
_Ty2> using _Common_float_type_t = conditional_t< is_same_v< _Ty1, long double>  || is_same_v< _Ty2, long double> , long double, conditional_t< is_same_v< _Ty1, float>  && is_same_v< _Ty2, float> , float, double> > ; 
#line 26
}
#line 66
template < class _Ty1,
 class _Ty2,
 class = :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 > > > inline
 :: std :: _Common_float_type_t < _Ty1, _Ty2 > pow ( const _Ty1 _Left, const _Ty2 _Right )
 {
 using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >;
 return ( :: pow ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ) );
 }
#line 76
extern "C" double __cdecl acos(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double acos ( _Ty _Left ) { return ( :: acos ( static_cast < double > ( _Left ) ) ); }
#line 77
extern "C" double __cdecl asin(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double asin ( _Ty _Left ) { return ( :: asin ( static_cast < double > ( _Left ) ) ); }
#line 78
extern "C" double __cdecl atan(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double atan ( _Ty _Left ) { return ( :: atan ( static_cast < double > ( _Left ) ) ); }
#line 79
extern "C" double __cdecl atan2(double, double); template < class _Ty1, class _Ty2, class = :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 > > > inline :: std :: _Common_float_type_t < _Ty1, _Ty2 > atan2 ( _Ty1 _Left, _Ty2 _Right ) { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return ( :: atan2 ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ) ); }
#line 80
extern "C" double __cdecl ceil(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double ceil ( _Ty _Left ) { return ( :: ceil ( static_cast < double > ( _Left ) ) ); }
#line 81
extern "C" double __cdecl cos(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double cos ( _Ty _Left ) { return ( :: cos ( static_cast < double > ( _Left ) ) ); }
#line 82
extern "C" double __cdecl cosh(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double cosh ( _Ty _Left ) { return ( :: cosh ( static_cast < double > ( _Left ) ) ); }
#line 83
extern "C" double __cdecl exp(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double exp ( _Ty _Left ) { return ( :: exp ( static_cast < double > ( _Left ) ) ); }
#line 85
extern "C" double __cdecl fabs(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double fabs ( _Ty _Left ) { return ( :: fabs ( static_cast < double > ( _Left ) ) ); }
#line 87
extern "C" double __cdecl floor(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double floor ( _Ty _Left ) { return ( :: floor ( static_cast < double > ( _Left ) ) ); }
#line 88
extern "C" double __cdecl fmod(double, double); template < class _Ty1, class _Ty2, class = :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 > > > inline :: std :: _Common_float_type_t < _Ty1, _Ty2 > fmod ( _Ty1 _Left, _Ty2 _Right ) { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return ( :: fmod ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ) ); }
#line 89
extern "C" double __cdecl frexp(double, int *); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double frexp ( _Ty _Left, int * _Arg2 ) { return ( :: frexp ( static_cast < double > ( _Left ), _Arg2 ) ); }
#line 90
extern "C" double __cdecl ldexp(double, int); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double ldexp ( _Ty _Left, int _Arg2 ) { return ( :: ldexp ( static_cast < double > ( _Left ), _Arg2 ) ); }
#line 91
extern "C" double __cdecl log(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double log ( _Ty _Left ) { return ( :: log ( static_cast < double > ( _Left ) ) ); }
#line 92
extern "C" double __cdecl log10(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double log10 ( _Ty _Left ) { return ( :: log10 ( static_cast < double > ( _Left ) ) ); }
#line 95
extern "C" double __cdecl sin(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double sin ( _Ty _Left ) { return ( :: sin ( static_cast < double > ( _Left ) ) ); }
#line 96
extern "C" double __cdecl sinh(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double sinh ( _Ty _Left ) { return ( :: sinh ( static_cast < double > ( _Left ) ) ); }
#line 97
extern "C" double __cdecl sqrt(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double sqrt ( _Ty _Left ) { return ( :: sqrt ( static_cast < double > ( _Left ) ) ); }
#line 98
extern "C" double __cdecl tan(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double tan ( _Ty _Left ) { return ( :: tan ( static_cast < double > ( _Left ) ) ); }
#line 99
extern "C" double __cdecl tanh(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double tanh ( _Ty _Left ) { return ( :: tanh ( static_cast < double > ( _Left ) ) ); }
#line 105
inline float _Fma(float _Left, float _Middle, float _Right) 
#line 106
{ 
#line 107
return ::fmaf(_Left, _Middle, _Right); 
#line 108
} 
#line 110
inline double _Fma(double _Left, double _Middle, double _Right) 
#line 111
{ 
#line 112
return ::fma(_Left, _Middle, _Right); 
#line 113
} 
#line 115
inline long double _Fma(long double _Left, long double _Middle, long double 
#line 116
_Right) 
#line 117
{ 
#line 118
return ::fmal(_Left, _Middle, _Right); 
#line 119
} 
#line 122 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\xtgmath.h"
template < class _Ty1,
 class _Ty2,
 class _Ty3,
 class = :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 >
  && :: std :: is_arithmetic_v < _Ty3 > > > inline
 :: std :: _Common_float_type_t < _Ty1, :: std :: _Common_float_type_t < _Ty2, _Ty3 > >
 fma ( _Ty1 _Left, _Ty2 _Middle, _Ty3 _Right )
 {
 using _Common = :: std :: _Common_float_type_t < _Ty1, :: std :: _Common_float_type_t < _Ty2, _Ty3 >>;














 return ( _Fma ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Middle ), static_cast < _Common > ( _Right ) ) );

 }
#line 151 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\xtgmath.h"
inline float _Remquo(float _Left, float _Right, int *_Pquo) 
#line 152
{ 
#line 153
return ::remquof(_Left, _Right, _Pquo); 
#line 154
} 
#line 156
inline double _Remquo(double _Left, double _Right, int *_Pquo) 
#line 157
{ 
#line 158
return ::remquo(_Left, _Right, _Pquo); 
#line 159
} 
#line 161
inline long double _Remquo(long double _Left, long double _Right, int *_Pquo) 
#line 162
{ 
#line 163
return ::remquol(_Left, _Right, _Pquo); 
#line 164
} 
#line 167 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\xtgmath.h"
template < class _Ty1,
 class _Ty2,
 class = :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 > > > inline
 :: std :: _Common_float_type_t < _Ty1, _Ty2 >
 remquo ( _Ty1 _Left, _Ty2 _Right, int * _Pquo )
 {
 using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >;














 return ( _Remquo ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ), _Pquo ) );

 }
#line 192 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\xtgmath.h"
extern "C" double __cdecl acosh(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double acosh ( _Ty _Left ) { return ( :: acosh ( static_cast < double > ( _Left ) ) ); }
#line 193
extern "C" double __cdecl asinh(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double asinh ( _Ty _Left ) { return ( :: asinh ( static_cast < double > ( _Left ) ) ); }
#line 194
extern "C" double __cdecl atanh(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double atanh ( _Ty _Left ) { return ( :: atanh ( static_cast < double > ( _Left ) ) ); }
#line 195
extern "C" double __cdecl cbrt(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double cbrt ( _Ty _Left ) { return ( :: cbrt ( static_cast < double > ( _Left ) ) ); }
#line 196
extern "C" double __cdecl copysign(double, double); template < class _Ty1, class _Ty2, class = :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 > > > inline :: std :: _Common_float_type_t < _Ty1, _Ty2 > copysign ( _Ty1 _Left, _Ty2 _Right ) { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return ( :: copysign ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ) ); }
#line 197
extern "C" double __cdecl erf(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double erf ( _Ty _Left ) { return ( :: erf ( static_cast < double > ( _Left ) ) ); }
#line 198
extern "C" double __cdecl erfc(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double erfc ( _Ty _Left ) { return ( :: erfc ( static_cast < double > ( _Left ) ) ); }
#line 199
extern "C" double __cdecl expm1(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double expm1 ( _Ty _Left ) { return ( :: expm1 ( static_cast < double > ( _Left ) ) ); }
#line 200
extern "C" double __cdecl exp2(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double exp2 ( _Ty _Left ) { return ( :: exp2 ( static_cast < double > ( _Left ) ) ); }
#line 201
extern "C" double __cdecl fdim(double, double); template < class _Ty1, class _Ty2, class = :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 > > > inline :: std :: _Common_float_type_t < _Ty1, _Ty2 > fdim ( _Ty1 _Left, _Ty2 _Right ) { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return ( :: fdim ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ) ); }
#line 203
extern "C" double __cdecl fmax(double, double); template < class _Ty1, class _Ty2, class = :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 > > > inline :: std :: _Common_float_type_t < _Ty1, _Ty2 > fmax ( _Ty1 _Left, _Ty2 _Right ) { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return ( :: fmax ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ) ); }
#line 204
extern "C" double __cdecl fmin(double, double); template < class _Ty1, class _Ty2, class = :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 > > > inline :: std :: _Common_float_type_t < _Ty1, _Ty2 > fmin ( _Ty1 _Left, _Ty2 _Right ) { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return ( :: fmin ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ) ); }
#line 205
extern "C" double __cdecl hypot(double, double); template < class _Ty1, class _Ty2, class = :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 > > > inline :: std :: _Common_float_type_t < _Ty1, _Ty2 > hypot ( _Ty1 _Left, _Ty2 _Right ) { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return ( :: hypot ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ) ); }
#line 206
extern "C" int __cdecl ilogb(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline int ilogb ( _Ty _Left ) { return ( :: ilogb ( static_cast < double > ( _Left ) ) ); }
#line 207
extern "C" double __cdecl lgamma(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double lgamma ( _Ty _Left ) { return ( :: lgamma ( static_cast < double > ( _Left ) ) ); }
#line 208
extern "C" __int64 __cdecl llrint(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline long long llrint ( _Ty _Left ) { return ( :: llrint ( static_cast < double > ( _Left ) ) ); }
#line 209
extern "C" __int64 __cdecl llround(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline long long llround ( _Ty _Left ) { return ( :: llround ( static_cast < double > ( _Left ) ) ); }
#line 210
extern "C" double __cdecl log1p(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double log1p ( _Ty _Left ) { return ( :: log1p ( static_cast < double > ( _Left ) ) ); }
#line 211
extern "C" double __cdecl log2(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double log2 ( _Ty _Left ) { return ( :: log2 ( static_cast < double > ( _Left ) ) ); }
#line 212
extern "C" double __cdecl logb(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double logb ( _Ty _Left ) { return ( :: logb ( static_cast < double > ( _Left ) ) ); }
#line 213
extern "C" long __cdecl lrint(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline long lrint ( _Ty _Left ) { return ( :: lrint ( static_cast < double > ( _Left ) ) ); }
#line 214
extern "C" long __cdecl lround(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline long lround ( _Ty _Left ) { return ( :: lround ( static_cast < double > ( _Left ) ) ); }
#line 215
extern "C" double __cdecl nearbyint(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double nearbyint ( _Ty _Left ) { return ( :: nearbyint ( static_cast < double > ( _Left ) ) ); }
#line 216
extern "C" double __cdecl nextafter(double, double); template < class _Ty1, class _Ty2, class = :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 > > > inline :: std :: _Common_float_type_t < _Ty1, _Ty2 > nextafter ( _Ty1 _Left, _Ty2 _Right ) { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return ( :: nextafter ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ) ); }
#line 217
extern "C" double __cdecl nexttoward(double, long double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double nexttoward ( _Ty _Left, long double _Arg2 ) { return ( :: nexttoward ( static_cast < double > ( _Left ), _Arg2 ) ); }
#line 218
extern "C" double __cdecl remainder(double, double); template < class _Ty1, class _Ty2, class = :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 > > > inline :: std :: _Common_float_type_t < _Ty1, _Ty2 > remainder ( _Ty1 _Left, _Ty2 _Right ) { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return ( :: remainder ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ) ); }
#line 220
extern "C" double __cdecl rint(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double rint ( _Ty _Left ) { return ( :: rint ( static_cast < double > ( _Left ) ) ); }
#line 221
extern "C" double __cdecl round(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double round ( _Ty _Left ) { return ( :: round ( static_cast < double > ( _Left ) ) ); }
#line 222
extern "C" double __cdecl scalbln(double, long); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double scalbln ( _Ty _Left, long _Arg2 ) { return ( :: scalbln ( static_cast < double > ( _Left ), _Arg2 ) ); }
#line 223
extern "C" double __cdecl scalbn(double, int); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double scalbn ( _Ty _Left, int _Arg2 ) { return ( :: scalbn ( static_cast < double > ( _Left ), _Arg2 ) ); }
#line 224
extern "C" double __cdecl tgamma(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double tgamma ( _Ty _Left ) { return ( :: tgamma ( static_cast < double > ( _Left ) ) ); }
#line 225
extern "C" double __cdecl trunc(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double trunc ( _Ty _Left ) { return ( :: trunc ( static_cast < double > ( _Left ) ) ); }
#line 237
#pragma warning(pop)
#pragma pack ( pop )
#line 627 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\cmath"
namespace std { 
#line 628
using ::abs;using ::acos;using ::asin;
#line 629
using ::atan;using ::atan2;using ::ceil;
#line 630
using ::cos;using ::cosh;using ::exp;
#line 631
using ::fabs;using ::floor;using ::fmod;
#line 632
using ::frexp;using ::ldexp;using ::log;
#line 633
using ::log10;using ::modf;using ::pow;
#line 634
using ::sin;using ::sinh;using ::sqrt;
#line 635
using ::tan;using ::tanh;
#line 637
using ::acosf;using ::asinf;
#line 638
using ::atanf;using ::atan2f;using ::ceilf;
#line 639
using ::cosf;using ::coshf;using ::expf;
#line 640
using ::fabsf;using ::floorf;using ::fmodf;
#line 641
using ::frexpf;using ::ldexpf;using ::logf;
#line 642
using ::log10f;using ::modff;using ::powf;
#line 643
using ::sinf;using ::sinhf;using ::sqrtf;
#line 644
using ::tanf;using ::tanhf;
#line 646
using ::acosl;using ::asinl;
#line 647
using ::atanl;using ::atan2l;using ::ceill;
#line 648
using ::cosl;using ::coshl;using ::expl;
#line 649
using ::fabsl;using ::floorl;using ::fmodl;
#line 650
using ::frexpl;using ::ldexpl;using ::logl;
#line 651
using ::log10l;using ::modfl;using ::powl;
#line 652
using ::sinl;using ::sinhl;using ::sqrtl;
#line 653
using ::tanl;using ::tanhl;
#line 655
using ::float_t;using ::double_t;
#line 657
using ::acosh;using ::asinh;using ::atanh;
#line 658
using ::cbrt;using ::erf;using ::erfc;
#line 659
using ::expm1;using ::exp2;
#line 660
using ::hypot;using ::ilogb;using ::lgamma;
#line 661
using ::log1p;using ::log2;using ::logb;
#line 662
using ::llrint;using ::lrint;using ::nearbyint;
#line 663
using ::rint;using ::llround;using ::lround;
#line 664
using ::fdim;using ::fma;using ::fmax;using ::fmin;
#line 665
using ::round;using ::trunc;
#line 666
using ::remainder;using ::remquo;
#line 667
using ::copysign;using ::nan;using ::nextafter;
#line 668
using ::scalbn;using ::scalbln;
#line 669
using ::nexttoward;using ::tgamma;
#line 671
using ::acoshf;using ::asinhf;using ::atanhf;
#line 672
using ::cbrtf;using ::erff;using ::erfcf;
#line 673
using ::expm1f;using ::exp2f;
#line 674
using ::hypotf;using ::ilogbf;using ::lgammaf;
#line 675
using ::log1pf;using ::log2f;using ::logbf;
#line 676
using ::llrintf;using ::lrintf;using ::nearbyintf;
#line 677
using ::rintf;using ::llroundf;using ::lroundf;
#line 678
using ::fdimf;using ::fmaf;using ::fmaxf;using ::fminf;
#line 679
using ::roundf;using ::truncf;
#line 680
using ::remainderf;using ::remquof;
#line 681
using ::copysignf;using ::nanf;
#line 682
using ::nextafterf;using ::scalbnf;using ::scalblnf;
#line 683
using ::nexttowardf;using ::tgammaf;
#line 685
using ::acoshl;using ::asinhl;using ::atanhl;
#line 686
using ::cbrtl;using ::erfl;using ::erfcl;
#line 687
using ::expm1l;using ::exp2l;
#line 688
using ::hypotl;using ::ilogbl;using ::lgammal;
#line 689
using ::log1pl;using ::log2l;using ::logbl;
#line 690
using ::llrintl;using ::lrintl;using ::nearbyintl;
#line 691
using ::rintl;using ::llroundl;using ::lroundl;
#line 692
using ::fdiml;using ::fmal;using ::fmaxl;using ::fminl;
#line 693
using ::roundl;using ::truncl;
#line 694
using ::remainderl;using ::remquol;
#line 695
using ::copysignl;using ::nanl;
#line 696
using ::nextafterl;using ::scalbnl;using ::scalblnl;
#line 697
using ::nexttowardl;using ::tgammal;
#line 699
using ::fpclassify;using ::signbit;
#line 700
using ::isfinite;using ::isinf;
#line 701
using ::isnan;using ::isnormal;
#line 702
using ::isgreater;using ::isgreaterequal;
#line 703
using ::isless;using ::islessequal;
#line 704
using ::islessgreater;using ::isunordered;
#line 705
}
#line 1183 "D:\\Visual Studio 2017\\VC\\Tools\\MSVC\\14.16.27023\\include\\cmath"
#pragma warning(pop)
#pragma pack ( pop )
#line 9097 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern "C" double __cdecl _hypot(double x, double y); 
#line 9098
extern "C" float __cdecl _hypotf(float x, float y); 
#line 9108 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern inline bool signbit(long double) throw(); 
#line 9109
extern "C" int _ldsign(long double); 
#line 9152 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern inline bool signbit(double) throw(); 
#line 9153
extern "C" int _dsign(double); 
#line 9197 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern inline bool signbit(float) throw(); 
#line 9198
extern "C" int _fdsign(float); 
#line 9206 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
static __inline bool isinf(long double a); 
#line 9241 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
static __inline bool isinf(double a); 
#line 9279 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
static __inline bool isinf(float a); 
#line 9286 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
static __inline bool isnan(long double a); 
#line 9319 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
static __inline bool isnan(double a); 
#line 9355 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
static __inline bool isnan(float a); 
#line 9362 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
static __inline bool isfinite(long double a); 
#line 9399 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
static __inline bool isfinite(double a); 
#line 9435 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
static __inline bool isfinite(float a); 
#line 9443 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
template< class T> extern T _Pow_int(T, int) throw(); 
#line 9444
extern inline __int64 abs(__int64) throw(); 
#line 9519 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern inline long __cdecl abs(long) throw(); 
#line 9523 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern inline float __cdecl abs(float) throw(); 
#line 9524
extern inline double __cdecl abs(double) throw(); 
#line 9525
extern inline float __cdecl fabs(float) throw(); 
#line 9526
extern inline float __cdecl ceil(float) throw(); 
#line 9527
extern inline float __cdecl floor(float) throw(); 
#line 9528
extern inline float __cdecl sqrt(float) throw(); 
#line 9529
extern inline float __cdecl pow(float, float) throw(); 
#line 9554 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern inline float __cdecl pow(float, int) throw(); 
#line 9555
extern inline double __cdecl pow(double, int) throw(); 
#line 9558 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern inline float __cdecl log(float) throw(); 
#line 9559
extern inline float __cdecl log10(float) throw(); 
#line 9560
extern inline float __cdecl fmod(float, float) throw(); 
#line 9561
extern inline float __cdecl modf(float, float *) throw(); 
#line 9562
extern inline float __cdecl exp(float) throw(); 
#line 9563
extern inline float __cdecl frexp(float, int *) throw(); 
#line 9564
extern inline float __cdecl ldexp(float, int) throw(); 
#line 9565
extern inline float __cdecl asin(float) throw(); 
#line 9566
extern inline float __cdecl sin(float) throw(); 
#line 9567
extern inline float __cdecl sinh(float) throw(); 
#line 9568
extern inline float __cdecl acos(float) throw(); 
#line 9569
extern inline float __cdecl cos(float) throw(); 
#line 9570
extern inline float __cdecl cosh(float) throw(); 
#line 9571
extern inline float __cdecl atan(float) throw(); 
#line 9572
extern inline float __cdecl atan2(float, float) throw(); 
#line 9573
extern inline float __cdecl tan(float) throw(); 
#line 9574
extern inline float __cdecl tanh(float) throw(); 
#line 9804 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
extern inline float __cdecl logb(float) throw(); 
#line 9805
extern inline int __cdecl ilogb(float) throw(); 
#line 9806
extern float __cdecl scalbn(float, float) throw(); 
#line 9807
extern inline float __cdecl scalbln(float, long) throw(); 
#line 9808
extern inline float __cdecl exp2(float) throw(); 
#line 9809
extern inline float __cdecl expm1(float) throw(); 
#line 9810
extern inline float __cdecl log2(float) throw(); 
#line 9811
extern inline float __cdecl log1p(float) throw(); 
#line 9812
extern inline float __cdecl acosh(float) throw(); 
#line 9813
extern inline float __cdecl asinh(float) throw(); 
#line 9814
extern inline float __cdecl atanh(float) throw(); 
#line 9815
extern inline float __cdecl hypot(float, float) throw(); 
#line 9816
extern float __cdecl norm3d(float, float, float) throw(); 
#line 9817
extern float __cdecl norm4d(float, float, float, float) throw(); 
#line 9818
extern inline float __cdecl cbrt(float) throw(); 
#line 9819
extern inline float __cdecl erf(float) throw(); 
#line 9820
extern inline float __cdecl erfc(float) throw(); 
#line 9821
extern inline float __cdecl lgamma(float) throw(); 
#line 9822
extern inline float __cdecl tgamma(float) throw(); 
#line 9823
extern inline float __cdecl copysign(float, float) throw(); 
#line 9824
extern inline float __cdecl nextafter(float, float) throw(); 
#line 9825
extern inline float __cdecl remainder(float, float) throw(); 
#line 9826
extern inline float __cdecl remquo(float, float, int *) throw(); 
#line 9827
extern inline float __cdecl round(float) throw(); 
#line 9828
extern inline long __cdecl lround(float) throw(); 
#line 9829
extern inline __int64 __cdecl llround(float) throw(); 
#line 9830
extern inline float __cdecl trunc(float) throw(); 
#line 9831
extern inline float __cdecl rint(float) throw(); 
#line 9832
extern inline long __cdecl lrint(float) throw(); 
#line 9833
extern inline __int64 __cdecl llrint(float) throw(); 
#line 9834
extern inline float __cdecl nearbyint(float) throw(); 
#line 9835
extern inline float __cdecl fdim(float, float) throw(); 
#line 9836
extern inline float __cdecl fma(float, float, float) throw(); 
#line 9837
extern inline float __cdecl fmax(float, float) throw(); 
#line 9838
extern inline float __cdecl fmin(float, float) throw(); 
#line 9841 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.h"
static inline float exp10(float a); 
#line 9843
static inline float rsqrt(float a); 
#line 9845
static inline float rcbrt(float a); 
#line 9847
static inline float sinpi(float a); 
#line 9849
static inline float cospi(float a); 
#line 9851
static inline void sincospi(float a, float * sptr, float * cptr); 
#line 9853
static inline void sincos(float a, float * sptr, float * cptr); 
#line 9855
static inline float j0(float a); 
#line 9857
static inline float j1(float a); 
#line 9859
static inline float jn(int n, float a); 
#line 9861
static inline float y0(float a); 
#line 9863
static inline float y1(float a); 
#line 9865
static inline float yn(int n, float a); 
#line 9867
static inline float cyl_bessel_i0(float a); 
#line 9869
static inline float cyl_bessel_i1(float a); 
#line 9871
static inline float erfinv(float a); 
#line 9873
static inline float erfcinv(float a); 
#line 9875
static inline float normcdfinv(float a); 
#line 9877
static inline float normcdf(float a); 
#line 9879
static inline float erfcx(float a); 
#line 9881
static inline double copysign(double a, float b); 
#line 9883
static inline double copysign(float a, double b); 
#line 9885
static inline unsigned min(unsigned a, unsigned b); 
#line 9887
static inline unsigned min(int a, unsigned b); 
#line 9889
static inline unsigned min(unsigned a, int b); 
#line 9891
static inline long min(long a, long b); 
#line 9893
static inline unsigned long min(unsigned long a, unsigned long b); 
#line 9895
static inline unsigned long min(long a, unsigned long b); 
#line 9897
static inline unsigned long min(unsigned long a, long b); 
#line 9899
static inline __int64 min(__int64 a, __int64 b); 
#line 9901
static inline unsigned __int64 min(unsigned __int64 a, unsigned __int64 b); 
#line 9903
static inline unsigned __int64 min(__int64 a, unsigned __int64 b); 
#line 9905
static inline unsigned __int64 min(unsigned __int64 a, __int64 b); 
#line 9907
static inline float min(float a, float b); 
#line 9909
static inline double min(double a, double b); 
#line 9911
static inline double min(float a, double b); 
#line 9913
static inline double min(double a, float b); 
#line 9915
static inline unsigned max(unsigned a, unsigned b); 
#line 9917
static inline unsigned max(int a, unsigned b); 
#line 9919
static inline unsigned max(unsigned a, int b); 
#line 9921
static inline long max(long a, long b); 
#line 9923
static inline unsigned long max(unsigned long a, unsigned long b); 
#line 9925
static inline unsigned long max(long a, unsigned long b); 
#line 9927
static inline unsigned long max(unsigned long a, long b); 
#line 9929
static inline __int64 max(__int64 a, __int64 b); 
#line 9931
static inline unsigned __int64 max(unsigned __int64 a, unsigned __int64 b); 
#line 9933
static inline unsigned __int64 max(__int64 a, unsigned __int64 b); 
#line 9935
static inline unsigned __int64 max(unsigned __int64 a, __int64 b); 
#line 9937
static inline float max(float a, float b); 
#line 9939
static inline double max(double a, double b); 
#line 9941
static inline double max(float a, double b); 
#line 9943
static inline double max(double a, float b); 
#line 422 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
static __inline bool isinf(long double a) 
#line 423
{ 
#line 427 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
return isinf< long double> (a); 
#line 429 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
} 
#line 438 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
static __inline bool isinf(double a) 
#line 439
{ 
#line 443 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
return isinf< double> (a); 
#line 445 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
} 
#line 454 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
static __inline bool isinf(float a) 
#line 455
{ 
#line 459 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
return isinf< float> (a); 
#line 461 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
} 
#line 470 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
static __inline bool isnan(long double a) 
#line 471
{ 
#line 475 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
return isnan< long double> (a); 
#line 477 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
} 
#line 486 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
static __inline bool isnan(double a) 
#line 487
{ 
#line 491 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
return isnan< double> (a); 
#line 493 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
} 
#line 502 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
static __inline bool isnan(float a) 
#line 503
{ 
#line 507 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
return isnan< float> (a); 
#line 509 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
} 
#line 518 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
static __inline bool isfinite(long double a) 
#line 519
{ 
#line 523 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
return isfinite< long double> (a); 
#line 525 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
} 
#line 534 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
static __inline bool isfinite(double a) 
#line 535
{ 
#line 539 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
return isfinite< double> (a); 
#line 541 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
} 
#line 550 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
static __inline bool isfinite(float a) 
#line 551
{ 
#line 555 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
return isfinite< float> (a); 
#line 557 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
} 
#line 765 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
static inline float exp10(float a) 
#line 766
{ 
#line 767
return exp10f(a); 
#line 768
} 
#line 770
static inline float rsqrt(float a) 
#line 771
{ 
#line 772
return rsqrtf(a); 
#line 773
} 
#line 775
static inline float rcbrt(float a) 
#line 776
{ 
#line 777
return rcbrtf(a); 
#line 778
} 
#line 780
static inline float sinpi(float a) 
#line 781
{ 
#line 782
return sinpif(a); 
#line 783
} 
#line 785
static inline float cospi(float a) 
#line 786
{ 
#line 787
return cospif(a); 
#line 788
} 
#line 790
static inline void sincospi(float a, float *sptr, float *cptr) 
#line 791
{ 
#line 792
sincospif(a, sptr, cptr); 
#line 793
} 
#line 795
static inline void sincos(float a, float *sptr, float *cptr) 
#line 796
{ 
#line 797
sincosf(a, sptr, cptr); 
#line 798
} 
#line 800
static inline float j0(float a) 
#line 801
{ 
#line 802
return j0f(a); 
#line 803
} 
#line 805
static inline float j1(float a) 
#line 806
{ 
#line 807
return j1f(a); 
#line 808
} 
#line 810
static inline float jn(int n, float a) 
#line 811
{ 
#line 812
return jnf(n, a); 
#line 813
} 
#line 815
static inline float y0(float a) 
#line 816
{ 
#line 817
return y0f(a); 
#line 818
} 
#line 820
static inline float y1(float a) 
#line 821
{ 
#line 822
return y1f(a); 
#line 823
} 
#line 825
static inline float yn(int n, float a) 
#line 826
{ 
#line 827
return ynf(n, a); 
#line 828
} 
#line 830
static inline float cyl_bessel_i0(float a) 
#line 831
{ 
#line 832
return cyl_bessel_i0f(a); 
#line 833
} 
#line 835
static inline float cyl_bessel_i1(float a) 
#line 836
{ 
#line 837
return cyl_bessel_i1f(a); 
#line 838
} 
#line 840
static inline float erfinv(float a) 
#line 841
{ 
#line 842
return erfinvf(a); 
#line 843
} 
#line 845
static inline float erfcinv(float a) 
#line 846
{ 
#line 847
return erfcinvf(a); 
#line 848
} 
#line 850
static inline float normcdfinv(float a) 
#line 851
{ 
#line 852
return normcdfinvf(a); 
#line 853
} 
#line 855
static inline float normcdf(float a) 
#line 856
{ 
#line 857
return normcdff(a); 
#line 858
} 
#line 860
static inline float erfcx(float a) 
#line 861
{ 
#line 862
return erfcxf(a); 
#line 863
} 
#line 865
static inline double copysign(double a, float b) 
#line 866
{ 
#line 867
return copysign(a, (double)b); 
#line 868
} 
#line 870
static inline double copysign(float a, double b) 
#line 871
{ 
#line 872
return copysign((double)a, b); 
#line 873
} 
#line 875
static inline unsigned min(unsigned a, unsigned b) 
#line 876
{ 
#line 877
return umin(a, b); 
#line 878
} 
#line 880
static inline unsigned min(int a, unsigned b) 
#line 881
{ 
#line 882
return umin((unsigned)a, b); 
#line 883
} 
#line 885
static inline unsigned min(unsigned a, int b) 
#line 886
{ 
#line 887
return umin(a, (unsigned)b); 
#line 888
} 
#line 890
static inline long min(long a, long b) 
#line 891
{ 
#line 894
#pragma warning (disable: 4127)
#line 897 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
if (sizeof(long) == sizeof(int)) { 
#line 899
#pragma warning (default: 4127)
#line 901 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
return (long)min((int)a, (int)b); 
#line 902
} else { 
#line 903
return (long)llmin((__int64)a, (__int64)b); 
#line 904
}  
#line 905
} 
#line 907
static inline unsigned long min(unsigned long a, unsigned long b) 
#line 908
{ 
#line 910
#pragma warning (disable: 4127)
#line 912 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
if (sizeof(unsigned long) == sizeof(unsigned)) { 
#line 914
#pragma warning (default: 4127)
#line 916 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
return (unsigned long)umin((unsigned)a, (unsigned)b); 
#line 917
} else { 
#line 918
return (unsigned long)ullmin((unsigned __int64)a, (unsigned __int64)b); 
#line 919
}  
#line 920
} 
#line 922
static inline unsigned long min(long a, unsigned long b) 
#line 923
{ 
#line 925
#pragma warning (disable: 4127)
#line 927 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
if (sizeof(unsigned long) == sizeof(unsigned)) { 
#line 929
#pragma warning (default: 4127)
#line 931 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
return (unsigned long)umin((unsigned)a, (unsigned)b); 
#line 932
} else { 
#line 933
return (unsigned long)ullmin((unsigned __int64)a, (unsigned __int64)b); 
#line 934
}  
#line 935
} 
#line 937
static inline unsigned long min(unsigned long a, long b) 
#line 938
{ 
#line 940
#pragma warning (disable: 4127)
#line 942 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
if (sizeof(unsigned long) == sizeof(unsigned)) { 
#line 944
#pragma warning (default: 4127)
#line 946 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
return (unsigned long)umin((unsigned)a, (unsigned)b); 
#line 947
} else { 
#line 948
return (unsigned long)ullmin((unsigned __int64)a, (unsigned __int64)b); 
#line 949
}  
#line 950
} 
#line 952
static inline __int64 min(__int64 a, __int64 b) 
#line 953
{ 
#line 954
return llmin(a, b); 
#line 955
} 
#line 957
static inline unsigned __int64 min(unsigned __int64 a, unsigned __int64 b) 
#line 958
{ 
#line 959
return ullmin(a, b); 
#line 960
} 
#line 962
static inline unsigned __int64 min(__int64 a, unsigned __int64 b) 
#line 963
{ 
#line 964
return ullmin((unsigned __int64)a, b); 
#line 965
} 
#line 967
static inline unsigned __int64 min(unsigned __int64 a, __int64 b) 
#line 968
{ 
#line 969
return ullmin(a, (unsigned __int64)b); 
#line 970
} 
#line 972
static inline float min(float a, float b) 
#line 973
{ 
#line 974
return fminf(a, b); 
#line 975
} 
#line 977
static inline double min(double a, double b) 
#line 978
{ 
#line 979
return fmin(a, b); 
#line 980
} 
#line 982
static inline double min(float a, double b) 
#line 983
{ 
#line 984
return fmin((double)a, b); 
#line 985
} 
#line 987
static inline double min(double a, float b) 
#line 988
{ 
#line 989
return fmin(a, (double)b); 
#line 990
} 
#line 992
static inline unsigned max(unsigned a, unsigned b) 
#line 993
{ 
#line 994
return umax(a, b); 
#line 995
} 
#line 997
static inline unsigned max(int a, unsigned b) 
#line 998
{ 
#line 999
return umax((unsigned)a, b); 
#line 1000
} 
#line 1002
static inline unsigned max(unsigned a, int b) 
#line 1003
{ 
#line 1004
return umax(a, (unsigned)b); 
#line 1005
} 
#line 1007
static inline long max(long a, long b) 
#line 1008
{ 
#line 1011
#pragma warning (disable: 4127)
#line 1013 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
if (sizeof(long) == sizeof(int)) { 
#line 1015
#pragma warning (default: 4127)
#line 1017 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
return (long)max((int)a, (int)b); 
#line 1018
} else { 
#line 1019
return (long)llmax((__int64)a, (__int64)b); 
#line 1020
}  
#line 1021
} 
#line 1023
static inline unsigned long max(unsigned long a, unsigned long b) 
#line 1024
{ 
#line 1026
#pragma warning (disable: 4127)
#line 1028 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
if (sizeof(unsigned long) == sizeof(unsigned)) { 
#line 1030
#pragma warning (default: 4127)
#line 1032 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
return (unsigned long)umax((unsigned)a, (unsigned)b); 
#line 1033
} else { 
#line 1034
return (unsigned long)ullmax((unsigned __int64)a, (unsigned __int64)b); 
#line 1035
}  
#line 1036
} 
#line 1038
static inline unsigned long max(long a, unsigned long b) 
#line 1039
{ 
#line 1041
#pragma warning (disable: 4127)
#line 1043 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
if (sizeof(unsigned long) == sizeof(unsigned)) { 
#line 1045
#pragma warning (default: 4127)
#line 1047 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
return (unsigned long)umax((unsigned)a, (unsigned)b); 
#line 1048
} else { 
#line 1049
return (unsigned long)ullmax((unsigned __int64)a, (unsigned __int64)b); 
#line 1050
}  
#line 1051
} 
#line 1053
static inline unsigned long max(unsigned long a, long b) 
#line 1054
{ 
#line 1056
#pragma warning (disable: 4127)
#line 1058 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
if (sizeof(unsigned long) == sizeof(unsigned)) { 
#line 1060
#pragma warning (default: 4127)
#line 1062 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
return (unsigned long)umax((unsigned)a, (unsigned)b); 
#line 1063
} else { 
#line 1064
return (unsigned long)ullmax((unsigned __int64)a, (unsigned __int64)b); 
#line 1065
}  
#line 1066
} 
#line 1068
static inline __int64 max(__int64 a, __int64 b) 
#line 1069
{ 
#line 1070
return llmax(a, b); 
#line 1071
} 
#line 1073
static inline unsigned __int64 max(unsigned __int64 a, unsigned __int64 b) 
#line 1074
{ 
#line 1075
return ullmax(a, b); 
#line 1076
} 
#line 1078
static inline unsigned __int64 max(__int64 a, unsigned __int64 b) 
#line 1079
{ 
#line 1080
return ullmax((unsigned __int64)a, b); 
#line 1081
} 
#line 1083
static inline unsigned __int64 max(unsigned __int64 a, __int64 b) 
#line 1084
{ 
#line 1085
return ullmax(a, (unsigned __int64)b); 
#line 1086
} 
#line 1088
static inline float max(float a, float b) 
#line 1089
{ 
#line 1090
return fmaxf(a, b); 
#line 1091
} 
#line 1093
static inline double max(double a, double b) 
#line 1094
{ 
#line 1095
return fmax(a, b); 
#line 1096
} 
#line 1098
static inline double max(float a, double b) 
#line 1099
{ 
#line 1100
return fmax((double)a, b); 
#line 1101
} 
#line 1103
static inline double max(double a, float b) 
#line 1104
{ 
#line 1105
return fmax(a, (double)b); 
#line 1106
} 
#line 1112
#pragma warning(disable : 4211)
#line 1117 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\math_functions.hpp"
static inline int min(int a, int b) 
#line 1118
{ 
#line 1119
return (a < b) ? a : b; 
#line 1120
} 
#line 1122
static inline unsigned umin(unsigned a, unsigned b) 
#line 1123
{ 
#line 1124
return (a < b) ? a : b; 
#line 1125
} 
#line 1127
static inline __int64 llmin(__int64 a, __int64 b) 
#line 1128
{ 
#line 1129
return (a < b) ? a : b; 
#line 1130
} 
#line 1132
static inline unsigned __int64 ullmin(unsigned __int64 a, unsigned __int64 
#line 1133
b) 
#line 1134
{ 
#line 1135
return (a < b) ? a : b; 
#line 1136
} 
#line 1138
static inline int max(int a, int b) 
#line 1139
{ 
#line 1140
return (a > b) ? a : b; 
#line 1141
} 
#line 1143
static inline unsigned umax(unsigned a, unsigned b) 
#line 1144
{ 
#line 1145
return (a > b) ? a : b; 
#line 1146
} 
#line 1148
static inline __int64 llmax(__int64 a, __int64 b) 
#line 1149
{ 
#line 1150
return (a > b) ? a : b; 
#line 1151
} 
#line 1153
static inline unsigned __int64 ullmax(unsigned __int64 a, unsigned __int64 
#line 1154
b) 
#line 1155
{ 
#line 1156
return (a > b) ? a : b; 
#line 1157
} 
#line 1160
#pragma warning(default: 4211)
#line 74 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\cuda_surface_types.h"
template< class T, int dim = 1> 
#line 75
struct surface : public surfaceReference { 
#line 78
surface() 
#line 79
{ 
#line 80
(channelDesc) = cudaCreateChannelDesc< T> (); 
#line 81
} 
#line 83
surface(::cudaChannelFormatDesc desc) 
#line 84
{ 
#line 85
(channelDesc) = desc; 
#line 86
} 
#line 88 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\cuda_surface_types.h"
}; 
#line 90
template< int dim> 
#line 91
struct surface< void, dim>  : public surfaceReference { 
#line 94
surface() 
#line 95
{ 
#line 96
(channelDesc) = cudaCreateChannelDesc< void> (); 
#line 97
} 
#line 99 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\cuda_surface_types.h"
}; 
#line 74 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\cuda_texture_types.h"
template< class T, int texType = 1, cudaTextureReadMode mode = cudaReadModeElementType> 
#line 75
struct texture : public textureReference { 
#line 78
texture(int norm = 0, ::cudaTextureFilterMode 
#line 79
fMode = cudaFilterModePoint, ::cudaTextureAddressMode 
#line 80
aMode = cudaAddressModeClamp) 
#line 81
{ 
#line 82
(normalized) = norm; 
#line 83
(filterMode) = fMode; 
#line 84
((addressMode)[0]) = aMode; 
#line 85
((addressMode)[1]) = aMode; 
#line 86
((addressMode)[2]) = aMode; 
#line 87
(channelDesc) = cudaCreateChannelDesc< T> (); 
#line 88
(sRGB) = 0; 
#line 89
} 
#line 91
texture(int norm, ::cudaTextureFilterMode 
#line 92
fMode, ::cudaTextureAddressMode 
#line 93
aMode, ::cudaChannelFormatDesc 
#line 94
desc) 
#line 95
{ 
#line 96
(normalized) = norm; 
#line 97
(filterMode) = fMode; 
#line 98
((addressMode)[0]) = aMode; 
#line 99
((addressMode)[1]) = aMode; 
#line 100
((addressMode)[2]) = aMode; 
#line 101
(channelDesc) = desc; 
#line 102
(sRGB) = 0; 
#line 103
} 
#line 105 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\cuda_texture_types.h"
}; 
#line 89 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt/device_functions.h"
extern "C" {
#line 3211
}
#line 3219
static __inline int mulhi(int a, int b); 
#line 3221
static __inline unsigned mulhi(unsigned a, unsigned b); 
#line 3223
static __inline unsigned mulhi(int a, unsigned b); 
#line 3225
static __inline unsigned mulhi(unsigned a, int b); 
#line 3227
static __inline __int64 mul64hi(__int64 a, __int64 b); 
#line 3229
static __inline unsigned __int64 mul64hi(unsigned __int64 a, unsigned __int64 b); 
#line 3231
static __inline unsigned __int64 mul64hi(__int64 a, unsigned __int64 b); 
#line 3233
static __inline unsigned __int64 mul64hi(unsigned __int64 a, __int64 b); 
#line 3235
static __inline int float_as_int(float a); 
#line 3237
static __inline float int_as_float(int a); 
#line 3239
static __inline unsigned float_as_uint(float a); 
#line 3241
static __inline float uint_as_float(unsigned a); 
#line 3243
static __inline float saturate(float a); 
#line 3245
static __inline int mul24(int a, int b); 
#line 3247
static __inline unsigned umul24(unsigned a, unsigned b); 
#line 3249
static __inline int float2int(float a, cudaRoundMode mode = cudaRoundZero); 
#line 3251
static __inline unsigned float2uint(float a, cudaRoundMode mode = cudaRoundZero); 
#line 3253
static __inline float int2float(int a, cudaRoundMode mode = cudaRoundNearest); 
#line 3255
static __inline float uint2float(unsigned a, cudaRoundMode mode = cudaRoundNearest); 
#line 90 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\device_functions.hpp"
static __inline int mulhi(int a, int b) {int volatile ___ = 1;(void)a;(void)b;::exit(___);}
#if 0
#line 91
{ 
#line 92
return __mulhi(a, b); 
#line 93
} 
#endif
#line 95 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\device_functions.hpp"
static __inline unsigned mulhi(unsigned a, unsigned b) {int volatile ___ = 1;(void)a;(void)b;::exit(___);}
#if 0
#line 96
{ 
#line 97
return __umulhi(a, b); 
#line 98
} 
#endif
#line 100 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\device_functions.hpp"
static __inline unsigned mulhi(int a, unsigned b) {int volatile ___ = 1;(void)a;(void)b;::exit(___);}
#if 0
#line 101
{ 
#line 102
return __umulhi((unsigned)a, b); 
#line 103
} 
#endif
#line 105 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\device_functions.hpp"
static __inline unsigned mulhi(unsigned a, int b) {int volatile ___ = 1;(void)a;(void)b;::exit(___);}
#if 0
#line 106
{ 
#line 107
return __umulhi(a, (unsigned)b); 
#line 108
} 
#endif
#line 110 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\device_functions.hpp"
static __inline __int64 mul64hi(__int64 a, __int64 b) {int volatile ___ = 1;(void)a;(void)b;::exit(___);}
#if 0
#line 111
{ 
#line 112
return __mul64hi(a, b); 
#line 113
} 
#endif
#line 115 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\device_functions.hpp"
static __inline unsigned __int64 mul64hi(unsigned __int64 a, unsigned __int64 b) {int volatile ___ = 1;(void)a;(void)b;::exit(___);}
#if 0
#line 116
{ 
#line 117
return __umul64hi(a, b); 
#line 118
} 
#endif
#line 120 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\device_functions.hpp"
static __inline unsigned __int64 mul64hi(__int64 a, unsigned __int64 b) {int volatile ___ = 1;(void)a;(void)b;::exit(___);}
#if 0
#line 121
{ 
#line 122
return __umul64hi((unsigned __int64)a, b); 
#line 123
} 
#endif
#line 125 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\device_functions.hpp"
static __inline unsigned __int64 mul64hi(unsigned __int64 a, __int64 b) {int volatile ___ = 1;(void)a;(void)b;::exit(___);}
#if 0
#line 126
{ 
#line 127
return __umul64hi(a, (unsigned __int64)b); 
#line 128
} 
#endif
#line 130 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\device_functions.hpp"
static __inline int float_as_int(float a) {int volatile ___ = 1;(void)a;::exit(___);}
#if 0
#line 131
{ 
#line 132
return __float_as_int(a); 
#line 133
} 
#endif
#line 135 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\device_functions.hpp"
static __inline float int_as_float(int a) {int volatile ___ = 1;(void)a;::exit(___);}
#if 0
#line 136
{ 
#line 137
return __int_as_float(a); 
#line 138
} 
#endif
#line 140 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\device_functions.hpp"
static __inline unsigned float_as_uint(float a) {int volatile ___ = 1;(void)a;::exit(___);}
#if 0
#line 141
{ 
#line 142
return __float_as_uint(a); 
#line 143
} 
#endif
#line 145 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\device_functions.hpp"
static __inline float uint_as_float(unsigned a) {int volatile ___ = 1;(void)a;::exit(___);}
#if 0
#line 146
{ 
#line 147
return __uint_as_float(a); 
#line 148
} 
#endif
#line 149 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\device_functions.hpp"
static __inline float saturate(float a) {int volatile ___ = 1;(void)a;::exit(___);}
#if 0
#line 150
{ 
#line 151
return __saturatef(a); 
#line 152
} 
#endif
#line 154 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\device_functions.hpp"
static __inline int mul24(int a, int b) {int volatile ___ = 1;(void)a;(void)b;::exit(___);}
#if 0
#line 155
{ 
#line 156
return __mul24(a, b); 
#line 157
} 
#endif
#line 159 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\device_functions.hpp"
static __inline unsigned umul24(unsigned a, unsigned b) {int volatile ___ = 1;(void)a;(void)b;::exit(___);}
#if 0
#line 160
{ 
#line 161
return __umul24(a, b); 
#line 162
} 
#endif
#line 164 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\device_functions.hpp"
static __inline int float2int(float a, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 165
{ 
#line 166
return (mode == (cudaRoundNearest)) ? __float2int_rn(a) : ((mode == (cudaRoundPosInf)) ? __float2int_ru(a) : ((mode == (cudaRoundMinInf)) ? __float2int_rd(a) : __float2int_rz(a))); 
#line 170
} 
#endif
#line 172 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\device_functions.hpp"
static __inline unsigned float2uint(float a, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 173
{ 
#line 174
return (mode == (cudaRoundNearest)) ? __float2uint_rn(a) : ((mode == (cudaRoundPosInf)) ? __float2uint_ru(a) : ((mode == (cudaRoundMinInf)) ? __float2uint_rd(a) : __float2uint_rz(a))); 
#line 178
} 
#endif
#line 180 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\device_functions.hpp"
static __inline float int2float(int a, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 181
{ 
#line 182
return (mode == (cudaRoundZero)) ? __int2float_rz(a) : ((mode == (cudaRoundPosInf)) ? __int2float_ru(a) : ((mode == (cudaRoundMinInf)) ? __int2float_rd(a) : __int2float_rn(a))); 
#line 186
} 
#endif
#line 188 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\device_functions.hpp"
static __inline float uint2float(unsigned a, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 189
{ 
#line 190
return (mode == (cudaRoundZero)) ? __uint2float_rz(a) : ((mode == (cudaRoundPosInf)) ? __uint2float_ru(a) : ((mode == (cudaRoundMinInf)) ? __uint2float_rd(a) : __uint2float_rn(a))); 
#line 194
} 
#endif
#line 106 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\device_atomic_functions.h"
static __inline int atomicAdd(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 106
{ } 
#endif
#line 108 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\device_atomic_functions.h"
static __inline unsigned atomicAdd(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 108
{ } 
#endif
#line 110 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\device_atomic_functions.h"
static __inline int atomicSub(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 110
{ } 
#endif
#line 112 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\device_atomic_functions.h"
static __inline unsigned atomicSub(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 112
{ } 
#endif
#line 114 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\device_atomic_functions.h"
static __inline int atomicExch(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 114
{ } 
#endif
#line 116 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\device_atomic_functions.h"
static __inline unsigned atomicExch(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 116
{ } 
#endif
#line 118 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\device_atomic_functions.h"
static __inline float atomicExch(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 118
{ } 
#endif
#line 120 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\device_atomic_functions.h"
static __inline int atomicMin(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 120
{ } 
#endif
#line 122 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\device_atomic_functions.h"
static __inline unsigned atomicMin(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 122
{ } 
#endif
#line 124 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\device_atomic_functions.h"
static __inline int atomicMax(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 124
{ } 
#endif
#line 126 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\device_atomic_functions.h"
static __inline unsigned atomicMax(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 126
{ } 
#endif
#line 128 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\device_atomic_functions.h"
static __inline unsigned atomicInc(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 128
{ } 
#endif
#line 130 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\device_atomic_functions.h"
static __inline unsigned atomicDec(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 130
{ } 
#endif
#line 132 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\device_atomic_functions.h"
static __inline int atomicAnd(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 132
{ } 
#endif
#line 134 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\device_atomic_functions.h"
static __inline unsigned atomicAnd(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 134
{ } 
#endif
#line 136 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\device_atomic_functions.h"
static __inline int atomicOr(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 136
{ } 
#endif
#line 138 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\device_atomic_functions.h"
static __inline unsigned atomicOr(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 138
{ } 
#endif
#line 140 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\device_atomic_functions.h"
static __inline int atomicXor(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 140
{ } 
#endif
#line 142 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\device_atomic_functions.h"
static __inline unsigned atomicXor(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 142
{ } 
#endif
#line 144 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\device_atomic_functions.h"
static __inline int atomicCAS(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 144
{ } 
#endif
#line 146 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\device_atomic_functions.h"
static __inline unsigned atomicCAS(unsigned *address, unsigned compare, unsigned val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 146
{ } 
#endif
#line 171 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\device_atomic_functions.h"
extern "C" {
#line 180
}
#line 189
static __inline unsigned __int64 atomicAdd(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 189
{ } 
#endif
#line 191 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\device_atomic_functions.h"
static __inline unsigned __int64 atomicExch(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 191
{ } 
#endif
#line 193 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\device_atomic_functions.h"
static __inline unsigned __int64 atomicCAS(unsigned __int64 *address, unsigned __int64 compare, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 193
{ } 
#endif
#line 195 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\device_atomic_functions.h"
__declspec(deprecated("__any() is deprecated in favor of __any_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to suppr" "ess this warning).")) static __inline bool any(bool cond) {int volatile ___ = 1;(void)cond;::exit(___);}
#if 0
#line 195
{ } 
#endif
#line 197 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\device_atomic_functions.h"
__declspec(deprecated("__all() is deprecated in favor of __all_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to suppr" "ess this warning).")) static __inline bool all(bool cond) {int volatile ___ = 1;(void)cond;::exit(___);}
#if 0
#line 197
{ } 
#endif
#line 87 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\device_double_functions.h"
extern "C" {
#line 1139
}
#line 1147
static __inline double fma(double a, double b, double c, cudaRoundMode mode); 
#line 1149
static __inline double dmul(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
#line 1151
static __inline double dadd(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
#line 1153
static __inline double dsub(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
#line 1155
static __inline int double2int(double a, cudaRoundMode mode = cudaRoundZero); 
#line 1157
static __inline unsigned double2uint(double a, cudaRoundMode mode = cudaRoundZero); 
#line 1159
static __inline __int64 double2ll(double a, cudaRoundMode mode = cudaRoundZero); 
#line 1161
static __inline unsigned __int64 double2ull(double a, cudaRoundMode mode = cudaRoundZero); 
#line 1163
static __inline double ll2double(__int64 a, cudaRoundMode mode = cudaRoundNearest); 
#line 1165
static __inline double ull2double(unsigned __int64 a, cudaRoundMode mode = cudaRoundNearest); 
#line 1167
static __inline double int2double(int a, cudaRoundMode mode = cudaRoundNearest); 
#line 1169
static __inline double uint2double(unsigned a, cudaRoundMode mode = cudaRoundNearest); 
#line 1171
static __inline double float2double(float a, cudaRoundMode mode = cudaRoundNearest); 
#line 93 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\device_double_functions.hpp"
static __inline double fma(double a, double b, double c, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)b;(void)c;(void)mode;::exit(___);}
#if 0
#line 94
{ 
#line 95
return (mode == (cudaRoundZero)) ? __fma_rz(a, b, c) : ((mode == (cudaRoundPosInf)) ? __fma_ru(a, b, c) : ((mode == (cudaRoundMinInf)) ? __fma_rd(a, b, c) : __fma_rn(a, b, c))); 
#line 99
} 
#endif
#line 101 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\device_double_functions.hpp"
static __inline double dmul(double a, double b, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)b;(void)mode;::exit(___);}
#if 0
#line 102
{ 
#line 103
return (mode == (cudaRoundZero)) ? __dmul_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dmul_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dmul_rd(a, b) : __dmul_rn(a, b))); 
#line 107
} 
#endif
#line 109 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\device_double_functions.hpp"
static __inline double dadd(double a, double b, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)b;(void)mode;::exit(___);}
#if 0
#line 110
{ 
#line 111
return (mode == (cudaRoundZero)) ? __dadd_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dadd_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dadd_rd(a, b) : __dadd_rn(a, b))); 
#line 115
} 
#endif
#line 117 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\device_double_functions.hpp"
static __inline double dsub(double a, double b, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)b;(void)mode;::exit(___);}
#if 0
#line 118
{ 
#line 119
return (mode == (cudaRoundZero)) ? __dsub_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dsub_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dsub_rd(a, b) : __dsub_rn(a, b))); 
#line 123
} 
#endif
#line 125 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\device_double_functions.hpp"
static __inline int double2int(double a, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 126
{ 
#line 127
return (mode == (cudaRoundNearest)) ? __double2int_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2int_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2int_rd(a) : __double2int_rz(a))); 
#line 131
} 
#endif
#line 133 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\device_double_functions.hpp"
static __inline unsigned double2uint(double a, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 134
{ 
#line 135
return (mode == (cudaRoundNearest)) ? __double2uint_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2uint_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2uint_rd(a) : __double2uint_rz(a))); 
#line 139
} 
#endif
#line 141 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\device_double_functions.hpp"
static __inline __int64 double2ll(double a, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 142
{ 
#line 143
return (mode == (cudaRoundNearest)) ? __double2ll_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2ll_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2ll_rd(a) : __double2ll_rz(a))); 
#line 147
} 
#endif
#line 149 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\device_double_functions.hpp"
static __inline unsigned __int64 double2ull(double a, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 150
{ 
#line 151
return (mode == (cudaRoundNearest)) ? __double2ull_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2ull_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2ull_rd(a) : __double2ull_rz(a))); 
#line 155
} 
#endif
#line 157 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\device_double_functions.hpp"
static __inline double ll2double(__int64 a, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 158
{ 
#line 159
return (mode == (cudaRoundZero)) ? __ll2double_rz(a) : ((mode == (cudaRoundPosInf)) ? __ll2double_ru(a) : ((mode == (cudaRoundMinInf)) ? __ll2double_rd(a) : __ll2double_rn(a))); 
#line 163
} 
#endif
#line 165 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\device_double_functions.hpp"
static __inline double ull2double(unsigned __int64 a, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 166
{ 
#line 167
return (mode == (cudaRoundZero)) ? __ull2double_rz(a) : ((mode == (cudaRoundPosInf)) ? __ull2double_ru(a) : ((mode == (cudaRoundMinInf)) ? __ull2double_rd(a) : __ull2double_rn(a))); 
#line 171
} 
#endif
#line 173 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\device_double_functions.hpp"
static __inline double int2double(int a, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 174
{ 
#line 175
return (double)a; 
#line 176
} 
#endif
#line 178 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\device_double_functions.hpp"
static __inline double uint2double(unsigned a, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 179
{ 
#line 180
return (double)a; 
#line 181
} 
#endif
#line 183 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\device_double_functions.hpp"
static __inline double float2double(float a, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 184
{ 
#line 185
return (double)a; 
#line 186
} 
#endif
#line 89 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_20_atomic_functions.h"
static __inline float atomicAdd(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 89
{ } 
#endif
#line 100 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_atomic_functions.h"
static __inline __int64 atomicMin(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 100
{ } 
#endif
#line 102 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_atomic_functions.h"
static __inline __int64 atomicMax(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 102
{ } 
#endif
#line 104 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_atomic_functions.h"
static __inline __int64 atomicAnd(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 104
{ } 
#endif
#line 106 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_atomic_functions.h"
static __inline __int64 atomicOr(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 106
{ } 
#endif
#line 108 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_atomic_functions.h"
static __inline __int64 atomicXor(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 108
{ } 
#endif
#line 110 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_atomic_functions.h"
static __inline unsigned __int64 atomicMin(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 110
{ } 
#endif
#line 112 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_atomic_functions.h"
static __inline unsigned __int64 atomicMax(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 112
{ } 
#endif
#line 114 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_atomic_functions.h"
static __inline unsigned __int64 atomicAnd(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 114
{ } 
#endif
#line 116 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_atomic_functions.h"
static __inline unsigned __int64 atomicOr(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 116
{ } 
#endif
#line 118 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_atomic_functions.h"
static __inline unsigned __int64 atomicXor(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 118
{ } 
#endif
#line 303 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline double atomicAdd(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 303
{ } 
#endif
#line 306 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline int atomicAdd_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 306
{ } 
#endif
#line 309 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline int atomicAdd_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 309
{ } 
#endif
#line 312 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicAdd_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 312
{ } 
#endif
#line 315 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicAdd_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 315
{ } 
#endif
#line 318 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicAdd_block(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 318
{ } 
#endif
#line 321 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicAdd_system(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 321
{ } 
#endif
#line 324 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline float atomicAdd_block(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 324
{ } 
#endif
#line 327 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline float atomicAdd_system(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 327
{ } 
#endif
#line 330 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline double atomicAdd_block(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 330
{ } 
#endif
#line 333 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline double atomicAdd_system(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 333
{ } 
#endif
#line 336 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline int atomicSub_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 336
{ } 
#endif
#line 339 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline int atomicSub_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 339
{ } 
#endif
#line 342 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicSub_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 342
{ } 
#endif
#line 345 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicSub_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 345
{ } 
#endif
#line 348 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline int atomicExch_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 348
{ } 
#endif
#line 351 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline int atomicExch_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 351
{ } 
#endif
#line 354 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicExch_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 354
{ } 
#endif
#line 357 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicExch_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 357
{ } 
#endif
#line 360 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicExch_block(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 360
{ } 
#endif
#line 363 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicExch_system(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 363
{ } 
#endif
#line 366 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline float atomicExch_block(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 366
{ } 
#endif
#line 369 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline float atomicExch_system(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 369
{ } 
#endif
#line 372 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline int atomicMin_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 372
{ } 
#endif
#line 375 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline int atomicMin_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 375
{ } 
#endif
#line 378 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicMin_block(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 378
{ } 
#endif
#line 381 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicMin_system(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 381
{ } 
#endif
#line 384 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicMin_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 384
{ } 
#endif
#line 387 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicMin_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 387
{ } 
#endif
#line 390 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicMin_block(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 390
{ } 
#endif
#line 393 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicMin_system(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 393
{ } 
#endif
#line 396 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline int atomicMax_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 396
{ } 
#endif
#line 399 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline int atomicMax_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 399
{ } 
#endif
#line 402 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicMax_block(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 402
{ } 
#endif
#line 405 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicMax_system(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 405
{ } 
#endif
#line 408 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicMax_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 408
{ } 
#endif
#line 411 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicMax_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 411
{ } 
#endif
#line 414 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicMax_block(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 414
{ } 
#endif
#line 417 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicMax_system(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 417
{ } 
#endif
#line 420 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicInc_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 420
{ } 
#endif
#line 423 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicInc_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 423
{ } 
#endif
#line 426 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicDec_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 426
{ } 
#endif
#line 429 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicDec_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 429
{ } 
#endif
#line 432 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline int atomicCAS_block(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 432
{ } 
#endif
#line 435 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline int atomicCAS_system(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 435
{ } 
#endif
#line 438 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicCAS_block(unsigned *address, unsigned compare, unsigned 
#line 439
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 439
{ } 
#endif
#line 442 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicCAS_system(unsigned *address, unsigned compare, unsigned 
#line 443
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 443
{ } 
#endif
#line 446 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicCAS_block(unsigned __int64 *address, unsigned __int64 
#line 447
compare, unsigned __int64 
#line 448
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 448
{ } 
#endif
#line 451 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicCAS_system(unsigned __int64 *address, unsigned __int64 
#line 452
compare, unsigned __int64 
#line 453
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 453
{ } 
#endif
#line 456 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline int atomicAnd_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 456
{ } 
#endif
#line 459 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline int atomicAnd_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 459
{ } 
#endif
#line 462 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicAnd_block(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 462
{ } 
#endif
#line 465 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicAnd_system(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 465
{ } 
#endif
#line 468 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicAnd_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 468
{ } 
#endif
#line 471 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicAnd_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 471
{ } 
#endif
#line 474 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicAnd_block(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 474
{ } 
#endif
#line 477 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicAnd_system(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 477
{ } 
#endif
#line 480 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline int atomicOr_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 480
{ } 
#endif
#line 483 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline int atomicOr_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 483
{ } 
#endif
#line 486 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicOr_block(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 486
{ } 
#endif
#line 489 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicOr_system(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 489
{ } 
#endif
#line 492 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicOr_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 492
{ } 
#endif
#line 495 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicOr_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 495
{ } 
#endif
#line 498 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicOr_block(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 498
{ } 
#endif
#line 501 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicOr_system(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 501
{ } 
#endif
#line 504 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline int atomicXor_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 504
{ } 
#endif
#line 507 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline int atomicXor_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 507
{ } 
#endif
#line 510 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicXor_block(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 510
{ } 
#endif
#line 513 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicXor_system(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 513
{ } 
#endif
#line 516 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicXor_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 516
{ } 
#endif
#line 519 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicXor_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 519
{ } 
#endif
#line 522 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicXor_block(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 522
{ } 
#endif
#line 525 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicXor_system(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 525
{ } 
#endif
#line 90 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_20_intrinsics.h"
extern "C" {
#line 1475
}
#line 1482
__declspec(deprecated("__ballot() is deprecated in favor of __ballot_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to" " suppress this warning).")) static __inline unsigned ballot(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
#line 1482
{ } 
#endif
#line 1484 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_20_intrinsics.h"
static __inline int syncthreads_count(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
#line 1484
{ } 
#endif
#line 1486 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_20_intrinsics.h"
static __inline bool syncthreads_and(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
#line 1486
{ } 
#endif
#line 1488 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_20_intrinsics.h"
static __inline bool syncthreads_or(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
#line 1488
{ } 
#endif
#line 1495 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_20_intrinsics.h"
static __inline unsigned __isGlobal(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 1495
{ } 
#endif
#line 105 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline unsigned __fns(unsigned mask, unsigned base, int offset) {int volatile ___ = 1;(void)mask;(void)base;(void)offset;::exit(___);}
#if 0
#line 105
{ } 
#endif
#line 106 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline void __barrier_sync(unsigned id) {int volatile ___ = 1;(void)id;::exit(___);}
#if 0
#line 106
{ } 
#endif
#line 107 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline void __barrier_sync_count(unsigned id, unsigned cnt) {int volatile ___ = 1;(void)id;(void)cnt;::exit(___);}
#if 0
#line 107
{ } 
#endif
#line 108 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline void __syncwarp(unsigned mask = 4294967295U) {int volatile ___ = 1;(void)mask;::exit(___);}
#if 0
#line 108
{ } 
#endif
#line 109 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline int __all_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
#line 109
{ } 
#endif
#line 110 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline int __any_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
#line 110
{ } 
#endif
#line 111 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline int __uni_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
#line 111
{ } 
#endif
#line 112 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline unsigned __ballot_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
#line 112
{ } 
#endif
#line 113 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline unsigned __activemask() {int volatile ___ = 1;::exit(___);}
#if 0
#line 113
{ } 
#endif
#line 121 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline int __shfl(int var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 121
{ } 
#endif
#line 122 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline int __shfl_sync(unsigned mask, int var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 122
{ } 
#endif
#line 124 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline unsigned __shfl(unsigned var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 124
{ } 
#endif
#line 125 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline unsigned __shfl_sync(unsigned mask, unsigned var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 125
{ } 
#endif
#line 127 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline int __shfl_up(int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 127
{ } 
#endif
#line 128 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline int __shfl_up_sync(unsigned mask, int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 128
{ } 
#endif
#line 130 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline unsigned __shfl_up(unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 130
{ } 
#endif
#line 131 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline unsigned __shfl_up_sync(unsigned mask, unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 131
{ } 
#endif
#line 133 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline int __shfl_down(int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 133
{ } 
#endif
#line 134 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline int __shfl_down_sync(unsigned mask, int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 134
{ } 
#endif
#line 136 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline unsigned __shfl_down(unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 136
{ } 
#endif
#line 137 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline unsigned __shfl_down_sync(unsigned mask, unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 137
{ } 
#endif
#line 139 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline int __shfl_xor(int var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 139
{ } 
#endif
#line 140 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline int __shfl_xor_sync(unsigned mask, int var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 140
{ } 
#endif
#line 142 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline unsigned __shfl_xor(unsigned var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 142
{ } 
#endif
#line 143 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline unsigned __shfl_xor_sync(unsigned mask, unsigned var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 143
{ } 
#endif
#line 145 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline float __shfl(float var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 145
{ } 
#endif
#line 146 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline float __shfl_sync(unsigned mask, float var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 146
{ } 
#endif
#line 148 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline float __shfl_up(float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 148
{ } 
#endif
#line 149 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline float __shfl_up_sync(unsigned mask, float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 149
{ } 
#endif
#line 151 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline float __shfl_down(float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 151
{ } 
#endif
#line 152 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline float __shfl_down_sync(unsigned mask, float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 152
{ } 
#endif
#line 154 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline float __shfl_xor(float var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 154
{ } 
#endif
#line 155 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline float __shfl_xor_sync(unsigned mask, float var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 155
{ } 
#endif
#line 158 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline __int64 __shfl(__int64 var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 158
{ } 
#endif
#line 159 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline __int64 __shfl_sync(unsigned mask, __int64 var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 159
{ } 
#endif
#line 161 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline unsigned __int64 __shfl(unsigned __int64 var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 161
{ } 
#endif
#line 162 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline unsigned __int64 __shfl_sync(unsigned mask, unsigned __int64 var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 162
{ } 
#endif
#line 164 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline __int64 __shfl_up(__int64 var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 164
{ } 
#endif
#line 165 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline __int64 __shfl_up_sync(unsigned mask, __int64 var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 165
{ } 
#endif
#line 167 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline unsigned __int64 __shfl_up(unsigned __int64 var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 167
{ } 
#endif
#line 168 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline unsigned __int64 __shfl_up_sync(unsigned mask, unsigned __int64 var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 168
{ } 
#endif
#line 170 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline __int64 __shfl_down(__int64 var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 170
{ } 
#endif
#line 171 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline __int64 __shfl_down_sync(unsigned mask, __int64 var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 171
{ } 
#endif
#line 173 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline unsigned __int64 __shfl_down(unsigned __int64 var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 173
{ } 
#endif
#line 174 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline unsigned __int64 __shfl_down_sync(unsigned mask, unsigned __int64 var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 174
{ } 
#endif
#line 176 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline __int64 __shfl_xor(__int64 var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 176
{ } 
#endif
#line 177 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline __int64 __shfl_xor_sync(unsigned mask, __int64 var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 177
{ } 
#endif
#line 179 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline unsigned __int64 __shfl_xor(unsigned __int64 var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 179
{ } 
#endif
#line 180 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline unsigned __int64 __shfl_xor_sync(unsigned mask, unsigned __int64 var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 180
{ } 
#endif
#line 182 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline double __shfl(double var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 182
{ } 
#endif
#line 183 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline double __shfl_sync(unsigned mask, double var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 183
{ } 
#endif
#line 185 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline double __shfl_up(double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 185
{ } 
#endif
#line 186 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline double __shfl_up_sync(unsigned mask, double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 186
{ } 
#endif
#line 188 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline double __shfl_down(double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 188
{ } 
#endif
#line 189 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline double __shfl_down_sync(unsigned mask, double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 189
{ } 
#endif
#line 191 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline double __shfl_xor(double var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 191
{ } 
#endif
#line 192 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline double __shfl_xor_sync(unsigned mask, double var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 192
{ } 
#endif
#line 196 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline long __shfl(long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 196
{ } 
#endif
#line 197 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline long __shfl_sync(unsigned mask, long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 197
{ } 
#endif
#line 199 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline unsigned long __shfl(unsigned long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 199
{ } 
#endif
#line 200 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline unsigned long __shfl_sync(unsigned mask, unsigned long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 200
{ } 
#endif
#line 202 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline long __shfl_up(long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 202
{ } 
#endif
#line 203 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline long __shfl_up_sync(unsigned mask, long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 203
{ } 
#endif
#line 205 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline unsigned long __shfl_up(unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 205
{ } 
#endif
#line 206 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline unsigned long __shfl_up_sync(unsigned mask, unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 206
{ } 
#endif
#line 208 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline long __shfl_down(long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 208
{ } 
#endif
#line 209 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline long __shfl_down_sync(unsigned mask, long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 209
{ } 
#endif
#line 211 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline unsigned long __shfl_down(unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 211
{ } 
#endif
#line 212 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline unsigned long __shfl_down_sync(unsigned mask, unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 212
{ } 
#endif
#line 214 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline long __shfl_xor(long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 214
{ } 
#endif
#line 215 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline long __shfl_xor_sync(unsigned mask, long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 215
{ } 
#endif
#line 217 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline unsigned long __shfl_xor(unsigned long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 217
{ } 
#endif
#line 218 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_30_intrinsics.h"
static __inline unsigned long __shfl_xor_sync(unsigned mask, unsigned long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 218
{ } 
#endif
#line 87 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline long __ldg(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 87
{ } 
#endif
#line 88 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline unsigned long __ldg(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 88
{ } 
#endif
#line 90 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline char __ldg(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 90
{ } 
#endif
#line 91 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline signed char __ldg(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 91
{ } 
#endif
#line 92 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline short __ldg(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 92
{ } 
#endif
#line 93 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline int __ldg(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 93
{ } 
#endif
#line 94 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline __int64 __ldg(const __int64 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 94
{ } 
#endif
#line 95 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline char2 __ldg(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 95
{ } 
#endif
#line 96 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline char4 __ldg(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 96
{ } 
#endif
#line 97 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline short2 __ldg(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 97
{ } 
#endif
#line 98 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline short4 __ldg(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 98
{ } 
#endif
#line 99 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline int2 __ldg(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 99
{ } 
#endif
#line 100 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline int4 __ldg(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 100
{ } 
#endif
#line 101 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline longlong2 __ldg(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 101
{ } 
#endif
#line 103 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline unsigned char __ldg(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 103
{ } 
#endif
#line 104 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline unsigned short __ldg(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 104
{ } 
#endif
#line 105 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline unsigned __ldg(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 105
{ } 
#endif
#line 106 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline unsigned __int64 __ldg(const unsigned __int64 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 106
{ } 
#endif
#line 107 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline uchar2 __ldg(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 107
{ } 
#endif
#line 108 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline uchar4 __ldg(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 108
{ } 
#endif
#line 109 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline ushort2 __ldg(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 109
{ } 
#endif
#line 110 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline ushort4 __ldg(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 110
{ } 
#endif
#line 111 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline uint2 __ldg(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 111
{ } 
#endif
#line 112 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline uint4 __ldg(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 112
{ } 
#endif
#line 113 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline ulonglong2 __ldg(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 113
{ } 
#endif
#line 115 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline float __ldg(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 115
{ } 
#endif
#line 116 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline double __ldg(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 116
{ } 
#endif
#line 117 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline float2 __ldg(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 117
{ } 
#endif
#line 118 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline float4 __ldg(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 118
{ } 
#endif
#line 119 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline double2 __ldg(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 119
{ } 
#endif
#line 123 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline long __ldcg(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 123
{ } 
#endif
#line 124 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline unsigned long __ldcg(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 124
{ } 
#endif
#line 126 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline char __ldcg(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 126
{ } 
#endif
#line 127 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline signed char __ldcg(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 127
{ } 
#endif
#line 128 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline short __ldcg(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 128
{ } 
#endif
#line 129 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline int __ldcg(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 129
{ } 
#endif
#line 130 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline __int64 __ldcg(const __int64 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 130
{ } 
#endif
#line 131 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline char2 __ldcg(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 131
{ } 
#endif
#line 132 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline char4 __ldcg(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 132
{ } 
#endif
#line 133 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline short2 __ldcg(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 133
{ } 
#endif
#line 134 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline short4 __ldcg(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 134
{ } 
#endif
#line 135 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline int2 __ldcg(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 135
{ } 
#endif
#line 136 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline int4 __ldcg(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 136
{ } 
#endif
#line 137 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline longlong2 __ldcg(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 137
{ } 
#endif
#line 139 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline unsigned char __ldcg(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 139
{ } 
#endif
#line 140 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline unsigned short __ldcg(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 140
{ } 
#endif
#line 141 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline unsigned __ldcg(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 141
{ } 
#endif
#line 142 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline unsigned __int64 __ldcg(const unsigned __int64 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 142
{ } 
#endif
#line 143 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline uchar2 __ldcg(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 143
{ } 
#endif
#line 144 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline uchar4 __ldcg(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 144
{ } 
#endif
#line 145 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline ushort2 __ldcg(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 145
{ } 
#endif
#line 146 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline ushort4 __ldcg(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 146
{ } 
#endif
#line 147 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline uint2 __ldcg(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 147
{ } 
#endif
#line 148 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline uint4 __ldcg(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 148
{ } 
#endif
#line 149 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline ulonglong2 __ldcg(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 149
{ } 
#endif
#line 151 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline float __ldcg(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 151
{ } 
#endif
#line 152 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline double __ldcg(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 152
{ } 
#endif
#line 153 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline float2 __ldcg(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 153
{ } 
#endif
#line 154 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline float4 __ldcg(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 154
{ } 
#endif
#line 155 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline double2 __ldcg(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 155
{ } 
#endif
#line 159 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline long __ldca(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 159
{ } 
#endif
#line 160 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline unsigned long __ldca(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 160
{ } 
#endif
#line 162 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline char __ldca(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 162
{ } 
#endif
#line 163 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline signed char __ldca(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 163
{ } 
#endif
#line 164 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline short __ldca(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 164
{ } 
#endif
#line 165 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline int __ldca(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 165
{ } 
#endif
#line 166 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline __int64 __ldca(const __int64 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 166
{ } 
#endif
#line 167 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline char2 __ldca(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 167
{ } 
#endif
#line 168 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline char4 __ldca(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 168
{ } 
#endif
#line 169 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline short2 __ldca(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 169
{ } 
#endif
#line 170 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline short4 __ldca(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 170
{ } 
#endif
#line 171 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline int2 __ldca(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 171
{ } 
#endif
#line 172 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline int4 __ldca(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 172
{ } 
#endif
#line 173 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline longlong2 __ldca(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 173
{ } 
#endif
#line 175 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline unsigned char __ldca(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 175
{ } 
#endif
#line 176 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline unsigned short __ldca(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 176
{ } 
#endif
#line 177 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline unsigned __ldca(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 177
{ } 
#endif
#line 178 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline unsigned __int64 __ldca(const unsigned __int64 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 178
{ } 
#endif
#line 179 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline uchar2 __ldca(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 179
{ } 
#endif
#line 180 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline uchar4 __ldca(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 180
{ } 
#endif
#line 181 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline ushort2 __ldca(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 181
{ } 
#endif
#line 182 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline ushort4 __ldca(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 182
{ } 
#endif
#line 183 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline uint2 __ldca(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 183
{ } 
#endif
#line 184 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline uint4 __ldca(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 184
{ } 
#endif
#line 185 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline ulonglong2 __ldca(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 185
{ } 
#endif
#line 187 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline float __ldca(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 187
{ } 
#endif
#line 188 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline double __ldca(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 188
{ } 
#endif
#line 189 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline float2 __ldca(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 189
{ } 
#endif
#line 190 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline float4 __ldca(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 190
{ } 
#endif
#line 191 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline double2 __ldca(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 191
{ } 
#endif
#line 195 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline long __ldcs(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 195
{ } 
#endif
#line 196 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline unsigned long __ldcs(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 196
{ } 
#endif
#line 198 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline char __ldcs(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 198
{ } 
#endif
#line 199 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline signed char __ldcs(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 199
{ } 
#endif
#line 200 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline short __ldcs(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 200
{ } 
#endif
#line 201 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline int __ldcs(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 201
{ } 
#endif
#line 202 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline __int64 __ldcs(const __int64 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 202
{ } 
#endif
#line 203 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline char2 __ldcs(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 203
{ } 
#endif
#line 204 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline char4 __ldcs(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 204
{ } 
#endif
#line 205 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline short2 __ldcs(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 205
{ } 
#endif
#line 206 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline short4 __ldcs(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 206
{ } 
#endif
#line 207 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline int2 __ldcs(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 207
{ } 
#endif
#line 208 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline int4 __ldcs(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 208
{ } 
#endif
#line 209 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline longlong2 __ldcs(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 209
{ } 
#endif
#line 211 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline unsigned char __ldcs(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 211
{ } 
#endif
#line 212 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline unsigned short __ldcs(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 212
{ } 
#endif
#line 213 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline unsigned __ldcs(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 213
{ } 
#endif
#line 214 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline unsigned __int64 __ldcs(const unsigned __int64 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 214
{ } 
#endif
#line 215 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline uchar2 __ldcs(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 215
{ } 
#endif
#line 216 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline uchar4 __ldcs(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 216
{ } 
#endif
#line 217 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline ushort2 __ldcs(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 217
{ } 
#endif
#line 218 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline ushort4 __ldcs(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 218
{ } 
#endif
#line 219 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline uint2 __ldcs(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 219
{ } 
#endif
#line 220 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline uint4 __ldcs(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 220
{ } 
#endif
#line 221 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline ulonglong2 __ldcs(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 221
{ } 
#endif
#line 223 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline float __ldcs(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 223
{ } 
#endif
#line 224 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline double __ldcs(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 224
{ } 
#endif
#line 225 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline float2 __ldcs(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 225
{ } 
#endif
#line 226 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline float4 __ldcs(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 226
{ } 
#endif
#line 227 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline double2 __ldcs(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 227
{ } 
#endif
#line 244 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline unsigned __funnelshift_l(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
#line 244
{ } 
#endif
#line 256 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline unsigned __funnelshift_lc(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
#line 256
{ } 
#endif
#line 269 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline unsigned __funnelshift_r(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
#line 269
{ } 
#endif
#line 281 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_32_intrinsics.h"
static __inline unsigned __funnelshift_rc(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
#line 281
{ } 
#endif
#line 89 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_61_intrinsics.h"
static __inline int __dp2a_lo(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 89
{ } 
#endif
#line 90 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_61_intrinsics.h"
static __inline unsigned __dp2a_lo(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 90
{ } 
#endif
#line 92 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_61_intrinsics.h"
static __inline int __dp2a_lo(short2 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 92
{ } 
#endif
#line 93 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_61_intrinsics.h"
static __inline unsigned __dp2a_lo(ushort2 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 93
{ } 
#endif
#line 95 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_61_intrinsics.h"
static __inline int __dp2a_hi(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 95
{ } 
#endif
#line 96 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_61_intrinsics.h"
static __inline unsigned __dp2a_hi(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 96
{ } 
#endif
#line 98 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_61_intrinsics.h"
static __inline int __dp2a_hi(short2 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 98
{ } 
#endif
#line 99 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_61_intrinsics.h"
static __inline unsigned __dp2a_hi(ushort2 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 99
{ } 
#endif
#line 106 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_61_intrinsics.h"
static __inline int __dp4a(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 106
{ } 
#endif
#line 107 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_61_intrinsics.h"
static __inline unsigned __dp4a(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 107
{ } 
#endif
#line 109 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_61_intrinsics.h"
static __inline int __dp4a(char4 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 109
{ } 
#endif
#line 110 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\sm_61_intrinsics.h"
static __inline unsigned __dp4a(uchar4 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 110
{ } 
#endif
#line 93 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 93
{ } 
#endif
#line 94 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, int value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 94
{ } 
#endif
#line 95 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, unsigned long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 95
{ } 
#endif
#line 96 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 96
{ } 
#endif
#line 97 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, unsigned __int64 value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 97
{ } 
#endif
#line 98 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, __int64 value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 98
{ } 
#endif
#line 99 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, float value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 99
{ } 
#endif
#line 100 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, double value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 100
{ } 
#endif
#line 102 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, unsigned value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 102
{ } 
#endif
#line 103 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, int value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 103
{ } 
#endif
#line 104 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, unsigned long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 104
{ } 
#endif
#line 105 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 105
{ } 
#endif
#line 106 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, unsigned __int64 value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 106
{ } 
#endif
#line 107 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, __int64 value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 107
{ } 
#endif
#line 108 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, float value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 108
{ } 
#endif
#line 109 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, double value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 109
{ } 
#endif
#line 111 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt\\sm_70_rt.h"
static __inline void __nanosleep(unsigned ns) {int volatile ___ = 1;(void)ns;::exit(___);}
#if 0
#line 111
{ } 
#endif
#line 114 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 115
surf1Dread(T *res, ::surface< void, 1>  surf, int x, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)s;(void)mode;::exit(___);}
#if 0
#line 116
{ 
#line 120
} 
#endif
#line 122 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_functions.h"
template< class T> static __forceinline T 
#line 123
surf1Dread(::surface< void, 1>  surf, int x, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surf;(void)x;(void)mode;::exit(___);}
#if 0
#line 124
{ 
#line 130
} 
#endif
#line 132 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 133
surf1Dread(T *res, ::surface< void, 1>  surf, int x, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)mode;::exit(___);}
#if 0
#line 134
{ 
#line 138
} 
#endif
#line 141 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 142
surf2Dread(T *res, ::surface< void, 2>  surf, int x, int y, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)s;(void)mode;::exit(___);}
#if 0
#line 143
{ 
#line 147
} 
#endif
#line 149 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_functions.h"
template< class T> static __forceinline T 
#line 150
surf2Dread(::surface< void, 2>  surf, int x, int y, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;::exit(___);}
#if 0
#line 151
{ 
#line 157
} 
#endif
#line 159 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 160
surf2Dread(T *res, ::surface< void, 2>  surf, int x, int y, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)mode;::exit(___);}
#if 0
#line 161
{ 
#line 165
} 
#endif
#line 168 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 169
surf3Dread(T *res, ::surface< void, 3>  surf, int x, int y, int z, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)z;(void)s;(void)mode;::exit(___);}
#if 0
#line 170
{ 
#line 174
} 
#endif
#line 176 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_functions.h"
template< class T> static __forceinline T 
#line 177
surf3Dread(::surface< void, 3>  surf, int x, int y, int z, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;::exit(___);}
#if 0
#line 178
{ 
#line 184
} 
#endif
#line 186 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 187
surf3Dread(T *res, ::surface< void, 3>  surf, int x, int y, int z, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)z;(void)mode;::exit(___);}
#if 0
#line 188
{ 
#line 192
} 
#endif
#line 196 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 197
surf1DLayeredread(T *res, ::surface< void, 241>  surf, int x, int layer, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)layer;(void)s;(void)mode;::exit(___);}
#if 0
#line 198
{ 
#line 202
} 
#endif
#line 204 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_functions.h"
template< class T> static __forceinline T 
#line 205
surf1DLayeredread(::surface< void, 241>  surf, int x, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;::exit(___);}
#if 0
#line 206
{ 
#line 212
} 
#endif
#line 215 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 216
surf1DLayeredread(T *res, ::surface< void, 241>  surf, int x, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)layer;(void)mode;::exit(___);}
#if 0
#line 217
{ 
#line 221
} 
#endif
#line 224 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 225
surf2DLayeredread(T *res, ::surface< void, 242>  surf, int x, int y, int layer, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layer;(void)s;(void)mode;::exit(___);}
#if 0
#line 226
{ 
#line 230
} 
#endif
#line 232 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_functions.h"
template< class T> static __forceinline T 
#line 233
surf2DLayeredread(::surface< void, 242>  surf, int x, int y, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;::exit(___);}
#if 0
#line 234
{ 
#line 240
} 
#endif
#line 243 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 244
surf2DLayeredread(T *res, ::surface< void, 242>  surf, int x, int y, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layer;(void)mode;::exit(___);}
#if 0
#line 245
{ 
#line 249
} 
#endif
#line 252 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 253
surfCubemapread(T *res, ::surface< void, 12>  surf, int x, int y, int face, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)face;(void)s;(void)mode;::exit(___);}
#if 0
#line 254
{ 
#line 258
} 
#endif
#line 260 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_functions.h"
template< class T> static __forceinline T 
#line 261
surfCubemapread(::surface< void, 12>  surf, int x, int y, int face, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;::exit(___);}
#if 0
#line 262
{ 
#line 269
} 
#endif
#line 271 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 272
surfCubemapread(T *res, ::surface< void, 12>  surf, int x, int y, int face, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)face;(void)mode;::exit(___);}
#if 0
#line 273
{ 
#line 277
} 
#endif
#line 280 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 281
surfCubemapLayeredread(T *res, ::surface< void, 252>  surf, int x, int y, int layerFace, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layerFace;(void)s;(void)mode;::exit(___);}
#if 0
#line 282
{ 
#line 286
} 
#endif
#line 288 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_functions.h"
template< class T> static __forceinline T 
#line 289
surfCubemapLayeredread(::surface< void, 252>  surf, int x, int y, int layerFace, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;::exit(___);}
#if 0
#line 290
{ 
#line 296
} 
#endif
#line 298 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 299
surfCubemapLayeredread(T *res, ::surface< void, 252>  surf, int x, int y, int layerFace, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;::exit(___);}
#if 0
#line 300
{ 
#line 304
} 
#endif
#line 307 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 308
surf1Dwrite(T val, ::surface< void, 1>  surf, int x, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)s;(void)mode;::exit(___);}
#if 0
#line 309
{ 
#line 313
} 
#endif
#line 315 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 316
surf1Dwrite(T val, ::surface< void, 1>  surf, int x, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;::exit(___);}
#if 0
#line 317
{ 
#line 321
} 
#endif
#line 325 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 326
surf2Dwrite(T val, ::surface< void, 2>  surf, int x, int y, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)s;(void)mode;::exit(___);}
#if 0
#line 327
{ 
#line 331
} 
#endif
#line 333 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 334
surf2Dwrite(T val, ::surface< void, 2>  surf, int x, int y, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;::exit(___);}
#if 0
#line 335
{ 
#line 339
} 
#endif
#line 342 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 343
surf3Dwrite(T val, ::surface< void, 3>  surf, int x, int y, int z, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)s;(void)mode;::exit(___);}
#if 0
#line 344
{ 
#line 348
} 
#endif
#line 350 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 351
surf3Dwrite(T val, ::surface< void, 3>  surf, int x, int y, int z, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;::exit(___);}
#if 0
#line 352
{ 
#line 356
} 
#endif
#line 359 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 360
surf1DLayeredwrite(T val, ::surface< void, 241>  surf, int x, int layer, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)s;(void)mode;::exit(___);}
#if 0
#line 361
{ 
#line 365
} 
#endif
#line 367 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 368
surf1DLayeredwrite(T val, ::surface< void, 241>  surf, int x, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;::exit(___);}
#if 0
#line 369
{ 
#line 373
} 
#endif
#line 376 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 377
surf2DLayeredwrite(T val, ::surface< void, 242>  surf, int x, int y, int layer, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)s;(void)mode;::exit(___);}
#if 0
#line 378
{ 
#line 382
} 
#endif
#line 384 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 385
surf2DLayeredwrite(T val, ::surface< void, 242>  surf, int x, int y, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;::exit(___);}
#if 0
#line 386
{ 
#line 390
} 
#endif
#line 393 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 394
surfCubemapwrite(T val, ::surface< void, 12>  surf, int x, int y, int face, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)s;(void)mode;::exit(___);}
#if 0
#line 395
{ 
#line 399
} 
#endif
#line 401 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 402
surfCubemapwrite(T val, ::surface< void, 12>  surf, int x, int y, int face, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;::exit(___);}
#if 0
#line 403
{ 
#line 407
} 
#endif
#line 411 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 412
surfCubemapLayeredwrite(T val, ::surface< void, 252>  surf, int x, int y, int layerFace, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)s;(void)mode;::exit(___);}
#if 0
#line 413
{ 
#line 417
} 
#endif
#line 419 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 420
surfCubemapLayeredwrite(T val, ::surface< void, 252>  surf, int x, int y, int layerFace, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;::exit(___);}
#if 0
#line 421
{ 
#line 425
} 
#endif
#line 66 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> 
#line 67
struct __nv_tex_rmet_ret { }; 
#line 69
template<> struct __nv_tex_rmet_ret< char>  { typedef char type; }; 
#line 70
template<> struct __nv_tex_rmet_ret< signed char>  { typedef signed char type; }; 
#line 71
template<> struct __nv_tex_rmet_ret< unsigned char>  { typedef unsigned char type; }; 
#line 72
template<> struct __nv_tex_rmet_ret< char1>  { typedef char1 type; }; 
#line 73
template<> struct __nv_tex_rmet_ret< uchar1>  { typedef uchar1 type; }; 
#line 74
template<> struct __nv_tex_rmet_ret< char2>  { typedef char2 type; }; 
#line 75
template<> struct __nv_tex_rmet_ret< uchar2>  { typedef uchar2 type; }; 
#line 76
template<> struct __nv_tex_rmet_ret< char4>  { typedef char4 type; }; 
#line 77
template<> struct __nv_tex_rmet_ret< uchar4>  { typedef uchar4 type; }; 
#line 79
template<> struct __nv_tex_rmet_ret< short>  { typedef short type; }; 
#line 80
template<> struct __nv_tex_rmet_ret< unsigned short>  { typedef unsigned short type; }; 
#line 81
template<> struct __nv_tex_rmet_ret< short1>  { typedef short1 type; }; 
#line 82
template<> struct __nv_tex_rmet_ret< ushort1>  { typedef ushort1 type; }; 
#line 83
template<> struct __nv_tex_rmet_ret< short2>  { typedef short2 type; }; 
#line 84
template<> struct __nv_tex_rmet_ret< ushort2>  { typedef ushort2 type; }; 
#line 85
template<> struct __nv_tex_rmet_ret< short4>  { typedef short4 type; }; 
#line 86
template<> struct __nv_tex_rmet_ret< ushort4>  { typedef ushort4 type; }; 
#line 88
template<> struct __nv_tex_rmet_ret< int>  { typedef int type; }; 
#line 89
template<> struct __nv_tex_rmet_ret< unsigned>  { typedef unsigned type; }; 
#line 90
template<> struct __nv_tex_rmet_ret< int1>  { typedef int1 type; }; 
#line 91
template<> struct __nv_tex_rmet_ret< uint1>  { typedef uint1 type; }; 
#line 92
template<> struct __nv_tex_rmet_ret< int2>  { typedef int2 type; }; 
#line 93
template<> struct __nv_tex_rmet_ret< uint2>  { typedef uint2 type; }; 
#line 94
template<> struct __nv_tex_rmet_ret< int4>  { typedef int4 type; }; 
#line 95
template<> struct __nv_tex_rmet_ret< uint4>  { typedef uint4 type; }; 
#line 98
template<> struct __nv_tex_rmet_ret< long>  { typedef long type; }; 
#line 99
template<> struct __nv_tex_rmet_ret< unsigned long>  { typedef unsigned long type; }; 
#line 100
template<> struct __nv_tex_rmet_ret< long1>  { typedef long1 type; }; 
#line 101
template<> struct __nv_tex_rmet_ret< ulong1>  { typedef ulong1 type; }; 
#line 102
template<> struct __nv_tex_rmet_ret< long2>  { typedef long2 type; }; 
#line 103
template<> struct __nv_tex_rmet_ret< ulong2>  { typedef ulong2 type; }; 
#line 104
template<> struct __nv_tex_rmet_ret< long4>  { typedef long4 type; }; 
#line 105
template<> struct __nv_tex_rmet_ret< ulong4>  { typedef ulong4 type; }; 
#line 107 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template<> struct __nv_tex_rmet_ret< float>  { typedef float type; }; 
#line 108
template<> struct __nv_tex_rmet_ret< float1>  { typedef float1 type; }; 
#line 109
template<> struct __nv_tex_rmet_ret< float2>  { typedef float2 type; }; 
#line 110
template<> struct __nv_tex_rmet_ret< float4>  { typedef float4 type; }; 
#line 113
template< class T> struct __nv_tex_rmet_cast { typedef T *type; }; 
#line 115
template<> struct __nv_tex_rmet_cast< long>  { typedef int *type; }; 
#line 116
template<> struct __nv_tex_rmet_cast< unsigned long>  { typedef unsigned *type; }; 
#line 117
template<> struct __nv_tex_rmet_cast< long1>  { typedef int1 *type; }; 
#line 118
template<> struct __nv_tex_rmet_cast< ulong1>  { typedef uint1 *type; }; 
#line 119
template<> struct __nv_tex_rmet_cast< long2>  { typedef int2 *type; }; 
#line 120
template<> struct __nv_tex_rmet_cast< ulong2>  { typedef uint2 *type; }; 
#line 121
template<> struct __nv_tex_rmet_cast< long4>  { typedef int4 *type; }; 
#line 122
template<> struct __nv_tex_rmet_cast< ulong4>  { typedef uint4 *type; }; 
#line 125 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 126
tex1Dfetch(texture< T, 1, cudaReadModeElementType>  t, int x) {int volatile ___ = 1;(void)t;(void)x;::exit(___);}
#if 0
#line 127
{ 
#line 133
} 
#endif
#line 135 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> 
#line 136
struct __nv_tex_rmnf_ret { }; 
#line 138
template<> struct __nv_tex_rmnf_ret< char>  { typedef float type; }; 
#line 139
template<> struct __nv_tex_rmnf_ret< signed char>  { typedef float type; }; 
#line 140
template<> struct __nv_tex_rmnf_ret< unsigned char>  { typedef float type; }; 
#line 141
template<> struct __nv_tex_rmnf_ret< short>  { typedef float type; }; 
#line 142
template<> struct __nv_tex_rmnf_ret< unsigned short>  { typedef float type; }; 
#line 143
template<> struct __nv_tex_rmnf_ret< char1>  { typedef float1 type; }; 
#line 144
template<> struct __nv_tex_rmnf_ret< uchar1>  { typedef float1 type; }; 
#line 145
template<> struct __nv_tex_rmnf_ret< short1>  { typedef float1 type; }; 
#line 146
template<> struct __nv_tex_rmnf_ret< ushort1>  { typedef float1 type; }; 
#line 147
template<> struct __nv_tex_rmnf_ret< char2>  { typedef float2 type; }; 
#line 148
template<> struct __nv_tex_rmnf_ret< uchar2>  { typedef float2 type; }; 
#line 149
template<> struct __nv_tex_rmnf_ret< short2>  { typedef float2 type; }; 
#line 150
template<> struct __nv_tex_rmnf_ret< ushort2>  { typedef float2 type; }; 
#line 151
template<> struct __nv_tex_rmnf_ret< char4>  { typedef float4 type; }; 
#line 152
template<> struct __nv_tex_rmnf_ret< uchar4>  { typedef float4 type; }; 
#line 153
template<> struct __nv_tex_rmnf_ret< short4>  { typedef float4 type; }; 
#line 154
template<> struct __nv_tex_rmnf_ret< ushort4>  { typedef float4 type; }; 
#line 156
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 157
tex1Dfetch(texture< T, 1, cudaReadModeNormalizedFloat>  t, int x) {int volatile ___ = 1;(void)t;(void)x;::exit(___);}
#if 0
#line 158
{ 
#line 165
} 
#endif
#line 168 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 169
tex1D(texture< T, 1, cudaReadModeElementType>  t, float x) {int volatile ___ = 1;(void)t;(void)x;::exit(___);}
#if 0
#line 170
{ 
#line 176
} 
#endif
#line 178 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 179
tex1D(texture< T, 1, cudaReadModeNormalizedFloat>  t, float x) {int volatile ___ = 1;(void)t;(void)x;::exit(___);}
#if 0
#line 180
{ 
#line 187
} 
#endif
#line 191 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 192
tex2D(texture< T, 2, cudaReadModeElementType>  t, float x, float y) {int volatile ___ = 1;(void)t;(void)x;(void)y;::exit(___);}
#if 0
#line 193
{ 
#line 200
} 
#endif
#line 202 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 203
tex2D(texture< T, 2, cudaReadModeNormalizedFloat>  t, float x, float y) {int volatile ___ = 1;(void)t;(void)x;(void)y;::exit(___);}
#if 0
#line 204
{ 
#line 211
} 
#endif
#line 215 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 216
tex1DLayered(texture< T, 241, cudaReadModeElementType>  t, float x, int layer) {int volatile ___ = 1;(void)t;(void)x;(void)layer;::exit(___);}
#if 0
#line 217
{ 
#line 223
} 
#endif
#line 225 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 226
tex1DLayered(texture< T, 241, cudaReadModeNormalizedFloat>  t, float x, int layer) {int volatile ___ = 1;(void)t;(void)x;(void)layer;::exit(___);}
#if 0
#line 227
{ 
#line 234
} 
#endif
#line 238 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 239
tex2DLayered(texture< T, 242, cudaReadModeElementType>  t, float x, float y, int layer) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;::exit(___);}
#if 0
#line 240
{ 
#line 246
} 
#endif
#line 248 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 249
tex2DLayered(texture< T, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;::exit(___);}
#if 0
#line 250
{ 
#line 257
} 
#endif
#line 260 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 261
tex3D(texture< T, 3, cudaReadModeElementType>  t, float x, float y, float z) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;::exit(___);}
#if 0
#line 262
{ 
#line 268
} 
#endif
#line 270 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 271
tex3D(texture< T, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;::exit(___);}
#if 0
#line 272
{ 
#line 279
} 
#endif
#line 282 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 283
texCubemap(texture< T, 12, cudaReadModeElementType>  t, float x, float y, float z) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;::exit(___);}
#if 0
#line 284
{ 
#line 290
} 
#endif
#line 292 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 293
texCubemap(texture< T, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;::exit(___);}
#if 0
#line 294
{ 
#line 301
} 
#endif
#line 304 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> 
#line 305
struct __nv_tex2dgather_ret { }; 
#line 306
template<> struct __nv_tex2dgather_ret< char>  { typedef char4 type; }; 
#line 307
template<> struct __nv_tex2dgather_ret< signed char>  { typedef char4 type; }; 
#line 308
template<> struct __nv_tex2dgather_ret< char1>  { typedef char4 type; }; 
#line 309
template<> struct __nv_tex2dgather_ret< char2>  { typedef char4 type; }; 
#line 310
template<> struct __nv_tex2dgather_ret< char3>  { typedef char4 type; }; 
#line 311
template<> struct __nv_tex2dgather_ret< char4>  { typedef char4 type; }; 
#line 312
template<> struct __nv_tex2dgather_ret< unsigned char>  { typedef uchar4 type; }; 
#line 313
template<> struct __nv_tex2dgather_ret< uchar1>  { typedef uchar4 type; }; 
#line 314
template<> struct __nv_tex2dgather_ret< uchar2>  { typedef uchar4 type; }; 
#line 315
template<> struct __nv_tex2dgather_ret< uchar3>  { typedef uchar4 type; }; 
#line 316
template<> struct __nv_tex2dgather_ret< uchar4>  { typedef uchar4 type; }; 
#line 318
template<> struct __nv_tex2dgather_ret< short>  { typedef short4 type; }; 
#line 319
template<> struct __nv_tex2dgather_ret< short1>  { typedef short4 type; }; 
#line 320
template<> struct __nv_tex2dgather_ret< short2>  { typedef short4 type; }; 
#line 321
template<> struct __nv_tex2dgather_ret< short3>  { typedef short4 type; }; 
#line 322
template<> struct __nv_tex2dgather_ret< short4>  { typedef short4 type; }; 
#line 323
template<> struct __nv_tex2dgather_ret< unsigned short>  { typedef ushort4 type; }; 
#line 324
template<> struct __nv_tex2dgather_ret< ushort1>  { typedef ushort4 type; }; 
#line 325
template<> struct __nv_tex2dgather_ret< ushort2>  { typedef ushort4 type; }; 
#line 326
template<> struct __nv_tex2dgather_ret< ushort3>  { typedef ushort4 type; }; 
#line 327
template<> struct __nv_tex2dgather_ret< ushort4>  { typedef ushort4 type; }; 
#line 329
template<> struct __nv_tex2dgather_ret< int>  { typedef int4 type; }; 
#line 330
template<> struct __nv_tex2dgather_ret< int1>  { typedef int4 type; }; 
#line 331
template<> struct __nv_tex2dgather_ret< int2>  { typedef int4 type; }; 
#line 332
template<> struct __nv_tex2dgather_ret< int3>  { typedef int4 type; }; 
#line 333
template<> struct __nv_tex2dgather_ret< int4>  { typedef int4 type; }; 
#line 334
template<> struct __nv_tex2dgather_ret< unsigned>  { typedef uint4 type; }; 
#line 335
template<> struct __nv_tex2dgather_ret< uint1>  { typedef uint4 type; }; 
#line 336
template<> struct __nv_tex2dgather_ret< uint2>  { typedef uint4 type; }; 
#line 337
template<> struct __nv_tex2dgather_ret< uint3>  { typedef uint4 type; }; 
#line 338
template<> struct __nv_tex2dgather_ret< uint4>  { typedef uint4 type; }; 
#line 340
template<> struct __nv_tex2dgather_ret< float>  { typedef float4 type; }; 
#line 341
template<> struct __nv_tex2dgather_ret< float1>  { typedef float4 type; }; 
#line 342
template<> struct __nv_tex2dgather_ret< float2>  { typedef float4 type; }; 
#line 343
template<> struct __nv_tex2dgather_ret< float3>  { typedef float4 type; }; 
#line 344
template<> struct __nv_tex2dgather_ret< float4>  { typedef float4 type; }; 
#line 346
template< class T> static __forceinline typename __nv_tex2dgather_ret< T> ::type 
#line 347
tex2Dgather(texture< T, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;::exit(___);}
#if 0
#line 348
{ 
#line 355
} 
#endif
#line 358 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> struct __nv_tex2dgather_rmnf_ret { }; 
#line 359
template<> struct __nv_tex2dgather_rmnf_ret< char>  { typedef float4 type; }; 
#line 360
template<> struct __nv_tex2dgather_rmnf_ret< signed char>  { typedef float4 type; }; 
#line 361
template<> struct __nv_tex2dgather_rmnf_ret< unsigned char>  { typedef float4 type; }; 
#line 362
template<> struct __nv_tex2dgather_rmnf_ret< char1>  { typedef float4 type; }; 
#line 363
template<> struct __nv_tex2dgather_rmnf_ret< uchar1>  { typedef float4 type; }; 
#line 364
template<> struct __nv_tex2dgather_rmnf_ret< char2>  { typedef float4 type; }; 
#line 365
template<> struct __nv_tex2dgather_rmnf_ret< uchar2>  { typedef float4 type; }; 
#line 366
template<> struct __nv_tex2dgather_rmnf_ret< char3>  { typedef float4 type; }; 
#line 367
template<> struct __nv_tex2dgather_rmnf_ret< uchar3>  { typedef float4 type; }; 
#line 368
template<> struct __nv_tex2dgather_rmnf_ret< char4>  { typedef float4 type; }; 
#line 369
template<> struct __nv_tex2dgather_rmnf_ret< uchar4>  { typedef float4 type; }; 
#line 370
template<> struct __nv_tex2dgather_rmnf_ret< signed short>  { typedef float4 type; }; 
#line 371
template<> struct __nv_tex2dgather_rmnf_ret< unsigned short>  { typedef float4 type; }; 
#line 372
template<> struct __nv_tex2dgather_rmnf_ret< short1>  { typedef float4 type; }; 
#line 373
template<> struct __nv_tex2dgather_rmnf_ret< ushort1>  { typedef float4 type; }; 
#line 374
template<> struct __nv_tex2dgather_rmnf_ret< short2>  { typedef float4 type; }; 
#line 375
template<> struct __nv_tex2dgather_rmnf_ret< ushort2>  { typedef float4 type; }; 
#line 376
template<> struct __nv_tex2dgather_rmnf_ret< short3>  { typedef float4 type; }; 
#line 377
template<> struct __nv_tex2dgather_rmnf_ret< ushort3>  { typedef float4 type; }; 
#line 378
template<> struct __nv_tex2dgather_rmnf_ret< short4>  { typedef float4 type; }; 
#line 379
template<> struct __nv_tex2dgather_rmnf_ret< ushort4>  { typedef float4 type; }; 
#line 381
template< class T> static __forceinline typename __nv_tex2dgather_rmnf_ret< T> ::type 
#line 382
tex2Dgather(texture< T, 2, cudaReadModeNormalizedFloat>  t, float x, float y, int comp = 0) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;::exit(___);}
#if 0
#line 383
{ 
#line 390
} 
#endif
#line 394 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 395
tex1DLod(texture< T, 1, cudaReadModeElementType>  t, float x, float level) {int volatile ___ = 1;(void)t;(void)x;(void)level;::exit(___);}
#if 0
#line 396
{ 
#line 402
} 
#endif
#line 404 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 405
tex1DLod(texture< T, 1, cudaReadModeNormalizedFloat>  t, float x, float level) {int volatile ___ = 1;(void)t;(void)x;(void)level;::exit(___);}
#if 0
#line 406
{ 
#line 413
} 
#endif
#line 416 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 417
tex2DLod(texture< T, 2, cudaReadModeElementType>  t, float x, float y, float level) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)level;::exit(___);}
#if 0
#line 418
{ 
#line 424
} 
#endif
#line 426 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 427
tex2DLod(texture< T, 2, cudaReadModeNormalizedFloat>  t, float x, float y, float level) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)level;::exit(___);}
#if 0
#line 428
{ 
#line 435
} 
#endif
#line 438 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 439
tex1DLayeredLod(texture< T, 241, cudaReadModeElementType>  t, float x, int layer, float level) {int volatile ___ = 1;(void)t;(void)x;(void)layer;(void)level;::exit(___);}
#if 0
#line 440
{ 
#line 446
} 
#endif
#line 448 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 449
tex1DLayeredLod(texture< T, 241, cudaReadModeNormalizedFloat>  t, float x, int layer, float level) {int volatile ___ = 1;(void)t;(void)x;(void)layer;(void)level;::exit(___);}
#if 0
#line 450
{ 
#line 457
} 
#endif
#line 460 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 461
tex2DLayeredLod(texture< T, 242, cudaReadModeElementType>  t, float x, float y, int layer, float level) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;(void)level;::exit(___);}
#if 0
#line 462
{ 
#line 468
} 
#endif
#line 470 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 471
tex2DLayeredLod(texture< T, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer, float level) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;(void)level;::exit(___);}
#if 0
#line 472
{ 
#line 479
} 
#endif
#line 482 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 483
tex3DLod(texture< T, 3, cudaReadModeElementType>  t, float x, float y, float z, float level) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)level;::exit(___);}
#if 0
#line 484
{ 
#line 490
} 
#endif
#line 492 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 493
tex3DLod(texture< T, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z, float level) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)level;::exit(___);}
#if 0
#line 494
{ 
#line 501
} 
#endif
#line 504 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 505
texCubemapLod(texture< T, 12, cudaReadModeElementType>  t, float x, float y, float z, float level) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)level;::exit(___);}
#if 0
#line 506
{ 
#line 512
} 
#endif
#line 514 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 515
texCubemapLod(texture< T, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z, float level) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)level;::exit(___);}
#if 0
#line 516
{ 
#line 523
} 
#endif
#line 527 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 528
texCubemapLayered(texture< T, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;::exit(___);}
#if 0
#line 529
{ 
#line 535
} 
#endif
#line 537 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 538
texCubemapLayered(texture< T, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;::exit(___);}
#if 0
#line 539
{ 
#line 546
} 
#endif
#line 550 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 551
texCubemapLayeredLod(texture< T, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer, float level) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;(void)level;::exit(___);}
#if 0
#line 552
{ 
#line 558
} 
#endif
#line 560 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 561
texCubemapLayeredLod(texture< T, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer, float level) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;(void)level;::exit(___);}
#if 0
#line 562
{ 
#line 569
} 
#endif
#line 573 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 574
texCubemapGrad(texture< T, 12, cudaReadModeElementType>  t, float x, float y, float z, ::float4 dPdx, ::float4 dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 575
{ 
#line 581
} 
#endif
#line 583 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 584
texCubemapGrad(texture< T, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z, ::float4 dPdx, ::float4 dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 585
{ 
#line 592
} 
#endif
#line 596 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 597
texCubemapLayeredGrad(texture< T, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer, ::float4 dPdx, ::float4 dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 598
{ 
#line 604
} 
#endif
#line 606 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 607
texCubemapLayeredGrad(texture< T, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer, ::float4 dPdx, ::float4 dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 608
{ 
#line 615
} 
#endif
#line 619 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 620
tex1DGrad(texture< T, 1, cudaReadModeElementType>  t, float x, float dPdx, float dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 621
{ 
#line 627
} 
#endif
#line 629 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 630
tex1DGrad(texture< T, 1, cudaReadModeNormalizedFloat>  t, float x, float dPdx, float dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 631
{ 
#line 638
} 
#endif
#line 642 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 643
tex2DGrad(texture< T, 2, cudaReadModeElementType>  t, float x, float y, ::float2 dPdx, ::float2 dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 644
{ 
#line 650
} 
#endif
#line 652 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 653
tex2DGrad(texture< T, 2, cudaReadModeNormalizedFloat>  t, float x, float y, ::float2 dPdx, ::float2 dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 654
{ 
#line 661
} 
#endif
#line 664 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 665
tex1DLayeredGrad(texture< T, 241, cudaReadModeElementType>  t, float x, int layer, float dPdx, float dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 666
{ 
#line 672
} 
#endif
#line 674 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 675
tex1DLayeredGrad(texture< T, 241, cudaReadModeNormalizedFloat>  t, float x, int layer, float dPdx, float dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 676
{ 
#line 683
} 
#endif
#line 686 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 687
tex2DLayeredGrad(texture< T, 242, cudaReadModeElementType>  t, float x, float y, int layer, ::float2 dPdx, ::float2 dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 688
{ 
#line 694
} 
#endif
#line 696 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 697
tex2DLayeredGrad(texture< T, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer, ::float2 dPdx, ::float2 dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 698
{ 
#line 705
} 
#endif
#line 708 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmet_ret< T> ::type 
#line 709
tex3DGrad(texture< T, 3, cudaReadModeElementType>  t, float x, float y, float z, ::float4 dPdx, ::float4 dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 710
{ 
#line 716
} 
#endif
#line 718 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_fetch_functions.h"
template< class T> static __forceinline typename __nv_tex_rmnf_ret< T> ::type 
#line 719
tex3DGrad(texture< T, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z, ::float4 dPdx, ::float4 dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 720
{ 
#line 727
} 
#endif
#line 60 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> struct __nv_itex_trait { }; 
#line 61
template<> struct __nv_itex_trait< char>  { typedef void type; }; 
#line 62
template<> struct __nv_itex_trait< signed char>  { typedef void type; }; 
#line 63
template<> struct __nv_itex_trait< char1>  { typedef void type; }; 
#line 64
template<> struct __nv_itex_trait< char2>  { typedef void type; }; 
#line 65
template<> struct __nv_itex_trait< char4>  { typedef void type; }; 
#line 66
template<> struct __nv_itex_trait< unsigned char>  { typedef void type; }; 
#line 67
template<> struct __nv_itex_trait< uchar1>  { typedef void type; }; 
#line 68
template<> struct __nv_itex_trait< uchar2>  { typedef void type; }; 
#line 69
template<> struct __nv_itex_trait< uchar4>  { typedef void type; }; 
#line 70
template<> struct __nv_itex_trait< short>  { typedef void type; }; 
#line 71
template<> struct __nv_itex_trait< short1>  { typedef void type; }; 
#line 72
template<> struct __nv_itex_trait< short2>  { typedef void type; }; 
#line 73
template<> struct __nv_itex_trait< short4>  { typedef void type; }; 
#line 74
template<> struct __nv_itex_trait< unsigned short>  { typedef void type; }; 
#line 75
template<> struct __nv_itex_trait< ushort1>  { typedef void type; }; 
#line 76
template<> struct __nv_itex_trait< ushort2>  { typedef void type; }; 
#line 77
template<> struct __nv_itex_trait< ushort4>  { typedef void type; }; 
#line 78
template<> struct __nv_itex_trait< int>  { typedef void type; }; 
#line 79
template<> struct __nv_itex_trait< int1>  { typedef void type; }; 
#line 80
template<> struct __nv_itex_trait< int2>  { typedef void type; }; 
#line 81
template<> struct __nv_itex_trait< int4>  { typedef void type; }; 
#line 82
template<> struct __nv_itex_trait< unsigned>  { typedef void type; }; 
#line 83
template<> struct __nv_itex_trait< uint1>  { typedef void type; }; 
#line 84
template<> struct __nv_itex_trait< uint2>  { typedef void type; }; 
#line 85
template<> struct __nv_itex_trait< uint4>  { typedef void type; }; 
#line 87
template<> struct __nv_itex_trait< long>  { typedef void type; }; 
#line 88
template<> struct __nv_itex_trait< long1>  { typedef void type; }; 
#line 89
template<> struct __nv_itex_trait< long2>  { typedef void type; }; 
#line 90
template<> struct __nv_itex_trait< long4>  { typedef void type; }; 
#line 91
template<> struct __nv_itex_trait< unsigned long>  { typedef void type; }; 
#line 92
template<> struct __nv_itex_trait< ulong1>  { typedef void type; }; 
#line 93
template<> struct __nv_itex_trait< ulong2>  { typedef void type; }; 
#line 94
template<> struct __nv_itex_trait< ulong4>  { typedef void type; }; 
#line 96 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template<> struct __nv_itex_trait< float>  { typedef void type; }; 
#line 97
template<> struct __nv_itex_trait< float1>  { typedef void type; }; 
#line 98
template<> struct __nv_itex_trait< float2>  { typedef void type; }; 
#line 99
template<> struct __nv_itex_trait< float4>  { typedef void type; }; 
#line 103
template< class T> static typename __nv_itex_trait< T> ::type 
#line 104
tex1Dfetch(T *ptr, ::cudaTextureObject_t obj, int x) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;::exit(___);}
#if 0
#line 105
{ 
#line 109
} 
#endif
#line 111 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 112
tex1Dfetch(::cudaTextureObject_t texObject, int x) {int volatile ___ = 1;(void)texObject;(void)x;::exit(___);}
#if 0
#line 113
{ 
#line 119
} 
#endif
#line 121 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 122
tex1D(T *ptr, ::cudaTextureObject_t obj, float x) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;::exit(___);}
#if 0
#line 123
{ 
#line 127
} 
#endif
#line 130 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 131
tex1D(::cudaTextureObject_t texObject, float x) {int volatile ___ = 1;(void)texObject;(void)x;::exit(___);}
#if 0
#line 132
{ 
#line 138
} 
#endif
#line 141 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 142
tex2D(T *ptr, ::cudaTextureObject_t obj, float x, float y) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;::exit(___);}
#if 0
#line 143
{ 
#line 147
} 
#endif
#line 149 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 150
tex2D(::cudaTextureObject_t texObject, float x, float y) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;::exit(___);}
#if 0
#line 151
{ 
#line 157
} 
#endif
#line 159 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 160
tex3D(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;::exit(___);}
#if 0
#line 161
{ 
#line 165
} 
#endif
#line 167 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 168
tex3D(::cudaTextureObject_t texObject, float x, float y, float z) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;::exit(___);}
#if 0
#line 169
{ 
#line 175
} 
#endif
#line 177 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 178
tex1DLayered(T *ptr, ::cudaTextureObject_t obj, float x, int layer) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;::exit(___);}
#if 0
#line 179
{ 
#line 183
} 
#endif
#line 185 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 186
tex1DLayered(::cudaTextureObject_t texObject, float x, int layer) {int volatile ___ = 1;(void)texObject;(void)x;(void)layer;::exit(___);}
#if 0
#line 187
{ 
#line 193
} 
#endif
#line 195 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 196
tex2DLayered(T *ptr, ::cudaTextureObject_t obj, float x, float y, int layer) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;::exit(___);}
#if 0
#line 197
{ 
#line 201
} 
#endif
#line 203 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 204
tex2DLayered(::cudaTextureObject_t texObject, float x, float y, int layer) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;::exit(___);}
#if 0
#line 205
{ 
#line 211
} 
#endif
#line 214 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 215
texCubemap(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;::exit(___);}
#if 0
#line 216
{ 
#line 220
} 
#endif
#line 223 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 224
texCubemap(::cudaTextureObject_t texObject, float x, float y, float z) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;::exit(___);}
#if 0
#line 225
{ 
#line 231
} 
#endif
#line 234 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 235
texCubemapLayered(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, int layer) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)layer;::exit(___);}
#if 0
#line 236
{ 
#line 240
} 
#endif
#line 242 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 243
texCubemapLayered(::cudaTextureObject_t texObject, float x, float y, float z, int layer) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)layer;::exit(___);}
#if 0
#line 244
{ 
#line 250
} 
#endif
#line 252 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 253
tex2Dgather(T *ptr, ::cudaTextureObject_t obj, float x, float y, int comp = 0) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)comp;::exit(___);}
#if 0
#line 254
{ 
#line 258
} 
#endif
#line 260 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 261
tex2Dgather(::cudaTextureObject_t to, float x, float y, int comp = 0) {int volatile ___ = 1;(void)to;(void)x;(void)y;(void)comp;::exit(___);}
#if 0
#line 262
{ 
#line 268
} 
#endif
#line 272 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 273
tex1DLod(T *ptr, ::cudaTextureObject_t obj, float x, float level) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)level;::exit(___);}
#if 0
#line 274
{ 
#line 278
} 
#endif
#line 280 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 281
tex1DLod(::cudaTextureObject_t texObject, float x, float level) {int volatile ___ = 1;(void)texObject;(void)x;(void)level;::exit(___);}
#if 0
#line 282
{ 
#line 288
} 
#endif
#line 291 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 292
tex2DLod(T *ptr, ::cudaTextureObject_t obj, float x, float y, float level) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)level;::exit(___);}
#if 0
#line 293
{ 
#line 297
} 
#endif
#line 299 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 300
tex2DLod(::cudaTextureObject_t texObject, float x, float y, float level) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)level;::exit(___);}
#if 0
#line 301
{ 
#line 307
} 
#endif
#line 310 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 311
tex3DLod(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, float level) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)level;::exit(___);}
#if 0
#line 312
{ 
#line 316
} 
#endif
#line 318 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 319
tex3DLod(::cudaTextureObject_t texObject, float x, float y, float z, float level) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)level;::exit(___);}
#if 0
#line 320
{ 
#line 326
} 
#endif
#line 329 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 330
tex1DLayeredLod(T *ptr, ::cudaTextureObject_t obj, float x, int layer, float level) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;(void)level;::exit(___);}
#if 0
#line 331
{ 
#line 335
} 
#endif
#line 337 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 338
tex1DLayeredLod(::cudaTextureObject_t texObject, float x, int layer, float level) {int volatile ___ = 1;(void)texObject;(void)x;(void)layer;(void)level;::exit(___);}
#if 0
#line 339
{ 
#line 345
} 
#endif
#line 348 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 349
tex2DLayeredLod(T *ptr, ::cudaTextureObject_t obj, float x, float y, int layer, float level) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)level;::exit(___);}
#if 0
#line 350
{ 
#line 354
} 
#endif
#line 356 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 357
tex2DLayeredLod(::cudaTextureObject_t texObject, float x, float y, int layer, float level) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)level;::exit(___);}
#if 0
#line 358
{ 
#line 364
} 
#endif
#line 367 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 368
texCubemapLod(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, float level) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)level;::exit(___);}
#if 0
#line 369
{ 
#line 373
} 
#endif
#line 375 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 376
texCubemapLod(::cudaTextureObject_t texObject, float x, float y, float z, float level) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)level;::exit(___);}
#if 0
#line 377
{ 
#line 383
} 
#endif
#line 386 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 387
texCubemapGrad(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, ::float4 dPdx, ::float4 dPdy) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 388
{ 
#line 392
} 
#endif
#line 394 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 395
texCubemapGrad(::cudaTextureObject_t texObject, float x, float y, float z, ::float4 dPdx, ::float4 dPdy) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 396
{ 
#line 402
} 
#endif
#line 404 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 405
texCubemapLayeredLod(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, int layer, float level) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)layer;(void)level;::exit(___);}
#if 0
#line 406
{ 
#line 410
} 
#endif
#line 412 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 413
texCubemapLayeredLod(::cudaTextureObject_t texObject, float x, float y, float z, int layer, float level) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)layer;(void)level;::exit(___);}
#if 0
#line 414
{ 
#line 420
} 
#endif
#line 422 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 423
tex1DGrad(T *ptr, ::cudaTextureObject_t obj, float x, float dPdx, float dPdy) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 424
{ 
#line 428
} 
#endif
#line 430 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 431
tex1DGrad(::cudaTextureObject_t texObject, float x, float dPdx, float dPdy) {int volatile ___ = 1;(void)texObject;(void)x;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 432
{ 
#line 438
} 
#endif
#line 441 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 442
tex2DGrad(T *ptr, ::cudaTextureObject_t obj, float x, float y, ::float2 dPdx, ::float2 dPdy) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 443
{ 
#line 448
} 
#endif
#line 450 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 451
tex2DGrad(::cudaTextureObject_t texObject, float x, float y, ::float2 dPdx, ::float2 dPdy) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 452
{ 
#line 458
} 
#endif
#line 461 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 462
tex3DGrad(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, ::float4 dPdx, ::float4 dPdy) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 463
{ 
#line 467
} 
#endif
#line 469 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 470
tex3DGrad(::cudaTextureObject_t texObject, float x, float y, float z, ::float4 dPdx, ::float4 dPdy) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 471
{ 
#line 477
} 
#endif
#line 480 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 481
tex1DLayeredGrad(T *ptr, ::cudaTextureObject_t obj, float x, int layer, float dPdx, float dPdy) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 482
{ 
#line 486
} 
#endif
#line 488 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 489
tex1DLayeredGrad(::cudaTextureObject_t texObject, float x, int layer, float dPdx, float dPdy) {int volatile ___ = 1;(void)texObject;(void)x;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 490
{ 
#line 496
} 
#endif
#line 499 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 500
tex2DLayeredGrad(T *ptr, ::cudaTextureObject_t obj, float x, float y, int layer, ::float2 dPdx, ::float2 dPdy) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 501
{ 
#line 505
} 
#endif
#line 507 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 508
tex2DLayeredGrad(::cudaTextureObject_t texObject, float x, float y, int layer, ::float2 dPdx, ::float2 dPdy) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 509
{ 
#line 515
} 
#endif
#line 518 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 519
texCubemapLayeredGrad(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, int layer, ::float4 dPdx, ::float4 dPdy) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 520
{ 
#line 524
} 
#endif
#line 526 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 527
texCubemapLayeredGrad(::cudaTextureObject_t texObject, float x, float y, float z, int layer, ::float4 dPdx, ::float4 dPdy) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 528
{ 
#line 534
} 
#endif
#line 59 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_indirect_functions.h"
template< class T> struct __nv_isurf_trait { }; 
#line 60
template<> struct __nv_isurf_trait< char>  { typedef void type; }; 
#line 61
template<> struct __nv_isurf_trait< signed char>  { typedef void type; }; 
#line 62
template<> struct __nv_isurf_trait< char1>  { typedef void type; }; 
#line 63
template<> struct __nv_isurf_trait< unsigned char>  { typedef void type; }; 
#line 64
template<> struct __nv_isurf_trait< uchar1>  { typedef void type; }; 
#line 65
template<> struct __nv_isurf_trait< short>  { typedef void type; }; 
#line 66
template<> struct __nv_isurf_trait< short1>  { typedef void type; }; 
#line 67
template<> struct __nv_isurf_trait< unsigned short>  { typedef void type; }; 
#line 68
template<> struct __nv_isurf_trait< ushort1>  { typedef void type; }; 
#line 69
template<> struct __nv_isurf_trait< int>  { typedef void type; }; 
#line 70
template<> struct __nv_isurf_trait< int1>  { typedef void type; }; 
#line 71
template<> struct __nv_isurf_trait< unsigned>  { typedef void type; }; 
#line 72
template<> struct __nv_isurf_trait< uint1>  { typedef void type; }; 
#line 73
template<> struct __nv_isurf_trait< __int64>  { typedef void type; }; 
#line 74
template<> struct __nv_isurf_trait< longlong1>  { typedef void type; }; 
#line 75
template<> struct __nv_isurf_trait< unsigned __int64>  { typedef void type; }; 
#line 76
template<> struct __nv_isurf_trait< ulonglong1>  { typedef void type; }; 
#line 77
template<> struct __nv_isurf_trait< float>  { typedef void type; }; 
#line 78
template<> struct __nv_isurf_trait< float1>  { typedef void type; }; 
#line 80
template<> struct __nv_isurf_trait< char2>  { typedef void type; }; 
#line 81
template<> struct __nv_isurf_trait< uchar2>  { typedef void type; }; 
#line 82
template<> struct __nv_isurf_trait< short2>  { typedef void type; }; 
#line 83
template<> struct __nv_isurf_trait< ushort2>  { typedef void type; }; 
#line 84
template<> struct __nv_isurf_trait< int2>  { typedef void type; }; 
#line 85
template<> struct __nv_isurf_trait< uint2>  { typedef void type; }; 
#line 86
template<> struct __nv_isurf_trait< longlong2>  { typedef void type; }; 
#line 87
template<> struct __nv_isurf_trait< ulonglong2>  { typedef void type; }; 
#line 88
template<> struct __nv_isurf_trait< float2>  { typedef void type; }; 
#line 90
template<> struct __nv_isurf_trait< char4>  { typedef void type; }; 
#line 91
template<> struct __nv_isurf_trait< uchar4>  { typedef void type; }; 
#line 92
template<> struct __nv_isurf_trait< short4>  { typedef void type; }; 
#line 93
template<> struct __nv_isurf_trait< ushort4>  { typedef void type; }; 
#line 94
template<> struct __nv_isurf_trait< int4>  { typedef void type; }; 
#line 95
template<> struct __nv_isurf_trait< uint4>  { typedef void type; }; 
#line 96
template<> struct __nv_isurf_trait< float4>  { typedef void type; }; 
#line 99
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 100
surf1Dread(T *ptr, ::cudaSurfaceObject_t obj, int x, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)mode;::exit(___);}
#if 0
#line 101
{ 
#line 105
} 
#endif
#line 107 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_indirect_functions.h"
template< class T> static T 
#line 108
surf1Dread(::cudaSurfaceObject_t surfObject, int x, ::cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surfObject;(void)x;(void)boundaryMode;::exit(___);}
#if 0
#line 109
{ 
#line 115
} 
#endif
#line 117 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 118
surf2Dread(T *ptr, ::cudaSurfaceObject_t obj, int x, int y, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)mode;::exit(___);}
#if 0
#line 119
{ 
#line 123
} 
#endif
#line 125 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_indirect_functions.h"
template< class T> static T 
#line 126
surf2Dread(::cudaSurfaceObject_t surfObject, int x, int y, ::cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)boundaryMode;::exit(___);}
#if 0
#line 127
{ 
#line 133
} 
#endif
#line 136 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 137
surf3Dread(T *ptr, ::cudaSurfaceObject_t obj, int x, int y, int z, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)mode;::exit(___);}
#if 0
#line 138
{ 
#line 142
} 
#endif
#line 144 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_indirect_functions.h"
template< class T> static T 
#line 145
surf3Dread(::cudaSurfaceObject_t surfObject, int x, int y, int z, ::cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)z;(void)boundaryMode;::exit(___);}
#if 0
#line 146
{ 
#line 152
} 
#endif
#line 154 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 155
surf1DLayeredread(T *ptr, ::cudaSurfaceObject_t obj, int x, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;(void)mode;::exit(___);}
#if 0
#line 156
{ 
#line 160
} 
#endif
#line 162 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_indirect_functions.h"
template< class T> static T 
#line 163
surf1DLayeredread(::cudaSurfaceObject_t surfObject, int x, int layer, ::cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surfObject;(void)x;(void)layer;(void)boundaryMode;::exit(___);}
#if 0
#line 164
{ 
#line 170
} 
#endif
#line 172 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 173
surf2DLayeredread(T *ptr, ::cudaSurfaceObject_t obj, int x, int y, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)mode;::exit(___);}
#if 0
#line 174
{ 
#line 178
} 
#endif
#line 180 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_indirect_functions.h"
template< class T> static T 
#line 181
surf2DLayeredread(::cudaSurfaceObject_t surfObject, int x, int y, int layer, ::cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)layer;(void)boundaryMode;::exit(___);}
#if 0
#line 182
{ 
#line 188
} 
#endif
#line 190 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 191
surfCubemapread(T *ptr, ::cudaSurfaceObject_t obj, int x, int y, int face, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)face;(void)mode;::exit(___);}
#if 0
#line 192
{ 
#line 196
} 
#endif
#line 198 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_indirect_functions.h"
template< class T> static T 
#line 199
surfCubemapread(::cudaSurfaceObject_t surfObject, int x, int y, int face, ::cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)face;(void)boundaryMode;::exit(___);}
#if 0
#line 200
{ 
#line 206
} 
#endif
#line 208 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 209
surfCubemapLayeredread(T *ptr, ::cudaSurfaceObject_t obj, int x, int y, int layerface, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layerface;(void)mode;::exit(___);}
#if 0
#line 210
{ 
#line 214
} 
#endif
#line 216 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_indirect_functions.h"
template< class T> static T 
#line 217
surfCubemapLayeredread(::cudaSurfaceObject_t surfObject, int x, int y, int layerface, ::cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)layerface;(void)boundaryMode;::exit(___);}
#if 0
#line 218
{ 
#line 224
} 
#endif
#line 226 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 227
surf1Dwrite(T val, ::cudaSurfaceObject_t obj, int x, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)mode;::exit(___);}
#if 0
#line 228
{ 
#line 232
} 
#endif
#line 234 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 235
surf2Dwrite(T val, ::cudaSurfaceObject_t obj, int x, int y, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)mode;::exit(___);}
#if 0
#line 236
{ 
#line 240
} 
#endif
#line 242 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 243
surf3Dwrite(T val, ::cudaSurfaceObject_t obj, int x, int y, int z, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)z;(void)mode;::exit(___);}
#if 0
#line 244
{ 
#line 248
} 
#endif
#line 250 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 251
surf1DLayeredwrite(T val, ::cudaSurfaceObject_t obj, int x, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)layer;(void)mode;::exit(___);}
#if 0
#line 252
{ 
#line 256
} 
#endif
#line 258 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 259
surf2DLayeredwrite(T val, ::cudaSurfaceObject_t obj, int x, int y, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)layer;(void)mode;::exit(___);}
#if 0
#line 260
{ 
#line 264
} 
#endif
#line 266 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 267
surfCubemapwrite(T val, ::cudaSurfaceObject_t obj, int x, int y, int face, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)face;(void)mode;::exit(___);}
#if 0
#line 268
{ 
#line 272
} 
#endif
#line 274 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 275
surfCubemapLayeredwrite(T val, ::cudaSurfaceObject_t obj, int x, int y, int layerface, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)layerface;(void)mode;::exit(___);}
#if 0
#line 276
{ 
#line 280
} 
#endif
#line 3290 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\crt/device_functions.h"
extern "C" unsigned __stdcall __cudaPushCallConfiguration(dim3 gridDim, dim3 blockDim, size_t sharedMem = 0, void * stream = 0); 
#line 68 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\device_launch_parameters.h"
extern "C" {
#line 71 "d:\\nvidia gpu computing toolkit\\cuda\\v10.0\\include\\device_launch_parameters.h"
extern const uint3 __device_builtin_variable_threadIdx; 
#line 72
extern const uint3 __device_builtin_variable_blockIdx; 
#line 73
extern const dim3 __device_builtin_variable_blockDim; 
#line 74
extern const dim3 __device_builtin_variable_gridDim; 
#line 75
extern const int __device_builtin_variable_warpSize; 
#line 80
}
#line 192 "D:/NVIDIA GPU Computing Toolkit/CUDA/v10.0/bin/../include\\cuda_runtime.h"
template< class T> static __inline ::cudaError_t 
#line 193
cudaLaunchKernel(const T *
#line 194
func, ::dim3 
#line 195
gridDim, ::dim3 
#line 196
blockDim, void **
#line 197
args, ::size_t 
#line 198
sharedMem = 0, ::cudaStream_t 
#line 199
stream = 0) 
#line 201
{ 
#line 202
return ::cudaLaunchKernel((const void *)func, gridDim, blockDim, args, sharedMem, stream); 
#line 203
} 
#line 254
template< class T> static __inline ::cudaError_t 
#line 255
cudaLaunchCooperativeKernel(const T *
#line 256
func, ::dim3 
#line 257
gridDim, ::dim3 
#line 258
blockDim, void **
#line 259
args, ::size_t 
#line 260
sharedMem = 0, ::cudaStream_t 
#line 261
stream = 0) 
#line 263
{ 
#line 264
return ::cudaLaunchCooperativeKernel((const void *)func, gridDim, blockDim, args, sharedMem, stream); 
#line 265
} 
#line 294
template< class T> static __inline ::cudaError_t 
#line 295
cudaSetupArgument(T 
#line 296
arg, ::size_t 
#line 297
offset) 
#line 299
{ 
#line 300
return ::cudaSetupArgument((const void *)(&arg), sizeof(T), offset); 
#line 301
} 
#line 334
static __inline cudaError_t cudaEventCreate(cudaEvent_t *
#line 335
event, unsigned 
#line 336
flags) 
#line 338
{ 
#line 339
return ::cudaEventCreateWithFlags(event, flags); 
#line 340
} 
#line 399
static __inline cudaError_t cudaMallocHost(void **
#line 400
ptr, size_t 
#line 401
size, unsigned 
#line 402
flags) 
#line 404
{ 
#line 405
return ::cudaHostAlloc(ptr, size, flags); 
#line 406
} 
#line 408
template< class T> static __inline ::cudaError_t 
#line 409
cudaHostAlloc(T **
#line 410
ptr, ::size_t 
#line 411
size, unsigned 
#line 412
flags) 
#line 414
{ 
#line 415
return ::cudaHostAlloc((void **)((void *)ptr), size, flags); 
#line 416
} 
#line 418
template< class T> static __inline ::cudaError_t 
#line 419
cudaHostGetDevicePointer(T **
#line 420
pDevice, void *
#line 421
pHost, unsigned 
#line 422
flags) 
#line 424
{ 
#line 425
return ::cudaHostGetDevicePointer((void **)((void *)pDevice), pHost, flags); 
#line 426
} 
#line 528
template< class T> static __inline ::cudaError_t 
#line 529
cudaMallocManaged(T **
#line 530
devPtr, ::size_t 
#line 531
size, unsigned 
#line 532
flags = 1) 
#line 534
{ 
#line 535
return ::cudaMallocManaged((void **)((void *)devPtr), size, flags); 
#line 536
} 
#line 618
template< class T> static __inline ::cudaError_t 
#line 619
cudaStreamAttachMemAsync(::cudaStream_t 
#line 620
stream, T *
#line 621
devPtr, ::size_t 
#line 622
length = 0, unsigned 
#line 623
flags = 4) 
#line 625
{ 
#line 626
return ::cudaStreamAttachMemAsync(stream, (void *)devPtr, length, flags); 
#line 627
} 
#line 629
template< class T> __inline ::cudaError_t 
#line 630
cudaMalloc(T **
#line 631
devPtr, ::size_t 
#line 632
size) 
#line 634
{ 
#line 635
return ::cudaMalloc((void **)((void *)devPtr), size); 
#line 636
} 
#line 638
template< class T> static __inline ::cudaError_t 
#line 639
cudaMallocHost(T **
#line 640
ptr, ::size_t 
#line 641
size, unsigned 
#line 642
flags = 0) 
#line 644
{ 
#line 645
return cudaMallocHost((void **)((void *)ptr), size, flags); 
#line 646
} 
#line 648
template< class T> static __inline ::cudaError_t 
#line 649
cudaMallocPitch(T **
#line 650
devPtr, ::size_t *
#line 651
pitch, ::size_t 
#line 652
width, ::size_t 
#line 653
height) 
#line 655
{ 
#line 656
return ::cudaMallocPitch((void **)((void *)devPtr), pitch, width, height); 
#line 657
} 
#line 696
template< class T> static __inline ::cudaError_t 
#line 697
cudaMemcpyToSymbol(const T &
#line 698
symbol, const void *
#line 699
src, ::size_t 
#line 700
count, ::size_t 
#line 701
offset = 0, ::cudaMemcpyKind 
#line 702
kind = cudaMemcpyHostToDevice) 
#line 704
{ 
#line 705
return ::cudaMemcpyToSymbol((const void *)(&symbol), src, count, offset, kind); 
#line 706
} 
#line 750
template< class T> static __inline ::cudaError_t 
#line 751
cudaMemcpyToSymbolAsync(const T &
#line 752
symbol, const void *
#line 753
src, ::size_t 
#line 754
count, ::size_t 
#line 755
offset = 0, ::cudaMemcpyKind 
#line 756
kind = cudaMemcpyHostToDevice, ::cudaStream_t 
#line 757
stream = 0) 
#line 759
{ 
#line 760
return ::cudaMemcpyToSymbolAsync((const void *)(&symbol), src, count, offset, kind, stream); 
#line 761
} 
#line 798
template< class T> static __inline ::cudaError_t 
#line 799
cudaMemcpyFromSymbol(void *
#line 800
dst, const T &
#line 801
symbol, ::size_t 
#line 802
count, ::size_t 
#line 803
offset = 0, ::cudaMemcpyKind 
#line 804
kind = cudaMemcpyDeviceToHost) 
#line 806
{ 
#line 807
return ::cudaMemcpyFromSymbol(dst, (const void *)(&symbol), count, offset, kind); 
#line 808
} 
#line 852
template< class T> static __inline ::cudaError_t 
#line 853
cudaMemcpyFromSymbolAsync(void *
#line 854
dst, const T &
#line 855
symbol, ::size_t 
#line 856
count, ::size_t 
#line 857
offset = 0, ::cudaMemcpyKind 
#line 858
kind = cudaMemcpyDeviceToHost, ::cudaStream_t 
#line 859
stream = 0) 
#line 861
{ 
#line 862
return ::cudaMemcpyFromSymbolAsync(dst, (const void *)(&symbol), count, offset, kind, stream); 
#line 863
} 
#line 888
template< class T> static __inline ::cudaError_t 
#line 889
cudaGetSymbolAddress(void **
#line 890
devPtr, const T &
#line 891
symbol) 
#line 893
{ 
#line 894
return ::cudaGetSymbolAddress(devPtr, (const void *)(&symbol)); 
#line 895
} 
#line 920
template< class T> static __inline ::cudaError_t 
#line 921
cudaGetSymbolSize(::size_t *
#line 922
size, const T &
#line 923
symbol) 
#line 925
{ 
#line 926
return ::cudaGetSymbolSize(size, (const void *)(&symbol)); 
#line 927
} 
#line 964
template< class T, int dim, cudaTextureReadMode readMode> static __inline ::cudaError_t 
#line 965
cudaBindTexture(::size_t *
#line 966
offset, const texture< T, dim, readMode>  &
#line 967
tex, const void *
#line 968
devPtr, const ::cudaChannelFormatDesc &
#line 969
desc, ::size_t 
#line 970
size = 4294967295U) 
#line 972
{ 
#line 973
return ::cudaBindTexture(offset, &tex, devPtr, &desc, size); 
#line 974
} 
#line 1010
template< class T, int dim, cudaTextureReadMode readMode> static __inline ::cudaError_t 
#line 1011
cudaBindTexture(::size_t *
#line 1012
offset, const texture< T, dim, readMode>  &
#line 1013
tex, const void *
#line 1014
devPtr, ::size_t 
#line 1015
size = 4294967295U) 
#line 1017
{ 
#line 1018
return cudaBindTexture(offset, tex, devPtr, (tex.channelDesc), size); 
#line 1019
} 
#line 1067
template< class T, int dim, cudaTextureReadMode readMode> static __inline ::cudaError_t 
#line 1068
cudaBindTexture2D(::size_t *
#line 1069
offset, const texture< T, dim, readMode>  &
#line 1070
tex, const void *
#line 1071
devPtr, const ::cudaChannelFormatDesc &
#line 1072
desc, ::size_t 
#line 1073
width, ::size_t 
#line 1074
height, ::size_t 
#line 1075
pitch) 
#line 1077
{ 
#line 1078
return ::cudaBindTexture2D(offset, &tex, devPtr, &desc, width, height, pitch); 
#line 1079
} 
#line 1126
template< class T, int dim, cudaTextureReadMode readMode> static __inline ::cudaError_t 
#line 1127
cudaBindTexture2D(::size_t *
#line 1128
offset, const texture< T, dim, readMode>  &
#line 1129
tex, const void *
#line 1130
devPtr, ::size_t 
#line 1131
width, ::size_t 
#line 1132
height, ::size_t 
#line 1133
pitch) 
#line 1135
{ 
#line 1136
return ::cudaBindTexture2D(offset, &tex, devPtr, &(tex.channelDesc), width, height, pitch); 
#line 1137
} 
#line 1169
template< class T, int dim, cudaTextureReadMode readMode> static __inline ::cudaError_t 
#line 1170
cudaBindTextureToArray(const texture< T, dim, readMode>  &
#line 1171
tex, ::cudaArray_const_t 
#line 1172
array, const ::cudaChannelFormatDesc &
#line 1173
desc) 
#line 1175
{ 
#line 1176
return ::cudaBindTextureToArray(&tex, array, &desc); 
#line 1177
} 
#line 1208
template< class T, int dim, cudaTextureReadMode readMode> static __inline ::cudaError_t 
#line 1209
cudaBindTextureToArray(const texture< T, dim, readMode>  &
#line 1210
tex, ::cudaArray_const_t 
#line 1211
array) 
#line 1213
{ 
#line 1214
::cudaChannelFormatDesc desc; 
#line 1215
::cudaError_t err = ::cudaGetChannelDesc(&desc, array); 
#line 1217
return (err == (cudaSuccess)) ? cudaBindTextureToArray(tex, array, desc) : err; 
#line 1218
} 
#line 1250
template< class T, int dim, cudaTextureReadMode readMode> static __inline ::cudaError_t 
#line 1251
cudaBindTextureToMipmappedArray(const texture< T, dim, readMode>  &
#line 1252
tex, ::cudaMipmappedArray_const_t 
#line 1253
mipmappedArray, const ::cudaChannelFormatDesc &
#line 1254
desc) 
#line 1256
{ 
#line 1257
return ::cudaBindTextureToMipmappedArray(&tex, mipmappedArray, &desc); 
#line 1258
} 
#line 1289
template< class T, int dim, cudaTextureReadMode readMode> static __inline ::cudaError_t 
#line 1290
cudaBindTextureToMipmappedArray(const texture< T, dim, readMode>  &
#line 1291
tex, ::cudaMipmappedArray_const_t 
#line 1292
mipmappedArray) 
#line 1294
{ 
#line 1295
::cudaChannelFormatDesc desc; 
#line 1296
::cudaArray_t levelArray; 
#line 1297
::cudaError_t err = ::cudaGetMipmappedArrayLevel(&levelArray, mipmappedArray, 0); 
#line 1299
if (err != (cudaSuccess)) { 
#line 1300
return err; 
#line 1301
}  
#line 1302
err = ::cudaGetChannelDesc(&desc, levelArray); 
#line 1304
return (err == (cudaSuccess)) ? cudaBindTextureToMipmappedArray(tex, mipmappedArray, desc) : err; 
#line 1305
} 
#line 1332
template< class T, int dim, cudaTextureReadMode readMode> static __inline ::cudaError_t 
#line 1333
cudaUnbindTexture(const texture< T, dim, readMode>  &
#line 1334
tex) 
#line 1336
{ 
#line 1337
return ::cudaUnbindTexture(&tex); 
#line 1338
} 
#line 1368
template< class T, int dim, cudaTextureReadMode readMode> static __inline ::cudaError_t 
#line 1369
cudaGetTextureAlignmentOffset(::size_t *
#line 1370
offset, const texture< T, dim, readMode>  &
#line 1371
tex) 
#line 1373
{ 
#line 1374
return ::cudaGetTextureAlignmentOffset(offset, &tex); 
#line 1375
} 
#line 1421
template< class T> static __inline ::cudaError_t 
#line 1422
cudaFuncSetCacheConfig(T *
#line 1423
func, ::cudaFuncCache 
#line 1424
cacheConfig) 
#line 1426
{ 
#line 1427
return ::cudaFuncSetCacheConfig((const void *)func, cacheConfig); 
#line 1428
} 
#line 1430
template< class T> static __inline ::cudaError_t 
#line 1431
cudaFuncSetSharedMemConfig(T *
#line 1432
func, ::cudaSharedMemConfig 
#line 1433
config) 
#line 1435
{ 
#line 1436
return ::cudaFuncSetSharedMemConfig((const void *)func, config); 
#line 1437
} 
#line 1466
template< class T> __inline ::cudaError_t 
#line 1467
cudaOccupancyMaxActiveBlocksPerMultiprocessor(int *
#line 1468
numBlocks, T 
#line 1469
func, int 
#line 1470
blockSize, ::size_t 
#line 1471
dynamicSMemSize) 
#line 1472
{ 
#line 1473
return ::cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(numBlocks, (const void *)func, blockSize, dynamicSMemSize, 0); 
#line 1474
} 
#line 1517
template< class T> __inline ::cudaError_t 
#line 1518
cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int *
#line 1519
numBlocks, T 
#line 1520
func, int 
#line 1521
blockSize, ::size_t 
#line 1522
dynamicSMemSize, unsigned 
#line 1523
flags) 
#line 1524
{ 
#line 1525
return ::cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(numBlocks, (const void *)func, blockSize, dynamicSMemSize, flags); 
#line 1526
} 
#line 1531
class __cudaOccupancyB2DHelper { 
#line 1532
size_t n; 
#line 1534
public: __cudaOccupancyB2DHelper(size_t n_) : n(n_) { } 
#line 1535
size_t operator()(int) 
#line 1536
{ 
#line 1537
return n; 
#line 1538
} 
#line 1539
}; 
#line 1586
template< class UnaryFunction, class T> static __inline ::cudaError_t 
#line 1587
cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(int *
#line 1588
minGridSize, int *
#line 1589
blockSize, T 
#line 1590
func, UnaryFunction 
#line 1591
blockSizeToDynamicSMemSize, int 
#line 1592
blockSizeLimit = 0, unsigned 
#line 1593
flags = 0) 
#line 1594
{ 
#line 1595
::cudaError_t status; 
#line 1598
int device; 
#line 1599
::cudaFuncAttributes attr; 
#line 1602
int maxThreadsPerMultiProcessor; 
#line 1603
int warpSize; 
#line 1604
int devMaxThreadsPerBlock; 
#line 1605
int multiProcessorCount; 
#line 1606
int funcMaxThreadsPerBlock; 
#line 1607
int occupancyLimit; 
#line 1608
int granularity; 
#line 1611
int maxBlockSize = 0; 
#line 1612
int numBlocks = 0; 
#line 1613
int maxOccupancy = 0; 
#line 1616
int blockSizeToTryAligned; 
#line 1617
int blockSizeToTry; 
#line 1618
int blockSizeLimitAligned; 
#line 1619
int occupancyInBlocks; 
#line 1620
int occupancyInThreads; 
#line 1621
::size_t dynamicSMemSize; 
#line 1627
if (((!minGridSize) || (!blockSize)) || (!func)) { 
#line 1628
return cudaErrorInvalidValue; 
#line 1629
}  
#line 1635
status = ::cudaGetDevice(&device); 
#line 1636
if (status != (cudaSuccess)) { 
#line 1637
return status; 
#line 1638
}  
#line 1640
status = cudaDeviceGetAttribute(&maxThreadsPerMultiProcessor, cudaDevAttrMaxThreadsPerMultiProcessor, device); 
#line 1644
if (status != (cudaSuccess)) { 
#line 1645
return status; 
#line 1646
}  
#line 1648
status = cudaDeviceGetAttribute(&warpSize, cudaDevAttrWarpSize, device); 
#line 1652
if (status != (cudaSuccess)) { 
#line 1653
return status; 
#line 1654
}  
#line 1656
status = cudaDeviceGetAttribute(&devMaxThreadsPerBlock, cudaDevAttrMaxThreadsPerBlock, device); 
#line 1660
if (status != (cudaSuccess)) { 
#line 1661
return status; 
#line 1662
}  
#line 1664
status = cudaDeviceGetAttribute(&multiProcessorCount, cudaDevAttrMultiProcessorCount, device); 
#line 1668
if (status != (cudaSuccess)) { 
#line 1669
return status; 
#line 1670
}  
#line 1672
status = cudaFuncGetAttributes(&attr, func); 
#line 1673
if (status != (cudaSuccess)) { 
#line 1674
return status; 
#line 1675
}  
#line 1677
funcMaxThreadsPerBlock = (attr.maxThreadsPerBlock); 
#line 1683
occupancyLimit = maxThreadsPerMultiProcessor; 
#line 1684
granularity = warpSize; 
#line 1686
if (blockSizeLimit == 0) { 
#line 1687
blockSizeLimit = devMaxThreadsPerBlock; 
#line 1688
}  
#line 1690
if (devMaxThreadsPerBlock < blockSizeLimit) { 
#line 1691
blockSizeLimit = devMaxThreadsPerBlock; 
#line 1692
}  
#line 1694
if (funcMaxThreadsPerBlock < blockSizeLimit) { 
#line 1695
blockSizeLimit = funcMaxThreadsPerBlock; 
#line 1696
}  
#line 1698
blockSizeLimitAligned = (((blockSizeLimit + (granularity - 1)) / granularity) * granularity); 
#line 1700
for (blockSizeToTryAligned = blockSizeLimitAligned; blockSizeToTryAligned > 0; blockSizeToTryAligned -= granularity) { 
#line 1704
if (blockSizeLimit < blockSizeToTryAligned) { 
#line 1705
blockSizeToTry = blockSizeLimit; 
#line 1706
} else { 
#line 1707
blockSizeToTry = blockSizeToTryAligned; 
#line 1708
}  
#line 1710
dynamicSMemSize = blockSizeToDynamicSMemSize(blockSizeToTry); 
#line 1712
status = cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(&occupancyInBlocks, func, blockSizeToTry, dynamicSMemSize, flags); 
#line 1719
if (status != (cudaSuccess)) { 
#line 1720
return status; 
#line 1721
}  
#line 1723
occupancyInThreads = (blockSizeToTry * occupancyInBlocks); 
#line 1725
if (occupancyInThreads > maxOccupancy) { 
#line 1726
maxBlockSize = blockSizeToTry; 
#line 1727
numBlocks = occupancyInBlocks; 
#line 1728
maxOccupancy = occupancyInThreads; 
#line 1729
}  
#line 1733
if (occupancyLimit == maxOccupancy) { 
#line 1734
break; 
#line 1735
}  
#line 1736
}  
#line 1744
(*minGridSize) = (numBlocks * multiProcessorCount); 
#line 1745
(*blockSize) = maxBlockSize; 
#line 1747
return status; 
#line 1748
} 
#line 1781
template< class UnaryFunction, class T> static __inline ::cudaError_t 
#line 1782
cudaOccupancyMaxPotentialBlockSizeVariableSMem(int *
#line 1783
minGridSize, int *
#line 1784
blockSize, T 
#line 1785
func, UnaryFunction 
#line 1786
blockSizeToDynamicSMemSize, int 
#line 1787
blockSizeLimit = 0) 
#line 1788
{ 
#line 1789
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, blockSizeToDynamicSMemSize, blockSizeLimit, 0); 
#line 1790
} 
#line 1826
template< class T> static __inline ::cudaError_t 
#line 1827
cudaOccupancyMaxPotentialBlockSize(int *
#line 1828
minGridSize, int *
#line 1829
blockSize, T 
#line 1830
func, ::size_t 
#line 1831
dynamicSMemSize = 0, int 
#line 1832
blockSizeLimit = 0) 
#line 1833
{ 
#line 1834
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, ((::__cudaOccupancyB2DHelper)(dynamicSMemSize)), blockSizeLimit, 0); 
#line 1835
} 
#line 1885
template< class T> static __inline ::cudaError_t 
#line 1886
cudaOccupancyMaxPotentialBlockSizeWithFlags(int *
#line 1887
minGridSize, int *
#line 1888
blockSize, T 
#line 1889
func, ::size_t 
#line 1890
dynamicSMemSize = 0, int 
#line 1891
blockSizeLimit = 0, unsigned 
#line 1892
flags = 0) 
#line 1893
{ 
#line 1894
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, ((::__cudaOccupancyB2DHelper)(dynamicSMemSize)), blockSizeLimit, flags); 
#line 1895
} 
#line 1938
template< class T> static __inline ::cudaError_t 
#line 1939
cudaLaunch(T *
#line 1940
func) 
#line 1942
{ 
#line 1943
return ::cudaLaunch((const void *)func); 
#line 1944
} 
#line 1976
template< class T> __inline ::cudaError_t 
#line 1977
cudaFuncGetAttributes(::cudaFuncAttributes *
#line 1978
attr, T *
#line 1979
entry) 
#line 1981
{ 
#line 1982
return ::cudaFuncGetAttributes(attr, (const void *)entry); 
#line 1983
} 
#line 2019
template< class T> static __inline ::cudaError_t 
#line 2020
cudaFuncSetAttribute(T *
#line 2021
entry, ::cudaFuncAttribute 
#line 2022
attr, int 
#line 2023
value) 
#line 2025
{ 
#line 2026
return ::cudaFuncSetAttribute((const void *)entry, attr, value); 
#line 2027
} 
#line 2051
template< class T, int dim> static __inline ::cudaError_t 
#line 2052
cudaBindSurfaceToArray(const surface< T, dim>  &
#line 2053
surf, ::cudaArray_const_t 
#line 2054
array, const ::cudaChannelFormatDesc &
#line 2055
desc) 
#line 2057
{ 
#line 2058
return ::cudaBindSurfaceToArray(&surf, array, &desc); 
#line 2059
} 
#line 2082
template< class T, int dim> static __inline ::cudaError_t 
#line 2083
cudaBindSurfaceToArray(const surface< T, dim>  &
#line 2084
surf, ::cudaArray_const_t 
#line 2085
array) 
#line 2087
{ 
#line 2088
::cudaChannelFormatDesc desc; 
#line 2089
::cudaError_t err = ::cudaGetChannelDesc(&desc, array); 
#line 2091
return (err == (cudaSuccess)) ? cudaBindSurfaceToArray(surf, array, desc) : err; 
#line 2092
} 
#line 2106 "D:/NVIDIA GPU Computing Toolkit/CUDA/v10.0/bin/../include\\cuda_runtime.h"
#pragma warning(pop)
#line 64 "CMakeCUDACompilerId.cu"
const char *info_compiler = ("INFO:compiler[NVIDIA]"); 
#line 66
const char *info_simulate = ("INFO:simulate[MSVC]"); 
#line 369 "CMakeCUDACompilerId.cu"
const char info_version[] = {'I', 'N', 'F', 'O', ':', 'c', 'o', 'm', 'p', 'i', 'l', 'e', 'r', '_', 'v', 'e', 'r', 's', 'i', 'o', 'n', '[', (('0') + ((10 / 10000000) % 10)), (('0') + ((10 / 1000000) % 10)), (('0') + ((10 / 100000) % 10)), (('0') + ((10 / 10000) % 10)), (('0') + ((10 / 1000) % 10)), (('0') + ((10 / 100) % 10)), (('0') + ((10 / 10) % 10)), (('0') + (10 % 10)), '.', (('0') + ((0 / 10000000) % 10)), (('0') + ((0 / 1000000) % 10)), (('0') + ((0 / 100000) % 10)), (('0') + ((0 / 10000) % 10)), (('0') + ((0 / 1000) % 10)), (('0') + ((0 / 100) % 10)), (('0') + ((0 / 10) % 10)), (('0') + (0 % 10)), '.', (('0') + ((130 / 10000000) % 10)), (('0') + ((130 / 1000000) % 10)), (('0') + ((130 / 100000) % 10)), (('0') + ((130 / 10000) % 10)), (('0') + ((130 / 1000) % 10)), (('0') + ((130 / 100) % 10)), (('0') + ((130 / 10) % 10)), (('0') + (130 % 10)), ']', '\000'}; 
#line 398 "CMakeCUDACompilerId.cu"
const char info_simulate_version[] = {'I', 'N', 'F', 'O', ':', 's', 'i', 'm', 'u', 'l', 'a', 't', 'e', '_', 'v', 'e', 'r', 's', 'i', 'o', 'n', '[', (('0') + (((1916 / 100) / 10000000) % 10)), (('0') + (((1916 / 100) / 1000000) % 10)), (('0') + (((1916 / 100) / 100000) % 10)), (('0') + (((1916 / 100) / 10000) % 10)), (('0') + (((1916 / 100) / 1000) % 10)), (('0') + (((1916 / 100) / 100) % 10)), (('0') + (((1916 / 100) / 10) % 10)), (('0') + ((1916 / 100) % 10)), '.', (('0') + (((1916 % 100) / 10000000) % 10)), (('0') + (((1916 % 100) / 1000000) % 10)), (('0') + (((1916 % 100) / 100000) % 10)), (('0') + (((1916 % 100) / 10000) % 10)), (('0') + (((1916 % 100) / 1000) % 10)), (('0') + (((1916 % 100) / 100) % 10)), (('0') + (((1916 % 100) / 10) % 10)), (('0') + ((1916 % 100) % 10)), ']', '\000'}; 
#line 418 "CMakeCUDACompilerId.cu"
const char *info_platform = ("INFO:platform[Windows]"); 
#line 419
const char *info_arch = ("INFO:arch[x64]"); 
#line 423
const char *info_language_standard_default = ("INFO:standard_default[03]"); 
#line 439 "CMakeCUDACompilerId.cu"
const char *info_language_extensions_default = ("INFO:extensions_default[OFF]"); 
#line 450 "CMakeCUDACompilerId.cu"
int main(int argc, char *argv[]) 
#line 451
{ 
#line 452
int require = 0; 
#line 453
require += (info_compiler[argc]); 
#line 454
require += (info_platform[argc]); 
#line 456
require += (info_version[argc]); 
#line 459 "CMakeCUDACompilerId.cu"
require += (info_simulate[argc]); 
#line 462 "CMakeCUDACompilerId.cu"
require += (info_simulate_version[argc]); 
#line 464 "CMakeCUDACompilerId.cu"
require += (info_language_standard_default[argc]); 
#line 465
require += (info_language_extensions_default[argc]); 
#line 466
(void)argv; 
#line 467
return require; 
#line 468
} 
#line 1 "CMakeCUDACompilerId.cudafe1.stub.c"
#define _NV_ANON_NAMESPACE _GLOBAL__N__27_CMakeCUDACompilerId_cpp1_ii_bd57c623
#pragma pack()
#line 1 "CMakeCUDACompilerId.cudafe1.stub.c"
#include "CMakeCUDACompilerId.cudafe1.stub.c"
#line 1 "CMakeCUDACompilerId.cudafe1.stub.c"
#undef _NV_ANON_NAMESPACE
