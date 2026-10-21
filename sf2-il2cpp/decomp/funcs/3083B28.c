// KFCFGKEHPNK$$PIOIEAEGHCP @ RVA 0x3083B28

bool KFCFGKEHPNK__PIOIEAEGHCP(MethodInfo *method)

{
  bool bVar1;
  CHDGOFBHAFI_o *__this;
  EEOMEMBBGNA_o *pEVar2;
  CJFBGEEIPBA_o *__this_00;
  
  if ((DAT_0456600f & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_0456600f = 1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (__this != (CHDGOFBHAFI_o *)0x0) {
    bVar1 = CHDGOFBHAFI__BHHNJDDGDHF(__this,(MethodInfo *)0x0);
    if (bVar1) {
      return true;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pEVar2 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
    if ((pEVar2 != (EEOMEMBBGNA_o *)0x0) &&
       (__this_00 = (pEVar2->fields).GMNJEBCECDA, __this_00 != (CJFBGEEIPBA_o *)0x0)) {
      bVar1 = CJFBGEEIPBA__HOMIFFIACAC(__this_00,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

