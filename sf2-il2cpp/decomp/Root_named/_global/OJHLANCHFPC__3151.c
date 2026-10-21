// TypeDefIndex 3151
// Namespace: 
// public sealed class OJHLANCHFPC : IMessage<OJHLANCHFPC>, IMessage, IEquatable<OJHLANCHFPC>, IDeepCloneable<OJHLANCHFPC>
// Fields:
//   private static readonly MessageParser<OJHLANCHFPC> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int MCJLJOEAMNO = 1;
//   private AADKBCFCLKK PKIDDHNAOAC; // 0x18
//   public const int FHBKDHIFKHM = 2;
//   private PGICCMFLDPI OBKCJGGIEMF; // 0x20

// ===== private static void .cctor()  [RVA 0x34D8D28]
// OJHLANCHFPC$$.cctor @ RVA 0x34D8D28

void OJHLANCHFPC___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_OJHLANCHFPC__o *__this;
  
  if ((DAT_045686f4 & 1) == 0) {
    FUN_01bab630(&System_Func<OJHLANCHFPC>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<OJHLANCHFPC>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<OJHLANCHFPC>_TypeInfo);
    FUN_01bab630(&OJHLANCHFPC_TypeInfo);
    FUN_01bab630(&Method_OJHLANCHFPC_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&OJHLANCHFPC_<>c_TypeInfo);
    DAT_045686f4 = 1;
  }
  if ((OJHLANCHFPC_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<OJHLANCHFPC>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_OJHLANCHFPC__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<OJHLANCHFPC>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<OJHLANCHFPC>__ctor__);
  OJHLANCHFPC_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(OJHLANCHFPC_TypeInfo->static_fields,__this);
  return;
}


// ===== public void EOAPIKJCIMD(PGICCMFLDPI CJNHFNHJHPE)  [RVA 0x34D8E40]
// OJHLANCHFPC$$EOAPIKJCIMD @ RVA 0x34D8E40

void OJHLANCHFPC__EOAPIKJCIMD(OJHLANCHFPC_o *__this,PGICCMFLDPI_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).OBKCJGGIEMF = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void .ctor()  [RVA 0x34D8E48]
// OJHLANCHFPC$$.ctor @ RVA 0x34D8E48

