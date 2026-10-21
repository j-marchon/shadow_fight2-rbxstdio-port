// TypeDefIndex 3410
// Namespace: 
// [Serializable]
// private sealed class FKGKBFENGPJ.<>c
// Fields:
//   public static readonly FKGKBFENGPJ.<>c <>9; // 0x0
//   public static Func<IEJKLPPLHMO, string> <>9__7_0; // 0x8

// ===== private static void .cctor()  [RVA 0x3556930]
// FKGKBFENGPJ.<>c$$.cctor @ RVA 0x3556930

void FKGKBFENGPJ_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04568b68 & 1) == 0) {
    FUN_01bab630(&FKGKBFENGPJ_<>c_TypeInfo);
    DAT_04568b68 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(FKGKBFENGPJ_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  FKGKBFENGPJ_<>c_TypeInfo->static_fields->__9 = (FKGKBFENGPJ___c_o *)__this;
  thunk_FUN_01c20e04(FKGKBFENGPJ_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== internal string MOPIDBCCFHC(IEJKLPPLHMO command)  [RVA 0x35569A0]
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


// ===== public void .ctor()  [RVA 0x3556998]
// FKGKBFENGPJ.<>c$$.ctor @ RVA 0x3556998

void FKGKBFENGPJ_<>c___ctor(FKGKBFENGPJ___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

