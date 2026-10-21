// TypeDefIndex 3204
// Namespace: 
// public class OGFKOHEPEAK : NPGEGIHFHMG
// Fields:
//   private readonly MJPJANJNDCI<RevenueMultiplierConfig> OAOMFCGPCBP; // 0x10
//   private readonly FOHLMNAGHPH KMHBAIHFIDP; // 0x18

// ===== public Decimal DNPCNMPIODJ()  [RVA 0x34FA6E8]
// OGFKOHEPEAK$$DNPCNMPIODJ @ RVA 0x34FA6E8

void OGFKOHEPEAK__DNPCNMPIODJ
               (System_Decimal_o *__return_storage_ptr__,OGFKOHEPEAK_o *__this,MethodInfo *method)

{
  uint uVar1;
  float value;
  bool bVar2;
  MethodInfo *in_x2;
  System_Decimal_o *__return_storage_ptr___00;
  System_Decimal_o *extraout_x8;
  float local_24;
  
  if ((DAT_0456881b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_Decimal_TypeInfo);
    FUN_01bab630(&StringLiteral_11365/*"Revenue multiplier getting failed"*/);
    DAT_0456881b = 1;
  }
  local_24 = 0.0;
  bVar2 = OGFKOHEPEAK__MJBCKGHJLMK(__this,&local_24,in_x2);
  value = local_24;
  if (bVar2) {
    uVar1 = (System_Decimal_TypeInfo->_2).cctor_finished;
    __return_storage_ptr___00 = (System_Decimal_o *)(ulong)uVar1;
    if (uVar1 == 0) {
      thunk_FUN_01ba7564();
      __return_storage_ptr___00 = extraout_x8;
    }
    System_Decimal__op_Explicit(__return_storage_ptr___00,value,(MethodInfo *)0x0);
  }
  else {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_11365/*"Revenue multiplier getting failed"*/,(MethodInfo *)0x0);
    if ((System_Decimal_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
  }
  return;
}


// ===== public void .ctor(MJPJANJNDCI<RevenueMultiplierConfig> HLFCHMCOPID, FOHLMNAGHPH NADBJPJOAFM)  [RVA 0x34FAAA0]
// OGFKOHEPEAK$$.ctor @ RVA 0x34FAAA0

void OGFKOHEPEAK___ctor(OGFKOHEPEAK_o *__this,MJPJANJNDCI_RevenueMultiplierConfig__o *HLFCHMCOPID,
                       FOHLMNAGHPH_o *NADBJPJOAFM,MethodInfo *method)

{
  FOHLMNAGHPH_o **ppFVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).OAOMFCGPCBP = HLFCHMCOPID;
                    /* try { // try from 035faac4 to 036faac7 has its CatchHandler @ 035faae4 */
                    /* try { // try from 035faac8 to 036faacb has its CatchHandler @ 035faae0 */
  thunk_FUN_01c20e04(&__this->fields,HLFCHMCOPID);
  ppFVar1 = &(__this->fields).KMHBAIHFIDP;
                    /* try { // try from 035faacc to 036faacf has its CatchHandler @ 035faadc */
  *ppFVar1 = NADBJPJOAFM;
                    /* try { // try from 035faad0 to 036faad3 has its CatchHandler @ 035faad8 */
                    /* try { // try from 035faad4 to 036fab07 has its CatchHandler @ 035fa4c0 */
                    /* catch() { ... } // from try @ 035faad0 with catch @ 035faad8 */
                    /* catch() { ... } // from try @ 035faacc with catch @ 035faadc */
                    /* catch() { ... } // from try @ 035faac8 with catch @ 035faae0 */
  thunk_FUN_01c20e04(ppFVar1,NADBJPJOAFM);
  return;
}


// ===== private bool MJBCKGHJLMK(out float NBHCLDDPKHC)  [RVA 0x34FA7D0]
// OGFKOHEPEAK$$MJBCKGHJLMK @ RVA 0x34FA7D0