void OJHLANCHFPC___ctor(OJHLANCHFPC_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor(OJHLANCHFPC IBKIPBJJCPG)  [RVA 0x34D8E50]
// OJHLANCHFPC$$.ctor @ RVA 0x34D8E50

void OJHLANCHFPC___ctor(OJHLANCHFPC_o *__this,OJHLANCHFPC_o *IBKIPBJJCPG,MethodInfo *method)

{
  AADKBCFCLKK_o *pAVar1;
  PGICCMFLDPI_o *pPVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (OJHLANCHFPC_o *)0x0) {
    pAVar1 = (IBKIPBJJCPG->fields).PKIDDHNAOAC;
    if (pAVar1 == (AADKBCFCLKK_o *)0x0) {
      pAVar1 = (AADKBCFCLKK_o *)0x0;
    }
    else {
      pAVar1 = AADKBCFCLKK__Clone(pAVar1,(MethodInfo *)0x0);
    }
    if (__this != (OJHLANCHFPC_o *)0x0) {
      (__this->fields).PKIDDHNAOAC = pAVar1;
      thunk_FUN_01c20e04();
      pPVar2 = (IBKIPBJJCPG->fields).OBKCJGGIEMF;
      if (pPVar2 == (PGICCMFLDPI_o *)0x0) {
        pPVar2 = (PGICCMFLDPI_o *)0x0;
      }
      else {
        pPVar2 = PGICCMFLDPI__Clone(pPVar2,(MethodInfo *)0x0);
      }
      (__this->fields).OBKCJGGIEMF = pPVar2;
      thunk_FUN_01c20e04();
      pGVar3 = Google_Protobuf_UnknownFieldSet__Clone
                         ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      (__this->fields).CKFPENBPNML = pGVar3;
      thunk_FUN_01c20e04(&__this->fields,pGVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x34D8EE8]
// OJHLANCHFPC$$Equals @ RVA 0x34D8EE8

bool OJHLANCHFPC__Equals(OJHLANCHFPC_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045686f5 & 1) == 0) {
    FUN_01bab630(&OJHLANCHFPC_TypeInfo);
    DAT_045686f5 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)OJHLANCHFPC_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = OJHLANCHFPC__Equals(__this,(OJHLANCHFPC_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public static MessageParser<OJHLANCHFPC> PGCAHPDCJBC()  [RVA 0x34D8FC0]
// OJHLANCHFPC$$PGCAHPDCJBC @ RVA 0x34D8FC0

Google_Protobuf_MessageParser_OJHLANCHFPC__o * OJHLANCHFPC__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_045686f6 & 1) == 0) {
    FUN_01bab630(&OJHLANCHFPC_TypeInfo);
    DAT_045686f6 = 1;
  }
  if ((OJHLANCHFPC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return OJHLANCHFPC_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public OJHLANCHFPC Clone()  [RVA 0x34D9018]
// OJHLANCHFPC$$Clone @ RVA 0x34D9018

OJHLANCHFPC_o * OJHLANCHFPC__Clone(OJHLANCHFPC_o *__this,MethodInfo *method)

{
  OJHLANCHFPC_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045686f7 & 1) == 0) {
    FUN_01bab630(&OJHLANCHFPC_TypeInfo);
    DAT_045686f7 = 1;
    method = extraout_x1;
  }
  __this_00 = (OJHLANCHFPC_o *)thunk_FUN_01bda818(OJHLANCHFPC_TypeInfo,method);
  OJHLANCHFPC___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x34D9070]
// OJHLANCHFPC$$FFHIHGCDGAK @ RVA 0x34D9070

Google_Protobuf_Reflection_MessageDescriptor_o * OJHLANCHFPC__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_045686f8 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_045686f8 = 1;
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
        goto LAB_035d9158;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_035d9158:
                    /* WARNING: Could not recover jumptable at 0x035d916c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x23,pVVar2->method);
  return pGVar3;
}


// ===== public void MergeFrom(OJHLANCHFPC IBKIPBJJCPG)  [RVA 0x34D9174]
// OJHLANCHFPC$$MergeFrom @ RVA 0x34D9174

void OJHLANCHFPC__MergeFrom(OJHLANCHFPC_o *__this,OJHLANCHFPC_o *IBKIPBJJCPG,MethodInfo *method)

{
  AADKBCFCLKK_o *pAVar1;
  PGICCMFLDPI_o *pPVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  OJHLANCHFPC_Fields *pOVar4;
  AADKBCFCLKK_o **ppAVar5;
  PGICCMFLDPI_o **ppPVar6;
  
  if ((DAT_045686f9 & 1) == 0) {
    FUN_01bab630(&AADKBCFCLKK_TypeInfo);
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_045686f9 = 1;
  }
  if (IBKIPBJJCPG == (OJHLANCHFPC_o *)0x0) {
    return;
  }
  if ((IBKIPBJJCPG->fields).PKIDDHNAOAC != (AADKBCFCLKK_o *)0x0) {
    ppAVar5 = &(__this->fields).PKIDDHNAOAC;
    pAVar1 = *ppAVar5;
    if (pAVar1 == (AADKBCFCLKK_o *)0x0) {
      pAVar1 = (AADKBCFCLKK_o *)thunk_FUN_01bda818(AADKBCFCLKK_TypeInfo);
      AADKBCFCLKK___ctor(pAVar1,(MethodInfo *)0x0);
      *ppAVar5 = pAVar1;
      thunk_FUN_01c20e04(ppAVar5,pAVar1);
      pAVar1 = *ppAVar5;
      if (pAVar1 == (AADKBCFCLKK_o *)0x0) goto LAB_035d929c;
    }
    AADKBCFCLKK__MergeFrom(pAVar1,(IBKIPBJJCPG->fields).PKIDDHNAOAC,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).OBKCJGGIEMF != (PGICCMFLDPI_o *)0x0) {
    ppPVar6 = &(__this->fields).OBKCJGGIEMF;
    pPVar2 = *ppPVar6;
    if (pPVar2 == (PGICCMFLDPI_o *)0x0) {
      pPVar2 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
      PGICCMFLDPI___ctor(pPVar2,(MethodInfo *)0x0);
      *ppPVar6 = pPVar2;
      thunk_FUN_01c20e04(ppPVar6,pPVar2);
      pPVar2 = *ppPVar6;
      if (pPVar2 == (PGICCMFLDPI_o *)0x0) {
LAB_035d929c:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
    PGICCMFLDPI__MergeFrom(pPVar2,(IBKIPBJJCPG->fields).OBKCJGGIEMF,(MethodInfo *)0x0);
  }
  pOVar4 = &__this->fields;
  pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFrom
                     (pOVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
  pOVar4->CKFPENBPNML = pGVar3;
  thunk_FUN_01c20e04(pOVar4,pGVar3);
  return;
}


// ===== public override int GetHashCode()  [RVA 0x34D92A0]
// OJHLANCHFPC$$GetHashCode @ RVA 0x34D92A0

int32_t OJHLANCHFPC__GetHashCode(OJHLANCHFPC_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  AADKBCFCLKK_o *pAVar3;
  PGICCMFLDPI_o *pPVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  
  pAVar3 = (__this->fields).PKIDDHNAOAC;
  if (pAVar3 == (AADKBCFCLKK_o *)0x0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (*(pAVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pAVar3,(pAVar3->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar1 ^ 1;
  }
  pPVar4 = (__this->fields).OBKCJGGIEMF;
  if (pPVar4 != (PGICCMFLDPI_o *)0x0) {
    uVar2 = (*(pPVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pPVar4,(pPVar4->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  pGVar5 = (__this->fields).CKFPENBPNML;
  if (pGVar5 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    uVar2 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  return uVar1;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x34D930C]
// OJHLANCHFPC$$MergeFrom @ RVA 0x34D930C

void OJHLANCHFPC__MergeFrom
               (OJHLANCHFPC_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  PGICCMFLDPI_o **ppPVar1;
  AADKBCFCLKK_o **ppAVar2;
  OJHLANCHFPC_Fields *pOVar3;
  uint32_t uVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  PGICCMFLDPI_o *__this_00;
  AADKBCFCLKK_o *pAVar6;
  
  if ((DAT_045686fa & 1) == 0) {
    FUN_01bab630(&AADKBCFCLKK_TypeInfo);
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_045686fa = 1;
  }
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  ppPVar1 = &(__this->fields).OBKCJGGIEMF;
  ppAVar2 = &(__this->fields).PKIDDHNAOAC;
  pOVar3 = &__this->fields;
LAB_035d9370:
  do {
    uVar4 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    if (uVar4 == 10) {
      pAVar6 = *ppAVar2;
      if (pAVar6 == (AADKBCFCLKK_o *)0x0) {
        pAVar6 = (AADKBCFCLKK_o *)thunk_FUN_01bda818(AADKBCFCLKK_TypeInfo);
        AADKBCFCLKK___ctor(pAVar6,(MethodInfo *)0x0);
        *ppAVar2 = pAVar6;
        thunk_FUN_01c20e04(ppAVar2,pAVar6);
        pAVar6 = *ppAVar2;
      }
    }
    else {
      if (uVar4 != 0x12) {
        if (uVar4 == 0) {
          return;
        }
        pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                           (pOVar3->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
        pOVar3->CKFPENBPNML = pGVar5;
        thunk_FUN_01c20e04(pOVar3,pGVar5);
        goto LAB_035d9370;
      }
      pAVar6 = (AADKBCFCLKK_o *)*ppPVar1;
      if (pAVar6 == (AADKBCFCLKK_o *)0x0) {
        __this_00 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
        PGICCMFLDPI___ctor(__this_00,(MethodInfo *)0x0);
        *ppPVar1 = __this_00;
        thunk_FUN_01c20e04(ppPVar1,__this_00);
        pAVar6 = (AADKBCFCLKK_o *)*ppPVar1;
      }
    }
    Google_Protobuf_CodedInputStream__ReadMessage
              (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pAVar6,(MethodInfo *)0x0);
  } while( true );
}


// ===== public bool Equals(OJHLANCHFPC IBKIPBJJCPG)  [RVA 0x34D8F4C]
// OJHLANCHFPC$$Equals @ RVA 0x34D8F4C

bool OJHLANCHFPC__Equals(OJHLANCHFPC_o *__this,OJHLANCHFPC_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (OJHLANCHFPC_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_Object__Equals
                      ((Il2CppObject *)(__this->fields).PKIDDHNAOAC,
                       (Il2CppObject *)(IBKIPBJJCPG->fields).PKIDDHNAOAC,(MethodInfo *)0x0);
    if ((bVar1) &&
       (bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).OBKCJGGIEMF,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).OBKCJGGIEMF,(MethodInfo *)0x0),
       bVar1)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public void BNDEINIBMDP(AADKBCFCLKK CJNHFNHJHPE)  [RVA 0x34D9440]
// OJHLANCHFPC$$BNDEINIBMDP @ RVA 0x34D9440

void OJHLANCHFPC__BNDEINIBMDP(OJHLANCHFPC_o *__this,AADKBCFCLKK_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).PKIDDHNAOAC = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x34D9448]
// OJHLANCHFPC$$WriteTo @ RVA 0x34D9448

void OJHLANCHFPC__WriteTo
               (OJHLANCHFPC_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
  if ((__this->fields).PKIDDHNAOAC != (AADKBCFCLKK_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_035d94d8;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).PKIDDHNAOAC,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).OBKCJGGIEMF != (PGICCMFLDPI_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_035d94d8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).OBKCJGGIEMF,
               (MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public override string ToString()  [RVA 0x34D94DC]
// OJHLANCHFPC$$ToString @ RVA 0x34D94DC

System_String_o * OJHLANCHFPC__ToString(OJHLANCHFPC_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045686fb & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_045686fb = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public int CalculateSize()  [RVA 0x34D9534]
// OJHLANCHFPC$$CalculateSize @ RVA 0x34D9534

int32_t OJHLANCHFPC__CalculateSize(OJHLANCHFPC_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  AADKBCFCLKK_o *value;
  PGICCMFLDPI_o *value_00;
  
  if ((DAT_045686fc & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_045686fc = 1;
    method = extraout_x1;
  }
  value = (__this->fields).PKIDDHNAOAC;
  iVar2 = 0;
  if (value != (AADKBCFCLKK_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  value_00 = (__this->fields).OBKCJGGIEMF;
  if (value_00 != (PGICCMFLDPI_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value_00,(MethodInfo *)0x0);
    iVar2 = iVar2 + iVar1 + 1;
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
    iVar2 = iVar1 + iVar2;
  }
  return iVar2;
}


// ===== public PGICCMFLDPI GJAMLPCIDGC()  [RVA 0x34D95E8]
// OJHLANCHFPC$$GJAMLPCIDGC @ RVA 0x34D95E8

PGICCMFLDPI_o * OJHLANCHFPC__GJAMLPCIDGC(OJHLANCHFPC_o *__this,MethodInfo *method)

{
  return (__this->fields).OBKCJGGIEMF;
}


// ===== public AADKBCFCLKK GLIKBDJEDOL()  [RVA 0x34D95F0]
// OJHLANCHFPC$$GLIKBDJEDOL @ RVA 0x34D95F0

AADKBCFCLKK_o * OJHLANCHFPC__GLIKBDJEDOL(OJHLANCHFPC_o *__this,MethodInfo *method)

{
  return (__this->fields).PKIDDHNAOAC;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x34D95F8]
// OJHLANCHFPC$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x34D95F8

Google_Protobuf_Reflection_MessageDescriptor_o *
OJHLANCHFPC__pb__Google_Protobuf_IMessage_get_Descriptor(OJHLANCHFPC_o *__this,MethodInfo *method)

{
  OJHLANCHFPC_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045686fd & 1) == 0) {
    FUN_01bab630(&OJHLANCHFPC_TypeInfo);
    DAT_045686fd = 1;
    method = extraout_x1;
  }
  method_00 = OJHLANCHFPC_TypeInfo;
  if ((OJHLANCHFPC_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (OJHLANCHFPC_c *)thunk_FUN_01ba7564(OJHLANCHFPC_TypeInfo,method);
  }
  pGVar1 = OJHLANCHFPC__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

