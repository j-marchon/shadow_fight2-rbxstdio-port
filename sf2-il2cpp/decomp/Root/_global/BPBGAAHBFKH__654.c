// TypeDefIndex 654
// Namespace: 
// public sealed class BPBGAAHBFKH : IMessage<BPBGAAHBFKH>, IMessage, IEquatable<BPBGAAHBFKH>, IDeepCloneable<BPBGAAHBFKH>
// Fields:
//   private static readonly MessageParser<BPBGAAHBFKH> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int NOFHGLLGLLE = 1;
//   private int PDOMCPONBNB; // 0x18
//   public const int OHFNJCNNAKG = 2;
//   private static readonly FieldCodec<BDMABHJEEGD> ODAOMAKCEEH; // 0x8
//   private readonly RepeatedField<BDMABHJEEGD> IGPJEDLPAGI; // 0x20

// ===== public void .ctor(BPBGAAHBFKH IBKIPBJJCPG)  [RVA 0x35CF7B4]
// BPBGAAHBFKH$$.ctor @ RVA 0x35CF7B4

void BPBGAAHBFKH___ctor(BPBGAAHBFKH_o *__this,BPBGAAHBFKH_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *pGVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_04568fcf & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_Clone__);
    DAT_04568fcf = 1;
    method_00 = extraout_x1;
  }
  BPBGAAHBFKH___ctor(__this,method_00);
  if (IBKIPBJJCPG != (BPBGAAHBFKH_o *)0x0) {
    (__this->fields).PDOMCPONBNB = (IBKIPBJJCPG->fields).PDOMCPONBNB;
    pGVar1 = (IBKIPBJJCPG->fields).IGPJEDLPAGI;
    if (pGVar1 != (Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *)0x0) {
      pGVar1 = (Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *)
               Google_Protobuf_Collections_RepeatedField<object>__Clone
                         ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar1,
                          Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_Clone__);
      (__this->fields).IGPJEDLPAGI = pGVar1;
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


// ===== public override int GetHashCode()  [RVA 0x35CF8D0]
// BPBGAAHBFKH$$GetHashCode @ RVA 0x35CF8D0

int32_t BPBGAAHBFKH__GetHashCode(BPBGAAHBFKH_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *pGVar4;
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
  pGVar4 = (__this->fields).IGPJEDLPAGI;
  if (pGVar4 != (Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *)0x0) {
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


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x35CF94C]
// BPBGAAHBFKH$$FFHIHGCDGAK @ RVA 0x35CF94C

Google_Protobuf_Reflection_MessageDescriptor_o * BPBGAAHBFKH__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04568fd0 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04568fd0 = 1;
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
        goto LAB_036cfa34;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_036cfa34:
                    /* WARNING: Could not recover jumptable at 0x036cfa48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x13,pVVar2->method);
  return pGVar3;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x35CFA50]
// BPBGAAHBFKH$$WriteTo @ RVA 0x35CFA50

void BPBGAAHBFKH__WriteTo
               (BPBGAAHBFKH_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *__this_01;
  
  if ((DAT_04568fd1 & 1) == 0) {
    FUN_01bab630(&BPBGAAHBFKH_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_WriteTo__);
    DAT_04568fd1 = 1;
  }
  if ((__this->fields).PDOMCPONBNB != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036cfb30;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).PDOMCPONBNB,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).IGPJEDLPAGI;
  if ((BPBGAAHBFKH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__WriteTo
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,JBGJLELBMJF,
               (Google_Protobuf_FieldCodec_T__o *)BPBGAAHBFKH_TypeInfo->static_fields->ODAOMAKCEEH,
               Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_WriteTo__);
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_036cfb30:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int CalculateSize()  [RVA 0x35CFB34]
// BPBGAAHBFKH$$CalculateSize @ RVA 0x35CFB34

int32_t BPBGAAHBFKH__CalculateSize(BPBGAAHBFKH_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *extraout_x1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *__this_01;
  int iVar2;
  
  if ((DAT_04568fd2 & 1) == 0) {
    FUN_01bab630(&BPBGAAHBFKH_TypeInfo);
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_CalculateSize__);
    DAT_04568fd2 = 1;
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
  __this_01 = (__this->fields).IGPJEDLPAGI;
  if ((BPBGAAHBFKH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *)0x0) {
    iVar1 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                       (Google_Protobuf_FieldCodec_T__o *)
                       BPBGAAHBFKH_TypeInfo->static_fields->ODAOMAKCEEH,
                       Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_CalculateSize__
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


// ===== public bool Equals(BPBGAAHBFKH IBKIPBJJCPG)  [RVA 0x35CFC28]
// BPBGAAHBFKH$$Equals @ RVA 0x35CFC28

bool BPBGAAHBFKH__Equals(BPBGAAHBFKH_o *__this,BPBGAAHBFKH_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *__this_00;
  
  if ((DAT_04568fd3 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_Equals__);
    DAT_04568fd3 = 1;
  }
  if (IBKIPBJJCPG != (BPBGAAHBFKH_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if ((__this->fields).PDOMCPONBNB == (IBKIPBJJCPG->fields).PDOMCPONBNB) {
      __this_00 = (__this->fields).IGPJEDLPAGI;
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                        ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                         (Google_Protobuf_Collections_RepeatedField_T__o *)
                         (IBKIPBJJCPG->fields).IGPJEDLPAGI,
                         Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_Equals__);
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


// ===== public BPBGAAHBFKH Clone()  [RVA 0x35CFCC8]
// BPBGAAHBFKH$$Clone @ RVA 0x35CFCC8

BPBGAAHBFKH_o * BPBGAAHBFKH__Clone(BPBGAAHBFKH_o *__this,MethodInfo *method)

{
  BPBGAAHBFKH_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04568fd4 & 1) == 0) {
    FUN_01bab630(&BPBGAAHBFKH_TypeInfo);
    DAT_04568fd4 = 1;
    method = extraout_x1;
  }
  __this_00 = (BPBGAAHBFKH_o *)thunk_FUN_01bda818(BPBGAAHBFKH_TypeInfo,method);
  BPBGAAHBFKH___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public void MergeFrom(BPBGAAHBFKH IBKIPBJJCPG)  [RVA 0x35CFD20]
// BPBGAAHBFKH$$MergeFrom @ RVA 0x35CFD20

void BPBGAAHBFKH__MergeFrom(BPBGAAHBFKH_o *__this,BPBGAAHBFKH_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  BPBGAAHBFKH_Fields *pBVar3;
  
  if ((DAT_04568fd5 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_Add__);
    DAT_04568fd5 = 1;
  }
  if (IBKIPBJJCPG == (BPBGAAHBFKH_o *)0x0) {
    return;
  }
  iVar1 = (IBKIPBJJCPG->fields).PDOMCPONBNB;
  if (iVar1 != 0) {
    (__this->fields).PDOMCPONBNB = iVar1;
  }
  __this_00 = (__this->fields).IGPJEDLPAGI;
  if (__this_00 != (Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__Add
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).IGPJEDLPAGI,
               Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_Add__);
    pBVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pBVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pBVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pBVar3,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override string ToString()  [RVA 0x35CFDB4]
// BPBGAAHBFKH$$ToString @ RVA 0x35CFDB4

System_String_o * BPBGAAHBFKH__ToString(BPBGAAHBFKH_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568fd6 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04568fd6 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public int JMAMKPDNING()  [RVA 0x35CFE0C]
// BPBGAAHBFKH$$JMAMKPDNING @ RVA 0x35CFE0C

int32_t BPBGAAHBFKH__JMAMKPDNING(BPBGAAHBFKH_o *__this,MethodInfo *method)

{
  return (__this->fields).PDOMCPONBNB;
}


// ===== public void EMKELMJKKLO(int CJNHFNHJHPE)  [RVA 0x35CFE14]
// BPBGAAHBFKH$$EMKELMJKKLO @ RVA 0x35CFE14

void BPBGAAHBFKH__EMKELMJKKLO(BPBGAAHBFKH_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).PDOMCPONBNB = CJNHFNHJHPE;
  return;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x35CFE1C]
// BPBGAAHBFKH$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x35CFE1C

Google_Protobuf_Reflection_MessageDescriptor_o *
BPBGAAHBFKH__pb__Google_Protobuf_IMessage_get_Descriptor(BPBGAAHBFKH_o *__this,MethodInfo *method)

{
  BPBGAAHBFKH_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568fd7 & 1) == 0) {
    FUN_01bab630(&BPBGAAHBFKH_TypeInfo);
    DAT_04568fd7 = 1;
    method = extraout_x1;
  }
  method_00 = BPBGAAHBFKH_TypeInfo;
  if ((BPBGAAHBFKH_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (BPBGAAHBFKH_c *)thunk_FUN_01ba7564(BPBGAAHBFKH_TypeInfo,method);
  }
  pGVar1 = BPBGAAHBFKH__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public RepeatedField<BDMABHJEEGD> BEIPEFPMCFP()  [RVA 0x35CFE68]
// BPBGAAHBFKH$$BEIPEFPMCFP @ RVA 0x35CFE68

Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *
BPBGAAHBFKH__BEIPEFPMCFP(BPBGAAHBFKH_o *__this,MethodInfo *method)

{
  return (__this->fields).IGPJEDLPAGI;
}


// ===== public void .ctor()  [RVA 0x35CF848]
// BPBGAAHBFKH$$.ctor @ RVA 0x35CF848

void BPBGAAHBFKH___ctor(BPBGAAHBFKH_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o **ppGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568fd8 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_TypeInfo);
    DAT_04568fd8 = 1;
    method = extraout_x1;
  }
  __this_00 = (Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_TypeInfo,
                                 method);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
             Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>__ctor__);
  ppGVar1 = &(__this->fields).IGPJEDLPAGI;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x35CFE70]
// BPBGAAHBFKH$$MergeFrom @ RVA 0x35CFE70

void BPBGAAHBFKH__MergeFrom
               (BPBGAAHBFKH_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  BPBGAAHBFKH_Fields *pBVar1;
  uint32_t uVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *__this_00;
  
  if ((DAT_04568fd9 & 1) == 0) {
    FUN_01bab630(&BPBGAAHBFKH_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_AddEntriesFrom__);
    DAT_04568fd9 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pBVar1 = &__this->fields;
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
                           (pBVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
        pBVar1->CKFPENBPNML = pGVar4;
        thunk_FUN_01c20e04(pBVar1,pGVar4);
      }
      __this_00 = (__this->fields).IGPJEDLPAGI;
      if ((BPBGAAHBFKH_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_BDMABHJEEGD__o *)0x0) break;
      Google_Protobuf_Collections_RepeatedField<object>__AddEntriesFrom
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,AIGOBLJEBCA,
                 (Google_Protobuf_FieldCodec_T__o *)BPBGAAHBFKH_TypeInfo->static_fields->ODAOMAKCEEH
                 ,Method_Google_Protobuf_Collections_RepeatedField<BDMABHJEEGD>_AddEntriesFrom__);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x35CFF74]
// BPBGAAHBFKH$$.cctor @ RVA 0x35CFF74

void BPBGAAHBFKH___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_BPBGAAHBFKH__o *__this;
  Google_Protobuf_FieldCodec_BDMABHJEEGD__o *pGVar1;
  Google_Protobuf_FieldCodec_BDMABHJEEGD__o **ppGVar2;
  
  if ((DAT_04568fda & 1) == 0) {
    FUN_01bab630(&BDMABHJEEGD_TypeInfo);
    FUN_01bab630(&BPBGAAHBFKH_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForMessage<BDMABHJEEGD>__);
    FUN_01bab630(&System_Func<BPBGAAHBFKH>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<BPBGAAHBFKH>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<BPBGAAHBFKH>_TypeInfo);
    FUN_01bab630(&Method_BPBGAAHBFKH_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&BPBGAAHBFKH_<>c_TypeInfo);
    DAT_04568fda = 1;
  }
  if ((BPBGAAHBFKH_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<BPBGAAHBFKH>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_BPBGAAHBFKH__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<BPBGAAHBFKH>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<BPBGAAHBFKH>__ctor__);
  BPBGAAHBFKH_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(BPBGAAHBFKH_TypeInfo->static_fields,__this);
  if ((BDMABHJEEGD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04567f51 == '\0') {
    FUN_01bab630(&BDMABHJEEGD_TypeInfo);
    DAT_04567f51 = '\x01';
  }
  if ((BDMABHJEEGD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar1 = (Google_Protobuf_FieldCodec_BDMABHJEEGD__o *)
           Google_Protobuf_FieldCodec__ForMessage<object>
                     (0x12,(Google_Protobuf_MessageParser_T__o *)
                           BDMABHJEEGD_TypeInfo->static_fields->NNMODPGDIDE,
                      Method_Google_Protobuf_FieldCodec_ForMessage<BDMABHJEEGD>__);
  ppGVar2 = &BPBGAAHBFKH_TypeInfo->static_fields->ODAOMAKCEEH;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x35D0124]
// BPBGAAHBFKH$$Equals @ RVA 0x35D0124

bool BPBGAAHBFKH__Equals(BPBGAAHBFKH_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04568fdb & 1) == 0) {
    FUN_01bab630(&BPBGAAHBFKH_TypeInfo);
    DAT_04568fdb = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)BPBGAAHBFKH_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = BPBGAAHBFKH__Equals(__this,(BPBGAAHBFKH_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public static MessageParser<BPBGAAHBFKH> PGCAHPDCJBC()  [RVA 0x35D0188]
// BPBGAAHBFKH$$PGCAHPDCJBC @ RVA 0x35D0188

Google_Protobuf_MessageParser_BPBGAAHBFKH__o * BPBGAAHBFKH__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04568fdc & 1) == 0) {
    FUN_01bab630(&BPBGAAHBFKH_TypeInfo);
    DAT_04568fdc = 1;
  }
  if ((BPBGAAHBFKH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return BPBGAAHBFKH_TypeInfo->static_fields->NNMODPGDIDE;
}

