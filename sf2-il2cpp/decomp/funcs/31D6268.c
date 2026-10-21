// WideController$$get_CurrentActive @ RVA 0x31D6268

UnityEngine_GameObject_o *
WideController__get_CurrentActive(WideController_o *__this,MethodInfo *method)

{
  long lVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = (__this->fields)._Wide;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar2 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    lVar1 = 0x20;
    if (!bVar2) {
      lVar1 = 0x28;
    }
    return *(UnityEngine_GameObject_o **)((long)&__this->klass + lVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

