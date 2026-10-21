// Nekki.SF2.GUI.ResolutionButton$$Awake @ RVA 0x30F51DC

void Nekki_SF2_GUI_ResolutionButton__Awake
               (Nekki_SF2_GUI_ResolutionButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  UnityEngine_UI_Graphic_o *pUVar2;
  
  if ((DAT_0456644b & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ResolutionImage>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456644b = 1;
  }
  SFButton__Awake((SFButton_o *)__this,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).super.super.super.m_TargetGraphic;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_x1;
  if (bVar1) {
    __this_00 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pUVar2 = (UnityEngine_UI_Graphic_o *)
             UnityEngine_GameObject__GetComponent<object>
                       (__this_00,Method_UnityEngine_GameObject_GetComponent<ResolutionImage>__);
    UnityEngine_UI_Selectable__set_targetGraphic
              ((UnityEngine_UI_Selectable_o *)__this,pUVar2,(MethodInfo *)0x0);
    method_00 = extraout_x1_00;
  }
  (__this->fields).super._EnableClickAnimation = false;
  Nekki_SF2_GUI_ResolutionButton__ADAMPGNKDKF(__this,method_00);
  return;
}

