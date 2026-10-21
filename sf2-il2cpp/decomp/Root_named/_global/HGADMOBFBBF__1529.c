// TypeDefIndex 1529
// Namespace: 
// public sealed class HGADMOBFBBF : IMessage<HGADMOBFBBF>, IMessage, IEquatable<HGADMOBFBBF>, IDeepCloneable<HGADMOBFBBF>
// Fields:
//   private static readonly MessageParser<HGADMOBFBBF> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int GDEPILLKJDA = 1;
//   private KDADMJGPAOM LHFLMBNKPHF; // 0x18

// ===== public int CalculateSize()  [RVA 0x31A3644]
// HGADMOBFBBF$$CalculateSize @ RVA 0x31A3644

int32_t HGADMOBFBBF__CalculateSize(HGADMOBFBBF_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  KDADMJGPAOM_o *value;
  
  if ((DAT_04566aed & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04566aed = 1;
    method = extraout_x1;
  }
  value = (__this->fields).LHFLMBNKPHF;
  iVar2 = 0;
  if (value != (KDADMJGPAOM_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
    iVar2 = iVar1 + iVar2;
  }
  return iVar2;
}


// ===== public KDADMJGPAOM KJBIABLOHLF()  [RVA 0x31A36C4]
// HGADMOBFBBF$$KJBIABLOHLF @ RVA 0x31A36C4

KDADMJGPAOM_o * HGADMOBFBBF__KJBIABLOHLF(HGADMOBFBBF_o *__this,MethodInfo *method)

{
  return (__this->fields).LHFLMBNKPHF;
}


// ===== public override int GetHashCode()  [RVA 0x31A36CC]
// HGADMOBFBBF$$GetHashCode @ RVA 0x31A36CC

int32_t HGADMOBFBBF__GetHashCode(HGADMOBFBBF_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  KDADMJGPAOM_o *pKVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  
  pKVar3 = (__this->fields).LHFLMBNKPHF;
  if (pKVar3 == (KDADMJGPAOM_o *)0x0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (*(pKVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pKVar3,(pKVar3->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar1 ^ 1;
  }
  pGVar4 = (__this->fields).CKFPENBPNML;
  if (pGVar4 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    uVar2 = (*(pGVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar4,(pGVar4->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  return uVar1;
}


// ===== public bool Equals(HGADMOBFBBF IBKIPBJJCPG)  [RVA 0x31A3720]
// HGADMOBFBBF$$Equals @ RVA 0x31A3720

bool HGADMOBFBBF__Equals(HGADMOBFBBF_o *__this,HGADMOBFBBF_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (HGADMOBFBBF_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_Object__Equals
                      ((Il2CppObject *)(__this->fields).LHFLMBNKPHF,
                       (Il2CppObject *)(IBKIPBJJCPG->fields).LHFLMBNKPHF,(MethodInfo *)0x0);
    if (bVar1) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* try { // try from 032a3774 to 033a37ff has its CatchHandler @ 032a3774
                       catch() { ... } // from try @ 032a3774 with catch @ 032a3774
                       catch() { ... } // from try @ 032a3808 with catch @ 032a3774
                       catch() { ... } // from try @ 032a3848 with catch @ 032a3774
                       catch() { ... } // from try @ 032a386c with catch @ 032a3774
                       catch() { ... } // from try @ 032a389c with catch @ 032a3774 */
  return false;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x31A3780]
// HGADMOBFBBF$$Equals @ RVA 0x31A3780

bool HGADMOBFBBF__Equals(HGADMOBFBBF_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04566aee & 1) == 0) {
    FUN_01bab630(&HGADMOBFBBF_TypeInfo);
    DAT_04566aee = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)HGADMOBFBBF_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = HGADMOBFBBF__Equals(__this,(HGADMOBFBBF_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public void EKMGFBCDOOA(KDADMJGPAOM CJNHFNHJHPE)  [RVA 0x31A37E4]
// HGADMOBFBBF$$EKMGFBCDOOA @ RVA 0x31A37E4

void HGADMOBFBBF__EKMGFBCDOOA(HGADMOBFBBF_o *__this,KDADMJGPAOM_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).LHFLMBNKPHF = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public HGADMOBFBBF Clone()  [RVA 0x31A37EC]
// HGADMOBFBBF$$Clone @ RVA 0x31A37EC

HGADMOBFBBF_o * HGADMOBFBBF__Clone(HGADMOBFBBF_o *__this,MethodInfo *method)

{
  HGADMOBFBBF_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
                    /* try { // try from 032a3800 to 033a3807 has its CatchHandler @ 032a3850 */
                    /* try { // try from 032a3808 to 033a3843 has its CatchHandler @ 032a3774 */
  if ((DAT_04566aef & 1) == 0) {
    FUN_01bab630(&HGADMOBFBBF_TypeInfo);
    DAT_04566aef = 1;
    method = extraout_x1;
  }
  __this_00 = (HGADMOBFBBF_o *)thunk_FUN_01bda818(HGADMOBFBBF_TypeInfo,method);
  HGADMOBFBBF___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public static MessageParser<HGADMOBFBBF> PGCAHPDCJBC()  [RVA 0x31A38B4]
// HGADMOBFBBF$$PGCAHPDCJBC @ RVA 0x31A38B4

Google_Protobuf_MessageParser_HGADMOBFBBF__o * HGADMOBFBBF__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04566af0 & 1) == 0) {
    FUN_01bab630(&HGADMOBFBBF_TypeInfo);
    DAT_04566af0 = 1;
  }
  if ((HGADMOBFBBF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return HGADMOBFBBF_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public void MergeFrom(HGADMOBFBBF IBKIPBJJCPG)  [RVA 0x31A390C]
// HGADMOBFBBF$$MergeFrom @ RVA 0x31A390C

void HGADMOBFBBF__MergeFrom(HGADMOBFBBF_o *__this,HGADMOBFBBF_o *IBKIPBJJCPG,MethodInfo *method)

{
  KDADMJGPAOM_o *pKVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  HGADMOBFBBF_Fields *pHVar3;
  KDADMJGPAOM_o **ppKVar4;
  
  if ((DAT_04566af1 & 1) == 0) {
    FUN_01bab630(&KDADMJGPAOM_TypeInfo);
    DAT_04566af1 = 1;
  }
  if (IBKIPBJJCPG != (HGADMOBFBBF_o *)0x0) {
    if ((IBKIPBJJCPG->fields).LHFLMBNKPHF != (KDADMJGPAOM_o *)0x0) {
      ppKVar4 = &(__this->fields).LHFLMBNKPHF;
      pKVar1 = *ppKVar4;
      if (pKVar1 == (KDADMJGPAOM_o *)0x0) {
        pKVar1 = (KDADMJGPAOM_o *)thunk_FUN_01bda818(KDADMJGPAOM_TypeInfo);
        KDADMJGPAOM___ctor(pKVar1,(MethodInfo *)0x0);
        *ppKVar4 = pKVar1;
        thunk_FUN_01c20e04(ppKVar4,pKVar1);
        pKVar1 = *ppKVar4;
        if (pKVar1 == (KDADMJGPAOM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
      KDADMJGPAOM__MergeFrom(pKVar1,(IBKIPBJJCPG->fields).LHFLMBNKPHF,(MethodInfo *)0x0);
    }
    pHVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pHVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pHVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pHVar3,pGVar2);
    return;
  }
  return;
}


// ===== public void .ctor()  [RVA 0x31A39D8]
// HGADMOBFBBF$$.ctor @ RVA 0x31A39D8

void HGADMOBFBBF___ctor(HGADMOBFBBF_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor(HGADMOBFBBF IBKIPBJJCPG)  [RVA 0x31A3844]
// HGADMOBFBBF$$.ctor @ RVA 0x31A3844

void HGADMOBFBBF___ctor(HGADMOBFBBF_o *__this,HGADMOBFBBF_o *IBKIPBJJCPG,MethodInfo *method)

{
  KDADMJGPAOM_o *pKVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  
                    /* try { // try from 032a3844 to 033a3847 has its CatchHandler @ 032a384c */
                    /* try { // try from 032a3848 to 033a3867 has its CatchHandler @ 032a3774 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032a3844 with catch @ 032a384c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032a3800 with catch @ 032a3850
                        */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (HGADMOBFBBF_o *)0x0) {
    pKVar1 = (IBKIPBJJCPG->fields).LHFLMBNKPHF;
    if (pKVar1 == (KDADMJGPAOM_o *)0x0) {
                    /* try { // try from 032a38a8 to 033a38af has its CatchHandler @ 032a38b0 */
      pKVar1 = (KDADMJGPAOM_o *)0x0;
    }
    else {
                    /* try { // try from 032a3868 to 033a386b has its CatchHandler @ 032a388c */
                    /* try { // try from 032a386c to 033a3893 has its CatchHandler @ 032a3774 */
      pKVar1 = KDADMJGPAOM__Clone(pKVar1,(MethodInfo *)0x0);
    }
    if (__this != (HGADMOBFBBF_o *)0x0) {
      (__this->fields).LHFLMBNKPHF = pKVar1;
      thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 032a3868 with catch @ 032a388c */
      pGVar2 = Google_Protobuf_UnknownFieldSet__Clone
                         ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      (__this->fields).CKFPENBPNML = pGVar2;
                    /* try { // try from 032a3894 to 033a389b has its CatchHandler @ 032a38b0 */
                    /* try { // try from 032a389c to 033a38a7 has its CatchHandler @ 032a3774 */
      thunk_FUN_01c20e04(&__this->fields,pGVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032a3894 with catch @ 032a38b0
                       catch(type#2 @ 00000000) { ... } // from try @ 032a38a8 with catch @ 032a38b0
                        */
  FUN_01bab8c8();
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x31A39E0]
// HGADMOBFBBF$$WriteTo @ RVA 0x31A39E0

void HGADMOBFBBF__WriteTo
               (HGADMOBFBBF_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
  if ((__this->fields).LHFLMBNKPHF != (KDADMJGPAOM_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).LHFLMBNKPHF,
               (MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== private static void .cctor()  [RVA 0x31A3A48]
// HGADMOBFBBF$$.cctor @ RVA 0x31A3A48

void HGADMOBFBBF___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_HGADMOBFBBF__o *__this;
  
  if ((DAT_04566af2 & 1) == 0) {
    FUN_01bab630(&System_Func<HGADMOBFBBF>_TypeInfo);
    FUN_01bab630(&HGADMOBFBBF_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<HGADMOBFBBF>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<HGADMOBFBBF>_TypeInfo);
    FUN_01bab630(&Method_HGADMOBFBBF_<>c_ICLFIHGKJJH__);
    FUN_01bab630(&HGADMOBFBBF_<>c_TypeInfo);
    DAT_04566af2 = 1;
  }
                    /* try { // try from 032a3aec to 033a3c6f has its CatchHandler @ 032a3aec
                       catch() { ... } // from try @ 032a3aec with catch @ 032a3aec
                       catch() { ... } // from try @ 032a3cf0 with catch @ 032a3aec
                       catch() { ... } // from try @ 032a3d58 with catch @ 032a3aec
                       catch() { ... } // from try @ 032a3d84 with catch @ 032a3aec
                       catch() { ... } // from try @ 032a3db4 with catch @ 032a3aec */
  if ((HGADMOBFBBF_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<HGADMOBFBBF>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_HGADMOBFBBF__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<HGADMOBFBBF>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<HGADMOBFBBF>__ctor__);
  HGADMOBFBBF_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(HGADMOBFBBF_TypeInfo->static_fields,__this);
  return;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x31A3B60]
// HGADMOBFBBF$$FFHIHGCDGAK @ RVA 0x31A3B60

Google_Protobuf_Reflection_MessageDescriptor_o * HGADMOBFBBF__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04566af3 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04566af3 = 1;
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
        pVVar2 = pSVar5->vtable + *piVar7;
        goto LAB_032a3c48;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_032a3c48:
                    /* WARNING: Could not recover jumptable at 0x032a3c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x25,pVVar2->method);
  return pGVar3;
}


// ===== public override string ToString()  [RVA 0x31A3C64]
// HGADMOBFBBF$$ToString @ RVA 0x31A3C64

System_String_o * HGADMOBFBBF__ToString(HGADMOBFBBF_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 032a3c70 to 033a3c77 has its CatchHandler @ 032a3d68 */
  if ((DAT_04566af4 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04566af4 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x31A3CBC]
// HGADMOBFBBF$$MergeFrom @ RVA 0x31A3CBC

void HGADMOBFBBF__MergeFrom
               (HGADMOBFBBF_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  KDADMJGPAOM_o **ppKVar1;
  HGADMOBFBBF_Fields *pHVar2;
  uint32_t uVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  KDADMJGPAOM_o *pKVar5;
  
                    /* try { // try from 032a3ccc to 033a3cef has its CatchHandler @ 032a3d5c */
  if ((DAT_04566af5 & 1) == 0) {
    FUN_01bab630(&KDADMJGPAOM_TypeInfo);
    DAT_04566af5 = 1;
  }
                    /* try { // try from 032a3cf0 to 033a3d4b has its CatchHandler @ 032a3aec */
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    ppKVar1 = &(__this->fields).LHFLMBNKPHF;
    pHVar2 = &__this->fields;
    while( true ) {
      while (uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
            uVar3 == 10) {
        pKVar5 = *ppKVar1;
        if (pKVar5 == (KDADMJGPAOM_o *)0x0) {
                    /* try { // try from 032a3d4c to 033a3d4f has its CatchHandler @ 032a3d60 */
          pKVar5 = (KDADMJGPAOM_o *)thunk_FUN_01bda818(KDADMJGPAOM_TypeInfo);
                    /* try { // try from 032a3d50 to 033a3d57 has its CatchHandler @ 032a3d64 */
                    /* try { // try from 032a3d58 to 033a3d7f has its CatchHandler @ 032a3aec */
          KDADMJGPAOM___ctor(pKVar5,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032a3ccc with catch @ 032a3d5c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032a3d4c with catch @ 032a3d60
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032a3d50 with catch @ 032a3d64
                        */
          *ppKVar1 = pKVar5;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032a3c70 with catch @ 032a3d68
                        */
          thunk_FUN_01c20e04(ppKVar1,pKVar5);
          pKVar5 = *ppKVar1;
        }
        Google_Protobuf_CodedInputStream__ReadMessage
                  (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pKVar5,(MethodInfo *)0x0);
      }
      if (uVar3 == 0) break;
      pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pHVar2->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pHVar2->CKFPENBPNML = pGVar4;
      thunk_FUN_01c20e04(pHVar2,pGVar4);
    }
                    /* try { // try from 032a3d80 to 033a3d83 has its CatchHandler @ 032a3da4 */
                    /* try { // try from 032a3d84 to 033a3dab has its CatchHandler @ 032a3aec */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x31A3D94]
// HGADMOBFBBF$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x31A3D94

Google_Protobuf_Reflection_MessageDescriptor_o *
HGADMOBFBBF__pb__Google_Protobuf_IMessage_get_Descriptor(HGADMOBFBBF_o *__this,MethodInfo *method)

{
  HGADMOBFBBF_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 032a3d80 with catch @ 032a3da4 */
                    /* try { // try from 032a3dac to 033a3db3 has its CatchHandler @ 032a3dc8 */
  if ((DAT_04566af6 & 1) == 0) {
                    /* try { // try from 032a3db4 to 033a3dbf has its CatchHandler @ 032a3aec */
    FUN_01bab630(&HGADMOBFBBF_TypeInfo);
                    /* try { // try from 032a3dc0 to 033a3dc7 has its CatchHandler @ 032a3dc8 */
    DAT_04566af6 = 1;
    method = extraout_x1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032a3dac with catch @ 032a3dc8
                       catch(type#2 @ 00000000) { ... } // from try @ 032a3dc0 with catch @ 032a3dc8
                        */
  method_00 = HGADMOBFBBF_TypeInfo;
  if ((HGADMOBFBBF_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (HGADMOBFBBF_c *)thunk_FUN_01ba7564(HGADMOBFBBF_TypeInfo,method);
  }
  pGVar1 = HGADMOBFBBF__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

