// OFHNGNKMJGM$$PICELOJMHIK @ RVA 0x34B700C

void OFHNGNKMJGM__PICELOJMHIK
               (OFHNGNKMJGM_o *__this,
               Unity_Services_LevelPlay_LevelPlayImpressionData_o *IMMNELPBGIF,MethodInfo *method)

{
  ushort uVar1;
  CICHCAJBCHK_c *pCVar2;
  bool bVar3;
  ulong uVar4;
  Il2CppMethodPointer *ppIVar5;
  System_String_o *pSVar6;
  CICHCAJBCHK_c *pCVar7;
  int32_t *piVar8;
  CICHCAJBCHK_o *pCVar9;
  Il2CppMethodPointer pIVar10;
  undefined1 auStack_170 [80];
  undefined1 auStack_120 [80];
  undefined8 local_d0;
  System_String_o *pSStack_c8;
  System_String_o *local_c0;
  System_String_o *pSStack_b8;
  System_String_o *local_b0;
  System_String_o *local_a8;
  undefined8 local_a0;
  System_Nullable_double__Fields SStack_98;
  System_String_o *local_88;
  undefined1 auStack_80 [80];
  
  if ((DAT_04568595 & 1) == 0) {
    FUN_01bab630(&CICHCAJBCHK_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
                    /* try { // try from 035b704c to 036b7053 has its CatchHandler @ 035b706c */
    FUN_01bab630(&StringLiteral_5884);
                    /* try { // try from 035b7054 to 036b7057 has its CatchHandler @ 035b6d98 */
                    /* try { // try from 035b7058 to 036b705b has its CatchHandler @ 035b7064 */
                    /* try { // try from 035b705c to 036b708f has its CatchHandler @ 035b6d98 */
    FUN_01bab630(&StringLiteral_22483);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b7058 with catch @ 035b7064
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b6f8c with catch @ 035b7068
                        */
    FUN_01bab630(&StringLiteral_14182);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b704c with catch @ 035b706c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b6f10 with catch @ 035b7070
                        */
    DAT_04568595 = 1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b6eb4 with catch @ 035b7074
                        */
  if (IMMNELPBGIF == (Unity_Services_LevelPlay_LevelPlayImpressionData_o *)0x0) {
    pSVar6 = (System_String_o *)0x0;
LAB_035b70b0:
    pSVar6 = System_String__Concat(StringLiteral_5884,pSVar6,(MethodInfo *)0x0);
    KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,pSVar6,(MethodInfo *)0x0);
    return;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b6f74 with catch @ 035b7078
                        */
  bVar3 = System_String__IsNullOrWhiteSpace
                    ((IMMNELPBGIF->fields)._AllData_k__BackingField,(MethodInfo *)0x0);
                    /* try { // try from 035b7090 to 036b7093 has its CatchHandler @ 035b70a0 */
                    /* catch() { ... } // from try @ 035b7090 with catch @ 035b70a0 */
  if ((bVar3) ||
     (bVar3 = System_String__op_Equality
                        ((IMMNELPBGIF->fields)._AllData_k__BackingField,StringLiteral_22483,
                         (MethodInfo *)0x0), bVar3)) {
    pSVar6 = (IMMNELPBGIF->fields)._AllData_k__BackingField;
                    /* try { // try from 035b70a8 to 036b710f has its CatchHandler @ 035b7124 */
    goto LAB_035b70b0;
  }
  pCVar9 = (__this->fields).FCBJIODFGDB;
  local_a0 = 0;
  local_88 = (System_String_o *)0x0;
  SStack_98 = (System_Nullable_double__Fields)ZEXT816(0);
  pSStack_b8 = (System_String_o *)0x0;
  local_c0 = (System_String_o *)0x0;
  local_a8 = (System_String_o *)0x0;
  local_b0 = (System_String_o *)0x0;
  pSStack_c8 = (System_String_o *)0x0;
  local_d0 = 0;
  pSVar6 = Unity_Services_LevelPlay_LevelPlayImpressionData__get_Country
                     (IMMNELPBGIF,(MethodInfo *)0x0);
  if (pSVar6 == (System_String_o *)0x0) {
    uVar4 = (ulong)&local_d0 | 8;
  }
  else {
                    /* try { // try from 035b7110 to 036b711b has its CatchHandler @ 035b6d98 */
    pSStack_c8 = System_String__ToUpper(pSVar6,(MethodInfo *)0x0);
                    /* try { // try from 035b711c to 036b7123 has its CatchHandler @ 035b7124 */
    uVar4 = (ulong)&local_d0 | 8;
    if (pSStack_c8 != (System_String_o *)0x0) goto LAB_035b7144;
  }
  pSStack_c8 = string_TypeInfo->static_fields->Empty;
LAB_035b7144:
  thunk_FUN_01c20e04(uVar4);
  local_c0 = Unity_Services_LevelPlay_LevelPlayImpressionData__get_AdNetwork
                       (IMMNELPBGIF,(MethodInfo *)0x0);
  if (local_c0 == (System_String_o *)0x0) {
    local_c0 = string_TypeInfo->static_fields->Empty;
  }
  thunk_FUN_01c20e04(&local_c0);
  pSStack_b8 = Unity_Services_LevelPlay_LevelPlayImpressionData__get_MediationAdUnitId
                         (IMMNELPBGIF,(MethodInfo *)0x0);
  if (pSStack_b8 == (System_String_o *)0x0) {
    pSStack_b8 = string_TypeInfo->static_fields->Empty;
  }
  thunk_FUN_01c20e04(&pSStack_b8);
  local_b0 = Unity_Services_LevelPlay_LevelPlayImpressionData__get_InstanceName
                       (IMMNELPBGIF,(MethodInfo *)0x0);
  if (local_b0 == (System_String_o *)0x0) {
    local_b0 = string_TypeInfo->static_fields->Empty;
  }
  thunk_FUN_01c20e04(&local_b0);
  local_a8 = Unity_Services_LevelPlay_LevelPlayImpressionData__get_Placement
                       (IMMNELPBGIF,(MethodInfo *)0x0);
  if (local_a8 == (System_String_o *)0x0) {
    local_a8 = string_TypeInfo->static_fields->Empty;
  }
  thunk_FUN_01c20e04(&local_a8);
  local_a0 = StringLiteral_14182;
  thunk_FUN_01c20e04(&local_a0);
  SStack_98 = (System_Nullable_double__Fields)
              Unity_Services_LevelPlay_LevelPlayImpressionData__get_Revenue
                        (IMMNELPBGIF,(MethodInfo *)0x0);
  local_88 = Unity_Services_LevelPlay_LevelPlayImpressionData__get_EncryptedCpm
                       (IMMNELPBGIF,(MethodInfo *)0x0);
  if (local_88 == (System_String_o *)0x0) {
    local_88 = string_TypeInfo->static_fields->Empty;
  }
  thunk_FUN_01c20e04(&local_88);
  memcpy(auStack_120,&local_d0,0x50);
  pCVar2 = CICHCAJBCHK_TypeInfo;
  if (pCVar9 == (CICHCAJBCHK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  memcpy(auStack_170,auStack_120,0x50);
  pCVar7 = pCVar9->klass;
  uVar1._0_1_ = (pCVar7->_2).rank;
  uVar1._1_1_ = (pCVar7->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar8 = &((pCVar7->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)pCVar2) {
        ppIVar5 = &pCVar7->vtable[*piVar8].methodPtr;
        goto LAB_035b7304;
      }
      uVar4 = uVar4 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar4 != 0);
  }
  ppIVar5 = (Il2CppMethodPointer *)FUN_01b81914(pCVar9,pCVar2,0);
LAB_035b7304:
  pIVar10 = *ppIVar5;
  memcpy(auStack_80,auStack_170,0x50);
  (*pIVar10)(pCVar9,auStack_80,(MethodInfo *)ppIVar5[1]);
  return;
}

