/*******************************************************************
*
*    Author: Kareem Omar
*    kareem.h.omar@gmail.com
*    https://github.com/komrad36
*
*    Last updated Mar 12, 2020
*******************************************************************/

#pragma once

#include <cstdint>

extern "C" bool FastContains8(const void* p, uint64_t n, uint8_t q);
extern "C" bool FastContains16(const void* p, uint64_t n, uint16_t q);
extern "C" bool FastContains32(const void* p, uint64_t n, uint32_t q);
extern "C" bool FastContains64(const void* p, uint64_t n, uint64_t q);

extern "C" bool FastContainsFloat(const float* p, uint64_t n, float q);
extern "C" bool FastContainsDouble(const double* p, uint64_t n, double q);

extern "C" uint64_t FastFind8(const void* p, uint64_t n, uint8_t q);
extern "C" uint64_t FastFind16(const void* p, uint64_t n, uint16_t q);
extern "C" uint64_t FastFind32(const void* p, uint64_t n, uint32_t q);
extern "C" uint64_t FastFind64(const void* p, uint64_t n, uint64_t q);

extern "C" uint64_t FastFindFloat(const float* p, uint64_t n, float q);
extern "C" uint64_t FastFindDouble(const double* p, uint64_t n, double q);

static inline bool FastContains(const int8_t* p, uint64_t n, int8_t q)
{
    return FastContains8(p, n, uint8_t(q));
}

static inline bool FastContains(const uint8_t* p, uint64_t n, uint8_t q)
{
    return FastContains8(p, n, q);
}

static inline bool FastContains(const int16_t* p, uint64_t n, int16_t q)
{
    return FastContains16(p, n, uint16_t(q));
}

static inline bool FastContains(const uint16_t* p, uint64_t n, uint16_t q)
{
    return FastContains16(p, n, q);
}

static inline bool FastContains(const int32_t* p, uint64_t n, int32_t q)
{
    return FastContains32(p, n, uint32_t(q));
}

static inline bool FastContains(const uint32_t* p, uint64_t n, uint32_t q)
{
    return FastContains32(p, n, q);
}

static inline bool FastContains(const int64_t* p, uint64_t n, int64_t q)
{
    return FastContains64(p, n, uint64_t(q));
}

static inline bool FastContains(const uint64_t* p, uint64_t n, uint64_t q)
{
    return FastContains64(p, n, q);
}

static inline bool FastContains(const float* p, uint64_t n, float q)
{
    return FastContainsFloat(p, n, q);
}

static inline bool FastContains(const double* p, uint64_t n, double q)
{
    return FastContainsDouble(p, n, q);
}

static inline uint64_t FastFind(const int8_t* p, uint64_t n, int8_t q)
{
    return FastFind8(p, n, uint8_t(q));
}

static inline uint64_t FastFind(const uint8_t* p, uint64_t n, uint8_t q)
{
    return FastFind8(p, n, q);
}

static inline uint64_t FastFind(const int16_t* p, uint64_t n, int16_t q)
{
    return FastFind16(p, n, uint16_t(q));
}

static inline uint64_t FastFind(const uint16_t* p, uint64_t n, uint16_t q)
{
    return FastFind16(p, n, q);
}

static inline uint64_t FastFind(const int32_t* p, uint64_t n, int32_t q)
{
    return FastFind32(p, n, uint32_t(q));
}

static inline uint64_t FastFind(const uint32_t* p, uint64_t n, uint32_t q)
{
    return FastFind32(p, n, q);
}

static inline uint64_t FastFind(const int64_t* p, uint64_t n, int64_t q)
{
    return FastFind64(p, n, uint64_t(q));
}

static inline uint64_t FastFind(const uint64_t* p, uint64_t n, uint64_t q)
{
    return FastFind64(p, n, q);
}

static inline uint64_t FastFind(const float* p, uint64_t n, float q)
{
    return FastFindFloat(p, n, q);
}

static inline uint64_t FastFind(const double* p, uint64_t n, double q)
{
    return FastFindDouble(p, n, q);
}

extern "C" float FastMinFloat(const float* p, uint32_t n);
extern "C" uint32_t FastMinIdxFloat(const float* p, uint32_t n);

