// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanInfoView$$UpdateContent @ RVA 0x306BF98

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView__UpdateContent
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  bool bVar5;
  System_Collections_Generic_List_object__o *__this_00;
  LabelButton_o *pLVar6;
  UnityEngine_GameObject_o *pUVar7;
  EEGDOGKBLNG_o *pEVar8;
  KAMBBJFPLGM_o *__this_01;
  System_Object_array *pSVar9;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04565f3c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&OJEHKJHEBID_TypeInfo);
    FUN_01bab630(&StringLiteral_5633);
    FUN_01bab630(&StringLiteral_5632);
    FUN_01bab630(&StringLiteral_5635);
    FUN_01bab630(&StringLiteral_5631);
    FUN_01bab630(&StringLiteral_5634);
    DAT_04565f3c = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if (IMMNELPBGIF == (Il2CppObject *)0x0) {
    IMMNELPBGIF = (Il2CppObject *)0x0;
  }
  else if (IMMNELPBGIF->klass != (Il2CppClass *)OJEHKJHEBID_TypeInfo) {
    IMMNELPBGIF = (Il2CppObject *)0x0;
  }
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanInfoView__FBOJOIDGJBJ
            (__this,(OJEHKJHEBID_o *)IMMNELPBGIF,method);
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  pIVar3 = StringLiteral_5634;
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar9 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar9 != (System_Object_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar9->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar9->m_Items[(int)uVar1] = pIVar3;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,pIVar3,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      pIVar3 = StringLiteral_5631;
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      pSVar9 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pSVar9 != (System_Object_array *)0x0) {
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pSVar9->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pSVar9->m_Items[(int)uVar1] = pIVar3;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_00,pIVar3,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        pIVar3 = StringLiteral_5632;
        lVar2 = Method_System_Collections_Generic_List<string>_Add__;
        pSVar9 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pSVar9 != (System_Object_array *)0x0) {
          uVar1 = (__this_00->fields)._size;
          if (uVar1 < (uint)pSVar9->max_length) {
            (__this_00->fields)._size = uVar1 + 1;
            pSVar9->m_Items[(int)uVar1] = pIVar3;
            thunk_FUN_01c20e04();
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_00,pIVar3,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          pIVar3 = StringLiteral_5633;
          lVar2 = Method_System_Collections_Generic_List<string>_Add__;
          pSVar9 = (__this_00->fields)._items;
          (__this_00->fields)._version = (__this_00->fields)._version + 1;
          if (pSVar9 != (System_Object_array *)0x0) {
            uVar1 = (__this_00->fields)._size;
            if (uVar1 < (uint)pSVar9->max_length) {
              (__this_00->fields)._size = uVar1 + 1;
              pSVar9->m_Items[(int)uVar1] = pIVar3;
              thunk_FUN_01c20e04();
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_00,pIVar3,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            pIVar3 = StringLiteral_5635;
            lVar2 = Method_System_Collections_Generic_List<string>_Add__;
            pSVar9 = (__this_00->fields)._items;
            (__this_00->fields)._version = (__this_00->fields)._version + 1;
            if (pSVar9 != (System_Object_array *)0x0) {
              uVar1 = (__this_00->fields)._size;
              if (uVar1 < (uint)pSVar9->max_length) {
                (__this_00->fields)._size = uVar1 + 1;
                pSVar9->m_Items[(int)uVar1] = pIVar3;
                thunk_FUN_01c20e04();
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          (__this_00,pIVar3,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
              System_Collections_Generic_List<object>__GetEnumerator
                        (&local_68,__this_00,
                         Method_System_Collections_Generic_List<string>_GetEnumerator__);
              bVar5 = false;
              local_50.fields._index = local_68.fields._index;
              local_50.fields._version = local_68.fields._version;
              local_50.fields._list = local_68.fields._list;
              local_50.fields._current = local_68.fields._current;
              while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                       (&local_50,
                                        Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__
                                       ), bVar4) {
                bVar4 = DOCPIHOLNOA__BJBGLBAEIJB
                                  ((__this->fields).FBILHKCKHEJ,
                                   (System_String_o *)local_50.fields._current,
                                   (__this->fields).AMEAGHFFDFI,(MethodInfo *)0x0);
                bVar5 = (bool)(bVar5 | bVar4);
              }
              System_Collections_Generic_List_Enumerator<object>__Dispose
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
              pLVar6 = (__this->fields)._closeBtn;
                    /* try { // try from 0316c330 to 0326c427 has its CatchHandler @ 0316c330
                       catch() { ... } // from try @ 0316c330 with catch @ 0316c330
                       catch() { ... } // from try @ 0316c460 with catch @ 0316c330
                       catch() { ... } // from try @ 0316c620 with catch @ 0316c330
                       catch() { ... } // from try @ 0316c6a0 with catch @ 0316c330 */
              if ((pLVar6 != (LabelButton_o *)0x0) &&
                 (pUVar7 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0),
                 pUVar7 != (UnityEngine_GameObject_o *)0x0)) {
                UnityEngine_GameObject__SetActive(pUVar7,true,(MethodInfo *)0x0);
                pLVar6 = (__this->fields)._editBtn;
                if ((pLVar6 != (LabelButton_o *)0x0) &&
                   (pUVar7 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0),
                   pUVar7 != (UnityEngine_GameObject_o *)0x0)) {
                  UnityEngine_GameObject__SetActive(pUVar7,bVar5,(MethodInfo *)0x0);
                  pLVar6 = (__this->fields)._joinBtn;
                  if (pLVar6 != (LabelButton_o *)0x0) {
                    pUVar7 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pLVar6,(MethodInfo *)0x0);
                    if (bVar5 == false) {
                      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      pEVar8 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                      if (pEVar8 == (EEGDOGKBLNG_o *)0x0) goto LAB_0316c3ec;
                      __this_01 = (pEVar8->fields).MLAAJICBOAD;
                      if (__this_01 == (KAMBBJFPLGM_o *)0x0) {
                        bVar5 = true;
                      }
                      else {
                        bVar5 = KAMBBJFPLGM__ODJAMCJCHGG(__this_01,(MethodInfo *)0x0);
                        bVar5 = !bVar5;
                      }
                    }
                    else {
                      bVar5 = false;
                    }
                    if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                      UnityEngine_GameObject__SetActive(pUVar7,bVar5,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0316c3ec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

