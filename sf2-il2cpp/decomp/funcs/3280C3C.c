// FMIEFKAKOMG$$MergeFrom @ RVA 0x3280C3C

void FMIEFKAKOMG__MergeFrom
               (FMIEFKAKOMG_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  KAMBBJFPLGM_o **ppKVar1;
  BECIPDJBAOG_o **ppBVar2;
  FMIEFKAKOMG_Fields *pFVar3;
  uint32_t uVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  BECIPDJBAOG_o *__this_00;
  KAMBBJFPLGM_o *pKVar6;
  
  if ((DAT_04567290 & 1) == 0) {
    FUN_01bab630(&BECIPDJBAOG_TypeInfo);
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    DAT_04567290 = 1;
  }
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  ppKVar1 = &(__this->fields).OPHCNELIOLD;
  ppBVar2 = &(__this->fields).MJIIHOLHNCK;
  pFVar3 = &__this->fields;
LAB_03380ca0:
  do {
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
      if (uVar4 != 0x12) {
        if (uVar4 == 0) {
          return;
        }
        pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                           (pFVar3->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
        pFVar3->CKFPENBPNML = pGVar5;
        thunk_FUN_01c20e04(pFVar3,pGVar5);
        goto LAB_03380ca0;
      }
      pKVar6 = *ppKVar1;
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

