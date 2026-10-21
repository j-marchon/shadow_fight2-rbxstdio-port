// Nekki.SF2.GUI.Shop.SidePanel$$MHHABNBFAPK @ RVA 0x326B294

void Nekki_SF2_GUI_Shop_SidePanel__MHHABNBFAPK
               (Nekki_SF2_GUI_Shop_SidePanel_o *__this,bool FMFKDAOBPDI,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_UI_Button_o *pUVar5;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  
  if ((DAT_045671e3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_ResolutionImage_TypeInfo);
    DAT_045671e3 = 1;
  }
  pUVar5 = (__this->fields)._MoveButton;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if (FMFKDAOBPDI) {
    bVar2 = System_String__IsNullOrEmpty((__this->fields)._OpenImage,(MethodInfo *)0x0);
    if (bVar2) {
      return;
    }
    pUVar5 = (__this->fields)._MoveButton;
    if ((pUVar5 != (UnityEngine_UI_Button_o *)0x0) &&
       (pNVar3 = (Nekki_SF2_GUI_ResolutionImage_o *)
                 UnityEngine_UI_Selectable__get_image
                           ((UnityEngine_UI_Selectable_o *)pUVar5,(MethodInfo *)0x0),
       pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
      bVar1 = (Nekki_SF2_GUI_ResolutionImage_TypeInfo->_2).naturalAligment;
      if ((bVar1 <= (pNVar3->klass->_2).naturalAligment) &&
         ((pNVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)Nekki_SF2_GUI_ResolutionImage_TypeInfo)) {
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                  (pNVar3,(__this->fields)._OpenImage,(MethodInfo *)0x0);
        pUVar5 = (__this->fields)._MoveButton;
        if ((pUVar5 != (UnityEngine_UI_Button_o *)0x0) &&
           (pUVar4 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0),
           pUVar4 != (UnityEngine_Transform_o *)0x0)) {
          value.fields.z = 0.0;
          value.fields._0_8_ = (__this->fields)._OpenButtonPosition.fields;
          UnityEngine_Transform__set_localPosition(pUVar4,value,(MethodInfo *)0x0);
          pUVar5 = (__this->fields)._MoveButton;
          if ((pUVar5 != (UnityEngine_UI_Button_o *)0x0) &&
             (pUVar4 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0),
             pUVar4 != (UnityEngine_Transform_o *)0x0)) {
            UnityEngine_Transform__SetAsLastSibling(pUVar4,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  else {
    bVar2 = System_String__IsNullOrEmpty((__this->fields)._CloseImage,(MethodInfo *)0x0);
    if (bVar2) {
      return;
    }
    pUVar5 = (__this->fields)._MoveButton;
    if ((pUVar5 != (UnityEngine_UI_Button_o *)0x0) &&
       (pNVar3 = (Nekki_SF2_GUI_ResolutionImage_o *)
                 UnityEngine_UI_Selectable__get_image
                           ((UnityEngine_UI_Selectable_o *)pUVar5,(MethodInfo *)0x0),
       pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
      bVar1 = (Nekki_SF2_GUI_ResolutionImage_TypeInfo->_2).naturalAligment;
      if ((bVar1 <= (pNVar3->klass->_2).naturalAligment) &&
         ((pNVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)Nekki_SF2_GUI_ResolutionImage_TypeInfo)) {
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                  (pNVar3,(__this->fields)._CloseImage,(MethodInfo *)0x0);
        pUVar5 = (__this->fields)._MoveButton;
        if ((pUVar5 != (UnityEngine_UI_Button_o *)0x0) &&
           (pUVar4 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0),
           pUVar4 != (UnityEngine_Transform_o *)0x0)) {
          value_00.fields.z = 0.0;
          value_00.fields._0_8_ = (__this->fields)._CloseButtonPosition.fields;
          UnityEngine_Transform__set_localPosition(pUVar4,value_00,(MethodInfo *)0x0);
          pUVar5 = (__this->fields)._MoveButton;
          if ((pUVar5 != (UnityEngine_UI_Button_o *)0x0) &&
             (pUVar4 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0),
             pUVar4 != (UnityEngine_Transform_o *)0x0)) {
            UnityEngine_Transform__SetAsFirstSibling(pUVar4,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

