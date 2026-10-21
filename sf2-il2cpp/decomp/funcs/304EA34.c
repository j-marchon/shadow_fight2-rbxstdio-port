// AKJJAPEHKCG$$KCMMEMJNMLI @ RVA 0x304EA34

bool AKJJAPEHKCG__KCMMEMJNMLI(UnityEngine_GameObject_o *LAIGNDBNBJG,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  
  if ((DAT_04565e34 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<TutorialControl>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565e34 = 1;
  }
  if (LAIGNDBNBJG != (UnityEngine_GameObject_o *)0x0) {
    x = (UnityEngine_Object_o *)
        UnityEngine_GameObject__GetComponent<object>
                  (LAIGNDBNBJG,Method_UnityEngine_GameObject_GetComponent<TutorialControl>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (x == (UnityEngine_Object_o *)0x0) goto LAB_0314eadc;
      bVar1 = *(char *)&x[1].monitor != '\0';
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
LAB_0314eadc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

