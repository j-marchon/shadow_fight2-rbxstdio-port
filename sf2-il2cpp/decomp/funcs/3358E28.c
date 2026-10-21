// PFDCJGIIPLB.<>c$$BAEDFPFIKBA @ RVA 0x3358E28

void PFDCJGIIPLB_<>c__BAEDFPFIKBA
               (PFDCJGIIPLB___c_o *__this,System_String_o *token,MethodInfo *method)

{
  Helpshift_HelpshiftSdk_o *__this_00;
  
  if ((DAT_04567a4f & 1) == 0) {
    FUN_01bab630(&PFDCJGIIPLB_TypeInfo);
    DAT_04567a4f = 1;
  }
  if ((PFDCJGIIPLB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = PFDCJGIIPLB_TypeInfo->static_fields->FBANHLJJPDK;
  if (__this_00 != (Helpshift_HelpshiftSdk_o *)0x0) {
    Helpshift_HelpshiftSdk__RegisterPushToken(__this_00,token,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

