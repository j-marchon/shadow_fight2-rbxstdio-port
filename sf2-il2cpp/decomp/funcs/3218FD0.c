// Nekki.SF2.GUI.Map.BattlePrize$$AddItem @ RVA 0x3218FD0

void Nekki_SF2_GUI_Map_BattlePrize__AddItem
               (Nekki_SF2_GUI_Map_BattlePrize_o *__this,HOOAAGABMBL_o *IHGFKLOLPOK,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_String_o *pSVar3;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  UnityEngine_GameObject_o *pUVar5;
  System_Collections_Generic_List_BattlePrizeElement__o *__this_00;
  MethodInfo *method_00;
  Nekki_SF2_GUI_ResolutionImageAvatar_o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04566ee6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattlePrizeElement>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BattlePrizeElement>_MoveNext__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<BattlePrizeElement>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<BattlePrizeElement>_GetEnumerator__);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_ResolutionImageAvatar_TypeInfo);
    FUN_01bab630(&StringLiteral_11751);
    DAT_04566ee6 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if (IHGFKLOLPOK != (HOOAAGABMBL_o *)0x0) {
    bVar2 = System_String__op_Equality
                      ((IHGFKLOLPOK->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_11751,
                       (MethodInfo *)0x0);
    if (bVar2) {
      __this_01 = (Nekki_SF2_GUI_ResolutionImageAvatar_o *)(__this->fields)._itemIcon;
      if (__this_01 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
        bVar1 = (Nekki_SF2_GUI_ResolutionImageAvatar_TypeInfo->_2).naturalAligment;
        if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
           ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
            (Il2CppClass *)Nekki_SF2_GUI_ResolutionImageAvatar_TypeInfo)) {
          Nekki_SF2_GUI_ResolutionImageAvatar__UseHighModeOnly(__this_01,(MethodInfo *)0x0);
          __this_01 = (Nekki_SF2_GUI_ResolutionImageAvatar_o *)(__this->fields)._itemIcon;
        }
      }
      if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = MGENAMAJALB__OPLAHNAJGAJ((MethodInfo *)0x0);
    }
    else {
      __this_01 = (Nekki_SF2_GUI_ResolutionImageAvatar_o *)(__this->fields)._itemIcon;
      if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
    }
    if (__this_01 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
      *(System_String_o **)&(__this_01->fields).super.super.m_PixelsPerUnitMultiplier = pSVar3;
      thunk_FUN_01c20e04(&(__this_01->fields).super.super.m_PixelsPerUnitMultiplier);
      pNVar4 = (__this->fields)._itemIcon;
      if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                  (pNVar4,(IHGFKLOLPOK->fields)._GPEFIOMJHNN_k__BackingField,(MethodInfo *)0x0);
        pNVar4 = (__this->fields)._itemIcon;
        if ((pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (pUVar5 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
           pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
          pNVar4 = (__this->fields)._itemIcon;
          if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
            UnityEngine_UI_Image__set_preserveAspect
                      ((UnityEngine_UI_Image_o *)pNVar4,true,(MethodInfo *)0x0);
            __this_00 = (__this->fields).JMAMFIMIIFA;
            if (__this_00 != (System_Collections_Generic_List_BattlePrizeElement__o *)0x0) {
              System_Collections_Generic_List<object>__GetEnumerator
                        (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
                         Method_System_Collections_Generic_List<BattlePrizeElement>_GetEnumerator__)
              ;
              while( true ) {
                bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                  (&local_38,
                                   Method_System_Collections_Generic_List_Enumerator<BattlePrizeElement>_MoveNext__
                                  );
                if (!bVar2) {
                  System_Collections_Generic_List_Enumerator<object>__Dispose
                            (&local_38,
                             Method_System_Collections_Generic_List_Enumerator<BattlePrizeElement>_Dispose__
                            );
                  Nekki_SF2_GUI_Map_BattlePrize__ODOKFKCAILG(__this,method_00);
                  return;
                }
                if ((UnityEngine_Component_o *)local_38.fields._current ==
                    (UnityEngine_Component_o *)0x0) break;
                pUVar5 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)local_38.fields._current,
                                    (MethodInfo *)0x0);
                if (pUVar5 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
              }
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

