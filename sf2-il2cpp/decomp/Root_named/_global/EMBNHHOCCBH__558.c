// TypeDefIndex 558
// Namespace: 
// public sealed class EMBNHHOCCBH : IMessage<EMBNHHOCCBH>, IMessage, IEquatable<EMBNHHOCCBH>, IDeepCloneable<EMBNHHOCCBH>
// Fields:
//   private static readonly MessageParser<EMBNHHOCCBH> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int EAGIFHOLNEL = 1;
//   private static readonly FieldCodec<BECIPDJBAOG> EKPNGGCFBJH; // 0x8
//   private readonly RepeatedField<BECIPDJBAOG> MJIIHOLHNCK; // 0x18
//   public const int KGBOMFIKDEC = 2;
//   private KAMBBJFPLGM OPHCNELIOLD; // 0x20

// ===== public int CalculateSize()  [RVA 0x35A9D38]
// EMBNHHOCCBH$$CalculateSize @ RVA 0x35A9D38

int32_t EMBNHHOCCBH__CalculateSize(EMBNHHOCCBH_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *__this_01;
  KAMBBJFPLGM_o *value;
  
  if ((DAT_04568e3e & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    FUN_01bab630(&EMBNHHOCCBH_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_CalculateSize__);
    DAT_04568e3e = 1;
    method = extraout_x1;
  }
  __this_01 = (__this->fields).MJIIHOLHNCK;
  if ((EMBNHHOCCBH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EMBNHHOCCBH_TypeInfo,method);
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *)0x0) {
    iVar1 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                       (Google_Protobuf_FieldCodec_T__o *)
                       EMBNHHOCCBH_TypeInfo->static_fields->EKPNGGCFBJH,
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


// ===== public KAMBBJFPLGM JCKINNMKHBA()  [RVA 0x35A9E1C]
// EMBNHHOCCBH$$JCKINNMKHBA @ RVA 0x35A9E1C

KAMBBJFPLGM_o * EMBNHHOCCBH__JCKINNMKHBA(EMBNHHOCCBH_o *__this,MethodInfo *method)

{
  return (__this->fields).OPHCNELIOLD;
}


// ===== public override int GetHashCode()  [RVA 0x35A9E24]
// EMBNHHOCCBH$$GetHashCode @ RVA 0x35A9E24

int32_t EMBNHHOCCBH__GetHashCode(EMBNHHOCCBH_o *__this,MethodInfo *method)

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


// ===== public void IIBFFDJAKFB(KAMBBJFPLGM CJNHFNHJHPE)  [RVA 0x35A9E90]
// EMBNHHOCCBH$$IIBFFDJAKFB @ RVA 0x35A9E90

void EMBNHHOCCBH__IIBFFDJAKFB(EMBNHHOCCBH_o *__this,KAMBBJFPLGM_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).OPHCNELIOLD = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private static void .cctor()  [RVA 0x35A9E98]
// EMBNHHOCCBH$$.cctor @ RVA 0x35A9E98

void EMBNHHOCCBH___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_EMBNHHOCCBH__o *__this;
  Google_Protobuf_FieldCodec_BECIPDJBAOG__o *pGVar1;
  Google_Protobuf_FieldCodec_BECIPDJBAOG__o **ppGVar2;
  
  if ((DAT_04568e3f & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    FUN_01bab630(&EMBNHHOCCBH_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForMessage<BECIPDJBAOG>__);
    FUN_01bab630(&System_Func<EMBNHHOCCBH>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<EMBNHHOCCBH>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<EMBNHHOCCBH>_TypeInfo);
    FUN_01bab630(&Method_EMBNHHOCCBH_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&EMBNHHOCCBH_<>c_TypeInfo);
    DAT_04568e3f = 1;
  }
  if ((EMBNHHOCCBH_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<EMBNHHOCCBH>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_EMBNHHOCCBH__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<EMBNHHOCCBH>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<EMBNHHOCCBH>__ctor__);
  EMBNHHOCCBH_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(EMBNHHOCCBH_TypeInfo->static_fields,__this);
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
  ppGVar2 = &EMBNHHOCCBH_TypeInfo->static_fields->EKPNGGCFBJH;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}


// ===== public void MergeFrom(EMBNHHOCCBH IBKIPBJJCPG)  [RVA 0x35AA048]
// EMBNHHOCCBH$$MergeFrom @ RVA 0x35AA048

void EMBNHHOCCBH__MergeFrom(EMBNHHOCCBH_o *__this,EMBNHHOCCBH_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *__this_00;
  KAMBBJFPLGM_o *pKVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  EMBNHHOCCBH_Fields *pEVar3;
  KAMBBJFPLGM_o **ppKVar4;
  
  if ((DAT_04568e40 & 1) == 0) {
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_Add__);
    DAT_04568e40 = 1;
  }
  if (IBKIPBJJCPG == (EMBNHHOCCBH_o *)0x0) {
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
        if (pKVar1 == (KAMBBJFPLGM_o *)0x0) goto LAB_036aa138;
      }
      KAMBBJFPLGM__MergeFrom(pKVar1,(IBKIPBJJCPG->fields).OPHCNELIOLD,(MethodInfo *)0x0);
    }
    pEVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pEVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pEVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pEVar3,pGVar2);
    return;
  }
