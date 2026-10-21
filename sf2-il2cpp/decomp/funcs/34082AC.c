// MGNPHCAAEIO$$JBMJNGNBGKC @ RVA 0x34082AC

void MGNPHCAAEIO__JBMJNGNBGKC
               (System_String_o *EHNFGMGKCHO,System_Action_o *LILIJINNGNC,MethodInfo *method)

{
  EnterScreen_o *__this;
  
  if ((DAT_04568025 & 1) == 0) {
    FUN_01bab630(&EnterScreen_TypeInfo);
    DAT_04568025 = 1;
  }
  if ((EnterScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = EnterScreen__Create((MethodInfo *)0x0);
  if (__this != (EnterScreen_o *)0x0) {
    EnterScreen__Init(__this,EHNFGMGKCHO,LILIJINNGNC,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

