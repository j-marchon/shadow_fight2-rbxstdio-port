// TypeDefIndex 2307
// Namespace: 
// public class DPEEIIAMANO : IEOKPOCAOKN
// Fields:
//   private string OBILBEMGFIE; // 0x10
//   private string DAKLJGJBAHN; // 0x18
//   private Nullable<DateTime> JFNKGDHEGBG; // 0x20
//   private Nullable<DateTime> GHKNMEMMBDB; // 0x30
//   private string MNNPEBCGFIF; // 0x40
//   private Nullable<bool> OAABDANOODA; // 0x48
//   private readonly IDictionary<string, object> IECPOKCOKIC; // 0x50

// ===== public void .ctor(IDictionary<string, object> IMMNELPBGIF)  [RVA 0x33137D4]
// DPEEIIAMANO$$.ctor @ RVA 0x33137D4

void DPEEIIAMANO___ctor(DPEEIIAMANO_o *__this,
                       System_Collections_Generic_IDictionary_string__object__o *IMMNELPBGIF,
                       MethodInfo *method)

{
  System_Collections_Generic_IDictionary_string__object__o **ppSVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppSVar1 = &(__this->fields).IECPOKCOKIC;
  *ppSVar1 = IMMNELPBGIF;
  thunk_FUN_01c20e04(ppSVar1,IMMNELPBGIF);
  return;
}


// ===== public string HMHBJILDFEI()  [RVA 0x3313804]
// DPEEIIAMANO$$HMHBJILDFEI @ RVA 0x3313804

System_String_o * DPEEIIAMANO__HMHBJILDFEI(DPEEIIAMANO_o *__this,MethodInfo *method)

