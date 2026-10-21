// TypeDefIndex 2276
// Namespace: 
// public sealed class KGBIBHEFBHA : IMessage<KGBIBHEFBHA>, IMessage, IEquatable<KGBIBHEFBHA>, IDeepCloneable<KGBIBHEFBHA>
// Fields:
//   private static readonly MessageParser<KGBIBHEFBHA> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int DAIPHMMHPLH = 1;
//   private long ANAJGHJEEOC; // 0x18
//   public const int OODJAACHNGM = 2;
//   private int HCBJCMDLODI; // 0x20
//   public const int DJDODJFOFMH = 3;
//   private int NLLKMEMKBAF; // 0x24
//   public const int CNIONGMOPLO = 4;
//   private int NCDPJGNAKPN; // 0x28

// ===== public long LFELHKJPDHA()  [RVA 0x3303DD0]
// KGBIBHEFBHA$$LFELHKJPDHA @ RVA 0x3303DD0

int64_t KGBIBHEFBHA__LFELHKJPDHA(KGBIBHEFBHA_o *__this,MethodInfo *method)

{
  return (__this->fields).ANAJGHJEEOC;
}


// ===== public KGBIBHEFBHA Clone()  [RVA 0x3303DD8]
// KGBIBHEFBHA$$Clone @ RVA 0x3303DD8

KGBIBHEFBHA_o * KGBIBHEFBHA__Clone(KGBIBHEFBHA_o *__this,MethodInfo *method)

