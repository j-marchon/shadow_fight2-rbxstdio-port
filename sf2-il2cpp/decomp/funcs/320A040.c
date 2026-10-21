// Util$$JODGPLBHHIA @ RVA 0x320A040

void Util__JODGPLBHHIA(UnityEngine_Component_o *MOEOHLPJDJO,bool LIMKJAFGBOP,MethodInfo *method)

{
  if ((DAT_04566e6e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo,LIMKJAFGBOP);
    DAT_04566e6e = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Object__Destroy((UnityEngine_Object_o *)MOEOHLPJDJO,(MethodInfo *)0x0);
  return;
}

