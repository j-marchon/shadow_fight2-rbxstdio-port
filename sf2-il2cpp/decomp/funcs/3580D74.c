// Nekki.SF2.GUI.Dialogs.EventDialog$$GKPJMHOFIOO @ RVA 0x3580D74

void Nekki_SF2_GUI_Dialogs_EventDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_EventDialog_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_MapButton__o *GAONIMDGFFK;
  System_Collections_Generic_List_MapButton__o *LPEEDKHBKGA;
  NCNJEIBHGBH_o *pNVar3;
  System_Collections_Generic_List_MapButton__o *AGJFKCDJLBE;
  Nekki_SF2_GUI_Map_MapButton_o *pNVar4;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *in_x4;
  Nekki_SF2_GUI_Map_MapButton_array *pNVar5;
  Nekki_SF2_GUI_Map_MapButton_o **ppNVar6;
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  if ((DAT_04568ccf & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_EventDialog_JOCHGEBKLMM__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MapButton>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MapButton>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MapButton>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04568ccf = 1;
  }
  UnityEngine_TransformExtensions__DeleteAllChildrenObjects
            ((UnityEngine_Transform_o *)(__this->fields)._storyParent1,(MethodInfo *)0x0);
  UnityEngine_TransformExtensions__DeleteAllChildrenObjects
            ((UnityEngine_Transform_o *)(__this->fields)._storyParent2,(MethodInfo *)0x0);
  UnityEngine_TransformExtensions__DeleteAllChildrenObjects
            ((UnityEngine_Transform_o *)(__this->fields)._raidParent1,(MethodInfo *)0x0);
  UnityEngine_TransformExtensions__DeleteAllChildrenObjects
            ((UnityEngine_Transform_o *)(__this->fields)._raidParent2,(MethodInfo *)0x0);
  GAONIMDGFFK = (System_Collections_Generic_List_MapButton__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<MapButton>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)GAONIMDGFFK,
             Method_System_Collections_Generic_List<MapButton>__ctor__);
  LPEEDKHBKGA = (System_Collections_Generic_List_MapButton__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<MapButton>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)LPEEDKHBKGA,
             Method_System_Collections_Generic_List<MapButton>__ctor__);
  pNVar3 = NCNJEIBHGBH__AIHNLLGNBLC((MethodInfo *)0x0);
  if (pNVar3 != (NCNJEIBHGBH_o *)0x0) {
    AGJFKCDJLBE = NCNJEIBHGBH__LLNADPGEEEJ
                            (pNVar3,(__this->fields)._mapButtonPrefab,(MethodInfo *)0x0);
    pNVar3 = NCNJEIBHGBH__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pNVar3 != (NCNJEIBHGBH_o *)0x0) {
      pNVar4 = NCNJEIBHGBH__CANNODKGOME(pNVar3,(__this->fields)._mapButtonPrefab,(MethodInfo *)0x0);
      ppNVar6 = &(__this->fields).JDAMBHONLJH;
      *ppNVar6 = pNVar4;
      thunk_FUN_01c20e04(ppNVar6,pNVar4);
      if (*ppNVar6 != (Nekki_SF2_GUI_Map_MapButton_o *)0x0) {
        __this_00 = (UnityEngine_Events_UnityEvent_o *)((*ppNVar6)->fields).super.m_OnClick;
        call = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if ((__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) &&
           (UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0),
           lVar2 = Method_System_Collections_Generic_List<MapButton>_Add__,
           AGJFKCDJLBE != (System_Collections_Generic_List_MapButton__o *)0x0)) {
          pNVar4 = *ppNVar6;
          pNVar5 = (AGJFKCDJLBE->fields)._items;
          (AGJFKCDJLBE->fields)._version = (AGJFKCDJLBE->fields)._version + 1;
          if (pNVar5 != (Nekki_SF2_GUI_Map_MapButton_array *)0x0) {
            uVar1 = (AGJFKCDJLBE->fields)._size;
            if (uVar1 < (uint)pNVar5->max_length) {
              (AGJFKCDJLBE->fields)._size = uVar1 + 1;
              pNVar5->m_Items[(int)uVar1] = pNVar4;
              thunk_FUN_01c20e04();
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)AGJFKCDJLBE,
                         (Il2CppObject *)pNVar4,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            Nekki_SF2_GUI_Dialogs_EventDialog__PJNGIOALGDP
                      (__this,GAONIMDGFFK,LPEEDKHBKGA,AGJFKCDJLBE,in_x4);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

