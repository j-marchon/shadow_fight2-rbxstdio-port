// TypeDefIndex 1198
// Namespace: 
// public sealed class JMCDPBKILIN : IMessage<JMCDPBKILIN>, IMessage, IEquatable<JMCDPBKILIN>, IDeepCloneable<JMCDPBKILIN>
// Fields:
//   private static readonly MessageParser<JMCDPBKILIN> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int EAGIFHOLNEL = 1;
//   private static readonly FieldCodec<BECIPDJBAOG> EKPNGGCFBJH; // 0x8
//   private readonly RepeatedField<BECIPDJBAOG> MJIIHOLHNCK; // 0x18
//   public const int KGBOMFIKDEC = 2;
//   private KAMBBJFPLGM OPHCNELIOLD; // 0x20

// ===== public void .ctor(JMCDPBKILIN IBKIPBJJCPG)  [RVA 0x3128DB8]
// JMCDPBKILIN$$.ctor @ RVA 0x3128DB8

void JMCDPBKILIN___ctor(JMCDPBKILIN_o *__this,JMCDPBKILIN_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *pGVar1;
  KAMBBJFPLGM_o *pKVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_04566676 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_Clone__);
    DAT_04566676 = 1;
    method_00 = extraout_x1;
  }
  JMCDPBKILIN___ctor(__this,method_00);
  if ((IBKIPBJJCPG != (JMCDPBKILIN_o *)0x0) &&
     (pGVar1 = (IBKIPBJJCPG->fields).MJIIHOLHNCK,
     pGVar1 != (Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *)0x0)) {
    pGVar1 = (Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *)
             Google_Protobuf_Collections_RepeatedField<object>__Clone
                       ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar1,
                        Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_Clone__);
    (__this->fields).MJIIHOLHNCK = pGVar1;
    thunk_FUN_01c20e04();
    pKVar2 = (IBKIPBJJCPG->fields).OPHCNELIOLD;
    if (pKVar2 == (KAMBBJFPLGM_o *)0x0) {
      pKVar2 = (KAMBBJFPLGM_o *)0x0;
    }
    else {
      pKVar2 = KAMBBJFPLGM__Clone(pKVar2,(MethodInfo *)0x0);
    }
    (__this->fields).OPHCNELIOLD = pKVar2;
    thunk_FUN_01c20e04();
    pGVar3 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar3;
    thunk_FUN_01c20e04(&__this->fields,pGVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override string ToString()  [RVA 0x3128EF4]
// JMCDPBKILIN$$ToString @ RVA 0x3128EF4

System_String_o * JMCDPBKILIN__ToString(JMCDPBKILIN_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566677 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04566677 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public override int GetHashCode()  [RVA 0x3128F4C]
// JMCDPBKILIN$$GetHashCode @ RVA 0x3128F4C

int32_t JMCDPBKILIN__GetHashCode(JMCDPBKILIN_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *pGVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  KAMBBJFPLGM_o *pKVar5;
  
  pGVar3 = (__this->fields).MJIIHOLHNCK;
  if (pGVar3 != (Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *)0x0) {
    uVar1 = (*(pGVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar3,(pGVar3->klass->vtable)._2_GetHashCode.method);
    pKVar5 = (__this->fields).OPHCNELIOLD;
    uVar1 = uVar1 ^ 1;
    if (pKVar5 != (KAMBBJFPLGM_o *)0x0) {
      uVar2 = (*(pKVar5->klass->vtable)._2_GetHashCode.methodPtr)
                        (pKVar5,(pKVar5->klass->vtable)._2_GetHashCode.method);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x3128FB8]
// JMCDPBKILIN$$WriteTo @ RVA 0x3128FB8

void JMCDPBKILIN__WriteTo
               (JMCDPBKILIN_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *__this_01;
  
  if ((DAT_04566678 & 1) == 0) {
    FUN_01bab630(&JMCDPBKILIN_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_WriteTo__);
    DAT_04566678 = 1;
  }
  __this_01 = (__this->fields).MJIIHOLHNCK;
  if ((JMCDPBKILIN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__WriteTo
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,JBGJLELBMJF,
               (Google_Protobuf_FieldCodec_T__o *)JMCDPBKILIN_TypeInfo->static_fields->EKPNGGCFBJH,
               Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_WriteTo__);
    if ((__this->fields).OPHCNELIOLD != (KAMBBJFPLGM_o *)0x0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03229098;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
      Google_Protobuf_CodedOutputStream__WriteMessage
                (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).OPHCNELIOLD,
                 (MethodInfo *)0x0);
    }
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_03229098:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x312909C]
// JMCDPBKILIN$$Equals @ RVA 0x312909C

bool JMCDPBKILIN__Equals(JMCDPBKILIN_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04566679 & 1) == 0) {
    FUN_01bab630(&JMCDPBKILIN_TypeInfo);
    DAT_04566679 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)JMCDPBKILIN_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = JMCDPBKILIN__Equals(__this,(JMCDPBKILIN_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public void IIBFFDJAKFB(KAMBBJFPLGM CJNHFNHJHPE)  [RVA 0x31291A4]
// JMCDPBKILIN$$IIBFFDJAKFB @ RVA 0x31291A4

void JMCDPBKILIN__IIBFFDJAKFB(JMCDPBKILIN_o *__this,KAMBBJFPLGM_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).OPHCNELIOLD = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x31291AC]
// JMCDPBKILIN$$FFHIHGCDGAK @ RVA 0x31291AC

Google_Protobuf_Reflection_MessageDescriptor_o * JMCDPBKILIN__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_0456667a & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_0456667a = 1;
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
        goto LAB_03229294;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_03229294:
                    /* WARNING: Could not recover jumptable at 0x032292a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x2d,pVVar2->method);
  return pGVar3;
}


// ===== public RepeatedField<BECIPDJBAOG> NNAKKCHDFAN()  [RVA 0x31292B0]
// JMCDPBKILIN$$NNAKKCHDFAN @ RVA 0x31292B0

Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *
JMCDPBKILIN__NNAKKCHDFAN(JMCDPBKILIN_o *__this,MethodInfo *method)

{
  return (__this->fields).MJIIHOLHNCK;
}


// ===== public void .ctor()  [RVA 0x3128E6C]
// JMCDPBKILIN$$.ctor @ RVA 0x3128E6C

void JMCDPBKILIN___ctor(JMCDPBKILIN_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o **ppGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456667b & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_TypeInfo);
    DAT_0456667b = 1;
    method = extraout_x1;
  }
  __this_00 = (Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_TypeInfo,
                                 method);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
             Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>__ctor__);
  ppGVar1 = &(__this->fields).MJIIHOLHNCK;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void MergeFrom(JMCDPBKILIN IBKIPBJJCPG)  [RVA 0x31292B8]
// JMCDPBKILIN$$MergeFrom @ RVA 0x31292B8

void JMCDPBKILIN__MergeFrom(JMCDPBKILIN_o *__this,JMCDPBKILIN_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *__this_00;
  KAMBBJFPLGM_o *pKVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  JMCDPBKILIN_Fields *pJVar3;
  KAMBBJFPLGM_o **ppKVar4;
  
  if ((DAT_0456667c & 1) == 0) {
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_Add__);
    DAT_0456667c = 1;
  }
  if (IBKIPBJJCPG == (JMCDPBKILIN_o *)0x0) {
    return;
  }
  __this_00 = (__this->fields).MJIIHOLHNCK;
  if (__this_00 != (Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__Add
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).MJIIHOLHNCK,
               Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_Add__);
    if ((IBKIPBJJCPG->fields).OPHCNELIOLD != (KAMBBJFPLGM_o *)0x0) {
      ppKVar4 = &(__this->fields).OPHCNELIOLD;
      pKVar1 = *ppKVar4;
      if (pKVar1 == (KAMBBJFPLGM_o *)0x0) {
        pKVar1 = (KAMBBJFPLGM_o *)thunk_FUN_01bda818(KAMBBJFPLGM_TypeInfo);
        KAMBBJFPLGM___ctor(pKVar1,(MethodInfo *)0x0);
        *ppKVar4 = pKVar1;
        thunk_FUN_01c20e04(ppKVar4,pKVar1);
        pKVar1 = *ppKVar4;
        if (pKVar1 == (KAMBBJFPLGM_o *)0x0) goto LAB_032293a8;
      }
      KAMBBJFPLGM__MergeFrom(pKVar1,(IBKIPBJJCPG->fields).OPHCNELIOLD,(MethodInfo *)0x0);
    }
    pJVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pJVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pJVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pJVar3,pGVar2);
    return;
  }
LAB_032293a8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool Equals(JMCDPBKILIN IBKIPBJJCPG)  [RVA 0x3129100]
// JMCDPBKILIN$$Equals @ RVA 0x3129100

bool JMCDPBKILIN__Equals(JMCDPBKILIN_o *__this,JMCDPBKILIN_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *__this_00;
  
  if ((DAT_0456667d & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_Equals__);
    DAT_0456667d = 1;
  }
  if (IBKIPBJJCPG != (JMCDPBKILIN_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    __this_00 = (__this->fields).MJIIHOLHNCK;
    if (__this_00 == (Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                       (Google_Protobuf_Collections_RepeatedField_T__o *)
                       (IBKIPBJJCPG->fields).MJIIHOLHNCK,
                       Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_Equals__);
    if ((bVar1) &&
       (bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).OPHCNELIOLD,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).OPHCNELIOLD,(MethodInfo *)0x0),
       bVar1)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public int CalculateSize()  [RVA 0x31293AC]
// JMCDPBKILIN$$CalculateSize @ RVA 0x31293AC

int32_t JMCDPBKILIN__CalculateSize(JMCDPBKILIN_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *__this_01;
  KAMBBJFPLGM_o *value;
  
  if ((DAT_0456667e & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    FUN_01bab630(&JMCDPBKILIN_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_CalculateSize__);
    DAT_0456667e = 1;
    method = extraout_x1;
  }
  __this_01 = (__this->fields).MJIIHOLHNCK;
  if ((JMCDPBKILIN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(JMCDPBKILIN_TypeInfo,method);
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *)0x0) {
    iVar1 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                       (Google_Protobuf_FieldCodec_T__o *)
                       JMCDPBKILIN_TypeInfo->static_fields->EKPNGGCFBJH,
                       Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_CalculateSize__
                      );
    value = (__this->fields).OPHCNELIOLD;
    if (value != (KAMBBJFPLGM_o *)0x0) {
      if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                        ((Google_Protobuf_IMessage_o *)value,(MethodInfo *)0x0);
      iVar1 = iVar1 + iVar2 + 1;
    }
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      iVar2 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
      iVar1 = iVar2 + iVar1;
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public JMCDPBKILIN Clone()  [RVA 0x3129490]
// JMCDPBKILIN$$Clone @ RVA 0x3129490

JMCDPBKILIN_o * JMCDPBKILIN__Clone(JMCDPBKILIN_o *__this,MethodInfo *method)

{
  JMCDPBKILIN_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_0456667f & 1) == 0) {
    FUN_01bab630(&JMCDPBKILIN_TypeInfo);
    DAT_0456667f = 1;
    method = extraout_x1;
  }
  __this_00 = (JMCDPBKILIN_o *)thunk_FUN_01bda818(JMCDPBKILIN_TypeInfo,method);
  JMCDPBKILIN___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public static MessageParser<JMCDPBKILIN> PGCAHPDCJBC()  [RVA 0x31294E8]
// JMCDPBKILIN$$PGCAHPDCJBC @ RVA 0x31294E8

Google_Protobuf_MessageParser_JMCDPBKILIN__o * JMCDPBKILIN__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04566680 & 1) == 0) {
    FUN_01bab630(&JMCDPBKILIN_TypeInfo);
    DAT_04566680 = 1;
  }
  if ((JMCDPBKILIN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return JMCDPBKILIN_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== private static void .cctor()  [RVA 0x3129540]
// JMCDPBKILIN$$.cctor @ RVA 0x3129540

void JMCDPBKILIN___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_JMCDPBKILIN__o *__this;
  Google_Protobuf_FieldCodec_BECIPDJBAOG__o *pGVar1;
  Google_Protobuf_FieldCodec_BECIPDJBAOG__o **ppGVar2;
  
  if ((DAT_04566681 & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForMessage<BECIPDJBAOG>__);
    FUN_01bab630(&System_Func<JMCDPBKILIN>_TypeInfo);
    FUN_01bab630(&JMCDPBKILIN_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<JMCDPBKILIN>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<JMCDPBKILIN>_TypeInfo);
    FUN_01bab630(&Method_JMCDPBKILIN_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&JMCDPBKILIN_<>c_TypeInfo);
    DAT_04566681 = 1;
  }
  if ((JMCDPBKILIN_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<JMCDPBKILIN>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_JMCDPBKILIN__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<JMCDPBKILIN>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<JMCDPBKILIN>__ctor__);
  JMCDPBKILIN_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(JMCDPBKILIN_TypeInfo->static_fields,__this);
  if ((BECIPDJBAOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04566742 == '\0') {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    DAT_04566742 = '\x01';
  }
  if ((BECIPDJBAOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar1 = (Google_Protobuf_FieldCodec_BECIPDJBAOG__o *)
           Google_Protobuf_FieldCodec__ForMessage<object>
                     (10,(Google_Protobuf_MessageParser_T__o *)
                         BECIPDJBAOG_TypeInfo->static_fields->NNMODPGDIDE,
                      Method_Google_Protobuf_FieldCodec_ForMessage<BECIPDJBAOG>__);
  ppGVar2 = &JMCDPBKILIN_TypeInfo->static_fields->EKPNGGCFBJH;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}


// ===== public KAMBBJFPLGM JCKINNMKHBA()  [RVA 0x31296F0]
// JMCDPBKILIN$$JCKINNMKHBA @ RVA 0x31296F0

KAMBBJFPLGM_o * JMCDPBKILIN__JCKINNMKHBA(JMCDPBKILIN_o *__this,MethodInfo *method)

{
  return (__this->fields).OPHCNELIOLD;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x31296F8]
// JMCDPBKILIN$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x31296F8

Google_Protobuf_Reflection_MessageDescriptor_o *
JMCDPBKILIN__pb__Google_Protobuf_IMessage_get_Descriptor(JMCDPBKILIN_o *__this,MethodInfo *method)

{
  JMCDPBKILIN_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566682 & 1) == 0) {
    FUN_01bab630(&JMCDPBKILIN_TypeInfo);
    DAT_04566682 = 1;
    method = extraout_x1;
  }
  method_00 = JMCDPBKILIN_TypeInfo;
  if ((JMCDPBKILIN_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (JMCDPBKILIN_c *)thunk_FUN_01ba7564(JMCDPBKILIN_TypeInfo,method);
  }
  pGVar1 = JMCDPBKILIN__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x3129744]
// JMCDPBKILIN$$MergeFrom @ RVA 0x3129744

void JMCDPBKILIN__MergeFrom
               (JMCDPBKILIN_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  KAMBBJFPLGM_o **ppKVar1;
  JMCDPBKILIN_Fields *pJVar2;
  uint32_t uVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  KAMBBJFPLGM_o *pKVar5;
  Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *__this_00;
  
  if ((DAT_04566683 & 1) == 0) {
    FUN_01bab630(&JMCDPBKILIN_TypeInfo);
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_AddEntriesFrom__);
    DAT_04566683 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    ppKVar1 = &(__this->fields).OPHCNELIOLD;
    pJVar2 = &__this->fields;
    while( true ) {
      while (uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
            uVar3 != 10) {
        if (uVar3 == 0x12) {
          pKVar5 = *ppKVar1;
          if (pKVar5 == (KAMBBJFPLGM_o *)0x0) {
            pKVar5 = (KAMBBJFPLGM_o *)thunk_FUN_01bda818(KAMBBJFPLGM_TypeInfo);
            KAMBBJFPLGM___ctor(pKVar5,(MethodInfo *)0x0);
            *ppKVar1 = pKVar5;
            thunk_FUN_01c20e04(ppKVar1,pKVar5);
            pKVar5 = *ppKVar1;
          }
          Google_Protobuf_CodedInputStream__ReadMessage
                    (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pKVar5,(MethodInfo *)0x0);
        }
        else {
          if (uVar3 == 0) {
            return;
          }
          pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                             (pJVar2->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
          pJVar2->CKFPENBPNML = pGVar4;
          thunk_FUN_01c20e04(pJVar2,pGVar4);
        }
      }
      __this_00 = (__this->fields).MJIIHOLHNCK;
      if ((JMCDPBKILIN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *)0x0) break;
      Google_Protobuf_Collections_RepeatedField<object>__AddEntriesFrom
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,AIGOBLJEBCA,
                 (Google_Protobuf_FieldCodec_T__o *)JMCDPBKILIN_TypeInfo->static_fields->EKPNGGCFBJH
                 ,Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_AddEntriesFrom__);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

