// Nekki.SF2.GUI.Map.MapButtonsPanel$$AddMapButtons @ RVA 0x3593448

/* WARNING: Removing unreachable block (ram,0x036938d8) */
/* WARNING: Removing unreachable block (ram,0x0369364c) */

void Nekki_SF2_GUI_Map_MapButtonsPanel__AddMapButtons
               (Nekki_SF2_GUI_Map_MapButtonsPanel_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  NCNJEIBHGBH_o *__this_00;
  System_Collections_Generic_List_MapButton__o *pSVar3;
  System_String_o *a;
  System_String_o *b;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *parent;
  FKNCNNOOOIO_o *pFVar5;
  FKNCNNOOOIO_o *pFVar6;
  System_Collections_Generic_List_MapButton__o **ppSVar7;
  System_Collections_Generic_List_MapButton__o *__this_02;
  UnityEngine_Transform_o *pUVar8;
  Nekki_SF2_GUI_Map_MapButton_o *__this_03;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04568d8a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MapButton>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MapButton>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MapButton>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MapButton>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MapButton>_Remove__);
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_15551);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568d8a = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  ppSVar7 = &(__this->fields).KMGFNKKPGIH;
  __this_02 = *ppSVar7;
  __this_00 = NCNJEIBHGBH__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (NCNJEIBHGBH_o *)0x0) {
    pSVar3 = NCNJEIBHGBH__LEOLPAJFBLF(__this_00,(__this->fields)._MapButtonPrefab,(MethodInfo *)0x0)
    ;
    (__this->fields).KMGFNKKPGIH = pSVar3;
    thunk_FUN_01c20e04(ppSVar7,pSVar3);
    pSVar3 = (__this->fields).KMGFNKKPGIH;
    if (pSVar3 != (System_Collections_Generic_List_MapButton__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_b8,(System_Collections_Generic_List_object__o *)pSVar3,
                 Method_System_Collections_Generic_List<MapButton>_GetEnumerator__);
      local_80.fields._index = local_b8.fields._index;
      local_80.fields._version = local_b8.fields._version;
      local_80.fields._list = local_b8.fields._list;
      local_80.fields._current = local_b8.fields._current;
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<MapButton>_MoveNext__
                               ), pIVar1 = local_80.fields._current, bVar2) {
        if (__this_02 == (System_Collections_Generic_List_MapButton__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_b8,(System_Collections_Generic_List_object__o *)__this_02,
                   Method_System_Collections_Generic_List<MapButton>_GetEnumerator__);
        local_a0.fields._index = local_b8.fields._index;
        local_a0.fields._version = local_b8.fields._version;
        local_a0.fields._list = local_b8.fields._list;
        local_a0.fields._current = local_b8.fields._current;
        do {
          do {
            bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (&local_a0,
                               Method_System_Collections_Generic_List_Enumerator<MapButton>_MoveNext__
                              );
            __this_03 = (Nekki_SF2_GUI_Map_MapButton_o *)local_a0.fields._current;
            if (!bVar2) {
              __this_03 = (Nekki_SF2_GUI_Map_MapButton_o *)0x0;
              goto LAB_03693630;
            }
            if ((Nekki_SF2_GUI_Map_MapButton_o *)pIVar1 == (Nekki_SF2_GUI_Map_MapButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            a = UnityEngine_Object__get_name((UnityEngine_Object_o *)pIVar1,(MethodInfo *)0x0);
            if (__this_03 == (Nekki_SF2_GUI_Map_MapButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            b = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_03,(MethodInfo *)0x0);
            bVar2 = System_String__op_Inequality(a,b,(MethodInfo *)0x0);
          } while (bVar2);
          pFVar5 = ((Nekki_SF2_GUI_Map_MapButton_Fields *)((long)pIVar1 + 0x10))->AEPNEAIEKOL;
          if (pFVar5 == (FKNCNNOOOIO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pFVar6 = ((Nekki_SF2_GUI_Map_MapButton_Fields *)((long)__this_03 + 0x10))->AEPNEAIEKOL;
          if (pFVar6 == (FKNCNNOOOIO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar2 = System_String__op_Inequality
                            ((pFVar5->fields).KPDPJONADPJ,(pFVar6->fields).KPDPJONADPJ,
                             (MethodInfo *)0x0);
        } while (bVar2);
LAB_03693630:
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_a0,Method_System_Collections_Generic_List_Enumerator<MapButton>_Dispose__)
        ;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar2) {
          if ((Nekki_SF2_GUI_Map_MapButton_o *)pIVar1 == (Nekki_SF2_GUI_Map_MapButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pIVar1,(MethodInfo *)0x0);
          if (__this_03 == (Nekki_SF2_GUI_Map_MapButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          __this_01 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
          if (__this_01 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar2 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
          if (pUVar4 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          UnityEngine_GameObject__SetActive(pUVar4,bVar2,(MethodInfo *)0x0);
          System_Collections_Generic_List<object>__Remove
                    ((System_Collections_Generic_List_object__o *)__this_02,
                     (Il2CppObject *)__this_03,
                     Method_System_Collections_Generic_List<MapButton>_Remove__);
          pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
          Util__JODGPLBHHIA(pUVar4,false,(MethodInfo *)0x0);
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<MapButton>_Dispose__);
      if (*ppSVar7 != (System_Collections_Generic_List_MapButton__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_b8,(System_Collections_Generic_List_object__o *)*ppSVar7,
                   Method_System_Collections_Generic_List<MapButton>_GetEnumerator__);
        local_80.fields._index = local_b8.fields._index;
        local_80.fields._version = local_b8.fields._version;
        local_80.fields._list = local_b8.fields._list;
        local_80.fields._current = local_b8.fields._current;
        do {
          bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_80,
                             Method_System_Collections_Generic_List_Enumerator<MapButton>_MoveNext__
                            );
          pIVar1 = local_80.fields._current;
          if (!bVar2) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<MapButton>_Dispose__);
            if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            OCLJMFBDKOA__HKGFEJGHMGM(StringLiteral_15551,StringLiteral_1,(MethodInfo *)0x0);
            return;
          }
          if ((Nekki_SF2_GUI_Map_MapButton_o *)local_80.fields._current ==
              (Nekki_SF2_GUI_Map_MapButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pFVar5 = ((Nekki_SF2_GUI_Map_MapButton_Fields *)((long)local_80.fields._current + 0x10))->
                   AEPNEAIEKOL;
          if (pFVar5 == (FKNCNNOOOIO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if ((pFVar5->fields).OEFBIKEMBOF == false) {
LAB_036937f0:
            pUVar8 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pIVar1,(MethodInfo *)0x0);
            parent = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            UnityEngine_Transform__SetParent(pUVar8,parent,false,(MethodInfo *)0x0);
          }
          else {
            pUVar8 = (__this->fields)._ActionsPanel;
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar2 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (!bVar2) goto LAB_036937f0;
            pUVar8 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pIVar1,(MethodInfo *)0x0);
            if (pUVar8 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            UnityEngine_Transform__SetParent
                      (pUVar8,(__this->fields)._ActionsPanel,false,(MethodInfo *)0x0);
          }
          Nekki_SF2_GUI_Map_MapButton__Refresh
                    ((Nekki_SF2_GUI_Map_MapButton_o *)pIVar1,(MethodInfo *)0x0);
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

