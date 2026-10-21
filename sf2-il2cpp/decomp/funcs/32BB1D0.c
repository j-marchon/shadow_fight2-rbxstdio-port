// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyDialog$$INMMEJPGBPO @ RVA 0x32BB1D0

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog__INMMEJPGBPO
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyDialog_o *__this,int32_t ELACKBJPMNB,
               BDMABHJEEGD_o *JOBNGBCPEGO,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_List_RaidDailyTaskCell__o *__this_02;
  System_Collections_Generic_List_GameObject__o *__this_03;
  Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_array *pNVar3;
  UnityEngine_GameObject_o *pUVar4;
  
  if ((DAT_04567491 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RaidDailyTaskCell>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RaidDailyTaskCell>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GameObject>_get_Item__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567491 = 1;
  }
  pUVar4 = (__this->fields)._raidDailyTaskCellPrefab;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pUVar4 = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)pUVar4,Method_UnityEngine_Object_Instantiate<GameObject>__);
  if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
     (__this_00 = (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *)
                  UnityEngine_GameObject__GetComponent<object>
                            (pUVar4,Method_UnityEngine_GameObject_GetComponent<RaidDailyTaskCell>__)
     , __this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *)0x0)) {
    Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__Init(__this_00,JOBNGBCPEGO,(MethodInfo *)0x0);
    __this_01 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    __this_03 = (__this->fields)._cellsPos;
    if ((__this_03 != (System_Collections_Generic_List_GameObject__o *)0x0) &&
       ((pUVar4 = (UnityEngine_GameObject_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_03,ELACKBJPMNB,
                             Method_System_Collections_Generic_List<GameObject>_get_Item__),
        pUVar4 != (UnityEngine_GameObject_o *)0x0 &&
        (parent = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0),
        __this_01 != (UnityEngine_Transform_o *)0x0)))) {
      UnityEngine_Transform__SetParent(__this_01,parent,false,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<RaidDailyTaskCell>_Add__;
      __this_02 = (__this->fields).CGNMDFAAHDA;
      if (__this_02 != (System_Collections_Generic_List_RaidDailyTaskCell__o *)0x0) {
        pNVar3 = (__this_02->fields)._items;
        (__this_02->fields)._version = (__this_02->fields)._version + 1;
        if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_array *)0x0) {
          uVar1 = (__this_02->fields)._size;
          if (uVar1 < (uint)pNVar3->max_length) {
            (__this_02->fields)._size = uVar1 + 1;
            pNVar3->m_Items[(int)uVar1] = __this_00;
            thunk_FUN_01c20e04(pNVar3->m_Items + (int)uVar1,__this_00);
            return;
          }
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_02,
                     (Il2CppObject *)__this_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

