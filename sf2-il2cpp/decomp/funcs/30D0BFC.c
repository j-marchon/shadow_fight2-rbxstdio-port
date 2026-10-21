// Nekki.SF2.GUI.ItemsScroll$$KKMNFLPCAHN @ RVA 0x30D0BFC

void Nekki_SF2_GUI_ItemsScroll__KKMNFLPCAHN
               (Nekki_SF2_GUI_ItemsScroll_o *__this,UnityEngine_Vector2_o EMPKHNEPHPO,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_BaseScrollContent_o *pNVar3;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04566300 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566300 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).scrollContent;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  if ((__this->fields).MoveOnlyScrollingOrth == false) {
    pNVar3 = (__this->fields).scrollContent;
    if ((pNVar3 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_Transform_o *)0x0)) {
      value.fields.z = 0.0;
      value.fields._0_8_ = EMPKHNEPHPO.fields;
      UnityEngine_Transform__set_position(pUVar2,value,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    if ((__this->fields).super.m_Horizontal != false) {
      pNVar3 = (__this->fields).scrollContent;
      if (pNVar3 == (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) goto LAB_031d0d04;
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetPositionX(pUVar2,EMPKHNEPHPO.fields.x,(MethodInfo *)0x0);
    }
    if ((__this->fields).super.m_Vertical == false) {
      return;
    }
    pNVar3 = (__this->fields).scrollContent;
    if (pNVar3 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetPositionX(pUVar2,EMPKHNEPHPO.fields.y,(MethodInfo *)0x0);
      return;
    }
  }
LAB_031d0d04:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

