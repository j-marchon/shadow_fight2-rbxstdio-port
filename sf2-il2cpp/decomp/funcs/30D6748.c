// Nekki.SF2.GUI.Fight.RaidFinalFightChestContent$$FixedUpdate @ RVA 0x30D6748

void Nekki_SF2_GUI_Fight_RaidFinalFightChestContent__FixedUpdate
               (Nekki_SF2_GUI_Fight_RaidFinalFightChestContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  
  if ((DAT_04566333 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566333 = 1;
    method = extraout_x1;
  }
  pNVar4 = (__this->fields)._bottomStar1;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar4 = (__this->fields)._bottomStar1;
    if ((pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_031d6878;
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
    if (bVar1) {
      pNVar4 = (__this->fields)._bottomStar1;
      if ((pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_Transform_o *)0x0)) goto LAB_031d6878;
      UnityEngine_Transform__Rotate
                (pUVar3,(UnityEngine_Vector3_o)(ZEXT412(0x3f800000) << 0x40),
                 (__this->fields)._rotationAngle,(MethodInfo *)0x0);
    }
  }
  pNVar4 = (__this->fields)._bottomStar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pNVar4 = (__this->fields)._bottomStar2;
  if ((pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    pNVar4 = (__this->fields)._bottomStar2;
    if ((pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__Rotate
                (pUVar3,(UnityEngine_Vector3_o)(ZEXT412(0x3f800000) << 0x40),
                 (__this->fields)._rotationAngle,(MethodInfo *)0x0);
      return;
    }
  }
LAB_031d6878:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

