// TypeDefIndex 735
// Namespace: 
// public sealed class BKMLILFFPIH : IMessage<BKMLILFFPIH>, IMessage, IEquatable<BKMLILFFPIH>, IDeepCloneable<BKMLILFFPIH>
// Fields:
//   private static readonly MessageParser<BKMLILFFPIH> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int EAGIFHOLNEL = 1;
//   private BECIPDJBAOG MJIIHOLHNCK; // 0x18
//   public const int KGBOMFIKDEC = 2;
//   private KAMBBJFPLGM OPHCNELIOLD; // 0x20

// ===== public static MessageParser<BKMLILFFPIH> PGCAHPDCJBC()  [RVA 0x3046E60]
// BKMLILFFPIH$$PGCAHPDCJBC @ RVA 0x3046E60

Google_Protobuf_MessageParser_BKMLILFFPIH__o * BKMLILFFPIH__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_04565de2 & 1) == 0) {
    FUN_01bab630(&BKMLILFFPIH_TypeInfo);
    DAT_04565de2 = 1;
  }
  if ((BKMLILFFPIH_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03146e9c to 03246ebb has its CatchHandler @ 03146ee0 */
    thunk_FUN_01ba7564();
  }
  return BKMLILFFPIH_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x3046EB8]
// BKMLILFFPIH$$WriteTo @ RVA 0x3046EB8

