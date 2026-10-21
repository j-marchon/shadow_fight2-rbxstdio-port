// KKLJIDJBFEI.FGDIJPFMAJE$$MoveNext @ RVA 0x314A280

bool KKLJIDJBFEI_FGDIJPFMAJE__MoveNext(KKLJIDJBFEI_FGDIJPFMAJE_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  UnityEngine_WaitForSeconds_o *__this_00;
  System_Collections_IEnumerator_o **ppSVar3;
  MethodInfo *method_00;
  Il2CppObject **ppIVar4;
  KKLJIDJBFEI_o *__this_01;
  undefined1 auVar5 [16];
  
  auVar5._8_8_ = method;
  auVar5._0_8_ = __this;
  if ((DAT_045667ad & 1) == 0) {
    auVar5 = FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_045667ad = 1;
  }
  iVar1 = (__this->fields).__1__state;
  __this_01 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (__this_01 == (KKLJIDJBFEI_o *)0x0) goto LAB_0324a354;
    ppSVar3 = &(__this_01->fields).FDLECCPIBFI;
    *ppSVar3 = (System_Collections_IEnumerator_o *)0x0;
                    /* try { // try from 0324a334 to 0334a33b has its CatchHandler @ 0324a44c */
    thunk_FUN_01c20e04(ppSVar3,0);
    KKLJIDJBFEI__BPBFNOKDBLB(__this_01,method_00);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (__this_01 != (KKLJIDJBFEI_o *)0x0) {
      iVar2 = KKLJIDJBFEI__ECANAMKCGPJ(auVar5._0_8_,auVar5._8_8_);
      __this_00 = (UnityEngine_WaitForSeconds_o *)
                  thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(__this_00,(float)iVar2 / 1000.0,(MethodInfo *)0x0);
      ppIVar4 = &(__this->fields).__2__current;
      *ppIVar4 = (Il2CppObject *)__this_00;
      thunk_FUN_01c20e04(ppIVar4,__this_00);
      (__this->fields).__1__state = 1;
      return true;
    }
LAB_0324a354:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}

