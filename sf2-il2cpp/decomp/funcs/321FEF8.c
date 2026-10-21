// FPPKHNNABAD$$ICLGDHGNCBP @ RVA 0x321FEF8

bool FPPKHNNABAD__ICLGDHGNCBP(FPPKHNNABAD_o *__this,System_Type_o *ELBMPDIHAHA,MethodInfo *method)

{
  void **ppvVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  Il2CppObject *pIVar5;
  System_Func_TSource__bool__o *pSVar6;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  FPPKHNNABAD_o *pFVar7;
  LCKCDEKNLOA_o *pLVar8;
  int iVar9;
  System_Collections_Generic_List_BOFEMGGNODC__o *pSVar10;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04566f2c & 1) == 0) {
    FUN_01bab630(&AEFLBOOACFE_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_Any<BOFEMGGNODC>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BOFEMGGNODC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BOFEMGGNODC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BOFEMGGNODC>_get_Current__);
    FUN_01bab630(&System_Func<BOFEMGGNODC,_bool>_TypeInfo);
    FUN_01bab630(&Method_FPPKHNNABAD_KEBLPKFOJNI_HBCPAGHAAAJ__);
    FUN_01bab630(&Method_FPPKHNNABAD_KEBLPKFOJNI_OAHPGDEEAMB__);
    FUN_01bab630(&FPPKHNNABAD_KEBLPKFOJNI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BOFEMGGNODC>_GetEnumerator__);
    DAT_04566f2c = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pIVar5 = (Il2CppObject *)thunk_FUN_01bda818(FPPKHNNABAD_KEBLPKFOJNI_TypeInfo);
  System_Object___ctor(pIVar5,(MethodInfo *)0x0);
  if (pIVar5 != (Il2CppObject *)0x0) {
    pIVar5[1].klass = (Il2CppClass *)ELBMPDIHAHA;
    thunk_FUN_01c20e04(pIVar5 + 1,ELBMPDIHAHA);
    pLVar8 = (__this->fields).LBCPFBBIBCL;
    if (pLVar8 != (LCKCDEKNLOA_o *)0x0) {
      pSVar10 = (pLVar8->fields).NEIJJHEFLHP;
      pSVar6 = (System_Func_TSource__bool__o *)
               thunk_FUN_01bda818(System_Func<BOFEMGGNODC,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      bVar3 = System_Linq_Enumerable__Any<object>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar10,pSVar6,
                         Method_System_Linq_Enumerable_Any<BOFEMGGNODC>__);
      if (bVar3) {
        bVar3 = true;
      }
      else {
        pLVar8 = (__this->fields).LBCPFBBIBCL;
        if ((pLVar8 == (LCKCDEKNLOA_o *)0x0) ||
           (pSVar10 = (pLVar8->fields).NEIJJHEFLHP,
           pSVar10 == (System_Collections_Generic_List_BOFEMGGNODC__o *)0x0)) goto LAB_03320190;
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_98,(System_Collections_Generic_List_object__o *)pSVar10,
                   Method_System_Collections_Generic_List<BOFEMGGNODC>_GetEnumerator__);
        local_80.fields._index = local_98.fields._index;
        local_80.fields._version = local_98.fields._version;
        local_80.fields._list = local_98.fields._list;
        local_80.fields._current = local_98.fields._current;
        ppvVar1 = &pIVar5[1].monitor;
        do {
          do {
            do {
              do {
                bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                  (&local_80,
                                   Method_System_Collections_Generic_List_Enumerator<BOFEMGGNODC>_MoveNext__
                                  );
                pIVar5 = local_80.fields._current;
                if (!bVar3) {
                  iVar9 = 7;
                  goto LAB_03320150;
                }
              } while (local_80.fields._current == (Il2CppObject *)0x0);
              bVar2 = (AEFLBOOACFE_TypeInfo->_2).naturalAligment;
            } while ((((local_80.fields._current)->klass->_2).naturalAligment < bVar2) ||
                    (((local_80.fields._current)->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                     (Il2CppClass *)AEFLBOOACFE_TypeInfo));
            __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
            if (__this_00 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pFVar7 = Nekki_SF2_Core_Quests_QuestsManager__GetQuestByName
                               (__this_00,pIVar5[6].monitor,(MethodInfo *)0x0);
          } while (pFVar7 == (FPPKHNNABAD_o *)0x0);
          pLVar8 = (pFVar7->fields).LBCPFBBIBCL;
          if (pLVar8 == (LCKCDEKNLOA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar6 = *ppvVar1;
          pSVar10 = (pLVar8->fields).NEIJJHEFLHP;
          if (pSVar6 == (System_Func_TSource__bool__o *)0x0) {
            pSVar6 = (System_Func_TSource__bool__o *)
                     thunk_FUN_01bda818(System_Func<BOFEMGGNODC,_bool>_TypeInfo);
            System_Func<object,_bool>___ctor();
            *ppvVar1 = pSVar6;
            thunk_FUN_01c20e04(ppvVar1,pSVar6);
          }
          bVar4 = System_Linq_Enumerable__Any<object>
                            ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar10,pSVar6,
                             Method_System_Linq_Enumerable_Any<BOFEMGGNODC>__);
        } while (!bVar4);
        iVar9 = 6;
LAB_03320150:
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<BOFEMGGNODC>_Dispose__);
        bVar3 = bVar3 && iVar9 == 6;
      }
      return bVar3;
    }
  }
LAB_03320190:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

