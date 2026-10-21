// TypeDefIndex 1280
// Namespace: 
// public class CBAJBEFPEPB : GJFEBGNFFBA
// Fields:

// ===== protected override string FGBGAKLKONL()  [RVA 0x314F534]
// CBAJBEFPEPB$$FGBGAKLKONL @ RVA 0x314F534

/* WARNING: Removing unreachable block (ram,0x0324fc90) */

System_String_o * CBAJBEFPEPB__FGBGAKLKONL(CBAJBEFPEPB_o *__this,MethodInfo *method)

{
  int32_t HIHCBMNGGEO;
  ushort uVar1;
  ushort uVar2;
  Il2CppType *handle;
  undefined4 uVar3;
  FPPKHNNABAD_o *__this_00;
  bool bVar4;
  System_Text_StringBuilder_o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  System_Type_o *enumType;
  System_Array_o *__this_03;
  System_Collections_IEnumerator_o *pSVar5;
  VirtualInvokeData *pVVar6;
  long *plVar7;
  int32_t *piVar8;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar9;
  System_Collections_Generic_List_FPPKHNNABAD__o *collection;
  System_String_o *pSVar10;
  System_String_o *str2;
  undefined8 *puVar11;
  MethodInfo *extraout_x1;
  System_Collections_IEnumerator_c *pSVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  undefined1 local_a8 [8];
  void *pvStack_a0;
  int32_t local_98;
  undefined4 uStack_94;
  undefined4 local_88;
  undefined1 local_80 [8];
  undefined8 uStack_78;
  FPPKHNNABAD_o *local_70;
  int32_t local_64;
  
  if ((DAT_045667fe & 1) == 0) {
    FUN_01bab630(&System_Enum_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_get_Current__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<FPPKHNNABAD>_TypeInfo);
    FUN_01bab630(&KFKFNDEJLKK_PCJFAKMBHCE_var);
    FUN_01bab630(&KFKFNDEJLKK_PCJFAKMBHCE_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&StringLiteral_10718/*"QuestStageCompare Tests processed. "*/);
    FUN_01bab630(&StringLiteral_21557/*"total - "*/);
    FUN_01bab630(&StringLiteral_167/*" "*/);
    FUN_01bab630(&StringLiteral_10717/*"QuestStageCompare Tests"*/);
    FUN_01bab630(&StringLiteral_264/*" <color=red>with errors</color>"*/);
    FUN_01bab630(&StringLiteral_514/*" quests"*/);
    DAT_045667fe = 1;
    method = extraout_x1;
  }
  local_64 = 0;
  local_80 = (undefined1  [8])0x0;
  uStack_78._0_4_ = 0;
  uStack_78._4_4_ = 0;
  local_70 = (FPPKHNNABAD_o *)0x0;
  local_88 = 0;
  __this_01 = (System_Text_StringBuilder_o *)
              thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(__this_01,(MethodInfo *)0x0);
  __this_02 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<FPPKHNNABAD>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            (__this_02,Method_System_Collections_Generic_List<FPPKHNNABAD>__ctor__);
  handle = KFKFNDEJLKK_PCJFAKMBHCE_var;
  if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if ((System_Enum_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_Enum_TypeInfo);
  }
  __this_03 = System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  if (__this_03 != (System_Array_o *)0x0) {
    pSVar5 = System_Array__GetEnumerator(__this_03,(MethodInfo *)0x0);
    if (pSVar5 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      pSVar12 = pSVar5->klass;
      uVar1._0_1_ = (pSVar12->_2).rank;
      uVar1._1_1_ = (pSVar12->_2).minimumAlignment;
      uVar14 = (ulong)uVar1;
      if (uVar14 != 0) {
        piVar8 = &((pSVar12->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar6 = pSVar12->vtable + *piVar8;
            goto LAB_0324f7a0;
          }
          uVar14 = uVar14 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar14 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pSVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_0324f7a0:
      uVar14 = (*pVVar6->methodPtr)(pSVar5,pVVar6->method);
      if ((uVar14 & 1) == 0) {
        plVar7 = (long *)thunk_FUN_01bda71c(pSVar5,System_IDisposable_TypeInfo);
        if (plVar7 == (long *)0x0) goto LAB_0324f938;
        lVar13 = *plVar7;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 == 0) goto LAB_0324f910;
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_0324f8f8;
      }
      pSVar12 = pSVar5->klass;
      uVar2._0_1_ = (pSVar12->_2).rank;
      uVar2._1_1_ = (pSVar12->_2).minimumAlignment;
      uVar14 = (ulong)uVar2;
      if (uVar14 != 0) {
        piVar8 = &((pSVar12->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar6 = pSVar12->vtable + (*piVar8 + 1);
            goto LAB_0324f800;
          }
          uVar14 = uVar14 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar14 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pSVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_0324f800:
      plVar7 = (long *)(*pVVar6->methodPtr)(pSVar5,pVVar6->method);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (*(Il2CppClass **)(*plVar7 + 0x40) != (KFKFNDEJLKK_PCJFAKMBHCE_TypeInfo->_1).element_class)
      {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
      piVar8 = (int32_t *)thunk_FUN_01bda96c();
      HIHCBMNGGEO = *piVar8;
      pNVar9 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (pNVar9 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      collection = Nekki_SF2_Core_Quests_QuestsManager__GetQuestsForTests
                             (pNVar9,HIHCBMNGGEO,(MethodInfo *)0x0);
      if (collection == (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((collection->fields)._size != 0) {
        local_a8 = (undefined1  [8])KFKFNDEJLKK_PCJFAKMBHCE_TypeInfo;
        pvStack_a0 = (void *)0xffffffffffffffff;
        local_98 = HIHCBMNGGEO;
        pSVar10 = System_Enum__ToString((System_Enum_o *)local_a8,(MethodInfo *)0x0);
        local_64 = (collection->fields)._size;
        str2 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
        pSVar10 = System_String__Concat(pSVar10,StringLiteral_167/*" "*/,str2,(MethodInfo *)0x0);
        if (__this_01 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Text_StringBuilder__AppendLine(__this_01,pSVar10,(MethodInfo *)0x0);
        if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_List<object>__AddRange
                  (__this_02,(System_Collections_Generic_IEnumerable_T__o *)collection,
                   Method_System_Collections_Generic_List<FPPKHNNABAD>_AddRange__);
      }
    } while( true );
  }
  goto LAB_0324fc88;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_0324f8f8:
    if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
      puVar11 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0324f92c;
    }
  }
LAB_0324f910:
  puVar11 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_0324f92c:
  (*(code *)*puVar11)(plVar7,puVar11[1]);
LAB_0324f938:
  if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
    local_64 = (__this_02->fields)._size;
    pSVar10 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
    pSVar10 = System_String__Concat(StringLiteral_21557/*"total - "*/,pSVar10,(MethodInfo *)0x0);
    if (__this_01 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__AppendLine(__this_01,pSVar10,(MethodInfo *)0x0);
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_a8,__this_02,
                 Method_System_Collections_Generic_List<FPPKHNNABAD>_GetEnumerator__);
      uVar3 = local_88;
      local_70 = (FPPKHNNABAD_o *)CONCAT44(uStack_94,local_98);
      uStack_78 = pvStack_a0;
      local_80 = local_a8;
      while( true ) {
        bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
                           Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_MoveNext__
                          );
        __this_00 = local_70;
        if (!bVar4) {
          local_88 = uVar3;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
                     Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_Dispose__);
          GJFEBGNFFBA__ILHNDPBPGAN
                    ((GJFEBGNFFBA_o *)__this,false,StringLiteral_10717/*"QuestStageCompare Tests"*/,__this_01,(MethodInfo *)0x0);
          local_64 = (__this_02->fields)._size;
          pSVar10 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
          pSVar10 = System_String__Concat
                              (StringLiteral_10718/*"QuestStageCompare Tests processed. "*/,pSVar10,StringLiteral_514/*" quests"*/,(System_String_o *)0x0,
                               (MethodInfo *)0x0);
          return pSVar10;
        }
        pNVar9 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
        if (pNVar9 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) break;
        if (__this_00 == (FPPKHNNABAD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        FPPKHNNABAD__DGCODECJJCC(__this_00,(pNVar9->fields).QuestParameters,(MethodInfo *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
LAB_0324fc88:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x314FEF8]
// CBAJBEFPEPB$$.ctor @ RVA 0x314FEF8

void CBAJBEFPEPB___ctor(CBAJBEFPEPB_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_045667ff & 1) == 0) {
    FUN_01bab630(&GJFEBGNFFBA_TypeInfo);
    DAT_045667ff = 1;
    method = extraout_x1;
  }
  if ((GJFEBGNFFBA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GJFEBGNFFBA_TypeInfo,method);
  }
  GJFEBGNFFBA___ctor((GJFEBGNFFBA_o *)__this,(MethodInfo *)0x0);
  return;
}

