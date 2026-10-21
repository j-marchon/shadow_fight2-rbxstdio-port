// EPCCNLNOALL$$MergeFrom @ RVA 0x32FB68C

void EPCCNLNOALL__MergeFrom
               (EPCCNLNOALL_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  KAMBBJFPLGM_o **ppKVar1;
  OJEHKJHEBID_o **ppOVar2;
  EPCCNLNOALL_Fields *pEVar3;
  uint32_t uVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  OJEHKJHEBID_o *__this_00;
  KAMBBJFPLGM_o *pKVar6;
  
                    /* try { // try from 033fb690 to 034fb693 has its CatchHandler @ 033fb288 */
                    /* try { // try from 033fb694 to 034fb697 has its CatchHandler @ 033fb6a0 */
                    /* try { // try from 033fb698 to 034fb717 has its CatchHandler @ 033fb288 */
                    /* catch() { ... } // from try @ 033fb694 with catch @ 033fb6a0 */
                    /* catch() { ... } // from try @ 033fb4c0 with catch @ 033fb6a4 */
                    /* catch() { ... } // from try @ 033fb4ac with catch @ 033fb6a8 */
                    /* catch() { ... } // from try @ 033fb684 with catch @ 033fb6ac */
  if ((DAT_045676da & 1) == 0) {
                    /* catch() { ... } // from try @ 033fb560 with catch @ 033fb6b0 */
                    /* catch() { ... } // from try @ 033fb680 with catch @ 033fb6b4 */
                    /* catch() { ... } // from try @ 033fb510 with catch @ 033fb6b8 */
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
                    /* catch() { ... } // from try @ 033fb540 with catch @ 033fb6bc */
                    /* catch() { ... } // from try @ 033fb558 with catch @ 033fb6c0 */
                    /* catch() { ... } // from try @ 033fb5ac with catch @ 033fb6c4 */
    FUN_01bab630(&OJEHKJHEBID_TypeInfo);
                    /* catch() { ... } // from try @ 033fb4f8 with catch @ 033fb6c8 */
                    /* catch() { ... } // from try @ 033fb4d0 with catch @ 033fb6cc */
    DAT_045676da = 1;
  }
                    /* catch() { ... } // from try @ 033fb484 with catch @ 033fb6d0 */
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033fb738 with catch @ 033fb7bc
                       catch() { ... } // from try @ 033fb7b4 with catch @ 033fb7bc */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 033fb4a0 with catch @ 033fb6d4 */
                    /* catch() { ... } // from try @ 033fb490 with catch @ 033fb6d8 */
                    /* catch() { ... } // from try @ 033fb67c with catch @ 033fb6dc */
                    /* catch() { ... } // from try @ 033fb678 with catch @ 033fb6e0 */
                    /* catch() { ... } // from try @ 033fb474 with catch @ 033fb6e4 */
  ppKVar1 = &(__this->fields).OPHCNELIOLD;
                    /* catch() { ... } // from try @ 033fb51c with catch @ 033fb6e8 */
  ppOVar2 = &(__this->fields).KOGEBALMCBB;
                    /* catch() { ... } // from try @ 033fb688 with catch @ 033fb6ec */
  pEVar3 = &__this->fields;
LAB_033fb6f0:
  do {
                    /* catch() { ... } // from try @ 033fb408 with catch @ 033fb6f0 */
                    /* catch() { ... } // from try @ 033fb3ac with catch @ 033fb6f4 */
                    /* catch() { ... } // from try @ 033fb670 with catch @ 033fb6f8 */
    uVar4 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    if (uVar4 == 10) {
      pKVar6 = (KAMBBJFPLGM_o *)*ppOVar2;
      if (pKVar6 == (KAMBBJFPLGM_o *)0x0) {
        __this_00 = (OJEHKJHEBID_o *)thunk_FUN_01bda818(OJEHKJHEBID_TypeInfo);
        OJEHKJHEBID___ctor(__this_00,(MethodInfo *)0x0);
        *ppOVar2 = __this_00;
        thunk_FUN_01c20e04(ppOVar2,__this_00);
        pKVar6 = (KAMBBJFPLGM_o *)*ppOVar2;
      }
    }
    else {
      if (uVar4 != 0x12) {
        if (uVar4 == 0) {
                    /* try { // try from 033fb7a8 to 034fb7b3 has its CatchHandler @ 033fb288 */
                    /* try { // try from 033fb7b4 to 034fb7bb has its CatchHandler @ 033fb7bc */
          return;
        }
                    /* try { // try from 033fb718 to 034fb71b has its CatchHandler @ 033fb728 */
        pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                           (pEVar3->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
        pEVar3->CKFPENBPNML = pGVar5;
                    /* catch() { ... } // from try @ 033fb718 with catch @ 033fb728 */
        thunk_FUN_01c20e04(pEVar3,pGVar5);
        goto LAB_033fb6f0;
      }
      pKVar6 = *ppKVar1;
                    /* try { // try from 033fb738 to 034fb7a7 has its CatchHandler @ 033fb7bc */
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

