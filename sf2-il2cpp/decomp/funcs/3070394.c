// EEGDOGKBLNG$$JOMFHMDCMNG @ RVA 0x3070394

void EEGDOGKBLNG__JOMFHMDCMNG(EEGDOGKBLNG_o *__this,KAMBBJFPLGM_o *LLJHKLPGMGC,MethodInfo *method)

{
  GALHNMPIEHA_o *__this_00;
  System_Action_IList_PIADCKMDDAK___o *pSVar1;
  KAMBBJFPLGM_o *pKVar2;
  System_Action_o *pSVar3;
  KAMBBJFPLGM_o **ppKVar4;
  
  if ((DAT_04565f5e & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04565f5e = 1;
  }
  if (LLJHKLPGMGC == (KAMBBJFPLGM_o *)0x0) {
    return;
  }
  EEGDOGKBLNG__LLNLBFAEJNC(__this,LLJHKLPGMGC,method);
  EEGDOGKBLNG__BHJOHOIMAKN(__this,LLJHKLPGMGC,method);
  ppKVar4 = &(__this->fields).MLAAJICBOAD;
  *ppKVar4 = LLJHKLPGMGC;
  thunk_FUN_01c20e04(ppKVar4,LLJHKLPGMGC);
  EEGDOGKBLNG__POPAIDFJPEB(__this,false,method);
  if (*ppKVar4 != (KAMBBJFPLGM_o *)0x0) {
    if (((*ppKVar4)->fields).IGPJEDLPAGI != (BPBGAAHBFKH_o *)0x0) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
      if ((*ppKVar4 == (KAMBBJFPLGM_o *)0x0) || (__this_00 == (GALHNMPIEHA_o *)0x0))
      goto LAB_031704b4;
      GALHNMPIEHA__CDGDOLDEIBD(__this_00,((*ppKVar4)->fields).IGPJEDLPAGI,(MethodInfo *)0x0);
    }
    pSVar1 = (__this->fields).MMCHECDCGKF;
    if (pSVar1 != (System_Action_IList_PIADCKMDDAK___o *)0x0) {
      (*(code *)(pSVar1->fields).super.super.invoke_impl)
                ((pSVar1->fields).super.super.method_code,0,(pSVar1->fields).super.super.method);
      pKVar2 = (__this->fields).MLAAJICBOAD;
      if ((pKVar2 != (KAMBBJFPLGM_o *)0x0) &&
         (pSVar1 = (__this->fields).DAGJHIAIOML,
         pSVar1 != (System_Action_IList_PIADCKMDDAK___o *)0x0)) {
        (*(code *)(pSVar1->fields).super.super.invoke_impl)
                  ((pSVar1->fields).super.super.method_code,(pKVar2->fields).AKFPFIHIHOC,
                   (pSVar1->fields).super.super.method);
        pSVar3 = (__this->fields).AFAHJIJMAJM;
        if (pSVar3 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031704a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(pSVar3->fields).super.super.invoke_impl)
                    ((pSVar3->fields).super.super.method_code,(pSVar3->fields).super.super.method);
          return;
        }
      }
    }
  }
LAB_031704b4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

