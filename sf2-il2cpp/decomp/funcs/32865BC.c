// OOMHDDBCBJP$$LOHPFCGCHNH @ RVA 0x32865BC

System_String_o * OOMHDDBCBJP__LOHPFCGCHNH(OOMHDDBCBJP_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MEJIKMPNBNL_o *pMVar2;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
  if ((DAT_045672bb & 1) == 0) {
    auVar3 = FUN_01bab630(&StringLiteral_22460);
    DAT_045672bb = 1;
  }
  pMVar2 = (__this->fields).IAJPHAAMKPC;
  if (pMVar2 != (MEJIKMPNBNL_o *)0x0) {
    pSVar1 = System_String__Format
                       (StringLiteral_22460,(Il2CppObject *)(pMVar2->fields).DEKCPPOJFEH,
                        (Il2CppObject *)(__this->fields).DEKCPPOJFEH,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
}

