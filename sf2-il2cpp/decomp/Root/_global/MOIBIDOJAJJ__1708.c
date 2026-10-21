// TypeDefIndex 1708
// Namespace: 
// public class MOIBIDOJAJJ : BOFEMGGNODC
// Fields:

// ===== public void .ctor()  [RVA 0x31D4B88]
// MOIBIDOJAJJ$$.ctor @ RVA 0x31D4B88

void MOIBIDOJAJJ___ctor(MOIBIDOJAJJ_o *__this,MethodInfo *method)

{
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x31D4B90]
// MOIBIDOJAJJ$$MAHFCKJGBPP @ RVA 0x31D4B90

void MOIBIDOJAJJ__MAHFCKJGBPP(MOIBIDOJAJJ_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  KCJCIJHMEJF_c *pKVar3;
  ulong uVar4;
  int32_t *piVar5;
  KCJCIJHMEJF_o *pKVar6;
  
  if ((DAT_04566cd1 & 1) == 0) {
    FUN_01bab630(&KCJCIJHMEJF_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566cd1 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_045662dd == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045662dd = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pKVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_CODLGIOEMPL_k__BackingField;
  if (pKVar6 == (KCJCIJHMEJF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032d4cb4 to 033d4cb7 has its CatchHandler @ 032d4ce0 */
    FUN_01bab8c8();
  }
  pKVar3 = pKVar6->klass;
  uVar1._0_1_ = (pKVar3->_2).rank;
  uVar1._1_1_ = (pKVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pKVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)KCJCIJHMEJF_TypeInfo) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032d4acc with catch @ 032d4c80
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032d4ad8 with catch @ 032d4c84
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032d4b04 with catch @ 032d4c88
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032d4b14 with catch @ 032d4c8c
                        */
        pVVar2 = pKVar3->vtable + (*piVar5 + 2);
        goto LAB_032d4c90;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
                    /* try { // try from 032d4c70 to 033d4c73 has its CatchHandler @ 032d4c98 */
                    /* try { // try from 032d4c74 to 033d4c77 has its CatchHandler @ 032d4c94 */
                    /* try { // try from 032d4c78 to 033d4c7b has its CatchHandler @ 032d4c90 */
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pKVar6,KCJCIJHMEJF_TypeInfo,2);
                    /* try { // try from 032d4c7c to 033d4cb3 has its CatchHandler @ 032d4850 */
LAB_032d4c90:
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032d4c78 with catch @ 032d4c90
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032d4c74 with catch @ 032d4c94
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032d4c70 with catch @ 032d4c98
                        */
  (*pVVar2->methodPtr)(pKVar6,pVVar2->method);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032d4ab0 with catch @ 032d4c9c
                        */
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

