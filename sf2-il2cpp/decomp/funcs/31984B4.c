// Nekki.SF2.GUI.Dialogs.Raids.MedalsScrollItem$$Init @ RVA 0x31984B4

void Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem__Init
               (Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_o *DKMMBMBMJBO,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_o **ppNVar1;
  System_Collections_Generic_List_MedalsScrollItem_MedalPanel__o *pSVar2;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *pUVar4;
  PLIIGOCLJDL_o *__this_00;
  JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_o *pJVar5;
  System_Action_object__o *IELDNEAAPBE;
  long *plVar6;
  System_String_o *pSVar7;
  Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_o *pNVar8;
  System_Collections_Generic_List_KMDOLFBIGNC__o *pSVar9;
  int index;
  int index_00;
  Il2CppClass *__this_01;
  undefined4 local_64;
  
  if ((DAT_04566a8c & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MedalsScrollItem_MedalPanel>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMDOLFBIGNC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMDOLFBIGNC>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MedalsScrollItem_MedalPanel>_get_Item__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_LHHLFBBBJLD__);
    FUN_01bab630(&StringLiteral_14092);
    DAT_04566a8c = 1;
  }
  ppNVar1 = &(__this->fields).ACDOFBACGGE;
  local_64 = 0;
  (__this->fields).ACDOFBACGGE = DKMMBMBMJBO;
  thunk_FUN_01c20e04(ppNVar1,DKMMBMBMJBO);
  pNVar8 = (__this->fields).ACDOFBACGGE;
  if (pNVar8 != (Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_o *)0x0) {
    index = 0;
    while (pSVar9 = (pNVar8->fields).PCAAANOFKNG,
          pSVar9 != (System_Collections_Generic_List_KMDOLFBIGNC__o *)0x0) {
      index_00 = (pSVar9->fields)._size;
      pSVar2 = (__this->fields)._medals;
      if (index_00 <= index) {
        if (pSVar2 != (System_Collections_Generic_List_MedalsScrollItem_MedalPanel__o *)0x0)
        goto LAB_032987fc;
        break;
      }
      if (((pSVar2 == (System_Collections_Generic_List_MedalsScrollItem_MedalPanel__o *)0x0) ||
          (pIVar3 = System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar2,index,
                               Method_System_Collections_Generic_List<MedalsScrollItem_MedalPanel>_get_Item__
                              ), pIVar3 == (Il2CppObject *)0x0)) ||
         ((pIVar3[1].klass == (Il2CppClass *)0x0 ||
          (pUVar4 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pIVar3[1].klass,(MethodInfo *)0x0),
          pUVar4 == (UnityEngine_GameObject_o *)0x0)))) break;
      UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
      if (((*ppNVar1 == (Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_o *)0x0) ||
          (pSVar9 = ((*ppNVar1)->fields).PCAAANOFKNG,
          pSVar9 == (System_Collections_Generic_List_KMDOLFBIGNC__o *)0x0)) ||
         ((pIVar3 = System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar9,index,
                               Method_System_Collections_Generic_List<KMDOLFBIGNC>_get_Item__),
          pIVar3 == (Il2CppObject *)0x0 || (__this_00 == (PLIIGOCLJDL_o *)0x0)))) break;
      pJVar5 = PLIIGOCLJDL__LPCLGCOCEEA(__this_00,*(int32_t *)&pIVar3[2].monitor,(MethodInfo *)0x0);
      pSVar2 = (__this->fields)._medals;
      if (((pSVar2 == (System_Collections_Generic_List_MedalsScrollItem_MedalPanel__o *)0x0) ||
          (pIVar3 = System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar2,index,
                               Method_System_Collections_Generic_List<MedalsScrollItem_MedalPanel>_get_Item__
                              ), pIVar3 == (Il2CppObject *)0x0)) ||
         (pIVar3[2].klass == (Il2CppClass *)0x0)) break;
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pIVar3[2].klass,true,(MethodInfo *)0x0);
      pSVar2 = (__this->fields)._medals;
      if ((((pSVar2 == (System_Collections_Generic_List_MedalsScrollItem_MedalPanel__o *)0x0) ||
           (pIVar3 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar2,index,
                                Method_System_Collections_Generic_List<MedalsScrollItem_MedalPanel>_get_Item__
                               ), pIVar3 == (Il2CppObject *)0x0)) ||
          (pJVar5 == (JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_o *)0x0)) ||
         (pIVar3[2].klass == (Il2CppClass *)0x0)) break;
      Nekki_SF2_GUI_ResolutionButton__SetNormalSprite
                ((Nekki_SF2_GUI_ResolutionButton_o *)pIVar3[2].klass,StringLiteral_14092,
                 (pJVar5->fields).HHCNBANOKPB,(MethodInfo *)0x0);
      pSVar2 = (__this->fields)._medals;
      if (((pSVar2 == (System_Collections_Generic_List_MedalsScrollItem_MedalPanel__o *)0x0) ||
          (pIVar3 = System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar2,index,
                               Method_System_Collections_Generic_List<MedalsScrollItem_MedalPanel>_get_Item__
                              ), pIVar3 == (Il2CppObject *)0x0)) ||
         (pIVar3[2].klass == (Il2CppClass *)0x0)) break;
      Nekki_SF2_GUI_ResolutionButton__SetAllSpritesAsNormal
                ((Nekki_SF2_GUI_ResolutionButton_o *)pIVar3[2].klass,(MethodInfo *)0x0);
      pSVar2 = (__this->fields)._medals;
      if ((pSVar2 == (System_Collections_Generic_List_MedalsScrollItem_MedalPanel__o *)0x0) ||
         (pIVar3 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar2,index,
                              Method_System_Collections_Generic_List<MedalsScrollItem_MedalPanel>_get_Item__
                             ), pIVar3 == (Il2CppObject *)0x0)) break;
      __this_01 = pIVar3[2].klass;
      IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_01 == (Il2CppClass *)0x0) break;
      SFButton__AddEventListener((SFButton_o *)__this_01,2,IELDNEAAPBE,(MethodInfo *)0x0);
      pSVar2 = (__this->fields)._medals;
      if (((pSVar2 == (System_Collections_Generic_List_MedalsScrollItem_MedalPanel__o *)0x0) ||
          (pIVar3 = System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar2,index,
                               Method_System_Collections_Generic_List<MedalsScrollItem_MedalPanel>_get_Item__
                              ), pIVar3 == (Il2CppObject *)0x0)) ||
         (pIVar3[2].klass == (Il2CppClass *)0x0)) break;
      *(int *)&(pIVar3[2].klass)->vtable[2].method = index;
      pSVar2 = (__this->fields)._medals;
      if (((pSVar2 == (System_Collections_Generic_List_MedalsScrollItem_MedalPanel__o *)0x0) ||
          (pIVar3 = System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar2,index,
                               Method_System_Collections_Generic_List<MedalsScrollItem_MedalPanel>_get_Item__
                              ), pIVar3 == (Il2CppObject *)0x0)) ||
         (plVar6 = pIVar3[2].monitor, plVar6 == (long *)0x0)) break;
      (**(code **)(*plVar6 + 0x2a8))
                ((pJVar5->fields).JPBGLAAFMKH.fields.r,(pJVar5->fields).JPBGLAAFMKH.fields.g,
                 (pJVar5->fields).JPBGLAAFMKH.fields.b,(pJVar5->fields).JPBGLAAFMKH.fields.a,plVar6,
                 *(undefined8 *)(*plVar6 + 0x2b0));
      pSVar2 = (__this->fields)._medals;
      if (((pSVar2 == (System_Collections_Generic_List_MedalsScrollItem_MedalPanel__o *)0x0) ||
          (pIVar3 = System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar2,index,
                               Method_System_Collections_Generic_List<MedalsScrollItem_MedalPanel>_get_Item__
                              ), pIVar3 == (Il2CppObject *)0x0)) ||
         ((*ppNVar1 == (Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_o *)0x0 ||
          (pSVar9 = ((*ppNVar1)->fields).PCAAANOFKNG,
          pSVar9 == (System_Collections_Generic_List_KMDOLFBIGNC__o *)0x0)))) break;
      plVar6 = pIVar3[2].monitor;
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar9,index,
                          Method_System_Collections_Generic_List<KMDOLFBIGNC>_get_Item__);
      if (pIVar3 == (Il2CppObject *)0x0) break;
      local_64 = *(undefined4 *)&pIVar3[2].monitor;
      pSVar7 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
      if (plVar6 == (long *)0x0) break;
      (**(code **)(*plVar6 + 0x5e8))(plVar6,pSVar7,*(undefined8 *)(*plVar6 + 0x5f0));
      pNVar8 = *ppNVar1;
      index = index + 1;
      if (pNVar8 == (Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_o *)0x0) break;
    }
  }
  goto LAB_03298844;
  while( true ) {
    UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
    pSVar2 = (__this->fields)._medals;
    index_00 = index_00 + 1;
    if (pSVar2 == (System_Collections_Generic_List_MedalsScrollItem_MedalPanel__o *)0x0) break;
LAB_032987fc:
    if ((pSVar2->fields)._size <= index_00) {
      return;
    }
    pIVar3 = System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar2,index_00,
                        Method_System_Collections_Generic_List<MedalsScrollItem_MedalPanel>_get_Item__
                       );
    if (((pIVar3 == (Il2CppObject *)0x0) || (pIVar3[1].klass == (Il2CppClass *)0x0)) ||
       (pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pIVar3[1].klass,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_GameObject_o *)0x0)) break;
  }
LAB_03298844:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