bool OGFKOHEPEAK__MJBCKGHJLMK(OGFKOHEPEAK_o *__this,float *NBHCLDDPKHC,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 uVar3;
  int iVar4;
  Il2CppMethodPointer *ppIVar5;
  long lVar6;
  undefined8 *puVar7;
  FOHLMNAGHPH_c *pFVar8;
  MJPJANJNDCI_RevenueMultiplierConfig__c *pMVar9;
  ulong uVar10;
  int32_t *piVar11;
  int *piVar12;
  MJPJANJNDCI_RevenueMultiplierConfig__o *pMVar13;
  long *plVar14;
  FOHLMNAGHPH_o *pFVar15;
  
  if ((DAT_0456881c & 1) == 0) {
    FUN_01bab630(&FOHLMNAGHPH_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IReadOnlyDictionary<IKDJCPOJFNM,_float>_TypeInfo);
    FUN_01bab630(&MJPJANJNDCI<RevenueMultiplierConfig>_TypeInfo);
    DAT_0456881c = 1;
  }
  pFVar15 = (__this->fields).KMHBAIHFIDP;
  if (pFVar15 == (FOHLMNAGHPH_o *)0x0) {
LAB_035faa9c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pFVar8 = pFVar15->klass;
  uVar1._0_1_ = (pFVar8->_2).rank;
  uVar1._1_1_ = (pFVar8->_2).minimumAlignment;
  uVar10 = (ulong)uVar1;
  if (uVar10 != 0) {
    piVar11 = &((pFVar8->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
          (Il2CppClass *)FOHLMNAGHPH_TypeInfo) {
        ppIVar5 = &pFVar8->vtable[*piVar11].methodPtr;
        goto LAB_035fa878;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  ppIVar5 = (Il2CppMethodPointer *)FUN_01b81914(pFVar15,FOHLMNAGHPH_TypeInfo,0);
LAB_035fa878:
  iVar4 = (**ppIVar5)(pFVar15,(MethodInfo *)ppIVar5[1]);
  pMVar13 = (__this->fields).OAOMFCGPCBP;
  if (pMVar13 == (MJPJANJNDCI_RevenueMultiplierConfig__o *)0x0) goto LAB_035faa9c;
  pMVar9 = pMVar13->klass;
  uVar2._0_1_ = (pMVar9->_2).rank;
  uVar2._1_1_ = (pMVar9->_2).minimumAlignment;
  uVar10 = (ulong)uVar2;
  if (uVar10 != 0) {
    piVar11 = &((pMVar9->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
          (Il2CppClass *)MJPJANJNDCI<RevenueMultiplierConfig>_TypeInfo) {
        ppIVar5 = &pMVar9->vtable[*piVar11].methodPtr;
        goto LAB_035fa8e4;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  ppIVar5 = (Il2CppMethodPointer *)
            FUN_01b81914(pMVar13,MJPJANJNDCI<RevenueMultiplierConfig>_TypeInfo,0);
LAB_035fa8e4:
  lVar6 = (**ppIVar5)(pMVar13,(MethodInfo *)ppIVar5[1]);
  if ((lVar6 == 0) || (plVar14 = *(long **)(lVar6 + 0x10), plVar14 == (long *)0x0))
  goto LAB_035faa9c;
  lVar6 = *plVar14;
  uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar10 != 0) {
    piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(System_Collections_Generic_IReadOnlyDictionary_IKDJCPOJFNM__float__c **)(piVar12 + -2)
          == System_Collections_Generic_IReadOnlyDictionary<IKDJCPOJFNM,_float>_TypeInfo) {
        puVar7 = (undefined8 *)(lVar6 + (long)(*piVar12 + 1) * 0x10 + 0x138);
        goto LAB_035fa954;
      }
      uVar10 = uVar10 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)
           FUN_01b81914(plVar14,
                        System_Collections_Generic_IReadOnlyDictionary<IKDJCPOJFNM,_float>_TypeInfo,
                        1);
LAB_035fa954:
  uVar10 = (*(code *)*puVar7)(plVar14,iVar4,NBHCLDDPKHC,puVar7[1]);
  if ((uVar10 & 1) != 0) {
    return true;
  }
  if (iVar4 == 7) {
    lVar6 = *plVar14;
    uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IReadOnlyDictionary_IKDJCPOJFNM__float__c **)(piVar12 + -2)
            == System_Collections_Generic_IReadOnlyDictionary<IKDJCPOJFNM,_float>_TypeInfo)
        goto LAB_035fa9f0;
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
  }
  else {
    if (iVar4 != 6) goto LAB_035faa2c;
    lVar6 = *plVar14;
    uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IReadOnlyDictionary_IKDJCPOJFNM__float__c **)(piVar12 + -2)
            == System_Collections_Generic_IReadOnlyDictionary<IKDJCPOJFNM,_float>_TypeInfo)
        goto LAB_035fa9f0;
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
  }
  puVar7 = (undefined8 *)
           FUN_01b81914(plVar14,
                        System_Collections_Generic_IReadOnlyDictionary<IKDJCPOJFNM,_float>_TypeInfo,
                        1);
LAB_035faa00:
  uVar10 = (*(code *)*puVar7)(plVar14,3,NBHCLDDPKHC,puVar7[1]);
  if ((uVar10 & 1) != 0) {
    return true;
  }
LAB_035faa2c:
  lVar6 = *plVar14;
  uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar10 != 0) {
    piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(System_Collections_Generic_IReadOnlyDictionary_IKDJCPOJFNM__float__c **)(piVar12 + -2)
          == System_Collections_Generic_IReadOnlyDictionary<IKDJCPOJFNM,_float>_TypeInfo) {
                    /* try { // try from 035faa6c to 036faa83 has its CatchHandler @ 035faaf0 */
        puVar7 = (undefined8 *)(lVar6 + (long)(*piVar12 + 1) * 0x10 + 0x138);
        goto LAB_035faa7c;
      }
      uVar10 = uVar10 - 1;
      piVar12 = piVar12 + 4;
                    /* try { // try from 035faa58 to 036faa5f has its CatchHandler @ 035faae8 */
    } while (uVar10 != 0);
  }
  puVar7 = (undefined8 *)
           FUN_01b81914(plVar14,
                        System_Collections_Generic_IReadOnlyDictionary<IKDJCPOJFNM,_float>_TypeInfo,
                        1);
LAB_035faa7c:
                    /* try { // try from 035faa84 to 036faac3 has its CatchHandler @ 035fa4c0 */
                    /* WARNING: Could not recover jumptable at 0x035faa98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*(code *)*puVar7)(plVar14,0,NBHCLDDPKHC,puVar7[1]);
  return (bool)uVar3;
LAB_035fa9f0:
  puVar7 = (undefined8 *)(lVar6 + (long)(*piVar12 + 1) * 0x10 + 0x138);
  goto LAB_035faa00;
}

