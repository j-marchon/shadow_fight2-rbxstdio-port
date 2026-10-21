// Nekki.SF2.GUI.Fight.ActivePerkItemContainer$$AddActivePerk @ RVA 0x31D6630

void Nekki_SF2_GUI_Fight_ActivePerkItemContainer__AddActivePerk
               (Nekki_SF2_GUI_Fight_ActivePerkItemContainer_o *__this,
               Nekki_SF2_GUI_Fight_ActivePerkItem_o *EIKFGOCCOIE,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_List_ActivePerkItem__o *pSVar4;
  Il2CppObject *pIVar5;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  Nekki_SF2_GUI_Fight_ActivePerkItem_array *pNVar6;
  UnityEngine_Vector2_o value;
  
  if ((DAT_04566ce9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>_Sort__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ActivePerkItem>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04566ce9 = 1;
  }
  if (EIKFGOCCOIE != (Nekki_SF2_GUI_Fight_ActivePerkItem_o *)0x0) {
    __this_00 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)EIKFGOCCOIE,(MethodInfo *)0x0);
    parent = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent(__this_00,parent,false,(MethodInfo *)0x0);
      (EIKFGOCCOIE->fields)._HKOKBFOCJID_k__BackingField = 0;
      lVar2 = Method_System_Collections_Generic_List<ActivePerkItem>_Add__;
      pSVar4 = (__this->fields).DOKOOFIPJGJ;
      if (pSVar4 != (System_Collections_Generic_List_ActivePerkItem__o *)0x0) {
        pNVar6 = (pSVar4->fields)._items;
        (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
        if (pNVar6 != (Nekki_SF2_GUI_Fight_ActivePerkItem_array *)0x0) {
          uVar1 = (pSVar4->fields)._size;
          if (uVar1 < (uint)pNVar6->max_length) {
            (pSVar4->fields)._size = uVar1 + 1;
            pNVar6->m_Items[(int)uVar1] = EIKFGOCCOIE;
            thunk_FUN_01c20e04(pNVar6->m_Items + (int)uVar1,EIKFGOCCOIE);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar4,
                       (Il2CppObject *)EIKFGOCCOIE,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          pSVar4 = (__this->fields).DOKOOFIPJGJ;
          if (pSVar4 != (System_Collections_Generic_List_ActivePerkItem__o *)0x0) {
            System_Collections_Generic_List<object>__Sort
                      ((System_Collections_Generic_List_object__o *)pSVar4,
                       Method_System_Collections_Generic_List<ActivePerkItem>_Sort__);
            pSVar4 = (__this->fields).DOKOOFIPJGJ;
            if ((pSVar4 != (System_Collections_Generic_List_ActivePerkItem__o *)0x0) &&
               (pIVar5 = System_Collections_Generic_List<object>__get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar4,
                                    (pSVar4->fields)._size + -1,
                                    Method_System_Collections_Generic_List<ActivePerkItem>_get_Item__
                                   ), pIVar5 != (Il2CppObject *)0x0)) {
              *(int *)((long)&pIVar5[5].monitor + 4) = *(int *)((long)&pIVar5[5].monitor + 4) + 1;
              __this_01 = (UnityEngine_RectTransform_o *)
                          UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (__this_01 == (UnityEngine_RectTransform_o *)0x0) {
                __this_01 = (UnityEngine_RectTransform_o *)0x0;
              }
              else if (__this_01->klass != UnityEngine_RectTransform_TypeInfo) {
                __this_01 = (UnityEngine_RectTransform_o *)0x0;
              }
              __this_02 = (UnityEngine_RectTransform_o *)
                          UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)EIKFGOCCOIE,(MethodInfo *)0x0);
              if (__this_02 == (UnityEngine_RectTransform_o *)0x0) {
                __this_02 = (UnityEngine_RectTransform_o *)0x0;
              }
              else if (__this_02->klass != UnityEngine_RectTransform_TypeInfo) {
                __this_02 = (UnityEngine_RectTransform_o *)0x0;
              }
              if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              bVar3 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if (bVar3) {
                if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                bVar3 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if (bVar3) {
                  if ((__this_02 != (UnityEngine_RectTransform_o *)0x0) &&
                     (value = UnityEngine_RectTransform__get_sizeDelta(__this_02,(MethodInfo *)0x0),
                     __this_01 != (UnityEngine_RectTransform_o *)0x0)) {
                    UnityEngine_RectTransform__set_sizeDelta(__this_01,value,(MethodInfo *)0x0);
                    return;
                  }
                  goto LAB_032d6874;
                }
              }
              return;
            }
          }
        }
      }
    }
  }
LAB_032d6874:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

