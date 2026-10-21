// Nekki.SF2.GUI.Dialogs.SettingsDialog$$HAONPBDHBCD @ RVA 0x3483DF4

void Nekki_SF2_GUI_Dialogs_SettingsDialog__HAONPBDHBCD
               (Nekki_SF2_GUI_Dialogs_SettingsDialog_o *__this,DBNEEHGBCJD_o *PKLODOLPNJJ,
               MethodInfo *method)

{
  ushort uVar1;
  System_String_o *pSVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  VirtualInvokeData *pVVar5;
  Core_Configs_Models_BuildSettingsConfig_o *config;
  UnityEngine_UI_Graphic_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  Nekki_SF2_GUI_Dialogs_SettingsDialog_o *__this_02;
  MethodInfo *method_00;
  MethodInfo *in_x4;
  Il2CppClass *pIVar6;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar7;
  ulong uVar8;
  int32_t *piVar9;
  System_String_o *IEPAILIKIEM;
  UnityEngine_Vector2_o value;
  
  if ((DAT_0456839a & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&StringLiteral_11943);
    DAT_0456839a = 1;
  }
  if (PKLODOLPNJJ == (DBNEEHGBCJD_o *)0x0) {
    pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    if (pIVar4 == (Il2CppObject *)0x0) goto LAB_03583fd0;
    pIVar6 = pIVar4->klass;
    uVar1._0_1_ = (pIVar6->_2).rank;
    uVar1._1_1_ = (pIVar6->_2).minimumAlignment;
    uVar8 = (ulong)uVar1;
    if (uVar8 != 0) {
      piVar9 = &((pIVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar5 = pIVar6->vtable + (*piVar9 + 6);
          goto LAB_03583ecc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,6);
LAB_03583ecc:
    PKLODOLPNJJ = (DBNEEHGBCJD_o *)(*pVVar5->methodPtr)(pIVar4,pVVar5->method);
    if (PKLODOLPNJJ == (DBNEEHGBCJD_o *)0x0) goto LAB_03583fd0;
  }
  IEPAILIKIEM = (PKLODOLPNJJ->fields)._PIJHOBHDLLH_k__BackingField;
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  config = (Core_Configs_Models_BuildSettingsConfig_o *)
           IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
  bVar3 = Core_Configs_Models_BuildSettingsExtension__GetHideLanguageFlags
                    (config,false,(MethodInfo *)0x0);
  pSVar2 = StringLiteral_11943;
  if (bVar3) {
    pNVar7 = (__this->fields).btnLanguage;
    if ((pNVar7 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
       (__this_00 = (pNVar7->fields).super.super.super.m_TargetGraphic,
       __this_00 != (UnityEngine_UI_Graphic_o *)0x0)) {
      __this_01 = UnityEngine_UI_Graphic__get_rectTransform(__this_00,(MethodInfo *)0x0);
      if (DAT_0455fa7e == '\0') {
        FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
        DAT_0455fa7e = '\x01';
      }
      if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
        value.fields.y = (UnityEngine_Vector2_TypeInfo->static_fields->oneVector).fields.y * 170.0;
        value.fields.x = (UnityEngine_Vector2_TypeInfo->static_fields->oneVector).fields.x * 170.0;
        UnityEngine_RectTransform__set_sizeDelta(__this_01,value,(MethodInfo *)0x0);
        IEPAILIKIEM = pSVar2;
        goto LAB_03583f98;
      }
    }
LAB_03583fd0:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_03583f98:
  method_00 = (MethodInfo *)0x4;
  Nekki_SF2_GUI_Dialogs_SettingsDialog__GIJLHPDBFEK
            (__this,(__this->fields).btnLanguage,IEPAILIKIEM,0.0,200.0,4,in_x4);
  Nekki_SF2_GUI_Dialogs_SettingsDialog__KHHGMEABDML
            (__this_02,(__this->fields).lblLanguage,
             (PKLODOLPNJJ->fields)._HONAAKEIHJI_k__BackingField,method_00);
  return;
}

