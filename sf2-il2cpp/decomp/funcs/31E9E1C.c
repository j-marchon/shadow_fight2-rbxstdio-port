// WideScreenController$$MBEOLOBEACM @ RVA 0x31E9E1C

UnityEngine_RectTransform_o *
WideScreenController__MBEOLOBEACM(WideScreenController_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *pUVar1;
  
  if ((DAT_04566d8b & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04566d8b = 1;
  }
  __this_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pUVar1 = (UnityEngine_RectTransform_o *)
           UnityEngine_Transform__get_parent(__this_00,(MethodInfo *)0x0);
  if ((pUVar1 != (UnityEngine_RectTransform_o *)0x0) &&
     (pUVar1->klass != UnityEngine_RectTransform_TypeInfo)) {
    pUVar1 = (UnityEngine_RectTransform_o *)0x0;
  }
  return pUVar1;
}

