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

