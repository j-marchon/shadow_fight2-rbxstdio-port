// Nekki.SF2.GUI.GeneralMenu.MenuItemButton$$UpdateKunai @ RVA 0x3094FA8

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_GeneralMenu_MenuItemButton__UpdateKunai
               (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  UnityEngine_Transform_o *pUVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  UnityEngine_Transform_o *pUVar4;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o value;
  
  if ((DAT_045660cb & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045660cb = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._label;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._label;
    if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03195124;
    fVar5 = (pNVar3->fields).super._BAHHBJMJCEM_k__BackingField.fields.m_Center.fields.y;
    pUVar4 = (__this->fields)._leftKunai;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    fVar5 = fVar5 + fVar5;
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pUVar4 = (__this->fields)._leftKunai;
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto LAB_03195124;
      pUVar4 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
      pUVar2 = (__this->fields)._leftKunai;
      if ((pUVar2 == (UnityEngine_Transform_o *)0x0) ||
         (pUVar2 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_Transform_o *)0x0)) goto LAB_03195124;
      UVar6 = UnityEngine_Transform__get_localPosition(pUVar2,(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto LAB_03195124;
      UVar6.fields.x = fVar5 * -0.5;
      UVar6.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition(pUVar4,UVar6,(MethodInfo *)0x0);
    }
    pUVar4 = (__this->fields)._rightKunai;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pUVar4 = (__this->fields)._rightKunai;
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        pUVar4 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._rightKunai;
        if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_Transform_o *)0x0)) {
          UVar6 = UnityEngine_Transform__get_localPosition(pUVar2,(MethodInfo *)0x0);
          value.fields.y = UVar6.fields.y;
          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
            value.fields.x = fVar5 * 0.5;
            value.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition(pUVar4,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
LAB_03195124:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

