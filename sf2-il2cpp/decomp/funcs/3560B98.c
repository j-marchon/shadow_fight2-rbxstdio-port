// Nekki.SF2.Core.Fights.ModelContainer$$BDHAMOEKNNK @ RVA 0x3560B98

void Nekki_SF2_Core_Fights_ModelContainer__BDHAMOEKNNK
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  int32_t iVar5;
  System_Collections_Generic_List_OLKKAIFGGAK__o *pSVar6;
  UnityEngine_GameObject_o *__this_00;
  IPPEHAJADOO_o *__this_01;
  MethodInfo *method_00;
  KHEDNGODOIC_o *pKVar7;
  OLKKAIFGGAK_array *pOVar8;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04568bca & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Count__);
    DAT_04568bca = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if ((__this->fields).HCDEJEHGGDJ == false) {
    return;
  }
  pSVar6 = (__this->fields).EHJHKEEDKBE;
  if (pSVar6 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)pSVar6,
               Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_60,
                              Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__
                             ), pIVar3 = local_60.fields._current, bVar4) {
      if ((__this->fields).JAKNPPAIFCC == false) {
        if ((OLKKAIFGGAK_o *)local_60.fields._current == (OLKKAIFGGAK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        iVar5 = OLKKAIFGGAK__MKIHMHHJLHE
                          ((OLKKAIFGGAK_o *)local_60.fields._current,(MethodInfo *)0x0);
        if (iVar5 != -1) {
          pKVar7 = (__this->fields).ANDGPHHMNMC;
          (__this->fields).JAKNPPAIFCC = true;
          if (pKVar7 == (KHEDNGODOIC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          __this_00 = (pKVar7->fields).LDAKOINICNJ;
          if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
        }
      }
      else if ((OLKKAIFGGAK_o *)local_60.fields._current == (OLKKAIFGGAK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      OLKKAIFGGAK__BDHAMOEKNNK((OLKKAIFGGAK_o *)pIVar3,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
    pSVar6 = (__this->fields).AGOBPAPPBEM;
    if (pSVar6 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
      if (0 < (pSVar6->fields)._size) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_78,(System_Collections_Generic_List_object__o *)pSVar6,
                   Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
        local_60.fields._index = local_78.fields._index;
        local_60.fields._version = local_78.fields._version;
        local_60.fields._list = local_78.fields._list;
        local_60.fields._current = local_78.fields._current;
        while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_60,
                                  Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__
                                 ), pIVar3 = local_60.fields._current, bVar4) {
          if ((OLKKAIFGGAK_o *)local_60.fields._current == (OLKKAIFGGAK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          OLKKAIFGGAK__BDHAMOEKNNK((OLKKAIFGGAK_o *)local_60.fields._current,(MethodInfo *)0x0);
          lVar2 = Method_System_Collections_Generic_List<OLKKAIFGGAK>_Add__;
          pSVar6 = (__this->fields).EHJHKEEDKBE;
          if (pSVar6 == (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pOVar8 = (pSVar6->fields)._items;
          (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
          if (pOVar8 == (OLKKAIFGGAK_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar1 = (pSVar6->fields)._size;
          if (uVar1 < (uint)pOVar8->max_length) {
            (pSVar6->fields)._size = uVar1 + 1;
            pOVar8->m_Items[(int)uVar1] = (OLKKAIFGGAK_o *)pIVar3;
            thunk_FUN_01c20e04(pOVar8->m_Items + (int)uVar1,pIVar3);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar6,pIVar3,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
        pSVar6 = (__this->fields).AGOBPAPPBEM;
        if (pSVar6 == (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) goto LAB_03660e38;
        iVar5 = (pSVar6->fields)._size;
        (pSVar6->fields)._size = 0;
        (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
        if (0 < iVar5) {
          System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar5,(MethodInfo *)0x0);
        }
      }
      __this_01 = (__this->fields).CAGHFDGCFPG;
      if (__this_01 != (IPPEHAJADOO_o *)0x0) {
        IPPEHAJADOO__BDHAMOEKNNK(__this_01,(MethodInfo *)0x0);
        pKVar7 = (__this->fields).ANDGPHHMNMC;
        if (pKVar7 != (KHEDNGODOIC_o *)0x0) {
          KHEDNGODOIC__HFCJLBGBGPI(pKVar7,(MethodInfo *)0x0);
          Nekki_SF2_Core_Fights_ModelContainer__PKCCGFBBOFM(__this,method_00);
          return;
        }
      }
    }
  }
LAB_03660e38:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

