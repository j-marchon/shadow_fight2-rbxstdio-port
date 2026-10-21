// TypeDefIndex 3414
// Namespace: 
// public sealed class NLBPJNEGNNM : IMessage<NLBPJNEGNNM>, IMessage, IEquatable<NLBPJNEGNNM>, IDeepCloneable<NLBPJNEGNNM>
// Fields:
//   private static readonly MessageParser<NLBPJNEGNNM> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int KGBOMFIKDEC = 1;
//   private KAMBBJFPLGM OPHCNELIOLD; // 0x18
//   public const int LPHOIDNJOCI = 2;
//   private HCFOFHGNBKP PMMFPJJOPKE; // 0x20
//   public const int JKGKBCFGNBH = 3;
//   private GLPEFEEGCPM IIIJBPAFNNF; // 0x28

// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x3556A5C]
// NLBPJNEGNNM$$Equals @ RVA 0x3556A5C

bool NLBPJNEGNNM__Equals(NLBPJNEGNNM_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04568b6a & 1) == 0) {
    FUN_01bab630(&NLBPJNEGNNM_TypeInfo);
    DAT_04568b6a = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)NLBPJNEGNNM_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = NLBPJNEGNNM__Equals(__this,(NLBPJNEGNNM_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public void .ctor()  [RVA 0x3556B48]
// NLBPJNEGNNM$$.ctor @ RVA 0x3556B48

void NLBPJNEGNNM___ctor(NLBPJNEGNNM_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static MessageParser<NLBPJNEGNNM> PGCAHPDCJBC()  [RVA 0x3556B50]
// NLBPJNEGNNM$$PGCAHPDCJBC @ RVA 0x3556B50

Google_Protobuf_MessageParser_NLBPJNEGNNM__o * NLBPJNEGNNM__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04568b6b & 1) == 0) {
    FUN_01bab630(&NLBPJNEGNNM_TypeInfo);
    DAT_04568b6b = 1;
  }
  if ((NLBPJNEGNNM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return NLBPJNEGNNM_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public override string ToString()  [RVA 0x3556BA8]
// NLBPJNEGNNM$$ToString @ RVA 0x3556BA8

System_String_o * NLBPJNEGNNM__ToString(NLBPJNEGNNM_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568b6c & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04568b6c = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public bool Equals(NLBPJNEGNNM IBKIPBJJCPG)  [RVA 0x3556AC0]
// NLBPJNEGNNM$$Equals @ RVA 0x3556AC0

bool NLBPJNEGNNM__Equals(NLBPJNEGNNM_o *__this,NLBPJNEGNNM_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (NLBPJNEGNNM_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_Object__Equals
                      ((Il2CppObject *)(__this->fields).OPHCNELIOLD,
                       (Il2CppObject *)(IBKIPBJJCPG->fields).OPHCNELIOLD,(MethodInfo *)0x0);
    if (((bVar1) &&
        (bVar1 = System_Object__Equals
                           ((Il2CppObject *)(__this->fields).PMMFPJJOPKE,
                            (Il2CppObject *)(IBKIPBJJCPG->fields).PMMFPJJOPKE,(MethodInfo *)0x0),
        bVar1)) &&
       (bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).IIIJBPAFNNF,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).IIIJBPAFNNF,(MethodInfo *)0x0),
       bVar1)) {
                    /* try { // try from 03656b28 to 03756ce7 has its CatchHandler @ 03656b28
                       catch() { ... } // from try @ 03656b28 with catch @ 03656b28
                       catch() { ... } // from try @ 03656d0c with catch @ 03656b28
                       catch() { ... } // from try @ 03656d64 with catch @ 03656b28
                       catch() { ... } // from try @ 03656f1c with catch @ 03656b28
                       catch() { ... } // from try @ 03656f48 with catch @ 03656b28
                       catch() { ... } // from try @ 03656f90 with catch @ 03656b28
                       catch() { ... } // from try @ 03656fac with catch @ 03656b28
                       catch() { ... } // from try @ 03656fdc with catch @ 03656b28 */
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public int CalculateSize()  [RVA 0x3556C00]
// NLBPJNEGNNM$$CalculateSize @ RVA 0x3556C00

int32_t NLBPJNEGNNM__CalculateSize(NLBPJNEGNNM_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  KAMBBJFPLGM_o *value;
  HCFOFHGNBKP_o *value_00;
  GLPEFEEGCPM_o *value_01;
  
  if ((DAT_04568b6d & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04568b6d = 1;
    method = extraout_x1;
  }
  value = (__this->fields).OPHCNELIOLD;
  iVar2 = 0;
  if (value != (KAMBBJFPLGM_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  value_00 = (__this->fields).PMMFPJJOPKE;
  if (value_00 != (HCFOFHGNBKP_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value_00,(MethodInfo *)0x0);
    iVar2 = iVar2 + iVar1 + 1;
  }
  value_01 = (__this->fields).IIIJBPAFNNF;
  if (value_01 != (GLPEFEEGCPM_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value_01,(MethodInfo *)0x0);
    iVar2 = iVar2 + iVar1 + 1;
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
    iVar2 = iVar1 + iVar2;
  }
  return iVar2;
}


// ===== public override int GetHashCode()  [RVA 0x3556CE0]
// NLBPJNEGNNM$$GetHashCode @ RVA 0x3556CE0

int32_t NLBPJNEGNNM__GetHashCode(NLBPJNEGNNM_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  KAMBBJFPLGM_o *pKVar3;
  HCFOFHGNBKP_o *pHVar4;
  GLPEFEEGCPM_o *pGVar5;
  Google_Protobuf_UnknownFieldSet_o *pGVar6;
  
                    /* try { // try from 03656ce8 to 03756cef has its CatchHandler @ 03656f2c */
  pKVar3 = (__this->fields).OPHCNELIOLD;
  if (pKVar3 == (KAMBBJFPLGM_o *)0x0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (*(pKVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pKVar3,(pKVar3->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar1 ^ 1;
                    /* try { // try from 03656d04 to 03756d0b has its CatchHandler @ 03656f24 */
  }
                    /* try { // try from 03656d0c to 03756d43 has its CatchHandler @ 03656b28 */
  pHVar4 = (__this->fields).PMMFPJJOPKE;
  if (pHVar4 != (HCFOFHGNBKP_o *)0x0) {
    uVar2 = (*(pHVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pHVar4,(pHVar4->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  pGVar5 = (__this->fields).IIIJBPAFNNF;
  if (pGVar5 != (GLPEFEEGCPM_o *)0x0) {
    uVar2 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  pGVar6 = (__this->fields).CKFPENBPNML;
  if (pGVar6 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
                    /* try { // try from 03656d44 to 03756d4b has its CatchHandler @ 03656f90 */
    uVar2 = (*(pGVar6->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar6,(pGVar6->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
                    /* try { // try from 03656d54 to 03756d63 has its CatchHandler @ 03656f28 */
  return uVar1;
}


// ===== public GLPEFEEGCPM BBFEOPNFCNE()  [RVA 0x3556D64]
// NLBPJNEGNNM$$BBFEOPNFCNE @ RVA 0x3556D64

GLPEFEEGCPM_o * NLBPJNEGNNM__BBFEOPNFCNE(NLBPJNEGNNM_o *__this,MethodInfo *method)

{
                    /* try { // try from 03656d64 to 03756f17 has its CatchHandler @ 03656b28 */
  return (__this->fields).IIIJBPAFNNF;
}


// ===== public void .ctor(NLBPJNEGNNM IBKIPBJJCPG)  [RVA 0x3556D6C]
// NLBPJNEGNNM$$.ctor @ RVA 0x3556D6C

void NLBPJNEGNNM___ctor(NLBPJNEGNNM_o *__this,NLBPJNEGNNM_o *IBKIPBJJCPG,MethodInfo *method)

{
  KAMBBJFPLGM_o *pKVar1;
  HCFOFHGNBKP_o *pHVar2;
  GLPEFEEGCPM_o *pGVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (NLBPJNEGNNM_o *)0x0) {
    pKVar1 = (IBKIPBJJCPG->fields).OPHCNELIOLD;
    if (pKVar1 == (KAMBBJFPLGM_o *)0x0) {
      pKVar1 = (KAMBBJFPLGM_o *)0x0;
    }
    else {
      pKVar1 = KAMBBJFPLGM__Clone(pKVar1,(MethodInfo *)0x0);
    }
    if (__this != (NLBPJNEGNNM_o *)0x0) {
      (__this->fields).OPHCNELIOLD = pKVar1;
      thunk_FUN_01c20e04();
      pHVar2 = (IBKIPBJJCPG->fields).PMMFPJJOPKE;
      if (pHVar2 == (HCFOFHGNBKP_o *)0x0) {
        pHVar2 = (HCFOFHGNBKP_o *)0x0;
      }
      else {
        pHVar2 = HCFOFHGNBKP__Clone(pHVar2,(MethodInfo *)0x0);
      }
      (__this->fields).PMMFPJJOPKE = pHVar2;
      thunk_FUN_01c20e04();
      pGVar3 = (IBKIPBJJCPG->fields).IIIJBPAFNNF;
      if (pGVar3 == (GLPEFEEGCPM_o *)0x0) {
        pGVar3 = (GLPEFEEGCPM_o *)0x0;
      }
      else {
        pGVar3 = GLPEFEEGCPM__Clone(pGVar3,(MethodInfo *)0x0);
      }
      (__this->fields).IIIJBPAFNNF = pGVar3;
      thunk_FUN_01c20e04();
      pGVar4 = Google_Protobuf_UnknownFieldSet__Clone
                         ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      (__this->fields).CKFPENBPNML = pGVar4;
      thunk_FUN_01c20e04(&__this->fields,pGVar4);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public KAMBBJFPLGM JCKINNMKHBA()  [RVA 0x3556E2C]
// NLBPJNEGNNM$$JCKINNMKHBA @ RVA 0x3556E2C

KAMBBJFPLGM_o * NLBPJNEGNNM__JCKINNMKHBA(NLBPJNEGNNM_o *__this,MethodInfo *method)

{
  return (__this->fields).OPHCNELIOLD;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x3556E34]
// NLBPJNEGNNM$$FFHIHGCDGAK @ RVA 0x3556E34

Google_Protobuf_Reflection_MessageDescriptor_o * NLBPJNEGNNM__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04568b6e & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04568b6e = 1;
  }
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565d86 == '\0') {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    DAT_04565d86 = '\x01';
  }
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar4 = HHBHIFIPCNJ_TypeInfo->static_fields->GPNOKFJEHKO;
  if ((pGVar4 == (Google_Protobuf_Reflection_FileDescriptor_o *)0x0) ||
     (pSVar8 = (pGVar4->fields)._MessageTypes_k__BackingField,
     pSVar8 == (System_Collections_Generic_IList_MessageDescriptor__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar5 = pSVar8->klass;
  uVar1._0_1_ = (pSVar5->_2).rank;
  uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IList<MessageDescriptor>_TypeInfo) {
                    /* try { // try from 03656f18 to 03756f1b has its CatchHandler @ 03656f20 */
        pVVar2 = pSVar5->vtable + *piVar7;
        goto LAB_03656f1c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_03656f1c:
                    /* try { // try from 03656f1c to 03756f43 has its CatchHandler @ 03656b28 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03656f18 with catch @ 03656f20
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03656d04 with catch @ 03656f24
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03656d54 with catch @ 03656f28
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03656ce8 with catch @ 03656f2c
                        */
                    /* WARNING: Could not recover jumptable at 0x03656f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x36,pVVar2->method);
  return pGVar3;
}


// ===== private static void .cctor()  [RVA 0x3556F38]
// NLBPJNEGNNM$$.cctor @ RVA 0x3556F38

void NLBPJNEGNNM___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_NLBPJNEGNNM__o *__this;
  
                    /* try { // try from 03656f44 to 03756f47 has its CatchHandler @ 03656f6c */
                    /* try { // try from 03656f48 to 03756f7b has its CatchHandler @ 03656b28 */
  if ((DAT_04568b6f & 1) == 0) {
    FUN_01bab630(&System_Func<NLBPJNEGNNM>_TypeInfo);
                    /* catch() { ... } // from try @ 03656f44 with catch @ 03656f6c */
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<NLBPJNEGNNM>__ctor__);
                    /* try { // try from 03656f7c to 03756f8f has its CatchHandler @ 03656ff0 */
    FUN_01bab630(&Google_Protobuf_MessageParser<NLBPJNEGNNM>_TypeInfo);
    FUN_01bab630(&NLBPJNEGNNM_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03656d44 with catch @ 03656f90
                       try { // try from 03656f90 to 03756fa7 has its CatchHandler @ 03656b28 */
    FUN_01bab630(&Method_NLBPJNEGNNM_<>c_OEFEKGDDHPN__);
    FUN_01bab630(&NLBPJNEGNNM_<>c_TypeInfo);
                    /* try { // try from 03656fa8 to 03756fab has its CatchHandler @ 03656fcc */
    DAT_04568b6f = 1;
  }
                    /* try { // try from 03656fac to 03756fd3 has its CatchHandler @ 03656b28 */
                    /* catch() { ... } // from try @ 03656fa8 with catch @ 03656fcc */
                    /* try { // try from 03656fd4 to 03756fdb has its CatchHandler @ 03656ff0 */
                    /* try { // try from 03656fdc to 03756fe7 has its CatchHandler @ 03656b28 */
  if ((NLBPJNEGNNM_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03656fe8 to 03756fef has its CatchHandler @ 03656ff0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03656f7c with catch @ 03656ff0
                       catch(type#2 @ 00000000) { ... } // from try @ 03656fd4 with catch @ 03656ff0
                       catch(type#2 @ 00000000) { ... } // from try @ 03656fe8 with catch @ 03656ff0
                        */
                    /* try { // try from 03656ff4 to 0375713f has its CatchHandler @ 03656ff4
                       catch() { ... } // from try @ 03656ff4 with catch @ 03656ff4
                       catch() { ... } // from try @ 03657164 with catch @ 03656ff4
                       catch() { ... } // from try @ 03657218 with catch @ 03656ff4
                       catch() { ... } // from try @ 03657258 with catch @ 03656ff4 */
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<NLBPJNEGNNM>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_NLBPJNEGNNM__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<NLBPJNEGNNM>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<NLBPJNEGNNM>__ctor__);
  NLBPJNEGNNM_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(NLBPJNEGNNM_TypeInfo->static_fields,__this);
  return;
}


// ===== public void IIBFFDJAKFB(KAMBBJFPLGM CJNHFNHJHPE)  [RVA 0x3557050]
// NLBPJNEGNNM$$IIBFFDJAKFB @ RVA 0x3557050

void NLBPJNEGNNM__IIBFFDJAKFB(NLBPJNEGNNM_o *__this,KAMBBJFPLGM_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).OPHCNELIOLD = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void INOKKGKNDAH(HCFOFHGNBKP CJNHFNHJHPE)  [RVA 0x3557058]
// NLBPJNEGNNM$$INOKKGKNDAH @ RVA 0x3557058

void NLBPJNEGNNM__INOKKGKNDAH(NLBPJNEGNNM_o *__this,HCFOFHGNBKP_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).PMMFPJJOPKE = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x3557060]
// NLBPJNEGNNM$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3557060

Google_Protobuf_Reflection_MessageDescriptor_o *
NLBPJNEGNNM__pb__Google_Protobuf_IMessage_get_Descriptor(NLBPJNEGNNM_o *__this,MethodInfo *method)

{
  NLBPJNEGNNM_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568b70 & 1) == 0) {
    FUN_01bab630(&NLBPJNEGNNM_TypeInfo);
    DAT_04568b70 = 1;
    method = extraout_x1;
  }
  method_00 = NLBPJNEGNNM_TypeInfo;
  if ((NLBPJNEGNNM_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (NLBPJNEGNNM_c *)thunk_FUN_01ba7564(NLBPJNEGNNM_TypeInfo,method);
  }
  pGVar1 = NLBPJNEGNNM__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public HCFOFHGNBKP FGMGOKNGJFJ()  [RVA 0x35570AC]
// NLBPJNEGNNM$$FGMGOKNGJFJ @ RVA 0x35570AC

HCFOFHGNBKP_o * NLBPJNEGNNM__FGMGOKNGJFJ(NLBPJNEGNNM_o *__this,MethodInfo *method)

{
  return (__this->fields).PMMFPJJOPKE;
}


// ===== public void MergeFrom(NLBPJNEGNNM IBKIPBJJCPG)  [RVA 0x35570B4]
// NLBPJNEGNNM$$MergeFrom @ RVA 0x35570B4

void NLBPJNEGNNM__MergeFrom(NLBPJNEGNNM_o *__this,NLBPJNEGNNM_o *IBKIPBJJCPG,MethodInfo *method)

{
  KAMBBJFPLGM_o *pKVar1;
  HCFOFHGNBKP_o *pHVar2;
  GLPEFEEGCPM_o *pGVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  NLBPJNEGNNM_Fields *pNVar5;
  KAMBBJFPLGM_o **ppKVar6;
  HCFOFHGNBKP_o **ppHVar7;
  GLPEFEEGCPM_o **ppGVar8;
  
  if ((DAT_04568b71 & 1) == 0) {
    FUN_01bab630(&GLPEFEEGCPM_TypeInfo);
    FUN_01bab630(&HCFOFHGNBKP_TypeInfo);
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    DAT_04568b71 = 1;
  }
  if (IBKIPBJJCPG == (NLBPJNEGNNM_o *)0x0) {
    return;
  }
  if ((IBKIPBJJCPG->fields).OPHCNELIOLD != (KAMBBJFPLGM_o *)0x0) {
    ppKVar6 = &(__this->fields).OPHCNELIOLD;
    pKVar1 = *ppKVar6;
    if (pKVar1 == (KAMBBJFPLGM_o *)0x0) {
      pKVar1 = (KAMBBJFPLGM_o *)thunk_FUN_01bda818(KAMBBJFPLGM_TypeInfo);
      KAMBBJFPLGM___ctor(pKVar1,(MethodInfo *)0x0);
      *ppKVar6 = pKVar1;
                    /* try { // try from 03657140 to 03757147 has its CatchHandler @ 036571fc */
      thunk_FUN_01c20e04(ppKVar6,pKVar1);
      pKVar1 = *ppKVar6;
      if (pKVar1 == (KAMBBJFPLGM_o *)0x0) goto LAB_0365723c;
    }
                    /* try { // try from 03657150 to 03757163 has its CatchHandler @ 036571f8 */
    KAMBBJFPLGM__MergeFrom(pKVar1,(IBKIPBJJCPG->fields).OPHCNELIOLD,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).PMMFPJJOPKE != (HCFOFHGNBKP_o *)0x0) {
    ppHVar7 = &(__this->fields).PMMFPJJOPKE;
                    /* try { // try from 03657164 to 03757213 has its CatchHandler @ 03656ff4 */
    pHVar2 = *ppHVar7;
    if (pHVar2 == (HCFOFHGNBKP_o *)0x0) {
      pHVar2 = (HCFOFHGNBKP_o *)thunk_FUN_01bda818(HCFOFHGNBKP_TypeInfo);
      HCFOFHGNBKP___ctor(pHVar2,(MethodInfo *)0x0);
      *ppHVar7 = pHVar2;
      thunk_FUN_01c20e04(ppHVar7,pHVar2);
      pHVar2 = *ppHVar7;
      if (pHVar2 == (HCFOFHGNBKP_o *)0x0) goto LAB_0365723c;
    }
    HCFOFHGNBKP__MergeFrom(pHVar2,(IBKIPBJJCPG->fields).PMMFPJJOPKE,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).IIIJBPAFNNF != (GLPEFEEGCPM_o *)0x0) {
    ppGVar8 = &(__this->fields).IIIJBPAFNNF;
    pGVar3 = *ppGVar8;
    if (pGVar3 == (GLPEFEEGCPM_o *)0x0) {
      pGVar3 = (GLPEFEEGCPM_o *)thunk_FUN_01bda818(GLPEFEEGCPM_TypeInfo);
      GLPEFEEGCPM___ctor(pGVar3,(MethodInfo *)0x0);
      *ppGVar8 = pGVar3;
      thunk_FUN_01c20e04(ppGVar8,pGVar3);
      pGVar3 = *ppGVar8;
      if (pGVar3 == (GLPEFEEGCPM_o *)0x0) {
LAB_0365723c:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03657150 with catch @ 036571f8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03657140 with catch @ 036571fc
                        */
    GLPEFEEGCPM__MergeFrom(pGVar3,(IBKIPBJJCPG->fields).IIIJBPAFNNF,(MethodInfo *)0x0);
  }
  pNVar5 = &__this->fields;
  pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFrom
                     (pNVar5->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
                    /* try { // try from 03657214 to 03757217 has its CatchHandler @ 03657240 */
  pNVar5->CKFPENBPNML = pGVar4;
                    /* try { // try from 03657218 to 0375724f has its CatchHandler @ 03656ff4 */
  thunk_FUN_01c20e04(pNVar5,pGVar4);
  return;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x3557240]
// NLBPJNEGNNM$$WriteTo @ RVA 0x3557240

void NLBPJNEGNNM__WriteTo
               (NLBPJNEGNNM_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
                    /* catch() { ... } // from try @ 03657214 with catch @ 03657240 */
                    /* try { // try from 03657250 to 03757257 has its CatchHandler @ 0365726c */
  if ((__this->fields).OPHCNELIOLD != (KAMBBJFPLGM_o *)0x0) {
                    /* try { // try from 03657258 to 03757263 has its CatchHandler @ 03656ff4 */
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036572fc;
                    /* try { // try from 03657264 to 0375726b has its CatchHandler @ 0365726c */
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03657250 with catch @ 0365726c
                       catch(type#2 @ 00000000) { ... } // from try @ 03657264 with catch @ 0365726c
                        */
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).OPHCNELIOLD,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).PMMFPJJOPKE != (HCFOFHGNBKP_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036572fc;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).PMMFPJJOPKE,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).IIIJBPAFNNF != (GLPEFEEGCPM_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_036572fc:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x1a,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).IIIJBPAFNNF,
               (MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public NLBPJNEGNNM Clone()  [RVA 0x3557300]
// NLBPJNEGNNM$$Clone @ RVA 0x3557300

NLBPJNEGNNM_o * NLBPJNEGNNM__Clone(NLBPJNEGNNM_o *__this,MethodInfo *method)

{
  NLBPJNEGNNM_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04568b72 & 1) == 0) {
    FUN_01bab630(&NLBPJNEGNNM_TypeInfo);
    DAT_04568b72 = 1;
    method = extraout_x1;
  }
  __this_00 = (NLBPJNEGNNM_o *)thunk_FUN_01bda818(NLBPJNEGNNM_TypeInfo,method);
  NLBPJNEGNNM___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public void FLBDDBAAMIL(GLPEFEEGCPM CJNHFNHJHPE)  [RVA 0x3557358]
// NLBPJNEGNNM$$FLBDDBAAMIL @ RVA 0x3557358

void NLBPJNEGNNM__FLBDDBAAMIL(NLBPJNEGNNM_o *__this,GLPEFEEGCPM_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).IIIJBPAFNNF = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x3557360]
// NLBPJNEGNNM$$MergeFrom @ RVA 0x3557360

void NLBPJNEGNNM__MergeFrom
               (NLBPJNEGNNM_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  GLPEFEEGCPM_o **ppGVar1;
  HCFOFHGNBKP_o **ppHVar2;
  KAMBBJFPLGM_o **ppKVar3;
  NLBPJNEGNNM_Fields *pNVar4;
  uint32_t uVar5;
  GLPEFEEGCPM_o *__this_00;
  HCFOFHGNBKP_o *__this_01;
  Google_Protobuf_UnknownFieldSet_o *pGVar6;
  KAMBBJFPLGM_o *pKVar7;
  
  if ((DAT_04568b73 & 1) == 0) {
    FUN_01bab630(&GLPEFEEGCPM_TypeInfo);
    FUN_01bab630(&HCFOFHGNBKP_TypeInfo);
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    DAT_04568b73 = 1;
  }
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  ppGVar1 = &(__this->fields).IIIJBPAFNNF;
  ppHVar2 = &(__this->fields).PMMFPJJOPKE;
  ppKVar3 = &(__this->fields).OPHCNELIOLD;
  pNVar4 = &__this->fields;
  do {
    while (uVar5 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
          0x11 < (int)uVar5) {
      if (uVar5 == 0x12) {
        pKVar7 = (KAMBBJFPLGM_o *)*ppHVar2;
        if (pKVar7 == (KAMBBJFPLGM_o *)0x0) {
          __this_01 = (HCFOFHGNBKP_o *)thunk_FUN_01bda818(HCFOFHGNBKP_TypeInfo);
          HCFOFHGNBKP___ctor(__this_01,(MethodInfo *)0x0);
          *ppHVar2 = __this_01;
          thunk_FUN_01c20e04(ppHVar2,__this_01);
          pKVar7 = (KAMBBJFPLGM_o *)*ppHVar2;
        }
      }
      else {
        if (uVar5 != 0x1a) goto LAB_036574b8;
        pKVar7 = (KAMBBJFPLGM_o *)*ppGVar1;
        if (pKVar7 == (KAMBBJFPLGM_o *)0x0) {
          __this_00 = (GLPEFEEGCPM_o *)thunk_FUN_01bda818(GLPEFEEGCPM_TypeInfo);
          GLPEFEEGCPM___ctor(__this_00,(MethodInfo *)0x0);
          *ppGVar1 = __this_00;
          thunk_FUN_01c20e04(ppGVar1,__this_00);
          pKVar7 = (KAMBBJFPLGM_o *)*ppGVar1;
        }
      }
LAB_036574a4:
      Google_Protobuf_CodedInputStream__ReadMessage
                (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pKVar7,(MethodInfo *)0x0);
    }
    if (uVar5 == 10) {
      pKVar7 = *ppKVar3;
      if (pKVar7 == (KAMBBJFPLGM_o *)0x0) {
        pKVar7 = (KAMBBJFPLGM_o *)thunk_FUN_01bda818(KAMBBJFPLGM_TypeInfo);
        KAMBBJFPLGM___ctor(pKVar7,(MethodInfo *)0x0);
        *ppKVar3 = pKVar7;
        thunk_FUN_01c20e04(ppKVar3,pKVar7);
        pKVar7 = *ppKVar3;
      }
      goto LAB_036574a4;
    }
    if (uVar5 == 0) {
      return;
    }
LAB_036574b8:
    pGVar6 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                       (pNVar4->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
    pNVar4->CKFPENBPNML = pGVar6;
    thunk_FUN_01c20e04(pNVar4,pGVar6);
  } while( true );
}

