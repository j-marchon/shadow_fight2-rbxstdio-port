// JLEKKANADII$$GDNHMIHKKEG @ RVA 0x351D160

void JLEKKANADII__GDNHMIHKKEG(MethodInfo *method)

{
  int32_t iVar1;
  ushort uVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  int32_t CGLFKKMBHCN;
  PBAKFOBIHEG_o *pPVar5;
  System_Collections_IEnumerator_o *pSVar6;
  VirtualInvokeData *pVVar7;
  MethodInfo *in_x3;
  PBAKFOBIHEG_c *pPVar8;
  System_Collections_Generic_List_InputDevice__o *pSVar9;
  ulong uVar10;
  int32_t *piVar11;
  System_String_o *LOAHEPDBFAO;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_0456899c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InputDevice>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InputDevice>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<InputDevice>_get_Current__);
    FUN_01bab630(&GJAEIBMAFGE_TypeInfo);
    FUN_01bab630(&JLEKKANADII_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>_get_Count__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_0456899c = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar9 = JLEKKANADII_TypeInfo->static_fields->HPIJFIJFOPH;
  if (pSVar9 != (System_Collections_Generic_List_InputDevice__o *)0x0) {
    if (0 < (pSVar9->fields)._size) {
      if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pSVar9 = JLEKKANADII_TypeInfo->static_fields->HPIJFIJFOPH;
        if (pSVar9 == (System_Collections_Generic_List_InputDevice__o *)0x0) goto LAB_0361d3e4;
      }
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_88,(System_Collections_Generic_List_object__o *)pSVar9,
                 Method_System_Collections_Generic_List<InputDevice>_GetEnumerator__);
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
      local_70.fields._list = local_88.fields._list;
      local_70.fields._current = local_88.fields._current;
      while (bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_70,
                                Method_System_Collections_Generic_List_Enumerator<InputDevice>_MoveNext__
                               ), pIVar3 = local_70.fields._current, bVar4) {
        pPVar5 = CoroutineManager__get_Current((MethodInfo *)0x0);
        if (pIVar3 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        iVar1 = *(int32_t *)&pIVar3[1].klass;
        LOAHEPDBFAO = pIVar3[1].monitor;
        if ((GJAEIBMAFGE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        CGLFKKMBHCN = GJAEIBMAFGE__OFIKNKILDCH(LOAHEPDBFAO,(MethodInfo *)0x0);
        if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar6 = JLEKKANADII__FHNMIDFEBOJ(iVar1,LOAHEPDBFAO,CGLFKKMBHCN,in_x3);
        if (pPVar5 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pPVar8 = pPVar5->klass;
        uVar2._0_1_ = (pPVar8->_2).rank;
        uVar2._1_1_ = (pPVar8->_2).minimumAlignment;
        uVar10 = (ulong)uVar2;
        if (uVar10 != 0) {
          piVar11 = &((pPVar8->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
              pVVar7 = pPVar8->vtable + *piVar11;
              goto LAB_0361d358;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        pVVar7 = (VirtualInvokeData *)FUN_01b81914(pPVar5,PBAKFOBIHEG_TypeInfo,0);
LAB_0361d358:
        in_x3 = pVVar7->method;
        (*pVVar7->methodPtr)(pPVar5,pSVar6,1);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,Method_System_Collections_Generic_List_Enumerator<InputDevice>_Dispose__)
      ;
      if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar9 = JLEKKANADII_TypeInfo->static_fields->HPIJFIJFOPH;
      if (pSVar9 == (System_Collections_Generic_List_InputDevice__o *)0x0) goto LAB_0361d3e4;
      iVar1 = (pSVar9->fields)._size;
      (pSVar9->fields)._size = 0;
      (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar9->fields)._items,0,iVar1,(MethodInfo *)0x0);
      }
    }
    return;
  }
LAB_0361d3e4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

