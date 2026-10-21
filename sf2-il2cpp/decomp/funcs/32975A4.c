// Nekki.SF2.GUI.Profile.PerkContent$$GDBCBFBCBLL @ RVA 0x32975A4

void Nekki_SF2_GUI_Profile_PerkContent__GDBCBFBCBLL
               (Nekki_SF2_GUI_Profile_PerkContent_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  int32_t iVar3;
  bool bVar4;
  ECENNHNBAME_o *__this_00;
  GBKCLIFGIFN_o *pGVar5;
  System_Collections_Generic_List_int__o *pSVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  Nekki_SF2_GUI_Profile_KeyIcon_o *pNVar9;
  System_Collections_Generic_List_KeyIcon__o *pSVar10;
  Nekki_SF2_GUI_Profile_KeyIcon_array *pNVar11;
  UnityEngine_GameObject_o *pUVar12;
  NKOIBKNPICN_o *pNVar13;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  undefined1 local_80 [16];
  Il2CppObject *local_70;
  
  if ((DAT_04567372 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyIcon>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Count__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_4510);
    DAT_04567372 = 1;
  }
  local_80._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_80._8_4_ = 0;
  local_80._12_4_ = 0;
  local_70 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).GGGJLIBFAOI;
  if ((((__this_00 != (ECENNHNBAME_o *)0x0) &&
       (pGVar5 = ECENNHNBAME__OCLGKBPDEBI(__this_00,(MethodInfo *)0x0),
       pGVar5 != (GBKCLIFGIFN_o *)0x0)) &&
      (pNVar13 = (pGVar5->fields).LCDJLCMFMEO, pNVar13 != (NKOIBKNPICN_o *)0x0)) &&
     (pSVar6 = (pNVar13->fields).KJNPENJKBKD,
     pSVar6 != (System_Collections_Generic_List_int__o *)0x0)) {
    System_Collections_Generic_List<int>__GetEnumerator
              (&local_98,pSVar6,Method_System_Collections_Generic_List<int>_GetEnumerator__);
    local_80._8_4_ = local_98.fields._index;
    local_80._12_4_ = local_98.fields._version;
    local_80._0_8_ = local_98.fields._list;
    local_70 = local_98.fields._current;
    while (bVar4 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                             ((System_Collections_Generic_List_Enumerator_int__o *)local_80,
                              Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__),
          bVar4) {
      pUVar7 = (__this->fields)._Keys;
      if (pUVar7 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar3 = (int32_t)local_70;
      pUVar12 = (__this->fields)._KeyIconPrefab;
      pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
      pNVar9 = Nekki_SF2_GUI_Profile_KeyIcon__Instantiate(iVar3,pUVar12,pUVar8,(MethodInfo *)0x0);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<KeyIcon>_Add__;
      if (bVar4) {
        pSVar10 = (__this->fields).CHKIKLICNBL;
        if (pSVar10 == (System_Collections_Generic_List_KeyIcon__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pNVar11 = (pSVar10->fields)._items;
        (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
        if (pNVar11 == (Nekki_SF2_GUI_Profile_KeyIcon_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (pSVar10->fields)._size;
        if (uVar1 < (uint)pNVar11->max_length) {
          (pSVar10->fields)._size = uVar1 + 1;
          pNVar11->m_Items[(int)uVar1] = pNVar9;
          thunk_FUN_01c20e04(pNVar11->m_Items + (int)uVar1,pNVar9);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)pNVar9,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    System_Collections_Generic_List_Enumerator<int>__Dispose
              ((System_Collections_Generic_List_Enumerator_int__o *)local_80,
               Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
    pSVar6 = (pNVar13->fields).KJNPENJKBKD;
    if (pSVar6 != (System_Collections_Generic_List_int__o *)0x0) {
      if (0 < (pSVar6->fields)._size) {
        pUVar7 = (__this->fields)._Keys;
        if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto LAB_03397960;
        pUVar12 = (__this->fields)._KeyIconPrefab;
        pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
        pNVar9 = Nekki_SF2_GUI_Profile_KeyIcon__Instantiate
                           (StringLiteral_4510,0.0,pUVar12,pUVar8,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<KeyIcon>_Add__;
        pSVar10 = (__this->fields).CHKIKLICNBL;
        if (pSVar10 == (System_Collections_Generic_List_KeyIcon__o *)0x0) goto LAB_03397960;
        pNVar11 = (pSVar10->fields)._items;
        (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
        if (pNVar11 == (Nekki_SF2_GUI_Profile_KeyIcon_array *)0x0) goto LAB_03397960;
        uVar1 = (pSVar10->fields)._size;
        if (uVar1 < (uint)pNVar11->max_length) {
          (pSVar10->fields)._size = uVar1 + 1;
          pNVar11->m_Items[(int)uVar1] = pNVar9;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)pNVar9,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
      pSVar6 = (pNVar13->fields).OOIGOEAHPMA;
      if (pSVar6 != (System_Collections_Generic_List_int__o *)0x0) {
        System_Collections_Generic_List<int>__GetEnumerator
                  (&local_98,pSVar6,Method_System_Collections_Generic_List<int>_GetEnumerator__);
        local_80._8_4_ = local_98.fields._index;
        local_80._12_4_ = local_98.fields._version;
        local_80._0_8_ = local_98.fields._list;
        local_70 = local_98.fields._current;
        while( true ) {
          do {
            bVar4 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                              ((System_Collections_Generic_List_Enumerator_int__o *)local_80,
                               Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__);
            if (!bVar4) {
              System_Collections_Generic_List_Enumerator<int>__Dispose
                        ((System_Collections_Generic_List_Enumerator_int__o *)local_80,
                         Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
              return;
            }
            pUVar7 = (__this->fields)._Keys;
            if (pUVar7 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            iVar3 = (int32_t)local_70;
            pUVar12 = (__this->fields)._KeyIconPrefab;
            pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
            pNVar9 = Nekki_SF2_GUI_Profile_KeyIcon__Instantiate
                               (iVar3,pUVar12,pUVar8,(MethodInfo *)0x0);
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar4 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            lVar2 = Method_System_Collections_Generic_List<KeyIcon>_Add__;
          } while (!bVar4);
          pSVar10 = (__this->fields).CHKIKLICNBL;
          if (pSVar10 == (System_Collections_Generic_List_KeyIcon__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pNVar11 = (pSVar10->fields)._items;
          (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
          if (pNVar11 == (Nekki_SF2_GUI_Profile_KeyIcon_array *)0x0) break;
          uVar1 = (pSVar10->fields)._size;
          if (uVar1 < (uint)pNVar11->max_length) {
            (pSVar10->fields)._size = uVar1 + 1;
            pNVar11->m_Items[(int)uVar1] = pNVar9;
            thunk_FUN_01c20e04(pNVar11->m_Items + (int)uVar1,pNVar9);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)pNVar9,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
  }
LAB_03397960:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

