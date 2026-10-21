// TypeDefIndex 2387
// Namespace: 
// public sealed class JCFJFJCKLKG : IMessage<JCFJFJCKLKG>, IMessage, IEquatable<JCFJFJCKLKG>, IDeepCloneable<JCFJFJCKLKG>
// Fields:
//   private static readonly MessageParser<JCFJFJCKLKG> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int NOFHGLLGLLE = 1;
//   private int PDOMCPONBNB; // 0x18
//   public const int PIEIALKMIHA = 2;
//   private static readonly FieldCodec<ICPMLKOEANF> HCFIGOCMMPG; // 0x8
//   private readonly RepeatedField<ICPMLKOEANF> LFOCACIGEFK; // 0x20

// ===== public void .ctor(JCFJFJCKLKG IBKIPBJJCPG)  [RVA 0x33313F0]
// JCFJFJCKLKG$$.ctor @ RVA 0x33313F0

void JCFJFJCKLKG___ctor(JCFJFJCKLKG_o *__this,JCFJFJCKLKG_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o *pGVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_04567908 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_Clone__);
    DAT_04567908 = 1;
    method_00 = extraout_x1;
  }
  JCFJFJCKLKG___ctor(__this,method_00);
  if (IBKIPBJJCPG != (JCFJFJCKLKG_o *)0x0) {
    (__this->fields).PDOMCPONBNB = (IBKIPBJJCPG->fields).PDOMCPONBNB;
    pGVar1 = (IBKIPBJJCPG->fields).LFOCACIGEFK;
    if (pGVar1 != (Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o *)0x0) {
      pGVar1 = (Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o *)
               Google_Protobuf_Collections_RepeatedField<object>__Clone
                         ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar1,
                          Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_Clone__);
      (__this->fields).LFOCACIGEFK = pGVar1;
      thunk_FUN_01c20e04();
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


// ===== public int CalculateSize()  [RVA 0x333150C]
// JCFJFJCKLKG$$CalculateSize @ RVA 0x333150C

int32_t JCFJFJCKLKG__CalculateSize(JCFJFJCKLKG_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *extraout_x1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o *__this_01;
  int iVar2;
  
  if ((DAT_04567909 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    FUN_01bab630(&JCFJFJCKLKG_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_CalculateSize__);
    DAT_04567909 = 1;
    method = extraout_x1;
  }
  iVar2 = (__this->fields).PDOMCPONBNB;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar2,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  __this_01 = (__this->fields).LFOCACIGEFK;
  if ((JCFJFJCKLKG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o *)0x0) {
    iVar1 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                       (Google_Protobuf_FieldCodec_T__o *)
                       JCFJFJCKLKG_TypeInfo->static_fields->HCFIGOCMMPG,
                       Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_CalculateSize__
                      );
    __this_00 = (__this->fields).CKFPENBPNML;
    iVar2 = iVar1 + iVar2;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
      iVar2 = iVar1 + iVar2;
    }
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override string ToString()  [RVA 0x3331600]
// JCFJFJCKLKG$$ToString @ RVA 0x3331600

System_String_o * JCFJFJCKLKG__ToString(JCFJFJCKLKG_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456790a & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_0456790a = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x3331658]
// JCFJFJCKLKG$$MergeFrom @ RVA 0x3331658

void JCFJFJCKLKG__MergeFrom
               (JCFJFJCKLKG_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  JCFJFJCKLKG_Fields *pJVar1;
  uint32_t uVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o *__this_00;
  
  if ((DAT_0456790b & 1) == 0) {
    FUN_01bab630(&JCFJFJCKLKG_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_AddEntriesFrom__);
    DAT_0456790b = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pJVar1 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar2 == 8) {
          iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).PDOMCPONBNB = iVar3;
        }
        if (uVar2 == 0x12) break;
        if (uVar2 == 0) {
          return;
        }
        pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                           (pJVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
        pJVar1->CKFPENBPNML = pGVar4;
        thunk_FUN_01c20e04(pJVar1,pGVar4);
      }
      __this_00 = (__this->fields).LFOCACIGEFK;
      if ((JCFJFJCKLKG_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o *)0x0) break;
      Google_Protobuf_Collections_RepeatedField<object>__AddEntriesFrom
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,AIGOBLJEBCA,
                 (Google_Protobuf_FieldCodec_T__o *)JCFJFJCKLKG_TypeInfo->static_fields->HCFIGOCMMPG
                 ,Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_AddEntriesFrom__);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void EMKELMJKKLO(int CJNHFNHJHPE)  [RVA 0x333175C]
// JCFJFJCKLKG$$EMKELMJKKLO @ RVA 0x333175C

void JCFJFJCKLKG__EMKELMJKKLO(JCFJFJCKLKG_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).PDOMCPONBNB = CJNHFNHJHPE;
  return;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x3331764]
// JCFJFJCKLKG$$FFHIHGCDGAK @ RVA 0x3331764