{
  KGBIBHEFBHA_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
                    /* try { // try from 03403df4 to 03503dfb has its CatchHandler @ 03404164 */
  if ((DAT_0456773c & 1) == 0) {
    FUN_01bab630(&KGBIBHEFBHA_TypeInfo);
                    /* try { // try from 03403e04 to 03503e1f has its CatchHandler @ 0340417c */
    DAT_0456773c = 1;
    method = extraout_x1;
  }
  __this_00 = (KGBIBHEFBHA_o *)thunk_FUN_01bda818(KGBIBHEFBHA_TypeInfo,method);
  KGBIBHEFBHA___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public static MessageParser<KGBIBHEFBHA> PGCAHPDCJBC()  [RVA 0x3303E8C]
// KGBIBHEFBHA$$PGCAHPDCJBC @ RVA 0x3303E8C

Google_Protobuf_MessageParser_KGBIBHEFBHA__o * KGBIBHEFBHA__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_0456773d & 1) == 0) {
    FUN_01bab630(&KGBIBHEFBHA_TypeInfo);
    DAT_0456773d = 1;
  }
  if ((KGBIBHEFBHA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03403edc to 03503ee3 has its CatchHandler @ 03404220 */
  return KGBIBHEFBHA_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public bool Equals(KGBIBHEFBHA IBKIPBJJCPG)  [RVA 0x3303EE4]
// KGBIBHEFBHA$$Equals @ RVA 0x3303EE4

bool KGBIBHEFBHA__Equals(KGBIBHEFBHA_o *__this,KGBIBHEFBHA_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (KGBIBHEFBHA_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
                    /* try { // try from 03403ef8 to 03503efb has its CatchHandler @ 03404178 */
                    /* try { // try from 03403f04 to 03503f1f has its CatchHandler @ 0340418c */
    if (((((__this->fields).ANAJGHJEEOC == (IBKIPBJJCPG->fields).ANAJGHJEEOC) &&
         ((__this->fields).HCBJCMDLODI == (IBKIPBJJCPG->fields).HCBJCMDLODI)) &&
        ((__this->fields).NLLKMEMKBAF == (IBKIPBJJCPG->fields).NLLKMEMKBAF)) &&
       ((__this->fields).NCDPJGNAKPN == (IBKIPBJJCPG->fields).NCDPJGNAKPN)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* try { // try from 03403f40 to 03503f5f has its CatchHandler @ 03404274 */
  return false;
}


// ===== public void .ctor(KGBIBHEFBHA IBKIPBJJCPG)  [RVA 0x3303E30]
// KGBIBHEFBHA$$.ctor @ RVA 0x3303E30

void KGBIBHEFBHA___ctor(KGBIBHEFBHA_o *__this,KGBIBHEFBHA_o *IBKIPBJJCPG,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  
                    /* try { // try from 03403e38 to 03503e57 has its CatchHandler @ 03404224 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (KGBIBHEFBHA_o *)0x0) {
    (__this->fields).ANAJGHJEEOC = (IBKIPBJJCPG->fields).ANAJGHJEEOC;
                    /* try { // try from 03403e58 to 03503edb has its CatchHandler @ 03403ba8 */
    iVar1 = (IBKIPBJJCPG->fields).NLLKMEMKBAF;
    (__this->fields).HCBJCMDLODI = (IBKIPBJJCPG->fields).HCBJCMDLODI;
    (__this->fields).NLLKMEMKBAF = iVar1;
    (__this->fields).NCDPJGNAKPN = (IBKIPBJJCPG->fields).NCDPJGNAKPN;
    pGVar2 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(&__this->fields,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3303F50]
// KGBIBHEFBHA$$.ctor @ RVA 0x3303F50

void KGBIBHEFBHA___ctor(KGBIBHEFBHA_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void HHDBPBCFLOK(int CJNHFNHJHPE)  [RVA 0x3303F58]
// KGBIBHEFBHA$$HHDBPBCFLOK @ RVA 0x3303F58

void KGBIBHEFBHA__HHDBPBCFLOK(KGBIBHEFBHA_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).HCBJCMDLODI = CJNHFNHJHPE;
  return;
}


// ===== public void OFJLHAKNDGH(int CJNHFNHJHPE)  [RVA 0x3303F60]
// KGBIBHEFBHA$$OFJLHAKNDGH @ RVA 0x3303F60

void KGBIBHEFBHA__OFJLHAKNDGH(KGBIBHEFBHA_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
                    /* try { // try from 03403f60 to 03503fbf has its CatchHandler @ 03403ba8 */
  (__this->fields).NLLKMEMKBAF = CJNHFNHJHPE;
  return;
}


// ===== public void MergeFrom(KGBIBHEFBHA IBKIPBJJCPG)  [RVA 0x3303F68]
// KGBIBHEFBHA$$MergeFrom @ RVA 0x3303F68

void KGBIBHEFBHA__MergeFrom(KGBIBHEFBHA_o *__this,KGBIBHEFBHA_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  long lVar3;
  KGBIBHEFBHA_Fields *pKVar4;
  
  if (IBKIPBJJCPG != (KGBIBHEFBHA_o *)0x0) {
    lVar3 = (IBKIPBJJCPG->fields).ANAJGHJEEOC;
    if (lVar3 != 0) {
      (__this->fields).ANAJGHJEEOC = lVar3;
    }
    iVar1 = (IBKIPBJJCPG->fields).HCBJCMDLODI;
    if (iVar1 != 0) {
      (__this->fields).HCBJCMDLODI = iVar1;
    }
    iVar1 = (IBKIPBJJCPG->fields).NLLKMEMKBAF;
    if (iVar1 != 0) {
      (__this->fields).NLLKMEMKBAF = iVar1;
    }
    iVar1 = (IBKIPBJJCPG->fields).NCDPJGNAKPN;
    if (iVar1 != 0) {
      (__this->fields).NCDPJGNAKPN = iVar1;
    }
    pKVar4 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pKVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pKVar4->CKFPENBPNML = pGVar2;
                    /* try { // try from 03403fc0 to 03503fc7 has its CatchHandler @ 034041c8 */
    thunk_FUN_01c20e04(pKVar4,pGVar2);
    return;
  }
  return;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x3303FCC]
// KGBIBHEFBHA$$FFHIHGCDGAK @ RVA 0x3303FCC

Google_Protobuf_Reflection_MessageDescriptor_o * KGBIBHEFBHA__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_0456773e & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
                    /* try { // try from 03403ff4 to 03503ff7 has its CatchHandler @ 03404160 */
                    /* try { // try from 03403ff8 to 0350400f has its CatchHandler @ 03404180 */
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_0456773e = 1;
  }
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0340401c to 0350401f has its CatchHandler @ 03404168 */
                    /* try { // try from 03404020 to 03504037 has its CatchHandler @ 034041b4 */
  if (DAT_04565d86 == '\0') {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    DAT_04565d86 = '\x01';
  }
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
                    /* try { // try from 03404048 to 03504063 has its CatchHandler @ 03404184 */
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
                    /* try { // try from 03404074 to 0350407b has its CatchHandler @ 03404198 */
  if (uVar6 != 0) {
    piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IList<MessageDescriptor>_TypeInfo) {
        pVVar2 = pSVar5->vtable + *piVar7;
        goto LAB_034040b4;
      }
                    /* try { // try from 0340408c to 0350409b has its CatchHandler @ 0340419c */
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
                    /* try { // try from 0340409c to 03504127 has its CatchHandler @ 03403ba8 */
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_034040b4:
                    /* WARNING: Could not recover jumptable at 0x034040c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x32,pVVar2->method);
  return pGVar3;
}


// ===== public static bool LFHPFJOAJIO(KGBIBHEFBHA PDCJHMOBMPK, KGBIBHEFBHA NECMHLICHNE)  [RVA 0x33040D0]
// KGBIBHEFBHA$$LFHPFJOAJIO @ RVA 0x33040D0

bool KGBIBHEFBHA__LFHPFJOAJIO
               (KGBIBHEFBHA_o *PDCJHMOBMPK,KGBIBHEFBHA_o *NECMHLICHNE,MethodInfo *method)

{
  bool bVar1;
  System_Nullable_bool__Fields local_24 [2];
  
  if ((DAT_0456773f & 1) == 0) {
    FUN_01bab630(&Method_AJKNKCLEEAD_PPBANLLIGDK<KGBIBHEFBHA>__);
    FUN_01bab630(&Method_System_Nullable<bool>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<bool>_get_Value__);
    DAT_0456773f = 1;
  }
                    /* try { // try from 03404128 to 0350412b has its CatchHandler @ 034041c4 */
                    /* try { // try from 0340412c to 0350412f has its CatchHandler @ 034041c0 */
                    /* try { // try from 03404130 to 03504133 has its CatchHandler @ 034041bc */
  local_24[0] = (System_Nullable_bool__Fields)
                AJKNKCLEEAD__PPBANLLIGDK<object>
                          ((Il2CppObject *)PDCJHMOBMPK,(Il2CppObject *)NECMHLICHNE,
                           Method_AJKNKCLEEAD_PPBANLLIGDK<KGBIBHEFBHA>__);
                    /* try { // try from 03404134 to 03504137 has its CatchHandler @ 034041b8 */
                    /* try { // try from 03404138 to 0350413b has its CatchHandler @ 034041b0 */
                    /* try { // try from 0340413c to 0350413f has its CatchHandler @ 034041ac */
  if (((ushort)local_24[0] & 0xff) == 0) {
                    /* try { // try from 03404158 to 0350415b has its CatchHandler @ 0340416c */
                    /* try { // try from 0340415c to 035041d7 has its CatchHandler @ 03403ba8 */
    if ((PDCJHMOBMPK == (KGBIBHEFBHA_o *)0x0) || (NECMHLICHNE == (KGBIBHEFBHA_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03404130 with catch @ 034041bc */
      FUN_01bab8c8();
    }
                    /* catch() { ... } // from try @ 03403ff4 with catch @ 03404160 */
                    /* catch() { ... } // from try @ 03403df4 with catch @ 03404164 */
                    /* catch() { ... } // from try @ 0340401c with catch @ 03404168 */
                    /* catch() { ... } // from try @ 03404158 with catch @ 0340416c */
                    /* catch() { ... } // from try @ 03404154 with catch @ 03404170 */
                    /* catch() { ... } // from try @ 03403da8 with catch @ 03404174 */
                    /* catch() { ... } // from try @ 03403ef8 with catch @ 03404178 */
                    /* catch() { ... } // from try @ 03403e04 with catch @ 0340417c */
                    /* catch() { ... } // from try @ 03403ff8 with catch @ 03404180 */
                    /* catch() { ... } // from try @ 03404048 with catch @ 03404184 */
                    /* catch() { ... } // from try @ 03403db4 with catch @ 03404188 */
                    /* catch() { ... } // from try @ 03403f04 with catch @ 0340418c */
    if ((((PDCJHMOBMPK->fields).HCBJCMDLODI == (NECMHLICHNE->fields).HCBJCMDLODI) &&
        ((PDCJHMOBMPK->fields).NLLKMEMKBAF == (NECMHLICHNE->fields).NLLKMEMKBAF)) &&
       ((PDCJHMOBMPK->fields).ANAJGHJEEOC == (NECMHLICHNE->fields).ANAJGHJEEOC)) {
                    /* catch() { ... } // from try @ 03404150 with catch @ 03404190 */
                    /* catch() { ... } // from try @ 0340414c with catch @ 03404194 */
                    /* catch() { ... } // from try @ 03404074 with catch @ 03404198 */
      bVar1 = (PDCJHMOBMPK->fields).NCDPJGNAKPN == (NECMHLICHNE->fields).NCDPJGNAKPN;
                    /* catch() { ... } // from try @ 0340408c with catch @ 0340419c */
                    /* catch() { ... } // from try @ 03404148 with catch @ 034041a0 */
    }
    else {
                    /* catch() { ... } // from try @ 03404144 with catch @ 034041a4 */
      bVar1 = false;
    }
  }
  else {
                    /* try { // try from 03404140 to 03504143 has its CatchHandler @ 034041a8 */
                    /* try { // try from 03404144 to 03504147 has its CatchHandler @ 034041a4 */
                    /* try { // try from 03404148 to 0350414b has its CatchHandler @ 034041a0 */
                    /* try { // try from 0340414c to 0350414f has its CatchHandler @ 03404194 */
                    /* try { // try from 03404150 to 03504153 has its CatchHandler @ 03404190 */
    bVar1 = System_Nullable<bool>__get_Value
                      ((System_Nullable_bool__o)SUB82(local_24,0),
                       Method_System_Nullable<bool>_get_Value__);
                    /* try { // try from 03404154 to 03504157 has its CatchHandler @ 03404170 */
  }
                    /* catch() { ... } // from try @ 03404140 with catch @ 034041a8 */
                    /* catch() { ... } // from try @ 0340413c with catch @ 034041ac */
                    /* catch() { ... } // from try @ 03404138 with catch @ 034041b0 */
                    /* catch() { ... } // from try @ 03404020 with catch @ 034041b4 */
                    /* catch() { ... } // from try @ 03404134 with catch @ 034041b8 */
  return bVar1;
}


// ===== public void EHMLCEKLCDD(long CJNHFNHJHPE)  [RVA 0x33041C0]
// KGBIBHEFBHA$$EHMLCEKLCDD @ RVA 0x33041C0

void KGBIBHEFBHA__EHMLCEKLCDD(KGBIBHEFBHA_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 0340412c with catch @ 034041c0 */
  (__this->fields).ANAJGHJEEOC = CJNHFNHJHPE;
                    /* catch() { ... } // from try @ 03404128 with catch @ 034041c4 */
  return;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x33041C8]
// KGBIBHEFBHA$$MergeFrom @ RVA 0x33041C8

void KGBIBHEFBHA__MergeFrom
               (KGBIBHEFBHA_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  KGBIBHEFBHA_Fields *pKVar1;
  uint uVar2;
  int32_t iVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  int64_t iVar5;
  
                    /* catch() { ... } // from try @ 03403fc0 with catch @ 034041c8 */
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 034041d8 to 035041db has its CatchHandler @ 03404200 */
                    /* try { // try from 034041dc to 03504207 has its CatchHandler @ 03403ba8 */
  uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
  if (uVar2 != 0) {
    pKVar1 = &__this->fields;
    do {
      if (uVar2 < 0x11) {
        if (uVar2 == 8) {
          iVar5 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).ANAJGHJEEOC = iVar5;
                    /* catch() { ... } // from try @ 03403f40 with catch @ 03404274
                       try { // try from 03404274 to 03504283 has its CatchHandler @ 03403ba8 */
        }
        else {
                    /* catch() { ... } // from try @ 034041d8 with catch @ 03404200 */
          if (uVar2 == 0x10) {
                    /* try { // try from 03404208 to 0350421b has its CatchHandler @ 034042d0 */
            iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
            (__this->fields).HCBJCMDLODI = iVar3;
          }
          else {
LAB_03404240:
            pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                               (pKVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
            pKVar1->CKFPENBPNML = pGVar4;
                    /* catch() { ... } // from try @ 03404234 with catch @ 03404258 */
            thunk_FUN_01c20e04(pKVar1,pGVar4);
                    /* try { // try from 03404260 to 03504273 has its CatchHandler @ 034042d0 */
          }
        }
      }
      else {
                    /* catch() { ... } // from try @ 03403d8c with catch @ 0340421c
                       try { // try from 0340421c to 03504233 has its CatchHandler @ 03403ba8 */
                    /* catch() { ... } // from try @ 03403edc with catch @ 03404220 */
        if (uVar2 == 0x18) {
          iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
                    /* try { // try from 03404284 to 03504287 has its CatchHandler @ 034042ac */
          (__this->fields).NLLKMEMKBAF = iVar3;
        }
        else {
                    /* catch() { ... } // from try @ 03403e38 with catch @ 03404224 */
          if (uVar2 != 0x20) goto LAB_03404240;
                    /* try { // try from 03404234 to 03504237 has its CatchHandler @ 03404258 */
          iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
                    /* try { // try from 03404238 to 0350425f has its CatchHandler @ 03403ba8 */
          (__this->fields).NCDPJGNAKPN = iVar3;
        }
      }
                    /* try { // try from 03404288 to 035042b3 has its CatchHandler @ 03403ba8 */
      uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    } while (uVar2 != 0);
  }
  return;
}


// ===== public int DENKJCBILMC()  [RVA 0x33042A8]
// KGBIBHEFBHA$$DENKJCBILMC @ RVA 0x33042A8

int32_t KGBIBHEFBHA__DENKJCBILMC(KGBIBHEFBHA_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 03404284 with catch @ 034042ac */
  return (__this->fields).NLLKMEMKBAF;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x33042B0]
// KGBIBHEFBHA$$WriteTo @ RVA 0x33042B0

void KGBIBHEFBHA__WriteTo
               (KGBIBHEFBHA_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
                    /* try { // try from 034042b4 to 035042bb has its CatchHandler @ 034042d0 */
                    /* try { // try from 034042bc to 035042c7 has its CatchHandler @ 03403ba8 */
  if ((__this->fields).ANAJGHJEEOC != 0) {
                    /* try { // try from 034042c8 to 035042cf has its CatchHandler @ 034042d0 */
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03404398;
                    /* catch() { ... } // from try @ 03404208 with catch @ 034042d0
                       catch() { ... } // from try @ 03404260 with catch @ 034042d0
                       catch() { ... } // from try @ 034042b4 with catch @ 034042d0
                       catch() { ... } // from try @ 034042c8 with catch @ 034042d0 */
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).ANAJGHJEEOC,(MethodInfo *)0x0);
  }
  if ((__this->fields).HCBJCMDLODI != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03404398;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).HCBJCMDLODI,(MethodInfo *)0x0);
  }
  if ((__this->fields).NLLKMEMKBAF != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03404398;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x18,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).NLLKMEMKBAF,(MethodInfo *)0x0);
  }
  if ((__this->fields).NCDPJGNAKPN != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_03404398:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x20,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).NCDPJGNAKPN,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public int MJIGJNKOMEI()  [RVA 0x330439C]
// KGBIBHEFBHA$$MJIGJNKOMEI @ RVA 0x330439C

int32_t KGBIBHEFBHA__MJIGJNKOMEI(KGBIBHEFBHA_o *__this,MethodInfo *method)

{
  return (__this->fields).HCBJCMDLODI;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x33043A4]
// KGBIBHEFBHA$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x33043A4

Google_Protobuf_Reflection_MessageDescriptor_o *
KGBIBHEFBHA__pb__Google_Protobuf_IMessage_get_Descriptor(KGBIBHEFBHA_o *__this,MethodInfo *method)

{
  KGBIBHEFBHA_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567740 & 1) == 0) {
    FUN_01bab630(&KGBIBHEFBHA_TypeInfo);
    DAT_04567740 = 1;
    method = extraout_x1;
  }
  method_00 = KGBIBHEFBHA_TypeInfo;
  if ((KGBIBHEFBHA_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (KGBIBHEFBHA_c *)thunk_FUN_01ba7564(KGBIBHEFBHA_TypeInfo,method);
  }
  pGVar1 = KGBIBHEFBHA__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== private static void .cctor()  [RVA 0x33043F0]
// KGBIBHEFBHA$$.cctor @ RVA 0x33043F0

void KGBIBHEFBHA___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_KGBIBHEFBHA__o *__this;
  
  if ((DAT_04567741 & 1) == 0) {
    FUN_01bab630(&System_Func<KGBIBHEFBHA>_TypeInfo);
    FUN_01bab630(&KGBIBHEFBHA_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<KGBIBHEFBHA>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<KGBIBHEFBHA>_TypeInfo);
    FUN_01bab630(&Method_KGBIBHEFBHA_<>c_OPLOHGOGALA__);
    FUN_01bab630(&KGBIBHEFBHA_<>c_TypeInfo);
    DAT_04567741 = 1;
  }
  if ((KGBIBHEFBHA_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<KGBIBHEFBHA>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_KGBIBHEFBHA__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<KGBIBHEFBHA>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<KGBIBHEFBHA>__ctor__);
  KGBIBHEFBHA_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(KGBIBHEFBHA_TypeInfo->static_fields,__this);
  return;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x3304508]
// KGBIBHEFBHA$$Equals @ RVA 0x3304508

bool KGBIBHEFBHA__Equals(KGBIBHEFBHA_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04567742 & 1) == 0) {
    FUN_01bab630(&KGBIBHEFBHA_TypeInfo);
    DAT_04567742 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)KGBIBHEFBHA_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = KGBIBHEFBHA__Equals(__this,(KGBIBHEFBHA_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public void EMHKPHMPCGB(int CJNHFNHJHPE)  [RVA 0x330456C]
// KGBIBHEFBHA$$EMHKPHMPCGB @ RVA 0x330456C

void KGBIBHEFBHA__EMHKPHMPCGB(KGBIBHEFBHA_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).NCDPJGNAKPN = CJNHFNHJHPE;
  return;
}


// ===== public override string ToString()  [RVA 0x3304574]
// KGBIBHEFBHA$$ToString @ RVA 0x3304574

System_String_o * KGBIBHEFBHA__ToString(KGBIBHEFBHA_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567743 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04567743 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public int IDJLJAILIFJ()  [RVA 0x33045CC]
// KGBIBHEFBHA$$IDJLJAILIFJ @ RVA 0x33045CC

int32_t KGBIBHEFBHA__IDJLJAILIFJ(KGBIBHEFBHA_o *__this,MethodInfo *method)

{
  return (__this->fields).NCDPJGNAKPN;
}


// ===== public override int GetHashCode()  [RVA 0x33045D4]
// KGBIBHEFBHA$$GetHashCode @ RVA 0x33045D4

int32_t KGBIBHEFBHA__GetHashCode(KGBIBHEFBHA_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  long lVar5;
  int local_24;
  long local_18;
  
  local_18 = 0;
  local_24 = 0;
  lVar5 = (__this->fields).ANAJGHJEEOC;
  if (lVar5 == 0) {
    uVar2 = 1;
  }
  else {
    local_18 = lVar5;
    uVar2 = System_Int64__GetHashCode((int64_t)&local_18,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  iVar1 = (__this->fields).HCBJCMDLODI;
  if (iVar1 != 0) {
    local_24 = iVar1;
    uVar3 = System_Int32__GetHashCode((int32_t)&local_24,(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  iVar1 = (__this->fields).NLLKMEMKBAF;
  if (iVar1 != 0) {
    local_24 = iVar1;
    uVar3 = System_Int32__GetHashCode((int32_t)&local_24,(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  iVar1 = (__this->fields).NCDPJGNAKPN;
  if (iVar1 != 0) {
    local_24 = iVar1;
    uVar3 = System_Int32__GetHashCode((int32_t)&local_24,(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  pGVar4 = (__this->fields).CKFPENBPNML;
  if (pGVar4 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    uVar3 = (*(pGVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar4,(pGVar4->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar3 ^ uVar2;
  }
  return uVar2;
}


// ===== public int CalculateSize()  [RVA 0x330468C]
// KGBIBHEFBHA$$CalculateSize @ RVA 0x330468C

int32_t KGBIBHEFBHA__CalculateSize(KGBIBHEFBHA_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar3;
  long value;
  
  if ((DAT_04567744 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04567744 = 1;
    method = extraout_x1;
  }
  value = (__this->fields).ANAJGHJEEOC;
  iVar3 = 0;
  if (value != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(value,(MethodInfo *)0x0);
    iVar3 = iVar2 + 1;
  }
  iVar1 = (__this->fields).HCBJCMDLODI;
  if (iVar1 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
    iVar3 = iVar3 + iVar2 + 1;
  }
  iVar1 = (__this->fields).NLLKMEMKBAF;
  if (iVar1 != 0) {
                    /* try { // try from 03404720 to 03504837 has its CatchHandler @ 03404720
                       catch() { ... } // from try @ 03404720 with catch @ 03404720
                       catch() { ... } // from try @ 03404960 with catch @ 03404720
                       catch() { ... } // from try @ 03404a00 with catch @ 03404720
                       catch() { ... } // from try @ 03404a08 with catch @ 03404720
                       catch() { ... } // from try @ 03404ab8 with catch @ 03404720 */
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
    iVar3 = iVar3 + iVar2 + 1;
  }
  iVar1 = (__this->fields).NCDPJGNAKPN;
  if (iVar1 != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar2 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(iVar1,(MethodInfo *)0x0);
    iVar3 = iVar3 + iVar2 + 1;
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    iVar2 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
    iVar3 = iVar2 + iVar3;
  }
  return iVar3;
}


// ===== public bool PIMMFPEOOJJ()  [RVA 0x3304798]
// KGBIBHEFBHA$$PIMMFPEOOJJ @ RVA 0x3304798

bool KGBIBHEFBHA__PIMMFPEOOJJ(KGBIBHEFBHA_o *__this,MethodInfo *method)

{
  return 0 < (__this->fields).NCDPJGNAKPN;
}