LAB_036aa138:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x35AA13C]
// EMBNHHOCCBH$$MergeFrom @ RVA 0x35AA13C

void EMBNHHOCCBH__MergeFrom
               (EMBNHHOCCBH_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  KAMBBJFPLGM_o **ppKVar1;
  EMBNHHOCCBH_Fields *pEVar2;
  uint32_t uVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  KAMBBJFPLGM_o *pKVar5;
  Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *__this_00;
  
  if ((DAT_04568e41 & 1) == 0) {
    FUN_01bab630(&EMBNHHOCCBH_TypeInfo);
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_AddEntriesFrom__);
    DAT_04568e41 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    ppKVar1 = &(__this->fields).OPHCNELIOLD;
    pEVar2 = &__this->fields;
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
                             (pEVar2->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
          pEVar2->CKFPENBPNML = pGVar4;
          thunk_FUN_01c20e04(pEVar2,pGVar4);
        }
      }
      __this_00 = (__this->fields).MJIIHOLHNCK;
      if ((EMBNHHOCCBH_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *)0x0) break;
      Google_Protobuf_Collections_RepeatedField<object>__AddEntriesFrom
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,AIGOBLJEBCA,
                 (Google_Protobuf_FieldCodec_T__o *)EMBNHHOCCBH_TypeInfo->static_fields->EKPNGGCFBJH
                 ,Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_AddEntriesFrom__);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool Equals(EMBNHHOCCBH IBKIPBJJCPG)  [RVA 0x35AA28C]
// EMBNHHOCCBH$$Equals @ RVA 0x35AA28C

bool EMBNHHOCCBH__Equals(EMBNHHOCCBH_o *__this,EMBNHHOCCBH_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *__this_00;
  
  if ((DAT_04568e42 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_Equals__);
    DAT_04568e42 = 1;
  }
  if (IBKIPBJJCPG != (EMBNHHOCCBH_o *)0x0) {
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


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x35AA330]
// EMBNHHOCCBH$$Equals @ RVA 0x35AA330

bool EMBNHHOCCBH__Equals(EMBNHHOCCBH_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04568e43 & 1) == 0) {
    FUN_01bab630(&EMBNHHOCCBH_TypeInfo);
    DAT_04568e43 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)EMBNHHOCCBH_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = EMBNHHOCCBH__Equals(__this,(EMBNHHOCCBH_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x35AA394]
// EMBNHHOCCBH$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x35AA394

Google_Protobuf_Reflection_MessageDescriptor_o *
EMBNHHOCCBH__pb__Google_Protobuf_IMessage_get_Descriptor(EMBNHHOCCBH_o *__this,MethodInfo *method)

{
  EMBNHHOCCBH_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568e44 & 1) == 0) {
    FUN_01bab630(&EMBNHHOCCBH_TypeInfo);
    DAT_04568e44 = 1;
    method = extraout_x1;
  }
  method_00 = EMBNHHOCCBH_TypeInfo;
  if ((EMBNHHOCCBH_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (EMBNHHOCCBH_c *)thunk_FUN_01ba7564(EMBNHHOCCBH_TypeInfo,method);
  }
  pGVar1 = EMBNHHOCCBH__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public void .ctor()  [RVA 0x35AA4E4]
// EMBNHHOCCBH$$.ctor @ RVA 0x35AA4E4

void EMBNHHOCCBH___ctor(EMBNHHOCCBH_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o **ppGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568e45 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_TypeInfo);
    DAT_04568e45 = 1;
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


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x35AA56C]
// EMBNHHOCCBH$$WriteTo @ RVA 0x35AA56C

