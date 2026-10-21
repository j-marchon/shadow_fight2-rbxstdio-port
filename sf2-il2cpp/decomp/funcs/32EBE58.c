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
    FUN_01bab630(&StringLiteral_22401);
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
            pSVar6 = System_String__Format(StringLiteral_22401,args,(MethodInfo *)0x0);
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

