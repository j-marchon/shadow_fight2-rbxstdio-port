// DOPEEDABNEK.<>c$$DMBBJNJHNPN @ RVA 0x32E4C10

bool DOPEEDABNEK_<>c__DMBBJNJHNPN
               (DOPEEDABNEK___c_o *__this,HOOAAGABMBL_o *p_itemInfo,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045675ff & 1) == 0) {
    __this = (DOPEEDABNEK___c_o *)FUN_01bab630(&StringLiteral_10237);
    DAT_045675ff = 1;
  }
  if (p_itemInfo != (HOOAAGABMBL_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((p_itemInfo->fields)._COIPKAKHDFP_k__BackingField,StringLiteral_10237,
                       (MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

