// JMDPBFOCHHP$$OKPNEHLBHFK @ RVA 0x2FF7FE4

void JMDPBFOCHHP__OKPNEHLBHFK
               (JMDPBFOCHHP_o *__this,JMDPBFOCHHP_NOPCEDPNNKO_o *CJNHFNHJHPE,MethodInfo *method)

{
  MCEIBCKPIAD_o *__this_00;
  JMDPBFOCHHP_NOPCEDPNNKO_o **ppJVar1;
  
  if ((DAT_04565aaf & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04565aaf = 1;
  }
  ppJVar1 = &(__this->fields).OFMMMBIIDAE;
  *ppJVar1 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppJVar1,CJNHFNHJHPE);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__IOMECNCIENO((MethodInfo *)0x0);
  if (__this_00 != (MCEIBCKPIAD_o *)0x0) {
    MCEIBCKPIAD__GIENGNEGHPJ(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