Google_Protobuf_Reflection_MessageDescriptor_o * JCFJFJCKLKG__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_0456790c & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_0456790c = 1;
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
        goto LAB_0343184c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_0343184c:
                    /* WARNING: Could not recover jumptable at 0x03431860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x17,pVVar2->method);
  return pGVar3;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x3331868]
// JCFJFJCKLKG$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3331868

Google_Protobuf_Reflection_MessageDescriptor_o *
JCFJFJCKLKG__pb__Google_Protobuf_IMessage_get_Descriptor(JCFJFJCKLKG_o *__this,MethodInfo *method)

{
  JCFJFJCKLKG_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456790d & 1) == 0) {
    FUN_01bab630(&JCFJFJCKLKG_TypeInfo);
    DAT_0456790d = 1;
    method = extraout_x1;
  }
  method_00 = JCFJFJCKLKG_TypeInfo;
  if ((JCFJFJCKLKG_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (JCFJFJCKLKG_c *)thunk_FUN_01ba7564(JCFJFJCKLKG_TypeInfo,method);
  }
  pGVar1 = JCFJFJCKLKG__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public void MergeFrom(JCFJFJCKLKG IBKIPBJJCPG)  [RVA 0x33318B4]
// JCFJFJCKLKG$$MergeFrom @ RVA 0x33318B4

void JCFJFJCKLKG__MergeFrom(JCFJFJCKLKG_o *__this,JCFJFJCKLKG_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  JCFJFJCKLKG_Fields *pJVar3;
  
  if ((DAT_0456790e & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_Add__);
    DAT_0456790e = 1;
  }
  if (IBKIPBJJCPG == (JCFJFJCKLKG_o *)0x0) {
    return;
  }
  iVar1 = (IBKIPBJJCPG->fields).PDOMCPONBNB;
  if (iVar1 != 0) {
    (__this->fields).PDOMCPONBNB = iVar1;
  }
  __this_00 = (__this->fields).LFOCACIGEFK;
  if (__this_00 != (Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__Add
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).LFOCACIGEFK,
               Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_Add__);
    pJVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pJVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pJVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pJVar3,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override int GetHashCode()  [RVA 0x3331948]
// JCFJFJCKLKG$$GetHashCode @ RVA 0x3331948

int32_t JCFJFJCKLKG__GetHashCode(JCFJFJCKLKG_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o *pGVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  int local_14;
  
  local_14 = 0;
  iVar1 = (__this->fields).PDOMCPONBNB;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    local_14 = iVar1;
    uVar2 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  pGVar4 = (__this->fields).LFOCACIGEFK;
  if (pGVar4 != (Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o *)0x0) {
    uVar3 = (*(pGVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar4,(pGVar4->klass->vtable)._2_GetHashCode.method);
    pGVar5 = (__this->fields).CKFPENBPNML;
    uVar3 = uVar3 ^ uVar2;
    if (pGVar5 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      uVar2 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
      uVar3 = uVar2 ^ uVar3;
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static MessageParser<JCFJFJCKLKG> PGCAHPDCJBC()  [RVA 0x33319C4]
// JCFJFJCKLKG$$PGCAHPDCJBC @ RVA 0x33319C4

Google_Protobuf_MessageParser_JCFJFJCKLKG__o * JCFJFJCKLKG__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_0456790f & 1) == 0) {
    FUN_01bab630(&JCFJFJCKLKG_TypeInfo);
    DAT_0456790f = 1;
  }
  if ((JCFJFJCKLKG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return JCFJFJCKLKG_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public bool Equals(JCFJFJCKLKG IBKIPBJJCPG)  [RVA 0x3331A1C]
// JCFJFJCKLKG$$Equals @ RVA 0x3331A1C

bool JCFJFJCKLKG__Equals(JCFJFJCKLKG_o *__this,JCFJFJCKLKG_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o *__this_00;
  
  if ((DAT_04567910 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_Equals__);
    DAT_04567910 = 1;
  }
  if (IBKIPBJJCPG != (JCFJFJCKLKG_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if ((__this->fields).PDOMCPONBNB == (IBKIPBJJCPG->fields).PDOMCPONBNB) {
      __this_00 = (__this->fields).LFOCACIGEFK;
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                        ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                         (Google_Protobuf_Collections_RepeatedField_T__o *)
                         (IBKIPBJJCPG->fields).LFOCACIGEFK,
                         Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_Equals__);
      if (bVar1) {
        bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
  return false;
}


// ===== public void .ctor()  [RVA 0x3331484]
// JCFJFJCKLKG$$.ctor @ RVA 0x3331484

void JCFJFJCKLKG___ctor(JCFJFJCKLKG_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o **ppGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567911 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_TypeInfo);
    DAT_04567911 = 1;
    method = extraout_x1;
  }
  __this_00 = (Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_TypeInfo,
                                 method);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
             Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>__ctor__);
  ppGVar1 = &(__this->fields).LFOCACIGEFK;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x3331ABC]
// JCFJFJCKLKG$$WriteTo @ RVA 0x3331ABC

void JCFJFJCKLKG__WriteTo
               (JCFJFJCKLKG_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o *__this_01;
  
  if ((DAT_04567912 & 1) == 0) {
    FUN_01bab630(&JCFJFJCKLKG_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_WriteTo__);
    DAT_04567912 = 1;
  }
  if ((__this->fields).PDOMCPONBNB != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03431b9c;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).PDOMCPONBNB,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).LFOCACIGEFK;
  if ((JCFJFJCKLKG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__WriteTo
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,JBGJLELBMJF,
               (Google_Protobuf_FieldCodec_T__o *)JCFJFJCKLKG_TypeInfo->static_fields->HCFIGOCMMPG,
               Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_WriteTo__);
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_03431b9c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public JCFJFJCKLKG Clone()  [RVA 0x3331BA0]
// JCFJFJCKLKG$$Clone @ RVA 0x3331BA0

JCFJFJCKLKG_o * JCFJFJCKLKG__Clone(JCFJFJCKLKG_o *__this,MethodInfo *method)

{
  JCFJFJCKLKG_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04567913 & 1) == 0) {
    FUN_01bab630(&JCFJFJCKLKG_TypeInfo);
    DAT_04567913 = 1;
    method = extraout_x1;
  }
  __this_00 = (JCFJFJCKLKG_o *)thunk_FUN_01bda818(JCFJFJCKLKG_TypeInfo,method);
  JCFJFJCKLKG___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public RepeatedField<ICPMLKOEANF> FAABNBIPNPN()  [RVA 0x3331BF8]
// JCFJFJCKLKG$$FAABNBIPNPN @ RVA 0x3331BF8

Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o *
JCFJFJCKLKG__FAABNBIPNPN(JCFJFJCKLKG_o *__this,MethodInfo *method)

{
  return (__this->fields).LFOCACIGEFK;
}


// ===== public int JMAMKPDNING()  [RVA 0x3331C00]
// JCFJFJCKLKG$$JMAMKPDNING @ RVA 0x3331C00

int32_t JCFJFJCKLKG__JMAMKPDNING(JCFJFJCKLKG_o *__this,MethodInfo *method)

{
  return (__this->fields).PDOMCPONBNB;
}


// ===== private static void .cctor()  [RVA 0x3331C08]
// JCFJFJCKLKG$$.cctor @ RVA 0x3331C08

void JCFJFJCKLKG___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_JCFJFJCKLKG__o *__this;
  Google_Protobuf_FieldCodec_ICPMLKOEANF__o *pGVar1;
  Google_Protobuf_FieldCodec_ICPMLKOEANF__o **ppGVar2;
  
  if ((DAT_04567914 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForMessage<ICPMLKOEANF>__);
    FUN_01bab630(&System_Func<JCFJFJCKLKG>_TypeInfo);
    FUN_01bab630(&ICPMLKOEANF_TypeInfo);
    FUN_01bab630(&JCFJFJCKLKG_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<JCFJFJCKLKG>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<JCFJFJCKLKG>_TypeInfo);
    FUN_01bab630(&Method_JCFJFJCKLKG_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&JCFJFJCKLKG_<>c_TypeInfo);
    DAT_04567914 = 1;
  }
  if ((JCFJFJCKLKG_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<JCFJFJCKLKG>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_JCFJFJCKLKG__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<JCFJFJCKLKG>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<JCFJFJCKLKG>__ctor__);
  JCFJFJCKLKG_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(JCFJFJCKLKG_TypeInfo->static_fields,__this);
  if ((ICPMLKOEANF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_045679bd == '\0') {
    FUN_01bab630(&ICPMLKOEANF_TypeInfo);
    DAT_045679bd = '\x01';
  }
  if ((ICPMLKOEANF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar1 = (Google_Protobuf_FieldCodec_ICPMLKOEANF__o *)
           Google_Protobuf_FieldCodec__ForMessage<object>
                     (0x12,(Google_Protobuf_MessageParser_T__o *)
                           ICPMLKOEANF_TypeInfo->static_fields->NNMODPGDIDE,
                      Method_Google_Protobuf_FieldCodec_ForMessage<ICPMLKOEANF>__);
  ppGVar2 = &JCFJFJCKLKG_TypeInfo->static_fields->HCFIGOCMMPG;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x3331DB8]
// JCFJFJCKLKG$$Equals @ RVA 0x3331DB8

bool JCFJFJCKLKG__Equals(JCFJFJCKLKG_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04567915 & 1) == 0) {
    FUN_01bab630(&JCFJFJCKLKG_TypeInfo);
    DAT_04567915 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)JCFJFJCKLKG_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = JCFJFJCKLKG__Equals(__this,(JCFJFJCKLKG_o *)IBKIPBJJCPG,method);
  return bVar1;
}

