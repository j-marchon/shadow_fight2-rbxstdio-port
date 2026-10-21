// BNFLOPOMMFN$$BNNIDPDMOIL @ RVA 0x3425708

bool BNFLOPOMMFN__BNNIDPDMOIL(BNFLOPOMMFN_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  NDPMLPGANCI_o *__this_00;
  GCIFMNHADDF_o *pGVar3;
  CHDGOFBHAFI_o *pCVar4;
  
  if ((DAT_04568105 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<BaseDialog>__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04568105 = 1;
  }
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    iVar2 = NDPMLPGANCI__FFIOCEOHPEM(__this_00,(MethodInfo *)0x0);
    pGVar3 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pGVar3 != (GCIFMNHADDF_o *)0x0) {
      bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                        ((System_Collections_Generic_List_T__o *)(pGVar3->fields).IMMJEIGBAAC,
                         Method_DJNBJHPDKDP_OBECCOPBADO<BaseDialog>__);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
      }
      pCVar4 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
      if (pCVar4 != (CHDGOFBHAFI_o *)0x0) {
        return (iVar2 == 5 && bVar1) && (pCVar4->fields).BLELLCNDBHN != false;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

