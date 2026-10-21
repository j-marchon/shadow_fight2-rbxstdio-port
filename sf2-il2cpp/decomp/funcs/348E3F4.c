// OGFBENMAGJJ$$FGBGAKLKONL @ RVA 0x348E3F4

/* WARNING: Removing unreachable block (ram,0x0358e880) */

System_String_o * OGFBENMAGJJ__FGBGAKLKONL(OGFBENMAGJJ_o *__this,MethodInfo *method)

{
  int32_t HIHCBMNGGEO;
  ushort uVar1;
  ushort uVar2;
  Il2CppType *handle;
  System_Text_StringBuilder_o *__this_00;
  System_Collections_Generic_List_FPPKHNNABAD__o *OIEGJOKFIHI;
  System_Type_o *enumType;
  System_Array_o *__this_01;
  System_Collections_IEnumerator_o *pSVar3;
  VirtualInvokeData *pVVar4;
  long *plVar5;
  int32_t *piVar6;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_02;
  System_Collections_Generic_List_FPPKHNNABAD__o *collection;
  undefined8 *puVar7;
  System_String_o *pSVar8;
  OGFBENMAGJJ_NLOBPGHHIEF_o *__this_03;
  System_String_o *str1;
  MethodInfo *extraout_x1;
  MethodInfo *in_x4;
  System_Collections_IEnumerator_c *pSVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  int32_t local_54;
  
  if ((DAT_045683fb & 1) == 0) {
    FUN_01bab630(&System_Enum_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<FPPKHNNABAD>_TypeInfo);
    FUN_01bab630(&OGFBENMAGJJ_NLOBPGHHIEF_TypeInfo);
    FUN_01bab630(&KFKFNDEJLKK_PCJFAKMBHCE_var);
    FUN_01bab630(&KFKFNDEJLKK_PCJFAKMBHCE_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&StringLiteral_264);
    FUN_01bab630(&StringLiteral_10716);
    FUN_01bab630(&StringLiteral_10715);
    FUN_01bab630(&StringLiteral_514);
    FUN_01bab630(&StringLiteral_21558);
    DAT_045683fb = 1;
    method = extraout_x1;
  }
  local_54 = 0;
  __this_00 = (System_Text_StringBuilder_o *)
              thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  OIEGJOKFIHI = (System_Collections_Generic_List_FPPKHNNABAD__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<FPPKHNNABAD>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)OIEGJOKFIHI,
             Method_System_Collections_Generic_List<FPPKHNNABAD>__ctor__);
  handle = KFKFNDEJLKK_PCJFAKMBHCE_var;
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if ((System_Enum_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Enum_TypeInfo);
  }
  __this_01 = System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  if (__this_01 != (System_Array_o *)0x0) {
    pSVar3 = System_Array__GetEnumerator(__this_01,(MethodInfo *)0x0);
    if (pSVar3 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      pSVar9 = pSVar3->klass;
      uVar1._0_1_ = (pSVar9->_2).rank;
      uVar1._1_1_ = (pSVar9->_2).minimumAlignment;
      uVar11 = (ulong)uVar1;
      if (uVar11 != 0) {
        piVar6 = &((pSVar9->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar4 = pSVar9->vtable + *piVar6;
            goto LAB_0358e610;
          }
          uVar11 = uVar11 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar11 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pSVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_0358e610:
      uVar11 = (*pVVar4->methodPtr)(pSVar3,pVVar4->method);
      if ((uVar11 & 1) == 0) {
        plVar5 = (long *)thunk_FUN_01bda71c(pSVar3,System_IDisposable_TypeInfo);
        if (plVar5 == (long *)0x0) goto LAB_0358e750;
        lVar10 = *plVar5;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 == 0) goto LAB_0358e728;
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_0358e710;
      }
      pSVar9 = pSVar3->klass;
      uVar2._0_1_ = (pSVar9->_2).rank;
      uVar2._1_1_ = (pSVar9->_2).minimumAlignment;
      uVar11 = (ulong)uVar2;
      if (uVar11 != 0) {
        piVar6 = &((pSVar9->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar4 = pSVar9->vtable + (*piVar6 + 1);
            goto LAB_0358e670;
          }
          uVar11 = uVar11 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar11 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pSVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_0358e670:
      plVar5 = (long *)(*pVVar4->methodPtr)(pSVar3,pVVar4->method);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (*(Il2CppClass **)(*plVar5 + 0x40) != (KFKFNDEJLKK_PCJFAKMBHCE_TypeInfo->_1).element_class)
      {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
      piVar6 = (int32_t *)thunk_FUN_01bda96c();
      HIHCBMNGGEO = *piVar6;
      __this_02 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (__this_02 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      collection = Nekki_SF2_Core_Quests_QuestsManager__GetQuestsForTests
                             (__this_02,HIHCBMNGGEO,(MethodInfo *)0x0);
      if (collection == (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((collection->fields)._size != 0) {
        if (OIEGJOKFIHI == (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_List<object>__AddRange
                  ((System_Collections_Generic_List_object__o *)OIEGJOKFIHI,
                   (System_Collections_Generic_IEnumerable_T__o *)collection,
                   Method_System_Collections_Generic_List<FPPKHNNABAD>_AddRange__);
      }
    } while( true );
  }
  goto LAB_0358e878;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_0358e710:
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0358e744;
    }
  }
LAB_0358e728:
  puVar7 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_0358e744:
  (*(code *)*puVar7)(plVar5,puVar7[1]);
LAB_0358e750:
  if (OIEGJOKFIHI != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
    local_54 = (OIEGJOKFIHI->fields)._size;
    pSVar8 = System_Int32__ToString((int32_t)&local_54,(MethodInfo *)0x0);
    pSVar8 = System_String__Concat(StringLiteral_21558,pSVar8,(MethodInfo *)0x0);
    if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__AppendLine(__this_00,pSVar8,(MethodInfo *)0x0);
      __this_03 = (OGFBENMAGJJ_NLOBPGHHIEF_o *)thunk_FUN_01bda818(OGFBENMAGJJ_NLOBPGHHIEF_TypeInfo);
      OGFBENMAGJJ_NLOBPGHHIEF___ctor(__this_03,(MethodInfo *)0x0);
      OGFBENMAGJJ__NPAKAMCDCNG(__this,OIEGJOKFIHI,__this_00,__this_03,in_x4);
      if (__this_03 != (OGFBENMAGJJ_NLOBPGHHIEF_o *)0x0) {
        GJFEBGNFFBA__ILHNDPBPGAN
                  ((GJFEBGNFFBA_o *)__this,0 < (__this_03->fields).GLDHJGFLPAN,StringLiteral_10715,
                   __this_00,(MethodInfo *)0x0);
        local_54 = (OIEGJOKFIHI->fields)._size;
        str1 = System_Int32__ToString((int32_t)&local_54,(MethodInfo *)0x0);
        pSVar8 = StringLiteral_264;
        if ((__this_03->fields).GLDHJGFLPAN < 1) {
          pSVar8 = (System_String_o *)0x0;
        }
        pSVar8 = System_String__Concat
                           (StringLiteral_10716,str1,StringLiteral_514,pSVar8,(MethodInfo *)0x0);
        return pSVar8;
      }
    }
  }
LAB_0358e878:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

