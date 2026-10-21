// GBAAAJLKFDA$$EICHAFPOAJF @ RVA 0x31E1520

int32_t GBAAAJLKFDA__EICHAFPOAJF
                  (GBAAAJLKFDA_o *__this,
                  System_Collections_Generic_List_ValueTuple_int__string___o *BKADBAPFLBB,
                  MethodInfo *method)

{
  ushort uVar1;
  int32_t iVar2;
  VirtualInvokeData *pVVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Predicate_T__o *match;
  CJLNLIOJFLM_c *pCVar6;
  long lVar7;
  ulong uVar8;
  int32_t *piVar9;
  int *piVar10;
  CJLNLIOJFLM_o *pCVar11;
  
  if ((DAT_04566d46 & 1) == 0) {
    FUN_01bab630(&CJLNLIOJFLM_TypeInfo);
    FUN_01bab630(&Method_GBAAAJLKFDA_GLFIBMIKOIA__);
    FUN_01bab630(&UniRx_IReadOnlyReactiveProperty<Nullable<int>>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ValueTuple<int,_string>>_FindIndex__);
    FUN_01bab630(&System_Predicate<ValueTuple<int,_string>>_TypeInfo);
    DAT_04566d46 = 1;
  }
  pCVar11 = (__this->fields).CMJNDHHGCBI;
  if (pCVar11 != (CJLNLIOJFLM_o *)0x0) {
    pCVar6 = pCVar11->klass;
    uVar1._0_1_ = (pCVar6->_2).rank;
    uVar1._1_1_ = (pCVar6->_2).minimumAlignment;
    uVar8 = (ulong)uVar1;
    if (uVar8 != 0) {
      piVar9 = &((pCVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)CJLNLIOJFLM_TypeInfo) {
          pVVar3 = pCVar6->vtable + *piVar9;
          goto LAB_032e15dc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pCVar11,CJLNLIOJFLM_TypeInfo,0);
LAB_032e15dc:
    plVar4 = (long *)(*pVVar3->methodPtr)(pCVar11,pVVar3->method);
    if (plVar4 != (long *)0x0) {
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(UniRx_IReadOnlyReactiveProperty_Nullable_int___c **)(piVar10 + -2) ==
              UniRx_IReadOnlyReactiveProperty<Nullable<int>>_TypeInfo) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_032e1648;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01b81914(plVar4,UniRx_IReadOnlyReactiveProperty<Nullable<int>>_TypeInfo,1);
LAB_032e1648:
      uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if ((uVar8 & 1) != 0) {
        match = (System_Predicate_T__o *)
                thunk_FUN_01bda818(System_Predicate<ValueTuple<int,_string>>_TypeInfo);
        System_Predicate<ValueTuple<int,_object>>___ctor();
        if (BKADBAPFLBB == (System_Collections_Generic_List_ValueTuple_int__string___o *)0x0)
        goto LAB_032e16b4;
        iVar2 = System_Collections_Generic_List<ValueTuple<int,_object>>__FindIndex
                          ((System_Collections_Generic_List_T__o *)BKADBAPFLBB,match,
                           Method_System_Collections_Generic_List<ValueTuple<int,_string>>_FindIndex__
                          );
        if (-1 < iVar2) {
          return iVar2;
        }
      }
      return 0;
    }
  }
LAB_032e16b4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

