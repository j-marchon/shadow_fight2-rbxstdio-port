// Util$$JODGPLBHHIA @ RVA 0x3209E8C

void Util__JODGPLBHHIA(UnityEngine_GameObject_o *LAIGNDBNBJG,bool LIMKJAFGBOP,MethodInfo *method)

{
  if ((DAT_04566e6c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo,LIMKJAFGBOP);
    DAT_04566e6c = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Object__Destroy((UnityEngine_Object_o *)LAIGNDBNBJG,(MethodInfo *)0x0);
  if (LAIGNDBNBJG != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(LAIGNDBNBJG,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

