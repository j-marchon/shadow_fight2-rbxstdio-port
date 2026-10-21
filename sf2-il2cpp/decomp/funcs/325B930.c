// ILNFICAMFCI$$PEOFPPDIEEF @ RVA 0x325B930

void ILNFICAMFCI__PEOFPPDIEEF(MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  System_Collections_Generic_List_MGNDHCBAPEN_Canvas__bool___o *pSVar5;
  System_Object_array *pSVar6;
  UnityEngine_Object_o *__this;
  System_String_o *pSVar7;
  MGNDHCBAPEN_Canvas__bool__o *__this_00;
  ulong uVar8;
  ILNFICAMFCI_StaticFields *pIVar9;
  MGNDHCBAPEN_Canvas__bool__array *pMVar10;
  void *pvVar11;
  int32_t iVar12;
  Il2CppClass *pIVar13;
  UnityEngine_Component_o *__this_01;
  uint uVar14;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_0456718a & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<Canvas,_bool>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<Canvas,_bool>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<Canvas,_bool>>_get_Current__
                );
    FUN_01bab630(&ILNFICAMFCI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<Canvas,_bool>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<Canvas,_bool>>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<Canvas,_bool>>_GetEnumerator__)
    ;
    FUN_01bab630(&Method_MGNDHCBAPEN<Canvas,_bool>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<Canvas,_bool>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_FindObjectsOfType<Canvas>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_17638);
    FUN_01bab630(&StringLiteral_17717);
    FUN_01bab630(&StringLiteral_21617);
    DAT_0456718a = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar9 = ILNFICAMFCI_TypeInfo->static_fields;
  if (pIVar9->JHMLNHOBABK == (System_Collections_Generic_List_MGNDHCBAPEN_Canvas__bool___o *)0x0) {
    return;
  }
  if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pIVar9 = ILNFICAMFCI_TypeInfo->static_fields;
    iVar12 = pIVar9->BNDFDNCBEFI;
    if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pIVar9 = ILNFICAMFCI_TypeInfo->static_fields;
    }
  }
  else {
    iVar12 = pIVar9->BNDFDNCBEFI;
  }
  pSVar5 = pIVar9->JHMLNHOBABK;
  if (pSVar5 == (System_Collections_Generic_List_MGNDHCBAPEN_Canvas__bool___o *)0x0) {
LAB_0335bda4:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (iVar12 == 0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)pSVar5,
               Method_System_Collections_Generic_List<MGNDHCBAPEN<Canvas,_bool>>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_80,
                              Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<Canvas,_bool>>_MoveNext__
                             ), pIVar3 = local_80.fields._current, bVar4) {
      if (local_80.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pIVar13 = local_80.fields._current[1].klass;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pIVar13,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (!bVar4) {
        pIVar13 = pIVar3[1].klass;
        if (pIVar13 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pvVar11 = (pIVar13->_1).image;
        uVar8 = (**(code **)((long)pvVar11 + 0x138))
                          (pIVar13,0,*(undefined8 *)((long)pvVar11 + 0x140));
        if ((uVar8 & 1) == 0) {
          if (pIVar3[1].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          UnityEngine_Behaviour__set_enabled
                    ((UnityEngine_Behaviour_o *)pIVar3[1].klass,*(bool *)&pIVar3[1].monitor,
                     (MethodInfo *)0x0);
        }
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,
               Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<Canvas,_bool>>_Dispose__
              );
    if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pIVar9 = ILNFICAMFCI_TypeInfo->static_fields;
    pSVar5 = pIVar9->JHMLNHOBABK;
    if (pSVar5 == (System_Collections_Generic_List_MGNDHCBAPEN_Canvas__bool___o *)0x0)
    goto LAB_0335bda4;
    iVar12 = (pSVar5->fields)._size;
    (pSVar5->fields)._size = 0;
    (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
    if (iVar12 < 1) {
      iVar12 = 1;
      goto LAB_0335bd78;
    }
    System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,iVar12,(MethodInfo *)0x0);
    iVar12 = 1;
  }
  else {
    iVar12 = (pSVar5->fields)._size;
    (pSVar5->fields)._size = 0;
    (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
    if (0 < iVar12) {
      System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,iVar12,(MethodInfo *)0x0);
    }
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar6 = UnityEngine_Object__FindObjectsOfType<object>
                       (Method_UnityEngine_Object_FindObjectsOfType<Canvas>__);
    if (pSVar6 == (System_Object_array *)0x0) goto LAB_0335bda4;
    uVar1 = (uint)pSVar6->max_length;
    if (0 < (int)uVar1) {
      uVar14 = 0;
      do {
        if (uVar1 <= uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        __this_01 = (UnityEngine_Component_o *)pSVar6->m_Items[(int)uVar14];
        if ((((__this_01 == (UnityEngine_Component_o *)0x0) ||
             (__this = (UnityEngine_Object_o *)
                       UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0),
             __this == (UnityEngine_Object_o *)0x0)) ||
            (pSVar7 = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0),
            pSVar7 == (System_String_o *)0x0)) ||
           (pSVar7 = System_String__ToLower(pSVar7,(MethodInfo *)0x0),
           pSVar7 == (System_String_o *)0x0)) goto LAB_0335bda4;
        bVar4 = System_String__Contains(pSVar7,StringLiteral_17638,(MethodInfo *)0x0);
        if (((!bVar4) &&
            (bVar4 = System_String__Contains(pSVar7,StringLiteral_17717,(MethodInfo *)0x0), !bVar4))
           && (bVar4 = System_String__Contains(pSVar7,StringLiteral_21617,(MethodInfo *)0x0), !bVar4
              )) {
          if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar5 = ILNFICAMFCI_TypeInfo->static_fields->JHMLNHOBABK;
          bVar4 = UnityEngine_Behaviour__get_enabled
                            ((UnityEngine_Behaviour_o *)__this_01,(MethodInfo *)0x0);
          __this_00 = (MGNDHCBAPEN_Canvas__bool__o *)
                      thunk_FUN_01bda818(MGNDHCBAPEN<Canvas,_bool>_TypeInfo);
          MGNDHCBAPEN<object,_bool>___ctor
                    ((MGNDHCBAPEN_T1__T2__o *)__this_00,(Il2CppObject *)__this_01,bVar4,
                     Method_MGNDHCBAPEN<Canvas,_bool>__ctor__);
          lVar2 = Method_System_Collections_Generic_List<MGNDHCBAPEN<Canvas,_bool>>_Add__;
          if (pSVar5 == (System_Collections_Generic_List_MGNDHCBAPEN_Canvas__bool___o *)0x0)
          goto LAB_0335bda4;
          pMVar10 = (pSVar5->fields)._items;
          (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
          if (pMVar10 == (MGNDHCBAPEN_Canvas__bool__array *)0x0) goto LAB_0335bda4;
          uVar1 = (pSVar5->fields)._size;
          if (uVar1 < (uint)pMVar10->max_length) {
            (pSVar5->fields)._size = uVar1 + 1;
            pMVar10->m_Items[(int)uVar1] = __this_00;
            thunk_FUN_01c20e04(pMVar10->m_Items + (int)uVar1,__this_00);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)__this_00
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          UnityEngine_Behaviour__set_enabled
                    ((UnityEngine_Behaviour_o *)__this_01,false,(MethodInfo *)0x0);
        }
        uVar1 = (uint)pSVar6->max_length;
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < (int)uVar1);
    }
    if ((ILNFICAMFCI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar12 = 0;
  }
  pIVar9 = ILNFICAMFCI_TypeInfo->static_fields;
LAB_0335bd78:
  pIVar9->BNDFDNCBEFI = iVar12;
  return;
}

