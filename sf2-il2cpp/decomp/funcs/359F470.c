// Nekki.Utils.RaidBetaLogger$$KBGJFEHBEPH @ RVA 0x359F470

void Nekki_Utils_RaidBetaLogger__KBGJFEHBEPH(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *original;
  UnityEngine_GameObject_o *__this;
  Nekki_Utils_RaidBetaLogger_o **ppNVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  Nekki_Utils_RaidBetaLogger_o *pNVar3;
  
                    /* try { // try from 0369f470 to 0379f473 has its CatchHandler @ 0369f47c */
                    /* try { // try from 0369f474 to 0379f49b has its CatchHandler @ 0369f33c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369f424 with catch @ 0369f478
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369f470 with catch @ 0369f47c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369f3ec with catch @ 0369f480
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369f404 with catch @ 0369f484
                        */
  if ((DAT_04568de1 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RaidBetaLogger>__);
                    /* try { // try from 0369f49c to 0379f49f has its CatchHandler @ 0369f4c8 */
                    /* try { // try from 0369f4a0 to 0379f4cf has its CatchHandler @ 0369f33c */
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_Utils_RaidBetaLogger_TypeInfo);
                    /* catch() { ... } // from try @ 0369f49c with catch @ 0369f4c8 */
                    /* try { // try from 0369f4d0 to 0379f4d7 has its CatchHandler @ 0369f4ec */
    FUN_01bab630(&StringLiteral_10407);
                    /* try { // try from 0369f4d8 to 0379f4e3 has its CatchHandler @ 0369f33c */
    DAT_04568de1 = 1;
  }
                    /* try { // try from 0369f4e4 to 0379f4eb has its CatchHandler @ 0369f4ec */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0369f4d0 with catch @ 0369f4ec
                       catch(type#2 @ 00000000) { ... } // from try @ 0369f4e4 with catch @ 0369f4ec
                        */
  if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar3 = Nekki_Utils_RaidBetaLogger_TypeInfo->static_fields->CBDMFFMCJBK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  original = UnityEngine_Resources__Load(StringLiteral_10407,(MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  if (original == (UnityEngine_Object_o *)0x0) {
    original = (UnityEngine_Object_o *)0x0;
  }
  else if (original->klass != (UnityEngine_Object_c *)UnityEngine_GameObject_TypeInfo) {
    original = (UnityEngine_Object_o *)0x0;
  }
  __this = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)original,Method_UnityEngine_Object_Instantiate<GameObject>__);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pNVar3 = (Nekki_Utils_RaidBetaLogger_o *)
             UnityEngine_GameObject__GetComponent<object>
                       (__this,Method_UnityEngine_GameObject_GetComponent<RaidBetaLogger>__);
    if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_Utils_RaidBetaLogger_TypeInfo);
    }
    ppNVar2 = &Nekki_Utils_RaidBetaLogger_TypeInfo->static_fields->CBDMFFMCJBK;
    *ppNVar2 = pNVar3;
    thunk_FUN_01c20e04(ppNVar2,pNVar3);
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)
                       Nekki_Utils_RaidBetaLogger_TypeInfo->static_fields->CBDMFFMCJBK,
                       (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    method_00 = extraout_x1;
    if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method_00 = extraout_x1_00;
    }
    pNVar3 = Nekki_Utils_RaidBetaLogger_TypeInfo->static_fields->CBDMFFMCJBK;
    if (pNVar3 != (Nekki_Utils_RaidBetaLogger_o *)0x0) {
      Nekki_Utils_RaidBetaLogger__GIENGNEGHPJ(pNVar3,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

