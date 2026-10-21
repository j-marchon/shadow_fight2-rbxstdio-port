// LJNJDFEAIOH.JKABJMLCHEL$$MoveNext @ RVA 0x303AEF0

bool LJNJDFEAIOH_JKABJMLCHEL__MoveNext(LJNJDFEAIOH_JKABJMLCHEL_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t OICBCFGIIOA;
  UnityEngine_WaitForSeconds_o *__this_00;
  Il2CppObject **ppIVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  long lVar3;
  
  if ((DAT_04565d7e & 1) == 0) {
    FUN_01bab630(&LJNJDFEAIOH_TypeInfo);
    FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_04565d7e = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    OICBCFGIIOA = (__this->fields).minutesBefore;
    if ((LJNJDFEAIOH_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method = extraout_x1_00;
    }
    LJNJDFEAIOH__FLHCPMBEGMD(OICBCFGIIOA,method);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    lVar3 = (__this->fields).pause;
    __this_00 = (UnityEngine_WaitForSeconds_o *)
                thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(__this_00,(float)lVar3,(MethodInfo *)0x0);
    ppIVar2 = &(__this->fields).__2__current;
    *ppIVar2 = (Il2CppObject *)__this_00;
    thunk_FUN_01c20e04(ppIVar2,__this_00);
    (__this->fields).__1__state = 1;
    return true;
  }
  return false;
}

