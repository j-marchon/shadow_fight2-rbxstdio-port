// PEEIMHCMDND$$BHNOCDOCAJD @ RVA 0x3424520

PJKHAJKEHEL_o * PEEIMHCMDND__BHNOCDOCAJD(EOLFEKNCPLM_o *HEHMPFLAEGE,MethodInfo *method)

{
  bool bVar1;
  PEEIMHCMDND_o *pPVar2;
  SimpleJSON_JSONNode_o *a;
  PJKHAJKEHEL_o *pPVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  System_String_o *local_28;
  
  if ((DAT_045680f8 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    DAT_045680f8 = 1;
    method = extraout_x1;
  }
  local_28 = (System_String_o *)0x0;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pPVar2 = HJPEKDOPBHN__JHBLAJKKPFG((MethodInfo *)0x0);
  if (pPVar2 != (PEEIMHCMDND_o *)0x0) {
    a = PEEIMHCMDND__BHCOOILLMGA(pPVar2,HEHMPFLAEGE,&local_28,in_x3);
    if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
    }
    method_00 = (MethodInfo *)0x0;
    bVar1 = SimpleJSON_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    pPVar3 = (PJKHAJKEHEL_o *)0x0;
    if (bVar1) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pPVar2 = HJPEKDOPBHN__JHBLAJKKPFG((MethodInfo *)0x0);
      if (pPVar2 == (PEEIMHCMDND_o *)0x0) goto LAB_03524600;
      pPVar3 = PEEIMHCMDND__HMDLEPBJLNL(pPVar2,a,method_00);
    }
    return pPVar3;
  }
LAB_03524600:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

