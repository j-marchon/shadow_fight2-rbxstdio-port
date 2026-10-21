// NFFDIPBFJHP$$BOJEECFKPBD @ RVA 0x32BAB60

void NFFDIPBFJHP__BOJEECFKPBD(NFFDIPBFJHP_o *__this,GLPEFEEGCPM_o *DKMMBMBMJBO,MethodInfo *method)

{
  int iVar1;
  KGBIBHEFBHA_o *pKVar2;
  EEGDOGKBLNG_o *pEVar3;
  
  if ((DAT_04567489 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04567489 = 1;
  }
  if (((DKMMBMBMJBO != (GLPEFEEGCPM_o *)0x0) &&
      (pKVar2 = NFFDIPBFJHP__GMMAAHEMGHH(__this,DKMMBMBMJBO,method), pKVar2 != (KGBIBHEFBHA_o *)0x0)
      ) && (iVar1 = (pKVar2->fields).NLLKMEMKBAF, -1 < iVar1)) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pEVar3 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (pEVar3 == (EEGDOGKBLNG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (pEVar3->fields).HHOPNIKFJNE = iVar1;
  }
  return;
}

