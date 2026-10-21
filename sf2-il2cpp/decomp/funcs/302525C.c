// RaidSwitchButtonsRoot$$LLCHPOHDNEK @ RVA 0x302525C

UnityEngine_RectTransform_o *
RaidSwitchButtonsRoot__LLCHPOHDNEK(RaidSwitchButtonsRoot_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  
  if ((DAT_04565c88 & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04565c88 = 1;
  }
  pUVar1 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if ((pUVar1 != (UnityEngine_RectTransform_o *)0x0) &&
     (pUVar1->klass != UnityEngine_RectTransform_TypeInfo)) {
    pUVar1 = (UnityEngine_RectTransform_o *)0x0;
  }
  return pUVar1;
}

