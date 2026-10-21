// TypeDefIndex 1266
// Namespace: 
// public sealed class HCFOFHGNBKP : IMessage<HCFOFHGNBKP>, IMessage, IEquatable<HCFOFHGNBKP>, IDeepCloneable<HCFOFHGNBKP>
// Fields:
//   private static readonly MessageParser<HCFOFHGNBKP> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int EAGIFHOLNEL = 1;
//   private BECIPDJBAOG MJIIHOLHNCK; // 0x18
//   public const int FIAIDCIMNAB = 2;
//   private bool MKEPFPAHEFK; // 0x20

// ===== private static void .cctor()  [RVA 0x314B8F4]
// HCFOFHGNBKP$$.cctor @ RVA 0x314B8F4

void HCFOFHGNBKP___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_HCFOFHGNBKP__o *__this;
  
  if ((DAT_045667c1 & 1) == 0) {
    FUN_01bab630(&System_Func<HCFOFHGNBKP>_TypeInfo);
    FUN_01bab630(&HCFOFHGNBKP_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<HCFOFHGNBKP>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<HCFOFHGNBKP>_TypeInfo);
    FUN_01bab630(&Method_HCFOFHGNBKP_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&HCFOFHGNBKP_<>c_TypeInfo);
    DAT_045667c1 = 1;
  }
  if ((HCFOFHGNBKP_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<HCFOFHGNBKP>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_HCFOFHGNBKP__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<HCFOFHGNBKP>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<HCFOFHGNBKP>__ctor__);
  HCFOFHGNBKP_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(HCFOFHGNBKP_TypeInfo->static_fields,__this);
  return;
}


// ===== public HCFOFHGNBKP Clone()  [RVA 0x314BA0C]
// HCFOFHGNBKP$$Clone @ RVA 0x314BA0C

HCFOFHGNBKP_o * HCFOFHGNBKP__Clone(HCFOFHGNBKP_o *__this,MethodInfo *method)

{
  HCFOFHGNBKP_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045667c2 & 1) == 0) {
    FUN_01bab630(&HCFOFHGNBKP_TypeInfo);
    DAT_045667c2 = 1;
    method = extraout_x1;
  }
  __this_00 = (HCFOFHGNBKP_o *)thunk_FUN_01bda818(HCFOFHGNBKP_TypeInfo,method);
  HCFOFHGNBKP___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public void EICBDNKIGAG(bool CJNHFNHJHPE)  [RVA 0x314BADC]
// HCFOFHGNBKP$$EICBDNKIGAG @ RVA 0x314BADC

void HCFOFHGNBKP__EICBDNKIGAG(HCFOFHGNBKP_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).MKEPFPAHEFK = CJNHFNHJHPE;
  return;
}


// ===== public void .ctor(HCFOFHGNBKP IBKIPBJJCPG)  [RVA 0x314BA64]
// HCFOFHGNBKP$$.ctor @ RVA 0x314BA64

void HCFOFHGNBKP___ctor(HCFOFHGNBKP_o *__this,HCFOFHGNBKP_o *IBKIPBJJCPG,MethodInfo *method)

