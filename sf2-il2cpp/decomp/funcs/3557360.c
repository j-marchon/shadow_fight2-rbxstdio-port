// NLBPJNEGNNM$$MergeFrom @ RVA 0x3557360

void NLBPJNEGNNM__MergeFrom
               (NLBPJNEGNNM_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  GLPEFEEGCPM_o **ppGVar1;
  HCFOFHGNBKP_o **ppHVar2;
  KAMBBJFPLGM_o **ppKVar3;
  NLBPJNEGNNM_Fields *pNVar4;
  uint32_t uVar5;
  GLPEFEEGCPM_o *__this_00;
  HCFOFHGNBKP_o *__this_01;
  Google_Protobuf_UnknownFieldSet_o *pGVar6;
  KAMBBJFPLGM_o *pKVar7;
  
  if ((DAT_04568b73 & 1) == 0) {
    FUN_01bab630(&GLPEFEEGCPM_TypeInfo);
    FUN_01bab630(&HCFOFHGNBKP_TypeInfo);
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    DAT_04568b73 = 1;
  }
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  ppGVar1 = &(__this->fields).IIIJBPAFNNF;
  ppHVar2 = &(__this->fields).PMMFPJJOPKE;
  ppKVar3 = &(__this->fields).OPHCNELIOLD;
  pNVar4 = &__this->fields;
  do {
    while (uVar5 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0),
          0x11 < (int)uVar5) {
      if (uVar5 == 0x12) {
        pKVar7 = (KAMBBJFPLGM_o *)*ppHVar2;
        if (pKVar7 == (KAMBBJFPLGM_o *)0x0) {
          __this_01 = (HCFOFHGNBKP_o *)thunk_FUN_01bda818(HCFOFHGNBKP_TypeInfo);
          HCFOFHGNBKP___ctor(__this_01,(MethodInfo *)0x0);
          *ppHVar2 = __this_01;
          thunk_FUN_01c20e04(ppHVar2,__this_01);
          pKVar7 = (KAMBBJFPLGM_o *)*ppHVar2;
        }
      }
      else {
        if (uVar5 != 0x1a) goto LAB_036574b8;
        pKVar7 = (KAMBBJFPLGM_o *)*ppGVar1;
        if (pKVar7 == (KAMBBJFPLGM_o *)0x0) {
          __this_00 = (GLPEFEEGCPM_o *)thunk_FUN_01bda818(GLPEFEEGCPM_TypeInfo);
          GLPEFEEGCPM___ctor(__this_00,(MethodInfo *)0x0);
          *ppGVar1 = __this_00;
          thunk_FUN_01c20e04(ppGVar1,__this_00);
          pKVar7 = (KAMBBJFPLGM_o *)*ppGVar1;
        }
      }
LAB_036574a4:
      Google_Protobuf_CodedInputStream__ReadMessage
                (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pKVar7,(MethodInfo *)0x0);
    }
    if (uVar5 == 10) {
      pKVar7 = *ppKVar3;
      if (pKVar7 == (KAMBBJFPLGM_o *)0x0) {
        pKVar7 = (KAMBBJFPLGM_o *)thunk_FUN_01bda818(KAMBBJFPLGM_TypeInfo);
        KAMBBJFPLGM___ctor(pKVar7,(MethodInfo *)0x0);
        *ppKVar3 = pKVar7;
        thunk_FUN_01c20e04(ppKVar3,pKVar7);
        pKVar7 = *ppKVar3;
      }
      goto LAB_036574a4;
    }
    if (uVar5 == 0) {
      return;
    }
LAB_036574b8:
    pGVar6 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                       (pNVar4->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
    pNVar4->CKFPENBPNML = pGVar6;
    thunk_FUN_01c20e04(pNVar4,pGVar6);
  } while( true );
}

