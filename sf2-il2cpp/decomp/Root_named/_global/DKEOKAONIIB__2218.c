// TypeDefIndex 2218
// Namespace: 
// public static class DKEOKAONIIB
// Fields:
//   public static bool LDBHFHDLBND; // 0x0
//   public static bool GIGIAMDJECC; // 0x1
//   private static uint LKMPPCHMNED; // 0x4
//   private static string OFEBDKNHKOJ; // 0x8
//   private static string KNFHPILPMAL; // 0x10
//   private static List<string> OBLIJEFDJGN; // 0x18

// ===== private static void .cctor()  [RVA 0x32EBDB8]
// DKEOKAONIIB$$.cctor @ RVA 0x32EBDB8

void DKEOKAONIIB___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this;
  System_Collections_Generic_List_string__o **ppSVar1;
  DKEOKAONIIB_StaticFields *pDVar2;
  
  if ((DAT_04567640 & 1) == 0) {
    FUN_01bab630(&DKEOKAONIIB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04567640 = 1;
  }
  pDVar2 = DKEOKAONIIB_TypeInfo->static_fields;
  pDVar2->LDBHFHDLBND = false;
  pDVar2->GIGIAMDJECC = false;
  pDVar2->LKMPPCHMNED = 0;
  __this = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar1 = &DKEOKAONIIB_TypeInfo->static_fields->OBLIJEFDJGN;
  *ppSVar1 = __this;
  thunk_FUN_01c20e04(ppSVar1,__this);
  return;
}


// ===== public static string OKNECJFOOFF()  [RVA 0x32EBE58]
// DKEOKAONIIB$$OKNECJFOOFF @ RVA 0x32EBE58

