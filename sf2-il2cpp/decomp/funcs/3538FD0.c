// Nekki.SF2.GUI.Dialogs.Raids.TopMedalsInfoView$$JALIJKAKFIA @ RVA 0x3538FD0

Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_o *
Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView__JALIJKAKFIA
          (Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_o *__this,int32_t JDEFJPHCNMM,
          MethodInfo *method)

{
  System_Action_MedalsScrollItem_BDLDLFJALKC__o **ppSVar1;
  Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_o *__this_00;
  System_Delegate_o *pSVar2;
  long lVar3;
  System_Collections_Generic_List_MedalsScrollItem_FALGLCABJFN__o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_o *DKMMBMBMJBO;
  Nekki_SF2_GUI_SimpleScroll_o *__this_02;
  UnityEngine_GameObject_o *pUVar4;
  System_Action_MedalsScrollItem_BDLDLFJALKC__o *pSVar5;
  System_Action_MedalsScrollItem_BDLDLFJALKC__c *pSVar6;
  
  if ((DAT_04568ab3 & 1) == 0) {
    FUN_01bab630(&System_Action<MedalsScrollItem_BDLDLFJALKC>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<MedalsScrollItem>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MedalsScrollItem_FALGLCABJFN>_get_Item__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_LHHLFBBBJLD__);
    DAT_04568ab3 = 1;
  }
  pUVar4 = (__this->fields)._cellPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pUVar4 = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)pUVar4,Method_UnityEngine_Object_Instantiate<GameObject>__);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_o *)
                UnityEngine_GameObject__GetComponent<object>
                          (pUVar4,Method_UnityEngine_GameObject_GetComponent<MedalsScrollItem>__);
    __this_02 = (__this->fields)._simpleScroll;
    if ((__this_02 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) &&
       (Nekki_SF2_GUI_SimpleScroll__AddItem
                  (__this_02,(Nekki_SF2_GUI_BaseScrollItem_o *)__this_00,true,(MethodInfo *)0x0),
       __this_00 != (Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_o *)0x0)) {
      pSVar5 = (__this_00->fields).OnMedalClick;
      ppSVar1 = &(__this_00->fields).OnMedalClick;
      pSVar2 = (System_Delegate_o *)
               thunk_FUN_01bda818(System_Action<MedalsScrollItem_BDLDLFJALKC>_TypeInfo);
      System_Action<object>___ctor();
      pSVar2 = System_Delegate__Combine((System_Delegate_o *)pSVar5,pSVar2,(MethodInfo *)0x0);
      pSVar6 = System_Action<MedalsScrollItem_BDLDLFJALKC>_TypeInfo;
      if (pSVar2 == (System_Delegate_o *)0x0) {
        lVar3 = 0;
        *ppSVar1 = (System_Action_MedalsScrollItem_BDLDLFJALKC__o *)0x0;
      }
      else {
        pSVar5 = (System_Action_MedalsScrollItem_BDLDLFJALKC__o *)
                 thunk_FUN_01bda71c(pSVar2,System_Action<MedalsScrollItem_BDLDLFJALKC>_TypeInfo);
        if (pSVar5 == (System_Action_MedalsScrollItem_BDLDLFJALKC__o *)0x0) {
LAB_03639124:
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar2,pSVar6);
        }
        *ppSVar1 = pSVar5;
        pSVar6 = System_Action<MedalsScrollItem_BDLDLFJALKC>_TypeInfo;
        lVar3 = thunk_FUN_01bda71c(pSVar2,System_Action<MedalsScrollItem_BDLDLFJALKC>_TypeInfo);
        if (lVar3 == 0) goto LAB_03639124;
      }
      thunk_FUN_01c20e04(ppSVar1,lVar3);
      __this_01 = (__this->fields).JILLAJIPGFH;
      if (__this_01 != (System_Collections_Generic_List_MedalsScrollItem_FALGLCABJFN__o *)0x0) {
        DKMMBMBMJBO = (Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem_FALGLCABJFN_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_01,JDEFJPHCNMM,
                                 Method_System_Collections_Generic_List<MedalsScrollItem_FALGLCABJFN>_get_Item__
                                );
        Nekki_SF2_GUI_Dialogs_Raids_MedalsScrollItem__Init(__this_00,DKMMBMBMJBO,(MethodInfo *)0x0);
        return __this_00;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

