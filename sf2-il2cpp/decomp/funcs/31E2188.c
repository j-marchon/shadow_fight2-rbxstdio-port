// GBAAAJLKFDA$$GLFIBMIKOIA @ RVA 0x31E2188

bool GBAAAJLKFDA__GLFIBMIKOIA
               (GBAAAJLKFDA_o *__this,System_ValueTuple_int__string__o KEFILECBPMF,
               MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  long *plVar3;
  undefined8 *puVar4;
  CJLNLIOJFLM_c *pCVar5;
  long lVar6;
  ulong uVar7;
  int32_t *piVar8;
  int *piVar9;
  CJLNLIOJFLM_o *pCVar10;
  
  if ((DAT_04566d49 & 1) == 0) {
    FUN_01bab630(&CJLNLIOJFLM_TypeInfo,KEFILECBPMF.fields._0_8_,KEFILECBPMF.fields.Item2);
    FUN_01bab630(&UniRx_IReactiveProperty<Nullable<int>>_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
    DAT_04566d49 = 1;
  }
  pCVar10 = (__this->fields).CMJNDHHGCBI;
  if (pCVar10 != (CJLNLIOJFLM_o *)0x0) {
    pCVar5 = pCVar10->klass;
    uVar1._0_1_ = (pCVar5->_2).rank;
    uVar1._1_1_ = (pCVar5->_2).minimumAlignment;
    uVar7 = (ulong)uVar1;
    if (uVar7 != 0) {
      piVar8 = &((pCVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)CJLNLIOJFLM_TypeInfo) {
          pVVar2 = pCVar5->vtable + *piVar8;
          goto LAB_032e2238;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar2 = (VirtualInvokeData *)FUN_01b81914(pCVar10,CJLNLIOJFLM_TypeInfo,0);
LAB_032e2238:
    plVar3 = (long *)(*pVVar2->methodPtr)(pCVar10,pVVar2->method);
    if (plVar3 != (long *)0x0) {
      lVar6 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(UniRx_IReactiveProperty_Nullable_int___c **)(piVar9 + -2) ==
              UniRx_IReactiveProperty<Nullable<int>>_TypeInfo) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_032e22a0;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_01b81914(plVar3,UniRx_IReactiveProperty<Nullable<int>>_TypeInfo,0);
LAB_032e22a0:
      uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      return (uVar7 & 0xff) != 0 && (int)(uVar7 >> 0x20) == KEFILECBPMF.fields.Item1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

