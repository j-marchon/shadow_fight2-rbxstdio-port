// TypeDefIndex 1996
// Namespace: 
// public sealed class OJFPEINHCDP : IMessage<OJFPEINHCDP>, IMessage, IEquatable<OJFPEINHCDP>, IDeepCloneable<OJFPEINHCDP>
// Fields:
//   private static readonly MessageParser<OJFPEINHCDP> NNMODPGDIDE; // 0x0
//   private UnknownFieldSet CKFPENBPNML; // 0x10
//   public const int KGBOMFIKDEC = 1;
//   private NODLJPNGNBG OPHCNELIOLD; // 0x18
//   public const int GDEPILLKJDA = 2;
//   private KDADMJGPAOM LHFLMBNKPHF; // 0x20
//   public const int OBKIBNCLPKE = 3;
//   private int KLOGBBKOLFL; // 0x28

// ===== public bool Equals(OJFPEINHCDP IBKIPBJJCPG)  [RVA 0x32927AC]
// OJFPEINHCDP$$Equals @ RVA 0x32927AC

bool OJFPEINHCDP__Equals(OJFPEINHCDP_o *__this,OJFPEINHCDP_o *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if (IBKIPBJJCPG != (OJFPEINHCDP_o *)0x0) {
                    /* catch() { ... } // from try @ 03392798 with catch @ 033927c4 */
    if (IBKIPBJJCPG == __this) {
      return true;
    }
                    /* try { // try from 033927cc to 034927d3 has its CatchHandler @ 033927e8 */
                    /* try { // try from 033927d4 to 034927df has its CatchHandler @ 03392638 */
    bVar1 = System_Object__Equals
                      ((Il2CppObject *)(__this->fields).OPHCNELIOLD,
                       (Il2CppObject *)(IBKIPBJJCPG->fields).OPHCNELIOLD,(MethodInfo *)0x0);
                    /* try { // try from 033927e0 to 034927e7 has its CatchHandler @ 033927e8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033927cc with catch @ 033927e8
                       catch(type#2 @ 00000000) { ... } // from try @ 033927e0 with catch @ 033927e8
                        */
    if (((bVar1) &&
        (bVar1 = System_Object__Equals
                           ((Il2CppObject *)(__this->fields).LHFLMBNKPHF,
                            (Il2CppObject *)(IBKIPBJJCPG->fields).LHFLMBNKPHF,(MethodInfo *)0x0),
        bVar1)) && ((__this->fields).KLOGBBKOLFL == (IBKIPBJJCPG->fields).KLOGBBKOLFL)) {
      bVar1 = System_Object__Equals
                        ((Il2CppObject *)(__this->fields).CKFPENBPNML,
                         (Il2CppObject *)(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// ===== public int CalculateSize()  [RVA 0x3292830]
// OJFPEINHCDP$$CalculateSize @ RVA 0x3292830

int32_t OJFPEINHCDP__CalculateSize(OJFPEINHCDP_o *__this,MethodInfo *method)

{
  int value;
  int32_t iVar1;
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  MethodInfo *extraout_x1;
  int iVar2;
  NODLJPNGNBG_o *value_00;
  KDADMJGPAOM_o *value_01;
  
  if ((DAT_04567335 & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_CodedOutputStream_TypeInfo);
    DAT_04567335 = 1;
    method = extraout_x1;
  }
  value_00 = (__this->fields).OPHCNELIOLD;
  iVar2 = 0;
  if (value_00 != (NODLJPNGNBG_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Google_Protobuf_CodedOutputStream_TypeInfo,method);
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value_00,(MethodInfo *)0x0);
    iVar2 = iVar1 + 1;
  }
  value_01 = (__this->fields).LHFLMBNKPHF;
  if (value_01 != (KDADMJGPAOM_o *)0x0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeMessageSize
                      ((Google_Protobuf_IMessage_o *)value_01,(MethodInfo *)0x0);
    iVar2 = iVar2 + iVar1 + 1;
  }
  value = (__this->fields).KLOGBBKOLFL;
  if (value != 0) {
    if ((Google_Protobuf_CodedOutputStream_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = Google_Protobuf_CodedOutputStream__ComputeInt32Size(value,(MethodInfo *)0x0);
    iVar2 = iVar2 + iVar1 + 1;
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    iVar1 = Google_Protobuf_UnknownFieldSet__CalculateSize(__this_00,(MethodInfo *)0x0);
    iVar2 = iVar1 + iVar2;
  }
  return iVar2;
}


// ===== public KDADMJGPAOM KJBIABLOHLF()  [RVA 0x3292910]
// OJFPEINHCDP$$KJBIABLOHLF @ RVA 0x3292910

KDADMJGPAOM_o * OJFPEINHCDP__KJBIABLOHLF(OJFPEINHCDP_o *__this,MethodInfo *method)

{
  return (__this->fields).LHFLMBNKPHF;
}


// ===== public void WriteTo(CodedOutputStream JBGJLELBMJF)  [RVA 0x3292918]
// OJFPEINHCDP$$WriteTo @ RVA 0x3292918

void OJFPEINHCDP__WriteTo
               (OJFPEINHCDP_o *__this,Google_Protobuf_CodedOutputStream_o *JBGJLELBMJF,
               MethodInfo *method)

{
  Google_Protobuf_UnknownFieldSet_o *__this_00;
  
  if ((__this->fields).OPHCNELIOLD != (NODLJPNGNBG_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_033929d4;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,10,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).OPHCNELIOLD,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).LHFLMBNKPHF != (KDADMJGPAOM_o *)0x0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) goto LAB_033929d4;
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x12,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteMessage
              (JBGJLELBMJF,(Google_Protobuf_IMessage_o *)(__this->fields).LHFLMBNKPHF,
               (MethodInfo *)0x0);
  }
  if ((__this->fields).KLOGBBKOLFL != 0) {
    if (JBGJLELBMJF == (Google_Protobuf_CodedOutputStream_o *)0x0) {
LAB_033929d4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Google_Protobuf_CodedOutputStream__WriteRawTag(JBGJLELBMJF,0x18,(MethodInfo *)0x0);
    Google_Protobuf_CodedOutputStream__WriteInt32
              (JBGJLELBMJF,(__this->fields).KLOGBBKOLFL,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).CKFPENBPNML;
  if (__this_00 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    Google_Protobuf_UnknownFieldSet__WriteTo(__this_00,JBGJLELBMJF,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public void MergeFrom(OJFPEINHCDP IBKIPBJJCPG)  [RVA 0x32929D8]
// OJFPEINHCDP$$MergeFrom @ RVA 0x32929D8

void OJFPEINHCDP__MergeFrom(OJFPEINHCDP_o *__this,OJFPEINHCDP_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  NODLJPNGNBG_o *pNVar2;
  KDADMJGPAOM_o *pKVar3;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  OJFPEINHCDP_Fields *pOVar5;
  NODLJPNGNBG_o **ppNVar6;
  KDADMJGPAOM_o **ppKVar7;
  
  if ((DAT_04567336 & 1) == 0) {
    FUN_01bab630(&KDADMJGPAOM_TypeInfo);
    FUN_01bab630(&NODLJPNGNBG_TypeInfo);
    DAT_04567336 = 1;
  }
  if (IBKIPBJJCPG == (OJFPEINHCDP_o *)0x0) {
    return;
  }
  if ((IBKIPBJJCPG->fields).OPHCNELIOLD != (NODLJPNGNBG_o *)0x0) {
    ppNVar6 = &(__this->fields).OPHCNELIOLD;
    pNVar2 = *ppNVar6;
    if (pNVar2 == (NODLJPNGNBG_o *)0x0) {
      pNVar2 = (NODLJPNGNBG_o *)thunk_FUN_01bda818(NODLJPNGNBG_TypeInfo);
      NODLJPNGNBG___ctor(pNVar2,(MethodInfo *)0x0);
      *ppNVar6 = pNVar2;
      thunk_FUN_01c20e04(ppNVar6,pNVar2);
      pNVar2 = *ppNVar6;
      if (pNVar2 == (NODLJPNGNBG_o *)0x0) goto LAB_03392b0c;
    }
    NODLJPNGNBG__MergeFrom(pNVar2,(IBKIPBJJCPG->fields).OPHCNELIOLD,(MethodInfo *)0x0);
  }
  if ((IBKIPBJJCPG->fields).LHFLMBNKPHF != (KDADMJGPAOM_o *)0x0) {
    ppKVar7 = &(__this->fields).LHFLMBNKPHF;
    pKVar3 = *ppKVar7;
    if (pKVar3 == (KDADMJGPAOM_o *)0x0) {
      pKVar3 = (KDADMJGPAOM_o *)thunk_FUN_01bda818(KDADMJGPAOM_TypeInfo);
      KDADMJGPAOM___ctor(pKVar3,(MethodInfo *)0x0);
      *ppKVar7 = pKVar3;
      thunk_FUN_01c20e04(ppKVar7,pKVar3);
      pKVar3 = *ppKVar7;
      if (pKVar3 == (KDADMJGPAOM_o *)0x0) {
LAB_03392b0c:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
    KDADMJGPAOM__MergeFrom(pKVar3,(IBKIPBJJCPG->fields).LHFLMBNKPHF,(MethodInfo *)0x0);
  }
  iVar1 = (IBKIPBJJCPG->fields).KLOGBBKOLFL;
  if (iVar1 != 0) {
    (__this->fields).KLOGBBKOLFL = iVar1;
  }
  pOVar5 = &__this->fields;
  pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFrom
                     (pOVar5->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
  pOVar5->CKFPENBPNML = pGVar4;
  thunk_FUN_01c20e04(pOVar5,pGVar4);
  return;
}


// ===== public void MergeFrom(CodedInputStream AIGOBLJEBCA)  [RVA 0x3292B10]
// OJFPEINHCDP$$MergeFrom @ RVA 0x3292B10

void OJFPEINHCDP__MergeFrom
               (OJFPEINHCDP_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  KDADMJGPAOM_o **ppKVar1;
  NODLJPNGNBG_o **ppNVar2;
  OJFPEINHCDP_Fields *pOVar3;
  uint32_t uVar4;
  int32_t iVar5;
  KDADMJGPAOM_o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar6;
  NODLJPNGNBG_o *pNVar7;
  
                    /* try { // try from 03392b24 to 03492c17 has its CatchHandler @ 03392b24
                       catch() { ... } // from try @ 03392b24 with catch @ 03392b24
                       catch() { ... } // from try @ 03392cbc with catch @ 03392b24
                       catch() { ... } // from try @ 03392cf4 with catch @ 03392b24
                       catch() { ... } // from try @ 03392d30 with catch @ 03392b24
                       catch() { ... } // from try @ 03392d68 with catch @ 03392b24 */
  if ((DAT_04567337 & 1) == 0) {
    FUN_01bab630(&KDADMJGPAOM_TypeInfo);
    FUN_01bab630(&NODLJPNGNBG_TypeInfo);
    DAT_04567337 = 1;
  }
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  ppKVar1 = &(__this->fields).LHFLMBNKPHF;
  ppNVar2 = &(__this->fields).OPHCNELIOLD;
  pOVar3 = &__this->fields;
  do {
    while (uVar4 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
          (int)uVar4 < 0x12) {
      if (uVar4 == 10) {
        pNVar7 = *ppNVar2;
        if (pNVar7 == (NODLJPNGNBG_o *)0x0) {
          pNVar7 = (NODLJPNGNBG_o *)thunk_FUN_01bda818(NODLJPNGNBG_TypeInfo);
          NODLJPNGNBG___ctor(pNVar7,(MethodInfo *)0x0);
          *ppNVar2 = pNVar7;
          thunk_FUN_01c20e04(ppNVar2,pNVar7);
          pNVar7 = *ppNVar2;
        }
        goto LAB_03392c1c;
      }
                    /* try { // try from 03392c2c to 03492c37 has its CatchHandler @ 03392d0c */
      if (uVar4 == 0) {
        return;
      }
LAB_03392c30:
      pGVar6 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                         (pOVar3->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
      pOVar3->CKFPENBPNML = pGVar6;
      thunk_FUN_01c20e04(pOVar3,pGVar6);
    }
    if (uVar4 == 0x12) {
      pNVar7 = (NODLJPNGNBG_o *)*ppKVar1;
      if (pNVar7 == (NODLJPNGNBG_o *)0x0) {
        __this_00 = (KDADMJGPAOM_o *)thunk_FUN_01bda818(KDADMJGPAOM_TypeInfo);
        KDADMJGPAOM___ctor(__this_00,(MethodInfo *)0x0);
        *ppKVar1 = __this_00;
        thunk_FUN_01c20e04(ppKVar1,__this_00);
                    /* try { // try from 03392c18 to 03492c1f has its CatchHandler @ 03392d10 */
        pNVar7 = (NODLJPNGNBG_o *)*ppKVar1;
      }
LAB_03392c1c:
      Google_Protobuf_CodedInputStream__ReadMessage
                (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pNVar7,(MethodInfo *)0x0);
    }
    else {
      if (uVar4 != 0x18) goto LAB_03392c30;
      iVar5 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
      (__this->fields).KLOGBBKOLFL = iVar5;
    }
  } while( true );
}


// ===== private static void .cctor()  [RVA 0x3292C70]
// OJFPEINHCDP$$.cctor @ RVA 0x3292C70

void OJFPEINHCDP___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_OJFPEINHCDP__o *__this;
  
                    /* try { // try from 03392c78 to 03492c87 has its CatchHandler @ 03392d04 */
  if ((DAT_04567338 & 1) == 0) {
                    /* try { // try from 03392c98 to 03492c9b has its CatchHandler @ 03392cfc */
                    /* try { // try from 03392c9c to 03492ca7 has its CatchHandler @ 03392d00 */
    FUN_01bab630(&System_Func<OJFPEINHCDP>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<OJFPEINHCDP>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<OJFPEINHCDP>_TypeInfo);
                    /* try { // try from 03392cb8 to 03492cbb has its CatchHandler @ 03392cf8 */
                    /* try { // try from 03392cbc to 03492ceb has its CatchHandler @ 03392b24 */
    FUN_01bab630(&OJFPEINHCDP_TypeInfo);
    FUN_01bab630(&Method_OJFPEINHCDP_<>c_OEFEKGDDHPN__);
    FUN_01bab630(&OJFPEINHCDP_<>c_TypeInfo);
    DAT_04567338 = 1;
  }
                    /* try { // try from 03392cec to 03492cf3 has its CatchHandler @ 03392d08 */
                    /* try { // try from 03392cf4 to 03492d2b has its CatchHandler @ 03392b24 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03392cb8 with catch @ 03392cf8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03392c98 with catch @ 03392cfc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03392c9c with catch @ 03392d00
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03392c78 with catch @ 03392d04
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03392cec with catch @ 03392d08
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03392c2c with catch @ 03392d0c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03392c18 with catch @ 03392d10
                        */
  if ((OJFPEINHCDP_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03392d2c to 03492d2f has its CatchHandler @ 03392d58 */
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<OJFPEINHCDP>_TypeInfo);
                    /* try { // try from 03392d30 to 03492d5f has its CatchHandler @ 03392b24 */
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_OJFPEINHCDP__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<OJFPEINHCDP>_TypeInfo);
                    /* catch() { ... } // from try @ 03392d2c with catch @ 03392d58 */
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<OJFPEINHCDP>__ctor__);
                    /* try { // try from 03392d60 to 03492d67 has its CatchHandler @ 03392d7c */
                    /* try { // try from 03392d68 to 03492d73 has its CatchHandler @ 03392b24 */
  OJFPEINHCDP_TypeInfo->static_fields->NNMODPGDIDE = __this;
                    /* try { // try from 03392d74 to 03492d7b has its CatchHandler @ 03392d7c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03392d60 with catch @ 03392d7c
                       catch(type#2 @ 00000000) { ... } // from try @ 03392d74 with catch @ 03392d7c
                        */
  thunk_FUN_01c20e04(OJFPEINHCDP_TypeInfo->static_fields,__this);
  return;
}


// ===== public void .ctor(OJFPEINHCDP IBKIPBJJCPG)  [RVA 0x3292D88]
// OJFPEINHCDP$$.ctor @ RVA 0x3292D88

void OJFPEINHCDP___ctor(OJFPEINHCDP_o *__this,OJFPEINHCDP_o *IBKIPBJJCPG,MethodInfo *method)

{
  NODLJPNGNBG_o *pNVar1;
  KDADMJGPAOM_o *pKVar2;
  Google_Protobuf_UnknownFieldSet_o *pGVar3;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (OJFPEINHCDP_o *)0x0) {
    pNVar1 = (IBKIPBJJCPG->fields).OPHCNELIOLD;
    if (pNVar1 == (NODLJPNGNBG_o *)0x0) {
      pNVar1 = (NODLJPNGNBG_o *)0x0;
    }
    else {
      pNVar1 = NODLJPNGNBG__Clone(pNVar1,(MethodInfo *)0x0);
    }
    if (__this != (OJFPEINHCDP_o *)0x0) {
      (__this->fields).OPHCNELIOLD = pNVar1;
      thunk_FUN_01c20e04();
      pKVar2 = (IBKIPBJJCPG->fields).LHFLMBNKPHF;
      if (pKVar2 == (KDADMJGPAOM_o *)0x0) {
        pKVar2 = (KDADMJGPAOM_o *)0x0;
      }
      else {
        pKVar2 = KDADMJGPAOM__Clone(pKVar2,(MethodInfo *)0x0);
      }
      (__this->fields).LHFLMBNKPHF = pKVar2;
      thunk_FUN_01c20e04();
      (__this->fields).KLOGBBKOLFL = (IBKIPBJJCPG->fields).KLOGBBKOLFL;
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


// ===== public void IIBFFDJAKFB(NODLJPNGNBG CJNHFNHJHPE)  [RVA 0x3292E30]
// OJFPEINHCDP$$IIBFFDJAKFB @ RVA 0x3292E30

void OJFPEINHCDP__IIBFFDJAKFB(OJFPEINHCDP_o *__this,NODLJPNGNBG_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).OPHCNELIOLD = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public override bool Equals(object IBKIPBJJCPG)  [RVA 0x3292E38]
// OJFPEINHCDP$$Equals @ RVA 0x3292E38

bool OJFPEINHCDP__Equals(OJFPEINHCDP_o *__this,Il2CppObject *IBKIPBJJCPG,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04567339 & 1) == 0) {
    FUN_01bab630(&OJFPEINHCDP_TypeInfo);
    DAT_04567339 = 1;
  }
  if (IBKIPBJJCPG == (Il2CppObject *)0x0) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  else if (IBKIPBJJCPG->klass != (Il2CppClass *)OJFPEINHCDP_TypeInfo) {
    IBKIPBJJCPG = (Il2CppObject *)0x0;
  }
  bVar1 = OJFPEINHCDP__Equals(__this,(OJFPEINHCDP_o *)IBKIPBJJCPG,method);
  return bVar1;
}


// ===== public int OBAJCBOGFFM()  [RVA 0x3292E9C]
// OJFPEINHCDP$$OBAJCBOGFFM @ RVA 0x3292E9C

int32_t OJFPEINHCDP__OBAJCBOGFFM(OJFPEINHCDP_o *__this,MethodInfo *method)

{
  return (__this->fields).KLOGBBKOLFL;
}


// ===== public override int GetHashCode()  [RVA 0x3292EA4]
// OJFPEINHCDP$$GetHashCode @ RVA 0x3292EA4

int32_t OJFPEINHCDP__GetHashCode(OJFPEINHCDP_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  NODLJPNGNBG_o *pNVar4;
  KDADMJGPAOM_o *pKVar5;
  Google_Protobuf_UnknownFieldSet_o *pGVar6;
  int local_14;
  
  local_14 = 0;
  pNVar4 = (__this->fields).OPHCNELIOLD;
  if (pNVar4 == (NODLJPNGNBG_o *)0x0) {
    uVar2 = 1;
  }
  else {
    uVar2 = (*(pNVar4->klass->vtable)._2_GetHashCode.methodPtr)
                      (pNVar4,(pNVar4->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar2 ^ 1;
  }
  pKVar5 = (__this->fields).LHFLMBNKPHF;
  if (pKVar5 != (KDADMJGPAOM_o *)0x0) {
    uVar3 = (*(pKVar5->klass->vtable)._2_GetHashCode.methodPtr)
                      (pKVar5,(pKVar5->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar3 ^ uVar2;
  }
  iVar1 = (__this->fields).KLOGBBKOLFL;
  if (iVar1 != 0) {
    local_14 = iVar1;
    uVar3 = System_Int32__GetHashCode((int32_t)&local_14,(MethodInfo *)0x0);
    uVar2 = uVar3 ^ uVar2;
  }
  pGVar6 = (__this->fields).CKFPENBPNML;
  if (pGVar6 != (Google_Protobuf_UnknownFieldSet_o *)0x0) {
    uVar3 = (*(pGVar6->klass->vtable)._2_GetHashCode.methodPtr)
                      (pGVar6,(pGVar6->klass->vtable)._2_GetHashCode.method);
    uVar2 = uVar3 ^ uVar2;
  }
  return uVar2;
}


// ===== public override string ToString()  [RVA 0x3292F30]
// OJFPEINHCDP$$ToString @ RVA 0x3292F30

System_String_o * OJFPEINHCDP__ToString(OJFPEINHCDP_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456733a & 1) == 0) {
    FUN_01bab630(&Google_Protobuf_JsonFormatter_TypeInfo);
    DAT_0456733a = 1;
    method = extraout_x1;
  }
  if ((Google_Protobuf_JsonFormatter_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Google_Protobuf_JsonFormatter_TypeInfo,method);
  }
  pSVar1 = Google_Protobuf_JsonFormatter__ToDiagnosticString
                     ((Google_Protobuf_IMessage_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void LNEGJIIBIJI(int CJNHFNHJHPE)  [RVA 0x3292F88]
// OJFPEINHCDP$$LNEGJIIBIJI @ RVA 0x3292F88

void OJFPEINHCDP__LNEGJIIBIJI(OJFPEINHCDP_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).KLOGBBKOLFL = CJNHFNHJHPE;
  return;
}


// ===== public void .ctor()  [RVA 0x3292E28]
// OJFPEINHCDP$$.ctor @ RVA 0x3292E28

void OJFPEINHCDP___ctor(OJFPEINHCDP_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static MessageDescriptor FFHIHGCDGAK()  [RVA 0x3292F90]
// OJFPEINHCDP$$FFHIHGCDGAK @ RVA 0x3292F90

Google_Protobuf_Reflection_MessageDescriptor_o * OJFPEINHCDP__FFHIHGCDGAK(MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar3;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar4;
  System_Collections_Generic_IList_MessageDescriptor__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar8;
  
  if ((DAT_0456733b & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
                    /* try { // try from 03392fc0 to 034930c3 has its CatchHandler @ 03392fc0
                       catch() { ... } // from try @ 03392fc0 with catch @ 03392fc0
                       catch() { ... } // from try @ 0339313c with catch @ 03392fc0
                       catch() { ... } // from try @ 03393178 with catch @ 03392fc0
                       catch() { ... } // from try @ 033931a8 with catch @ 03392fc0
                       catch() { ... } // from try @ 033931d8 with catch @ 03392fc0 */
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_0456733b = 1;
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
        goto LAB_03393078;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar8,System_Collections_Generic_IList<MessageDescriptor>_TypeInfo,0);
LAB_03393078:
                    /* WARNING: Could not recover jumptable at 0x0339308c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pGVar3 = (Google_Protobuf_Reflection_MessageDescriptor_o *)
           (*pVVar2->methodPtr)(pSVar8,0x2a,pVVar2->method);
  return pGVar3;
}


// ===== public NODLJPNGNBG JCKINNMKHBA()  [RVA 0x3293094]
// OJFPEINHCDP$$JCKINNMKHBA @ RVA 0x3293094

NODLJPNGNBG_o * OJFPEINHCDP__JCKINNMKHBA(OJFPEINHCDP_o *__this,MethodInfo *method)

{
  return (__this->fields).OPHCNELIOLD;
}


// ===== public OJFPEINHCDP Clone()  [RVA 0x329309C]
// OJFPEINHCDP$$Clone @ RVA 0x329309C

OJFPEINHCDP_o * OJFPEINHCDP__Clone(OJFPEINHCDP_o *__this,MethodInfo *method)

{
  OJFPEINHCDP_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_0456733c & 1) == 0) {
                    /* try { // try from 033930c4 to 034930cb has its CatchHandler @ 03393188 */
    FUN_01bab630(&OJFPEINHCDP_TypeInfo);
    DAT_0456733c = 1;
    method = extraout_x1;
  }
  __this_00 = (OJFPEINHCDP_o *)thunk_FUN_01bda818(OJFPEINHCDP_TypeInfo,method);
                    /* try { // try from 033930d8 to 034930e3 has its CatchHandler @ 03393184 */
  OJFPEINHCDP___ctor(__this_00,__this,in_x2);
  return __this_00;
}


// ===== public void EKMGFBCDOOA(KDADMJGPAOM CJNHFNHJHPE)  [RVA 0x32930F4]
// OJFPEINHCDP$$EKMGFBCDOOA @ RVA 0x32930F4

void OJFPEINHCDP__EKMGFBCDOOA(OJFPEINHCDP_o *__this,KDADMJGPAOM_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).LHFLMBNKPHF = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public static MessageParser<OJFPEINHCDP> PGCAHPDCJBC()  [RVA 0x32930FC]
// OJFPEINHCDP$$PGCAHPDCJBC @ RVA 0x32930FC

Google_Protobuf_MessageParser_OJFPEINHCDP__o * OJFPEINHCDP__PGCAHPDCJBC(MethodInfo *method)

{
  if ((DAT_0456733d & 1) == 0) {
                    /* try { // try from 03393120 to 0349313b has its CatchHandler @ 0339317c */
    FUN_01bab630(&OJFPEINHCDP_TypeInfo);
    DAT_0456733d = 1;
  }
  if ((OJFPEINHCDP_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
                    /* try { // try from 0339313c to 03493167 has its CatchHandler @ 03392fc0 */
  }
  return OJFPEINHCDP_TypeInfo->static_fields->NNMODPGDIDE;
}


// ===== private MessageDescriptor pb::Google.Protobuf.IMessage.get_Descriptor()  [RVA 0x3293154]
// OJFPEINHCDP$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x3293154

Google_Protobuf_Reflection_MessageDescriptor_o *
OJFPEINHCDP__pb__Google_Protobuf_IMessage_get_Descriptor(OJFPEINHCDP_o *__this,MethodInfo *method)

{
  OJFPEINHCDP_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03393168 to 0349316b has its CatchHandler @ 03393180 */
                    /* try { // try from 0339316c to 03493177 has its CatchHandler @ 0339318c */
  if ((DAT_0456733e & 1) == 0) {
                    /* try { // try from 03393178 to 034931a3 has its CatchHandler @ 03392fc0 */
    FUN_01bab630(&OJFPEINHCDP_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03393120 with catch @ 0339317c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03393168 with catch @ 03393180
                        */
    DAT_0456733e = 1;
    method = extraout_x1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033930d8 with catch @ 03393184
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033930c4 with catch @ 03393188
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0339316c with catch @ 0339318c
                        */
  method_00 = OJFPEINHCDP_TypeInfo;
  if ((OJFPEINHCDP_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (OJFPEINHCDP_c *)thunk_FUN_01ba7564(OJFPEINHCDP_TypeInfo,method);
  }
  pGVar1 = OJFPEINHCDP__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

