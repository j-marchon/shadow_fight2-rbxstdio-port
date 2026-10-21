// Nekki.SF2.GUI.Fight.RewardPanelItem$$Init @ RVA 0x35B2110

void Nekki_SF2_GUI_Fight_RewardPanelItem__Init
               (Nekki_SF2_GUI_Fight_RewardPanelItem_o *__this,System_String_o *HCAAAAMDCNO,
               System_String_o *EHNFGMGKCHO,float PFIFJCMHGGB,int32_t ABMDLEIKNBO,MethodInfo *method
               )

{
  bool bVar1;
  UnityEngine_Transform_o *transform;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Text_o *pUVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  
  if ((DAT_04568ea2 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568ea2 = 1;
  }
  pNVar3 = (__this->fields)._image;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._image;
    if (pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_036b228c;
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar3,HCAAAAMDCNO,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._image;
    if (pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_036b228c;
    (*(pNVar3->klass->vtable)._45_SetNativeSize.methodPtr)
              (pNVar3,(pNVar3->klass->vtable)._45_SetNativeSize.method);
    pNVar3 = (__this->fields)._image;
    if (pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_036b228c;
    transform = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
    UnityEngine_TransformExtensions__SetLocalScale(transform,PFIFJCMHGGB,(MethodInfo *)0x0);
  }
  bVar1 = System_String__IsNullOrEmpty(EHNFGMGKCHO,(MethodInfo *)0x0);
  pUVar2 = (__this->fields)._text;
  if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
    if (bVar1) {
      __this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                (pUVar2,EHNFGMGKCHO,(pUVar2->klass->vtable)._75_set_text.method);
      if (ABMDLEIKNBO < 1) {
        return;
      }
      pUVar2 = (__this->fields)._text;
      if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
        UnityEngine_UI_Text__set_resizeTextMaxSize(pUVar2,ABMDLEIKNBO,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._text;
        if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
          UnityEngine_UI_Text__set_fontSize(pUVar2,ABMDLEIKNBO,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_036b228c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

