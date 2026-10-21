// Original name: Network.core.events.NetworkEventManager  (obfuscated ICOEHFKOMGO)
// TypeDefIndex 2022
// Namespace: 
// public static class NetworkEventManager
// Fields:
//   private static Dictionary<string, EventType> CDMCPEABCKN; // 0x0
//   private static readonly List<string> FLHAPNICOAN; // 0x8
//   private static readonly int INJOPADMHIN; // 0x10
//   private static readonly int AOCHDECPDCE; // 0x14

// ===== public static void DGLJCGNHLIG()  [RVA 0x329D5D4]
// NetworkEventManager$$DGLJCGNHLIG @ RVA 0x329D5D4

void NetworkEventManager__DGLJCGNHLIG(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if ((DAT_045673ac & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_TypeInfo);
    FUN_01bab630(&NetworkEventManager_TypeInfo);
    DAT_045673ac = 1;
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this,Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>__ctor__);
  if ((NetworkEventManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  NetworkEventManager_TypeInfo->static_fields->CDMCPEABCKN =
       (System_Collections_Generic_Dictionary_string__OGGBALCBCLL__o *)__this;
  thunk_FUN_01c20e04(NetworkEventManager_TypeInfo->static_fields,__this);
  return;
}


// ===== private static List<string> DNPLNFOAMMC()  [RVA 0x329D67C]
// NetworkEventManager$$DNPLNFOAMMC @ RVA 0x329D67C

/* WARNING: Removing unreachable block (ram,0x0339dba8) */
/* WARNING: Type propagation algorithm not settling */

System_Collections_Generic_List_string__o * NetworkEventManager__DNPLNFOAMMC(MethodInfo *method)

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
  NetworkEventManager_StaticFields *pIVar18;
  int32_t *piVar19;
  int local_6c [3];
  
  if ((DAT_045673ad & 1) == 0) {
    FUN_01bab630(&ADPIHKFDKPI_var);
    FUN_01bab630(&ADPIHKFDKPI_TypeInfo);
    FUN_01bab630(&CADMAOBOPOC_var);
    FUN_01bab630(&System_Enum_TypeInfo);
    FUN_01bab630(&NetworkEventManager_TypeInfo);
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
            if ((NetworkEventManager_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(NetworkEventManager_TypeInfo);
            }
            pIVar18 = NetworkEventManager_TypeInfo->static_fields;
            if (pIVar18->INJOPADMHIN <= iVar1) {
              if ((NetworkEventManager_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(NetworkEventManager_TypeInfo);
                pIVar18 = NetworkEventManager_TypeInfo->static_fields;
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


// ===== public static Type HLFDFELPNHP(string CELOLGNMKCG)  [RVA 0x329DC9C]
// NetworkEventManager$$HLFDFELPNHP @ RVA 0x329DC9C

System_Type_o * NetworkEventManager__HLFDFELPNHP(System_String_o *CELOLGNMKCG,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Il2CppObject *pIVar3;
  System_String_o *message;
  MethodInfo *extraout_x1;
  Il2CppClass *left;
  
  if ((DAT_045673ae & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_get_Item__);
    FUN_01bab630(&NetworkEventManager_TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&StringLiteral_9394/*"NetworkEventManager::GetSendType: can't find class with name: "*/);
    DAT_045673ae = 1;
    method = extraout_x1;
  }
  if ((NetworkEventManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NetworkEventManager_TypeInfo,method);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           NetworkEventManager_TypeInfo->static_fields->CDMCPEABCKN;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar2,(Il2CppObject *)CELOLGNMKCG,
                       Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_ContainsKey__
                      );
    if (bVar1) {
      if ((NetworkEventManager_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               NetworkEventManager_TypeInfo->static_fields->CDMCPEABCKN;
      if ((pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
         (pIVar3 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                             (pSVar2,(Il2CppObject *)CELOLGNMKCG,
                              Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_get_Item__
                             ), pIVar3 == (Il2CppObject *)0x0)) goto LAB_0339de08;
      left = pIVar3[1].klass;
    }
    else {
      left = (Il2CppClass *)0x0;
    }
    if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = System_Type__op_Equality((System_Type_o *)left,(System_Type_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      message = System_String__Concat(StringLiteral_9394/*"NetworkEventManager::GetSendType: can't find class with name: "*/,CELOLGNMKCG,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
    }
    return (System_Type_o *)left;
  }
LAB_0339de08:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool EEKGHNMBKND(string KGLJICLJHEL)  [RVA 0x329DE0C]
// NetworkEventManager$$EEKGHNMBKND @ RVA 0x329DE0C

bool NetworkEventManager__EEKGHNMBKND(System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  EventType_o *__this;
  System_String_o *message;
  MethodInfo *extraout_x1;
  
  if ((DAT_045673af & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_get_Item__);
    FUN_01bab630(&NetworkEventManager_TypeInfo);
    FUN_01bab630(&StringLiteral_9391/*"NetworkEvent Error: can't find class with name: "*/);
    DAT_045673af = 1;
    method = extraout_x1;
  }
  if ((NetworkEventManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NetworkEventManager_TypeInfo,method);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           NetworkEventManager_TypeInfo->static_fields->CDMCPEABCKN;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_ContainsKey__
                      );
    if (!bVar1) {
      message = System_String__Concat(StringLiteral_9391/*"NetworkEvent Error: can't find class with name: "*/,KGLJICLJHEL,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
      return false;
    }
    if ((NetworkEventManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             NetworkEventManager_TypeInfo->static_fields->CDMCPEABCKN;
    if ((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (__this = (EventType_o *)
                 System_Collections_Generic_Dictionary<object,_object>__get_Item
                           (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                            Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_get_Item__
                           ), __this != (EventType_o *)0x0)) {
      bVar1 = EventType__GKAJEILCKLG(__this,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool PMEDJDGCDIN(string KGLJICLJHEL)  [RVA 0x329DF48]
// NetworkEventManager$$PMEDJDGCDIN @ RVA 0x329DF48

bool NetworkEventManager__PMEDJDGCDIN(System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  EventType_o *__this;
  System_String_o *message;
  MethodInfo *extraout_x1;
  
  if ((DAT_045673b0 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_get_Item__);
    FUN_01bab630(&NetworkEventManager_TypeInfo);
    FUN_01bab630(&StringLiteral_9391/*"NetworkEvent Error: can't find class with name: "*/);
    DAT_045673b0 = 1;
    method = extraout_x1;
  }
  if ((NetworkEventManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NetworkEventManager_TypeInfo,method);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           NetworkEventManager_TypeInfo->static_fields->CDMCPEABCKN;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_ContainsKey__
                      );
    if (!bVar1) {
      message = System_String__Concat(StringLiteral_9391/*"NetworkEvent Error: can't find class with name: "*/,KGLJICLJHEL,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
      return false;
    }
    if ((NetworkEventManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             NetworkEventManager_TypeInfo->static_fields->CDMCPEABCKN;
    if ((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (__this = (EventType_o *)
                 System_Collections_Generic_Dictionary<object,_object>__get_Item
                           (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                            Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_get_Item__
                           ), __this != (EventType_o *)0x0)) {
      bVar1 = EventType__MBKBBJCFPGL(__this,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void LFENGGKOJDO(string KGLJICLJHEL, Type DCMHEKHDDIL, Type MCEDPEFKJDE)  [RVA 0x329E084]
// NetworkEventManager$$LFENGGKOJDO @ RVA 0x329E084

void NetworkEventManager__LFENGGKOJDO
               (System_String_o *KGLJICLJHEL,System_Type_o *DCMHEKHDDIL,System_Type_o *MCEDPEFKJDE,
               MethodInfo *method)

{
  System_Collections_Generic_List_string__o *JHNJBELOCMB;
  System_Collections_Generic_List_string__o *CBHCNFMLLCM;
  MethodInfo *in_x5;
  
  if ((DAT_045673b1 & 1) == 0) {
    FUN_01bab630(&NetworkEventManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_045673b1 = 1;
  }
  JHNJBELOCMB = (System_Collections_Generic_List_string__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)JHNJBELOCMB,
             Method_System_Collections_Generic_List<string>__ctor__);
  CBHCNFMLLCM = (System_Collections_Generic_List_string__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)CBHCNFMLLCM,
             Method_System_Collections_Generic_List<string>__ctor__);
  if ((NetworkEventManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  NetworkEventManager__LFENGGKOJDO(KGLJICLJHEL,DCMHEKHDDIL,MCEDPEFKJDE,JHNJBELOCMB,CBHCNFMLLCM,in_x5);
  return;
}


// ===== public static void LFENGGKOJDO(string KGLJICLJHEL, Type ACCIHBHMFPN)  [RVA 0x329E39C]
// NetworkEventManager$$LFENGGKOJDO @ RVA 0x329E39C

void NetworkEventManager__LFENGGKOJDO
               (System_String_o *KGLJICLJHEL,System_Type_o *ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Object_array *args;
  long lVar3;
  EventType_o *__this;
  undefined8 uVar4;
  
  if ((DAT_045673b2 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_ContainsKey__);
    FUN_01bab630(&NetworkEventManager_TypeInfo);
    FUN_01bab630(&EventType_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_9395/*"NetworkEventManager:Add: duplicated Name={0} Type={1}"*/);
    DAT_045673b2 = 1;
  }
  if ((NetworkEventManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           NetworkEventManager_TypeInfo->static_fields->CDMCPEABCKN;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_ContainsKey__
                      );
    if (bVar1) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
      if (args != (System_Object_array *)0x0) {
        if ((KGLJICLJHEL != (System_String_o *)0x0) &&
           (lVar3 = thunk_FUN_01bda71c(KGLJICLJHEL,(((args->obj).klass)->_1).element_class),
           lVar3 == 0)) {
LAB_0339e584:
          uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar4,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = (Il2CppObject *)KGLJICLJHEL;
          thunk_FUN_01c20e04(args->m_Items,KGLJICLJHEL);
          if ((ACCIHBHMFPN != (System_Type_o *)0x0) &&
             (lVar3 = thunk_FUN_01bda71c(ACCIHBHMFPN,(((args->obj).klass)->_1).element_class),
             lVar3 == 0)) goto LAB_0339e584;
          if (1 < (uint)args->max_length) {
            args->m_Items[1] = (Il2CppObject *)ACCIHBHMFPN;
            thunk_FUN_01c20e04(args->m_Items + 1,ACCIHBHMFPN);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogFormat(StringLiteral_9395/*"NetworkEventManager:Add: duplicated Name={0} Type={1}"*/,args,(MethodInfo *)0x0);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
    else {
      if ((NetworkEventManager_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               NetworkEventManager_TypeInfo->static_fields->CDMCPEABCKN;
      __this = (EventType_o *)thunk_FUN_01bda818(EventType_TypeInfo);
      EventType___ctor(__this,ACCIHBHMFPN,(MethodInfo *)0x0);
      if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (pSVar2,(Il2CppObject *)KGLJICLJHEL,(Il2CppObject *)__this,
                   Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_Add__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void LFENGGKOJDO(string KGLJICLJHEL, Type DCMHEKHDDIL, Type MCEDPEFKJDE, List<string> JHNJBELOCMB, List<string> CBHCNFMLLCM)  [RVA 0x329E150]
// NetworkEventManager$$LFENGGKOJDO @ RVA 0x329E150

void NetworkEventManager__LFENGGKOJDO
               (System_String_o *KGLJICLJHEL,System_Type_o *DCMHEKHDDIL,System_Type_o *MCEDPEFKJDE,
               System_Collections_Generic_List_string__o *JHNJBELOCMB,
               System_Collections_Generic_List_string__o *CBHCNFMLLCM,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Object_array *args;
  long lVar3;
  EventType_o *__this;
  undefined8 uVar4;
  
  if ((DAT_045673b3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_ContainsKey__);
    FUN_01bab630(&NetworkEventManager_TypeInfo);
    FUN_01bab630(&EventType_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_9396/*"NetworkEventManager:Add: duplicated Name={0} sendType={1} responseType={2}"*/);
    DAT_045673b3 = 1;
  }
  if ((NetworkEventManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           NetworkEventManager_TypeInfo->static_fields->CDMCPEABCKN;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_ContainsKey__
                      );
    if (bVar1) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,3);
      if (args != (System_Object_array *)0x0) {
        if ((KGLJICLJHEL != (System_String_o *)0x0) &&
           (lVar3 = thunk_FUN_01bda71c(KGLJICLJHEL,(((args->obj).klass)->_1).element_class),
           lVar3 == 0)) {
LAB_0339e390:
          uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar4,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = (Il2CppObject *)KGLJICLJHEL;
          thunk_FUN_01c20e04(args->m_Items,KGLJICLJHEL);
          if ((DCMHEKHDDIL != (System_Type_o *)0x0) &&
             (lVar3 = thunk_FUN_01bda71c(DCMHEKHDDIL,(((args->obj).klass)->_1).element_class),
             lVar3 == 0)) goto LAB_0339e390;
          if (1 < (uint)args->max_length) {
            args->m_Items[1] = (Il2CppObject *)DCMHEKHDDIL;
            thunk_FUN_01c20e04(args->m_Items + 1,DCMHEKHDDIL);
            if ((MCEDPEFKJDE != (System_Type_o *)0x0) &&
               (lVar3 = thunk_FUN_01bda71c(MCEDPEFKJDE,(((args->obj).klass)->_1).element_class),
               lVar3 == 0)) goto LAB_0339e390;
            if (2 < (uint)args->max_length) {
              args->m_Items[2] = (Il2CppObject *)MCEDPEFKJDE;
              thunk_FUN_01c20e04(args->m_Items + 2,MCEDPEFKJDE);
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              UnityEngine_Debug__LogFormat(StringLiteral_9396/*"NetworkEventManager:Add: duplicated Name={0} sendType={1} responseType={2}"*/,args,(MethodInfo *)0x0);
              return;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
    else {
      if ((NetworkEventManager_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               NetworkEventManager_TypeInfo->static_fields->CDMCPEABCKN;
      __this = (EventType_o *)thunk_FUN_01bda818(EventType_TypeInfo);
      EventType___ctor(__this,DCMHEKHDDIL,MCEDPEFKJDE,JHNJBELOCMB,CBHCNFMLLCM,(MethodInfo *)0x0);
      if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (pSVar2,(Il2CppObject *)KGLJICLJHEL,(Il2CppObject *)__this,
                   Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_Add__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x329E590]
// NetworkEventManager$$.cctor @ RVA 0x329E590

void NetworkEventManager___cctor(MethodInfo *method)

{
  MethodInfo *method_00;
  System_Collections_Generic_List_string__o *pSVar1;
  NetworkEventManager_StaticFields *pIVar2;
  System_Collections_Generic_List_string__o **ppSVar3;
  
  if ((DAT_045673b4 & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&NetworkEventManager_TypeInfo);
    DAT_045673b4 = 1;
  }
  pIVar2 = NetworkEventManager_TypeInfo->static_fields;
  pIVar2->INJOPADMHIN = 10000;
  pIVar2->AOCHDECPDCE = 20000;
  NetworkEventManager__DGLJCGNHLIG(method);
  pSVar1 = NetworkEventManager__DNPLNFOAMMC(method_00);
  ppSVar3 = &NetworkEventManager_TypeInfo->static_fields->FLHAPNICOAN;
  *ppSVar3 = pSVar1;
  thunk_FUN_01c20e04(ppSVar3,pSVar1);
  return;
}


// ===== public static Type AAANKDGBOKJ(string KGLJICLJHEL)  [RVA 0x329E5FC]
// NetworkEventManager$$AAANKDGBOKJ @ RVA 0x329E5FC

System_Type_o * NetworkEventManager__AAANKDGBOKJ(System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Il2CppObject *pIVar3;
  System_String_o *message;
  MethodInfo *extraout_x1;
  System_Type_o *left;
  
  if ((DAT_045673b5 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_get_Item__);
    FUN_01bab630(&NetworkEventManager_TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&StringLiteral_9393/*"NetworkEventManager::GetClass: can't find class with name: "*/);
    DAT_045673b5 = 1;
    method = extraout_x1;
  }
  if ((NetworkEventManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NetworkEventManager_TypeInfo,method);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           NetworkEventManager_TypeInfo->static_fields->CDMCPEABCKN;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_ContainsKey__
                      );
    if (bVar1) {
      if ((NetworkEventManager_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               NetworkEventManager_TypeInfo->static_fields->CDMCPEABCKN;
      if ((pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
         (pIVar3 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                             (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                              Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_get_Item__
                             ), pIVar3 == (Il2CppObject *)0x0)) goto LAB_0339e768;
      left = pIVar3[1].monitor;
    }
    else {
      left = (System_Type_o *)0x0;
    }
    if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = System_Type__op_Equality(left,(System_Type_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      message = System_String__Concat(StringLiteral_9393/*"NetworkEventManager::GetClass: can't find class with name: "*/,KGLJICLJHEL,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
    }
    return left;
  }
LAB_0339e768:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool KDDNLLKJEOK(string KGLJICLJHEL)  [RVA 0x329E76C]
// NetworkEventManager$$KDDNLLKJEOK @ RVA 0x329E76C

bool NetworkEventManager__KDDNLLKJEOK(System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  EventType_o *__this;
  System_String_o *message;
  MethodInfo *extraout_x1;
  
  if ((DAT_045673b6 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_get_Item__);
    FUN_01bab630(&NetworkEventManager_TypeInfo);
    FUN_01bab630(&StringLiteral_9391/*"NetworkEvent Error: can't find class with name: "*/);
    DAT_045673b6 = 1;
    method = extraout_x1;
  }
  if ((NetworkEventManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NetworkEventManager_TypeInfo,method);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           NetworkEventManager_TypeInfo->static_fields->CDMCPEABCKN;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_ContainsKey__
                      );
    if (!bVar1) {
      message = System_String__Concat(StringLiteral_9391/*"NetworkEvent Error: can't find class with name: "*/,KGLJICLJHEL,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
      return false;
    }
    if ((NetworkEventManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             NetworkEventManager_TypeInfo->static_fields->CDMCPEABCKN;
    if ((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (__this = (EventType_o *)
                 System_Collections_Generic_Dictionary<object,_object>__get_Item
                           (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                            Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_get_Item__
                           ), __this != (EventType_o *)0x0)) {
      bVar1 = EventType__JILLNCBMKNL(__this,(MethodInfo *)0x0);
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static List<string> BKHDOCFLEPE(string KGLJICLJHEL)  [RVA 0x329E8A8]
// NetworkEventManager$$BKHDOCFLEPE @ RVA 0x329E8A8

System_Collections_Generic_List_string__o *
NetworkEventManager__BKHDOCFLEPE(System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Il2CppObject *pIVar3;
  System_Collections_Generic_List_string__o *pSVar4;
  MethodInfo *extraout_x1;
  Il2CppClass *collection;
  
  if ((DAT_045673b7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_get_Item__);
    FUN_01bab630(&NetworkEventManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_045673b7 = 1;
    method = extraout_x1;
  }
  if ((NetworkEventManager_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NetworkEventManager_TypeInfo,method);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           NetworkEventManager_TypeInfo->static_fields->CDMCPEABCKN;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_ContainsKey__
                      );
    if (!bVar1) {
      pSVar4 = (System_Collections_Generic_List_string__o *)
               thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)pSVar4,
                 Method_System_Collections_Generic_List<string>__ctor__);
      return pSVar4;
    }
    if ((NetworkEventManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             NetworkEventManager_TypeInfo->static_fields->CDMCPEABCKN;
    if ((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (pIVar3 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                           (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                            Method_System_Collections_Generic_Dictionary<string,_OGGBALCBCLL>_get_Item__
                           ), pIVar3 != (Il2CppObject *)0x0)) {
      collection = pIVar3[2].klass;
      pSVar4 = (System_Collections_Generic_List_string__o *)
               thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)pSVar4,
                 (System_Collections_Generic_IEnumerable_T__o *)collection,
                 Method_System_Collections_Generic_List<string>__ctor__);
      if (pSVar4 != (System_Collections_Generic_List_string__o *)0x0) {
        System_Collections_Generic_List<object>__AddRange
                  ((System_Collections_Generic_List_object__o *)pSVar4,
                   (System_Collections_Generic_IEnumerable_T__o *)
                   NetworkEventManager_TypeInfo->static_fields->FLHAPNICOAN,
                   Method_System_Collections_Generic_List<string>_AddRange__);
        return pSVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

