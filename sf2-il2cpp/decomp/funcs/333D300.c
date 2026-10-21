// EDCPLIPMJOH$$KFPCALCDIMO @ RVA 0x333D300

System_Collections_Generic_IReadOnlyList_string__o * EDCPLIPMJOH__KFPCALCDIMO(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_IReadOnlyList_string__o *pSVar3;
  System_Collections_Generic_List_object__o *__this;
  System_Byte_array *pSVar4;
  System_Byte_array *pSVar5;
  System_String_o *pSVar6;
  System_Object_array *pSVar7;
  
  if ((DAT_04567975 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6421);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6422);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6423);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6424);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6425);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6426);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6427);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6428);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6429);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6430);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6431);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6432);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6433);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6434);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&EDCPLIPMJOH_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04567975 = 1;
  }
  pSVar3 = EDCPLIPMJOH_TypeInfo->static_fields->HCCBNCJLCJJ;
  if (pSVar3 != (System_Collections_Generic_IReadOnlyList_string__o *)0x0) {
    return pSVar3;
  }
  __this = (System_Collections_Generic_List_object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this,Method_System_Collections_Generic_List<string>__ctor__);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6421,(MethodInfo *)0x0);
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6422,(MethodInfo *)0x0);
  pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar7 = (__this->fields)._items;
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pSVar7 != (System_Object_array *)0x0) {
      uVar1 = (__this->fields)._size;
      if (uVar1 < (uint)pSVar7->max_length) {
        (__this->fields)._size = uVar1 + 1;
        pSVar7->m_Items[(int)uVar1] = (Il2CppObject *)pSVar6;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this,(Il2CppObject *)pSVar6,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6423,
                 (MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6424,
                 (MethodInfo *)0x0);
      pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      pSVar7 = (__this->fields)._items;
      (__this->fields)._version = (__this->fields)._version + 1;
      if (pSVar7 != (System_Object_array *)0x0) {
        uVar1 = (__this->fields)._size;
        if (uVar1 < (uint)pSVar7->max_length) {
          (__this->fields)._size = uVar1 + 1;
          pSVar7->m_Items[(int)uVar1] = (Il2CppObject *)pSVar6;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this,(Il2CppObject *)pSVar6,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6425,
                   (MethodInfo *)0x0);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6426,
                   (MethodInfo *)0x0);
        pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<string>_Add__;
        pSVar7 = (__this->fields)._items;
        (__this->fields)._version = (__this->fields)._version + 1;
        if (pSVar7 != (System_Object_array *)0x0) {
          uVar1 = (__this->fields)._size;
          if (uVar1 < (uint)pSVar7->max_length) {
            (__this->fields)._size = uVar1 + 1;
            pSVar7->m_Items[(int)uVar1] = (Il2CppObject *)pSVar6;
            thunk_FUN_01c20e04();
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this,(Il2CppObject *)pSVar6,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6427,
                     (MethodInfo *)0x0);
          pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar5,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6428,
                     (MethodInfo *)0x0);
          pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
          lVar2 = Method_System_Collections_Generic_List<string>_Add__;
          pSVar7 = (__this->fields)._items;
          (__this->fields)._version = (__this->fields)._version + 1;
          if (pSVar7 != (System_Object_array *)0x0) {
            uVar1 = (__this->fields)._size;
            if (uVar1 < (uint)pSVar7->max_length) {
              (__this->fields)._size = uVar1 + 1;
              pSVar7->m_Items[(int)uVar1] = (Il2CppObject *)pSVar6;
              thunk_FUN_01c20e04();
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this,(Il2CppObject *)pSVar6,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar4,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6429,
                       (MethodInfo *)0x0);
            pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                      ((System_Array_o *)pSVar5,
                       Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6430,
                       (MethodInfo *)0x0);
            pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
            lVar2 = Method_System_Collections_Generic_List<string>_Add__;
            pSVar7 = (__this->fields)._items;
            (__this->fields)._version = (__this->fields)._version + 1;
            if (pSVar7 != (System_Object_array *)0x0) {
              uVar1 = (__this->fields)._size;
              if (uVar1 < (uint)pSVar7->max_length) {
                (__this->fields)._size = uVar1 + 1;
                pSVar7->m_Items[(int)uVar1] = (Il2CppObject *)pSVar6;
                thunk_FUN_01c20e04();
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          (__this,(Il2CppObject *)pSVar6,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
              pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar4,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6431,
                         (MethodInfo *)0x0);
              pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar5,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6432,
                         (MethodInfo *)0x0);
              pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
              lVar2 = Method_System_Collections_Generic_List<string>_Add__;
              pSVar7 = (__this->fields)._items;
              (__this->fields)._version = (__this->fields)._version + 1;
              if (pSVar7 != (System_Object_array *)0x0) {
                uVar1 = (__this->fields)._size;
                if (uVar1 < (uint)pSVar7->max_length) {
                  (__this->fields)._size = uVar1 + 1;
                  pSVar7->m_Items[(int)uVar1] = (Il2CppObject *)pSVar6;
                  thunk_FUN_01c20e04();
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            (__this,(Il2CppObject *)pSVar6,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                }
                pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar4,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6433,
                           (MethodInfo *)0x0);
                pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          ((System_Array_o *)pSVar5,
                           Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6434,
                           (MethodInfo *)0x0);
                pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar4,pSVar5,(MethodInfo *)0x0);
                lVar2 = Method_System_Collections_Generic_List<string>_Add__;
                pSVar7 = (__this->fields)._items;
                (__this->fields)._version = (__this->fields)._version + 1;
                if (pSVar7 != (System_Object_array *)0x0) {
                  uVar1 = (__this->fields)._size;
                  if (uVar1 < (uint)pSVar7->max_length) {
                    (__this->fields)._size = uVar1 + 1;
                    pSVar7->m_Items[(int)uVar1] = (Il2CppObject *)pSVar6;
                    thunk_FUN_01c20e04();
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              (__this,(Il2CppObject *)pSVar6,
                               *(MethodInfo_26E4DAC **)
                                (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                  }
                  EDCPLIPMJOH_TypeInfo->static_fields->HCCBNCJLCJJ =
                       (System_Collections_Generic_IReadOnlyList_string__o *)__this;
                  thunk_FUN_01c20e04(EDCPLIPMJOH_TypeInfo->static_fields,__this);
                  return EDCPLIPMJOH_TypeInfo->static_fields->HCCBNCJLCJJ;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

