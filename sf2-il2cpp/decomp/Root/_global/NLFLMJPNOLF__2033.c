// TypeDefIndex 2033
// Namespace: 
// public sealed class NLFLMJPNOLF : IMessage<NLFLMJPNOLF>, IMessage, IEquatable<NLFLMJPNOLF>, IDeepCloneable<NLFLMJPNOLF>
// Fields:
//   private static readonly MessageParser<NLFLMJPNOLF> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int DENAGDCDHOL = 1;
//   private long OHMDCKEDOGH; // 0x18
//   public const int AMFJKPAHLBO = 2;
//   private int IILCHFKCEEH; // 0x20
//   public const int GCLPBKBADPG = 3;
//   private static readonly FieldCodec<long> CCHHCINKGLK; // 0x8
//   private readonly RepeatedField<long> MABPCBMOECE; // 0x28
//   public const int HGCBBMGLDHA = 4;
//   private bool BHAOPCFDKCG; // 0x30

// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x32A73F0]
// NLFLMJPNOLF$$MergeFrom @ RVA 0x32A73F0

void NLFLMJPNOLF__MergeFrom
               (NLFLMJPNOLF_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  NLFLMJPNOLF_Fields *pNVar1;
  bool bVar2;
  uint uVar3;
  int32_t iVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  int64_t iVar6;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_00;
  
  if ((DAT_04567401 & 1) == 0) {
    FUN_01bab630(&NLFLMJPNOLF_TypeInfo);
                    /* try { // try from 033a7424 to 034a74b7 has its CatchHandler @ 033a7424
                       catch() { ... } // from try @ 033a7424 with catch @ 033a7424
                       catch() { ... } // from try @ 033a771c with catch @ 033a7424
                       catch() { ... } // from try @ 033a77b8 with catch @ 033a7424
                       catch() { ... } // from try @ 033a7a88 with catch @ 033a7424
                       catch() { ... } // from try @ 033a7b34 with catch @ 033a7424
                       catch() { ... } // from try @ 033a7b70 with catch @ 033a7424
                       catch() { ... } // from try @ 033a7ba0 with catch @ 033a7424
                       catch() { ... } // from try @ 033a7c1c with catch @ 033a7424 */
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_AddEntriesFrom__);
    DAT_04567401 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    if (uVar3 != 0) {
      pNVar1 = &__this->fields;
      do {
        if (uVar3 < 0x11) {
          if (uVar3 == 8) {
                    /* try { // try from 033a7518 to 034a751f has its CatchHandler @ 033a7810 */
            iVar6 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
            (__this->fields).OHMDCKEDOGH = iVar6;
          }
          else if (uVar3 == 0x10) {
            iVar4 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
            (__this->fields).IILCHFKCEEH = iVar4;
          }
          else {
LAB_033a74b8:
                    /* try { // try from 033a74b8 to 034a74cf has its CatchHandler @ 033a7838 */
            pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                               (pNVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
            pNVar1->CKFPENBPNML = pGVar5;
            thunk_FUN_01c20e04(pNVar1,pGVar5);
          }
        }
        else if ((uVar3 == 0x18) || (uVar3 == 0x1a)) {
          __this_00 = (__this->fields).MABPCBMOECE;
          if ((NLFLMJPNOLF_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (__this_00 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)
          goto LAB_033a7548;
                    /* try { // try from 033a74f4 to 034a750b has its CatchHandler @ 033a7834 */
          Google_Protobuf_Collections_RepeatedField<long>__AddEntriesFrom
                    (__this_00,AIGOBLJEBCA,
                     (Google_Protobuf_FieldCodec_T__o *)
                     NLFLMJPNOLF_TypeInfo->static_fields->CCHHCINKGLK,
                     Method_Google_Protobuf_Collections_RepeatedField<long>_AddEntriesFrom__);
        }
        else {
          if (uVar3 != 0x20) goto LAB_033a74b8;
          bVar2 = Google_Protobuf_CodedInputStream__ReadBool(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).BHAOPCFDKCG = bVar2;
        }
        uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
      } while (uVar3 != 0);
    }
                    /* try { // try from 033a753c to 034a753f has its CatchHandler @ 033a77b8 */
                    /* try { // try from 033a7540 to 034a754b has its CatchHandler @ 033a780c */
    return;
  }
LAB_033a7548:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override int GetHashCode()  [RVA 0x32A754C]
// NLFLMJPNOLF$$GetHashCode @ RVA 0x32A754C

int32_t NLFLMJPNOLF__GetHashCode(NLFLMJPNOLF_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  Google_Protobuf_Collections_RepeatedField_long__o *pGVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  long lVar6;
  undefined1 local_28 [4];
  int local_24;
  long local_18;
  
                    /* try { // try from 033a7550 to 034a755b has its CatchHandler @ 033a7808 */
  if ((DAT_04567402 & 1) == 0) {
                    /* try { // try from 033a7570 to 034a7577 has its CatchHandler @ 033a77c0 */
    FUN_01bab630(&bool_TypeInfo);
    DAT_04567402 = 1;
  }
  local_18 = 0;
  local_24 = 0;
  local_28[0] = 0;
                    /* try { // try from 033a7588 to 034a7593 has its CatchHandler @ 033a77bc */
  lVar6 = (__this->fields).OHMDCKEDOGH;
  if (lVar6 == 0) {
    uVar2 = 1;
  }
  else {
    local_18 = lVar6;
    uVar2 = System_Int64__GetHashCode((int64_t)&local_18,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
                    /* try { // try from 033a75ac to 034a75b7 has its CatchHandler @ 033a7824 */
  iVar1 = (__this->fields).IILCHFKCEEH;
  if (iVar1 != 0) {
    local_24 = iVar1;
    uVar3 = System_Int32__GetHashCode((int32_t)&local_24,(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  pGVar4 = (__this->fields).MABPCBMOECE;
  if (pGVar4 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
                    /* try { // try from 033a75d0 to 034a75d7 has its CatchHandler @ 033a782c */
    uVar3 = (*(pGVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar4,(pGVar4->klass->vtable)._2_GetHashCode.method);
                    /* try { // try from 033a75dc to 034a75e3 has its CatchHandler @ 033a7800 */
    uVar3 = uVar3 ^ uVar2;
    if ((__this->fields).BHAOPCFDKCG != false) {
                    /* try { // try from 033a75f0 to 034a75f7 has its CatchHandler @ 033a77f8 */
      local_28[0] = 1;
      if ((bool_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033a7604 to 034a760b has its CatchHandler @ 033a77f0 */
        thunk_FUN_01ba7564();
      }
      uVar2 = System_Boolean__GetHashCode(SUB81(local_28,0),(MethodInfo *)0x0);
      uVar3 = uVar2 ^ uVar3;
    }
    pGVar5 = (__this->fields).CKFPENBPNML;
    if (pGVar5 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
                    /* try { // try from 033a7628 to 034a765b has its CatchHandler @ 033a7848 */
      uVar2 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                        (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
      uVar3 = uVar2 ^ uVar3;
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public NLFLMJPNOLF Clone()  [RVA 0x32A7648]
// NLFLMJPNOLF$$Clone @ RVA 0x32A7648

NLFLMJPNOLF_o * NLFLMJPNOLF__Clone(NLFLMJPNOLF_o *__this,MethodInfo *method)

{
  NLFLMJPNOLF_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04567403 & 1) == 0) {
    FUN_01bab630(&NLFLMJPNOLF_TypeInfo);
                    /* try { // try from 033a7674 to 034a767b has its CatchHandler @ 033a7828 */
    DAT_04567403 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 033a7680 to 034a7687 has its CatchHandler @ 033a77e4 */
  __this_00 = (NLFLMJPNOLF_o *)thunk_FUN_01bda818(NLFLMJPNOLF_TypeInfo,method);
  NLFLMJPNOLF___ctor(__this_00,__this,in_x2);
                    /* try { // try from 033a7694 to 034a769b has its CatchHandler @ 033a77d8 */
  return __this_00;
}


// ===== public int JOHPOJPPMBO()  [RVA 0x32A7744]
// NLFLMJPNOLF$$JOHPOJPPMBO @ RVA 0x32A7744

int32_t NLFLMJPNOLF__JOHPOJPPMBO(NLFLMJPNOLF_o *__this,MethodInfo *method)

{
  return (__this->fields).IILCHFKCEEH;
}


// ===== public void MergeFrom(NLFLMJPNOLF IBKIPBJJCPG)  [RVA 0x32A774C]
// NLFLMJPNOLF$$MergeFrom @ RVA 0x32A774C

void NLFLMJPNOLF__MergeFrom(NLFLMJPNOLF_o *__this,NLFLMJPNOLF_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  long lVar3;
  NLFLMJPNOLF_Fields *pNVar4;
  
  if ((DAT_04567404 & 1) == 0) {
                    /* try { // try from 033a7770 to 034a7773 has its CatchHandler @ 033a7820 */
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
                    /* try { // try from 033a7774 to 034a777b has its CatchHandler @ 033a7830 */
    DAT_04567404 = 1;
  }
                    /* try { // try from 033a777c to 034a777f has its CatchHandler @ 033a781c */
  if (IBKIPBJJCPG == (NLFLMJPNOLF_o *)0x0) {
                    /* catch() { ... } // from try @ 033a7798 with catch @ 033a77ec */
                    /* catch() { ... } // from try @ 033a7604 with catch @ 033a77f0 */
                    /* catch() { ... } // from try @ 033a7794 with catch @ 033a77f4 */
    return;
  }
                    /* try { // try from 033a7780 to 034a7783 has its CatchHandler @ 033a7818 */
  lVar3 = (IBKIPBJJCPG->fields).OHMDCKEDOGH;
                    /* try { // try from 033a7784 to 034a7787 has its CatchHandler @ 033a7814 */
  if (lVar3 != 0) {
                    /* try { // try from 033a7788 to 034a778b has its CatchHandler @ 033a7804 */
    (__this->fields).OHMDCKEDOGH = lVar3;
  }
                    /* try { // try from 033a778c to 034a778f has its CatchHandler @ 033a782c */
  iVar1 = (IBKIPBJJCPG->fields).IILCHFKCEEH;
                    /* try { // try from 033a7790 to 034a7793 has its CatchHandler @ 033a77fc */
  if (iVar1 != 0) {
                    /* try { // try from 033a7794 to 034a7797 has its CatchHandler @ 033a77f4 */
    (__this->fields).IILCHFKCEEH = iVar1;
  }
                    /* try { // try from 033a7798 to 034a779b has its CatchHandler @ 033a77ec */
  __this_00 = (__this->fields).MABPCBMOECE;
                    /* try { // try from 033a779c to 034a779f has its CatchHandler @ 033a77e8 */
  if (__this_00 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
                    /* try { // try from 033a77a0 to 034a77a3 has its CatchHandler @ 033a7828 */
                    /* try { // try from 033a77a4 to 034a77a7 has its CatchHandler @ 033a77e0 */
                    /* try { // try from 033a77a8 to 034a77ab has its CatchHandler @ 033a77dc */
                    /* try { // try from 033a77ac to 034a77af has its CatchHandler @ 033a77d4 */
                    /* try { // try from 033a77b0 to 034a77b3 has its CatchHandler @ 033a77cc */
    Google_Protobuf_Collections_RepeatedField<long>__Add
              (__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).MABPCBMOECE,
               Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
                    /* try { // try from 033a77b4 to 034a77b7 has its CatchHandler @ 033a7830 */
                    /* catch() { ... } // from try @ 033a753c with catch @ 033a77b8
                       try { // try from 033a77b8 to 034a7863 has its CatchHandler @ 033a7424 */
    if ((IBKIPBJJCPG->fields).BHAOPCFDKCG != false) {
                    /* catch() { ... } // from try @ 033a7588 with catch @ 033a77bc */
                    /* catch() { ... } // from try @ 033a7570 with catch @ 033a77c0 */
      (__this->fields).BHAOPCFDKCG = true;
    }
    pNVar4 = &__this->fields;
                    /* catch() { ... } // from try @ 033a77b0 with catch @ 033a77cc */
                    /* catch() { ... } // from try @ 033a76a8 with catch @ 033a77d0 */
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pNVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033a77ac with catch @ 033a77d4 */
                    /* catch() { ... } // from try @ 033a7694 with catch @ 033a77d8 */
    pNVar4->CKFPENBPNML = pGVar2;
                    /* catch() { ... } // from try @ 033a77a8 with catch @ 033a77dc */
                    /* catch() { ... } // from try @ 033a77a4 with catch @ 033a77e0 */
                    /* catch() { ... } // from try @ 033a7680 with catch @ 033a77e4 */
                    /* catch() { ... } // from try @ 033a779c with catch @ 033a77e8 */
    thunk_FUN_01c20e04(pNVar4,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033a75f0 with catch @ 033a77f8 */
  FUN_01bab8c8();
}


// ===== public RepeatedField<long> EGJMIMOGIMP()  [RVA 0x32A77FC]
// NLFLMJPNOLF$$EGJMIMOGIMP @ RVA 0x32A77FC

Google_Protobuf_Collections_RepeatedField_long__o *
NLFLMJPNOLF__EGJMIMOGIMP(NLFLMJPNOLF_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 033a7790 with catch @ 033a77fc */
                    /* catch() { ... } // from try @ 033a75dc with catch @ 033a7800 */
  return (__this->fields).MABPCBMOECE;
}


// ===== public long NOJELIALAIO()  [RVA 0x32A7804]
// NLFLMJPNOLF$$NOJELIALAIO @ RVA 0x32A7804

int64_t NLFLMJPNOLF__NOJELIALAIO(NLFLMJPNOLF_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 033a7788 with catch @ 033a7804 */
                    /* catch() { ... } // from try @ 033a7550 with catch @ 033a7808 */
  return (__this->fields).OHMDCKEDOGH;
}


// ===== public override string ToString()  [RVA 0x32A780C]
// NLFLMJPNOLF$$ToString @ RVA 0x32A780C

System_String_o * NLFLMJPNOLF__ToString(NLFLMJPNOLF_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 033a7540 with catch @ 033a780c */
                    /* catch() { ... } // from try @ 033a7518 with catch @ 033a7810 */
                    /* catch() { ... } // from try @ 033a7784 with catch @ 033a7814 */
                    /* catch() { ... } // from try @ 033a7780 with catch @ 033a7818 */
                    /* catch() { ... } // from try @ 033a777c with catch @ 033a781c */
                    /* catch() { ... } // from try @ 033a7770 with catch @ 033a7820 */
                    /* catch() { ... } // from try @ 033a75ac with catch @ 033a7824 */
                    /* catch() { ... } // from try @ 033a7674 with catch @ 033a7828
                       catch() { ... } // from try @ 033a77a0 with catch @ 033a7828 */
  if ((DAT_04567405 & 1) == 0) {
                    /* catch() { ... } // from try @ 033a75d0 with catch @ 033a782c
                       catch() { ... } // from try @ 033a778c with catch @ 033a782c */
                    /* catch() { ... } // from try @ 033a7714 with catch @ 033a7830
                       catch() { ... } // from try @ 033a7774 with catch @ 033a7830
                       catch() { ... } // from try @ 033a77b4 with catch @ 033a7830 */
                    /* catch() { ... } // from try @ 033a74f4 with catch @ 033a7834 */
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
                    /* catch() { ... } // from try @ 033a74b8 with catch @ 033a7838 */
    DAT_04567405 = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 033a76cc with catch @ 033a7844 */
                    /* catch() { ... } // from try @ 033a7628 with catch @ 033a7848 */
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void .ctor(NLFLMJPNOLF IBKIPBJJCPG)  [RVA 0x32A76A0]
// NLFLMJPNOLF$$.ctor @ RVA 0x32A76A0

void NLFLMJPNOLF___ctor(NLFLMJPNOLF_o *__this,NLFLMJPNOLF_o *IBKIPBJJCPG,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_long__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_T__o *pGVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
                    /* try { // try from 033a76a8 to 034a76af has its CatchHandler @ 033a77d0 */
  method_00 = (MethodInfo *)IBKIPBJJCPG;
  if ((DAT_04567406 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Clone__);
                    /* try { // try from 033a76cc to 034a76ff has its CatchHandler @ 033a7844 */
    DAT_04567406 = 1;
    method_00 = extraout_x1;
  }
  NLFLMJPNOLF___ctor(__this,method_00);
  if (IBKIPBJJCPG != (NLFLMJPNOLF_o *)0x0) {
    (__this->fields).OHMDCKEDOGH = (IBKIPBJJCPG->fields).OHMDCKEDOGH;
    (__this->fields).IILCHFKCEEH = (IBKIPBJJCPG->fields).IILCHFKCEEH;
    __this_00 = (IBKIPBJJCPG->fields).MABPCBMOECE;
    if (__this_00 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
      pGVar1 = Google_Protobuf_Collections_RepeatedField<long>__Clone
                         (__this_00,Method_Google_Protobuf_Collections_RepeatedField<long>_Clone__);
      (__this->fields).MABPCBMOECE = (Google_Protobuf_Collections_RepeatedField_long__o *)pGVar1;
      thunk_FUN_01c20e04();
                    /* try { // try from 033a7714 to 034a771b has its CatchHandler @ 033a7830 */
                    /* try { // try from 033a771c to 034a776f has its CatchHandler @ 033a7424 */
      (__this->fields).BHAOPCFDKCG = (IBKIPBJJCPG->fields).BHAOPCFDKCG;
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


// ===== private static void .cctor()  [RVA 0x32A78EC]
// NLFLMJPNOLF$$.cctor @ RVA 0x32A78EC

void NLFLMJPNOLF___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_NLFLMJPNOLF__o *__this;
  Google_Protobuf_FieldCodec_long__o *pGVar1;
  Google_Protobuf_FieldCodec_long__o **ppGVar2;
  
                    /* try { // try from 033a7908 to 034a795b has its CatchHandler @ 033a7b04 */
  if ((DAT_04567407 & 1) == 0) {
    FUN_01bab630(&System_Func<NLFLMJPNOLF>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<NLFLMJPNOLF>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<NLFLMJPNOLF>_TypeInfo);
    FUN_01bab630(&NLFLMJPNOLF_TypeInfo);
    FUN_01bab630(&Method_NLFLMJPNOLF_<>c_LNJPIHAONCC__);
    FUN_01bab630(&NLFLMJPNOLF_<>c_TypeInfo);
    DAT_04567407 = 1;
  }
                    /* try { // try from 033a7970 to 034a7977 has its CatchHandler @ 033a7aec */
                    /* try { // try from 033a797c to 034a7993 has its CatchHandler @ 033a7b00 */
  if ((NLFLMJPNOLF_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 033a79a4 to 034a79e3 has its CatchHandler @ 033a7b14 */
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<NLFLMJPNOLF>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_NLFLMJPNOLF__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<NLFLMJPNOLF>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<NLFLMJPNOLF>__ctor__);
  NLFLMJPNOLF_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(NLFLMJPNOLF_TypeInfo->static_fields,__this);
                    /* try { // try from 033a79f4 to 034a79ff has its CatchHandler @ 033a7ae4 */
  pGVar1 = Google_Protobuf_FieldCodec__ForInt64(0x1a,(MethodInfo *)0x0);
  ppGVar2 = &NLFLMJPNOLF_TypeInfo->static_fields->CCHHCINKGLK;
                    /* try { // try from 033a7a14 to 034a7a1b has its CatchHandler @ 033a7adc */
  *ppGVar2 = pGVar1;
                    /* try { // try from 033a7a20 to 034a7a37 has its CatchHandler @ 033a7afc */
  thunk_FUN_01c20e04(ppGVar2,pGVar1);
  return;
}


// ===== public bool Equals(NLFLMJPNOLF IBKIPBJJCPG)  [RVA 0x32A7A28]
// NLFLMJPNOLF$$Equals @ RVA 0x32A7A28

bool NLFLMJPNOLF__Equals(NLFLMJPNOLF_o *__this,NLFLMJPNOLF_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_00;
  
  if ((DAT_04567408 & 1) == 0) {
                    /* try { // try from 033a7a48 to 034a7a87 has its CatchHandler @ 033a7b10 */
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Equals__);
    DAT_04567408 = 1;
  }
  if (IBKIPBJJCPG != (NLFLMJPNOLF_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((__this->fields).OHMDCKEDOGH == (IBKIPBJJCPG->fields).OHMDCKEDOGH) &&
       ((__this->fields).IILCHFKCEEH == (IBKIPBJJCPG->fields).IILCHFKCEEH)) {
      __this_00 = (__this->fields).MABPCBMOECE;
                    /* try { // try from 033a7a88 to 034a7aa3 has its CatchHandler @ 033a7424 */
      if (__this_00 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033a7abc with catch @ 033a7af4 */
        FUN_01bab8c8();
      }
      bVar1 = Google_Protobuf_Collections_RepeatedField<long>__Equals
                        (__this_00,
                         (Google_Protobuf_Collections_RepeatedField_T__o *)
                         (IBKIPBJJCPG->fields).MABPCBMOECE,
                         Method_Google_Protobuf_Collections_RepeatedField<long>_Equals__);
                    /* try { // try from 033a7aa4 to 034a7ab3 has its CatchHandler @ 033a7b28 */
                    /* try { // try from 033a7ab8 to 034a7abb has its CatchHandler @ 033a7af8 */
                    /* try { // try from 033a7abc to 034a7abf has its CatchHandler @ 033a7af4 */
                    /* try { // try from 033a7ac0 to 034a7ac3 has its CatchHandler @ 033a7af0 */
      if ((bVar1) &&
         (((__this->fields).BHAOPCFDKCG != false) == ((IBKIPBJJCPG->fields).BHAOPCFDKCG != false)))
      {
                    /* catch() { ... } // from try @ 033a7a14 with catch @ 033a7adc */
                    /* catch() { ... } // from try @ 033a7ac8 with catch @ 033a7ae0 */
                    /* catch() { ... } // from try @ 033a79f4 with catch @ 033a7ae4 */
                    /* catch() { ... } // from try @ 033a7ac4 with catch @ 033a7ae8 */
                    /* catch() { ... } // from try @ 033a7970 with catch @ 033a7aec */
                    /* catch() { ... } // from try @ 033a7ac0 with catch @ 033a7af0 */
        bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
                    /* try { // try from 033a7ac4 to 034a7ac7 has its CatchHandler @ 033a7ae8 */
                    /* try { // try from 033a7ac8 to 034a7acb has its CatchHandler @ 033a7ae0 */
                    /* try { // try from 033a7ad0 to 034a7ad3 has its CatchHandler @ 033a7ad4 */
                    /* catch() { ... } // from try @ 033a7ad0 with catch @ 033a7ad4 */
                    /* catch() { ... } // from try @ 033a7acc with catch @ 033a7ad8 */
  return false;
}


// ===== public void EDJFPOOPKPB(int CJNHFNHJHPE)  [RVA 0x32A7AF8]
// NLFLMJPNOLF$$EDJFPOOPKPB @ RVA 0x32A7AF8

void NLFLMJPNOLF__EDJFPOOPKPB(NLFLMJPNOLF_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 033a7ab8 with catch @ 033a7af8 */
  (__this->fields).IILCHFKCEEH = CJNHFNHJHPE;
                    /* catch() { ... } // from try @ 033a7a20 with catch @ 033a7afc */
  return;
}


// ===== public void CEENLHEKKOM(bool CJNHFNHJHPE)  [RVA 0x32A7B00]
// NLFLMJPNOLF$$CEENLHEKKOM @ RVA 0x32A7B00

void NLFLMJPNOLF__CEENLHEKKOM(NLFLMJPNOLF_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 033a797c with catch @ 033a7b00 */
                    /* catch() { ... } // from try @ 033a7908 with catch @ 033a7b04 */
  (__this->fields).BHAOPCFDKCG = CJNHFNHJHPE;
  return;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x32A7B0C]
// NLFLMJPNOLF$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x32A7B0C

Google_Protobuf_Reflection_MessageDescriptor_o *
NLFLMJPNOLF__pb__Google_Protobuf_IMessage_get_Descriptor(NLFLMJPNOLF_o *__this,MethodInfo *method)

{
  NLFLMJPNOLF_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 033a7a48 with catch @ 033a7b10 */
                    /* catch() { ... } // from try @ 033a79a4 with catch @ 033a7b14 */
                    /* catch() { ... } // from try @ 033a78cc with catch @ 033a7b18 */
                    /* catch() { ... } // from try @ 033a78ac with catch @ 033a7b1c */
  if ((DAT_04567409 & 1) == 0) {
                    /* catch() { ... } // from try @ 033a7864 with catch @ 033a7b28
                       catch() { ... } // from try @ 033a7aa4 with catch @ 033a7b28 */
                    /* try { // try from 033a7b30 to 034a7b33 has its CatchHandler @ 033a7c24 */
    FUN_01bab630(&NLFLMJPNOLF_TypeInfo);
                    /* try { // try from 033a7b34 to 034a7b4b has its CatchHandler @ 033a7424 */
    DAT_04567409 = 1;
    method = extraout_x1;
  }
  method_00 = NLFLMJPNOLF_TypeInfo;
  if ((NLFLMJPNOLF_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (NLFLMJPNOLF_c *)thunk_FUN_01ba7564(NLFLMJPNOLF_TypeInfo,method);
  }
                    /* try { // try from 033a7b4c to 034a7b4f has its CatchHandler @ 033a7c04 */
  pGVar1 = NLFLMJPNOLF__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public void PEMJOKFFAMO(long CJNHFNHJHPE)  [RVA 0x32A7C5C]
// NLFLMJPNOLF$$PEMJOKFFAMO @ RVA 0x32A7C5C

void NLFLMJPNOLF__PEMJOKFFAMO(NLFLMJPNOLF_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).OHMDCKEDOGH = CJNHFNHJHPE;
  return;
}


// ===== public int CalculateSize()  [RVA 0x32A7C64]
// NLFLMJPNOLF$$CalculateSize @ RVA 0x32A7C64

int32_t NLFLMJPNOLF__CalculateSize(NLFLMJPNOLF_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  long value;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_01;
  int iVar3;
  
  if ((DAT_0456740a & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    FUN_01bab630(&NLFLMJPNOLF_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_CalculateSize__);
    DAT_0456740a = 1;
    method = extraout_x1;
  }
  value = (__this->fields).OHMDCKEDOGH;
  if (value == 0) {
    iVar3 = 0;
  }
  else {
                    /* try { // try from 033a7cc0 to 034a7cd7 has its CatchHandler @ 033a7f88 */
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(value,(MethodInfo *)0x0);
    iVar3 = iVar1 + 1;
  }
  iVar2 = (__this->fields).IILCHFKCEEH;
  if (iVar2 != 0) {
                    /* try { // try from 033a7cfc to 034a7d13 has its CatchHandler @ 033a7f84 */
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar2,(MethodInfo *)0x0);
    iVar3 = iVar3 + iVar1 + 1;
  }
  __this_01 = (__this->fields).MABPCBMOECE;
                    /* try { // try from 033a7d20 to 034a7d27 has its CatchHandler @ 033a7f60 */
  if ((NLFLMJPNOLF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
                    /* try { // try from 033a7d44 to 034a7d47 has its CatchHandler @ 033a7f34 */
                    /* try { // try from 033a7d48 to 034a7d53 has its CatchHandler @ 033a7f5c */
    iVar1 = Google_Protobuf_Collections_RepeatedField<long>__CalculateSize
                      (__this_01,
                       (Google_Protobuf_FieldCodec_T__o *)
                       NLFLMJPNOLF_TypeInfo->static_fields->CCHHCINKGLK,
                       Method_Google_Protobuf_Collections_RepeatedField<long>_CalculateSize__);
                    /* try { // try from 033a7d58 to 034a7d63 has its CatchHandler @ 033a7f58 */
    __this_00 = (__this->fields).CKFPENBPNML;
    iVar2 = iVar1 + iVar3;
    if ((__this->fields).BHAOPCFDKCG != false) {
      iVar2 = iVar1 + iVar3 + 2;
    }
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 033a7d78 to 034a7d7f has its CatchHandler @ 033a7f3c */
      iVar2 = iVar1 + iVar2;
    }
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033a7d90 to 034a7d9b has its CatchHandler @ 033a7f38 */
  FUN_01bab8c8();
}


// ===== public bool KFEAOMHOJLB()  [RVA 0x32A7D94]
// NLFLMJPNOLF$$KFEAOMHOJLB @ RVA 0x32A7D94

bool NLFLMJPNOLF__KFEAOMHOJLB(NLFLMJPNOLF_o *__this,MethodInfo *method)

{
  return (__this->fields).BHAOPCFDKCG;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x32A7D9C]
// NLFLMJPNOLF$$WriteTo @ RVA 0x32A7D9C

void NLFLMJPNOLF__WriteTo
               (NLFLMJPNOLF_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_01;
  
                    /* try { // try from 033a7db4 to 034a7dbf has its CatchHandler @ 033a7f7c */
  if ((DAT_0456740b & 1) == 0) {
    FUN_01bab630(&NLFLMJPNOLF_TypeInfo);
                    /* try { // try from 033a7dc8 to 034a7dcf has its CatchHandler @ 033a7f74 */
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_WriteTo__);
    DAT_0456740b = 1;
  }
  if ((__this->fields).OHMDCKEDOGH != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_033a7ed4;
                    /* try { // try from 033a7df4 to 034a7dfb has its CatchHandler @ 033a7f54 */
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
                    /* try { // try from 033a7e00 to 034a7e07 has its CatchHandler @ 033a7f24 */
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).OHMDCKEDOGH,(MethodInfo *)0x0);
  }
  if ((__this->fields).IILCHFKCEEH != 0) {
                    /* try { // try from 033a7e10 to 034a7e17 has its CatchHandler @ 033a7f28 */
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_033a7ed4;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x10,(MethodInfo *)0x0);
                    /* try { // try from 033a7e24 to 034a7e2b has its CatchHandler @ 033a7f4c */
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).IILCHFKCEEH,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).MABPCBMOECE;
                    /* try { // try from 033a7e48 to 034a7e7f has its CatchHandler @ 033a7f94 */
  if ((NLFLMJPNOLF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (__this_01 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
    Google_Protobuf_Collections_RepeatedField<long>__WriteTo
              (__this_01,JBGJLELBMJF,
               (Google_Protobuf_FieldCodec_T__o *)NLFLMJPNOLF_TypeInfo->static_fields->CCHHCINKGLK,
               Method_Google_Protobuf_Collections_RepeatedField<long>_WriteTo__);
    if ((__this->fields).BHAOPCFDKCG != false) {
      if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_033a7ed4;
      Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x20,(MethodInfo *)0x0);
                    /* try { // try from 033a7e94 to 034a7e9b has its CatchHandler @ 033a7f80 */
                    /* try { // try from 033a7e9c to 034a7eef has its CatchHandler @ 033a7c34 */
      Google_Protobuf_CodedOutputStream__WriteBool
                (JBGJLELBMJF,(__this->fields).BHAOPCFDKCG,(MethodInfo *)0x0);
    }
    __this_00 = (__this->fields).CKFPENBPNML;
    if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
      Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
      return;
    }
    return;
  }
LAB_033a7ed4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static MessageParser<NLFLMJPNOLF> PGCAHPDCJBC()  [RVA 0x32A7ED8]
// NLFLMJPNOLF$$PGCAHPDCJBC @ RVA 0x32A7ED8

Google_Protobuf_MessageParser_NLFLMJPNOLF__o * NLFLMJPNOLF__PGCAHPDCJBC(MethodInfo *method)

{
                    /* try { // try from 033a7ef0 to 034a7ef7 has its CatchHandler @ 033a7f80 */
  if ((DAT_0456740c & 1) == 0) {
                    /* try { // try from 033a7ef8 to 034a7efb has its CatchHandler @ 033a7f78 */
                    /* try { // try from 033a7efc to 034a7eff has its CatchHandler @ 033a7f70 */
    FUN_01bab630(&NLFLMJPNOLF_TypeInfo);
                    /* try { // try from 033a7f00 to 034a7f03 has its CatchHandler @ 033a7f6c */
                    /* try { // try from 033a7f04 to 034a7f07 has its CatchHandler @ 033a7f68 */
    DAT_0456740c = 1;
  }
                    /* try { // try from 033a7f08 to 034a7f0b has its CatchHandler @ 033a7f64 */
                    /* try { // try from 033a7f0c to 034a7f0f has its CatchHandler @ 033a7f50 */
                    /* try { // try from 033a7f10 to 034a7f13 has its CatchHandler @ 033a7f48 */
  if ((NLFLMJPNOLF_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033a7f14 to 034a7f17 has its CatchHandler @ 033a7f80 */
    thunk_FUN_01ba7564();
                    /* try { // try from 033a7f18 to 034a7f1b has its CatchHandler @ 033a7f30 */
  }
                    /* try { // try from 033a7f1c to 034a7f1f has its CatchHandler @ 033a7f2c */
                    /* try { // try from 033a7f20 to 034a7f23 has its CatchHandler @ 033a7f54 */
                    /* catch() { ... } // from try @ 033a7e00 with catch @ 033a7f24
                       try { // try from 033a7f24 to 034a7faf has its CatchHandler @ 033a7c34 */
                    /* catch() { ... } // from try @ 033a7e10 with catch @ 033a7f28 */
                    /* catch() { ... } // from try @ 033a7f1c with catch @ 033a7f2c */
  return NLFLMJPNOLF_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x32A7F30]
// NLFLMJPNOLF$$Equals @ RVA 0x32A7F30

bool NLFLMJPNOLF__Equals(NLFLMJPNOLF_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
                    /* catch() { ... } // from try @ 033a7f18 with catch @ 033a7f30 */
                    /* catch() { ... } // from try @ 033a7d44 with catch @ 033a7f34 */
                    /* catch() { ... } // from try @ 033a7d90 with catch @ 033a7f38 */
                    /* catch() { ... } // from try @ 033a7d78 with catch @ 033a7f3c */
                    /* catch() { ... } // from try @ 033a7f10 with catch @ 033a7f48 */
  if ((DAT_0456740d & 1) == 0) {
                    /* catch() { ... } // from try @ 033a7e24 with catch @ 033a7f4c */
                    /* catch() { ... } // from try @ 033a7f0c with catch @ 033a7f50 */
                    /* catch() { ... } // from try @ 033a7df4 with catch @ 033a7f54
                       catch() { ... } // from try @ 033a7f20 with catch @ 033a7f54 */
    FUN_01bab630(&NLFLMJPNOLF_TypeInfo);
                    /* catch() { ... } // from try @ 033a7d58 with catch @ 033a7f58 */
                    /* catch() { ... } // from try @ 033a7d48 with catch @ 033a7f5c */
    DAT_0456740d = 1;
  }
                    /* catch() { ... } // from try @ 033a7d20 with catch @ 033a7f60 */
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
                    /* catch() { ... } // from try @ 033a7e94 with catch @ 033a7f80
                       catch() { ... } // from try @ 033a7ef0 with catch @ 033a7f80
                       catch() { ... } // from try @ 033a7f14 with catch @ 033a7f80 */
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else {
                    /* catch() { ... } // from try @ 033a7f08 with catch @ 033a7f64 */
                    /* catch() { ... } // from try @ 033a7f04 with catch @ 033a7f68 */
                    /* catch() { ... } // from try @ 033a7f00 with catch @ 033a7f6c */
                    /* catch() { ... } // from try @ 033a7efc with catch @ 033a7f70 */
                    /* catch() { ... } // from try @ 033a7dc8 with catch @ 033a7f74 */
                    /* catch() { ... } // from try @ 033a7ef8 with catch @ 033a7f78 */
    if (IBKIPBJJCPG->klass != (Il2CppClass *)NLFLMJPNOLF_TypeInfo) {
      IBKIPBJJCPG = (Il2CppObject *)0x0;
    }
  }
                    /* catch() { ... } // from try @ 033a7cfc with catch @ 033a7f84 */
                    /* catch() { ... } // from try @ 033a7cc0 with catch @ 033a7f88 */
  bVar1 = NLFLMJPNOLF__Equals(__this,(NLFLMJPNOLF_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x32A7B58]
// NLFLMJPNOLF$$FFHIHGCDGAK @ RVA 0x32A7B58

Google_Protobuf_Reflection_MessageDescriptor_o * NLFLMJPNOLF__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
                    /* try { // try from 033a7b68 to 034a7b6f has its CatchHandler @ 033a7c24 */
                    /* try { // try from 033a7b70 to 034a7b87 has its CatchHandler @ 033a7424 */
  if ((DAT_0456740e & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
                    /* try { // try from 033a7b88 to 034a7b9f has its CatchHandler @ 033a7c14 */
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_0456740e = 1;
  }
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033a7ba0 to 034a7be7 has its CatchHandler @ 033a7424 */
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
                    /* try { // try from 033a7be8 to 034a7bf7 has its CatchHandler @ 033a7c14 */
  if ((pGVar4 == (Google_Protobuf_Reflection_FileDescriptor_o *)0x0) ||
     (pSVar8 = (pGVar4->fields)._MessageTypes_k__BackingField,
     pSVar8 == (System_Collections_Generic_IList_MessageDescriptor__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar5 = pSVar8->klass;
  uVar1._0_1_ = (pSVar5->_2).rank;
  uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
                    /* try { // try from 033a7bf8 to 034a7c1b has its CatchHandler @ 033a7c24 */
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
                    /* catch() { ... } // from try @ 033a7b4c with catch @ 033a7c04 */
    piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
                    /* catch() { ... } // from try @ 033a7b88 with catch @ 033a7c14
                       catch() { ... } // from try @ 033a7be8 with catch @ 033a7c14 */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IList<MessageDescriptor>_TypeInfo) {
                    /* try { // try from 033a7c34 to 034a7cbf has its CatchHandler @ 033a7c34
                       catch() { ... } // from try @ 033a7c34 with catch @ 033a7c34
                       catch() { ... } // from try @ 033a7e9c with catch @ 033a7c34
                       catch() { ... } // from try @ 033a7f24 with catch @ 033a7c34
                       catch() { ... } // from try @ 033a80d4 with catch @ 033a7c34
                       catch() { ... } // from try @ 033a8154 with catch @ 033a7c34
                       catch() { ... } // from try @ 033a8190 with catch @ 033a7c34
                       catch() { ... } // from try @ 033a81c0 with catch @ 033a7c34
                       catch() { ... } // from try @ 033a823c with catch @ 033a7c34 */
        pVVar2 = pSVar5->vtable + *piVar7;
        goto LAB_033a7c40;
      }
      uVar6 = uVar6 - 1;
                    /* try { // try from 033a7c1c to 034a7c27 has its CatchHandler @ 033a7424 */
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
                    /* catch() { ... } // from try @ 033a7b30 with catch @ 033a7c24
                       catch() { ... } // from try @ 033a7b68 with catch @ 033a7c24
                       catch() { ... } // from try @ 033a7bf8 with catch @ 033a7c24 */
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_033a7c40:
                    /* WARNING: Could not recover jumptable at 0x033a7c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x3e,pVVar2->method);
  return pGVar3;
}


// ===== public void .ctor()  [RVA 0x32A7864]
// NLFLMJPNOLF$$.ctor @ RVA 0x32A7864

void NLFLMJPNOLF___ctor(NLFLMJPNOLF_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_long__o *__this_00;
  Google_Protobuf_Collections_RepeatedField_long__o **ppGVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 033a7864 to 034a789f has its CatchHandler @ 033a7b28 */
  if ((DAT_0456740f & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>__ctor__);
    FUN_01bab630(&Google_Protobuf_Collections_RepeatedField<long>_TypeInfo);
                    /* try { // try from 033a78ac to 034a78af has its CatchHandler @ 033a7b1c */
    DAT_0456740f = 1;
    method = extraout_x1;
  }
  __this_00 = (Google_Protobuf_Collections_RepeatedField_long__o *)
              thunk_FUN_01bda818(Google_Protobuf_Collections_RepeatedField<long>_TypeInfo,method);
  Google_Protobuf_Collections_RepeatedField<long>___ctor
            (__this_00,Method_Google_Protobuf_Collections_RepeatedField<long>__ctor__);
  ppGVar1 = &(__this->fields).MABPCBMOECE;
  *ppGVar1 = __this_00;
                    /* try { // try from 033a78cc to 034a78f7 has its CatchHandler @ 033a7b18 */
  thunk_FUN_01c20e04(ppGVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

