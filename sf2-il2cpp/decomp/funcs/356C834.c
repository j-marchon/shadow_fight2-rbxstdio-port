// Nekki.SF2.GUI.Menu.MainMenu$$JNNKOMCGHGL @ RVA 0x356C834

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Menu_MainMenu__JNNKOMCGHGL
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  ACHLOMELAJE_o *__this_00;
  UnityEngine_Events_UnityAction_T0__o *call;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Common_SectionButton_o *pNVar3;
  Nekki_SF2_GUI_ResolutionImage_o *__this_02;
  UnityEngine_Events_UnityEvent_bool__o *__this_03;
  undefined8 *puVar4;
  
  if ((DAT_04568c32 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MainMenu_KBBDLHONPIO__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_ResolutionImage_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<bool>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<bool>_AddListener__);
    FUN_01bab630(&StringLiteral_8969);
    FUN_01bab630(&StringLiteral_8970);
    DAT_04568c32 = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields).btnSettings;
  if (pNVar3 == (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) goto LAB_0366ca84;
  __this_02 = (Nekki_SF2_GUI_ResolutionImage_o *)
              (pNVar3->fields).super.super.super.super.m_TargetGraphic;
  if (__this_02 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
LAB_0366c8f0:
    __this_02 = (Nekki_SF2_GUI_ResolutionImage_o *)0x0;
  }
  else {
    bVar1 = (Nekki_SF2_GUI_ResolutionImage_TypeInfo->_2).naturalAligment;
    if ((__this_02->klass->_2).naturalAligment < bVar1) goto LAB_0366c8f0;
    if ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_ResolutionImage_TypeInfo) {
      __this_02 = (Nekki_SF2_GUI_ResolutionImage_o *)0x0;
    }
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar2) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    puVar4 = &StringLiteral_8969;
    if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField != (ACHLOMELAJE_o *)0x0) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (__this_00 == (ACHLOMELAJE_o *)0x0) goto LAB_0366ca84;
      bVar2 = ACHLOMELAJE__KIDFHIOEAAP(__this_00,(MethodInfo *)0x0);
      puVar4 = (undefined8 *)&StringLiteral_8970;
      if (!bVar2) {
        puVar4 = &StringLiteral_8969;
      }
    }
    if (__this_02 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0366ca84;
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName
              (__this_02,(System_String_o *)*puVar4,(MethodInfo *)0x0);
  }
  pNVar3 = (__this->fields).btnSettings;
  if (pNVar3 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) {
    __this_03 = *(UnityEngine_Events_UnityEvent_bool__o **)
                 &(pNVar3->fields).super.super._EnableClickAnimation;
    call = (UnityEngine_Events_UnityAction_T0__o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction<bool>_TypeInfo);
    UnityEngine_Events_UnityAction<bool>___ctor();
    if (__this_03 != (UnityEngine_Events_UnityEvent_bool__o *)0x0) {
      UnityEngine_Events_UnityEvent<bool>__AddListener
                (__this_03,call,Method_UnityEngine_Events_UnityEvent<bool>_AddListener__);
      pNVar3 = (__this->fields).btnSettings;
      if ((pNVar3 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0) &&
         (__this_01 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         __this_01 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0366ca84:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

