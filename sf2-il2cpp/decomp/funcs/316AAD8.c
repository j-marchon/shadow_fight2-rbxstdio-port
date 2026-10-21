// NFGLEDADCGL$$MIDDOHLPNMM @ RVA 0x316AAD8

void NFGLEDADCGL__MIDDOHLPNMM
               (NFGLEDADCGL_o *__this,HNFFPPPDKDK_o *CJNHFNHJHPE,bool KJDBEMABBEG,bool AFBFJKELDIJ,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar5;
  System_Predicate_T__o *match;
  Il2CppObject *pIVar6;
  FOKJBDHLIMG_o *pFVar7;
  Il2CppClass *pIVar8;
  Il2CppType *pIVar9;
  HNFFPPPDKDK_array *pHVar10;
  Il2CppClass *method_00;
  System_Collections_Generic_List_HNFFPPPDKDK__o *pSVar11;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045668f1 & 1) == 0) {
    FUN_01bab630(&Method_NFGLEDADCGL_DOFIGFOJIMM_MLGONBOLIBP__);
    FUN_01bab630(&NFGLEDADCGL_DOFIGFOJIMM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HNFFPPPDKDK>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HNFFPPPDKDK>_Find__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HNFFPPPDKDK>_Insert__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HNFFPPPDKDK>_Remove__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&System_Predicate<HNFFPPPDKDK>_TypeInfo);
    DAT_045668f1 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  pIVar4 = (Il2CppObject *)thunk_FUN_01bda818(NFGLEDADCGL_DOFIGFOJIMM_TypeInfo);
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar4 = pIVar4 + 1;
    pIVar4->klass = (Il2CppClass *)CJNHFNHJHPE;
    thunk_FUN_01c20e04(pIVar4,CJNHFNHJHPE);
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pFVar7 = MGNPHCAAEIO_TypeInfo->static_fields->DDMMFEDBMCC;
    if ((pFVar7 != (FOKJBDHLIMG_o *)0x0) &&
       (pSVar5 = (pFVar7->fields).ODLBEHFGJJE,
       pSVar5 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0)) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,(System_Collections_Generic_List_object__o *)pSVar5,
                 Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__
                               ), pIVar6 = local_80.fields._current, bVar3) {
        if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (pIVar4->klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (local_80.fields._current[4].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar3 = System_String__Equals
                          ((System_String_o *)local_80.fields._current[4].klass,
                           (System_String_o *)(pIVar4->klass->_1).namespaze,(MethodInfo *)0x0);
        pIVar8 = pIVar4->klass;
        if (pIVar8 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (bVar3 && *(int *)&pIVar6[7].monitor == *(int *)((long)&(pIVar8->_1).name + 4)) {
          pIVar9 = &(pIVar8->_1).byval_arg;
          pIVar9->data = pIVar6;
          thunk_FUN_01c20e04(pIVar9,pIVar6);
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__)
      ;
      if (pIVar4->klass != (Il2CppClass *)0x0) {
        if ((pIVar4->klass->_1).byval_arg.data == (void *)0x0) {
          if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pFVar7 = MGNPHCAAEIO_TypeInfo->static_fields->DDMMFEDBMCC;
          if ((pFVar7 == (FOKJBDHLIMG_o *)0x0) ||
             (pSVar5 = (pFVar7->fields).CNLHOAHDHCF,
             pSVar5 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0)) goto LAB_0326afa4;
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_98,(System_Collections_Generic_List_object__o *)pSVar5,
                     Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
          local_80.fields._index = local_98.fields._index;
          local_80.fields._version = local_98.fields._version;
          local_80.fields._list = local_98.fields._list;
          local_80.fields._current = local_98.fields._current;
          while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                   (&local_80,
                                    Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__
                                   ), pIVar6 = local_80.fields._current, bVar3) {
            if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if (pIVar4->klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if (local_80.fields._current[4].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            bVar3 = System_String__Equals
                              ((System_String_o *)local_80.fields._current[4].klass,
                               (System_String_o *)(pIVar4->klass->_1).namespaze,(MethodInfo *)0x0);
            pIVar8 = pIVar4->klass;
            if (pIVar8 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if (bVar3 && *(int *)&pIVar6[7].monitor == *(int *)((long)&(pIVar8->_1).name + 4)) {
              pIVar9 = &(pIVar8->_1).byval_arg;
              pIVar9->data = pIVar6;
              thunk_FUN_01c20e04(pIVar9,pIVar6);
            }
          }
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_80,
                     Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
        }
        if (pIVar4->klass != (Il2CppClass *)0x0) {
          if (((pIVar4->klass->_1).byval_arg.data == (void *)0x0) && (AFBFJKELDIJ)) {
            if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
                    /* try { // try from 0326adb8 to 0336b123 has its CatchHandler @ 0326adb8
                       catch() { ... } // from try @ 0326adb8 with catch @ 0326adb8
                       catch() { ... } // from try @ 0326b1a8 with catch @ 0326adb8
                       catch() { ... } // from try @ 0326b4f0 with catch @ 0326adb8
                       catch() { ... } // from try @ 0326b4f8 with catch @ 0326adb8
                       catch() { ... } // from try @ 0326b59c with catch @ 0326adb8 */
            pFVar7 = MGNPHCAAEIO_TypeInfo->static_fields->DDMMFEDBMCC;
            if ((pFVar7 == (FOKJBDHLIMG_o *)0x0) ||
               (pSVar5 = (pFVar7->fields).FLADBMFBNIH,
               pSVar5 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0)) goto LAB_0326afa4;
            System_Collections_Generic_List<object>__GetEnumerator
                      (&local_98,(System_Collections_Generic_List_object__o *)pSVar5,
                       Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
            local_80.fields._index = local_98.fields._index;
            local_80.fields._version = local_98.fields._version;
            local_80.fields._list = local_98.fields._list;
            local_80.fields._current = local_98.fields._current;
            while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                     (&local_80,
                                      Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__
                                     ), pIVar6 = local_80.fields._current, bVar3) {
              if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              if (pIVar4->klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              if (local_80.fields._current[4].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              bVar3 = System_String__Equals
                                ((System_String_o *)local_80.fields._current[4].klass,
                                 (System_String_o *)(pIVar4->klass->_1).namespaze,(MethodInfo *)0x0)
              ;
              if (bVar3) {
                if (pIVar4->klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pIVar9 = &(pIVar4->klass->_1).byval_arg;
                pIVar9->data = pIVar6;
                thunk_FUN_01c20e04(pIVar9,pIVar6);
              }
            }
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
          }
          if (pIVar4->klass != (Il2CppClass *)0x0) {
            if ((pIVar4->klass->_1).byval_arg.data == (void *)0x0) {
              return;
            }
            pSVar11 = (__this->fields).PEJIOCBFEEE;
            match = (System_Predicate_T__o *)
                    thunk_FUN_01bda818(System_Predicate<HNFFPPPDKDK>_TypeInfo);
            System_Predicate<object>___ctor();
            if (pSVar11 != (System_Collections_Generic_List_HNFFPPPDKDK__o *)0x0) {
              pIVar6 = System_Collections_Generic_List<object>__Find
                                 ((System_Collections_Generic_List_object__o *)pSVar11,match,
                                  Method_System_Collections_Generic_List<HNFFPPPDKDK>_Find__);
              if (pIVar6 != (Il2CppObject *)0x0) {
                pSVar11 = (__this->fields).PEJIOCBFEEE;
                if (pSVar11 == (System_Collections_Generic_List_HNFFPPPDKDK__o *)0x0)
                goto LAB_0326afa4;
                System_Collections_Generic_List<object>__Remove
                          ((System_Collections_Generic_List_object__o *)pSVar11,pIVar6,
                           Method_System_Collections_Generic_List<HNFFPPPDKDK>_Remove__);
              }
              lVar2 = Method_System_Collections_Generic_List<HNFFPPPDKDK>_Add__;
              pSVar11 = (__this->fields).PEJIOCBFEEE;
              if (pSVar11 != (System_Collections_Generic_List_HNFFPPPDKDK__o *)0x0) {
                pIVar8 = pIVar4->klass;
                if (KJDBEMABBEG) {
                  System_Collections_Generic_List<object>__Insert
                            ((System_Collections_Generic_List_object__o *)pSVar11,0,
                             (Il2CppObject *)pIVar8,
                             Method_System_Collections_Generic_List<HNFFPPPDKDK>_Insert__);
                  method_00 = pIVar8;
                }
                else {
                  pHVar10 = (pSVar11->fields)._items;
                  (pSVar11->fields)._version = (pSVar11->fields)._version + 1;
                  if (pHVar10 == (HNFFPPPDKDK_array *)0x0) goto LAB_0326afa4;
                  uVar1 = (pSVar11->fields)._size;
                  if (uVar1 < (uint)pHVar10->max_length) {
                    (pSVar11->fields)._size = uVar1 + 1;
                    pHVar10->m_Items[(int)uVar1] = (HNFFPPPDKDK_o *)pIVar8;
                    thunk_FUN_01c20e04(pHVar10->m_Items + (int)uVar1,pIVar8);
                    method_00 = pIVar8;
                  }
                  else {
                    method_00 = *(Il2CppClass **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
                    System_Collections_Generic_List<object>__AddWithResize
                              ((System_Collections_Generic_List_object__o *)pSVar11,
                               (Il2CppObject *)pIVar8,(MethodInfo_26E4DAC *)method_00);
                  }
                }
                if (pIVar4->klass != (Il2CppClass *)0x0) {
                  NFGLEDADCGL__BJPAKLCFKPK
                            (__this,(pIVar4->klass->_1).byval_arg.data,(MethodInfo *)method_00);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0326afa4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

