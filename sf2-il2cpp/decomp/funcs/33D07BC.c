// NCIIAGLGGIP$$IJALIPCBFPD @ RVA 0x33D07BC

void NCIIAGLGGIP__IJALIPCBFPD(NCIIAGLGGIP_o *__this,int32_t HOKBHLPPCAH,MethodInfo *method)

{
  ushort uVar1;
  long lVar2;
  KAKGABBLHGP_o *__this_00;
  VirtualInvokeData *pVVar3;
  long lVar4;
  JNDFOKIMHPB_c *pJVar5;
  ulong uVar6;
  int32_t *piVar7;
  JNDFOKIMHPB_o *pJVar8;
  Core_Configs_Models_PackType_array *LFADLKGPBHC;
  
  if ((DAT_04567e5e & 1) == 0) {
                    /* try { // try from 034d07e4 to 035d07e7 has its CatchHandler @ 034d07ec */
    FUN_01bab630(&Method_System_Array_Empty<PackType>__,HOKBHLPPCAH);
                    /* try { // try from 034d07e8 to 035d0807 has its CatchHandler @ 034d0670 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034d07e4 with catch @ 034d07ec
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034d0780 with catch @ 034d07f0
                        */
    FUN_01bab630(&JNDFOKIMHPB_TypeInfo);
    FUN_01bab630(&KAKGABBLHGP_TypeInfo);
    DAT_04567e5e = 1;
  }
                    /* try { // try from 034d0808 to 035d080b has its CatchHandler @ 034d0834 */
  lVar2 = Method_System_Array_Empty<PackType>__;
                    /* try { // try from 034d080c to 035d083b has its CatchHandler @ 034d0670 */
  pJVar8 = (__this->fields).BAKCPKLAEMM;
  lVar4 = *(long *)(Method_System_Array_Empty<PackType>__ + 0x38);
  if (lVar4 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<PackType>__);
    lVar4 = *(long *)(lVar2 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01b81620();
  }
                    /* catch() { ... } // from try @ 034d0808 with catch @ 034d0834 */
  if (*(int *)(lVar4 + 0xe0) == 0) {
                    /* try { // try from 034d083c to 035d0843 has its CatchHandler @ 034d0858 */
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 034d0844 to 035d084f has its CatchHandler @ 034d0670 */
  lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
                    /* try { // try from 034d0850 to 035d0857 has its CatchHandler @ 034d0858 */
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034d083c with catch @ 034d0858
                       catch(type#2 @ 00000000) { ... } // from try @ 034d0850 with catch @ 034d0858
                        */
    lVar2 = FUN_01b81620();
  }
  LFADLKGPBHC = (Core_Configs_Models_PackType_array *)**(undefined8 **)(lVar2 + 0xb8);
  __this_00 = (KAKGABBLHGP_o *)thunk_FUN_01bda818(KAKGABBLHGP_TypeInfo);
  KAKGABBLHGP___ctor(__this_00,true,LFADLKGPBHC,(MethodInfo *)0x0);
  if (pJVar8 == (JNDFOKIMHPB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pJVar5 = pJVar8->klass;
  uVar1._0_1_ = (pJVar5->_2).rank;
  uVar1._1_1_ = (pJVar5->_2).minimumAlignment;
  uVar6 = (ulong)uVar1;
  if (uVar6 != 0) {
    piVar7 = &((pJVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)JNDFOKIMHPB_TypeInfo) {
        pVVar3 = pJVar5->vtable + *piVar7;
        goto LAB_034d08d8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pJVar8,JNDFOKIMHPB_TypeInfo,0);
LAB_034d08d8:
                    /* WARNING: Could not recover jumptable at 0x034d08f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar3->methodPtr)(pJVar8,__this_00,0,pVVar3->method);
  return;
}

