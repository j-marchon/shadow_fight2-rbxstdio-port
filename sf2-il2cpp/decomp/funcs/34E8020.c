// OLKKAIFGGAK$$MHEEHMKBFCL @ RVA 0x34E8020

void OLKKAIFGGAK__MHEEHMKBFCL(OLKKAIFGGAK_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_ECENNHNBAME__o *__this_00;
  GBJGJEGPHKD_o *pGVar4;
  System_Object_array *pSVar5;
  undefined8 uVar6;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  void *pvVar7;
  long lVar8;
  Il2CppObject *pIVar9;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045687ec & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_899);
    FUN_01bab630(&StringLiteral_9161);
    DAT_045687ec = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).OOBBJEDHHKM;
  if (__this_00 == (System_Collections_Generic_List_ECENNHNBAME__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ECENNHNBAME>_GetEnumerator__);
  local_80.fields._index = local_98.fields._index;
  local_80.fields._version = local_98.fields._version;
  local_80.fields._list = local_98.fields._list;
  local_80.fields._current = local_98.fields._current;
  while( true ) {
    while( true ) {
      do {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_80,
                           Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_MoveNext__
                          );
        pIVar1 = local_80.fields._current;
        if (!bVar2) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_80,
                     Method_System_Collections_Generic_List_Enumerator<ECENNHNBAME>_Dispose__);
          return;
        }
        if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pvVar7 = local_80.fields._current[7].monitor;
        if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        lVar8 = *(long *)((long)pvVar7 + 0x50);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if ((*(int *)(lVar8 + 0x18) == -1) && (*(int *)(lVar8 + 0x10) == 1)) {
          pGVar4 = OLKKAIFGGAK__CJJJPDDBCCH(__this,*(int32_t *)(lVar8 + 0x48),in_x2);
          if (pIVar1[7].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          lVar8 = *(long *)((long)pIVar1[7].monitor + 0x50);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if (pGVar4 == (GBJGJEGPHKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          iVar3 = GBJGJEGPHKD__HBCACOFLPCI
                            (pGVar4,*(System_String_o **)(lVar8 + 0x30),(MethodInfo *)0x0);
          if (iVar3 == -1) {
            pSVar5 = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
            if (pIVar1[7].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            lVar8 = *(long *)((long)pIVar1[7].monitor + 0x50);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if (pSVar5 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pIVar9 = *(Il2CppObject **)(lVar8 + 0x30);
            if ((pIVar9 != (Il2CppObject *)0x0) &&
               (lVar8 = thunk_FUN_01bda71c(pIVar9,(((pSVar5->obj).klass)->_1).element_class),
               lVar8 == 0)) {
              uVar6 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar6,0);
            }
            if ((int)pSVar5->max_length == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pSVar5->m_Items[0] = pIVar9;
            thunk_FUN_01c20e04(pSVar5->m_Items,pIVar9);
            pIVar9 = pIVar1[6].monitor;
            if ((pIVar9 != (Il2CppObject *)0x0) &&
               (lVar8 = thunk_FUN_01bda71c(pIVar9,(((pSVar5->obj).klass)->_1).element_class),
               lVar8 == 0)) {
              uVar6 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar6,0);
            }
            if ((uint)pSVar5->max_length < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            pSVar5->m_Items[1] = pIVar9;
            thunk_FUN_01c20e04(pSVar5->m_Items + 1,pIVar9);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogWarningFormat(StringLiteral_899,pSVar5,(MethodInfo *)0x0);
          }
          if (pIVar1[7].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          lVar8 = *(long *)((long)pIVar1[7].monitor + 0x50);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          *(int32_t *)(lVar8 + 0x18) = iVar3;
          in_x2 = (MethodInfo *)0x0;
          iVar3 = GBJGJEGPHKD__HDEBEPGIFCJ(pGVar4,iVar3,(MethodInfo *)0x0);
          *(int32_t *)(lVar8 + 0x1c) = iVar3;
          pvVar7 = pIVar1[7].monitor;
          if (pvVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        }
        lVar8 = *(long *)((long)pvVar7 + 0x50);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      } while (((*(int *)(lVar8 + 0x20) != -1) && (*(int *)(lVar8 + 0x4c) != 2)) ||
              (*(int *)(lVar8 + 0x14) != 1));
      pGVar4 = OLKKAIFGGAK__CJJJPDDBCCH(__this,*(int32_t *)(lVar8 + 0x4c),in_x2);
      if (pGVar4 != (GBJGJEGPHKD_o *)0x0) break;
      pSVar5 = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      if (pSVar5 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pIVar9 = pIVar1[6].monitor;
      if ((pIVar9 != (Il2CppObject *)0x0) &&
         (lVar8 = thunk_FUN_01bda71c(pIVar9,(((pSVar5->obj).klass)->_1).element_class), lVar8 == 0))
      {
        uVar6 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar6,0);
      }
      if ((int)pSVar5->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      pSVar5->m_Items[0] = pIVar9;
      thunk_FUN_01c20e04(pSVar5->m_Items,pIVar9);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      in_x2 = (MethodInfo *)0x0;
      UnityEngine_Debug__LogErrorFormat(StringLiteral_9161,pSVar5,(MethodInfo *)0x0);
      if (pIVar1[7].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      lVar8 = *(long *)((long)pIVar1[7].monitor + 0x50);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      *(undefined4 *)(lVar8 + 0x20) = 0;
    }
    if (pIVar1[7].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    lVar8 = *(long *)((long)pIVar1[7].monitor + 0x50);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar3 = GBJGJEGPHKD__HBCACOFLPCI(pGVar4,*(System_String_o **)(lVar8 + 0x38),(MethodInfo *)0x0);
    *(int32_t *)(lVar8 + 0x20) = iVar3;
    if (pIVar1[7].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    lVar8 = *(long *)((long)pIVar1[7].monitor + 0x50);
    if (lVar8 == 0) break;
    in_x2 = (MethodInfo *)0x0;
    iVar3 = GBJGJEGPHKD__HDEBEPGIFCJ(pGVar4,*(int32_t *)(lVar8 + 0x20),(MethodInfo *)0x0);
    *(int32_t *)(lVar8 + 0x24) = iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

