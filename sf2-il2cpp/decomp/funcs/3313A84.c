// DPEEIIAMANO$$DFLFJJIGABK @ RVA 0x3313A84

bool DPEEIIAMANO__DFLFJJIGABK(DPEEIIAMANO_o *__this,MethodInfo *method)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  bool bVar4;
  VirtualInvokeData *pVVar5;
  char *pcVar6;
  System_Collections_Generic_IDictionary_string__object__c *pSVar7;
  ulong uVar8;
  int32_t *piVar9;
  System_Nullable_bool__o *pSVar10;
  System_Collections_Generic_IDictionary_string__object__o *pSVar11;
  undefined1 auVar12 [16];
  System_Nullable_bool__Fields local_2c [2];
  long *local_28;
  
  auVar12._8_8_ = method;
  auVar12._0_8_ = __this;
                    /* try { // try from 03413a8c to 03513a8f has its CatchHandler @ 03413be8 */
                    /* try { // try from 03413a98 to 03513a9b has its CatchHandler @ 03413be4 */
  if ((DAT_045677c5 & 1) == 0) {
                    /* try { // try from 03413aa4 to 03513aa7 has its CatchHandler @ 03413b9c */
    FUN_01bab630(&bool_TypeInfo);
                    /* try { // try from 03413ab0 to 03513ab3 has its CatchHandler @ 03413b98 */
    FUN_01bab630(&System_Collections_Generic_IDictionary<string,_object>_TypeInfo);
                    /* try { // try from 03413abc to 03513abf has its CatchHandler @ 03413bfc */
    FUN_01bab630(&Method_System_Nullable<bool>_GetValueOrDefault__);
                    /* try { // try from 03413ac8 to 03513acb has its CatchHandler @ 03413bd0 */
    FUN_01bab630(&Method_System_Nullable<bool>__ctor__);
                    /* try { // try from 03413ad4 to 03513ad7 has its CatchHandler @ 03413bfc */
                    /* try { // try from 03413ad8 to 03513af3 has its CatchHandler @ 03413478 */
    FUN_01bab630(&Method_System_Nullable<bool>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<bool>_get_Value__);
    auVar12 = FUN_01bab630(&StringLiteral_19158);
                    /* try { // try from 03413af4 to 03513b03 has its CatchHandler @ 03413b74 */
    DAT_045677c5 = 1;
  }
  uVar3 = StringLiteral_19158;
  local_28 = (long *)0x0;
  pSVar10 = &(__this->fields).OAABDANOODA;
  if ((pSVar10->fields).hasValue == false) {
                    /* try { // try from 03413b0c to 03513b0f has its CatchHandler @ 03413b94 */
    pSVar11 = (__this->fields).IECPOKCOKIC;
    if (pSVar11 == (System_Collections_Generic_IDictionary_string__object__o *)0x0) {
LAB_03413c18:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03413c18 to 03513c1b has its CatchHandler @ 03413c84 */
      FUN_01bab8c8(auVar12._0_8_,auVar12._8_8_);
    }
                    /* try { // try from 03413b18 to 03513b1b has its CatchHandler @ 03413bfc */
    pSVar7 = pSVar11->klass;
    uVar1._0_1_ = (pSVar7->_2).rank;
    uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
                    /* try { // try from 03413b24 to 03513b27 has its CatchHandler @ 03413b90 */
    uVar8 = (ulong)uVar1;
                    /* try { // try from 03413b30 to 03513b33 has its CatchHandler @ 03413b8c */
    if (uVar8 != 0) {
                    /* try { // try from 03413b3c to 03513b3f has its CatchHandler @ 03413b88 */
      piVar9 = &((pSVar7->_1).interfaceOffsets)->offset;
      do {
                    /* try { // try from 03413b48 to 03513b4b has its CatchHandler @ 03413b84 */
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IDictionary<string,_object>_TypeInfo) {
                    /* catch() { ... } // from try @ 0341387c with catch @ 03413b68 */
                    /* catch() { ... } // from try @ 03413b54 with catch @ 03413b70 */
                    /* catch() { ... } // from try @ 03413af4 with catch @ 03413b74 */
          pVVar5 = pSVar7->vtable + (*piVar9 + 7);
          goto LAB_03413b78;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
                    /* try { // try from 03413b54 to 03513b57 has its CatchHandler @ 03413b70 */
      } while (uVar8 != 0);
    }
                    /* catch() { ... } // from try @ 03413918 with catch @ 03413b5c */
                    /* catch() { ... } // from try @ 034138e8 with catch @ 03413b60 */
    pVVar5 = (VirtualInvokeData *)
             FUN_01b81914(pSVar11,System_Collections_Generic_IDictionary<string,_object>_TypeInfo,7)
    ;
                    /* catch() { ... } // from try @ 03413898 with catch @ 03413b64 */
LAB_03413b78:
                    /* catch() { ... } // from try @ 03413960 with catch @ 03413b80 */
                    /* catch() { ... } // from try @ 03413b48 with catch @ 03413b84 */
                    /* catch() { ... } // from try @ 03413b3c with catch @ 03413b88 */
    auVar12 = (*pVVar5->methodPtr)(pSVar11,uVar3,&local_28,pVVar5->method);
                    /* catch() { ... } // from try @ 03413b30 with catch @ 03413b8c */
    if ((auVar12._0_8_ & 1) == 0) {
      bVar4 = false;
    }
    else {
                    /* catch() { ... } // from try @ 03413b24 with catch @ 03413b90 */
                    /* catch() { ... } // from try @ 03413b0c with catch @ 03413b94 */
      auVar2._8_8_ = 0;
      auVar2._0_8_ = auVar12._8_8_;
      auVar12 = auVar2 << 0x40;
      if (local_28 == (long *)0x0) goto LAB_03413c18;
                    /* catch() { ... } // from try @ 03413ab0 with catch @ 03413b98 */
                    /* catch() { ... } // from try @ 03413aa4 with catch @ 03413b9c */
                    /* catch() { ... } // from try @ 03413a5c with catch @ 03413ba0 */
                    /* catch() { ... } // from try @ 03413a40 with catch @ 03413ba4 */
                    /* catch() { ... } // from try @ 034139e4 with catch @ 03413ba8 */
                    /* catch() { ... } // from try @ 034139ac with catch @ 03413bac */
                    /* catch() { ... } // from try @ 0341395c with catch @ 03413bb0 */
                    /* catch() { ... } // from try @ 03413848 with catch @ 03413bb4 */
      if (*(Il2CppClass **)(*local_28 + 0x40) != (bool_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
      pcVar6 = (char *)thunk_FUN_01bda96c();
                    /* try { // try from 03413bc0 to 03513bc3 has its CatchHandler @ 03413f14 */
      bVar4 = *pcVar6 != '\0';
                    /* try { // try from 03413bc4 to 03513c17 has its CatchHandler @ 03413478 */
    }
                    /* catch() { ... } // from try @ 03413ac8 with catch @ 03413bd0 */
                    /* catch() { ... } // from try @ 03413a44 with catch @ 03413bd4 */
                    /* catch() { ... } // from try @ 03413a14 with catch @ 03413bd8 */
    local_2c[0].hasValue = false;
    local_2c[0].value = false;
                    /* catch() { ... } // from try @ 034139b0 with catch @ 03413bdc */
                    /* catch() { ... } // from try @ 03413914 with catch @ 03413be0 */
                    /* catch() { ... } // from try @ 03413a98 with catch @ 03413be4 */
    System_Nullable<bool>___ctor
              ((System_Nullable_bool__o)SUB82(local_2c,0),bVar4,Method_System_Nullable<bool>__ctor__
              );
                    /* catch() { ... } // from try @ 03413a8c with catch @ 03413be8 */
                    /* catch() { ... } // from try @ 034138c8 with catch @ 03413bec */
    pSVar10->fields = local_2c[0];
  }
                    /* catch() { ... } // from try @ 03413abc with catch @ 03413bfc
                       catch() { ... } // from try @ 03413ad4 with catch @ 03413bfc
                       catch() { ... } // from try @ 03413b18 with catch @ 03413bfc */
                    /* catch() { ... } // from try @ 03413808 with catch @ 03413c00 */
  bVar4 = System_Nullable<bool>__get_Value
                    ((System_Nullable_bool__o)SUB82(pSVar10,0),
                     Method_System_Nullable<bool>_get_Value__);
                    /* catch() { ... } // from try @ 034137b0 with catch @ 03413c04 */
  return bVar4;
}

