// TypeDefIndex 1033
// Namespace: 
// public sealed class JHMFOIIPEHB : IMessage<JHMFOIIPEHB>, IMessage, IEquatable<JHMFOIIPEHB>, IDeepCloneable<JHMFOIIPEHB>
// Fields:
//   private static readonly MessageParser<JHMFOIIPEHB> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int PMLEAFBEKCK = 1;
//   private long LMHBPLAAEIE; // 0x18
//   public const int IGDMLFCJJOM = 2;
//   private PGICCMFLDPI MIINPPOCPCN; // 0x20

// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x30CE9A0]
// JHMFOIIPEHB$$MergeFrom @ RVA 0x30CE9A0

void JHMFOIIPEHB__MergeFrom
               (JHMFOIIPEHB_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  PGICCMFLDPI_o **ppPVar1;
  JHMFOIIPEHB_Fields *pJVar2;
  uint32_t uVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  int64_t iVar5;
  PGICCMFLDPI_o *pPVar6;
  
                    /* try { // try from 031ce9b4 to 032ce9cb has its CatchHandler @ 031ceacc */
  if ((DAT_045662e9 & 1) == 0) {
                    /* try { // try from 031ce9cc to 032ceabb has its CatchHandler @ 031cde74 */
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_045662e9 = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    ppPVar1 = &(__this->fields).MIINPPOCPCN;
    pJVar2 = &__this->fields;
    while( true ) {
      while( true ) {
        while (uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
              uVar3 == 8) {
          iVar5 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).LMHBPLAAEIE = iVar5;
        }
        if (uVar3 != 0x12) break;
        pPVar6 = *ppPVar1;
        if (pPVar6 == (PGICCMFLDPI_o *)0x0) {
          pPVar6 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
          PGICCMFLDPI___ctor(pPVar6,(MethodInfo *)0x0);
          *ppPVar1 = pPVar6;
          thunk_FUN_01c20e04(ppPVar1,pPVar6);
          pPVar6 = *ppPVar1;
        }
        Google_Protobuf_CodedInputStream__ReadMessage
                  (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pPVar6,(MethodInfo *)0x0);
      }
      if (uVar3 == 0) break;
      pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pJVar2->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pJVar2->CKFPENBPNML = pGVar4;
      thunk_FUN_01c20e04(pJVar2,pGVar4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override string ToString()  [RVA 0x30CEA9C]
// JHMFOIIPEHB$$ToString @ RVA 0x30CEA9C

System_String_o * JHMFOIIPEHB__ToString(JHMFOIIPEHB_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045662ea & 1) == 0) {
                    /* try { // try from 031ceabc to 032ceacb has its CatchHandler @ 031ceacc */
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
                    /* catch() { ... } // from try @ 031ce9b4 with catch @ 031ceacc
                       catch() { ... } // from try @ 031ceabc with catch @ 031ceacc */
    DAT_045662ea = 1;
    method = extraout_x1;
  }
                    /* try { // try from 031cead0 to 032cead3 has its CatchHandler @ 031ceadc */
                    /* try { // try from 031cead4 to 032ceadf has its CatchHandler @ 031cde74 */
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031cead0 with catch @ 031ceadc
                        */
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
                    /* try { // try from 031ceae0 to 032cebcf has its CatchHandler @ 031ceae0
                       catch() { ... } // from try @ 031ceae0 with catch @ 031ceae0
                       catch() { ... } // from try @ 031cec08 with catch @ 031ceae0
                       catch() { ... } // from try @ 031cec90 with catch @ 031ceae0
                       catch() { ... } // from try @ 031cec9c with catch @ 031ceae0
                       catch() { ... } // from try @ 031ced34 with catch @ 031ceae0 */
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void OKNGMFGIHOO(long CJNHFNHJHPE)  [RVA 0x30CEAF4]
// JHMFOIIPEHB$$OKNGMFGIHOO @ RVA 0x30CEAF4

void JHMFOIIPEHB__OKNGMFGIHOO(JHMFOIIPEHB_o *__this,int64_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).LMHBPLAAEIE = CJNHFNHJHPE;
  return;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x30CEAFC]
// JHMFOIIPEHB$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x30CEAFC

Google_Protobuf_Reflection_MessageDescriptor_o *
JHMFOIIPEHB__pb__Google_Protobuf_IMessage_get_Descriptor(JHMFOIIPEHB_o *__this,MethodInfo *method)

{
  JHMFOIIPEHB_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045662eb & 1) == 0) {
    FUN_01bab630(&JHMFOIIPEHB_TypeInfo);
    DAT_045662eb = 1;
    method = extraout_x1;
  }
  method_00 = JHMFOIIPEHB_TypeInfo;
  if ((JHMFOIIPEHB_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (JHMFOIIPEHB_c *)thunk_FUN_01ba7564(JHMFOIIPEHB_TypeInfo,method);
  }
  pGVar1 = JHMFOIIPEHB__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}


