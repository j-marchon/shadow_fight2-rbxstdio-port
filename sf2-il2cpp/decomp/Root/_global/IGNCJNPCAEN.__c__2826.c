// TypeDefIndex 2826
// Namespace: 
// [Serializable]
// private sealed class IGNCJNPCAEN.<>c
// Fields:
//   public static readonly IGNCJNPCAEN.<>c <>9; // 0x0
//   public static Func<IEnumerable<IEJKLPPLHMO>> <>9__2_0; // 0x8
//   public static Func<IEnumerable<IEJKLPPLHMO>> <>9__2_1; // 0x10

// ===== public void .ctor()  [RVA 0x342ADD4]
// IGNCJNPCAEN.<>c$$.ctor @ RVA 0x342ADD4

void IGNCJNPCAEN_<>c___ctor(IGNCJNPCAEN___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal IEnumerable<IEJKLPPLHMO> PAMCMOPGKGO()  [RVA 0x342ADDC]
// IGNCJNPCAEN.<>c$$PAMCMOPGKGO @ RVA 0x342ADDC

System_Collections_Generic_IEnumerable_IEJKLPPLHMO__o *
IGNCJNPCAEN_<>c__PAMCMOPGKGO(IGNCJNPCAEN___c_o *__this,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  System_Collections_Generic_IEnumerable_IEJKLPPLHMO__o *pSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  System_Collections_Generic_Dictionary_string__IEJKLPPLHMO__c *pSVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_Generic_Dictionary_string__IEJKLPPLHMO__o *pSVar7;
  
  if ((DAT_04568132 & 1) == 0) {
    FUN_01bab630(&BHNHMJNIAII_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IReadOnlyDictionary<string,_IEJKLPPLHMO>_TypeInfo);
    DAT_04568132 = 1;
    method = extraout_x1;
  }
  if ((BHNHMJNIAII_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BHNHMJNIAII_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04568213 == '\0') {
    FUN_01bab630(&BHNHMJNIAII_TypeInfo);
    DAT_04568213 = '\x01';
    method = extraout_x1_01;
  }
  if ((BHNHMJNIAII_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BHNHMJNIAII_TypeInfo,method);
  }
  pSVar7 = BHNHMJNIAII_TypeInfo->static_fields->HFAKMNMMBLD;
  if (pSVar7 == (System_Collections_Generic_Dictionary_string__IEJKLPPLHMO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar4 = pSVar7->klass;
  uVar1._0_1_ = (pSVar4->_2).rank;
  uVar1._1_1_ = (pSVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pSVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)
          System_Collections_Generic_IReadOnlyDictionary<string,_IEJKLPPLHMO>_TypeInfo) {
        pVVar2 = &(pSVar4->vtable)._0_Equals + (*piVar6 + 4);
        goto LAB_0352aec0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar7,
                        System_Collections_Generic_IReadOnlyDictionary<string,_IEJKLPPLHMO>_TypeInfo
                        ,4);
LAB_0352aec0:
                    /* WARNING: Could not recover jumptable at 0x0352aed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pSVar3 = (System_Collections_Generic_IEnumerable_IEJKLPPLHMO__o *)
           (*pVVar2->methodPtr)(pSVar7,pVVar2->method);
  return pSVar3;
}


// ===== private static void .cctor()  [RVA 0x342AED8]
// IGNCJNPCAEN.<>c$$.cctor @ RVA 0x342AED8

void IGNCJNPCAEN_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04568133 & 1) == 0) {
    FUN_01bab630(&IGNCJNPCAEN_<>c_TypeInfo);
    DAT_04568133 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(IGNCJNPCAEN_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  IGNCJNPCAEN_<>c_TypeInfo->static_fields->__9 = (IGNCJNPCAEN___c_o *)__this;
  thunk_FUN_01c20e04(IGNCJNPCAEN_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== internal IEnumerable<IEJKLPPLHMO> IDIKPEHFONG()  [RVA 0x342AF40]
// IGNCJNPCAEN.<>c$$IDIKPEHFONG @ RVA 0x342AF40

System_Collections_Generic_IEnumerable_IEJKLPPLHMO__o *
IGNCJNPCAEN_<>c__IDIKPEHFONG(IGNCJNPCAEN___c_o *__this,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  System_Collections_Generic_IEnumerable_IEJKLPPLHMO__o *pSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  System_Collections_Generic_Dictionary_string__IEJKLPPLHMO__c *pSVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_Generic_Dictionary_string__IEJKLPPLHMO__o *pSVar7;
  
  if ((DAT_04568134 & 1) == 0) {
    FUN_01bab630(&BHNHMJNIAII_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IReadOnlyDictionary<string,_IEJKLPPLHMO>_TypeInfo);
    DAT_04568134 = 1;
    method = extraout_x1;
  }
  if ((BHNHMJNIAII_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BHNHMJNIAII_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04568213 == '\0') {
    FUN_01bab630(&BHNHMJNIAII_TypeInfo);
    DAT_04568213 = '\x01';
    method = extraout_x1_01;
  }
  if ((BHNHMJNIAII_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BHNHMJNIAII_TypeInfo,method);
  }
  pSVar7 = BHNHMJNIAII_TypeInfo->static_fields->HFAKMNMMBLD;
  if (pSVar7 == (System_Collections_Generic_Dictionary_string__IEJKLPPLHMO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar4 = pSVar7->klass;
  uVar1._0_1_ = (pSVar4->_2).rank;
  uVar1._1_1_ = (pSVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pSVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)
          System_Collections_Generic_IReadOnlyDictionary<string,_IEJKLPPLHMO>_TypeInfo) {
        pVVar2 = &(pSVar4->vtable)._0_Equals + (*piVar6 + 4);
        goto LAB_0352b024;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar7,
                        System_Collections_Generic_IReadOnlyDictionary<string,_IEJKLPPLHMO>_TypeInfo
                        ,4);
LAB_0352b024:
                    /* WARNING: Could not recover jumptable at 0x0352b034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pSVar3 = (System_Collections_Generic_IEnumerable_IEJKLPPLHMO__o *)
           (*pVVar2->methodPtr)(pSVar7,pVVar2->method);
  return pSVar3;
}