extern "C" double FastMinDouble(const double* p, uint32_t n);
extern "C" uint32_t FastMinIdxDouble(const double* p, uint32_t n);

extern "C" int8_t FastMinI8(const int8_t* p, uint32_t n);
extern "C" uint32_t FastMinIdxI8(const int8_t* p, uint32_t n);

extern "C" int16_t FastMinI16(const int16_t* p, uint32_t n);
extern "C" uint32_t FastMinIdxI16(const int16_t* p, uint32_t n);

extern "C" int32_t FastMinI32(const int32_t* p, uint32_t n);
extern "C" uint32_t FastMinIdxI32(const int32_t* p, uint32_t n);

extern "C" int64_t FastMinI64(const int64_t* p, uint32_t n);
extern "C" uint32_t FastMinIdxI64(const int64_t* p, uint32_t n);

extern "C" uint8_t FastMinU8(const uint8_t* p, uint32_t n);
extern "C" uint32_t FastMinIdxU8(const uint8_t* p, uint32_t n);

extern "C" uint16_t FastMinU16(const uint16_t* p, uint32_t n);
extern "C" uint32_t FastMinIdxU16(const uint16_t* p, uint32_t n);

extern "C" uint32_t FastMinU32(const uint32_t* p, uint32_t n);
extern "C" uint32_t FastMinIdxU32(const uint32_t* p, uint32_t n);

extern "C" uint64_t FastMinU64(const uint64_t* p, uint32_t n);
extern "C" uint32_t FastMinIdxU64(const uint64_t* p, uint32_t n);

extern "C" float FastMaxFloat(const float* p, uint32_t n);
extern "C" uint32_t FastMaxIdxFloat(const float* p, uint32_t n);

extern "C" double FastMaxDouble(const double* p, uint32_t n);
extern "C" uint32_t FastMaxIdxDouble(const double* p, uint32_t n);

extern "C" int8_t FastMaxI8(const int8_t* p, uint32_t n);
extern "C" uint32_t FastMaxIdxI8(const int8_t* p, uint32_t n);

extern "C" int16_t FastMaxI16(const int16_t* p, uint32_t n);
extern "C" uint32_t FastMaxIdxI16(const int16_t* p, uint32_t n);

extern "C" int32_t FastMaxI32(const int32_t* p, uint32_t n);
extern "C" uint32_t FastMaxIdxI32(const int32_t* p, uint32_t n);

extern "C" int64_t FastMaxI64(const int64_t* p, uint32_t n);
extern "C" uint32_t FastMaxIdxI64(const int64_t* p, uint32_t n);

extern "C" uint8_t FastMaxU8(const uint8_t* p, uint32_t n);
extern "C" uint32_t FastMaxIdxU8(const uint8_t* p, uint32_t n);

extern "C" uint16_t FastMaxU16(const uint16_t* p, uint32_t n);
extern "C" uint32_t FastMaxIdxU16(const uint16_t* p, uint32_t n);

extern "C" uint32_t FastMaxU32(const uint32_t* p, uint32_t n);
extern "C" uint32_t FastMaxIdxU32(const uint32_t* p, uint32_t n);

extern "C" uint64_t FastMaxU64(const uint64_t* p, uint32_t n);
extern "C" uint32_t FastMaxIdxU64(const uint64_t* p, uint32_t n);

static inline float FastMin(const float* p, uint32_t n)
{
    return FastMinFloat(p, n);
}

static inline uint32_t FastMinIdx(const float* p, uint32_t n)
{
    return FastMinIdxFloat(p, n);
}

static inline double FastMin(const double* p, uint32_t n)
{
    return FastMinDouble(p, n);
}

static inline uint32_t FastMinIdx(const double* p, uint32_t n)
{
    return FastMinIdxDouble(p, n);
}

static inline int8_t FastMin(const int8_t* p, uint32_t n)
{
    return FastMinI8(p, n);
}

static inline uint32_t FastMinIdx(const int8_t* p, uint32_t n)
{
    return FastMinIdxI8(p, n);
}

static inline int16_t FastMin(const int16_t* p, uint32_t n)
{
    return FastMinI16(p, n);
}

