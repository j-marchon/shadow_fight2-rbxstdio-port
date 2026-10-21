// KEIAEKNFNNA$$LPLDEDLPJFA @ RVA 0x350838C

int64_t KEIAEKNFNNA__LPLDEDLPJFA(KEIAEKNFNNA_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  Nekki_Utils_GlobalTimer_o *pNVar2;
  int64_t iVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_045688ab & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    DAT_045688ab = 1;
    method = extraout_x1;
  }
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_Utils_GlobalTimer_TypeInfo,method);
  }
  pNVar2 = Nekki_Utils_GlobalTimer__get_Instance((MethodInfo *)0x0);
  if (pNVar2 != (Nekki_Utils_GlobalTimer_o *)0x0) {
    bVar1 = (pNVar2->fields).GAPAJLLHGHO;
    if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_Utils_GlobalTimer_TypeInfo);
    }
    if (bVar1 == false) {
      iVar3 = Nekki_Utils_GlobalTimer__get_LocalTimeUTC((MethodInfo *)0x0);
      return iVar3;
    }
    pNVar2 = Nekki_Utils_GlobalTimer__get_Instance((MethodInfo *)0x0);
    if (pNVar2 != (Nekki_Utils_GlobalTimer_o *)0x0) {
      iVar3 = Nekki_Utils_GlobalTimer__GetTime(pNVar2,(MethodInfo *)0x0);
      return iVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