{
  BECIPDJBAOG_o *pBVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (HCFOFHGNBKP_o *)0x0) {
    pBVar1 = (IBKIPBJJCPG->fields).MJIIHOLHNCK;
    if (pBVar1 == (BECIPDJBAOG_o *)0x0) {
      pBVar1 = (BECIPDJBAOG_o *)0x0;
    }
    else {
      pBVar1 = BECIPDJBAOG__Clone(pBVar1,(MethodInfo *)0x0);
    }
    if (__this != (HCFOFHGNBKP_o *)0x0) {
      (__this->fields).MJIIHOLHNCK = pBVar1;
      thunk_FUN_01c20e04();
      (__this->fields).MKEPFPAHEFK = (IBKIPBJJCPG->fields).MKEPFPAHEFK;
      pGVar2 = Google_Protobuf_UnknownFieldSet__Clone
                         ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      (__this->fields).CKFPENBPNML = pGVar2;
      thunk_FUN_01c20e04(&__this->fields,pGVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x314BAF0]
// HCFOFHGNBKP$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x314BAF0

Google_Protobuf_Reflection_MessageDescriptor_o *
HCFOFHGNBKP__pb__Google_Protobuf_IMessage_get_Descriptor(HCFOFHGNBKP_o *__this,MethodInfo *method)

{
  HCFOFHGNBKP_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045667c3 & 1) == 0) {
    FUN_01bab630(&HCFOFHGNBKP_TypeInfo);
    DAT_045667c3 = 1;
    method = extraout_x1;
  }
  method_00 = HCFOFHGNBKP_TypeInfo;
  if ((HCFOFHGNBKP_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (HCFOFHGNBKP_c *)thunk_FUN_01ba7564(HCFOFHGNBKP_TypeInfo,method);
  }
  pGVar1 = HCFOFHGNBKP__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public override int GetHashCode()  [RVA 0x314BC40]
// HCFOFHGNBKP$$GetHashCode @ RVA 0x314BC40

int32_t HCFOFHGNBKP__GetHashCode(HCFOFHGNBKP_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  BECIPDJBAOG_o *pBVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  
  if ((DAT_045667c4 & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    DAT_045667c4 = 1;
    method = extraout_x1;
  }
  pBVar3 = (__this->fields).MJIIHOLHNCK;
  if (pBVar3 == (BECIPDJBAOG_o *)0x0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (*(pBVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pBVar3,(pBVar3->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar1 ^ 1;
    method = extraout_x1_00;
  }
  if ((__this->fields).MKEPFPAHEFK != false) {
    if ((bool_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(bool_TypeInfo,method);
    }
    uVar2 = System_Boolean__GetHashCode(true,(MethodInfo *)0x0);
    uVar1 = uVar2 ^ uVar1;
  }
  pGVar4 = (__this->fields).CKFPENBPNML;
  if (pGVar4 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    uVar2 = (*(pGVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar4,(pGVar4->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  return uVar1;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x314BB3C]
// HCFOFHGNBKP$$FFHIHGCDGAK @ RVA 0x314BB3C

Google_Protobuf_Reflection_MessageDescriptor_o * HCFOFHGNBKP__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_045667c5 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_045667c5 = 1;
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
        goto LAB_0324bc24;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_0324bc24:
                    /* WARNING: Could not recover jumptable at 0x0324bc38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x20,pVVar2->method);
  return pGVar3;
}


// ===== public void MergeFrom(HCFOFHGNBKP IBKIPBJJCPG)  [RVA 0x314BCF0]
// HCFOFHGNBKP$$MergeFrom @ RVA 0x314BCF0

void HCFOFHGNBKP__MergeFrom(HCFOFHGNBKP_o *__this,HCFOFHGNBKP_o *IBKIPBJJCPG,MethodInfo *method)

{
  BECIPDJBAOG_o *pBVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  HCFOFHGNBKP_Fields *pHVar3;
  BECIPDJBAOG_o **ppBVar4;
  
  if ((DAT_045667c6 & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    DAT_045667c6 = 1;
  }
  if (IBKIPBJJCPG != (HCFOFHGNBKP_o *)0x0) {
    if ((IBKIPBJJCPG->fields).MJIIHOLHNCK != (BECIPDJBAOG_o *)0x0) {
      ppBVar4 = &(__this->fields).MJIIHOLHNCK;
      pBVar1 = *ppBVar4;
      if (pBVar1 == (BECIPDJBAOG_o *)0x0) {
        pBVar1 = (BECIPDJBAOG_o *)thunk_FUN_01bda818(BECIPDJBAOG_TypeInfo);
        BECIPDJBAOG___ctor(pBVar1,(MethodInfo *)0x0);
        *ppBVar4 = pBVar1;
        thunk_FUN_01c20e04(ppBVar4,pBVar1);
        pBVar1 = *ppBVar4;
        if (pBVar1 == (BECIPDJBAOG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
      BECIPDJBAOG__MergeFrom(pBVar1,(IBKIPBJJCPG->fields).MJIIHOLHNCK,(MethodInfo *)0x0);
    }
    if ((IBKIPBJJCPG->fields).MKEPFPAHEFK != false) {
      (__this->fields).MKEPFPAHEFK = true;
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


// ===== public void EAAABDOJHNI(BECIPDJBAOG CJNHFNHJHPE)  [RVA 0x314BDCC]
// HCFOFHGNBKP$$EAAABDOJHNI @ RVA 0x314BDCC

void HCFOFHGNBKP__EAAABDOJHNI(HCFOFHGNBKP_o *__this,BECIPDJBAOG_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).MJIIHOLHNCK = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public override string ToString()  [RVA 0x314BDD4]
// HCFOFHGNBKP$$ToString @ RVA 0x314BDD4

System_String_o * HCFOFHGNBKP__ToString(HCFOFHGNBKP_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045667c7 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_045667c7 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public bool NOMFLDMEKPO()  [RVA 0x314BE2C]
// HCFOFHGNBKP$$NOMFLDMEKPO @ RVA 0x314BE2C

bool HCFOFHGNBKP__NOMFLDMEKPO(HCFOFHGNBKP_o *__this,MethodInfo *method)

{
  return (__this->fields).MKEPFPAHEFK;
}


// ===== public int CalculateSize()  [RVA 0x314BE34]
// HCFOFHGNBKP$$CalculateSize @ RVA 0x314BE34

int32_t HCFOFHGNBKP__CalculateSize(HCFOFHGNBKP_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  BECIPDJBAOG_o *value;
  
  if ((DAT_045667c8 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_045667c8 = 1;
    method = extraout_x1;
  }
  value = (__this->fields).MJIIHOLHNCK;
  if (value == (BECIPDJBAOG_o *)0x0) {
    iVar2 = 0;
  }
  else {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if ((__this->fields).MKEPFPAHEFK != false) {
    iVar2 = iVar2 + 2;
  }
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
    iVar2 = iVar1 + iVar2;
  }
  return iVar2;
}


// ===== public void .ctor()  [RVA 0x314BAE8]
// HCFOFHGNBKP$$.ctor @ RVA 0x314BAE8

void HCFOFHGNBKP___ctor(HCFOFHGNBKP_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x314BECC]
// HCFOFHGNBKP$$MergeFrom @ RVA 0x314BECC

void HCFOFHGNBKP__MergeFrom
               (HCFOFHGNBKP_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  BECIPDJBAOG_o **ppBVar1;
  HCFOFHGNBKP_Fields *pHVar2;
  bool bVar3;
  uint32_t uVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  BECIPDJBAOG_o *pBVar6;
  
  if ((DAT_045667c9 & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    DAT_045667c9 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    ppBVar1 = &(__this->fields).MJIIHOLHNCK;
    pHVar2 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar4 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar4 == 10) {
          pBVar6 = *ppBVar1;
          if (pBVar6 == (BECIPDJBAOG_o *)0x0) {
            pBVar6 = (BECIPDJBAOG_o *)thunk_FUN_01bda818(BECIPDJBAOG_TypeInfo);
            BECIPDJBAOG___ctor(pBVar6,(MethodInfo *)0x0);
            *ppBVar1 = pBVar6;
            thunk_FUN_01c20e04(ppBVar1,pBVar6);
            pBVar6 = *ppBVar1;
          }
          Google_Protobuf_CodedInputStream__ReadMessage
                    (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pBVar6,(MethodInfo *)0x0);
        }
        if (uVar4 != 0x10) break;
        bVar3 = Google_Protobuf_CodedInputStream__ReadBool(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).MKEPFPAHEFK = bVar3;
      }
      if (uVar4 == 0) break;
      pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pHVar2->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pHVar2->CKFPENBPNML = pGVar5;
      thunk_FUN_01c20e04(pHVar2,pGVar5);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x314BFCC]
// HCFOFHGNBKP$$Equals @ RVA 0x314BFCC

bool HCFOFHGNBKP__Equals(HCFOFHGNBKP_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045667ca & 1) == 0) {
    FUN_01bab630(&HCFOFHGNBKP_TypeInfo);
    DAT_045667ca = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)HCFOFHGNBKP_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = HCFOFHGNBKP__Equals(__this,(HCFOFHGNBKP_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public bool Equals(HCFOFHGNBKP IBKIPBJJCPG)  [RVA 0x314C030]
// HCFOFHGNBKP$$Equals @ RVA 0x314C030

bool HCFOFHGNBKP__Equals(HCFOFHGNBKP_o *__this,HCFOFHGNBKP_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (HCFOFHGNBKP_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_Object__Equals
                      ((Il2CppObject *)(__this->fields).MJIIHOLHNCK,
                       (Il2CppObject *)(IBKIPBJJCPG->fields).MJIIHOLHNCK,(MethodInfo *)0x0);
    if ((bVar1) &&
       (((__this->fields).MKEPFPAHEFK != false) == ((IBKIPBJJCPG->fields).MKEPFPAHEFK != false))) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public BECIPDJBAOG NNAKKCHDFAN()  [RVA 0x314C0B0]
// HCFOFHGNBKP$$NNAKKCHDFAN @ RVA 0x314C0B0

BECIPDJBAOG_o * HCFOFHGNBKP__NNAKKCHDFAN(HCFOFHGNBKP_o *__this,MethodInfo *method)

{
  return (__this->fields).MJIIHOLHNCK;
}


// ===== public static MessageParser<HCFOFHGNBKP> PGCAHPDCJBC()  [RVA 0x314C0B8]
// HCFOFHGNBKP$$PGCAHPDCJBC @ RVA 0x314C0B8

Google_Protobuf_MessageParser_HCFOFHGNBKP__o * HCFOFHGNBKP__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_045667cb & 1) == 0) {
    FUN_01bab630(&HCFOFHGNBKP_TypeInfo);
    DAT_045667cb = 1;
  }
  if ((HCFOFHGNBKP_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return HCFOFHGNBKP_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x314C110]
// HCFOFHGNBKP$$WriteTo @ RVA 0x314C110

void HCFOFHGNBKP__WriteTo
               (HCFOFHGNBKP_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
  if ((__this->fields).MJIIHOLHNCK != (BECIPDJBAOG_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0324c1a0;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).MJIIHOLHNCK,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).MKEPFPAHEFK != false) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_0324c1a0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteBool
              (JBGJLELBMJF,(__this->fields).MKEPFPAHEFK,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
  return;
}

