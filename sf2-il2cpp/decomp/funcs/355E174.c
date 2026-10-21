// Nekki.SF2.GUI.Fight.ScreenModel$$JENEOLKJABD @ RVA 0x355E174

void Nekki_SF2_GUI_Fight_ScreenModel__JENEOLKJABD
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_GameObject_o *__this_00;
  Il2CppObject *arg0;
  System_String_o *pSVar3;
  MethodInfo *extraout_x1;
  PJKHAJKEHEL_o *pPVar4;
  Nekki_SF2_GUI_LabelAlias_o *pNVar5;
  Nekki_SF2_GUI_Fight_PlayerLifeBar_o *pNVar6;
  float CJNHFNHJHPE;
  int32_t local_44;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_40;
  
  if ((DAT_04568b9d & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_15022);
    DAT_04568b9d = 1;
    method = extraout_x1;
  }
  pNVar5 = (__this->fields)._lifeBarLvlCount;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    pNVar6 = (__this->fields)._lifeBar;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      pPVar4 = (__this->fields)._parameters;
      if (pPVar4 != (PJKHAJKEHEL_o *)0x0) {
        local_40.fakeValueActive = (pPVar4->fields).JNFNFEJAGGN.fields.fakeValueActive;
        local_40.inited = (pPVar4->fields).JNFNFEJAGGN.fields.inited;
        local_40._18_2_ = *(undefined2 *)&(pPVar4->fields).JNFNFEJAGGN.fields.field_0x12;
        local_40.hiddenValueOldByte4.fields =
             (pPVar4->fields).JNFNFEJAGGN.fields.hiddenValueOldByte4.fields;
        local_40.fakeValue = (pPVar4->fields).JNFNFEJAGGN.fields.fakeValue;
        local_40.currentCryptoKey = (pPVar4->fields).JNFNFEJAGGN.fields.currentCryptoKey;
        local_40.hiddenValue = (pPVar4->fields).JNFNFEJAGGN.fields.hiddenValue;
        pNVar6 = (__this->fields)._lifeBar;
        CJNHFNHJHPE = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                                ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_40,
                                 (MethodInfo *)0x0);
        if (pNVar6 != (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *)0x0) {
          iVar2 = Nekki_SF2_GUI_Fight_PlayerLifeBar__DefineLevelNumber
                            (pNVar6,CJNHFNHJHPE,(MethodInfo *)0x0);
          pNVar5 = (__this->fields)._lifeBarLvlCount;
          if (iVar2 < 2) {
            if (pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              (*(pNVar5->klass->vtable)._75_set_text.methodPtr)
                        (pNVar5,0,(pNVar5->klass->vtable)._75_set_text.method);
              pNVar5 = (__this->fields)._lifeBarLvlCount;
              if ((pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
                 (__this_00 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
                 __this_00 != (UnityEngine_GameObject_o *)0x0)) {
                bVar1 = false;
LAB_0365e300:
                UnityEngine_GameObject__SetActive(__this_00,bVar1,(MethodInfo *)0x0);
                return;
              }
            }
          }
          else {
            local_44 = iVar2;
            arg0 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_44);
            pSVar3 = System_String__Format(StringLiteral_15022,arg0,(MethodInfo *)0x0);
            if (pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              (*(pNVar5->klass->vtable)._75_set_text.methodPtr)
                        (pNVar5,pSVar3,(pNVar5->klass->vtable)._75_set_text.method);
              pNVar5 = (__this->fields)._lifeBarLvlCount;
              if ((pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
                 (__this_00 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
                 __this_00 != (UnityEngine_GameObject_o *)0x0)) {
                bVar1 = true;
                goto LAB_0365e300;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

