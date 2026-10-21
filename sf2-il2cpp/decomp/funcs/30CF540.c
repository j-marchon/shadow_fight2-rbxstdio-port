// AHOEIGAOKEL$$HCNNHNAIJFB @ RVA 0x30CF540

void AHOEIGAOKEL__HCNNHNAIJFB(AHOEIGAOKEL_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  int32_t *piVar2;
  FLCGGKEODNC_o *__this_00;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar3;
  PKHMIGFEJCL_o *pPVar4;
  System_String_o **ppSVar5;
  System_Collections_Generic_List_FLCGGKEODNC__o *__this_01;
  System_Action_object__o *pSVar6;
  System_String_o *url;
  Nekki_SF2_GUI_Dialogs_NewsDialog_o *pNVar7;
  
  if ((DAT_045662f6 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<FLCGGKEODNC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FLCGGKEODNC>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045662f6 = 1;
  }
  if (IMMNELPBGIF == (Il2CppObject *)0x0) goto LAB_031cf778;
  if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(IMMNELPBGIF);
  }
  piVar2 = (int32_t *)thunk_FUN_01bda96c(IMMNELPBGIF);
  __this_01 = (__this->fields).PGCBEJGMIMA;
  if (__this_01 == (System_Collections_Generic_List_FLCGGKEODNC__o *)0x0) goto LAB_031cf778;
  if (((__this_01->fields)._size <= *piVar2) ||
     (__this_00 = (FLCGGKEODNC_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_01,*piVar2,
                             Method_System_Collections_Generic_List<FLCGGKEODNC>_get_Item__),
     __this_00 == (FLCGGKEODNC_o *)0x0)) {
    return;
  }
  bVar1 = PCOEHCPGBBG__EDHHJAMCOJH((__this_00->fields).PHONOLEMBHN,(MethodInfo *)0x0);
  if (!bVar1) {
    url = (__this_00->fields).PHONOLEMBHN;
    if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Application__OpenURL(url,(MethodInfo *)0x0);
    pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if ((pNVar3 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
       (pPVar4 = (pNVar3->fields).QuestParameters, pPVar4 != (PKHMIGFEJCL_o *)0x0)) {
      (pPVar4->fields).JEMIJCDAKLB = (__this_00->fields).PHONOLEMBHN;
      thunk_FUN_01c20e04();
      pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (pNVar3 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
        Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(pNVar3,0x50,(MethodInfo *)0x0);
        return;
      }
    }
    goto LAB_031cf778;
  }
  bVar1 = FLCGGKEODNC__GJNNHMKDOBG(__this_00,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar7 = (__this->fields).ILCGLGPADOK;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) goto LAB_031cf6f0;
    pNVar7 = (__this->fields).ILCGLGPADOK;
    if (pNVar7 == (Nekki_SF2_GUI_Dialogs_NewsDialog_o *)0x0) goto LAB_031cf778;
    (pNVar7->fields).GoShopAfterClose = true;
    ppSVar5 = &(pNVar7->fields).RedirectShopAfterClose;
    (pNVar7->fields).RedirectShopAfterClose = (__this_00->fields).DMMDLLBOHNP;
LAB_031cf73c:
    thunk_FUN_01c20e04(ppSVar5);
    pNVar7 = (__this->fields).ILCGLGPADOK;
    if (pNVar7 == (Nekki_SF2_GUI_Dialogs_NewsDialog_o *)0x0) goto LAB_031cf778;
    (pNVar7->fields).SliderType = (__this_00->fields).HPPDIEDAKEC;
  }
  else {
LAB_031cf6f0:
    if ((__this_00->fields).KMJPPCLIEDG != false) {
      pNVar7 = (__this->fields).ILCGLGPADOK;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        pNVar7 = (__this->fields).ILCGLGPADOK;
        if (pNVar7 == (Nekki_SF2_GUI_Dialogs_NewsDialog_o *)0x0) goto LAB_031cf778;
        ppSVar5 = &(pNVar7->fields).BuyItemOnClose;
        (pNVar7->fields).BuyItemOnClose = (__this_00->fields).DMMDLLBOHNP;
        goto LAB_031cf73c;
      }
    }
  }
  pSVar6 = (__this->fields).DNPHBCPFMPB;
  if (pSVar6 != (System_Action_object__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031cf774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar6->fields).super.super.invoke_impl)
              ((pSVar6->fields).super.super.method_code,IMMNELPBGIF,
               (pSVar6->fields).super.super.method);
    return;
  }
LAB_031cf778:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

