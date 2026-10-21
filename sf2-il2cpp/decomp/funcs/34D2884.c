// JBCGDIEHOHH$$ALLFNDNBMCO @ RVA 0x34D2884

JHBHHHKEFOO_o *
JBCGDIEHOHH__ALLFNDNBMCO(JBCGDIEHOHH_o *__this,int32_t JLAFGLDIFOC,MethodInfo *method)

{
  long lVar1;
  JHBHHHKEFOO_o *__this_00;
  MCCHIAKPFEL_o *pMVar2;
  JHBHHHKEFOO_o *NNHNNAKKKPL;
  ACHLOMELAJE_o *pAVar3;
  
  if ((DAT_045686c2 & 1) == 0) {
    FUN_01bab630(&JHBHHHKEFOO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045686c2 = 1;
  }
  __this_00 = (JHBHHHKEFOO_o *)thunk_FUN_01bda818(JHBHHHKEFOO_TypeInfo);
  JHBHHHKEFOO___ctor(__this_00,(MethodInfo *)0x0);
  pMVar2 = (__this->fields).KGPGBOHAFOL;
  if (pMVar2 != (MCCHIAKPFEL_o *)0x0) {
    __this_00 = MCCHIAKPFEL__ALLFNDNBMCO(pMVar2,JLAFGLDIFOC,(MethodInfo *)0x0);
    if (__this_00 == (JHBHHHKEFOO_o *)0x0) goto LAB_035d29b8;
    (__this_00->fields).GICDEKDNADC = true;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
    lVar1 = 0x18;
    if ((pAVar3->fields).IOHEOKOOJFA != false) {
      lVar1 = 0x20;
    }
    pMVar2 = *(MCCHIAKPFEL_o **)((long)&__this->klass + lVar1);
    if (pMVar2 != (MCCHIAKPFEL_o *)0x0) {
      NNHNNAKKKPL = MCCHIAKPFEL__ALLFNDNBMCO(pMVar2,JLAFGLDIFOC,(MethodInfo *)0x0);
      if ((NNHNNAKKKPL == (JHBHHHKEFOO_o *)0x0) ||
         ((NNHNNAKKKPL->fields).GICDEKDNADC = true, __this_00 == (JHBHHHKEFOO_o *)0x0))
      goto LAB_035d29b8;
      JHBHHHKEFOO__KAOJCFCELIB(__this_00,NNHNNAKKKPL,(MethodInfo *)0x0);
    }
    return __this_00;
  }
LAB_035d29b8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