System_String_o * DKEOKAONIIB__OKNECJFOOFF(MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  DKEOKAONIIB_c *pDVar5;
  System_String_o *pSVar6;
  System_Char_array *separator;
  System_String_array *pSVar7;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Il2CppObject *pIVar8;
  System_Text_StringBuilder_o *__this_00;
  System_Object_array *args;
  long lVar9;
  System_String_o *FDLJCNLNCOC;
  undefined8 uVar10;
  uint uVar11;
  System_String_o **ppSVar12;
  float local_c0;
  undefined4 local_bc;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_b8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_90;
  
  if ((DAT_04567641 & 1) == 0) {
    FUN_01bab630(&char___TypeInfo);
    FUN_01bab630(&DKEOKAONIIB_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_DKEOKAONIIB_NJCGKNFDJCO>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_DKEOKAONIIB_NJCGKNFDJCO>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_DKEOKAONIIB_NJCGKNFDJCO>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_DKEOKAONIIB_NJCGKNFDJCO>__ctor__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_DKEOKAONIIB_NJCGKNFDJCO>_get_Item__
                );
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_DKEOKAONIIB_NJCGKNFDJCO>_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_DKEOKAONIIB_NJCGKNFDJCO>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_DKEOKAONIIB_NJCGKNFDJCO>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_DKEOKAONIIB_NJCGKNFDJCO>_get_Current__
                );
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_DKEOKAONIIB_NJCGKNFDJCO>_get_Key__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_DKEOKAONIIB_NJCGKNFDJCO>_get_Value__
                );
    FUN_01bab630(&DKEOKAONIIB_NJCGKNFDJCO_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&float_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_22401/*"{0}: w={1,4:N0} l={2,4:N0}  {3,5:F1}%\n"*/);
    DAT_04567641 = 1;
  }
  local_90.fields._getEnumeratorRetType = 0;
  local_90.fields._36_4_ = 0;
  local_90.fields._version = 0;
  local_90.fields._index = 0;
  local_90.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_90.fields._current.fields.value = (Il2CppObject *)0x0;
  local_90.fields._current.fields.key = (Il2CppObject *)0x0;
  pDVar5 = DKEOKAONIIB_TypeInfo;
  if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
    pDVar5 = (DKEOKAONIIB_c *)thunk_FUN_01ba7564();
  }
  pSVar6 = DKEOKAONIIB__MOBLEDGMGPO((MethodInfo *)pDVar5);
  pSVar6 = NEHNBJKKABI__EPMKDIAJEOI(pSVar6,(MethodInfo *)0x0);
  separator = (System_Char_array *)FUN_01bab718(char___TypeInfo,2);
  if (separator != (System_Char_array *)0x0) {
    iVar2 = (int)separator->max_length;
    if ((iVar2 == 0) || (separator->m_Items[0] = 0x5b, iVar2 == 1)) {
LAB_033ec400:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    separator->m_Items[1] = 0x5d;
    if (pSVar6 != (System_String_o *)0x0) {
      pSVar7 = System_String__Split(pSVar6,separator,(MethodInfo *)0x0);
      __this = (System_Collections_Generic_Dictionary_object__object__o *)
               thunk_FUN_01bda818(
                                 System_Collections_Generic_Dictionary<string,_DKEOKAONIIB_NJCGKNFDJCO>_TypeInfo
                                 );
      System_Collections_Generic_Dictionary<object,_object>___ctor
                (__this,
                 Method_System_Collections_Generic_Dictionary<string,_DKEOKAONIIB_NJCGKNFDJCO>__ctor__
                );
      if (pSVar7 != (System_String_array *)0x0) {
        uVar1 = (uint)pSVar7->max_length;
        if (1 < (int)uVar1) {
          uVar11 = 1;
          do {
            if (uVar1 <= uVar11) goto LAB_033ec400;
            if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
            goto LAB_033ec404;
            ppSVar12 = pSVar7->m_Items + (int)uVar11;
            bVar4 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                              (__this,(Il2CppObject *)*ppSVar12,
                               Method_System_Collections_Generic_Dictionary<string,_DKEOKAONIIB_NJCGKNFDJCO>_ContainsKey__
                              );
            if (!bVar4) {
              if ((uint)pSVar7->max_length <= uVar11) goto LAB_033ec400;
              pSVar6 = *ppSVar12;
              pIVar8 = (Il2CppObject *)thunk_FUN_01bda818(DKEOKAONIIB_NJCGKNFDJCO_TypeInfo);
              System_Object___ctor(pIVar8,(MethodInfo *)0x0);
              pIVar8[1].klass = (Il2CppClass *)0x0;
              System_Collections_Generic_Dictionary<object,_object>__Add
                        (__this,(Il2CppObject *)pSVar6,pIVar8,
                         Method_System_Collections_Generic_Dictionary<string,_DKEOKAONIIB_NJCGKNFDJCO>_Add__
                        );
            }
            if ((uint)pSVar7->max_length <= uVar11) goto LAB_033ec400;
            pIVar8 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                               (__this,(Il2CppObject *)*ppSVar12,
                                Method_System_Collections_Generic_Dictionary<string,_DKEOKAONIIB_NJCGKNFDJCO>_get_Item__
                               );
            if (pIVar8 == (Il2CppObject *)0x0) goto LAB_033ec404;
            uVar1 = uVar11 + 2;
            *(int *)&pIVar8[1].klass = *(int *)&pIVar8[1].klass + 1;
            if ((uint)pSVar7->max_length <= uVar1) goto LAB_033ec400;
            ppSVar12 = pSVar7->m_Items + (int)uVar1;
            bVar4 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                              (__this,(Il2CppObject *)*ppSVar12,
                               Method_System_Collections_Generic_Dictionary<string,_DKEOKAONIIB_NJCGKNFDJCO>_ContainsKey__
                              );
            if (!bVar4) {
              if ((uint)pSVar7->max_length <= uVar1) goto LAB_033ec400;
              pSVar6 = *ppSVar12;
              pIVar8 = (Il2CppObject *)thunk_FUN_01bda818(DKEOKAONIIB_NJCGKNFDJCO_TypeInfo);
              System_Object___ctor(pIVar8,(MethodInfo *)0x0);
              pIVar8[1].klass = (Il2CppClass *)0x0;
              System_Collections_Generic_Dictionary<object,_object>__Add
                        (__this,(Il2CppObject *)pSVar6,pIVar8,
                         Method_System_Collections_Generic_Dictionary<string,_DKEOKAONIIB_NJCGKNFDJCO>_Add__
                        );
            }
            if ((uint)pSVar7->max_length <= uVar1) goto LAB_033ec400;
            pIVar8 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                               (__this,(Il2CppObject *)*ppSVar12,
                                Method_System_Collections_Generic_Dictionary<string,_DKEOKAONIIB_NJCGKNFDJCO>_get_Item__
                               );
            if (pIVar8 == (Il2CppObject *)0x0) goto LAB_033ec404;
            uVar11 = uVar11 + 4;
            *(int *)((long)&pIVar8[1].klass + 4) = *(int *)((long)&pIVar8[1].klass + 4) + 1;
            uVar1 = (uint)pSVar7->max_length;
          } while ((int)uVar11 < (int)uVar1);
        }
        __this_00 = (System_Text_StringBuilder_o *)
                    thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
        System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
        if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
                    (&local_b8,__this,
                     Method_System_Collections_Generic_Dictionary<string,_DKEOKAONIIB_NJCGKNFDJCO>_GetEnumerator__
                    );
          local_90.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)
               CONCAT44(local_b8.fields._dictionary._4_4_,local_b8.fields._dictionary._0_4_);
          local_90.fields._version = local_b8.fields._version;
          local_90.fields._index = local_b8.fields._index;
          local_90.fields._current.fields.value = local_b8.fields._current.fields.value;
          local_90.fields._current.fields.key = local_b8.fields._current.fields.key;
          local_90.fields._getEnumeratorRetType = local_b8.fields._getEnumeratorRetType;
          local_90.fields._36_4_ = local_b8.fields._36_4_;
          while (bVar4 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                                   (&local_90,
                                    Method_System_Collections_Generic_Dictionary_Enumerator<string,_DKEOKAONIIB_NJCGKNFDJCO>_MoveNext__
                                   ), pIVar3 = local_90.fields._current.fields.value,
                pIVar8 = local_90.fields._current.fields.key, bVar4) {
            args = (System_Object_array *)FUN_01bab718(object___TypeInfo,4);
            if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if ((pIVar8 != (Il2CppObject *)0x0) &&
               (lVar9 = thunk_FUN_01bda71c(pIVar8,(((args->obj).klass)->_1).element_class),
               lVar9 == 0)) {
              uVar10 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar10,0);
            }
            if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            args->m_Items[0] = pIVar8;
            thunk_FUN_01c20e04(args->m_Items,pIVar8);
            if (pIVar3 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            local_b8.fields._dictionary._0_4_ = *(undefined4 *)&pIVar3[1].klass;
            pIVar8 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_b8);
            if ((pIVar8 != (Il2CppObject *)0x0) &&
               (lVar9 = thunk_FUN_01bda71c(pIVar8,(((args->obj).klass)->_1).element_class),
               lVar9 == 0)) {
              uVar10 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar10,0);
            }
            if ((uint)args->max_length < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            args->m_Items[1] = pIVar8;
            thunk_FUN_01c20e04(args->m_Items + 1,pIVar8);
            local_bc = *(undefined4 *)((long)&pIVar3[1].klass + 4);
            pIVar8 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_bc);
            if ((pIVar8 != (Il2CppObject *)0x0) &&
               (lVar9 = thunk_FUN_01bda71c(pIVar8,(((args->obj).klass)->_1).element_class),
               lVar9 == 0)) {
              uVar10 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar10,0);
            }
            if ((uint)args->max_length < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            args->m_Items[2] = pIVar8;
            thunk_FUN_01c20e04(args->m_Items + 2,pIVar8);
            local_c0 = ((float)*(int *)&pIVar3[1].klass * 100.0) /
                       (float)(*(int *)((long)&pIVar3[1].klass + 4) + *(int *)&pIVar3[1].klass);
            pIVar8 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_c0);
            if ((pIVar8 != (Il2CppObject *)0x0) &&
               (lVar9 = thunk_FUN_01bda71c(pIVar8,(((args->obj).klass)->_1).element_class),
               lVar9 == 0)) {
              uVar10 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar10,0);
            }
            if ((uint)args->max_length < 4) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            args->m_Items[3] = pIVar8;
            thunk_FUN_01c20e04(args->m_Items + 3,pIVar8);
            pSVar6 = System_String__Format(StringLiteral_22401/*"{0}: w={1,4:N0} l={2,4:N0}  {3,5:F1}%\n"*/,args,(MethodInfo *)0x0);
            if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            System_Text_StringBuilder__Append(__this_00,pSVar6,(MethodInfo *)0x0);
          }
          System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
                    (&local_90,
                     Method_System_Collections_Generic_Dictionary_Enumerator<string,_DKEOKAONIIB_NJCGKNFDJCO>_Dispose__
                    );
          pDVar5 = DKEOKAONIIB_TypeInfo;
          if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
            pDVar5 = (DKEOKAONIIB_c *)thunk_FUN_01ba7564();
          }
          pSVar6 = DKEOKAONIIB__GJFNCOKFAPP((MethodInfo *)pDVar5);
          if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
            FDLJCNLNCOC = (System_String_o *)
                          (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                                    (__this_00,(__this_00->klass->vtable)._3_ToString.method);
            NEHNBJKKABI__GPNPELOHJCJ(pSVar6,FDLJCNLNCOC,(MethodInfo *)0x0);
            pSVar6 = (System_String_o *)
                     (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                               (__this_00,(__this_00->klass->vtable)._3_ToString.method);
            return pSVar6;
          }
        }
      }
    }
  }
