// Nekki.SF2.GUI.Common.SceneMenuScroll$$JOAGGADHIEE @ RVA 0x30BBBE4

void Nekki_SF2_GUI_Common_SceneMenuScroll__JOAGGADHIEE
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,int32_t INLIKJJNIIE,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  UnityEngine_Transform_o *pUVar4;
  Nekki_SF2_GUI_Common_SceneSelector_o *__this_00;
  Nekki_SF2_GUI_Common_SceneMenuScroll_o **ppNVar5;
  System_Collections_Generic_List_T__o *__this_01;
  System_Collections_Generic_List_SceneSelector__o *__this_02;
  System_Object_array *pSVar6;
  Nekki_SF2_GUI_Common_SceneSelector_array *pNVar7;
  UnityEngine_GameObject_o *pUVar8;
  
  if ((DAT_04566244 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<SceneSelector>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<SceneSelector>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DBMPKPJGIPI>_Add__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566244 = 1;
  }
  bVar3 = MEJPIPJPKNP__CAMOIKJFFNC(INLIKJJNIIE,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar8 = (__this->fields)._SceneSelectorPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar8 = (UnityEngine_GameObject_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pUVar8,Method_UnityEngine_Object_Instantiate<GameObject>__);
    if ((pUVar8 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar4 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent
                (pUVar4,(UnityEngine_Transform_o *)(__this->fields)._SceneSelectorsParent,false,
                 (MethodInfo *)0x0);
      pUVar4 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_localEulerAngles
                  (pUVar4,(UnityEngine_Vector3_o)(ZEXT412(0x43870000) << 0x40),(MethodInfo *)0x0);
        __this_00 = (Nekki_SF2_GUI_Common_SceneSelector_o *)
                    UnityEngine_GameObject__GetComponent<object>
                              (pUVar8,Method_UnityEngine_GameObject_GetComponent<SceneSelector>__);
        if (__this_00 != (Nekki_SF2_GUI_Common_SceneSelector_o *)0x0) {
          ppNVar5 = &(__this_00->fields).MKAAKGJNBHI;
          *ppNVar5 = __this;
          thunk_FUN_01c20e04(ppNVar5,__this);
          Nekki_SF2_GUI_Common_SceneSelector__set_TargetScene
                    (__this_00,INLIKJJNIIE,(MethodInfo *)0x0);
          lVar2 = Method_System_Collections_Generic_List<DBMPKPJGIPI>_Add__;
          __this_01 = (System_Collections_Generic_List_T__o *)(__this->fields).BNLLNJDLGJB;
          if (__this_01 != (System_Collections_Generic_List_T__o *)0x0) {
            pSVar6 = (__this_01->fields)._items;
            (__this_01->fields)._version = (__this_01->fields)._version + 1;
            if (pSVar6 != (System_Object_array *)0x0) {
              uVar1 = (__this_01->fields)._size;
              if (uVar1 < (uint)pSVar6->max_length) {
                (__this_01->fields)._size = uVar1 + 1;
                *(int32_t *)((long)pSVar6->m_Items + (long)(int)uVar1 * 4) = INLIKJJNIIE;
              }
              else {
                System_Collections_Generic_List<Int32Enum>__AddWithResize
                          (__this_01,INLIKJJNIIE,
                           *(MethodInfo_26C9F28 **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
              lVar2 = Method_System_Collections_Generic_List<SceneSelector>_Add__;
              __this_02 = (__this->fields).FGIFPAPGJJN;
              if (__this_02 != (System_Collections_Generic_List_SceneSelector__o *)0x0) {
                pNVar7 = (__this_02->fields)._items;
                (__this_02->fields)._version = (__this_02->fields)._version + 1;
                if (pNVar7 != (Nekki_SF2_GUI_Common_SceneSelector_array *)0x0) {
                  uVar1 = (__this_02->fields)._size;
                  if (uVar1 < (uint)pNVar7->max_length) {
                    (__this_02->fields)._size = uVar1 + 1;
                    pNVar7->m_Items[(int)uVar1] = __this_00;
                    thunk_FUN_01c20e04(pNVar7->m_Items + (int)uVar1,__this_00);
                    return;
                  }
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_02,
                             (Il2CppObject *)__this_00,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
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
  return;
}

