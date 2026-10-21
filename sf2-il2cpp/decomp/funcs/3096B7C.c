// Sf2.Timers$$AIHNLLGNBLC @ RVA 0x3096B7C

Sf2_Timers_o * Sf2_Timers__AIHNLLGNBLC(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Object_o *target;
  Sf2_Timers_o *pSVar2;
  
  if ((DAT_045660e3 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<Timers>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Sf2_Timers_TypeInfo);
    FUN_01bab630(&StringLiteral_15599);
    DAT_045660e3 = 1;
  }
  pSVar2 = Sf2_Timers_TypeInfo->static_fields->CBDMFFMCJBK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pSVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(__this,StringLiteral_15599,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      pSVar2 = (Sf2_Timers_o *)
               UnityEngine_GameObject__AddComponent<object>
                         (__this,Method_UnityEngine_GameObject_AddComponent<Timers>__);
      Sf2_Timers_TypeInfo->static_fields->CBDMFFMCJBK = pSVar2;
      thunk_FUN_01c20e04(Sf2_Timers_TypeInfo->static_fields,pSVar2);
      pSVar2 = Sf2_Timers_TypeInfo->static_fields->CBDMFFMCJBK;
      if (pSVar2 != (Sf2_Timers_o *)0x0) {
        target = (UnityEngine_Object_o *)
                 UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pSVar2,(MethodInfo *)0x0);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__DontDestroyOnLoad(target,(MethodInfo *)0x0);
        goto LAB_03196cac;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_03196cac:
  return Sf2_Timers_TypeInfo->static_fields->CBDMFFMCJBK;
}