// ===== private static void .cctor()  [RVA 0x30CEC4C]
// JHMFOIIPEHB$$.cctor @ RVA 0x30CEC4C

void JHMFOIIPEHB___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_JHMFOIIPEHB__o *__this;
  
  if ((DAT_045662ec & 1) == 0) {
    FUN_01bab630(&System_Func<JHMFOIIPEHB>_TypeInfo);
    FUN_01bab630(&JHMFOIIPEHB_TypeInfo);
                    /* try { // try from 031cec8c to 032cec8f has its CatchHandler @ 031ceca4 */
                    /* try { // try from 031cec90 to 032cec97 has its CatchHandler @ 031ceae0 */
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<JHMFOIIPEHB>__ctor__);
                    /* try { // try from 031cec98 to 032cec9b has its CatchHandler @ 031cec9c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031cebd0 with catch @ 031cec9c
                       catch(type#1 @ 03f99f68) { ... } // from try @ 031cec98 with catch @ 031cec9c
                       try { // try from 031cec9c to 032cecbb has its CatchHandler @ 031ceae0 */
    FUN_01bab630(&Google_Protobuf_MessageParser<JHMFOIIPEHB>_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031cebf4 with catch @ 031ceca0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031cec8c with catch @ 031ceca4
                        */
    FUN_01bab630(&Method_JHMFOIIPEHB_<>c_AFJKCJDOFEL__);
    FUN_01bab630(&JHMFOIIPEHB_<>c_TypeInfo);
                    /* try { // try from 031cecbc to 032cecbf has its CatchHandler @ 031cecd4 */
    DAT_045662ec = 1;
  }
                    /* catch() { ... } // from try @ 031cecbc with catch @ 031cecd4 */
  if ((JHMFOIIPEHB_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<JHMFOIIPEHB>_TypeInfo);
                    /* try { // try from 031ced0c to 032ced33 has its CatchHandler @ 031ced48 */
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_JHMFOIIPEHB__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<JHMFOIIPEHB>_TypeInfo);
                    /* try { // try from 031ced34 to 032ced3f has its CatchHandler @ 031ceae0 */
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<JHMFOIIPEHB>__ctor__);
                    /* try { // try from 031ced40 to 032ced47 has its CatchHandler @ 031ced48 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031ced0c with catch @ 031ced48
                       catch(type#2 @ 00000000) { ... } // from try @ 031ced40 with catch @ 031ced48
                        */
  JHMFOIIPEHB_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(JHMFOIIPEHB_TypeInfo->static_fields,__this);
  return;
}


// ===== public void MergeFrom(JHMFOIIPEHB IBKIPBJJCPG)  [RVA 0x30CED64]
// JHMFOIIPEHB$$MergeFrom @ RVA 0x30CED64

void JHMFOIIPEHB__MergeFrom(JHMFOIIPEHB_o *__this,JHMFOIIPEHB_o *IBKIPBJJCPG,MethodInfo *method)

