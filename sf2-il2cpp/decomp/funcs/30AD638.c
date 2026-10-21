// Nekki.SF2.GUI.Dialogs.LocalDailyProgressDialog$$IEMHHMLMKAB @ RVA 0x30AD638

void Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog__IEMHHMLMKAB
               (Nekki_SF2_GUI_Dialogs_LocalDailyProgressDialog_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  Il2CppObject *arg1;
  ProgressBar_o *pPVar3;
  UnityEngine_GameObject_o *__this_00;
  System_String_o *str2;
  Core_Configs_Models_LocalDailyQuestInfo_o *pCVar4;
  OPHDIHJPHDE_o *pOVar5;
  Nekki_SF2_GUI_LabelAlias_o *pNVar6;
  System_String_o *pSVar7;
  int32_t local_34;
  undefined8 local_28;
  
  if ((DAT_045661b6 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&StringLiteral_1492);
    FUN_01bab630(&StringLiteral_22458);
    DAT_045661b6 = 1;
  }
  local_28 = 0;
  pCVar4 = (__this->fields).PLOJDGGJEKO;
  if (pCVar4 != (Core_Configs_Models_LocalDailyQuestInfo_o *)0x0) {
    pSVar7 = (pCVar4->fields)._Title_k__BackingField;
    local_34 = (pCVar4->fields)._AdsTargetCount_k__BackingField;
    pNVar6 = (__this->fields)._taskTitleLbl;
    arg1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
    pSVar7 = System_String__Format
                       (StringLiteral_22458,(Il2CppObject *)pSVar7,arg1,(MethodInfo *)0x0);
    if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar6,pSVar7,(MethodInfo *)0x0);
      pPVar3 = (__this->fields)._taskProgressBar;
      if ((pPVar3 != (ProgressBar_o *)0x0) &&
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pPVar3,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
        pOVar5 = (__this->fields).MPPGJCKPDFD;
        if ((pOVar5 != (OPHDIHJPHDE_o *)0x0) &&
           (pCVar4 = (__this->fields).PLOJDGGJEKO,
           pCVar4 != (Core_Configs_Models_LocalDailyQuestInfo_o *)0x0)) {
          iVar1 = (pOVar5->fields)._PKGCKALOMOF_k__BackingField;
          iVar2 = (pCVar4->fields)._AdsTargetCount_k__BackingField;
          if (iVar2 <= iVar1) {
            iVar1 = iVar2;
          }
          local_28 = CONCAT44(iVar1,iVar2);
          pPVar3 = (__this->fields)._taskProgressBar;
          if (pPVar3 != (ProgressBar_o *)0x0) {
            (*(pPVar3->klass->vtable)._11_SetValueBorders.methodPtr)
                      (0,(float)iVar2,pPVar3,(pPVar3->klass->vtable)._11_SetValueBorders.method);
            pPVar3 = (__this->fields)._taskProgressBar;
            if (pPVar3 != (ProgressBar_o *)0x0) {
              (*(pPVar3->klass->vtable)._8_SetValue.methodPtr)
                        ((float)iVar1,0,pPVar3,0,(pPVar3->klass->vtable)._8_SetValue.method);
              pNVar6 = (__this->fields)._taskProgressLbl;
              pSVar7 = System_Int32__ToString((int)&local_28 + 4,(MethodInfo *)0x0);
              str2 = System_Int32__ToString((int32_t)&local_28,(MethodInfo *)0x0);
              pSVar7 = System_String__Concat(pSVar7,StringLiteral_1492,str2,(MethodInfo *)0x0);
              if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                (*(pNVar6->klass->vtable)._75_set_text.methodPtr)
                          (pNVar6,pSVar7,(pNVar6->klass->vtable)._75_set_text.method);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