LAB_033ec404:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void FDDKGLOPBEG(int FPHIPPIDHBO, int FPDJMIBLBAH, int AIHGKMMPALK)  [RVA 0x32EC600]
// DKEOKAONIIB$$FDDKGLOPBEG @ RVA 0x32EC600

void DKEOKAONIIB__FDDKGLOPBEG
               (int32_t FPHIPPIDHBO,int32_t FPDJMIBLBAH,int32_t AIHGKMMPALK,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_String_o *pSVar3;
  System_String_o *arg1;
  System_String_o *arg2;
  System_Collections_Generic_List_string__o *__this;
  DKEOKAONIIB_StaticFields *pDVar4;
  System_String_array *pSVar5;
  int32_t local_2c;
  int32_t local_28;
  int32_t iStack_24;
  
  local_2c = AIHGKMMPALK;
  local_28 = FPDJMIBLBAH;
  iStack_24 = FPHIPPIDHBO;
  if ((DAT_04567642 & 1) == 0) {
    FUN_01bab630(&DKEOKAONIIB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&StringLiteral_198/*"  Round {0} with {1}:{2}\n"*/);
    DAT_04567642 = 1;
  }
  if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar4 = DKEOKAONIIB_TypeInfo->static_fields;
  if (pDVar4->LDBHFHDLBND != false) {
    if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pDVar4 = DKEOKAONIIB_TypeInfo->static_fields;
    }
    if (pDVar4->GIGIAMDJECC != false) {
      pSVar3 = System_Int32__ToString((int32_t)&iStack_24,(MethodInfo *)0x0);
      arg1 = System_Int32__ToString((int32_t)&local_28,(MethodInfo *)0x0);
      arg2 = System_Int32__ToString((int32_t)&local_2c,(MethodInfo *)0x0);
      pSVar3 = System_String__Format
                         (StringLiteral_198/*"  Round {0} with {1}:{2}\n"*/,(Il2CppObject *)pSVar3,(Il2CppObject *)arg1,
                          (Il2CppObject *)arg2,(MethodInfo *)0x0);
      if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(DKEOKAONIIB_TypeInfo);
      }
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      __this = DKEOKAONIIB_TypeInfo->static_fields->OBLIJEFDJGN;
      if (__this != (System_Collections_Generic_List_string__o *)0x0) {
        pSVar5 = (__this->fields)._items;
        (__this->fields)._version = (__this->fields)._version + 1;
        if (pSVar5 != (System_String_array *)0x0) {
          uVar1 = (__this->fields)._size;
          if (uVar1 < (uint)pSVar5->max_length) {
            (__this->fields)._size = uVar1 + 1;
            pSVar5->m_Items[(int)uVar1] = pSVar3;
            thunk_FUN_01c20e04(pSVar5->m_Items + (int)uVar1,pSVar3);
            return;
          }
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar3,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== public static void JDOKHDBJFIO(string IMJHEANBDDA, string DFEGBKMFBMM, string LBKOHHHPNIP)  [RVA 0x32EC780]
// DKEOKAONIIB$$JDOKHDBJFIO @ RVA 0x32EC780

void DKEOKAONIIB__JDOKHDBJFIO
               (System_String_o *IMJHEANBDDA,System_String_o *DFEGBKMFBMM,
               System_String_o *LBKOHHHPNIP,MethodInfo *method)

{
  int32_t length;
  uint uVar1;
  long lVar2;
  System_String_o *item;
  System_String_o **ppSVar3;
  DKEOKAONIIB_StaticFields *pDVar4;
  System_String_array *pSVar5;
  System_Collections_Generic_List_string__o *__this;
  
  if ((DAT_04567643 & 1) == 0) {
    FUN_01bab630(&DKEOKAONIIB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    FUN_01bab630(&StringLiteral_3429/*"Battle: {0} vs {1} in {2}\n"*/);
    DAT_04567643 = 1;
  }
  if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar4 = DKEOKAONIIB_TypeInfo->static_fields;
  if (pDVar4->LDBHFHDLBND == false) {
    return;
  }
  if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pDVar4 = DKEOKAONIIB_TypeInfo->static_fields;
  }
  if (pDVar4->GIGIAMDJECC != false) {
    if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pDVar4 = DKEOKAONIIB_TypeInfo->static_fields;
    }
    __this = pDVar4->OBLIJEFDJGN;
    if (__this != (System_Collections_Generic_List_string__o *)0x0) {
      length = (__this->fields)._size;
      (__this->fields)._size = 0;
      (__this->fields)._version = (__this->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(__this->fields)._items,0,length,(MethodInfo *)0x0);
        __this = DKEOKAONIIB_TypeInfo->static_fields->OBLIJEFDJGN;
      }
      item = System_String__Format
                       (StringLiteral_3429/*"Battle: {0} vs {1} in {2}\n"*/,(Il2CppObject *)IMJHEANBDDA,(Il2CppObject *)DFEGBKMFBMM,
                        (Il2CppObject *)LBKOHHHPNIP,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      if (__this != (System_Collections_Generic_List_string__o *)0x0) {
        pSVar5 = (__this->fields)._items;
        (__this->fields)._version = (__this->fields)._version + 1;
        if (pSVar5 != (System_String_array *)0x0) {
          uVar1 = (__this->fields)._size;
          if (uVar1 < (uint)pSVar5->max_length) {
            (__this->fields)._size = uVar1 + 1;
            pSVar5->m_Items[(int)uVar1] = item;
            thunk_FUN_01c20e04();
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          goto LAB_033ec900;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_033ec900:
  if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  ppSVar3 = &DKEOKAONIIB_TypeInfo->static_fields->OFEBDKNHKOJ;
  *ppSVar3 = IMJHEANBDDA;
  thunk_FUN_01c20e04(ppSVar3,IMJHEANBDDA);
  ppSVar3 = &DKEOKAONIIB_TypeInfo->static_fields->KNFHPILPMAL;
  *ppSVar3 = DFEGBKMFBMM;
  thunk_FUN_01c20e04(ppSVar3,DFEGBKMFBMM);
  return;
}


// ===== private static string MOBLEDGMGPO()  [RVA 0x32EC4F4]
// DKEOKAONIIB$$MOBLEDGMGPO @ RVA 0x32EC4F4

System_String_o * DKEOKAONIIB__MOBLEDGMGPO(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04567644 & 1) == 0) {
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&StringLiteral_1505/*"/battleList.txt"*/);
    DAT_04567644 = 1;
  }
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = SF2Paths__CAACPGEHHFC((MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_1505/*"/battleList.txt"*/,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static void KBBHCAAFDCO(bool KHJKDPNDGJJ, Model.OGCKCABMHLC HPACPFLKHPK)  [RVA 0x32EC948]
// DKEOKAONIIB$$KBBHCAAFDCO @ RVA 0x32EC948

void DKEOKAONIIB__KBBHCAAFDCO
               (bool KHJKDPNDGJJ,Model_OGCKCABMHLC_o *HPACPFLKHPK,MethodInfo *method)

{
  long lVar1;
  uint uVar2;
  Il2CppObject *arg1;
  System_String_o *pSVar3;
  Il2CppObject *arg2;
  System_String_o *pSVar4;
  System_Collections_Generic_List_string__o *__this;
  DKEOKAONIIB_StaticFields *pDVar5;
  InfoAnimation_o *pEVar6;
  System_String_array *pSVar7;
  Il2CppObject *arg0;
  float local_24;
  
  if ((DAT_04567645 & 1) == 0) {
    FUN_01bab630(&DKEOKAONIIB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&float_TypeInfo);
    FUN_01bab630(&StringLiteral_22020/*"who: {0,16}  //  damage: {1,6:F2}  //  attack: {2}\n"*/);
    DAT_04567645 = 1;
  }
  if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar5 = DKEOKAONIIB_TypeInfo->static_fields;
  if (pDVar5->LDBHFHDLBND != false) {
    if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pDVar5 = DKEOKAONIIB_TypeInfo->static_fields;
    }
    pSVar4 = StringLiteral_22020/*"who: {0,16}  //  damage: {1,6:F2}  //  attack: {2}\n"*/;
    if (pDVar5->GIGIAMDJECC != false) {
      if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pDVar5 = DKEOKAONIIB_TypeInfo->static_fields;
      }
      lVar1 = 8;
      if (!KHJKDPNDGJJ) {
        lVar1 = 0x10;
      }
      if (HPACPFLKHPK != (Model_OGCKCABMHLC_o *)0x0) {
        arg0 = *(Il2CppObject **)(&pDVar5->LDBHFHDLBND + lVar1);
        local_24 = (HPACPFLKHPK->fields).CEMEJDHDPLL * 100.0;
        arg1 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_24);
        pEVar6 = (HPACPFLKHPK->fields).OKMFPICFIAD;
        if ((pEVar6 != (InfoAnimation_o *)0x0) &&
           (pSVar3 = (pEVar6->fields).JIJLBFGKNJK, pSVar3 != (System_String_o *)0x0)) {
          arg2 = (Il2CppObject *)
                 (*(pSVar3->klass->vtable)._3_ToString.methodPtr)
                           (pSVar3,(pSVar3->klass->vtable)._3_ToString.method);
          pSVar4 = System_String__Format(pSVar4,arg0,arg1,arg2,(MethodInfo *)0x0);
          if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(DKEOKAONIIB_TypeInfo);
          }
          lVar1 = Method_System_Collections_Generic_List<string>_Add__;
          __this = DKEOKAONIIB_TypeInfo->static_fields->OBLIJEFDJGN;
          if (__this != (System_Collections_Generic_List_string__o *)0x0) {
            pSVar7 = (__this->fields)._items;
            (__this->fields)._version = (__this->fields)._version + 1;
            if (pSVar7 != (System_String_array *)0x0) {
              uVar2 = (__this->fields)._size;
              if (uVar2 < (uint)pSVar7->max_length) {
                (__this->fields)._size = uVar2 + 1;
                pSVar7->m_Items[(int)uVar2] = pSVar4;
                thunk_FUN_01c20e04(pSVar7->m_Items + (int)uVar2,pSVar4);
                return;
              }
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar4,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar1 + 0x20) + 0xc0) + 0x70))
              ;
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== private static string MIHAHMJPOOA()  [RVA 0x32ECB1C]
// DKEOKAONIIB$$MIHAHMJPOOA @ RVA 0x32ECB1C

System_String_o * DKEOKAONIIB__MIHAHMJPOOA(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04567646 & 1) == 0) {
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&StringLiteral_1523/*"/hit_list{0}.txt"*/);
    DAT_04567646 = 1;
  }
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = SF2Paths__CAACPGEHHFC((MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_1523/*"/hit_list{0}.txt"*/,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== private static string GJFNCOKFAPP()  [RVA 0x32EC590]
// DKEOKAONIIB$$GJFNCOKFAPP @ RVA 0x32EC590

System_String_o * DKEOKAONIIB__GJFNCOKFAPP(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04567647 & 1) == 0) {
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&StringLiteral_1506/*"/battleResult.txt"*/);
    DAT_04567647 = 1;
  }
  if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = SF2Paths__CAACPGEHHFC((MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_1506/*"/battleResult.txt"*/,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static void FCKPGNAFOPM(IGPDCHBJAPD HPACPFLKHPK)  [RVA 0x32ECB8C]
// DKEOKAONIIB$$FCKPGNAFOPM @ RVA 0x32ECB8C

void DKEOKAONIIB__FCKPGNAFOPM(IGPDCHBJAPD_o *HPACPFLKHPK,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_String_o *pSVar4;
  MethodInfo *pMVar5;
  MethodInfo *extraout_x0;
  System_String_o *pSVar6;
  System_Text_StringBuilder_o *__this;
  Il2CppObject *arg0;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  DKEOKAONIIB_StaticFields *pDVar7;
  System_String_array *pSVar8;
  ModelParameters_o *pPVar9;
  ModelParameters_o *pPVar10;
  System_Collections_Generic_List_string__o *pSVar11;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04567648 & 1) == 0) {
    FUN_01bab630(&DKEOKAONIIB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&uint_TypeInfo);
    FUN_01bab630(&StringLiteral_14970/*"Winner="*/);
    FUN_01bab630(&StringLiteral_22253/*"{0, 8:N0}: Winner=[{1, 16}]        Loser=[{2, 16}]\n"*/);
    DAT_04567648 = 1;
    method = extraout_x1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DKEOKAONIIB_TypeInfo,method);
    method = extraout_x1_00;
  }
  pDVar7 = DKEOKAONIIB_TypeInfo->static_fields;
  if (pDVar7->LDBHFHDLBND != false) {
    if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(DKEOKAONIIB_TypeInfo,method);
      pDVar7 = DKEOKAONIIB_TypeInfo->static_fields;
      method = extraout_x1_01;
    }
    if (pDVar7->GIGIAMDJECC != false) {
      if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(DKEOKAONIIB_TypeInfo,method);
        pDVar7 = DKEOKAONIIB_TypeInfo->static_fields;
      }
      if ((HPACPFLKHPK == (IGPDCHBJAPD_o *)0x0) ||
         (pPVar9 = (HPACPFLKHPK->fields).FIJLCCEJANF, pPVar9 == (ModelParameters_o *)0x0))
      goto LAB_033ecec4;
      pSVar11 = pDVar7->OBLIJEFDJGN;
      pSVar4 = System_String__Concat
                         (StringLiteral_14970/*"Winner="*/,(pPVar9->fields).NBPNHMKOJKB,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      if (pSVar11 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_033ecec4;
      pSVar8 = (pSVar11->fields)._items;
      (pSVar11->fields)._version = (pSVar11->fields)._version + 1;
      if (pSVar8 == (System_String_array *)0x0) goto LAB_033ecec4;
      uVar1 = (pSVar11->fields)._size;
      if (uVar1 < (uint)pSVar8->max_length) {
        (pSVar11->fields)._size = uVar1 + 1;
        pSVar8->m_Items[(int)uVar1] = pSVar4;
        pMVar5 = (MethodInfo *)thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar11,(Il2CppObject *)pSVar4,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        pMVar5 = extraout_x0;
      }
      pSVar4 = DKEOKAONIIB__MIHAHMJPOOA(pMVar5);
      pSVar6 = System_UInt32__ToString
                         ((int)DKEOKAONIIB_TypeInfo->static_fields + 4,(MethodInfo *)0x0);
                    /* try { // try from 033ecd40 to 034ece73 has its CatchHandler @ 033ecd40
                       catch() { ... } // from try @ 033ecd40 with catch @ 033ecd40
                       catch() { ... } // from try @ 033ecf4c with catch @ 033ecd40
                       catch() { ... } // from try @ 033ecff4 with catch @ 033ecd40
                       catch() { ... } // from try @ 033ecffc with catch @ 033ecd40
                       catch() { ... } // from try @ 033ed0b0 with catch @ 033ecd40 */
      pSVar4 = System_String__Format(pSVar4,(Il2CppObject *)pSVar6,(MethodInfo *)0x0);
      __this = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo)
      ;
      System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
      pSVar11 = DKEOKAONIIB_TypeInfo->static_fields->OBLIJEFDJGN;
      if (pSVar11 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_033ecec4;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)pSVar11,
                 Method_System_Collections_Generic_List<string>_GetEnumerator__);
      local_60.fields._list =
           (System_Collections_Generic_List_T__o *)
           CONCAT44(local_78.fields._list._4_4_,(uint32_t)local_78.fields._list);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._current = local_78.fields._current;
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_60,
                           Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
        if (!bVar3) break;
        if (__this == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Text_StringBuilder__Append
                  (__this,(System_String_o *)local_60.fields._current,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
      if (__this == (System_Text_StringBuilder_o *)0x0) goto LAB_033ecec4;
      pSVar6 = (System_String_o *)
               (*(__this->klass->vtable)._3_ToString.methodPtr)
                         (__this,(__this->klass->vtable)._3_ToString.method);
      NEHNBJKKABI__GPNPELOHJCJ(pSVar4,pSVar6,(MethodInfo *)0x0);
    }
    if (((HPACPFLKHPK == (IGPDCHBJAPD_o *)0x0) ||
        (pPVar9 = (HPACPFLKHPK->fields).FIJLCCEJANF, pPVar9 == (ModelParameters_o *)0x0)) ||
       (pPVar10 = (HPACPFLKHPK->fields).DIJDCNOLDOK, pPVar10 == (ModelParameters_o *)0x0)) {
LAB_033ecec4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar4 = (pPVar9->fields).NBPNHMKOJKB;
    pSVar6 = (pPVar10->fields).NBPNHMKOJKB;
    if ((DKEOKAONIIB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    local_78.fields._list._0_4_ = DKEOKAONIIB_TypeInfo->static_fields->LKMPPCHMNED;
    arg0 = (Il2CppObject *)thunk_FUN_01bda448(uint_TypeInfo,&local_78);
                    /* try { // try from 033ece74 to 034ece9b has its CatchHandler @ 033ed018 */
    pMVar5 = (MethodInfo *)
             System_String__Format
                       (StringLiteral_22253/*"{0, 8:N0}: Winner=[{1, 16}]        Loser=[{2, 16}]\n"*/,arg0,(Il2CppObject *)pSVar4,(Il2CppObject *)pSVar6,
                        (MethodInfo *)0x0);
    pSVar4 = DKEOKAONIIB__MOBLEDGMGPO(pMVar5);
    NEHNBJKKABI__DNECLDMBFOH(pSVar4,(System_String_o *)pMVar5,false,(MethodInfo *)0x0);
    DKEOKAONIIB_TypeInfo->static_fields->LKMPPCHMNED =
         DKEOKAONIIB_TypeInfo->static_fields->LKMPPCHMNED + 1;
  }
  return;
}

