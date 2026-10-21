// TypeDefIndex 873
// Namespace: 
// public sealed class KKGHPKOFEHM : IMessage<KKGHPKOFEHM>, IMessage, IEquatable<KKGHPKOFEHM>, IDeepCloneable<KKGHPKOFEHM>
// Fields:
//   private static readonly MessageParser<KKGHPKOFEHM> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int KGBOMFIKDEC = 1;
//   private KAMBBJFPLGM OPHCNELIOLD; // 0x18
//   public const int FIBBIMNFAAM = 2;
//   private static readonly FieldCodec<PIADCKMDDAK> NIOOECHHOMN; // 0x8
//   private readonly RepeatedField<PIADCKMDDAK> NNDJCFCJGMO; // 0x20

// ===== private static void .cctor()  [RVA 0x308D19C]
// KKGHPKOFEHM$$.cctor @ RVA 0x308D19C

void KKGHPKOFEHM___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_KKGHPKOFEHM__o *__this;
  Google_Protobuf_FieldCodec_PIADCKMDDAK__o *pGVar1;
  Google_Protobuf_FieldCodec_PIADCKMDDAK__o **ppGVar2;
  
  if ((DAT_04566069 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForMessage<PIADCKMDDAK>__);
    FUN_01bab630(&System_Func<KKGHPKOFEHM>_TypeInfo);
    FUN_01bab630(&KKGHPKOFEHM_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<KKGHPKOFEHM>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<KKGHPKOFEHM>_TypeInfo);
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    FUN_01bab630(&Method_KKGHPKOFEHM_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&KKGHPKOFEHM_<>c_TypeInfo);
    DAT_04566069 = 1;
  }
  if ((KKGHPKOFEHM_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<KKGHPKOFEHM>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_KKGHPKOFEHM__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<KKGHPKOFEHM>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<KKGHPKOFEHM>__ctor__);
  KKGHPKOFEHM_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(KKGHPKOFEHM_TypeInfo->static_fields,__this);
  if ((PIADCKMDDAK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_045660fa == '\0') {
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    DAT_045660fa = '\x01';
  }
  if ((PIADCKMDDAK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar1 = (Google_Protobuf_FieldCodec_PIADCKMDDAK__o *)
           Google_Protobuf_FieldCodec__ForMessage<object>
                     (0x12,(Google_Protobuf_MessageParser_T__o *)
                           PIADCKMDDAK_TypeInfo->static_fields->NNMODPGDIDE,
                      Method_Google_Protobuf_FieldCodec_ForMessage<PIADCKMDDAK>__);
  ppGVar2 = &KKGHPKOFEHM_TypeInfo->static_fields->NIOOECHHOMN;
  *ppGVar2 = pGVar1;
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}


// ===== public override string ToString()  [RVA 0x308D34C]
// KKGHPKOFEHM$$ToString @ RVA 0x308D34C

System_String_o * KKGHPKOFEHM__ToString(KKGHPKOFEHM_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456606a & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_0456606a = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public RepeatedField<PIADCKMDDAK> GMIFPLNCLFM()  [RVA 0x308D3A4]
// KKGHPKOFEHM$$GMIFPLNCLFM @ RVA 0x308D3A4

Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *
KKGHPKOFEHM__GMIFPLNCLFM(KKGHPKOFEHM_o *__this,MethodInfo *method)

{
  return (__this->fields).NNDJCFCJGMO;
}


// ===== public KKGHPKOFEHM Clone()  [RVA 0x308D3AC]
// KKGHPKOFEHM$$Clone @ RVA 0x308D3AC

KKGHPKOFEHM_o * KKGHPKOFEHM__Clone(KKGHPKOFEHM_o *__this,MethodInfo *method)

{
  KKGHPKOFEHM_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_0456606b & 1) == 0) {
    FUN_01bab630(&KKGHPKOFEHM_TypeInfo);
    DAT_0456606b = 1;
    method = extraout_x1;
  }
  __this_00 = (KKGHPKOFEHM_o *)thunk_FUN_01bda818(KKGHPKOFEHM_TypeInfo,method);
  KKGHPKOFEHM___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public static MessageParser<KKGHPKOFEHM> PGCAHPDCJBC()  [RVA 0x308D4C0]
// KKGHPKOFEHM$$PGCAHPDCJBC @ RVA 0x308D4C0

Google_Protobuf_MessageParser_KKGHPKOFEHM__o * KKGHPKOFEHM__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_0456606c & 1) == 0) {
    FUN_01bab630(&KKGHPKOFEHM_TypeInfo);
    DAT_0456606c = 1;
  }
  if ((KKGHPKOFEHM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return KKGHPKOFEHM_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public override int GetHashCode()  [RVA 0x308D518]
// KKGHPKOFEHM$$GetHashCode @ RVA 0x308D518

int32_t KKGHPKOFEHM__GetHashCode(KKGHPKOFEHM_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  KAMBBJFPLGM_o *pKVar3;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar4;
  MethodInfo *extraout_x1;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  
  pKVar3 = (__this->fields).OPHCNELIOLD;
  if (pKVar3 == (KAMBBJFPLGM_o *)0x0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (*(pKVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pKVar3,(pKVar3->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar1 ^ 1;
    method = extraout_x1;
  }
  pGVar4 = (__this->fields).NNDJCFCJGMO;
  if (pGVar4 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
    uVar2 = (*(pGVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar4,(pGVar4->klass->vtable)._2_GetHashCode.method);
    pGVar5 = (__this->fields).CKFPENBPNML;
    uVar2 = uVar2 ^ uVar1;
    if (pGVar5 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      uVar1 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
      uVar2 = uVar1 ^ uVar2;
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x308D58C]
// KKGHPKOFEHM$$WriteTo @ RVA 0x308D58C

void KKGHPKOFEHM__WriteTo
               (KKGHPKOFEHM_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_01;
  
  if ((DAT_0456606d & 1) == 0) {
    FUN_01bab630(&KKGHPKOFEHM_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_WriteTo__);
    DAT_0456606d = 1;
  }
  if ((__this->fields).OPHCNELIOLD != (KAMBBJFPLGM_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_0318d66c;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).OPHCNELIOLD,
               (MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).NNDJCFCJGMO;
  if ((KKGHPKOFEHM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__WriteTo
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,JBGJLELBMJF,
               (Google_Protobuf_FieldCodec_T__o *)KKGHPKOFEHM_TypeInfo->static_fields->NIOOECHHOMN,
               Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_WriteTo__);
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_0318d66c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MergeFrom(KKGHPKOFEHM IBKIPBJJCPG)  [RVA 0x308D670]
// KKGHPKOFEHM$$MergeFrom @ RVA 0x308D670

void KKGHPKOFEHM__MergeFrom(KKGHPKOFEHM_o *__this,KKGHPKOFEHM_o *IBKIPBJJCPG,MethodInfo *method)

{
  KAMBBJFPLGM_o *pKVar1;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  KKGHPKOFEHM_Fields *pKVar3;
  KAMBBJFPLGM_o **ppKVar4;
  
  if ((DAT_0456606e & 1) == 0) {
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
    DAT_0456606e = 1;
  }
  if (IBKIPBJJCPG == (KKGHPKOFEHM_o *)0x0) {
    return;
  }
  if ((IBKIPBJJCPG->fields).OPHCNELIOLD != (KAMBBJFPLGM_o *)0x0) {
    ppKVar4 = &(__this->fields).OPHCNELIOLD;
    pKVar1 = *ppKVar4;
    if (pKVar1 == (KAMBBJFPLGM_o *)0x0) {
      pKVar1 = (KAMBBJFPLGM_o *)thunk_FUN_01bda818(KAMBBJFPLGM_TypeInfo);
      KAMBBJFPLGM___ctor(pKVar1,(MethodInfo *)0x0);
      *ppKVar4 = pKVar1;
      thunk_FUN_01c20e04(ppKVar4,pKVar1);
      pKVar1 = *ppKVar4;
      if (pKVar1 == (KAMBBJFPLGM_o *)0x0) goto LAB_0318d760;
    }
    KAMBBJFPLGM__MergeFrom(pKVar1,(IBKIPBJJCPG->fields).OPHCNELIOLD,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).NNDJCFCJGMO;
  if (__this_00 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<object>__Add
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).NNDJCFCJGMO,
               Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
    pKVar3 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pKVar3->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pKVar3->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pKVar3,pGVar2);
    return;
  }
LAB_0318d760:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool Equals(KKGHPKOFEHM IBKIPBJJCPG)  [RVA 0x308D764]
// KKGHPKOFEHM$$Equals @ RVA 0x308D764

bool KKGHPKOFEHM__Equals(KKGHPKOFEHM_o *__this,KKGHPKOFEHM_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_00;
  
  if ((DAT_0456606f & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Equals__);
    DAT_0456606f = 1;
  }
  if (IBKIPBJJCPG != (KKGHPKOFEHM_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_Object__Equals
                      ((Il2CppObject *)(__this->fields).OPHCNELIOLD,
                       (Il2CppObject *)(IBKIPBJJCPG->fields).OPHCNELIOLD,(MethodInfo *)0x0);
    if (bVar1) {
      __this_00 = (__this->fields).NNDJCFCJGMO;
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                        ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                         (Google_Protobuf_Collections_RepeatedField_T__o *)
                         (IBKIPBJJCPG->fields).NNDJCFCJGMO,
                         Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Equals__);
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


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x308D808]
// KKGHPKOFEHM$$MergeFrom @ RVA 0x308D808

void KKGHPKOFEHM__MergeFrom
               (KKGHPKOFEHM_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  KAMBBJFPLGM_o **ppKVar1;
  KKGHPKOFEHM_Fields *pKVar2;
  uint32_t uVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  KAMBBJFPLGM_o *pKVar5;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_00;
  
  if ((DAT_04566070 & 1) == 0) {
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    FUN_01bab630(&KKGHPKOFEHM_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_AddEntriesFrom__);
    DAT_04566070 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    ppKVar1 = &(__this->fields).OPHCNELIOLD;
    pKVar2 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar3 == 10) {
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
        if (uVar3 == 0x12) break;
        if (uVar3 == 0) {
          return;
        }
        pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                           (pKVar2->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
        pKVar2->CKFPENBPNML = pGVar4;
        thunk_FUN_01c20e04(pKVar2,pGVar4);
      }
      __this_00 = (__this->fields).NNDJCFCJGMO;
      if ((KKGHPKOFEHM_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) break;
      Google_Protobuf_Collections_RepeatedField<object>__AddEntriesFrom
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,AIGOBLJEBCA,
                 (Google_Protobuf_FieldCodec_T__o *)KKGHPKOFEHM_TypeInfo->static_fields->NIOOECHHOMN
                 ,Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_AddEntriesFrom__);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x308D958]
// KKGHPKOFEHM$$.ctor @ RVA 0x308D958

void KKGHPKOFEHM___ctor(KKGHPKOFEHM_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o **ppGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566071 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_TypeInfo);
    DAT_04566071 = 1;
    method = extraout_x1;
  }
  __this_00 = (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_TypeInfo,
                                 method);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
             Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>__ctor__);
  ppGVar1 = &(__this->fields).NNDJCFCJGMO;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void IIBFFDJAKFB(KAMBBJFPLGM CJNHFNHJHPE)  [RVA 0x308D9E0]
// KKGHPKOFEHM$$IIBFFDJAKFB @ RVA 0x308D9E0

void KKGHPKOFEHM__IIBFFDJAKFB(KKGHPKOFEHM_o *__this,KAMBBJFPLGM_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).OPHCNELIOLD = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public int CalculateSize()  [RVA 0x308D9E8]
// KKGHPKOFEHM$$CalculateSize @ RVA 0x308D9E8

int32_t KKGHPKOFEHM__CalculateSize(KKGHPKOFEHM_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *extraout_x1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  KAMBBJFPLGM_o *value;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_01;
  int iVar2;
  
  if ((DAT_04566072 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    FUN_01bab630(&KKGHPKOFEHM_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_CalculateSize__);
    DAT_04566072 = 1;
    method = extraout_x1;
  }
  value = (__this->fields).OPHCNELIOLD;
  if (value == (KAMBBJFPLGM_o *)0x0) {
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
  __this_01 = (__this->fields).NNDJCFCJGMO;
  if ((KKGHPKOFEHM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
    iVar1 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                       (Google_Protobuf_FieldCodec_T__o *)
                       KKGHPKOFEHM_TypeInfo->static_fields->NIOOECHHOMN,
                       Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_CalculateSize__
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


// ===== public void .ctor(KKGHPKOFEHM IBKIPBJJCPG)  [RVA 0x308D404]
// KKGHPKOFEHM$$.ctor @ RVA 0x308D404

void KKGHPKOFEHM___ctor(KKGHPKOFEHM_o *__this,KKGHPKOFEHM_o *IBKIPBJJCPG,MethodInfo *method)

{
  KAMBBJFPLGM_o *pKVar1;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_04566073 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Clone__);
    DAT_04566073 = 1;
    method_00 = extraout_x1;
  }
  KKGHPKOFEHM___ctor(__this,method_00);
  if (IBKIPBJJCPG != (KKGHPKOFEHM_o *)0x0) {
    pKVar1 = (IBKIPBJJCPG->fields).OPHCNELIOLD;
    if (pKVar1 == (KAMBBJFPLGM_o *)0x0) {
      pKVar1 = (KAMBBJFPLGM_o *)0x0;
    }
    else {
      pKVar1 = KAMBBJFPLGM__Clone(pKVar1,(MethodInfo *)0x0);
    }
    if (__this != (KKGHPKOFEHM_o *)0x0) {
      (__this->fields).OPHCNELIOLD = pKVar1;
      thunk_FUN_01c20e04();
      pGVar2 = (IBKIPBJJCPG->fields).NNDJCFCJGMO;
      if (pGVar2 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
        pGVar2 = (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)
                 Google_Protobuf_Collections_RepeatedField<object>__Clone
                           ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar2,
                            Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Clone__);
        (__this->fields).NNDJCFCJGMO = pGVar2;
        thunk_FUN_01c20e04();
        pGVar3 = Google_Protobuf_UnknownFieldSet__Clone
                           ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
        (__this->fields).CKFPENBPNML = pGVar3;
        thunk_FUN_01c20e04(&__this->fields,pGVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public KAMBBJFPLGM JCKINNMKHBA()  [RVA 0x308DADC]
// KKGHPKOFEHM$$JCKINNMKHBA @ RVA 0x308DADC

KAMBBJFPLGM_o * KKGHPKOFEHM__JCKINNMKHBA(KKGHPKOFEHM_o *__this,MethodInfo *method)

{
  return (__this->fields).OPHCNELIOLD;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x308DAE4]
// KKGHPKOFEHM$$Equals @ RVA 0x308DAE4

bool KKGHPKOFEHM__Equals(KKGHPKOFEHM_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04566074 & 1) == 0) {
    FUN_01bab630(&KKGHPKOFEHM_TypeInfo);
    DAT_04566074 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)KKGHPKOFEHM_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = KKGHPKOFEHM__Equals(__this,(KKGHPKOFEHM_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x308DB48]
// KKGHPKOFEHM$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x308DB48

Google_Protobuf_Reflection_MessageDescriptor_o *
KKGHPKOFEHM__pb__Google_Protobuf_IMessage_get_Descriptor(KKGHPKOFEHM_o *__this,MethodInfo *method)

{
  KKGHPKOFEHM_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566075 & 1) == 0) {
    FUN_01bab630(&KKGHPKOFEHM_TypeInfo);
    DAT_04566075 = 1;
    method = extraout_x1;
  }
  method_00 = KKGHPKOFEHM_TypeInfo;
  if ((KKGHPKOFEHM_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (KKGHPKOFEHM_c *)thunk_FUN_01ba7564(KKGHPKOFEHM_TypeInfo,method);
  }
  pGVar1 = KKGHPKOFEHM__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x308DB94]
// KKGHPKOFEHM$$FFHIHGCDGAK @ RVA 0x308DB94

Google_Protobuf_Reflection_MessageDescriptor_o * KKGHPKOFEHM__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04566076 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04566076 = 1;
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
        goto LAB_0318dc7c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_0318dc7c:
                    /* WARNING: Could not recover jumptable at 0x0318dc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x35,pVVar2->method);
  return pGVar3;
}

