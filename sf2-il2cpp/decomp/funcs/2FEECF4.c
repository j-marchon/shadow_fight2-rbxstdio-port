// Nekki.SF2.GUI.Fight.ResistanceContent$$Init @ RVA 0x2FEECF4

void Nekki_SF2_GUI_Fight_ResistanceContent__Init
               (Nekki_SF2_GUI_Fight_ResistanceContent_o *__this,
               System_Collections_Generic_List_IGPDCHBJAPD_DHAPBDACLMI__o *OJFMFMHCPOA,
               MethodInfo *method)

{
  int32_t iVar1;
  LabelButton_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Il2CppObject *pIVar2;
  AKADDLNNLKH_o *__this_02;
  HOGPIBHKJDL_o *pHVar3;
  ResistanceProgressBar_o *pRVar4;
  undefined8 uVar5;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar6;
  char *pcVar7;
  Il2CppClass *pIVar8;
  
  if ((DAT_04565a52 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGPDCHBJAPD_DHAPBDACLMI>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ResistanceContent_DMNCBADHGJP__);
    DAT_04565a52 = 1;
  }
  __this_00 = (__this->fields)._buttonOk;
  if ((((__this_00 != (LabelButton_o *)0x0) &&
       (__this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_GameObject_o *)0x0)) &&
      (UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0),
      OJFMFMHCPOA != (System_Collections_Generic_List_IGPDCHBJAPD_DHAPBDACLMI__o *)0x0)) &&
     (pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)OJFMFMHCPOA,0,
                          Method_System_Collections_Generic_List<IGPDCHBJAPD_DHAPBDACLMI>_get_Item__
                         ), pIVar2 != (Il2CppObject *)0x0)) {
    pIVar8 = pIVar2[1].klass;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (((pAVar6 != (ACHLOMELAJE_o *)0x0) && (pIVar8 != (Il2CppClass *)0x0)) &&
       (__this_02 = (pAVar6->fields).MLNLNNNNPGH, __this_02 != (AKADDLNNLKH_o *)0x0)) {
      pHVar3 = AKADDLNNLKH__PKFOJKHFKKL
                         (__this_02,(HGLELMDNMMA_o *)(pIVar8->_1).name,(MethodInfo *)0x0);
      pcVar7 = (pIVar8->_1).name;
      if (((pcVar7 != (char *)0x0) &&
          (pRVar4 = (__this->fields).ProgressBar, pRVar4 != (ResistanceProgressBar_o *)0x0)) &&
         ((*(pRVar4->klass->vtable)._11_SetValueBorders.methodPtr)
                    (0,(float)*(int *)(pcVar7 + 0x10),pRVar4,
                     (pRVar4->klass->vtable)._11_SetValueBorders.method),
         pHVar3 != (HOGPIBHKJDL_o *)0x0)) {
        pRVar4 = (__this->fields).ProgressBar;
        iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (pHVar3->fields)._LJGJEGHMFAM_k__BackingField.fields,(MethodInfo *)0x0);
        if (pRVar4 != (ResistanceProgressBar_o *)0x0) {
          (*(pRVar4->klass->vtable)._8_SetValue.methodPtr)
                    ((float)iVar1,0,pRVar4,0,(pRVar4->klass->vtable)._8_SetValue.method);
          iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             (pHVar3->fields)._LJGJEGHMFAM_k__BackingField.fields,(MethodInfo *)0x0)
          ;
          pcVar7 = (pIVar8->_1).name;
          if (pcVar7 != (char *)0x0) {
            if (*(int *)(pcVar7 + 0x10) <= iVar1) {
              Nekki_SF2_GUI_Fight_ResistanceContent__DMNCBADHGJP(__this,method_00);
              return;
            }
            pRVar4 = (__this->fields).ProgressBar;
            iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                               (pHVar3->fields)._PKGCKALOMOF_k__BackingField.fields,
                               (MethodInfo *)0x0);
            uVar5 = thunk_FUN_01bda818(System_Action_TypeInfo);
            System_Action___ctor();
            if (pRVar4 != (ResistanceProgressBar_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x030eeef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(pRVar4->klass->vtable)._8_SetValue.methodPtr)
                        ((float)iVar1,0x3f800000,pRVar4,uVar5,
                         (pRVar4->klass->vtable)._8_SetValue.method);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

