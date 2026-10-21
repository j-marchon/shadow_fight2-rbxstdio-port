// TypeDefIndex 2671
// Namespace: 
// private class OGNCMFBMBMB.AFGELJDFHIF
// Fields:
//   private HashSet<GameObject> GNEMEBABBFF; // 0x10
//   private Stack<OGNCMFBMBMB.AFGELJDFHIF.IAHCECNGKLP> LNAPCDLIOOE; // 0x18

// ===== public void KIANJPCPEGE(GameObject CMMIJCJOBBF, IKIHIGCOLOF ALMGONACBKC, Transform ELOCKFLGKNO)  [RVA 0x33C4A18]
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


// ===== private void LFENGGKOJDO(GameObject CMMIJCJOBBF, IKIHIGCOLOF ALMGONACBKC)  [RVA 0x33C4D04]
// OGNCMFBMBMB.AFGELJDFHIF$$LFENGGKOJDO @ RVA 0x33C4D04

void OGNCMFBMBMB_AFGELJDFHIF__LFENGGKOJDO
               (OGNCMFBMBMB_AFGELJDFHIF_o *__this,UnityEngine_GameObject_o *CMMIJCJOBBF,
               IKIHIGCOLOF_o *ALMGONACBKC,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_Generic_HashSet_object__o *__this_01;
  System_Collections_Generic_Stack_OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP__o *__this_02;
  
  if ((DAT_04567deb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<GameObject>_Add__);
    FUN_01bab630(&OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Stack<OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP>_Push__
                );
    DAT_04567deb = 1;
  }
  __this_02 = (__this->fields).LNAPCDLIOOE;
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)CMMIJCJOBBF;
    thunk_FUN_01c20e04(__this_00 + 1,CMMIJCJOBBF);
    __this_00[1].monitor = ALMGONACBKC;
    thunk_FUN_01c20e04(&__this_00[1].monitor,ALMGONACBKC);
    if (__this_02 != (System_Collections_Generic_Stack_OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP__o *)0x0)
    {
      System_Collections_Generic_Stack<object>__Push
                ((System_Collections_Generic_Stack_T__o *)__this_02,__this_00,
                 Method_System_Collections_Generic_Stack<OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP>_Push__
                );
      __this_01 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).GNEMEBABBFF;
      if (__this_01 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet<object>__Add
                  (__this_01,(Il2CppObject *)CMMIJCJOBBF,
                   Method_System_Collections_Generic_HashSet<GameObject>_Add__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int LPJNHOACLDJ()  [RVA 0x33C4DE0]
// OGNCMFBMBMB.AFGELJDFHIF$$LPJNHOACLDJ @ RVA 0x33C4DE0

int32_t OGNCMFBMBMB_AFGELJDFHIF__LPJNHOACLDJ(OGNCMFBMBMB_AFGELJDFHIF_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Stack_OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04567dec & 1) == 0) {
    auVar2 = FUN_01bab630(&
                          Method_System_Collections_Generic_Stack<OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP>_get_Count__
                         );
    DAT_04567dec = 1;
  }
  pSVar1 = (__this->fields).LNAPCDLIOOE;
  if (pSVar1 != (System_Collections_Generic_Stack_OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP__o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public bool DNMIKEGDEAG(GameObject CMMIJCJOBBF)  [RVA 0x33C4E28]
// OGNCMFBMBMB.AFGELJDFHIF$$DNMIKEGDEAG @ RVA 0x33C4E28

bool OGNCMFBMBMB_AFGELJDFHIF__DNMIKEGDEAG
               (OGNCMFBMBMB_AFGELJDFHIF_o *__this,UnityEngine_GameObject_o *CMMIJCJOBBF,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if ((DAT_04567ded & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<GameObject>_Contains__);
    DAT_04567ded = 1;
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).GNEMEBABBFF;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar1 = System_Collections_Generic_HashSet<object>__Contains
                      (__this_00,(Il2CppObject *)CMMIJCJOBBF,
                       Method_System_Collections_Generic_HashSet<GameObject>_Contains__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x33C4824]
// OGNCMFBMBMB.AFGELJDFHIF$$.ctor @ RVA 0x33C4824

void OGNCMFBMBMB_AFGELJDFHIF___ctor(OGNCMFBMBMB_AFGELJDFHIF_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_Stack_OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP__o *__this_01;
  System_Collections_Generic_Stack_OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567dee & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<GameObject>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<GameObject>_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Stack<OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_Stack<OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP>_TypeInfo);
    DAT_04567dee = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_HashSet<GameObject>_TypeInfo,method);
  System_Collections_Generic_HashSet<object>___ctor
            (__this_00,Method_System_Collections_Generic_HashSet<GameObject>__ctor__);
  (__this->fields).GNEMEBABBFF = (System_Collections_Generic_HashSet_GameObject__o *)__this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (System_Collections_Generic_Stack_OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP__o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_Stack<OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP>_TypeInfo
                                );
  System_Collections_Generic_Stack<object>___ctor
            ((System_Collections_Generic_Stack_T__o *)__this_01,8,
             Method_System_Collections_Generic_Stack<OGNCMFBMBMB_AFGELJDFHIF_IAHCECNGKLP>__ctor__);
  ppSVar1 = &(__this->fields).LNAPCDLIOOE;
  *ppSVar1 = __this_01;
  thunk_FUN_01c20e04(ppSVar1,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

