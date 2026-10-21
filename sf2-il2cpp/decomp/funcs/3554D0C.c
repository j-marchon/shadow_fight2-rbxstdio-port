// DDFDPLHKGKB$$AICNJCFALEF @ RVA 0x3554D0C

void DDFDPLHKGKB__AICNJCFALEF
               (UnityEngine_UIVertex_o *__return_storage_ptr__,UnityEngine_Vector2_o EEGKJKNENDE,
               UnityEngine_Vector2_o ECBPGANPEPD,UnityEngine_Color_o GKBNFBINIIP,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int32_t iVar9;
  UnityEngine_UIVertex_StaticFields *pUVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 in_register_00005084;
  undefined4 in_register_000050a4;
  undefined4 in_register_000050c4;
  undefined4 in_register_000050e4;
  undefined4 local_74;
  undefined4 uStack_70;
  
                    /* try { // try from 03654d2c to 03754d2f has its CatchHandler @ 03654dac */
                    /* try { // try from 03654d30 to 03754d37 has its CatchHandler @ 03654dc0 */
                    /* try { // try from 03654d40 to 03754d73 has its CatchHandler @ 03654dd4 */
  if ((DAT_04568b61 & 1) == 0) {
    FUN_01bab630(&UnityEngine_UIVertex_TypeInfo);
    DAT_04568b61 = 1;
  }
  if ((UnityEngine_UIVertex_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pUVar10 = UnityEngine_UIVertex_TypeInfo->static_fields;
  fVar1 = (pUVar10->simpleVert).fields.tangent.fields.y;
  fVar2 = (pUVar10->simpleVert).fields.tangent.fields.z;
  uVar15._0_4_ = (pUVar10->simpleVert).fields.normal.fields.y;
  uVar15._4_4_ = (pUVar10->simpleVert).fields.normal.fields.z;
                    /* try { // try from 03654d94 to 03754d97 has its CatchHandler @ 03654df0 */
  uVar14 = *(undefined8 *)&(pUVar10->simpleVert).fields.position.fields.z;
                    /* try { // try from 03654d98 to 03754d9b has its CatchHandler @ 03654a24 */
  uStack_70 = (undefined4)
              ((ulong)*(undefined8 *)&(pUVar10->simpleVert).fields.normal.fields.z >> 0x20);
  fVar5 = (pUVar10->simpleVert).fields.uv2.fields.x;
  fVar6 = (pUVar10->simpleVert).fields.uv2.fields.y;
  uVar12 = *(undefined8 *)&(pUVar10->simpleVert).fields.uv1.fields.z;
  fVar3 = (pUVar10->simpleVert).fields.uv3.fields.x;
  fVar4 = (pUVar10->simpleVert).fields.uv3.fields.y;
                    /* try { // try from 03654d9c to 03754d9f has its CatchHandler @ 03654dc8 */
  uVar11 = *(undefined8 *)&(pUVar10->simpleVert).fields.uv2.fields.z;
  fVar7 = (pUVar10->simpleVert).fields.uv1.fields.x;
  fVar8 = (pUVar10->simpleVert).fields.uv1.fields.y;
                    /* try { // try from 03654da0 to 03754da7 has its CatchHandler @ 03654dd0 */
  uVar13 = *(undefined8 *)&(pUVar10->simpleVert).fields.uv0.fields.z;
                    /* try { // try from 03654da8 to 03754dab has its CatchHandler @ 03654dd4 */
                    /* catch() { ... } // from try @ 03654d2c with catch @ 03654dac
                       try { // try from 03654dac to 03754e13 has its CatchHandler @ 03654a24 */
                    /* catch() { ... } // from try @ 03654cc4 with catch @ 03654db0 */
                    /* catch() { ... } // from try @ 03654cac with catch @ 03654db4 */
                    /* catch() { ... } // from try @ 03654ca0 with catch @ 03654db8 */
                    /* catch() { ... } // from try @ 03654c88 with catch @ 03654dbc */
  iVar9 = FUN_01ca4568(CONCAT44(in_register_00005084,GKBNFBINIIP.fields.r),
                       CONCAT44(in_register_000050a4,GKBNFBINIIP.fields.g),
                       CONCAT44(in_register_000050c4,GKBNFBINIIP.fields.b),
                       CONCAT44(in_register_000050e4,GKBNFBINIIP.fields.a),0);
                    /* catch() { ... } // from try @ 03654d30 with catch @ 03654dc0 */
                    /* catch() { ... } // from try @ 03654bb4 with catch @ 03654dc4 */
                    /* catch() { ... } // from try @ 03654d9c with catch @ 03654dc8 */
                    /* catch() { ... } // from try @ 03654ccc with catch @ 03654dcc */
  (__return_storage_ptr__->fields).position.fields.x = EEGKJKNENDE.fields.x;
  (__return_storage_ptr__->fields).position.fields.y = EEGKJKNENDE.fields.y;
                    /* catch() { ... } // from try @ 03654d08 with catch @ 03654dd0
                       catch() { ... } // from try @ 03654da0 with catch @ 03654dd0 */
  *(undefined8 *)&(__return_storage_ptr__->fields).normal.fields.z = uVar15;
  (__return_storage_ptr__->fields).normal.fields.x = (float)(int)uVar14;
  (__return_storage_ptr__->fields).normal.fields.y = (float)(int)((ulong)uVar14 >> 0x20);
                    /* catch() { ... } // from try @ 03654d40 with catch @ 03654dd4
                       catch() { ... } // from try @ 03654da8 with catch @ 03654dd4 */
                    /* catch() { ... } // from try @ 03654b78 with catch @ 03654dd8 */
  (__return_storage_ptr__->fields).position.fields.z = 0.0;
  (__return_storage_ptr__->fields).color.fields.rgba = iVar9;
  *(float *)&(__return_storage_ptr__->fields).color.fields.r = ECBPGANPEPD.fields.x;
  (__return_storage_ptr__->fields).uv0.fields.x = ECBPGANPEPD.fields.y;
                    /* catch() { ... } // from try @ 03654c48 with catch @ 03654de4 */
  (__return_storage_ptr__->fields).uv0.fields.y = 0.0;
  (__return_storage_ptr__->fields).uv0.fields.z = 0.0;
                    /* catch() { ... } // from try @ 03654c28 with catch @ 03654de8 */
  (__return_storage_ptr__->fields).tangent.fields.z = fVar1;
  (__return_storage_ptr__->fields).tangent.fields.w = fVar2;
  (__return_storage_ptr__->fields).tangent.fields.x = (float)uVar15._4_4_;
  (__return_storage_ptr__->fields).tangent.fields.y = (float)uStack_70;
                    /* catch() { ... } // from try @ 03654c64 with catch @ 03654dec */
  (__return_storage_ptr__->fields).uv3.fields.y = fVar3;
  (__return_storage_ptr__->fields).uv3.fields.z = fVar4;
  *(undefined8 *)&(__return_storage_ptr__->fields).uv2.fields.w = uVar11;
                    /* catch() { ... } // from try @ 03654d94 with catch @ 03654df0 */
  (__return_storage_ptr__->fields).uv2.fields.y = fVar5;
  (__return_storage_ptr__->fields).uv2.fields.z = fVar6;
  *(undefined8 *)&(__return_storage_ptr__->fields).uv1.fields.w = uVar12;
                    /* catch() { ... } // from try @ 03654c4c with catch @ 03654df4 */
  (__return_storage_ptr__->fields).uv1.fields.y = fVar7;
  (__return_storage_ptr__->fields).uv1.fields.z = fVar8;
  *(undefined8 *)&(__return_storage_ptr__->fields).uv0.fields.w = uVar13;
                    /* catch() { ... } // from try @ 03654c2c with catch @ 03654df8 */
                    /* catch() { ... } // from try @ 03654c0c with catch @ 03654dfc */
                    /* try { // try from 03654e14 to 03754e17 has its CatchHandler @ 03654ec0 */
  return;
}

