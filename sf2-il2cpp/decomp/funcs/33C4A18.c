// OGNCMFBMBMB.AFGELJDFHIF$$KIANJPCPEGE @ RVA 0x33C4A18

void OGNCMFBMBMB_AFGELJDFHIF__KIANJPCPEGE
               (OGNCMFBMBMB_AFGELJDFHIF_o *__this,UnityEngine_GameObject_o *CMMIJCJOBBF,
               IKIHIGCOLOF_o *ALMGONACBKC,UnityEngine_Transform_o *ELOCKFLGKNO,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  UnityEngine_Transform_o *__this_00;
  System_Collections_Generic_Stack_OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP__o *pSVar3;
  Il2CppObject *pIVar4;
  VirtualInvokeData *pVVar5;
  IKIHIGCOLOF_c *pIVar6;
  ulong uVar7;
  int32_t *piVar8;
  System_Collections_Generic_Stack_Enumerator_T__o local_78;
  System_Collections_Generic_Stack_Enumerator_T__o local_60;
  
  if ((DAT_04567dea & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Stack_Enumerator<OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Stack_Enumerator<OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Stack_Enumerator<OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP>_get_Current__
                );
    FUN_01bab630(&OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP_TypeInfo);
    FUN_01bab630(&IKIHIGCOLOF_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Stack<OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Stack<OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP>_Push__
                );
    DAT_04567dea = 1;
  }
  local_60.fields._stack = (System_Collections_Generic_Stack_T__o *)0x0;
  local_60.fields._version = 0;
  local_60.fields._index = 0;
  local_60.fields._currentElement = (Il2CppObject *)0x0;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)CMMIJCJOBBF,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if ((CMMIJCJOBBF != (UnityEngine_GameObject_o *)0x0) &&
     (__this_00 = UnityEngine_GameObject__get_transform(CMMIJCJOBBF,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__SetParent(__this_00,ELOCKFLGKNO,(MethodInfo *)0x0);
    pSVar3 = (__this->fields).LNAPCDLIOOE;
    if (pSVar3 != (System_Collections_Generic_Stack_OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP__o *)0x0) {
      System_Collections_Generic_Stack<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_Stack_T__o *)pSVar3,
                 Method_System_Collections_Generic_Stack<OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP>_GetEnumerator__
                );
      local_60.fields._version = local_78.fields._version;
      local_60.fields._index = local_78.fields._index;
      local_60.fields._stack = local_78.fields._stack;
      local_60.fields._currentElement = local_78.fields._currentElement;
      while (bVar2 = System_Collections_Generic_Stack_Enumerator<object>__MoveNext
                               (&local_60,
                                Method_System_Collections_Generic_Stack_Enumerator<OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP>_MoveNext__
                               ), bVar2) {
        pIVar4 = System_Collections_Generic_Stack_Enumerator<object>__get_Current
                           (&local_60,
                            Method_System_Collections_Generic_Stack_Enumerator<OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP>_get_Current__
                           );
        if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (pIVar4[1].klass == (Il2CppClass *)CMMIJCJOBBF) {
          System_Collections_Generic_Stack_Enumerator<object>__Dispose
                    (&local_60,
                     Method_System_Collections_Generic_Stack_Enumerator<OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP>_Dispose__
                    );
          return;
        }
      }
      System_Collections_Generic_Stack_Enumerator<object>__Dispose
                (&local_60,
                 Method_System_Collections_Generic_Stack_Enumerator<OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP>_Dispose__
                );
      if (ALMGONACBKC != (IKIHIGCOLOF_o *)0x0) {
        pIVar6 = ALMGONACBKC->klass;
        uVar1._0_1_ = (pIVar6->_2).rank;
        uVar1._1_1_ = (pIVar6->_2).minimumAlignment;
        uVar7 = (ulong)uVar1;
        if (uVar7 != 0) {
          piVar8 = &((pIVar6->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
                (Il2CppClass *)IKIHIGCOLOF_TypeInfo) {
              pVVar5 = pIVar6->vtable + (*piVar8 + 1);
              goto LAB_034c4bf4;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        pVVar5 = (VirtualInvokeData *)FUN_01b81914(ALMGONACBKC,IKIHIGCOLOF_TypeInfo,1);
LAB_034c4bf4:
        (*pVVar5->methodPtr)(ALMGONACBKC,pVVar5->method);
        pSVar3 = (__this->fields).LNAPCDLIOOE;
        pIVar4 = (Il2CppObject *)thunk_FUN_01bda818(OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP_TypeInfo);
        System_Object___ctor(pIVar4,(MethodInfo *)0x0);
        if (pIVar4 != (Il2CppObject *)0x0) {
          pIVar4[1].klass = (Il2CppClass *)CMMIJCJOBBF;
          thunk_FUN_01c20e04(pIVar4 + 1,CMMIJCJOBBF);
          pIVar4[1].monitor = ALMGONACBKC;
          thunk_FUN_01c20e04(&pIVar4[1].monitor,ALMGONACBKC);
          if (pSVar3 != (System_Collections_Generic_Stack_OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP__o *)
                        0x0) {
            System_Collections_Generic_Stack<object>__Push
                      ((System_Collections_Generic_Stack_T__o *)pSVar3,pIVar4,
                       Method_System_Collections_Generic_Stack<OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP>_Push__
                      );
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

