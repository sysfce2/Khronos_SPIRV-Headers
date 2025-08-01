// SPDX-FileCopyrightText: 2022-2025 Arm Ltd.
// SPDX-License-Identifier: MIT

#ifndef SPIRV_UNIFIED1_TOSA_001000_1_H_
#define SPIRV_UNIFIED1_TOSA_001000_1_H_

#ifdef __cplusplus
extern "C" {
#endif

enum {
    TOSAVersion = 1000000,
    TOSAVersion_BitWidthPadding = 0x7fffffff
};
enum {
    TOSARevision = 1,
    TOSARevision_BitWidthPadding = 0x7fffffff
};

enum TOSAInstructions {
    TOSAARGMAX = 0,
    TOSAAVG_POOL2D = 1,
    TOSACONV2D = 2,
    TOSACONV3D = 3,
    TOSADEPTHWISE_CONV2D = 4,
    TOSAFFT2D = 5,
    TOSAMATMUL = 6,
    TOSAMAX_POOL2D = 7,
    TOSARFFT2D = 8,
    TOSATRANSPOSE_CONV2D = 9,
    TOSACLAMP = 10,
    TOSAERF = 11,
    TOSASIGMOID = 12,
    TOSATANH = 13,
    TOSAADD = 14,
    TOSAARITHMETIC_RIGHT_SHIFT = 15,
    TOSABITWISE_AND = 16,
    TOSABITWISE_OR = 17,
    TOSABITWISE_XOR = 18,
    TOSAINTDIV = 19,
    TOSALOGICAL_AND = 20,
    TOSALOGICAL_LEFT_SHIFT = 21,
    TOSALOGICAL_RIGHT_SHIFT = 22,
    TOSALOGICAL_OR = 23,
    TOSALOGICAL_XOR = 24,
    TOSAMAXIMUM = 25,
    TOSAMINIMUM = 26,
    TOSAMUL = 27,
    TOSAPOW = 28,
    TOSASUB = 29,
    TOSATABLE = 30,
    TOSAABS = 31,
    TOSABITWISE_NOT = 32,
    TOSACEIL = 33,
    TOSACLZ = 34,
    TOSACOS = 35,
    TOSAEXP = 36,
    TOSAFLOOR = 37,
    TOSALOG = 38,
    TOSALOGICAL_NOT = 39,
    TOSANEGATE = 40,
    TOSARECIPROCAL = 41,
    TOSARSQRT = 42,
    TOSASIN = 43,
    TOSASELECT = 44,
    TOSAEQUAL = 45,
    TOSAGREATER = 46,
    TOSAGREATER_EQUAL = 47,
    TOSAREDUCE_ALL = 48,
    TOSAREDUCE_ANY = 49,
    TOSAREDUCE_MAX = 50,
    TOSAREDUCE_MIN = 51,
    TOSAREDUCE_PRODUCT = 52,
    TOSAREDUCE_SUM = 53,
    TOSACONCAT = 54,
    TOSAPAD = 55,
    TOSARESHAPE = 56,
    TOSAREVERSE = 57,
    TOSASLICE = 58,
    TOSATILE = 59,
    TOSATRANSPOSE = 60,
    TOSAGATHER = 61,
    TOSASCATTER = 62,
    TOSARESIZE = 63,
    TOSACAST = 64,
    TOSARESCALE = 65,
    TOSAInstructionsMax = 0x7fffffff
};


#ifdef __cplusplus
}
#endif

#endif // SPIRV_UNIFIED1_TOSA_001000_1_H_
