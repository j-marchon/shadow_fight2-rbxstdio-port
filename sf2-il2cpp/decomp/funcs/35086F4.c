// KEIAEKNFNNA.<>c$$HHPMABOIHIO @ RVA 0x35086F4

void KEIAEKNFNNA_<>c__HHPMABOIHIO(KEIAEKNFNNA___c_o *__this,System_Action_o *h,MethodInfo *method)

{
  if ((DAT_045688b3 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    DAT_045688b3 = 1;
  }
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__remove_OnTick(h,(MethodInfo *)0x0);
  return;
}