{
  ushort uVar1;
  System_String_c *pSVar2;
  undefined8 uVar3;
  bool bVar4;
  VirtualInvokeData *pVVar5;
  System_Collections_Generic_IDictionary_string__object__c *pSVar6;
  ulong uVar7;
  int32_t *piVar8;
  DPEEIIAMANO_Fields *pDVar9;
  System_Collections_Generic_IDictionary_string__object__o *pSVar10;
  System_String_o *local_28;
  
                    /* try { // try from 03413808 to 0351380f has its CatchHandler @ 03413c00 */
                    /* try { // try from 03413818 to 03513827 has its CatchHandler @ 03413834 */
  if ((DAT_045677c3 & 1) == 0) {
    FUN_01bab630(&System_Collections_Generic_IDictionary<string,_object>_TypeInfo);
                    /* try { // try from 0341382c to 0351382f has its CatchHandler @ 03413838 */
                    /* try { // try from 03413830 to 03513847 has its CatchHandler @ 03413478 */
                    /* catch() { ... } // from try @ 03413818 with catch @ 03413834 */
    FUN_01bab630(&string_TypeInfo);
                    /* catch() { ... } // from try @ 0341382c with catch @ 03413838 */
    FUN_01bab630(&StringLiteral_16372/*"af_status"*/);
                    /* try { // try from 03413848 to 03513863 has its CatchHandler @ 03413bb4 */
    DAT_045677c3 = 1;
  }
  local_28 = (System_String_o *)0x0;
  pDVar9 = &__this->fields;
  bVar4 = System_String__IsNullOrWhiteSpace(pDVar9->OBILBEMGFIE,(MethodInfo *)0x0);
  uVar3 = StringLiteral_16372/*"af_status"*/;
  if (bVar4) {
    pSVar10 = (__this->fields).IECPOKCOKIC;
    if (pSVar10 == (System_Collections_Generic_IDictionary_string__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar6 = pSVar10->klass;
    uVar1._0_1_ = (pSVar6->_2).rank;
    uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
                    /* try { // try from 0341387c to 0351387f has its CatchHandler @ 03413b68 */
    uVar7 = (ulong)uVar1;
    if (uVar7 != 0) {
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
                    /* try { // try from 03413898 to 035138b3 has its CatchHandler @ 03413b64 */
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IDictionary<string,_object>_TypeInfo) {
                    /* try { // try from 034138c8 to 035138df has its CatchHandler @ 03413bec */
          pVVar5 = pSVar6->vtable + (*piVar8 + 7);
          goto LAB_034138d0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)
             FUN_01b81914(pSVar10,System_Collections_Generic_IDictionary<string,_object>_TypeInfo,7)
    ;
LAB_034138d0:
    (*pVVar5->methodPtr)(pSVar10,uVar3,&local_28,pVVar5->method);
    pSVar2 = string_TypeInfo;
                    /* try { // try from 034138e8 to 035138f7 has its CatchHandler @ 03413b60 */
    if (local_28 == (System_String_o *)0x0) {
      pDVar9->OBILBEMGFIE = (System_String_o *)0x0;
    }
    else if ((local_28->klass != string_TypeInfo) ||
            (pDVar9->OBILBEMGFIE = local_28, local_28->klass != pSVar2)) {
                    /* try { // try from 03413914 to 03513917 has its CatchHandler @ 03413be0 */
                    /* try { // try from 03413918 to 03513947 has its CatchHandler @ 03413b5c */
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(local_28,pSVar2);
    }
    thunk_FUN_01c20e04(pDVar9);
  }
  return pDVar9->OBILBEMGFIE;
}


// ===== public string CFAPDJDKLEG()  [RVA 0x3313944]
// DPEEIIAMANO$$CFAPDJDKLEG @ RVA 0x3313944

System_String_o * DPEEIIAMANO__CFAPDJDKLEG(DPEEIIAMANO_o *__this,MethodInfo *method)

{
  ushort uVar1;
  System_String_c *pSVar2;
  undefined8 uVar3;
  bool bVar4;
  VirtualInvokeData *pVVar5;
  System_Collections_Generic_IDictionary_string__object__c *pSVar6;
  ulong uVar7;
  int32_t *piVar8;
  System_String_o **ppSVar9;
  System_Collections_Generic_IDictionary_string__object__o *pSVar10;
  System_String_o *local_28;
  
                    /* try { // try from 0341395c to 0351395f has its CatchHandler @ 03413bb0 */
  if ((DAT_045677c4 & 1) == 0) {
                    /* try { // try from 03413960 to 03513987 has its CatchHandler @ 03413b80 */
    FUN_01bab630(&System_Collections_Generic_IDictionary<string,_object>_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_16905/*"campaign"*/);
    DAT_045677c4 = 1;
  }
  local_28 = (System_String_o *)0x0;
  ppSVar9 = &(__this->fields).MNNPEBCGFIF;
  bVar4 = System_String__IsNullOrWhiteSpace(*ppSVar9,(MethodInfo *)0x0);
  uVar3 = StringLiteral_16905/*"campaign"*/;
  if (bVar4) {
    pSVar10 = (__this->fields).IECPOKCOKIC;
    if (pSVar10 == (System_Collections_Generic_IDictionary_string__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 034139ac to 035139af has its CatchHandler @ 03413bac */
                    /* try { // try from 034139b0 to 035139d7 has its CatchHandler @ 03413bdc */
    pSVar6 = pSVar10->klass;
    uVar1._0_1_ = (pSVar6->_2).rank;
    uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar1;
    if (uVar7 != 0) {
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IDictionary<string,_object>_TypeInfo) {
          pVVar5 = pSVar6->vtable + (*piVar8 + 7);
          goto LAB_03413a10;
        }
                    /* try { // try from 034139e4 to 03513a0b has its CatchHandler @ 03413ba8 */
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)
             FUN_01b81914(pSVar10,System_Collections_Generic_IDictionary<string,_object>_TypeInfo,7)
    ;
LAB_03413a10:
                    /* try { // try from 03413a14 to 03513a23 has its CatchHandler @ 03413bd8 */
    (*pVVar5->methodPtr)(pSVar10,uVar3,&local_28,pVVar5->method);
    pSVar2 = string_TypeInfo;
    if (local_28 == (System_String_o *)0x0) {
      *ppSVar9 = (System_String_o *)0x0;
    }
    else {
                    /* try { // try from 03413a40 to 03513a43 has its CatchHandler @ 03413ba4 */
                    /* try { // try from 03413a44 to 03513a53 has its CatchHandler @ 03413bd4 */
      if ((local_28->klass != string_TypeInfo) || (*ppSVar9 = local_28, local_28->klass != pSVar2))
      {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03413a5c to 03513a67 has its CatchHandler @ 03413ba0 */
        FUN_01babc64(local_28,pSVar2);
      }
    }
    thunk_FUN_01c20e04(ppSVar9);
  }
                    /* try { // try from 03413a78 to 03513a7f has its CatchHandler @ 03413c9c */
  return *ppSVar9;
}


// ===== public bool DFLFJJIGABK()  [RVA 0x3313A84]
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
    auVar12 = FUN_01bab630(&StringLiteral_19158/*"is_first_launch"*/);
                    /* try { // try from 03413af4 to 03513b03 has its CatchHandler @ 03413b74 */
    DAT_045677c5 = 1;
  }
  uVar3 = StringLiteral_19158/*"is_first_launch"*/;
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


// ===== public string BEDENMMHPAI()  [RVA 0x3313C20]
// DPEEIIAMANO$$BEDENMMHPAI @ RVA 0x3313C20

System_String_o * DPEEIIAMANO__BEDENMMHPAI(DPEEIIAMANO_o *__this,MethodInfo *method)

{
  ushort uVar1;
  System_String_c *pSVar2;
  undefined8 uVar3;
  bool bVar4;
  VirtualInvokeData *pVVar5;
  System_Collections_Generic_IDictionary_string__object__c *pSVar6;
  ulong uVar7;
  int32_t *piVar8;
  System_String_o **ppSVar9;
  System_Collections_Generic_IDictionary_string__object__o *pSVar10;
  System_String_o *local_28;
  
                    /* try { // try from 03413c30 to 03513c37 has its CatchHandler @ 03413f34 */
  if ((DAT_045677c6 & 1) == 0) {
    FUN_01bab630(&System_Collections_Generic_IDictionary<string,_object>_TypeInfo);
                    /* try { // try from 03413c50 to 03513c57 has its CatchHandler @ 03413f18 */
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_16367/*"af_media_source "*/);
    DAT_045677c6 = 1;
  }
                    /* try { // try from 03413c68 to 03513c6f has its CatchHandler @ 03413c98 */
  local_28 = (System_String_o *)0x0;
  ppSVar9 = &(__this->fields).DAKLJGJBAHN;
                    /* try { // try from 03413c74 to 03513c77 has its CatchHandler @ 03413c94 */
  bVar4 = System_String__IsNullOrWhiteSpace(*ppSVar9,(MethodInfo *)0x0);
  uVar3 = StringLiteral_16367/*"af_media_source "*/;
                    /* try { // try from 03413c7c to 03513c7f has its CatchHandler @ 03413c90 */
  if (bVar4) {
                    /* try { // try from 03413c80 to 03513cb3 has its CatchHandler @ 03413478 */
    pSVar10 = (__this->fields).IECPOKCOKIC;
                    /* catch() { ... } // from try @ 03413c18 with catch @ 03413c84 */
    if (pSVar10 == (System_Collections_Generic_IDictionary_string__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar6 = pSVar10->klass;
    uVar1._0_1_ = (pSVar6->_2).rank;
    uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
                    /* catch() { ... } // from try @ 03413c7c with catch @ 03413c90 */
                    /* catch() { ... } // from try @ 03413c74 with catch @ 03413c94 */
                    /* catch() { ... } // from try @ 03413c68 with catch @ 03413c98 */
                    /* catch() { ... } // from try @ 03413a78 with catch @ 03413c9c */
                    /* catch() { ... } // from try @ 03413788 with catch @ 03413ca0 */
    uVar7 = (ulong)uVar1;
                    /* catch() { ... } // from try @ 03413754 with catch @ 03413ca4 */
    if (uVar7 != 0) {
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
                    /* try { // try from 03413cb4 to 03513cb7 has its CatchHandler @ 03413f1c */
                    /* try { // try from 03413cb8 to 03513ec3 has its CatchHandler @ 03413478 */
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IDictionary<string,_object>_TypeInfo) {
          pVVar5 = pSVar6->vtable + (*piVar8 + 7);
          goto LAB_03413cec;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)
             FUN_01b81914(pSVar10,System_Collections_Generic_IDictionary<string,_object>_TypeInfo,7)
    ;
LAB_03413cec:
    uVar7 = (*pVVar5->methodPtr)(pSVar10,uVar3,&local_28,pVVar5->method);
    pSVar2 = string_TypeInfo;
    if ((uVar7 & 1) != 0) {
      if (local_28 == (System_String_o *)0x0) {
        *ppSVar9 = (System_String_o *)0x0;
      }
      else if ((local_28->klass != string_TypeInfo) ||
              (*ppSVar9 = local_28, local_28->klass != pSVar2)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(local_28,pSVar2);
      }
      thunk_FUN_01c20e04(ppSVar9);
    }
  }
  return *ppSVar9;
}


// ===== public bool BJFKKEHOHAA()  [RVA 0x3313D64]
// DPEEIIAMANO$$BJFKKEHOHAA @ RVA 0x3313D64

bool DPEEIIAMANO__BJFKKEHOHAA(DPEEIIAMANO_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *a;
  MethodInfo *extraout_x1;
  
  if ((DAT_045677c7 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9982/*"Organic"*/);
    DAT_045677c7 = 1;
    method = extraout_x1;
  }
  a = DPEEIIAMANO__HMHBJILDFEI(__this,method);
  bVar1 = System_String__op_Equality(a,StringLiteral_9982/*"Organic"*/,(MethodInfo *)0x0);
  return bVar1;
}


// ===== public Nullable<DateTime> MEOPENGPLPL()  [RVA 0x3313DB4]
// DPEEIIAMANO$$MEOPENGPLPL @ RVA 0x3313DB4

System_Nullable_DateTime__o DPEEIIAMANO__MEOPENGPLPL(DPEEIIAMANO_o *__this,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  System_String_o *s;
  bool bVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *method_00;
  System_Collections_Generic_IDictionary_string__object__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IDictionary_string__object__o *pSVar8;
  System_Nullable_DateTime__o *pSVar9;
  undefined1 auVar10 [16];
  System_Nullable_DateTime__o __this_00;
  undefined8 local_48;
  uint64_t uStack_40;
  System_DateTime_o local_38;
  System_String_o *local_28;
  
  auVar10._8_8_ = method;
  auVar10._0_8_ = __this;
  if ((DAT_045677c8 & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IDictionary<string,_object>_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<DateTime>__ctor__);
    FUN_01bab630(&Method_System_Nullable<DateTime>_get_HasValue__);
    FUN_01bab630(&string_TypeInfo);
    auVar10 = FUN_01bab630(&StringLiteral_17074/*"click_time"*/);
    DAT_045677c8 = 1;
  }
  uVar2 = StringLiteral_17074/*"click_time"*/;
  local_28 = (System_String_o *)0x0;
  local_38.fields._dateData = (System_DateTime_Fields)0;
  pSVar9 = &(__this->fields).GHKNMEMMBDB;
  if ((pSVar9->fields).hasValue == false) {
    pSVar8 = (__this->fields).IECPOKCOKIC;
    if (pSVar8 == (System_Collections_Generic_IDictionary_string__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(auVar10._0_8_,auVar10._8_8_);
    }
    pSVar5 = pSVar8->klass;
    uVar1._0_1_ = (pSVar5->_2).rank;
    uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
    uVar6 = (ulong)uVar1;
    if (uVar6 != 0) {
      piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IDictionary<string,_object>_TypeInfo) {
          pVVar4 = pSVar5->vtable + (*piVar7 + 7);
          goto LAB_03413ebc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar4 = (VirtualInvokeData *)
             FUN_01b81914(pSVar8,System_Collections_Generic_IDictionary<string,_object>_TypeInfo,7);
LAB_03413ebc:
    method_00 = pVVar4->method;
                    /* try { // try from 03413ec4 to 03513ec7 has its CatchHandler @ 03413f38 */
    uVar6 = (*pVVar4->methodPtr)(pSVar8,uVar2,&local_28);
    if ((local_28 != (System_String_o *)0x0) && ((uVar6 & 1) != 0)) {
                    /* try { // try from 03413ee0 to 03513ef7 has its CatchHandler @ 03413fb0 */
      if (local_28->klass != string_TypeInfo) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
                    /* try { // try from 03413ef8 to 03513eff has its CatchHandler @ 03413478 */
      bVar3 = System_String__IsNullOrWhiteSpace(local_28,(MethodInfo *)0x0);
      s = local_28;
                    /* try { // try from 03413f00 to 03513f03 has its CatchHandler @ 03413f30 */
      if (!bVar3) {
                    /* try { // try from 03413f04 to 03513f0b has its CatchHandler @ 03413f2c */
                    /* try { // try from 03413f0c to 03513f13 has its CatchHandler @ 03413fb0 */
                    /* catch() { ... } // from try @ 03413bc0 with catch @ 03413f14
                       try { // try from 03413f14 to 03513f57 has its CatchHandler @ 03413478 */
                    /* catch() { ... } // from try @ 03413c50 with catch @ 03413f18 */
        if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03413cb4 with catch @ 03413f1c */
          thunk_FUN_01ba7564();
        }
        if (s != (System_String_o *)0x0) {
                    /* catch() { ... } // from try @ 03413734 with catch @ 03413f28 */
                    /* catch() { ... } // from try @ 03413f04 with catch @ 03413f2c */
                    /* catch() { ... } // from try @ 03413f00 with catch @ 03413f30 */
          if (s->klass != string_TypeInfo) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(s);
          }
        }
                    /* catch() { ... } // from try @ 03413c30 with catch @ 03413f34 */
                    /* catch() { ... } // from try @ 03413ec4 with catch @ 03413f38 */
                    /* catch() { ... } // from try @ 03413718 with catch @ 03413f3c */
                    /* catch() { ... } // from try @ 034136fc with catch @ 03413f40 */
        bVar3 = System_DateTime__TryParse(s,&local_38,(MethodInfo *)0x0);
        if (bVar3) {
                    /* try { // try from 03413f58 to 03513f5b has its CatchHandler @ 03413f84 */
          local_48 = 0;
          uStack_40 = 0;
          __this_00.fields.value.fields._dateData = local_38.fields._dateData;
          __this_00.fields._0_8_ = &local_48;
                    /* try { // try from 03413f5c to 03513f93 has its CatchHandler @ 03413478 */
          System_Nullable<DateTime>___ctor
                    (__this_00,(System_DateTime_o)Method_System_Nullable<DateTime>__ctor__._dateData
                     ,(MethodInfo_27F61A0 *)method_00);
          (__this->fields).GHKNMEMMBDB.fields.value.fields._dateData = uStack_40;
          *(undefined8 *)&pSVar9->fields = local_48;
        }
      }
    }
  }
  return (System_Nullable_DateTime__o)(__this->fields).JFNKGDHEGBG.fields;
}


// ===== public DateTime LPFMPDCPBDI()  [RVA 0x3313F80]
// DPEEIIAMANO$$LPFMPDCPBDI @ RVA 0x3313F80

System_DateTime_o DPEEIIAMANO__LPFMPDCPBDI(DPEEIIAMANO_o *__this,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  System_String_o *s;
  VirtualInvokeData *pVVar3;
  System_DateTime_Fields SVar4;
  System_DateTime_o SVar5;
  System_DateTime_Fields in_x2;
  MethodInfo *method_00;
  System_Collections_Generic_IDictionary_string__object__c *pSVar6;
  ulong uVar7;
  int32_t *piVar8;
  System_Nullable_DateTime__o *pSVar9;
  System_Collections_Generic_IDictionary_string__object__o *pSVar10;
  undefined1 auVar11 [16];
  System_Nullable_DateTime__o __this_00;
  System_Nullable_DateTime__o __this_01;
  undefined8 local_38;
  uint64_t uStack_30;
  System_String_o *local_28;
  
  auVar11._8_8_ = method;
  auVar11._0_8_ = __this;
                    /* catch() { ... } // from try @ 03413f58 with catch @ 03413f84 */
                    /* try { // try from 03413f94 to 03513f9b has its CatchHandler @ 03413fb0 */
  if ((DAT_045677c9 & 1) == 0) {
                    /* try { // try from 03413f9c to 03513fa7 has its CatchHandler @ 03413478 */
    FUN_01bab630(&System_DateTime_TypeInfo);
                    /* try { // try from 03413fa8 to 03513faf has its CatchHandler @ 03413fb0 */
                    /* catch() { ... } // from try @ 03413ee0 with catch @ 03413fb0
                       catch() { ... } // from try @ 03413f0c with catch @ 03413fb0
                       catch() { ... } // from try @ 03413f94 with catch @ 03413fb0
                       catch() { ... } // from try @ 03413fa8 with catch @ 03413fb0 */
    FUN_01bab630(&System_Collections_Generic_IDictionary<string,_object>_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<DateTime>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<DateTime>__ctor__);
    FUN_01bab630(&Method_System_Nullable<DateTime>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<DateTime>_get_Value__);
    FUN_01bab630(&string_TypeInfo);
    auVar11 = FUN_01bab630(&StringLiteral_19029/*"install_time"*/);
    DAT_045677c9 = 1;
  }
  uVar2 = StringLiteral_19029/*"install_time"*/;
  local_28 = (System_String_o *)0x0;
  pSVar9 = &(__this->fields).JFNKGDHEGBG;
  if ((pSVar9->fields).hasValue == false) {
    pSVar10 = (__this->fields).IECPOKCOKIC;
    if (pSVar10 == (System_Collections_Generic_IDictionary_string__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(auVar11._0_8_,auVar11._8_8_);
    }
    pSVar6 = pSVar10->klass;
    uVar1._0_1_ = (pSVar6->_2).rank;
    uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar1;
    if (uVar7 != 0) {
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IDictionary<string,_object>_TypeInfo) {
          pVVar3 = pSVar6->vtable + (*piVar8 + 7);
          goto LAB_03414080;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar3 = (VirtualInvokeData *)
             FUN_01b81914(pSVar10,System_Collections_Generic_IDictionary<string,_object>_TypeInfo,7)
    ;
LAB_03414080:
    method_00 = pVVar3->method;
    uVar7 = (*pVVar3->methodPtr)(pSVar10,uVar2,&local_28);
    s = local_28;
    if ((uVar7 & 1) == 0) {
      if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      SVar4._dateData = (uint64_t)System_DateTime__get_Now((MethodInfo *)0x0);
    }
    else {
      if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if ((s != (System_String_o *)0x0) && (s->klass != string_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(s);
      }
      SVar4._dateData = (uint64_t)System_DateTime__Parse(s,(MethodInfo *)0x0);
    }
    local_38 = 0;
    uStack_30 = 0;
    __this_00.fields.value.fields._dateData =
         (System_DateTime_Fields)(System_DateTime_Fields)SVar4._dateData;
    __this_00.fields._0_8_ = &local_38;
    in_x2._dateData = Method_System_Nullable<DateTime>__ctor__._dateData;
    System_Nullable<DateTime>___ctor
              (__this_00,(System_DateTime_o)Method_System_Nullable<DateTime>__ctor__._dateData,
               (MethodInfo_27F61A0 *)method_00);
    (__this->fields).JFNKGDHEGBG.fields.value.fields._dateData = uStack_30;
    *(undefined8 *)&pSVar9->fields = local_38;
  }
  __this_01.fields.value.fields._dateData =
       (System_DateTime_Fields)
       (System_DateTime_Fields)Method_System_Nullable<DateTime>_get_Value__._dateData;
  __this_01.fields._0_8_ = pSVar9;
  SVar5 = System_Nullable<DateTime>__get_Value(__this_01,(MethodInfo_27F61B8 *)in_x2._dateData);
  return (System_DateTime_o)SVar5.fields._dateData;
}

