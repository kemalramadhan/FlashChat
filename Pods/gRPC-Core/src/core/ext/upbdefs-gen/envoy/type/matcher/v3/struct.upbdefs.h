/* This file was generated by upb_generator from the input file:
 *
 *     envoy/type/matcher/v3/struct.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_TYPE_MATCHER_V3_STRUCT_PROTO_UPBDEFS_H_
#define ENVOY_TYPE_MATCHER_V3_STRUCT_PROTO_UPBDEFS_H_

#include "upb/reflection/def.h"
#include "upb/reflection/internal/def_pool.h"
#include "upb/port/def.inc"
#ifdef __cplusplus
extern "C" {
#endif

#include "upb/reflection/def.h"

#include "upb/port/def.inc"

extern _upb_DefPool_Init envoy_type_matcher_v3_struct_proto_upbdefinit;

UPB_INLINE const upb_MessageDef *envoy_type_matcher_v3_StructMatcher_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_type_matcher_v3_struct_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.type.matcher.v3.StructMatcher");
}

UPB_INLINE const upb_MessageDef *envoy_type_matcher_v3_StructMatcher_PathSegment_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &envoy_type_matcher_v3_struct_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "envoy.type.matcher.v3.StructMatcher.PathSegment");
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port/undef.inc"

#endif  /* ENVOY_TYPE_MATCHER_V3_STRUCT_PROTO_UPBDEFS_H_ */
