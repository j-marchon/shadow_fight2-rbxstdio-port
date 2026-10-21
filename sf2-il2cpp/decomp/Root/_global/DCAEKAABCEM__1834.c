// TypeDefIndex 1834
// Namespace: 
// public class DCAEKAABCEM
// Fields:
//   private List<DCAEKAABCEM.CMGDCNNPGII> DFKCIDJHEEE; // 0x10

// ===== private void OBMDEPEMOHF()  [RVA 0x3221914]
// DCAEKAABCEM$$OBMDEPEMOHF @ RVA 0x3221914

void DCAEKAABCEM__OBMDEPEMOHF(DCAEKAABCEM_o *__this,MethodInfo *method)

{
  System_Comparison_DCAEKAABCEM_CMGDCNNPGII__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *__this_00;
  System_Comparison_DCAEKAABCEM_CMGDCNNPGII__o *comparison;
  
  if ((DAT_04566f3c & 1) == 0) {
    FUN_01bab630(&System_Comparison<DCAEKAABCEM_CMGDCNNPGII>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_Sort__);
    FUN_01bab630(&Method_DCAEKAABCEM_<>c_KHOHPHMBKAN__);
    FUN_01bab630(&DCAEKAABCEM_<>c_TypeInfo);
    DAT_04566f3c = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).DFKCIDJHEEE;
  if ((DCAEKAABCEM_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DCAEKAABCEM_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  comparison = DCAEKAABCEM_<>c_TypeInfo->static_fields->__9__10_0;
  if (comparison == (System_Comparison_DCAEKAABCEM_CMGDCNNPGII__o *)0x0) {
    if ((DCAEKAABCEM_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(DCAEKAABCEM_<>c_TypeInfo,method);
    }
    comparison = (System_Comparison_DCAEKAABCEM_CMGDCNNPGII__o *)
                 thunk_FUN_01bda818(System_Comparison<DCAEKAABCEM_CMGDCNNPGII>_TypeInfo);
    System_Comparison<object>___ctor();
    ppSVar1 = &DCAEKAABCEM_<>c_TypeInfo->static_fields->__9__10_0;
    *ppSVar1 = comparison;
    thunk_FUN_01c20e04(ppSVar1,comparison);
  }
  if (__this_00 != (System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *)0x0) {
    System_Collections_Generic_List<object>__Sort
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Comparison_T__o *)comparison,
               Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_Sort__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void IJFMHPOGMBA()  [RVA 0x3221A18]
// DCAEKAABCEM$$IJFMHPOGMBA @ RVA 0x3221A18

void DCAEKAABCEM__IJFMHPOGMBA(DCAEKAABCEM_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04566f3d & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_Clear__);
    DAT_04566f3d = 1;
  }
  pSVar1 = (__this->fields).DFKCIDJHEEE;
  if (pSVar1 != (System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public void BNBFMIDBJNC(Action PKKMGBOIDJD, Enum NCPANDOCILC)  [RVA 0x3221A88]
// DCAEKAABCEM$$BNBFMIDBJNC @ RVA 0x3221A88

void DCAEKAABCEM__BNBFMIDBJNC
               (DCAEKAABCEM_o *__this,System_Action_o *PKKMGBOIDJD,System_Enum_o *NCPANDOCILC,
               MethodInfo *method)

{
  int32_t NCPANDOCILC_00;
  
  if ((DAT_04566f3e & 1) == 0) {
    FUN_01bab630(&System_Convert_TypeInfo);
    DAT_04566f3e = 1;
  }
  if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  NCPANDOCILC_00 = System_Convert__ToInt32((Il2CppObject *)NCPANDOCILC,(MethodInfo *)0x0);
  DCAEKAABCEM__BNBFMIDBJNC(__this,PKKMGBOIDJD,NCPANDOCILC_00,method);
  return;
}


// ===== private List<DCAEKAABCEM.CMGDCNNPGII> CENBKKEGHFO()  [RVA 0x3221C14]
// DCAEKAABCEM$$CENBKKEGHFO @ RVA 0x3221C14

System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *
DCAEKAABCEM__CENBKKEGHFO(DCAEKAABCEM_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  Il2CppObject *pIVar4;
  System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *pSVar5;
  DCAEKAABCEM_CMGDCNNPGII_o *item;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *pSVar6;
  DCAEKAABCEM_CMGDCNNPGII_array *pDVar7;
  int index;
  
  if ((DAT_04566f3f & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_KIKGKKGDCKK<DCAEKAABCEM_CMGDCNNPGII>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_TypeInfo);
    DAT_04566f3f = 1;
    method = extraout_x1;
  }
  pSVar6 = (__this->fields).DFKCIDJHEEE;
  if (pSVar6 != (System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *)0x0) {
    if ((pSVar6->fields)._size == 0) {
      return (System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *)0x0;
    }
    pSVar6 = (System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_TypeInfo,
                                method);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)pSVar6,
               Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>__ctor__);
    pIVar4 = DJNBJHPDKDP__KIKGKKGDCKK<object>
                       ((System_Collections_Generic_List_T__o *)(__this->fields).DFKCIDJHEEE,
                        Method_DJNBJHPDKDP_KIKGKKGDCKK<DCAEKAABCEM_CMGDCNNPGII>__);
    if ((pIVar4 != (Il2CppObject *)0x0) &&
       (pSVar5 = (__this->fields).DFKCIDJHEEE,
       pSVar5 != (System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *)0x0)) {
      index = (pSVar5->fields)._size + -1;
      if (index < 0) {
        return pSVar6;
      }
      iVar1 = *(int *)&pIVar4[1].monitor;
      while (pIVar4 = System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar5,index,
                                 Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_get_Item__
                                ), pIVar4 != (Il2CppObject *)0x0) {
        if (*(int *)&pIVar4[1].monitor < iVar1) {
          return pSVar6;
        }
        pSVar5 = (__this->fields).DFKCIDJHEEE;
        if ((pSVar5 == (System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *)0x0) ||
           (item = (DCAEKAABCEM_CMGDCNNPGII_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar5,index,
                              Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_get_Item__
                             ),
           lVar3 = Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_Add__,
           pSVar6 == (System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *)0x0)) break;
        pDVar7 = (pSVar6->fields)._items;
        (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
        if (pDVar7 == (DCAEKAABCEM_CMGDCNNPGII_array *)0x0) break;
        uVar2 = (pSVar6->fields)._size;
        if (uVar2 < (uint)pDVar7->max_length) {
          (pSVar6->fields)._size = uVar2 + 1;
          pDVar7->m_Items[(int)uVar2] = item;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
        index = index + -1;
        if (index < 0) {
          return pSVar6;
        }
        pSVar5 = (__this->fields).DFKCIDJHEEE;
        if (pSVar5 == (System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *)0x0) break;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void KMAMCKGFKLF(Action PKKMGBOIDJD)  [RVA 0x3221DB8]
// DCAEKAABCEM$$KMAMCKGFKLF @ RVA 0x3221DB8

void DCAEKAABCEM__KMAMCKGFKLF(DCAEKAABCEM_o *__this,System_Action_o *PKKMGBOIDJD,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Predicate_T__o *match;
  System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *__this_01;
  
  if ((DAT_04566f40 & 1) == 0) {
    FUN_01bab630(&Method_DCAEKAABCEM_FOAOKJIELKA_OCBPEEAPAEC__);
    FUN_01bab630(&DCAEKAABCEM_FOAOKJIELKA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_RemoveAll__);
    FUN_01bab630(&System_Predicate<DCAEKAABCEM_CMGDCNNPGII>_TypeInfo);
    DAT_04566f40 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(DCAEKAABCEM_FOAOKJIELKA_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)PKKMGBOIDJD;
    thunk_FUN_01c20e04(__this_00 + 1,PKKMGBOIDJD);
    __this_01 = (__this->fields).DFKCIDJHEEE;
    match = (System_Predicate_T__o *)
            thunk_FUN_01bda818(System_Predicate<DCAEKAABCEM_CMGDCNNPGII>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *)0x0) {
      System_Collections_Generic_List<object>__RemoveAll
                ((System_Collections_Generic_List_object__o *)__this_01,match,
                 Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_RemoveAll__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool KEOLAFKGNAE(Action PKKMGBOIDJD, ref int LKFALEIFDIO)  [RVA 0x3221EA4]
// DCAEKAABCEM$$KEOLAFKGNAE @ RVA 0x3221EA4

bool DCAEKAABCEM__KEOLAFKGNAE
               (DCAEKAABCEM_o *__this,System_Action_o *PKKMGBOIDJD,int32_t *LKFALEIFDIO,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Predicate_T__o *match;
  System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *__this_00;
  
  if ((DAT_04566f41 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_Find__);
    FUN_01bab630(&Method_DCAEKAABCEM_NFCFCNGJDNP_PJMPPPIDICE__);
    FUN_01bab630(&DCAEKAABCEM_NFCFCNGJDNP_TypeInfo);
    FUN_01bab630(&System_Predicate<DCAEKAABCEM_CMGDCNNPGII>_TypeInfo);
    DAT_04566f41 = 1;
  }
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda818(DCAEKAABCEM_NFCFCNGJDNP_TypeInfo);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  if (pIVar1 != (Il2CppObject *)0x0) {
    pIVar1[1].klass = (Il2CppClass *)PKKMGBOIDJD;
    thunk_FUN_01c20e04(pIVar1 + 1,PKKMGBOIDJD);
    __this_00 = (__this->fields).DFKCIDJHEEE;
    match = (System_Predicate_T__o *)
            thunk_FUN_01bda818(System_Predicate<DCAEKAABCEM_CMGDCNNPGII>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_00 != (System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *)0x0) {
      pIVar1 = System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this_00,match,
                          Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_Find__);
      if (pIVar1 != (Il2CppObject *)0x0) {
        *LKFALEIFDIO = *(int32_t *)&pIVar1[1].monitor;
      }
      return pIVar1 != (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BNBFMIDBJNC(Action PKKMGBOIDJD, int NCPANDOCILC)  [RVA 0x3221B00]
// DCAEKAABCEM$$BNBFMIDBJNC @ RVA 0x3221B00

void DCAEKAABCEM__BNBFMIDBJNC
               (DCAEKAABCEM_o *__this,System_Action_o *PKKMGBOIDJD,int32_t NCPANDOCILC,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Predicate_T__o *match;
  MethodInfo *method_00;
  System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *__this_00;
  
  if ((DAT_04566f42 & 1) == 0) {
    FUN_01bab630(&Method_DCAEKAABCEM_EHMBIAFGCLM_EIBBPPGOLJM__);
    FUN_01bab630(&DCAEKAABCEM_EHMBIAFGCLM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_Find__);
    FUN_01bab630(&System_Predicate<DCAEKAABCEM_CMGDCNNPGII>_TypeInfo);
    DAT_04566f42 = 1;
  }
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda818(DCAEKAABCEM_EHMBIAFGCLM_TypeInfo);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  if (pIVar1 != (Il2CppObject *)0x0) {
    pIVar1[1].klass = (Il2CppClass *)PKKMGBOIDJD;
    thunk_FUN_01c20e04(pIVar1 + 1,PKKMGBOIDJD);
    __this_00 = (__this->fields).DFKCIDJHEEE;
    match = (System_Predicate_T__o *)
            thunk_FUN_01bda818(System_Predicate<DCAEKAABCEM_CMGDCNNPGII>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_00 != (System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *)0x0) {
      pIVar1 = System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this_00,match,
                          Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_Find__);
      if (pIVar1 != (Il2CppObject *)0x0) {
        *(int32_t *)&pIVar1[1].monitor = NCPANDOCILC;
        DCAEKAABCEM__OBMDEPEMOHF(__this,method_00);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool BEBKGBHFMJK(Action PKKMGBOIDJD)  [RVA 0x3221FBC]
// DCAEKAABCEM$$BEBKGBHFMJK @ RVA 0x3221FBC

bool DCAEKAABCEM__BEBKGBHFMJK(DCAEKAABCEM_o *__this,System_Action_o *PKKMGBOIDJD,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Predicate_T__o *match;
  System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *__this_00;
  
  if ((DAT_04566f43 & 1) == 0) {
    FUN_01bab630(&Method_DCAEKAABCEM_JFGADJAIKIJ_FOAJPFEFJDH__);
    FUN_01bab630(&DCAEKAABCEM_JFGADJAIKIJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_Find__);
    FUN_01bab630(&System_Predicate<DCAEKAABCEM_CMGDCNNPGII>_TypeInfo);
    DAT_04566f43 = 1;
  }
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda818(DCAEKAABCEM_JFGADJAIKIJ_TypeInfo);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  if (pIVar1 != (Il2CppObject *)0x0) {
    pIVar1[1].klass = (Il2CppClass *)PKKMGBOIDJD;
    thunk_FUN_01c20e04(pIVar1 + 1,PKKMGBOIDJD);
    __this_00 = (__this->fields).DFKCIDJHEEE;
    match = (System_Predicate_T__o *)
            thunk_FUN_01bda818(System_Predicate<DCAEKAABCEM_CMGDCNNPGII>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_00 != (System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *)0x0) {
      pIVar1 = System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this_00,match,
                          Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_Find__);
      return pIVar1 != (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void HCBAKFNPGDN()  [RVA 0x32220B4]
// DCAEKAABCEM$$HCBAKFNPGDN @ RVA 0x32220B4

void DCAEKAABCEM__HCBAKFNPGDN(DCAEKAABCEM_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *__this_00;
  MethodInfo *extraout_x1;
  Il2CppClass *pIVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04566f44 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<DCAEKAABCEM_CMGDCNNPGII>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<DCAEKAABCEM_CMGDCNNPGII>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<DCAEKAABCEM_CMGDCNNPGII>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_get_Count__);
    DAT_04566f44 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = DCAEKAABCEM__CENBKKEGHFO(__this,method);
  if ((__this_00 != (System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *)0x0) &&
     (0 < (__this_00->fields)._size)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<DCAEKAABCEM_CMGDCNNPGII>_MoveNext__
                        );
      if (!bVar1) break;
      if (local_38.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pIVar2 = local_38.fields._current[1].klass;
      if (pIVar2 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (*(code *)(pIVar2->_1).namespaze)
                ((pIVar2->_1).element_class,*(undefined8 *)&(pIVar2->_1).byval_arg.bits);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,
               Method_System_Collections_Generic_List_Enumerator<DCAEKAABCEM_CMGDCNNPGII>_Dispose__)
    ;
  }
  return;
}


// ===== public void MDDFPBJBKPM(Action PKKMGBOIDJD, Enum NCPANDOCILC)  [RVA 0x3222230]
// DCAEKAABCEM$$MDDFPBJBKPM @ RVA 0x3222230

void DCAEKAABCEM__MDDFPBJBKPM
               (DCAEKAABCEM_o *__this,System_Action_o *PKKMGBOIDJD,System_Enum_o *NCPANDOCILC,
               MethodInfo *method)

{
  int32_t NCPANDOCILC_00;
  
  if ((DAT_04566f45 & 1) == 0) {
    FUN_01bab630(&System_Convert_TypeInfo);
    DAT_04566f45 = 1;
  }
  if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  NCPANDOCILC_00 = System_Convert__ToInt32((Il2CppObject *)NCPANDOCILC,(MethodInfo *)0x0);
  DCAEKAABCEM__MDDFPBJBKPM(__this,PKKMGBOIDJD,NCPANDOCILC_00,method);
  return;
}


// ===== public void .ctor()  [RVA 0x32223A0]
// DCAEKAABCEM$$.ctor @ RVA 0x32223A0

void DCAEKAABCEM___ctor(DCAEKAABCEM_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566f46 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_TypeInfo);
    DAT_04566f46 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_TypeInfo,
                                 method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>__ctor__);
  (__this->fields).DFKCIDJHEEE = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void MDDFPBJBKPM(Action PKKMGBOIDJD, int NCPANDOCILC)  [RVA 0x32222A8]
// DCAEKAABCEM$$MDDFPBJBKPM @ RVA 0x32222A8

void DCAEKAABCEM__MDDFPBJBKPM
               (DCAEKAABCEM_o *__this,System_Action_o *PKKMGBOIDJD,int32_t NCPANDOCILC,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  DCAEKAABCEM_CMGDCNNPGII_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  DCAEKAABCEM_CMGDCNNPGII_array *pDVar3;
  System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *__this_01;
  
  if ((DAT_04566f47 & 1) == 0) {
    FUN_01bab630(&DCAEKAABCEM_CMGDCNNPGII_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_Add__);
    DAT_04566f47 = 1;
  }
  __this_01 = (__this->fields).DFKCIDJHEEE;
  __this_00 = (DCAEKAABCEM_CMGDCNNPGII_o *)thunk_FUN_01bda818(DCAEKAABCEM_CMGDCNNPGII_TypeInfo);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).EDOEMIDBEGO = PKKMGBOIDJD;
  thunk_FUN_01c20e04(&__this_00->fields,PKKMGBOIDJD);
  (__this_00->fields).EAFPDFHFBOM = NCPANDOCILC;
  lVar2 = Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_Add__;
  if (__this_01 != (System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *)0x0) {
    pDVar3 = (__this_01->fields)._items;
    (__this_01->fields)._version = (__this_01->fields)._version + 1;
    if (pDVar3 != (DCAEKAABCEM_CMGDCNNPGII_array *)0x0) {
      uVar1 = (__this_01->fields)._size;
      if (uVar1 < (uint)pDVar3->max_length) {
        (__this_01->fields)._size = uVar1 + 1;
        pDVar3->m_Items[(int)uVar1] = __this_00;
        thunk_FUN_01c20e04(pDVar3->m_Items + (int)uVar1,__this_00);
        method_00 = extraout_x1;
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        method_00 = extraout_x1_00;
      }
      DCAEKAABCEM__OBMDEPEMOHF(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

