// LCAOAAFEOAG$$Dispose @ RVA 0x35BD470

void LCAOAAFEOAG__Dispose(LCAOAAFEOAG_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  UniRx_SingleAssignmentDisposable_o *__this_01;
  
  __this_00 = (__this->fields).JBJKBIMMCIJ;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    __this_01 = (__this->fields).ILKHAMGIJDL;
    if (__this_01 != (UniRx_SingleAssignmentDisposable_o *)0x0) {
      UniRx_SingleAssignmentDisposable__Dispose(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

