// TypeDefIndex 3144
// Namespace: 
// public class LCNCCGOAJBL : IEJKLPPLHMO
// Fields:
//   private static int FEBKHIENJBN; // 0x0
//   private static List<string> DFIBPGKOKEG; // 0x8

// ===== private static string NPHMNOHFHFB()  [RVA 0x34D5574]
// LCNCCGOAJBL$$NPHMNOHFHFB @ RVA 0x34D5574

System_String_o * LCNCCGOAJBL__NPHMNOHFHFB(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  LCNCCGOAJBL_c *method_00;
  System_Collections_Generic_List_string__o *__this;
  System_Text_StringBuilder_o *__this_00;
  System_String_array *values;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  int local_64;
  
  if ((DAT_045686d5 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4655);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4656);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4657);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4658);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4659);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4660);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&LCNCCGOAJBL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_045686d5 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  method_00 = LCNCCGOAJBL_TypeInfo;
  if ((LCNCCGOAJBL_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (LCNCCGOAJBL_c *)thunk_FUN_01ba7564();
  }
  __this = LCNCCGOAJBL__GPAIEPMDALL((MethodInfo *)method_00);
  __this_00 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  local_64 = 0;
  if (__this != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)__this,
               Method_System_Collections_Generic_List<string>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__),
          pIVar1 = local_80.fields._current, bVar2) {
      local_64 = local_64 + 1;
      values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
      pSVar5 = StringLiteral_1/*""*/;
      if (local_64 < 10) {
        pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar3,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4655,
                   (MethodInfo *)0x0);
        pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar4,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4656,
                   (MethodInfo *)0x0);
        pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      }
      if (values == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((int)values->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      values->m_Items[0] = pSVar5;
      thunk_FUN_01c20e04();
      pSVar5 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
      if ((uint)values->max_length < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      values->m_Items[1] = pSVar5;
      thunk_FUN_01c20e04();
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4657,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4658,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      if ((uint)values->max_length < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      values->m_Items[2] = pSVar5;
      thunk_FUN_01c20e04();
      if ((uint)values->max_length < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      values->m_Items[3] = (System_String_o *)pIVar1;
      thunk_FUN_01c20e04(values->m_Items + 3,pIVar1);
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4659,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4660,
                 (MethodInfo *)0x0);
      pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      if ((uint)values->max_length < 5) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      values->m_Items[4] = pSVar5;
      thunk_FUN_01c20e04();
      pSVar5 = System_String__Concat(values,(MethodInfo *)0x0);
      if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Text_StringBuilder__Append(__this_00,pSVar5,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
      pSVar5 = (System_String_o *)
               (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                         (__this_00,(__this_00->klass->vtable)._3_ToString.method);
      return pSVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static List<string> GPAIEPMDALL()  [RVA 0x34D5A40]
// LCNCCGOAJBL$$GPAIEPMDALL @ RVA 0x34D5A40

/* WARNING: Removing unreachable block (ram,0x035d605c) */
/* WARNING: Removing unreachable block (ram,0x035d5d3c) */
/* WARNING: Removing unreachable block (ram,0x035d5d40) */
/* WARNING: Removing unreachable block (ram,0x035d5f04) */

System_Collections_Generic_List_string__o * LCNCCGOAJBL__GPAIEPMDALL(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  System_Collections_Generic_List_string__o *pSVar5;
  System_Collections_Generic_List_string__o **ppSVar6;
  System_Collections_Generic_List_MEJIKMPNBNL__o *pSVar7;
  Il2CppClass *pIVar8;
  System_String_array *pSVar9;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045686d6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_get_Current__);
    FUN_01bab630(&LCNCCGOAJBL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Sort__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045686d6 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  if ((LCNCCGOAJBL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (LCNCCGOAJBL_TypeInfo->static_fields->DFIBPGKOKEG !=
      (System_Collections_Generic_List_string__o *)0x0) {
LAB_035d5fac:
    if ((LCNCCGOAJBL_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    return LCNCCGOAJBL_TypeInfo->static_fields->DFIBPGKOKEG;
  }
  pSVar5 = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar5,
             Method_System_Collections_Generic_List<string>__ctor__);
  if ((LCNCCGOAJBL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  ppSVar6 = &LCNCCGOAJBL_TypeInfo->static_fields->DFIBPGKOKEG;
  *ppSVar6 = pSVar5;
  thunk_FUN_01c20e04(ppSVar6,pSVar5);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar7 = NLPJLHOEAOE__BLNDKLMBIPN((MethodInfo *)0x0);
  if (pSVar7 != (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_List_object__o *)pSVar7,
               Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
    local_80.fields._index = local_b8.fields._index;
    local_80.fields._version = local_b8.fields._version;
    local_80.fields._list = local_b8.fields._list;
    local_80.fields._current = local_b8.fields._current;
    while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__
                             ), bVar4) {
      if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (local_80.fields._current[3].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_b8,
                 (System_Collections_Generic_List_object__o *)local_80.fields._current[3].klass,
                 Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
      local_a0.fields._index = local_b8.fields._index;
      local_a0.fields._version = local_b8.fields._version;
      local_a0.fields._list = local_b8.fields._list;
      local_a0.fields._current = local_b8.fields._current;
      while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_a0,
                                Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__
                               ), pIVar3 = local_a0.fields._current, bVar4) {
        if ((LCNCCGOAJBL_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (pIVar3 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar5 = LCNCCGOAJBL_TypeInfo->static_fields->DFIBPGKOKEG;
        if (pSVar5 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar4 = System_Collections_Generic_List<object>__Contains
                          ((System_Collections_Generic_List_object__o *)pSVar5,
                           (Il2CppObject *)pIVar3[7].klass,
                           Method_System_Collections_Generic_List<string>_Contains__);
        if (!bVar4) {
          if ((LCNCCGOAJBL_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          lVar2 = Method_System_Collections_Generic_List<string>_Add__;
          pSVar5 = LCNCCGOAJBL_TypeInfo->static_fields->DFIBPGKOKEG;
          if (pSVar5 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pIVar8 = pIVar3[7].klass;
          pSVar9 = (pSVar5->fields)._items;
          (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
          if (pSVar9 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar1 = (pSVar5->fields)._size;
          if (uVar1 < (uint)pSVar9->max_length) {
            (pSVar5->fields)._size = uVar1 + 1;
            pSVar9->m_Items[(int)uVar1] = (System_String_o *)pIVar8;
            thunk_FUN_01c20e04(pSVar9->m_Items + (int)uVar1);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)pIVar8,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_a0,Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__)
      ;
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar7 = NLPJLHOEAOE__CJNJOLEKIIK((MethodInfo *)0x0);
    if (pSVar7 != (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_b8,(System_Collections_Generic_List_object__o *)pSVar7,
                 Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
      local_80.fields._index = local_b8.fields._index;
      local_80.fields._version = local_b8.fields._version;
      local_80.fields._list = local_b8.fields._list;
      local_80.fields._current = local_b8.fields._current;
      while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__
                               ), bVar4) {
        if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (local_80.fields._current[3].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_b8,
                   (System_Collections_Generic_List_object__o *)local_80.fields._current[3].klass,
                   Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
        local_a0.fields._index = local_b8.fields._index;
        local_a0.fields._version = local_b8.fields._version;
        local_a0.fields._list = local_b8.fields._list;
        local_a0.fields._current = local_b8.fields._current;
        while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_a0,
                                  Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__
                                 ), pIVar3 = local_a0.fields._current, bVar4) {
          if ((LCNCCGOAJBL_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (pIVar3 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar5 = LCNCCGOAJBL_TypeInfo->static_fields->DFIBPGKOKEG;
          if (pSVar5 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar4 = System_Collections_Generic_List<object>__Contains
                            ((System_Collections_Generic_List_object__o *)pSVar5,
                             (Il2CppObject *)pIVar3[7].klass,
                             Method_System_Collections_Generic_List<string>_Contains__);
          if (!bVar4) {
            if ((LCNCCGOAJBL_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            lVar2 = Method_System_Collections_Generic_List<string>_Add__;
            pSVar5 = LCNCCGOAJBL_TypeInfo->static_fields->DFIBPGKOKEG;
            if (pSVar5 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pIVar8 = pIVar3[7].klass;
            pSVar9 = (pSVar5->fields)._items;
            (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
            if (pSVar9 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar1 = (pSVar5->fields)._size;
            if (uVar1 < (uint)pSVar9->max_length) {
              (pSVar5->fields)._size = uVar1 + 1;
              pSVar9->m_Items[(int)uVar1] = (System_String_o *)pIVar8;
              thunk_FUN_01c20e04(pSVar9->m_Items + (int)uVar1);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)pIVar8,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_a0,
                   Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__)
      ;
      if ((LCNCCGOAJBL_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar5 = LCNCCGOAJBL_TypeInfo->static_fields->DFIBPGKOKEG;
      if (pSVar5 != (System_Collections_Generic_List_string__o *)0x0) {
        System_Collections_Generic_List<object>__Sort
                  ((System_Collections_Generic_List_object__o *)pSVar5,
                   Method_System_Collections_Generic_List<string>_Sort__);
        goto LAB_035d5fac;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string IGMDDJFPIJL()  [RVA 0x34D6180]
// LCNCCGOAJBL$$IGMDDJFPIJL @ RVA 0x34D6180

System_String_o * LCNCCGOAJBL__IGMDDJFPIJL(LCNCCGOAJBL_o *__this,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_045686d7 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy256___field_0);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4661);
    FUN_01bab630(&byte___TypeInfo);
    DAT_045686d7 = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4661,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x100);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy256___field_0,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public string AJJLBBCJAAL(string[] OPAEPDIIOEB)  [RVA 0x34D6230]
// LCNCCGOAJBL$$AJJLBBCJAAL @ RVA 0x34D6230

System_String_o *
LCNCCGOAJBL__AJJLBBCJAAL(LCNCCGOAJBL_o *__this,System_String_array *OPAEPDIIOEB,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  MethodInfo *pMVar7;
  MethodInfo *pMVar8;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  System_Collections_Generic_List_string__o **ppSVar11;
  System_String_array *pSVar12;
  HJNDPNIMBBG_o *__this_00;
  UniRx_IScheduler_o *pUVar13;
  System_Action_o **ppSVar14;
  VirtualInvokeData *pVVar15;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  UniRx_IScheduler_c *pUVar16;
  ulong uVar17;
  int32_t *piVar18;
  System_String_o *pSVar19;
  System_Action_o *pSVar20;
  undefined1 auVar21 [16];
  
  if ((DAT_045686d8 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4662);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4663);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4664);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4665);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4666);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4667);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4668);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4669);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4670);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4671);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4672);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4673);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4674);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4675);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4676);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4677);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4678);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4679);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4680);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4681);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4682);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4683);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4684);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4685);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4686);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4687);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UniRx_IScheduler_TypeInfo);
    FUN_01bab630(&LCNCCGOAJBL_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UniRx_Scheduler_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&Method_LCNCCGOAJBL_<>c_ODLMLJCPDMH__);
    FUN_01bab630(&LCNCCGOAJBL_<>c_TypeInfo);
    DAT_045686d8 = 1;
  }
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4662,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4663,(MethodInfo *)0x0);
  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4664,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4665,(MethodInfo *)0x0);
  pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  if (OPAEPDIIOEB == (System_String_array *)0x0) goto LAB_035d6d48;
  pSVar19 = pSVar6;
  pMVar8 = extraout_x1;
  if (OPAEPDIIOEB->max_length == 0) {
LAB_035d64ec:
    pSVar5 = LCNCCGOAJBL__IGMDDJFPIJL((LCNCCGOAJBL_o *)pSVar19,pMVar8);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4680,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4681,(MethodInfo *)0x0)
    ;
    pMVar7 = (MethodInfo *)OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    pMVar8 = pMVar7;
    if ((LCNCCGOAJBL_TypeInfo->_2).cctor_finished == 0) {
      pMVar8 = (MethodInfo *)thunk_FUN_01ba7564(LCNCCGOAJBL_TypeInfo);
    }
LAB_035d6698:
    pSVar6 = LCNCCGOAJBL__NPHMNOHFHFB(pMVar8);
    pSVar5 = System_String__Concat(pSVar5,(System_String_o *)pMVar7,pSVar6,(MethodInfo *)0x0);
    return pSVar5;
  }
  if ((int)OPAEPDIIOEB->max_length == 0) goto LAB_035d6d44;
  bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(OPAEPDIIOEB->m_Items[0],(MethodInfo *)0x0);
  pSVar19 = (System_String_o *)(ulong)bVar2;
  pMVar8 = extraout_x1_00;
  if (bVar2) goto LAB_035d64ec;
  if ((int)OPAEPDIIOEB->max_length == 0) goto LAB_035d6d44;
  pSVar19 = OPAEPDIIOEB->m_Items[0];
  if (pSVar19 == (System_String_o *)0x0) goto LAB_035d6d48;
  pSVar9 = System_String__ToUpper(pSVar19,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4666,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4667,(MethodInfo *)0x0);
  pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  bVar2 = System_String__op_Equality(pSVar9,pSVar10,(MethodInfo *)0x0);
  if (bVar2) {
    if ((LCNCCGOAJBL_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ppSVar11 = &LCNCCGOAJBL_TypeInfo->static_fields->DFIBPGKOKEG;
    *ppSVar11 = (System_Collections_Generic_List_string__o *)0x0;
    auVar21 = thunk_FUN_01c20e04(ppSVar11,0);
    LCNCCGOAJBL_TypeInfo->static_fields->FEBKHIENJBN = -1;
    pSVar5 = LCNCCGOAJBL__IGMDDJFPIJL(auVar21._0_8_,auVar21._8_8_);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4668,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4669,(MethodInfo *)0x0)
    ;
    pMVar8 = (MethodInfo *)OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    pMVar7 = pMVar8;
    goto LAB_035d6698;
  }
  pSVar9 = System_String__ToUpper(pSVar19,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4670,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4671,(MethodInfo *)0x0);
  pSVar10 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  bVar2 = System_String__op_Equality(pSVar9,pSVar10,(MethodInfo *)0x0);
  pMVar8 = (MethodInfo *)(ulong)bVar2;
  if ((LCNCCGOAJBL_TypeInfo->_2).cctor_finished == 0) {
    auVar21 = thunk_FUN_01ba7564(LCNCCGOAJBL_TypeInfo);
    pMVar7 = auVar21._8_8_;
    pMVar8 = auVar21._0_8_;
    if (!bVar2) goto LAB_035d6768;
LAB_035d6754:
    pSVar19 = LCNCCGOAJBL__JPMJECDEGDC(pMVar8);
  }
  else {
    pMVar7 = extraout_x1_01;
    if (bVar2) goto LAB_035d6754;
LAB_035d6768:
    pSVar19 = LCNCCGOAJBL__PDDMBMNOHKH(pSVar19,pMVar7);
  }
  pSVar9 = NHBBOEHHEKG__DELGACJHIMA(pSVar19,(MethodInfo *)0x0);
  pSVar9 = CMEBCBKGFFL__PMNIOGKDGFD(pSVar9,(MethodInfo *)0x0);
  bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar9,(MethodInfo *)0x0);
  if (bVar2) {
    pSVar12 = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4674,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4675,(MethodInfo *)0x0)
    ;
    pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    if (pSVar12 == (System_String_array *)0x0) goto LAB_035d6d48;
    if ((int)pSVar12->max_length == 0) goto LAB_035d6d44;
    pSVar12->m_Items[0] = pSVar9;
    thunk_FUN_01c20e04();
    if (((int)OPAEPDIIOEB->max_length == 0) || ((uint)pSVar12->max_length < 2)) goto LAB_035d6d44;
    pSVar12->m_Items[1] = OPAEPDIIOEB->m_Items[0];
    thunk_FUN_01c20e04(pSVar12->m_Items + 1);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4676,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4677,(MethodInfo *)0x0)
    ;
    pSVar9 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    if ((uint)pSVar12->max_length < 3) goto LAB_035d6d44;
    pSVar12->m_Items[2] = pSVar9;
    thunk_FUN_01c20e04(pSVar12->m_Items + 2,pSVar9);
    if ((uint)pSVar12->max_length < 4) goto LAB_035d6d44;
    pSVar12->m_Items[3] = pSVar19;
    thunk_FUN_01c20e04(pSVar12->m_Items + 3,pSVar19);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4678,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4679,(MethodInfo *)0x0)
    ;
    pSVar19 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    if ((uint)pSVar12->max_length < 5) goto LAB_035d6d44;
    pSVar12->m_Items[4] = pSVar19;
    thunk_FUN_01c20e04();
    pSVar9 = System_String__Concat(pSVar12,(MethodInfo *)0x0);
    pSVar19 = pSVar5;
  }
  else {
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4672,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4673,(MethodInfo *)0x0)
    ;
    pSVar6 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    pSVar9 = (System_String_o *)0x0;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7e == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7e = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_FGIDANNEKFM_k__BackingField;
  if (__this_00 != (HJNDPNIMBBG_o *)0x0) {
    HJNDPNIMBBG__LAPNHIJGIGH(__this_00,pSVar19,(MethodInfo *)0x0);
    if ((UniRx_Scheduler_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar13 = UniRx_Scheduler__get_MainThreadEndOfFrame((MethodInfo *)0x0);
    if ((LCNCCGOAJBL_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LCNCCGOAJBL_<>c_TypeInfo);
    }
    pSVar20 = LCNCCGOAJBL_<>c_TypeInfo->static_fields->__9__4_0;
    if (pSVar20 == (System_Action_o *)0x0) {
      if ((LCNCCGOAJBL_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(LCNCCGOAJBL_<>c_TypeInfo);
      }
      pSVar20 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      ppSVar14 = &LCNCCGOAJBL_<>c_TypeInfo->static_fields->__9__4_0;
      *ppSVar14 = pSVar20;
      thunk_FUN_01c20e04(ppSVar14,pSVar20);
    }
    if (pUVar13 != (UniRx_IScheduler_o *)0x0) {
      pUVar16 = pUVar13->klass;
      uVar1._0_1_ = (pUVar16->_2).rank;
      uVar1._1_1_ = (pUVar16->_2).minimumAlignment;
      uVar17 = (ulong)uVar1;
      if (uVar17 != 0) {
        piVar18 = &((pUVar16->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
              (Il2CppClass *)UniRx_IScheduler_TypeInfo) {
            pVVar15 = pUVar16->vtable + (*piVar18 + 1);
            goto LAB_035d6b38;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      pVVar15 = (VirtualInvokeData *)FUN_01b81914(pUVar13,UniRx_IScheduler_TypeInfo,1);
LAB_035d6b38:
      (*pVVar15->methodPtr)(pUVar13,pSVar20,pVVar15->method);
      pSVar12 = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
      if (pSVar12 != (System_String_array *)0x0) {
        if ((int)pSVar12->max_length != 0) {
          pSVar12->m_Items[0] = pSVar9;
          thunk_FUN_01c20e04(pSVar12->m_Items,pSVar9);
          pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar3,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4682,
                     (MethodInfo *)0x0);
          pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)pSVar4,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4683,
                     (MethodInfo *)0x0);
          pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
          if (1 < (uint)pSVar12->max_length) {
            pSVar12->m_Items[1] = pSVar5;
            thunk_FUN_01c20e04(pSVar12->m_Items + 1,pSVar5);
            if (2 < (uint)pSVar12->max_length) {
              pSVar12->m_Items[2] = pSVar6;
              thunk_FUN_01c20e04(pSVar12->m_Items + 2,pSVar6);
              pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar3,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4684,
                         (MethodInfo *)0x0);
              pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                        ((System_Array_o *)pSVar4,
                         Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4685,
                         (MethodInfo *)0x0);
              pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
              if (3 < (uint)pSVar12->max_length) {
                pSVar12->m_Items[3] = pSVar5;
                thunk_FUN_01c20e04(pSVar12->m_Items + 3,pSVar5);
                if (4 < (uint)pSVar12->max_length) {
                  pSVar12->m_Items[4] = pSVar19;
                  thunk_FUN_01c20e04(pSVar12->m_Items + 4,pSVar19);
                  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar3,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4686,
                             (MethodInfo *)0x0);
                  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            ((System_Array_o *)pSVar4,
                             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4687,
                             (MethodInfo *)0x0);
                  pSVar5 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
                  if (5 < (uint)pSVar12->max_length) {
                    pSVar12->m_Items[5] = pSVar5;
                    thunk_FUN_01c20e04();
                    pSVar5 = System_String__Concat(pSVar12,(MethodInfo *)0x0);
                    return pSVar5;
                  }
                }
              }
            }
          }
        }
LAB_035d6d44:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
  }
LAB_035d6d48:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x34D701C]
// LCNCCGOAJBL$$.ctor @ RVA 0x34D701C

void LCNCCGOAJBL___ctor(LCNCCGOAJBL_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static string PDDMBMNOHKH(string HMMBINEDODK)  [RVA 0x34D6D4C]
// LCNCCGOAJBL$$PDDMBMNOHKH @ RVA 0x34D6D4C

System_String_o * LCNCCGOAJBL__PDDMBMNOHKH(System_String_o *HMMBINEDODK,MethodInfo *method)

{
  bool bVar1;
  LCNCCGOAJBL_c *method_00;
  System_Collections_Generic_List_string__o *__this;
  System_String_o *pSVar2;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  int32_t local_14;
  
  if ((DAT_045686d9 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4688);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4689);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&LCNCCGOAJBL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    DAT_045686d9 = 1;
  }
  local_14 = -1;
  bVar1 = System_Int32__TryParse(HMMBINEDODK,&local_14,(MethodInfo *)0x0);
  if (bVar1) {
    local_14 = local_14 + -1;
    method_00 = LCNCCGOAJBL_TypeInfo;
    if ((LCNCCGOAJBL_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (LCNCCGOAJBL_c *)thunk_FUN_01ba7564();
    }
    __this = LCNCCGOAJBL__GPAIEPMDALL((MethodInfo *)method_00);
    if (-1 < local_14) {
      if (__this == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (local_14 < (__this->fields)._size) {
        pSVar2 = (System_String_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this,local_14,
                            Method_System_Collections_Generic_List<string>_get_Item__);
        return pSVar2;
      }
    }
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4688,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4689,(MethodInfo *)0x0)
    ;
    HMMBINEDODK = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  }
  return HMMBINEDODK;
}


// ===== public IEnumerable<string> DLKKPFHKIPB()  [RVA 0x34D7024]
// LCNCCGOAJBL$$DLKKPFHKIPB @ RVA 0x34D7024

System_Collections_Generic_IEnumerable_string__o *
LCNCCGOAJBL__DLKKPFHKIPB(LCNCCGOAJBL_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
  if ((DAT_045686da & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4690);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4691);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_045686da = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4690,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4691,(MethodInfo *)0x0);
  item = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = (Il2CppObject *)item;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      return (System_Collections_Generic_IEnumerable_string__o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string JPMJECDEGDC()  [RVA 0x34D6E9C]
// LCNCCGOAJBL$$JPMJECDEGDC @ RVA 0x34D6E9C

System_String_o * LCNCCGOAJBL__JPMJECDEGDC(MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int32_t iVar3;
  LCNCCGOAJBL_c *pLVar4;
  System_Collections_Generic_List_string__o *__this;
  System_String_o *pSVar5;
  LCNCCGOAJBL_StaticFields *pLVar6;
  System_DateTime_Fields local_28;
  
  if ((DAT_045686db & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&LCNCCGOAJBL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    DAT_045686db = 1;
  }
  local_28._dateData = 0;
  pLVar4 = LCNCCGOAJBL_TypeInfo;
  if ((LCNCCGOAJBL_TypeInfo->_2).cctor_finished == 0) {
    pLVar4 = (LCNCCGOAJBL_c *)thunk_FUN_01ba7564();
  }
  __this = LCNCCGOAJBL__GPAIEPMDALL((MethodInfo *)pLVar4);
  pLVar4 = LCNCCGOAJBL_TypeInfo;
  if (LCNCCGOAJBL_TypeInfo->static_fields->FEBKHIENJBN == -1) {
    if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    local_28._dateData = (uint64_t)System_DateTime__get_Now((MethodInfo *)0x0);
    iVar3 = System_DateTime__get_Second((System_DateTime_o)&local_28,(MethodInfo *)0x0);
    if (__this == (System_Collections_Generic_List_string__o *)0x0) goto LAB_035d7018;
    iVar1 = (__this->fields)._size;
    if ((LCNCCGOAJBL_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LCNCCGOAJBL_TypeInfo);
    }
    pLVar4 = LCNCCGOAJBL_TypeInfo;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = iVar3 / iVar1;
    }
    LCNCCGOAJBL_TypeInfo->static_fields->FEBKHIENJBN = iVar3 - iVar2 * iVar1;
  }
  if ((pLVar4->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(pLVar4);
    pLVar4 = LCNCCGOAJBL_TypeInfo;
  }
  pLVar6 = pLVar4->static_fields;
  iVar1 = pLVar6->FEBKHIENJBN + 1;
  pLVar6->FEBKHIENJBN = iVar1;
  if (__this != (System_Collections_Generic_List_string__o *)0x0) {
    if ((__this->fields)._size <= iVar1) {
      if ((pLVar4->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(pLVar4);
        pLVar6 = LCNCCGOAJBL_TypeInfo->static_fields;
        pLVar4 = LCNCCGOAJBL_TypeInfo;
      }
      pLVar6->FEBKHIENJBN = 0;
    }
    if ((pLVar4->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(pLVar4);
      pLVar4 = LCNCCGOAJBL_TypeInfo;
    }
    pSVar5 = (System_String_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this,
                        pLVar4->static_fields->FEBKHIENJBN,
                        Method_System_Collections_Generic_List<string>_get_Item__);
    return pSVar5;
  }
LAB_035d7018:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ALABLDEODLA KCBILPIAPHN()  [RVA 0x34D7194]
// LCNCCGOAJBL$$KCBILPIAPHN @ RVA 0x34D7194

int32_t LCNCCGOAJBL__KCBILPIAPHN(LCNCCGOAJBL_o *__this,MethodInfo *method)

{
  return 1;
}


// ===== private static void .cctor()  [RVA 0x34D719C]
// LCNCCGOAJBL$$.cctor @ RVA 0x34D719C

void LCNCCGOAJBL___cctor(MethodInfo *method)

{
  LCNCCGOAJBL_StaticFields *pLVar1;
  System_Collections_Generic_List_string__o **ppSVar2;
  
  if ((DAT_045686dc & 1) == 0) {
    FUN_01bab630(&LCNCCGOAJBL_TypeInfo);
    DAT_045686dc = 1;
  }
  pLVar1 = LCNCCGOAJBL_TypeInfo->static_fields;
  pLVar1->FEBKHIENJBN = -1;
  ppSVar2 = &pLVar1->DFIBPGKOKEG;
  *ppSVar2 = (System_Collections_Generic_List_string__o *)0x0;
  thunk_FUN_01c20e04(ppSVar2,0);
  return;
}


// ===== public bool ECKDICODLME()  [RVA 0x34D71F0]
// LCNCCGOAJBL$$ECKDICODLME @ RVA 0x34D71F0

bool LCNCCGOAJBL__ECKDICODLME(LCNCCGOAJBL_o *__this,MethodInfo *method)

{
  return true;
}