{
  PGICCMFLDPI_o *pPVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  long lVar3;
  JHMFOIIPEHB_Fields *pJVar4;
  PGICCMFLDPI_o **ppPVar5;
  
  if ((DAT_045662ed & 1) == 0) {
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    DAT_045662ed = 1;
  }
  if (IBKIPBJJCPG != (JHMFOIIPEHB_o *)0x0) {
    lVar3 = (IBKIPBJJCPG->fields).LMHBPLAAEIE;
    if (lVar3 != 0) {
      (__this->fields).LMHBPLAAEIE = lVar3;
    }
    if ((IBKIPBJJCPG->fields).MIINPPOCPCN != (PGICCMFLDPI_o *)0x0) {
      ppPVar5 = &(__this->fields).MIINPPOCPCN;
      pPVar1 = *ppPVar5;
      if (pPVar1 == (PGICCMFLDPI_o *)0x0) {
        pPVar1 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
        PGICCMFLDPI___ctor(pPVar1,(MethodInfo *)0x0);
        *ppPVar5 = pPVar1;
        thunk_FUN_01c20e04(ppPVar5,pPVar1);
        pPVar1 = *ppPVar5;
        if (pPVar1 == (PGICCMFLDPI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
      PGICCMFLDPI__MergeFrom(pPVar1,(IBKIPBJJCPG->fields).MIINPPOCPCN,(MethodInfo *)0x0);
    }
    pJVar4 = &__this->fields;
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pJVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    pJVar4->CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(pJVar4,pGVar2);
    return;
  }
  return;
}


// ===== public static MessageParser<JHMFOIIPEHB> PGCAHPDCJBC()  [RVA 0x30CEE3C]
// JHMFOIIPEHB$$PGCAHPDCJBC @ RVA 0x30CEE3C

Google_Protobuf_MessageParser_JHMFOIIPEHB__o * JHMFOIIPEHB__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_045662ee & 1) == 0) {
    FUN_01bab630(&JHMFOIIPEHB_TypeInfo);
    DAT_045662ee = 1;
  }
  if ((JHMFOIIPEHB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  return JHMFOIIPEHB_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== public int CalculateSize()  [RVA 0x30CEE94]
// JHMFOIIPEHB$$CalculateSize @ RVA 0x30CEE94

int32_t JHMFOIIPEHB__CalculateSize(JHMFOIIPEHB_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  long value;
  PGICCMFLDPI_o *value_00;
  
  if ((DAT_045662ef & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_045662ef = 1;
    method = extraout_x1;
  }
  value = (__this->fields).LMHBPLAAEIE;
  iVar2 = 0;
  if (value != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt64Size(value,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  value_00 = (__this->fields).MIINPPOCPCN;
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


// ===== public override int GetHashCode()  [RVA 0x30CEF48]
// JHMFOIIPEHB$$GetHashCode @ RVA 0x30CEF48

int32_t JHMFOIIPEHB__GetHashCode(JHMFOIIPEHB_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  PGICCMFLDPI_o *pPVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  long lVar5;
  long local_18;
  
  local_18 = 0;
  lVar5 = (__this->fields).LMHBPLAAEIE;
  if (lVar5 == 0) {
    uVar1 = 1;
  }
  else {
    local_18 = lVar5;
    uVar1 = System_Int64__GetHashCode((int64_t)&local_18,(MethodInfo *)0x0);
    uVar1 = uVar1 ^ 1;
  }
  pPVar3 = (__this->fields).MIINPPOCPCN;
  if (pPVar3 != (PGICCMFLDPI_o *)0x0) {
    uVar2 = (*(pPVar3->klass->vtable)._2_GetHashCode.methodPtr)
                      (pPVar3,(pPVar3->klass->vtable)._2_GetHashCode.method);
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


// ===== public void .ctor(JHMFOIIPEHB IBKIPBJJCPG)  [RVA 0x30CEFBC]
// JHMFOIIPEHB$$.ctor @ RVA 0x30CEFBC

void JHMFOIIPEHB___ctor(JHMFOIIPEHB_o *__this,JHMFOIIPEHB_o *IBKIPBJJCPG,MethodInfo *method)

{
  PGICCMFLDPI_o *pPVar1;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (JHMFOIIPEHB_o *)0x0) {
    (__this->fields).LMHBPLAAEIE = (IBKIPBJJCPG->fields).LMHBPLAAEIE;
    pPVar1 = (IBKIPBJJCPG->fields).MIINPPOCPCN;
    if (pPVar1 == (PGICCMFLDPI_o *)0x0) {
      pPVar1 = (PGICCMFLDPI_o *)0x0;
    }
    else {
      pPVar1 = PGICCMFLDPI__Clone(pPVar1,(MethodInfo *)0x0);
    }
    (__this->fields).MIINPPOCPCN = pPVar1;
    thunk_FUN_01c20e04();
    pGVar2 = Google_Protobuf_UnknownFieldSet__Clone
                       ((IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
    (__this->fields).CKFPENBPNML = pGVar2;
    thunk_FUN_01c20e04(&__this->fields,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool Equals(JHMFOIIPEHB IBKIPBJJCPG)  [RVA 0x30CF038]
// JHMFOIIPEHB$$Equals @ RVA 0x30CF038

bool JHMFOIIPEHB__Equals(JHMFOIIPEHB_o *__this,JHMFOIIPEHB_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (JHMFOIIPEHB_o *)0x0) {
    if (IBKIPBJJCPG == __this) {
      return true;
    }
    if (((__this->fields).LMHBPLAAEIE == (IBKIPBJJCPG->fields).LMHBPLAAEIE) &&
       (bVar1 = System_Object__Equals
                          ((Il2CppObject *)(__this->fields).MIINPPOCPCN,
                           (Il2CppObject *)(IBKIPBJJCPG->fields).MIINPPOCPCN,(MethodInfo *)0x0),
       bVar1)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x30CF0A8]
// JHMFOIIPEHB$$WriteTo @ RVA 0x30CF0A8

void JHMFOIIPEHB__WriteTo
               (JHMFOIIPEHB_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
  if ((__this->fields).LMHBPLAAEIE != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_031cf138;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,8,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt64
              (JBGJLELBMJF,(__this->fields).LMHBPLAAEIE,(MethodInfo *)0x0);
  }
  if ((__this->fields).MIINPPOCPCN != (PGICCMFLDPI_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_031cf138:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).MIINPPOCPCN,
               (MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public void .ctor()  [RVA 0x30CF030]
// JHMFOIIPEHB$$.ctor @ RVA 0x30CF030

void JHMFOIIPEHB___ctor(JHMFOIIPEHB_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x30CF13C]
// JHMFOIIPEHB$$Equals @ RVA 0x30CF13C

bool JHMFOIIPEHB__Equals(JHMFOIIPEHB_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045662f0 & 1) == 0) {
    FUN_01bab630(&JHMFOIIPEHB_TypeInfo);
    DAT_045662f0 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)JHMFOIIPEHB_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = JHMFOIIPEHB__Equals(__this,(JHMFOIIPEHB_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public JHMFOIIPEHB Clone()  [RVA 0x30CF1A0]
// JHMFOIIPEHB$$Clone @ RVA 0x30CF1A0

JHMFOIIPEHB_o * JHMFOIIPEHB__Clone(JHMFOIIPEHB_o *__this,MethodInfo *method)

{
  JHMFOIIPEHB_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_045662f1 & 1) == 0) {
    FUN_01bab630(&JHMFOIIPEHB_TypeInfo);
    DAT_045662f1 = 1;
    method = extraout_x1;
  }
  __this_00 = (JHMFOIIPEHB_o *)thunk_FUN_01bda818(JHMFOIIPEHB_TypeInfo,method);
  JHMFOIIPEHB___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public void KAIDLBNPCJH(PGICCMFLDPI CJNHFNHJHPE)  [RVA 0x30CF1F8]
// JHMFOIIPEHB$$KAIDLBNPCJH @ RVA 0x30CF1F8

void JHMFOIIPEHB__KAIDLBNPCJH(JHMFOIIPEHB_o *__this,PGICCMFLDPI_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).MIINPPOCPCN = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public long OOLGMOGFCFG()  [RVA 0x30CF200]
// JHMFOIIPEHB$$OOLGMOGFCFG @ RVA 0x30CF200

int64_t JHMFOIIPEHB__OOLGMOGFCFG(JHMFOIIPEHB_o *__this,MethodInfo *method)

{
  return (__this->fields).LMHBPLAAEIE;
}


// ===== public PGICCMFLDPI MLFJHBIJMAA()  [RVA 0x30CF208]
// JHMFOIIPEHB$$MLFJHBIJMAA @ RVA 0x30CF208

PGICCMFLDPI_o * JHMFOIIPEHB__MLFJHBIJMAA(JHMFOIIPEHB_o *__this,MethodInfo *method)

{
  return (__this->fields).MIINPPOCPCN;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x30CEB48]
// JHMFOIIPEHB$$FFHIHGCDGAK @ RVA 0x30CEB48

Google_Protobuf_Reflection_MessageDescriptor_o * JHMFOIIPEHB__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_045662f2 & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_045662f2 = 1;
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
                    /* try { // try from 031cebd0 to 032cebf3 has its CatchHandler @ 031cec9c */
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
                    /* try { // try from 031cebf4 to 032cec07 has its CatchHandler @ 031ceca0 */
    piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IList<MessageDescriptor>_TypeInfo) {
        pVVar2 = pSVar5->vtable + *piVar7;
        goto LAB_031cec30;
      }
                    /* try { // try from 031cec08 to 032cec8b has its CatchHandler @ 031ceae0 */
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_031cec30:
                    /* WARNING: Could not recover jumptable at 0x031cec44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x43,pVVar2->method);
  return pGVar3;
}

