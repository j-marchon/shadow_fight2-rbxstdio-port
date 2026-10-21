// TypeDefIndex 1364
// Namespace: 
// public sealed class GKKKJLJFGBG : IMessage<GKKKJLJFGBG>, IMessage, IEquatable<GKKKJLJFGBG>, IDeepCloneable<GKKKJLJFGBG>
// Fields:
//   private static readonly MessageParser<GKKKJLJFGBG> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int DMPMKLDAJPH = 1;
//   private static readonly FieldCodec<int> IIBJMKJBAPD; // 0x8
//   private readonly RepeatedField<int> DFKIAOPJPCE; // 0x18
//   public const int LCPJDKCLBKH = 2;
//   private static readonly FieldCodec<PGICCMFLDPI> LONJEFPICPE; // 0x10
//   private readonly RepeatedField<PGICCMFLDPI> LJDACDDNJOD; // 0x20

// ===== public RepeatedField<PGICCMFLDPI> FMOMDAJDIDC()  [RVA 0x31698CC]
// GKKKJLJFGBG$$FMOMDAJDIDC @ RVA 0x31698CC

Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o *
GKKKJLJFGBG__FMOMDAJDIDC(GKKKJLJFGBG_o *__this,MethodInfo *method)

{
  return (__this->fields).LJDACDDNJOD;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x31698D4]
// GKKKJLJFGBG$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x31698D4

Google_Protobuf_Reflection_MessageDescriptor_o *
GKKKJLJFGBG__pb__Google_Protobuf_IMessage_get_Descriptor(GKKKJLJFGBG_o *__this,MethodInfo *method)

