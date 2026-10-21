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

