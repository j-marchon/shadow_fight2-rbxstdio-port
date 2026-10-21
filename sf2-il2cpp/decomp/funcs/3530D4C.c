// IJCLCKIJJDH$$ENLKIOMNGAK @ RVA 0x3530D4C

System_ValueTuple_bool__bool__o
IJCLCKIJJDH__ENLKIOMNGAK(IJCLCKIJJDH_o *__this,bool FNHHIEKCLPI,MethodInfo *method)

{
  ushort uVar1;
  bool item2;
  VirtualInvokeData *pVVar2;
  long lVar3;
  CFEJGBOOCOG_c *pCVar4;
  ulong uVar5;
  int32_t *piVar6;
  CFEJGBOOCOG_o *pCVar7;
  System_ValueTuple_bool__bool__Fields local_24 [2];
  
  if ((DAT_04568a58 & 1) == 0) {
    FUN_01bab630(&CFEJGBOOCOG_TypeInfo);
    FUN_01bab630(&Method_System_ValueTuple<bool,_bool>__ctor__);
    DAT_04568a58 = 1;
  }
  pCVar7 = (__this->fields).AJAPLLENPMB;
  if (pCVar7 == (CFEJGBOOCOG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pCVar4 = pCVar7->klass;
  uVar1._0_1_ = (pCVar4->_2).rank;
  uVar1._1_1_ = (pCVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pCVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)CFEJGBOOCOG_TypeInfo) {
        pVVar2 = pCVar4->vtable + (*piVar6 + 1);
        goto LAB_03630dec;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pCVar7,CFEJGBOOCOG_TypeInfo,1);
LAB_03630dec:
  lVar3 = (*pVVar2->methodPtr)(pCVar7,pVVar2->method);
  if (lVar3 == 0) {
    item2 = false;
  }
  else {
    item2 = *(char *)(lVar3 + 0x40) != '\0';
  }
  local_24[0].Item1 = false;
  local_24[0].Item2 = false;
  System_ValueTuple<bool,_bool>___ctor
            ((System_ValueTuple_bool__bool__o)SUB82(local_24,0),FNHHIEKCLPI,item2,
             Method_System_ValueTuple<bool,_bool>__ctor__);
  return (System_ValueTuple_bool__bool__o)local_24[0];
}

