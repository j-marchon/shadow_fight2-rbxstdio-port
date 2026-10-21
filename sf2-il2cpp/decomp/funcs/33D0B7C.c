// NCIIAGLGGIP$$Dispose @ RVA 0x33D0B7C

void NCIIAGLGGIP__Dispose(NCIIAGLGGIP_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  
  if ((DAT_04567e61 & 1) == 0) {
    FUN_01bab630(&StringLiteral_5422);
    DAT_04567e61 = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_5422,(MethodInfo *)0x0);
  __this_00 = (__this->fields).BNAIPPCOGPE;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

