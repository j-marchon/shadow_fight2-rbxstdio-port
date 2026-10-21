// DOPEEDABNEK$$AADEKPLBEEO @ RVA 0x32E3E9C

/* WARNING: Removing unreachable block (ram,0x033e4178) */
/* WARNING: Removing unreachable block (ram,0x033e4204) */

void DOPEEDABNEK__AADEKPLBEEO(DOPEEDABNEK_o *__this,int32_t GMALOFEKAHI,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  VirtualInvokeData *pVVar3;
  long *plVar4;
  undefined8 *puVar5;
  BPDOKJBGHAG_o *__this_01;
  GGHCLMEFIGO_o *__this_02;
  System_Collections_Generic_List_BPDOKJBGHAG__c *pSVar6;
  long lVar7;
  ACHLOMELAJE_o *pAVar8;
  ulong uVar9;
  int32_t *piVar10;
  int *piVar11;
  System_Collections_Generic_List_BPDOKJBGHAG__o *pSVar12;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_045675fc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<BPDOKJBGHAG>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<BPDOKJBGHAG>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045675fc = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).DIGBEFKAPHM;
  if (__this_00 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_60,
                              Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__
                             ), bVar2) {
      if ((HOOAAGABMBL_o *)local_60.fields._current == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      HOOAAGABMBL__AADEKPLBEEO
                ((HOOAAGABMBL_o *)local_60.fields._current,GMALOFEKAHI,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    pSVar12 = (__this->fields).AJDOBNIKJCK;
    if (pSVar12 != (System_Collections_Generic_List_BPDOKJBGHAG__o *)0x0) {
      pSVar6 = pSVar12->klass;
      uVar1._0_1_ = (pSVar6->_2).rank;
      uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
      uVar9 = (ulong)uVar1;
      if (uVar9 != 0) {
        piVar10 = &((pSVar6->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IEnumerable<BPDOKJBGHAG>_TypeInfo) {
            pVVar3 = &(pSVar6->vtable)._0_Equals + *piVar10;
            goto LAB_033e401c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar3 = (VirtualInvokeData *)
               FUN_01b81914(pSVar12,System_Collections_Generic_IEnumerable<BPDOKJBGHAG>_TypeInfo,0);
LAB_033e401c:
      plVar4 = (long *)(*pVVar3->methodPtr)(pSVar12,pVVar3->method);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar7 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_033e408c;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_033e408c:
        uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar9 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_033e416c;
          lVar7 = *plVar4;
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 == 0) goto LAB_033e4144;
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          goto LAB_033e412c;
        }
        lVar7 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IEnumerator_BPDOKJBGHAG__c **)(piVar11 + -2) ==
                System_Collections_Generic_IEnumerator<BPDOKJBGHAG>_TypeInfo) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_033e40e8;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_01b81914(plVar4,System_Collections_Generic_IEnumerator<BPDOKJBGHAG>_TypeInfo,0)
        ;
LAB_033e40e8:
        __this_01 = (BPDOKJBGHAG_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (__this_01 == (BPDOKJBGHAG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        BPDOKJBGHAG__AADEKPLBEEO(__this_01,GMALOFEKAHI,(MethodInfo *)0x0);
      } while( true );
    }
  }
  goto LAB_033e41fc;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar11 = piVar11 + 4;
    if (uVar9 == 0) break;
LAB_033e412c:
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_033e4160;
    }
  }
LAB_033e4144:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_033e4160:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_033e416c:
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar8 != (ACHLOMELAJE_o *)0x0) &&
     (__this_02 = (pAVar8->fields).OIDPLCLELEN, __this_02 != (GGHCLMEFIGO_o *)0x0)) {
    GGHCLMEFIGO__MJGMEEKMAOE(__this_02,(MethodInfo *)0x0);
    return;
  }
LAB_033e41fc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

