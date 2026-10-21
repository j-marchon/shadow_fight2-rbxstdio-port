// CUDLR.Server$$LKACCCCGIAP @ RVA 0x33BEC74

void CUDLR_Server__LKACCCCGIAP(CUDLR_Server_o *__this,MethodInfo *method)

{
  uint uVar1;
  Il2CppType *pIVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  System_Type_o *pSVar7;
  undefined8 uVar8;
  long lVar9;
  DOJKMMDFBCJ_EAMEJLKAHFI_o *pDVar10;
  System_Byte_array *pSVar11;
  System_Byte_array *pSVar12;
  System_String_o *pSVar13;
  Il2CppObject *pIVar14;
  DOJKMMDFBCJ_EAMEJLKAHFI_o **ppDVar15;
  System_Collections_Generic_List_DOJKMMDFBCJ__o *__this_00;
  MethodInfo *extraout_x1;
  DOJKMMDFBCJ_array *pDVar16;
  uint uVar17;
  uint uVar18;
  Il2CppObject *arg0;
  DOJKMMDFBCJ_o *item;
  long lVar19;
  
  if ((DAT_04567dc6 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_187);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_188);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_189);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_190);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&DOJKMMDFBCJ___TypeInfo);
    FUN_01bab630(&DOJKMMDFBCJ_var);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&DOJKMMDFBCJ_EAMEJLKAHFI_var);
    FUN_01bab630(&DOJKMMDFBCJ_EAMEJLKAHFI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DOJKMMDFBCJ>_Add__);
    FUN_01bab630(&Method_CUDLR_Server_LKACCCCGIAP__);
    FUN_01bab630(&System_Type_TypeInfo);
    DAT_04567dc6 = 1;
    method = extraout_x1;
  }
  plVar4 = (long *)FUN_01bab61c(Method_CUDLR_Server_LKACCCCGIAP__,method);
  if ((plVar4 != (long *)0x0) &&
     (lVar5 = (**(code **)(*plVar4 + 0x248))(plVar4,*(undefined8 *)(*plVar4 + 0x250)), lVar5 != 0))
  {
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar1) {
      uVar17 = 0;
      do {
        if (uVar1 <= uVar17) {
LAB_034bf11c:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        arg0 = *(Il2CppObject **)(lVar5 + (long)(int)uVar17 * 8 + 0x20);
        if ((arg0 == (Il2CppObject *)0x0) ||
           (lVar6 = (*arg0->klass->vtable[0x65].methodPtr)
                              (arg0,0x18,arg0->klass->vtable[0x65].method), lVar6 == 0))
        goto LAB_034bf118;
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (0 < (int)uVar1) {
          uVar18 = 0;
          do {
            pIVar2 = DOJKMMDFBCJ_var;
            if (uVar1 <= uVar18) goto LAB_034bf11c;
            plVar4 = *(long **)(lVar6 + (long)(int)uVar18 * 8 + 0x20);
            if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pSVar7 = System_Type__GetTypeFromHandle
                               ((System_RuntimeTypeHandle_o)pIVar2,(MethodInfo *)0x0);
            if (plVar4 == (long *)0x0) goto LAB_034bf118;
            uVar8 = (**(code **)(*plVar4 + 0x218))(plVar4,pSVar7,1,*(undefined8 *)(*plVar4 + 0x220))
            ;
            lVar9 = thunk_FUN_01bda71c(uVar8,DOJKMMDFBCJ___TypeInfo);
            pIVar2 = DOJKMMDFBCJ_EAMEJLKAHFI_var;
            if (lVar9 == 0) goto LAB_034bf118;
            if (*(long *)(lVar9 + 0x18) != 0) {
              if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar2,(MethodInfo *)0x0);
              pDVar10 = (DOJKMMDFBCJ_EAMEJLKAHFI_o *)System_Delegate__CreateDelegate();
              if ((pDVar10 == (DOJKMMDFBCJ_EAMEJLKAHFI_o *)0x0) ||
                 (pDVar10->klass != DOJKMMDFBCJ_EAMEJLKAHFI_TypeInfo)) {
                pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar11,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_187,
                           (MethodInfo *)0x0);
                pSVar12 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar12,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_188,
                           (MethodInfo *)0x0);
                pSVar13 = OMHODMCHILE__NPKGDBHJKCK(pSVar11,pSVar12,(MethodInfo *)0x0);
                pIVar14 = (Il2CppObject *)
                          (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
                pSVar13 = System_String__Format(pSVar13,arg0,pIVar14,(MethodInfo *)0x0);
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
                }
                UnityEngine_Debug__LogError((Il2CppObject *)pSVar13,(MethodInfo *)0x0);
              }
              else {
                uVar8 = *(undefined8 *)(lVar9 + 0x18);
                if (0 < (int)uVar8) {
                  lVar19 = 0;
                  do {
                    if ((uint)uVar8 <= (uint)lVar19) goto LAB_034bf11c;
                    item = *(DOJKMMDFBCJ_o **)(lVar9 + 0x20 + lVar19 * 8);
                    if (item == (DOJKMMDFBCJ_o *)0x0) goto LAB_034bf118;
                    if ((item->fields).NEIONLMBMDE == (System_Text_RegularExpressions_Regex_o *)0x0)
                    {
                      pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                ((System_Array_o *)pSVar11,
                                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_189,
                                 (MethodInfo *)0x0);
                      pSVar12 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                ((System_Array_o *)pSVar12,
                                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_190,
                                 (MethodInfo *)0x0);
                      pSVar13 = OMHODMCHILE__NPKGDBHJKCK(pSVar11,pSVar12,(MethodInfo *)0x0);
                      pIVar14 = (Il2CppObject *)
                                (**(code **)(*plVar4 + 0x1b8))
                                          (plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
                      pSVar13 = System_String__Format(pSVar13,arg0,pIVar14,(MethodInfo *)0x0);
                      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
                      }
                      UnityEngine_Debug__LogError((Il2CppObject *)pSVar13,(MethodInfo *)0x0);
                    }
                    else {
                      ppDVar15 = &(item->fields).NAPDMLAGBJC;
                      *ppDVar15 = pDVar10;
                      thunk_FUN_01c20e04(ppDVar15,pDVar10);
                      lVar3 = Method_System_Collections_Generic_List<DOJKMMDFBCJ>_Add__;
                      __this_00 = (__this->fields).CFGNLMNHGFL;
                      if (__this_00 == (System_Collections_Generic_List_DOJKMMDFBCJ__o *)0x0)
                      goto LAB_034bf118;
                      pDVar16 = (__this_00->fields)._items;
                      (__this_00->fields)._version = (__this_00->fields)._version + 1;
                      if (pDVar16 == (DOJKMMDFBCJ_array *)0x0) goto LAB_034bf118;
                      uVar1 = (__this_00->fields)._size;
                      if (uVar1 < (uint)pDVar16->max_length) {
                        (__this_00->fields)._size = uVar1 + 1;
                        pDVar16->m_Items[(int)uVar1] = item;
                        thunk_FUN_01c20e04(pDVar16->m_Items + (int)uVar1,item);
                      }
                      else {
                        System_Collections_Generic_List<object>__AddWithResize
                                  ((System_Collections_Generic_List_object__o *)__this_00,
                                   (Il2CppObject *)item,
                                   *(MethodInfo_26E4DAC **)
                                    (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                      }
                    }
                    uVar8 = *(undefined8 *)(lVar9 + 0x18);
                    lVar19 = lVar19 + 1;
                  } while ((int)lVar19 < (int)uVar8);
                }
              }
            }
            uVar1 = *(uint *)(lVar6 + 0x18);
            uVar18 = uVar18 + 1;
          } while ((int)uVar18 < (int)uVar1);
        }
        uVar1 = *(uint *)(lVar5 + 0x18);
        uVar17 = uVar17 + 1;
      } while ((int)uVar17 < (int)uVar1);
    }
    return;
  }
LAB_034bf118:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

