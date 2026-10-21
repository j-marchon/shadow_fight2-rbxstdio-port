// Nekki.SF2.GUI.Dialogs.StoryDialog$$HJHNCCJBIIP @ RVA 0x32BE49C

UnityEngine_Transform_o *
Nekki_SF2_GUI_Dialogs_StoryDialog__HJHNCCJBIIP
          (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_ResolutionImage_o *__this_01;
  UnityEngine_Transform_o *pUVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_CompositeImage_o *pNVar3;
  
  if ((DAT_045674b9 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045674b9 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._compositeImage;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar3,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._compositeImage;
    if ((pNVar3 == (Nekki_SF2_GUI_CompositeImage_o *)0x0) ||
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_GameObject_o *)0x0)) goto LAB_033be51c;
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if (bVar1) {
      __this_01 = (Nekki_SF2_GUI_ResolutionImage_o *)(__this->fields)._compositeImage;
      if (__this_01 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_033be51c;
      goto LAB_033be528;
    }
  }
  __this_01 = (__this->fields)._portrait;
  if (__this_01 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
LAB_033be528:
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
    return pUVar2;
  }
LAB_033be51c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

