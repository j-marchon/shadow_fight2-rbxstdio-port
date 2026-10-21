// LHKALFIIJKB.BNPEMKLOPBC$$MoveNext @ RVA 0x35021C4

bool LHKALFIIJKB_BNPEMKLOPBC__MoveNext(LHKALFIIJKB_BNPEMKLOPBC_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_WaitForSeconds_o *__this_00;
  UnityEngine_WaitForSeconds_o **ppUVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  Il2CppObject **ppIVar3;
  float seconds;
  
  if ((DAT_04568860 & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_04568860 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
                    /* try { // try from 03602254 to 0370225b has its CatchHandler @ 036022c8 */
    (__this->fields).__1__state = -1;
    if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0360226c to 03702277 has its CatchHandler @ 036022c0 */
      thunk_FUN_01ba7564();
      method = extraout_x1_00;
    }
    LHKALFIIJKB__DAFNBBJHFJL((System_Action_o *)0x0,method);
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    seconds = (__this->fields).p_interval;
    __this_00 = (UnityEngine_WaitForSeconds_o *)
                thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(__this_00,seconds,(MethodInfo *)0x0);
    ppUVar2 = &(__this->fields)._delay_5__2;
    *ppUVar2 = __this_00;
    thunk_FUN_01c20e04(ppUVar2,__this_00);
  }
                    /* try { // try from 03602278 to 037022b7 has its CatchHandler @ 03602184 */
  ppIVar3 = &(__this->fields).__2__current;
  *ppIVar3 = (Il2CppObject *)(__this->fields)._delay_5__2;
  thunk_FUN_01c20e04(ppIVar3);
  (__this->fields).__1__state = 1;
  return true;
}

