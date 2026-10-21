// ICOEHFKOMGO$$DNPLNFOAMMC @ RVA 0x329D67C

/* WARNING: Removing unreachable block (ram,0x0339dba8) */
/* WARNING: Type propagation algorithm not settling */

System_Collections_Generic_List_string__o * ICOEHFKOMGO__DNPLNFOAMMC(MethodInfo *method)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  Il2CppType *pIVar5;
  System_Collections_Generic_List_string__o *__this;
  System_Type_o *pSVar6;
  Il2CppObject *pIVar7;
  System_String_o *pSVar8;
  System_Array_o *__this_00;
  System_Collections_IEnumerator_o *pSVar9;
  Il2CppMethodPointer *ppIVar10;
  long *plVar11;
  int *piVar12;
  undefined8 *puVar13;
  System_String_array *pSVar14;
  System_Collections_IEnumerator_c *pSVar15;
  long lVar16;
  ulong uVar17;
  ICOEHFKOMGO_StaticFields *pIVar18;
  int32_t *piVar19;
  int local_6c [3];
  
  if ((DAT_045673ad & 1) == 0) {
    FUN_01bab630(&ADPIHKFDKPI_var);
    FUN_01bab630(&ADPIHKFDKPI_TypeInfo);
    FUN_01bab630(&CADMAOBOPOC_var);
    FUN_01bab630(&System_Enum_TypeInfo);
    FUN_01bab630(&ICOEHFKOMGO_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    DAT_045673ad = 1;
  }
  __this = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<string>__ctor__);
  pIVar5 = ADPIHKFDKPI_var;
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar6 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar5,(MethodInfo *)0x0);
  local_6c[2] = 0xffffff9c;
  pIVar7 = (Il2CppObject *)thunk_FUN_01bda448(ADPIHKFDKPI_TypeInfo,local_6c + 2);
  if ((System_Enum_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Enum_TypeInfo);
  }
  pSVar8 = System_Enum__GetName(pSVar6,pIVar7,(MethodInfo *)0x0);
  lVar16 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this != (System_Collections_Generic_List_string__o *)0x0) {
    pSVar14 = (__this->fields)._items;
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pSVar14 != (System_String_array *)0x0) {
      uVar4 = (__this->fields)._size;
      if (uVar4 < (uint)pSVar14->max_length) {
        (__this->fields)._size = uVar4 + 1;
        pSVar14->m_Items[(int)uVar4] = pSVar8;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar8,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
      }
      pSVar6 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)ADPIHKFDKPI_var,(MethodInfo *)0x0);
      local_6c[1] = 0xffffff9a;
      pIVar7 = (Il2CppObject *)thunk_FUN_01bda448(ADPIHKFDKPI_TypeInfo,local_6c + 1);
      pSVar8 = System_Enum__GetName(pSVar6,pIVar7,(MethodInfo *)0x0);
      lVar16 = Method_System_Collections_Generic_List<string>_Add__;
      pSVar14 = (__this->fields)._items;
      (__this->fields)._version = (__this->fields)._version + 1;
      if (pSVar14 != (System_String_array *)0x0) {
        uVar4 = (__this->fields)._size;
        if (uVar4 < (uint)pSVar14->max_length) {
          (__this->fields)._size = uVar4 + 1;
          pSVar14->m_Items[(int)uVar4] = pSVar8;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar8,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
        }
        pSVar6 = System_Type__GetTypeFromHandle
                           ((System_RuntimeTypeHandle_o)CADMAOBOPOC_var,(MethodInfo *)0x0);
        __this_00 = System_Enum__GetValues(pSVar6,(MethodInfo *)0x0);
        if (__this_00 != (System_Array_o *)0x0) {
          pSVar9 = System_Array__GetEnumerator(__this_00,(MethodInfo *)0x0);
          if (pSVar9 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          do {
            pSVar15 = pSVar9->klass;
            uVar2._0_1_ = (pSVar15->_2).rank;
            uVar2._1_1_ = (pSVar15->_2).minimumAlignment;
            uVar17 = (ulong)uVar2;
            if (uVar17 != 0) {
              piVar19 = &((pSVar15->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
                    (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
                  ppIVar10 = &pSVar15->vtable[*piVar19].methodPtr;
                  goto LAB_0339d964;
                }
                uVar17 = uVar17 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar17 != 0);
            }
            ppIVar10 = (Il2CppMethodPointer *)
                       FUN_01b81914(pSVar9,System_Collections_IEnumerator_TypeInfo,0);
LAB_0339d964:
            uVar17 = (**ppIVar10)(pSVar9,(MethodInfo *)ppIVar10[1]);
            if ((uVar17 & 1) == 0) {
              plVar11 = (long *)thunk_FUN_01bda71c(pSVar9,System_IDisposable_TypeInfo);
              if (plVar11 == (long *)0x0) {
                return __this;
              }
              lVar16 = *plVar11;
              uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar17 == 0) goto LAB_0339db44;
              piVar12 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
              goto LAB_0339db2c;
            }
            pSVar15 = pSVar9->klass;
            uVar3._0_1_ = (pSVar15->_2).rank;
            uVar3._1_1_ = (pSVar15->_2).minimumAlignment;
            uVar17 = (ulong)uVar3;
            if (uVar17 != 0) {
              piVar19 = &((pSVar15->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
                    (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
                  ppIVar10 = &pSVar15->vtable[*piVar19 + 1].methodPtr;
                  goto LAB_0339d9c4;
                }
                uVar17 = uVar17 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar17 != 0);
            }
            ppIVar10 = (Il2CppMethodPointer *)
                       FUN_01b81914(pSVar9,System_Collections_IEnumerator_TypeInfo,1);
LAB_0339d9c4:
            plVar11 = (long *)(**ppIVar10)(pSVar9,(MethodInfo *)ppIVar10[1]);
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if (*(Il2CppClass **)(*plVar11 + 0x40) != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64();
            }
            piVar12 = (int *)thunk_FUN_01bda96c();
            iVar1 = *piVar12;
            if ((ICOEHFKOMGO_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(ICOEHFKOMGO_TypeInfo);
            }
            pIVar18 = ICOEHFKOMGO_TypeInfo->static_fields;
            if (pIVar18->INJOPADMHIN <= iVar1) {
              if ((ICOEHFKOMGO_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(ICOEHFKOMGO_TypeInfo);
                pIVar18 = ICOEHFKOMGO_TypeInfo->static_fields;
              }
              pIVar5 = CADMAOBOPOC_var;
              if (iVar1 < pIVar18->AOCHDECPDCE) {
                if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pSVar6 = System_Type__GetTypeFromHandle
                                   ((System_RuntimeTypeHandle_o)pIVar5,(MethodInfo *)0x0);
                local_6c[0] = iVar1;
                pIVar7 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,local_6c);
                if ((System_Enum_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pSVar8 = System_Enum__GetName(pSVar6,pIVar7,(MethodInfo *)0x0);
                lVar16 = Method_System_Collections_Generic_List<string>_Add__;
                pSVar14 = (__this->fields)._items;
                (__this->fields)._version = (__this->fields)._version + 1;
                if (pSVar14 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                uVar4 = (__this->fields)._size;
                if (uVar4 < (uint)pSVar14->max_length) {
                  (__this->fields)._size = uVar4 + 1;
                  pSVar14->m_Items[(int)uVar4] = pSVar8;
                  thunk_FUN_01c20e04();
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this,
                             (Il2CppObject *)pSVar8,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar12 = piVar12 + 4;
    if (uVar17 == 0) break;
LAB_0339db2c:
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar13 = (undefined8 *)(lVar16 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0339db60;
    }
  }
LAB_0339db44:
  puVar13 = (undefined8 *)FUN_01b81914(plVar11,System_IDisposable_TypeInfo,0);
LAB_0339db60:
  (*(code *)*puVar13)(plVar11,puVar13[1]);
  return __this;
}

