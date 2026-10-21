// NFNBHPOJFNJ$$OKNENPNMIKP @ RVA 0x335E0A0

void NFNBHPOJFNJ__OKNENPNMIKP(int32_t BKFOLMBMFNP,MDNLIFLBFNO_o *OPAEPDIIOEB,MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  MethodInfo *pMVar3;
  NFNBHPOJFNJ_o *pNVar4;
  System_Text_StringBuilder_o *pSVar5;
  System_String_o *value;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  
  pMVar3 = (MethodInfo *)(ulong)(uint)BKFOLMBMFNP;
  if ((DAT_04567a5c & 1) == 0) {
    FUN_01bab630(&NFNBHPOJFNJ_TypeInfo);
    pMVar3 = (MethodInfo *)FUN_01bab630(&StringLiteral_47);
    DAT_04567a5c = 1;
  }
  pNVar4 = NFNBHPOJFNJ__MBHIKFMIDAO(pMVar3);
  if ((pNVar4 != (NFNBHPOJFNJ_o *)0x0) &&
     (pSVar5 = (pNVar4->fields).BEDMFFEAEDI, pSVar5 != (System_Text_StringBuilder_o *)0x0)) {
    uVar2 = System_Text_StringBuilder__get_Length(pSVar5,(MethodInfo *)0x0);
    pMVar3 = (MethodInfo *)(ulong)uVar2;
    if (uVar2 != 0) {
      pNVar4 = NFNBHPOJFNJ_TypeInfo->static_fields->CNMHHKAMGPI;
      if ((pNVar4 == (NFNBHPOJFNJ_o *)0x0) ||
         (pSVar5 = (pNVar4->fields).BEDMFFEAEDI, pSVar5 == (System_Text_StringBuilder_o *)0x0))
      goto LAB_0345e1d4;
      pMVar3 = (MethodInfo *)
               System_Text_StringBuilder__Append(pSVar5,StringLiteral_47,(MethodInfo *)0x0);
    }
    pNVar4 = NFNBHPOJFNJ__MBHIKFMIDAO(pMVar3);
    if (pNVar4 != (NFNBHPOJFNJ_o *)0x0) {
      pSVar5 = (pNVar4->fields).BEDMFFEAEDI;
      value = ONEDJCACCGM__CGLJFDPHMNB(BKFOLMBMFNP,OPAEPDIIOEB,(MethodInfo *)0x0);
      if (pSVar5 != (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__Append(pSVar5,value,(MethodInfo *)0x0);
        bVar1 = ONEDJCACCGM__KDFMBBPEJDE(BKFOLMBMFNP,(MethodInfo *)0x0);
        if (bVar1) {
          pNVar4 = NFNBHPOJFNJ_TypeInfo->static_fields->CNMHHKAMGPI;
          if (pNVar4 == (NFNBHPOJFNJ_o *)0x0) goto LAB_0345e1d4;
          pSVar5 = (pNVar4->fields).BEDMFFEAEDI;
          pNVar4 = (NFNBHPOJFNJ_o *)NFNBHPOJFNJ__JOECBAFGPOA((MethodInfo *)0x1);
          NFNBHPOJFNJ__GDCHAJOJGBH(pNVar4,pSVar5,(System_String_o *)pNVar4,in_x3);
        }
        bVar1 = ONEDJCACCGM__DCIMFCCJPMO(BKFOLMBMFNP,(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        pNVar4 = NFNBHPOJFNJ_TypeInfo->static_fields->CNMHHKAMGPI;
        if (pNVar4 != (NFNBHPOJFNJ_o *)0x0) {
          NFNBHPOJFNJ__NCJEFECMBFC(pNVar4,method_00);
          return;
        }
      }
    }
  }
LAB_0345e1d4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

