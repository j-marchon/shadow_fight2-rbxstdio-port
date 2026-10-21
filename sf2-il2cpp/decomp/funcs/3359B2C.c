// NFNBHPOJFNJ$$NOJIAJPLOKB @ RVA 0x3359B2C

void NFNBHPOJFNJ__NOJIAJPLOKB
               (int32_t BKFOLMBMFNP,MDNLIFLBFNO_o *OPAEPDIIOEB,bool FEPLAGOGJNL,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  MethodInfo *pMVar3;
  NFNBHPOJFNJ_o *pNVar4;
  System_Text_StringBuilder_o *pSVar5;
  MethodInfo *JLNPKGGFFDD;
  MethodInfo *extraout_x0;
  MethodInfo *method_00;
  
  pMVar3 = (MethodInfo *)(ulong)(uint)BKFOLMBMFNP;
  if ((DAT_04567a54 & 1) == 0) {
    FUN_01bab630(&NFNBHPOJFNJ_TypeInfo);
    pMVar3 = (MethodInfo *)FUN_01bab630(&StringLiteral_47);
    DAT_04567a54 = 1;
  }
  pNVar4 = NFNBHPOJFNJ__MBHIKFMIDAO(pMVar3);
  if ((pNVar4 != (NFNBHPOJFNJ_o *)0x0) &&
     (pSVar5 = (pNVar4->fields).DGPKPHAHOJP, pSVar5 != (System_Text_StringBuilder_o *)0x0)) {
    iVar2 = System_Text_StringBuilder__get_Length(pSVar5,(MethodInfo *)0x0);
    if (iVar2 != 0) {
      pNVar4 = NFNBHPOJFNJ_TypeInfo->static_fields->CNMHHKAMGPI;
      if ((pNVar4 == (NFNBHPOJFNJ_o *)0x0) ||
         (pSVar5 = (pNVar4->fields).DGPKPHAHOJP, pSVar5 == (System_Text_StringBuilder_o *)0x0))
      goto LAB_03459c74;
      System_Text_StringBuilder__Append(pSVar5,StringLiteral_47,(MethodInfo *)0x0);
    }
    JLNPKGGFFDD = (MethodInfo *)ONEDJCACCGM__CGLJFDPHMNB(BKFOLMBMFNP,OPAEPDIIOEB,(MethodInfo *)0x0);
    pMVar3 = JLNPKGGFFDD;
    if (FEPLAGOGJNL) {
      Nekki_SF2_Core_ApplicationController__Log((System_String_o *)JLNPKGGFFDD,(MethodInfo *)0x0);
      pMVar3 = extraout_x0;
    }
    pNVar4 = NFNBHPOJFNJ__MBHIKFMIDAO(pMVar3);
    if ((pNVar4 != (NFNBHPOJFNJ_o *)0x0) &&
       (pSVar5 = (pNVar4->fields).DGPKPHAHOJP, pSVar5 != (System_Text_StringBuilder_o *)0x0)) {
      System_Text_StringBuilder__Append(pSVar5,(System_String_o *)JLNPKGGFFDD,(MethodInfo *)0x0);
      bVar1 = ONEDJCACCGM__KDFMBBPEJDE(BKFOLMBMFNP,(MethodInfo *)0x0);
      if (bVar1) {
        pNVar4 = NFNBHPOJFNJ_TypeInfo->static_fields->CNMHHKAMGPI;
        if (pNVar4 == (NFNBHPOJFNJ_o *)0x0) goto LAB_03459c74;
        pSVar5 = (pNVar4->fields).DGPKPHAHOJP;
        pNVar4 = (NFNBHPOJFNJ_o *)NFNBHPOJFNJ__OMENJAFAEAA((MethodInfo *)0x1);
        NFNBHPOJFNJ__GDCHAJOJGBH(pNVar4,pSVar5,(System_String_o *)pNVar4,method);
      }
      bVar1 = ONEDJCACCGM__DCIMFCCJPMO(BKFOLMBMFNP,(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pNVar4 = NFNBHPOJFNJ_TypeInfo->static_fields->CNMHHKAMGPI;
      if (pNVar4 != (NFNBHPOJFNJ_o *)0x0) {
        NFNBHPOJFNJ__KLNMLOOCAAO(pNVar4,method_00);
        return;
      }
    }
  }
LAB_03459c74:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

