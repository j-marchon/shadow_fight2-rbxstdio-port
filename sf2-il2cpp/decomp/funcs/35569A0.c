// FKGKBFENGPJ.<>c$$MOPIDBCCFHC @ RVA 0x35569A0

System_String_o *
FKGKBFENGPJ_<>c__MOPIDBCCFHC(FKGKBFENGPJ___c_o *__this,IEJKLPPLHMO_o *command,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_String_o *pSVar3;
  IEJKLPPLHMO_c *pIVar4;
  ulong uVar5;
  int32_t *piVar6;
  
  if ((DAT_04568b69 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_First<string>__);
    __this = (FKGKBFENGPJ___c_o *)FUN_01bab630(&IEJKLPPLHMO_TypeInfo);
    DAT_04568b69 = 1;
  }
  if (command == (IEJKLPPLHMO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  pIVar4 = command->klass;
  uVar1._0_1_ = (pIVar4->_2).rank;
  uVar1._1_1_ = (pIVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pIVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)IEJKLPPLHMO_TypeInfo) {
        pVVar2 = pIVar4->vtable + (*piVar6 + 1);
        goto LAB_03656a3c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(command,IEJKLPPLHMO_TypeInfo,1);
LAB_03656a3c:
  source = (System_Collections_Generic_IEnumerable_TSource__o *)
           (*pVVar2->methodPtr)(command,pVVar2->method);
  pSVar3 = (System_String_o *)
           System_Linq_Enumerable__First<object>
                     (source,Method_System_Linq_Enumerable_First<string>__);
  return pSVar3;
}