void EMBNHHOCCBH__WriteTo
               (EMBNHHOCCBH_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *__this_01;
  
  if ((DAT_04568e46 & 1) == 0) {
    FUN_01bab630(&EMBNHHOCCBH_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_WriteTo__);
    DAT_04568e46 = 1;
  }
  __this_01 = (__this->fields).MJIIHOLHNCK;
  if ((EMBNHHOCCBH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__WriteTo
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,JBGJLELBMJF,
               (Google_Protobuf_FieldCodec_T__o *)EMBNHHOCCBH_TypeInfo->static_fields->EKPNGGCFBJH,
               Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_WriteTo__);
    if ((__this->fields).OPHCNELIOLD != (KAMBBJFPLGM_o *)0x0) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_036aa64c;
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
LAB_036aa64c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x35AA3E0]
// EMBNHHOCCBH$$FFHIHGCDGAK @ RVA 0x35AA3E0

Google_Protobuf_Reflection_MessageDescriptor_o * EMBNHHOCCBH__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04568e47 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04568e47 = 1;
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
        goto LAB_036aa4c8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_036aa4c8:
                    /* WARNING: Could not recover jumptable at 0x036aa4dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x1b,pVVar2->method);
  return pGVar3;
}


// ===== public EMBNHHOCCBH Clone()  [RVA 0x35AA650]
// EMBNHHOCCBH$$Clone @ RVA 0x35AA650

EMBNHHOCCBH_o * EMBNHHOCCBH__Clone(EMBNHHOCCBH_o *__this,MethodInfo *method)

{
  EMBNHHOCCBH_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04568e48 & 1) == 0) {
    FUN_01bab630(&EMBNHHOCCBH_TypeInfo);
    DAT_04568e48 = 1;
    method = extraout_x1;
  }
  __this_00 = (EMBNHHOCCBH_o *)thunk_FUN_01bda818(EMBNHHOCCBH_TypeInfo,method);
  EMBNHHOCCBH___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public override string ToString()  [RVA 0x35AA75C]
// EMBNHHOCCBH$$ToString @ RVA 0x35AA75C

System_String_o * EMBNHHOCCBH__ToString(EMBNHHOCCBH_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568e49 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04568e49 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void .ctor(EMBNHHOCCBH IBKIPBJJCPG)  [RVA 0x35AA6A8]
// EMBNHHOCCBH$$.ctor @ RVA 0x35AA6A8

void EMBNHHOCCBH___ctor(EMBNHHOCCBH_o *__this,EMBNHHOCCBH_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *pGVar1;
  KAMBBJFPLGM_o *pKVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_04568e4a & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<BECIPDJBAOG>_Clone__);
    DAT_04568e4a = 1;
    method_00 = extraout_x1;
  }
  EMBNHHOCCBH___ctor(__this,method_00);
  if ((IBKIPBJJCPG != (EMBNHHOCCBH_o *)0x0) &&
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


// ===== public RepeatedField<BECIPDJBAOG> NNAKKCHDFAN()  [RVA 0x35AA7B4]
// EMBNHHOCCBH$$NNAKKCHDFAN @ RVA 0x35AA7B4

Google_Protobuf_Collections_RepeatedField_BECIPDJBAOG__o *
EMBNHHOCCBH__NNAKKCHDFAN(EMBNHHOCCBH_o *__this,MethodInfo *method)

{
  return (__this->fields).MJIIHOLHNCK;
}


// ===== public static MessageParser<EMBNHHOCCBH> PGCAHPDCJBC()  [RVA 0x35AA7BC]
// EMBNHHOCCBH$$PGCAHPDCJBC @ RVA 0x35AA7BC

Google_Protobuf_MessageParser_EMBNHHOCCBH__o * EMBNHHOCCBH__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04568e4b & 1) == 0) {
    FUN_01bab630(&EMBNHHOCCBH_TypeInfo);
    DAT_04568e4b = 1;
  }
  if ((EMBNHHOCCBH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return EMBNHHOCCBH_TypeInfo->static_fields->NNMODPGDIDE;
}