static inline uint32_t FastMinIdx(const int16_t* p, uint32_t n)
{
    return FastMinIdxI16(p, n);
}

static inline int32_t FastMin(const int32_t* p, uint32_t n)
{
    return FastMinI32(p, n);
}

static inline uint32_t FastMinIdx(const int32_t* p, uint32_t n)
{
    return FastMinIdxI32(p, n);
}

static inline int64_t FastMin(const int64_t* p, uint32_t n)
{
    return FastMinI64(p, n);
}

static inline uint32_t FastMinIdx(const int64_t* p, uint32_t n)
{
    return FastMinIdxI64(p, n);
}

static inline uint8_t FastMin(const uint8_t* p, uint32_t n)
{
    return FastMinU8(p, n);
}

static inline uint32_t FastMinIdx(const uint8_t* p, uint32_t n)
{
    return FastMinIdxU8(p, n);
}

static inline uint16_t FastMin(const uint16_t* p, uint32_t n)
{
    return FastMinU16(p, n);
}

static inline uint32_t FastMinIdx(const uint16_t* p, uint32_t n)
{
    return FastMinIdxU16(p, n);
}

static inline uint32_t FastMin(const uint32_t* p, uint32_t n)
{
    return FastMinU32(p, n);
}

static inline uint32_t FastMinIdx(const uint32_t* p, uint32_t n)
{
    return FastMinIdxU32(p, n);
}

static inline uint64_t FastMin(const uint64_t* p, uint32_t n)
{
    return FastMinU64(p, n);
}

static inline uint32_t FastMinIdx(const uint64_t* p, uint32_t n)
{
    return FastMinIdxU64(p, n);
}

static inline float FastMax(const float* p, uint32_t n)
{
    return FastMaxFloat(p, n);
}

static inline uint32_t FastMaxIdx(const float* p, uint32_t n)
{
    return FastMaxIdxFloat(p, n);
}

static inline double FastMax(const double* p, uint32_t n)
{
    return FastMaxDouble(p, n);
}

static inline uint32_t FastMaxIdx(const double* p, uint32_t n)
{
    return FastMaxIdxDouble(p, n);
}

static inline int8_t FastMax(const int8_t* p, uint32_t n)
{
    return FastMaxI8(p, n);
}

static inline uint32_t FastMaxIdx(const int8_t* p, uint32_t n)
{
    return FastMaxIdxI8(p, n);
}

static inline int16_t FastMax(const int16_t* p, uint32_t n)
{
    return FastMaxI16(p, n);
}

static inline uint32_t FastMaxIdx(const int16_t* p, uint32_t n)
{
    return FastMaxIdxI16(p, n);
}

static inline int32_t FastMax(const int32_t* p, uint32_t n)
{
    return FastMaxI32(p, n);
}

static inline uint32_t FastMaxIdx(const int32_t* p, uint32_t n)
{
    return FastMaxIdxI32(p, n);
}

static inline int64_t FastMax(const int64_t* p, uint32_t n)
{
    return FastMaxI64(p, n);
}

static inline uint32_t FastMaxIdx(const int64_t* p, uint32_t n)
{
    return FastMaxIdxI64(p, n);
}

static inline uint8_t FastMax(const uint8_t* p, uint32_t n)
{
    return FastMaxU8(p, n);
}

static inline uint32_t FastMaxIdx(const uint8_t* p, uint32_t n)
{
    return FastMaxIdxU8(p, n);
}

static inline uint16_t FastMax(const uint16_t* p, uint32_t n)
{
    return FastMaxU16(p, n);
}

static inline uint32_t FastMaxIdx(const uint16_t* p, uint32_t n)
{
    return FastMaxIdxU16(p, n);
}

static inline uint32_t FastMax(const uint32_t* p, uint32_t n)
{
    return FastMaxU32(p, n);
}

static inline uint32_t FastMaxIdx(const uint32_t* p, uint32_t n)
{
    return FastMaxIdxU32(p, n);
}

static inline uint64_t FastMax(const uint64_t* p, uint32_t n)
{
    return FastMaxU64(p, n);
}

static inline uint32_t FastMaxIdx(const uint64_t* p, uint32_t n)
{
    return FastMaxIdxU64(p, n);
}
