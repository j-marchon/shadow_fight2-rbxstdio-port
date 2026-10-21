// CJFBGEEIPBA$$MOKCFKLNKAC @ RVA 0x336512C

void CJFBGEEIPBA__MOKCFKLNKAC(CJFBGEEIPBA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  CPNHNIKFGFB_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Il2CppObject *pIVar2;
  
  method_00 = (MethodInfo *)IDCGLBOIAFJ;
  if ((DAT_04567ab2 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_17051);
    DAT_04567ab2 = 1;
    method_00 = extraout_x1;
  }
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_17051,(MethodInfo *)0x0);
    return;
  }
  bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,method_00);
  if (!bVar1) {
    __this_00 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (CPNHNIKFGFB_o *)0x0) {
      CPNHNIKFGFB__DIGPCFKCCBK
                (__this_00,(IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pIVar2 = (IDCGLBOIAFJ->fields)._GOFDPKCMIJO_k__BackingField;
  if ((pIVar2 != (Il2CppObject *)0x0) && (pIVar2->klass == (Il2CppClass *)System_Action_TypeInfo)) {
                    /* WARNING: Could not recover jumptable at 0x03465214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pIVar2[1].monitor)(pIVar2[4].klass,pIVar2[2].monitor);
    return;
  }
  return;
}