void BKMLILFFPIH__WriteTo
               (BKMLILFFPIH_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
                    /* try { // try from 03146ebc to 03246edb has its CatchHandler @ 03146e3c */
  if ((__this->fields).MJIIHOLHNCK != (BECIPDJBAOG_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_03146f48;
                    /* try { // try from 03146edc to 03246edf has its CatchHandler @ 03146ee0 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03146e9c with catch @ 03146ee0
                       catch(type#1 @ 03f99f68) { ... } // from try @ 03146edc with catch @ 03146ee0
                       try { // try from 03146ee0 to 03246ef7 has its CatchHandler @ 03146e3c */
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).MJIIHOLHNCK,
               (MethodInfo *)0x0);
  }
                    /* try { // try from 03146ef8 to 03246f0f has its CatchHandler @ 03146f3c */
  if ((__this->fields).OPHCNELIOLD != (KAMBBJFPLGM_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_03146f48:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
                    /* try { // try from 03146f10 to 03246f2b has its CatchHandler @ 03146e3c */
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).OPHCNELIOLD,
               (MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
                    /* try { // try from 03146f2c to 03246f3b has its CatchHandler @ 03146f3c */
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
                    /* catch() { ... } // from try @ 03146ef8 with catch @ 03146f3c
                       catch() { ... } // from try @ 03146f2c with catch @ 03146f3c */
                    /* try { // try from 03146f40 to 03246f43 has its CatchHandler @ 03146f4c */
                    /* try { // try from 03146f44 to 03246f4f has its CatchHandler @ 03146e3c */
  return;
}


// ===== public void .ctor()  [RVA 0x3046F4C]
// BKMLILFFPIH$$.ctor @ RVA 0x3046F4C

void BKMLILFFPIH___ctor(BKMLILFFPIH_o *__this,MethodInfo *method)

{
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03146f40 with catch @ 03146f4c
                        */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override int GetHashCode()  [RVA 0x3046F54]
// BKMLILFFPIH$$GetHashCode @ RVA 0x3046F54

int32_t BKMLILFFPIH__GetHashCode(BKMLILFFPIH_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  BECIPDJBAOG_o *pBVar3;
  KAMBBJFPLGM_o *pKVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  
  pBVar3 = (__this->fields).MJIIHOLHNCK;
  if (pBVar3 == (BECIPDJBAOG_o *)0x0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (*(pBVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pBVar3,(pBVar3->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar1 ^ 1;
  }
  pKVar4 = (__this->fields).OPHCNELIOLD;
  if (pKVar4 != (KAMBBJFPLGM_o *)0x0) {
    uVar2 = (*(pKVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pKVar4,(pKVar4->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
  pGVar5 = (__this->fields).CKFPENBPNML;
  if (pGVar5 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    uVar2 = (*(pGVar5->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar5,(pGVar5->klass->vtable)._2_GetHashCode.method);
    uVar1 = uVar2 ^ uVar1;
  }
                    /* try { // try from 03146fb0 to 03247083 has its CatchHandler @ 03146fb0
                       catch() { ... } // from try @ 03146fb0 with catch @ 03146fb0
                       catch() { ... } // from try @ 031470ac with catch @ 03146fb0
                       catch() { ... } // from try @ 0314714c with catch @ 03146fb0 */
  return uVar1;
}


// ===== public KAMBBJFPLGM JCKINNMKHBA()  [RVA 0x3046FC0]
// BKMLILFFPIH$$JCKINNMKHBA @ RVA 0x3046FC0

KAMBBJFPLGM_o * BKMLILFFPIH__JCKINNMKHBA(BKMLILFFPIH_o *__this,MethodInfo *method)

{
  return (__this->fields).OPHCNELIOLD;
}


// ===== public BKMLILFFPIH Clone()  [RVA 0x3046FC8]
// BKMLILFFPIH$$Clone @ RVA 0x3046FC8

BKMLILFFPIH_o * BKMLILFFPIH__Clone(BKMLILFFPIH_o *__this,MethodInfo *method)

{
  BKMLILFFPIH_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04565de3 & 1) == 0) {
    FUN_01bab630(&BKMLILFFPIH_TypeInfo);
    DAT_04565de3 = 1;
    method = extraout_x1;
  }
  __this_00 = (BKMLILFFPIH_o *)thunk_FUN_01bda818(BKMLILFFPIH_TypeInfo,method);
  BKMLILFFPIH___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x30470B8]
// BKMLILFFPIH$$MergeFrom @ RVA 0x30470B8

void BKMLILFFPIH__MergeFrom
               (BKMLILFFPIH_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  KAMBBJFPLGM_o **ppKVar1;
  BECIPDJBAOG_o **ppBVar2;
  BKMLILFFPIH_Fields *pBVar3;
  uint32_t uVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  BECIPDJBAOG_o *__this_00;
  KAMBBJFPLGM_o *pKVar6;
  
  if ((DAT_04565de4 & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    DAT_04565de4 = 1;
  }
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031470a0 with catch @ 03147108
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03147084 with catch @ 0314710c
                        */
  ppKVar1 = &(__this->fields).OPHCNELIOLD;
  ppBVar2 = &(__this->fields).MJIIHOLHNCK;
  pBVar3 = &__this->fields;
LAB_0314711c:
  do {
                    /* try { // try from 03147124 to 03247127 has its CatchHandler @ 03147134 */
    uVar4 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    if (uVar4 == 10) {
      pKVar6 = (KAMBBJFPLGM_o *)*ppBVar2;
      if (pKVar6 == (KAMBBJFPLGM_o *)0x0) {
        __this_00 = (BECIPDJBAOG_o *)thunk_FUN_01bda818(BECIPDJBAOG_TypeInfo);
        BECIPDJBAOG___ctor(__this_00,(MethodInfo *)0x0);
        *ppBVar2 = __this_00;
        thunk_FUN_01c20e04(ppBVar2,__this_00);
        pKVar6 = (KAMBBJFPLGM_o *)*ppBVar2;
      }
    }
    else {
                    /* catch() { ... } // from try @ 03147124 with catch @ 03147134 */
      if (uVar4 != 0x12) {
        if (uVar4 == 0) {
          return;
        }
                    /* try { // try from 03147140 to 0324714b has its CatchHandler @ 03147160 */
        pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                           (pBVar3->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
                    /* try { // try from 0314714c to 03247157 has its CatchHandler @ 03146fb0 */
        pBVar3->CKFPENBPNML = pGVar5;
                    /* try { // try from 03147158 to 0324715f has its CatchHandler @ 03147160 */
        thunk_FUN_01c20e04(pBVar3,pGVar5);
        goto LAB_0314711c;
      }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03147140 with catch @ 03147160
                       catch(type#2 @ 00000000) { ... } // from try @ 03147158 with catch @ 03147160
                        */
      pKVar6 = *ppKVar1;
                    /* try { // try from 03147164 to 03247393 has its CatchHandler @ 03147164
                       catch() { ... } // from try @ 03147164 with catch @ 03147164
                       catch() { ... } // from try @ 031473a4 with catch @ 03147164
                       catch() { ... } // from try @ 03147828 with catch @ 03147164 */
      if (pKVar6 == (KAMBBJFPLGM_o *)0x0) {
        pKVar6 = (KAMBBJFPLGM_o *)thunk_FUN_01bda818(KAMBBJFPLGM_TypeInfo);
        KAMBBJFPLGM___ctor(pKVar6,(MethodInfo *)0x0);
        *ppKVar1 = pKVar6;
        thunk_FUN_01c20e04(ppKVar1,pKVar6);
        pKVar6 = *ppKVar1;
      }
    }
    Google_Protobuf_CodedInputStream__ReadMessage
              (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pKVar6,(MethodInfo *)0x0);
  } while( true );
}


// ===== public void MergeFrom(BKMLILFFPIH IBKIPBJJCPG)  [RVA 0x30471EC]
// BKMLILFFPIH$$MergeFrom @ RVA 0x30471EC

void BKMLILFFPIH__MergeFrom(BKMLILFFPIH_o *__this,BKMLILFFPIH_o *IBKIPBJJCPG,MethodInfo *method)

{
  BECIPDJBAOG_o *pBVar1;
  KAMBBJFPLGM_o *pKVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  BKMLILFFPIH_Fields *pBVar4;
  BECIPDJBAOG_o **ppBVar5;
  KAMBBJFPLGM_o **ppKVar6;
  
  if ((DAT_04565de5 & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    DAT_04565de5 = 1;
  }
  if (IBKIPBJJCPG == (BKMLILFFPIH_o *)0x0) {
    return;
  }
  if ((IBKIPBJJCPG->fields).MJIIHOLHNCK != (BECIPDJBAOG_o *)0x0) {
    ppBVar5 = &(__this->fields).MJIIHOLHNCK;
    pBVar1 = *ppBVar5;
    if (pBVar1 == (BECIPDJBAOG_o *)0x0) {
      pBVar1 = (BECIPDJBAOG_o *)thunk_FUN_01bda818(BECIPDJBAOG_TypeInfo);
      BECIPDJBAOG___ctor(pBVar1,(MethodInfo *)0x0);
      *ppBVar5 = pBVar1;
      thunk_FUN_01c20e04(ppBVar5,pBVar1);
      pBVar1 = *ppBVar5;
      if (pBVar1 == (BECIPDJBAOG_o *)0x0) goto LAB_03147314;
    }
    BECIPDJBAOG__MergeFrom(pBVar1,(IBKIPBJJCPG->fields).MJIIHOLHNCK,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).OPHCNELIOLD != (KAMBBJFPLGM_o *)0x0) {
    ppKVar6 = &(__this->fields).OPHCNELIOLD;
    pKVar2 = *ppKVar6;
    if (pKVar2 == (KAMBBJFPLGM_o *)0x0) {
      pKVar2 = (KAMBBJFPLGM_o *)thunk_FUN_01bda818(KAMBBJFPLGM_TypeInfo);
      KAMBBJFPLGM___ctor(pKVar2,(MethodInfo *)0x0);
      *ppKVar6 = pKVar2;
      thunk_FUN_01c20e04(ppKVar6,pKVar2);
      pKVar2 = *ppKVar6;
      if (pKVar2 == (KAMBBJFPLGM_o *)0x0) {
LAB_03147314:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
    KAMBBJFPLGM__MergeFrom(pKVar2,(IBKIPBJJCPG->fields).OPHCNELIOLD,(MethodInfo *)0x0);
  }
  pBVar4 = &__this->fields;
  pGVar3 = Google_Protobuf_UnknownFieldSet__MergeFrom
                     (pBVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
  pBVar4->CKFPENBPNML = pGVar3;
  thunk_FUN_01c20e04(pBVar4,pGVar3);
  return;
}


// ===== public override string ToString()  [RVA 0x3047318]
// BKMLILFFPIH$$ToString @ RVA 0x3047318

System_String_o * BKMLILFFPIH__ToString(BKMLILFFPIH_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565de6 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_04565de6 = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public BECIPDJBAOG NNAKKCHDFAN()  [RVA 0x3047370]
// BKMLILFFPIH$$NNAKKCHDFAN @ RVA 0x3047370

BECIPDJBAOG_o * BKMLILFFPIH__NNAKKCHDFAN(BKMLILFFPIH_o *__this,MethodInfo *method)

{
  return (__this->fields).MJIIHOLHNCK;
}


// ===== public int CalculateSize()  [RVA 0x3047378]
// BKMLILFFPIH$$CalculateSize @ RVA 0x3047378

int32_t BKMLILFFPIH__CalculateSize(BKMLILFFPIH_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  BECIPDJBAOG_o *value;
  KAMBBJFPLGM_o *value_00;
  
  if ((DAT_04565de7 & 1) == 0) {
                    /* try { // try from 03147394 to 032473a3 has its CatchHandler @ 031477e4 */
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
                    /* try { // try from 031473a4 to 032477fb has its CatchHandler @ 03147164 */
    DAT_04565de7 = 1;
    method = extraout_x1;
  }
  value = (__this->fields).MJIIHOLHNCK;
  iVar2 = 0;
  if (value != (BECIPDJBAOG_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  value_00 = (__this->fields).OPHCNELIOLD;
  if (value_00 != (KAMBBJFPLGM_o *)0x0) {
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


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x304742C]
// BKMLILFFPIH$$Equals @ RVA 0x304742C

bool BKMLILFFPIH__Equals(BKMLILFFPIH_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04565de8 & 1) == 0) {
    FUN_01bab630(&BKMLILFFPIH_TypeInfo);
    DAT_04565de8 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)BKMLILFFPIH_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = BKMLILFFPIH__Equals(__this,(BKMLILFFPIH_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x3047504]
// BKMLILFFPIH$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3047504

Google_Protobuf_Reflection_MessageDescriptor_o *
BKMLILFFPIH__pb__Google_Protobuf_IMessage_get_Descriptor(BKMLILFFPIH_o *__this,MethodInfo *method)

{
  BKMLILFFPIH_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565de9 & 1) == 0) {
    FUN_01bab630(&BKMLILFFPIH_TypeInfo);
    DAT_04565de9 = 1;
    method = extraout_x1;
  }
  method_00 = BKMLILFFPIH_TypeInfo;
  if ((BKMLILFFPIH_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (BKMLILFFPIH_c *)thunk_FUN_01ba7564(BKMLILFFPIH_TypeInfo,method);
  }
  pGVar1 = BKMLILFFPIH__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== public bool Equals(BKMLILFFPIH IBKIPBJJCPG)  [RVA 0x3047490]
// BKMLILFFPIH$$Equals @ RVA 0x3047490

bool BKMLILFFPIH__Equals(BKMLILFFPIH_o *__this,BKMLILFFPIH_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (BKMLILFFPIH_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    bVar1 = System_Object__Equals
                      ((Il2CppObject *)(__this->fields).MJIIHOLHNCK,
                       (Il2CppObject *)(IBKIPBJJCPG->fields).MJIIHOLHNCK,(MethodInfo *)0x0);
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


// ===== private static void .cctor()  [RVA 0x3047654]
// BKMLILFFPIH$$.cctor @ RVA 0x3047654

void BKMLILFFPIH___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_BKMLILFFPIH__o *__this;
  
  if ((DAT_04565dea & 1) == 0) {
    FUN_01bab630(&BKMLILFFPIH_TypeInfo);
    FUN_01bab630(&System_Func<BKMLILFFPIH>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<BKMLILFFPIH>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<BKMLILFFPIH>_TypeInfo);
    FUN_01bab630(&Method_BKMLILFFPIH_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&BKMLILFFPIH_<>c_TypeInfo);
    DAT_04565dea = 1;
  }
  if ((BKMLILFFPIH_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<BKMLILFFPIH>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_BKMLILFFPIH__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<BKMLILFFPIH>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<BKMLILFFPIH>__ctor__);
  BKMLILFFPIH_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(BKMLILFFPIH_TypeInfo->static_fields,__this);
  return;
}


// ===== public void IIBFFDJAKFB(KAMBBJFPLGM CJNHFNHJHPE)  [RVA 0x304776C]
// BKMLILFFPIH$$IIBFFDJAKFB @ RVA 0x304776C

void BKMLILFFPIH__IIBFFDJAKFB(BKMLILFFPIH_o *__this,KAMBBJFPLGM_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).OPHCNELIOLD = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void EAAABDOJHNI(BECIPDJBAOG CJNHFNHJHPE)  [RVA 0x3047774]
// BKMLILFFPIH$$EAAABDOJHNI @ RVA 0x3047774

void BKMLILFFPIH__EAAABDOJHNI(BKMLILFFPIH_o *__this,BECIPDJBAOG_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).MJIIHOLHNCK = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x3047550]
// BKMLILFFPIH$$FFHIHGCDGAK @ RVA 0x3047550

Google_Protobuf_Reflection_MessageDescriptor_o * BKMLILFFPIH__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_04565deb & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04565deb = 1;
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
        goto LAB_03147638;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_03147638:
                    /* WARNING: Could not recover jumptable at 0x0314764c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x3a,pVVar2->method);
  return pGVar3;
}


// ===== public void .ctor(BKMLILFFPIH IBKIPBJJCPG)  [RVA 0x3047020]
// BKMLILFFPIH$$.ctor @ RVA 0x3047020

void BKMLILFFPIH___ctor(BKMLILFFPIH_o *__this,BKMLILFFPIH_o *IBKIPBJJCPG,MethodInfo *method)

{
  BECIPDJBAOG_o *pBVar1;
  KAMBBJFPLGM_o *pKVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (BKMLILFFPIH_o *)0x0) {
    pBVar1 = (IBKIPBJJCPG->fields).MJIIHOLHNCK;
    if (pBVar1 == (BECIPDJBAOG_o *)0x0) {
      pBVar1 = (BECIPDJBAOG_o *)0x0;
    }
    else {
      pBVar1 = BECIPDJBAOG__Clone(pBVar1,(MethodInfo *)0x0);
    }
    if (__this != (BKMLILFFPIH_o *)0x0) {
      (__this->fields).MJIIHOLHNCK = pBVar1;
      thunk_FUN_01c20e04();
      pKVar2 = (IBKIPBJJCPG->fields).OPHCNELIOLD;
      if (pKVar2 == (KAMBBJFPLGM_o *)0x0) {
                    /* try { // try from 03147084 to 03247093 has its CatchHandler @ 0314710c */
        pKVar2 = (KAMBBJFPLGM_o *)0x0;
      }
      else {
        pKVar2 = KAMBBJFPLGM__Clone(pKVar2,(MethodInfo *)0x0);
      }
      (__this->fields).OPHCNELIOLD = pKVar2;
      thunk_FUN_01c20e04();
      pGVar3 = Google_Protobuf_UnknownFieldSet__Clone
                         ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
                    /* try { // try from 031470a0 to 032470ab has its CatchHandler @ 03147108 */
      (__this->fields).CKFPENBPNML = pGVar3;
                    /* try { // try from 031470ac to 03247123 has its CatchHandler @ 03146fb0 */
      thunk_FUN_01c20e04(&__this->fields,pGVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

