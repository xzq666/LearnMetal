//
//  LYShaderTypes.h
//  LearnMetal
//
//  Created by loyinglin on 2018/6/21.
//  Copyright © 2018年 loyinglin. All rights reserved.
//

#ifndef LYShaderTypes_h
#define LYShaderTypes_h


typedef struct
{
    vector_float4 position;
    vector_float2 textureCoordinate;
} LYVertex;


typedef enum LYVertexInputIndex
{
    LYVertexInputIndexVertices     = 0,
} LYVertexInputIndex;


typedef enum LYFragmentTextureIndex
{
    LYFragmentTextureIndexTextureSource     = 0,
    LYFragmentTextureIndexTextureDest       = 1,
} LYFragmentTextureIndex;




#endif /* LYShaderTypes_h */