{
  GKKKJLJFGBG_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045668db & 1) == 0) {
    FUN_01bab630(&GKKKJLJFGBG_TypeInfo);
    DAT_045668db = 1;
    method = extraout_x1;
  }
  method_00 = GKKKJLJFGBG_TypeInfo;
  if ((GKKKJLJFGBG_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (GKKKJLJFGBG_c *)thunk_FUN_01ba7564(GKKKJLJFGBG_TypeInfo,method);
  }
  pGVar1 = GKKKJLJFGBG__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public void MergeFrom(GKKKJLJFGBG IBKIPBJJCPG)  [RVA 0x3169A24]
// GKKKJLJFGBG$$MergeFrom @ RVA 0x3169A24

void GKKKJLJFGBG__MergeFrom(GKKKJLJFGBG_o *__this,GKKKJLJFGBG_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_int__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o *__this_01;
  Google_Protobuf_UnknownFieldSet_o *pGVar1;
  GKKKJLJFGBG_Fields *pGVar2;
  
  if ((DAT_045668dc & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PGICCMFLDPI>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<int>_Add__);
    DAT_045668dc = 1;
  }
  if (IBKIPBJJCPG != (GKKKJLJFGBG_o *)0x0) {
    __this_00 = (__this->fields).DFKIAOPJPCE;
    if (__this_00 != (Google_Protobuf_Collections_RepeatedField_int__o *)0x0) {
      Google_Protobuf_Collections_RepeatedField<int>__Add
                (__this_00,
                 (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).DFKIAOPJPCE,
                 Method_Google_Protobuf_Collections_RepeatedField<int>_Add__);
      __this_01 = (__this->fields).LJDACDDNJOD;
      if (__this_01 != (Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o *)0x0) {
        Google_Protobuf_Collections_RepeatedField<object>__Add
                  ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                   (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).LJDACDDNJOD,
                   Method_Google_Protobuf_Collections_RepeatedField<PGICCMFLDPI>_Add__);
        pGVar2 = &__this->fields;
        pGVar1 = Google_Protobuf_UnknownFieldSet__MergeFrom
                           (pGVar2->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0)
        ;
        pGVar2->CKFPENBPNML = pGVar1;
        thunk_FUN_01c20e04(pGVar2,pGVar1);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void .ctor()  [RVA 0x3169AD4]
// GKKKJLJFGBG$$.ctor @ RVA 0x3169AD4

void GKKKJLJFGBG___ctor(GKKKJLJFGBG_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_int__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_int__o **ppGVar1;
  Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o *__this_01;
  Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o **ppGVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_045668dd & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<int>__ctor__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PGICCMFLDPI>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<PGICCMFLDPI>_TypeInfo);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<int>_TypeInfo);
    DAT_045668dd = 1;
    method = extraout_x1;
  }
  __this_00 = (Google_Protobuf_Collections_RepeatedField_int__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<int>_TypeInfo,method);
  Google_Protobuf_Collections_RepeatedField<int>___ctor
            (__this_00,Method_Google_Protobuf_Collections_RepeatedField<int>__ctor__);
  ppGVar1 = &(__this->fields).DFKIAOPJPCE;
  *ppGVar1 = __this_00;
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  __this_01 = (Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<PGICCMFLDPI>_TypeInfo);
  Google_Protobuf_Collections_RepeatedField<object>___ctor
            ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
             Method_Google_Protobuf_Collections_RepeatedField<PGICCMFLDPI>__ctor__);
  ppGVar2 = &(__this->fields).LJDACDDNJOD;
  *ppGVar2 = __this_01;
  thunk_FUN_01c20e04(ppGVar2,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static MessageParser<GKKKJLJFGBG> PGCAHPDCJBC()  [RVA 0x3169BB0]
// GKKKJLJFGBG$$PGCAHPDCJBC @ RVA 0x3169BB0

Google_Protobuf_MessageParser_GKKKJLJFGBG__o * GKKKJLJFGBG__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_045668de & 1) == 0) {
    FUN_01bab630(&GKKKJLJFGBG_TypeInfo);
    DAT_045668de = 1;
  }
  if ((GKKKJLJFGBG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return GKKKJLJFGBG_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x3169C08]
// GKKKJLJFGBG$$Equals @ RVA 0x3169C08

bool GKKKJLJFGBG__Equals(GKKKJLJFGBG_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045668df & 1) == 0) {
    FUN_01bab630(&GKKKJLJFGBG_TypeInfo);
    DAT_045668df = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)GKKKJLJFGBG_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = GKKKJLJFGBG__Equals(__this,(GKKKJLJFGBG_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x3169D28]
// GKKKJLJFGBG$$WriteTo @ RVA 0x3169D28

void GKKKJLJFGBG__WriteTo
               (GKKKJLJFGBG_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *__this_01;
  Google_Protobuf_Collections_RepeatedField_int__o *__this_02;
  
  if ((DAT_045668e0 & 1) == 0) {
    FUN_01bab630(&GKKKJLJFGBG_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<int>_WriteTo__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PGICCMFLDPI>_WriteTo__);
    DAT_045668e0 = 1;
  }
  __this_02 = (__this->fields).DFKIAOPJPCE;
  if ((GKKKJLJFGBG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_02 != (Google_Protobuf_Collections_RepeatedField_int__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<int>__WriteTo
              (__this_02,JBGJLELBMJF,
               (Google_Protobuf_FieldCodec_T__o *)GKKKJLJFGBG_TypeInfo->static_fields->IIBJMKJBAPD,
               Method_Google_Protobuf_Collections_RepeatedField<int>_WriteTo__);
    __this_00 = (__this->fields).LJDACDDNJOD;
    if (__this_00 != (Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o *)0x0) {
      Google_Protobuf_Collections_RepeatedField<object>__WriteTo
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,JBGJLELBMJF,
                 (Google_Protobuf_FieldCodec_T__o *)GKKKJLJFGBG_TypeInfo->static_fields->LONJEFPICPE
                 ,Method_Google_Protobuf_Collections_RepeatedField<PGICCMFLDPI>_WriteTo__);
      __this_01 = (__this->fields).CKFPENBPNML;
      if (__this_01 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
        Google_Protobuf_UnknownFieldSet__WriteTo(__this_01,JBGJLELBMJF,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public GKKKJLJFGBG Clone()  [RVA 0x3169E14]
// GKKKJLJFGBG$$Clone @ RVA 0x3169E14

GKKKJLJFGBG_o * GKKKJLJFGBG__Clone(GKKKJLJFGBG_o *__this,MethodInfo *method)

{
  GKKKJLJFGBG_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045668e1 & 1) == 0) {
    FUN_01bab630(&GKKKJLJFGBG_TypeInfo);
    DAT_045668e1 = 1;
    method = extraout_x1;
  }
  __this_00 = (GKKKJLJFGBG_o *)thunk_FUN_01bda818(GKKKJLJFGBG_TypeInfo,method);
  GKKKJLJFGBG___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x3169F2C]
// GKKKJLJFGBG$$MergeFrom @ RVA 0x3169F2C

void GKKKJLJFGBG__MergeFrom
               (GKKKJLJFGBG_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  GKKKJLJFGBG_Fields *pGVar1;
  uint uVar2;
  uint32_t uVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  Google_Protobuf_Collections_RepeatedField_int__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o *__this_01;
  
  if ((DAT_045668e2 & 1) == 0) {
    FUN_01bab630(&GKKKJLJFGBG_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<int>_AddEntriesFrom__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PGICCMFLDPI>_AddEntriesFrom__);
    DAT_045668e2 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    pGVar1 = &__this->fields;
    while( true ) {
      while( true ) {
        while( true ) {
          uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
          uVar2 = uVar3 >> 1 | uVar3 << 0x1f;
          if (1 < uVar2 - 4) break;
          __this_00 = (__this->fields).DFKIAOPJPCE;
          if ((GKKKJLJFGBG_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (__this_00 == (Google_Protobuf_Collections_RepeatedField_int__o *)0x0)
          goto LAB_0326a06c;
          Google_Protobuf_Collections_RepeatedField<int>__AddEntriesFrom
                    (__this_00,AIGOBLJEBCA,
                     (Google_Protobuf_FieldCodec_T__o *)
                     GKKKJLJFGBG_TypeInfo->static_fields->IIBJMKJBAPD,
                     Method_Google_Protobuf_Collections_RepeatedField<int>_AddEntriesFrom__);
        }
        if (uVar2 == 9) break;
        if (uVar2 == 0) {
          return;
        }
        pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                           (pGVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
        pGVar1->CKFPENBPNML = pGVar4;
        thunk_FUN_01c20e04(pGVar1,pGVar4);
      }
      __this_01 = (__this->fields).LJDACDDNJOD;
      if ((GKKKJLJFGBG_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (__this_01 == (Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o *)0x0) break;
      Google_Protobuf_Collections_RepeatedField<object>__AddEntriesFrom
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,AIGOBLJEBCA,
                 (Google_Protobuf_FieldCodec_T__o *)GKKKJLJFGBG_TypeInfo->static_fields->LONJEFPICPE
                 ,Method_Google_Protobuf_Collections_RepeatedField<PGICCMFLDPI>_AddEntriesFrom__);
    }
  }
LAB_0326a06c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x316A070]
// GKKKJLJFGBG$$.cctor @ RVA 0x316A070

void GKKKJLJFGBG___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_GKKKJLJFGBG__o *__this;
  Google_Protobuf_FieldCodec_int__o *pGVar1;
  Google_Protobuf_FieldCodec_PGICCMFLDPI__o *pGVar2;
  Google_Protobuf_FieldCodec_int__o **ppGVar3;
  Google_Protobuf_FieldCodec_PGICCMFLDPI__o **ppGVar4;
  
  if ((DAT_045668e3 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec_ForMessage<PGICCMFLDPI>__);
    FUN_01bab630(&System_Func<GKKKJLJFGBG>_TypeInfo);
    FUN_01bab630(&GKKKJLJFGBG_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<GKKKJLJFGBG>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<GKKKJLJFGBG>_TypeInfo);
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    FUN_01bab630(&Method_GKKKJLJFGBG_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&GKKKJLJFGBG_<>c_TypeInfo);
    DAT_045668e3 = 1;
  }
  if ((GKKKJLJFGBG_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<GKKKJLJFGBG>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_GKKKJLJFGBG__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<GKKKJLJFGBG>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<GKKKJLJFGBG>__ctor__);
  GKKKJLJFGBG_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(GKKKJLJFGBG_TypeInfo->static_fields,__this);
  pGVar1 = Google_Protobuf_FieldCodec__ForInt32(10,(MethodInfo *)0x0);
  ppGVar3 = &GKKKJLJFGBG_TypeInfo->static_fields->IIBJMKJBAPD;
  *ppGVar3 = pGVar1;
  thunk_FUN_01c20e04(ppGVar3,pGVar1);
  if ((PGICCMFLDPI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04566914 == '\0') {
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_04566914 = '\x01';
  }
  if ((PGICCMFLDPI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar2 = (Google_Protobuf_FieldCodec_PGICCMFLDPI__o *)
           Google_Protobuf_FieldCodec__ForMessage<object>
                     (0x12,(Google_Protobuf_MessageParser_T__o *)
                           PGICCMFLDPI_TypeInfo->static_fields->NNMODPGDIDE,
                      Method_Google_Protobuf_FieldCodec_ForMessage<PGICCMFLDPI>__);
  ppGVar4 = &GKKKJLJFGBG_TypeInfo->static_fields->LONJEFPICPE;
  *ppGVar4 = pGVar2;
  thunk_FUN_01c20e04(ppGVar4,pGVar2);
  return;
}


// ===== public override string ToString()  [RVA 0x316A244]
// GKKKJLJFGBG$$ToString @ RVA 0x316A244

System_String_o * GKKKJLJFGBG__ToString(GKKKJLJFGBG_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045668e4 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_045668e4 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public bool Equals(GKKKJLJFGBG IBKIPBJJCPG)  [RVA 0x3169C6C]
// GKKKJLJFGBG$$Equals @ RVA 0x3169C6C

bool GKKKJLJFGBG__Equals(GKKKJLJFGBG_o *__this,GKKKJLJFGBG_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_int__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o *__this_01;
  
  if ((DAT_045668e5 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PGICCMFLDPI>_Equals__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<int>_Equals__);
    DAT_045668e5 = 1;
  }
  if (IBKIPBJJCPG != (GKKKJLJFGBG_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    __this_00 = (__this->fields).DFKIAOPJPCE;
    if (__this_00 == (Google_Protobuf_Collections_RepeatedField_int__o *)0x0) {
LAB_03269d24:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = Google_Protobuf_Collections_RepeatedField<int>__Equals
                      (__this_00,
                       (Google_Protobuf_Collections_RepeatedField_T__o *)
                       (IBKIPBJJCPG->fields).DFKIAOPJPCE,
                       Method_Google_Protobuf_Collections_RepeatedField<int>_Equals__);
    if (bVar1) {
      __this_01 = (__this->fields).LJDACDDNJOD;
      if (__this_01 == (Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o *)0x0)
      goto LAB_03269d24;
      bVar1 = Google_Protobuf_Collections_RepeatedField<object>__Equals
                        ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_01,
                         (Google_Protobuf_Collections_RepeatedField_T__o *)
                         (IBKIPBJJCPG->fields).LJDACDDNJOD,
                         Method_Google_Protobuf_Collections_RepeatedField<PGICCMFLDPI>_Equals__);
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


// ===== public RepeatedField<int> CKMGDDFLHFN()  [RVA 0x316A29C]
// GKKKJLJFGBG$$CKMGDDFLHFN @ RVA 0x316A29C

Google_Protobuf_Collections_RepeatedField_int__o *
GKKKJLJFGBG__CKMGDDFLHFN(GKKKJLJFGBG_o *__this,MethodInfo *method)

{
  return (__this->fields).DFKIAOPJPCE;
}


// ===== public int CalculateSize()  [RVA 0x316A2A4]
// GKKKJLJFGBG$$CalculateSize @ RVA 0x316A2A4

int32_t GKKKJLJFGBG__CalculateSize(GKKKJLJFGBG_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  MethodInfo *extraout_x1;
  Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *__this_01;
  int iVar3;
  Google_Protobuf_Collections_RepeatedField_int__o *__this_02;
  
  if ((DAT_045668e6 & 1) == 0) {
    FUN_01bab630(&GKKKJLJFGBG_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PGICCMFLDPI>_CalculateSize__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<int>_CalculateSize__);
    DAT_045668e6 = 1;
    method = extraout_x1;
  }
  __this_02 = (__this->fields).DFKIAOPJPCE;
  if ((GKKKJLJFGBG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GKKKJLJFGBG_TypeInfo,method);
  }
  if (__this_02 != (Google_Protobuf_Collections_RepeatedField_int__o *)0x0) {
    iVar1 = Google_Protobuf_Collections_RepeatedField<int>__CalculateSize
                      (__this_02,
                       (Google_Protobuf_FieldCodec_T__o *)
                       GKKKJLJFGBG_TypeInfo->static_fields->IIBJMKJBAPD,
                       Method_Google_Protobuf_Collections_RepeatedField<int>_CalculateSize__);
    __this_00 = (__this->fields).LJDACDDNJOD;
    if (__this_00 != (Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o *)0x0) {
      iVar2 = Google_Protobuf_Collections_RepeatedField<object>__CalculateSize
                        ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                         (Google_Protobuf_FieldCodec_T__o *)
                         GKKKJLJFGBG_TypeInfo->static_fields->LONJEFPICPE,
                         Method_Google_Protobuf_Collections_RepeatedField<PGICCMFLDPI>_CalculateSize__
                        );
      __this_01 = (__this->fields).CKFPENBPNML;
      iVar3 = iVar2 + iVar1;
      if (__this_01 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
        iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_01,(MethodInfo *)0x0);
        iVar3 = iVar1 + iVar3;
      }
      return iVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x3169920]
// GKKKJLJFGBG$$FFHIHGCDGAK @ RVA 0x3169920

Google_Protobuf_Reflection_MessageDescriptor_o * GKKKJLJFGBG__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_045668e7 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_045668e7 = 1;
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
        goto LAB_03269a08;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_03269a08:
                    /* WARNING: Could not recover jumptable at 0x03269a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x2f,pVVar2->method);
  return pGVar3;
}


// ===== public void .ctor(GKKKJLJFGBG IBKIPBJJCPG)  [RVA 0x3169E6C]
// GKKKJLJFGBG$$.ctor @ RVA 0x3169E6C

void GKKKJLJFGBG___ctor(GKKKJLJFGBG_o *__this,GKKKJLJFGBG_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_int__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_T__o *pGVar1;
  Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o *pGVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_045668e8 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PGICCMFLDPI>_Clone__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<int>_Clone__);
    DAT_045668e8 = 1;
    method_00 = extraout_x1;
  }
  GKKKJLJFGBG___ctor(__this,method_00);
  if ((IBKIPBJJCPG != (GKKKJLJFGBG_o *)0x0) &&
     (__this_00 = (IBKIPBJJCPG->fields).DFKIAOPJPCE,
     __this_00 != (Google_Protobuf_Collections_RepeatedField_int__o *)0x0)) {
    pGVar1 = Google_Protobuf_Collections_RepeatedField<int>__Clone
                       (__this_00,Method_Google_Protobuf_Collections_RepeatedField<int>_Clone__);
    (__this->fields).DFKIAOPJPCE = (Google_Protobuf_Collections_RepeatedField_int__o *)pGVar1;
    thunk_FUN_01c20e04();
    pGVar2 = (IBKIPBJJCPG->fields).LJDACDDNJOD;
    if (pGVar2 != (Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o *)0x0) {
      pGVar2 = (Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o *)
               Google_Protobuf_Collections_RepeatedField<object>__Clone
                         ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar2,
                          Method_Google_Protobuf_Collections_RepeatedField<PGICCMFLDPI>_Clone__);
      (__this->fields).LJDACDDNJOD = pGVar2;
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


// ===== public override int GetHashCode()  [RVA 0x316A384]
// GKKKJLJFGBG$$GetHashCode @ RVA 0x316A384

int32_t GKKKJLJFGBG__GetHashCode(GKKKJLJFGBG_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  Google_Protobuf_Collections_RepeatedField_int__o *pGVar3;
  undefined8 uVar4;
  Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o *pGVar5;
  Google_Protobuf_UnknownFieldSet_o *pGVar6;
  undefined1 auVar7 [16];
  
  pGVar3 = (__this->fields).DFKIAOPJPCE;
  uVar4 = 0;
  if (pGVar3 != (Google_Protobuf_Collections_RepeatedField_int__o *)0x0) {
    auVar7 = (*(pGVar3->klass->vtable)._2_GetHashCode.methodPtr)
                       (pGVar3,(pGVar3->klass->vtable)._2_GetHashCode.method);
    method = auVar7._8_8_;
    uVar4 = auVar7._0_8_;
    pGVar5 = (__this->fields).LJDACDDNJOD;
    if (pGVar5 != (Google_Protobuf_Collections_RepeatedField_PGICCMFLDPI__o *)0x0) {
      uVar1 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
      pGVar6 = (__this->fields).CKFPENBPNML;
      uVar1 = auVar7._0_4_ ^ uVar1 ^ 1;
      if (pGVar6 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
        uVar2 = (*(pGVar6->klass->vtable)._2_GetHashCode.methodPtr)
                          (pGVar6,(pGVar6->klass->vtable)._2_GetHashCode.method);
        uVar1 = uVar2 ^ uVar1;
      }
      return uVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar4,method);
}

