// KFOPKHPGAAK$$MAHFCKJGBPP @ RVA 0x34A5588

void KFOPKHPGAAK__MAHFCKJGBPP(KFOPKHPGAAK_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  CPABHCDGLPI_o *JIAMBOGFHID;
  System_IObservable_bool__o *pSVar4;
  System_Action_T__o *pSVar5;
  System_IDisposable_o *pSVar6;
  VirtualInvokeData *pVVar7;
  CPABHCDGLPI_c *pCVar8;
  ulong uVar9;
  int32_t *piVar10;
  LCKCDEKNLOA_o *pLVar11;
  
  if ((DAT_045684e7 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&CPABHCDGLPI_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&Method_KFOPKHPGAAK_GMDKCENGNPO__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<bool>__);
    DAT_045684e7 = 1;
  }
  (*(__this->klass->vtable)._4_PKIFMKGDJJN.methodPtr)
            (__this,(__this->klass->vtable)._4_PKIFMKGDJJN.method);
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
                    /* try { // try from 035a5618 to 036a561f has its CatchHandler @ 035a567c */
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  JIAMBOGFHID = IFAMAAGNCBJ__IDPGLBKEEOP((MethodInfo *)0x0);
  if (JIAMBOGFHID == (CPABHCDGLPI_o *)0x0) {
    BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* try { // try from 035a5630 to 036a563b has its CatchHandler @ 035a5674 */
  iVar1 = *(int *)&(__this->fields).super.field_0x54;
                    /* try { // try from 035a563c to 036a566b has its CatchHandler @ 035a5584 */
  if (iVar1 == 2) {
    pLVar11 = (__this->fields).FNGNIKNIEMM;
    pSVar4 = BIELHCFJAMH__PPJJDLHLJOG(JIAMBOGFHID,(MethodInfo *)0x0);
    pSVar5 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
    System_Action<bool>___ctor();
    pSVar6 = UniRx_ObservableExtensions__Subscribe<bool>
                       ((System_IObservable_T__o *)pSVar4,pSVar5,
                        Method_UniRx_ObservableExtensions_Subscribe<bool>__);
                    /* try { // try from 035a5774 to 036a577b has its CatchHandler @ 035a57e8 */
    if (pLVar11 != (LCKCDEKNLOA_o *)0x0) {
      UniRx_SerialDisposable__set_Disposable
                ((UniRx_SerialDisposable_o *)pLVar11,pSVar6,(MethodInfo *)0x0);
      pCVar8 = JIAMBOGFHID->klass;
      uVar3._0_1_ = (pCVar8->_2).rank;
      uVar3._1_1_ = (pCVar8->_2).minimumAlignment;
                    /* try { // try from 035a5790 to 036a579b has its CatchHandler @ 035a57e0 */
      uVar9 = (ulong)uVar3;
                    /* try { // try from 035a579c to 036a57d7 has its CatchHandler @ 035a56e0 */
      if (uVar9 != 0) {
        piVar10 = &((pCVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)CPABHCDGLPI_TypeInfo) {
            pVVar7 = pCVar8->vtable + (*piVar10 + 4);
            goto LAB_035a582c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar7 = (VirtualInvokeData *)FUN_01b81914(JIAMBOGFHID,CPABHCDGLPI_TypeInfo,4);
LAB_035a582c:
                    /* catch() { ... } // from try @ 035a5800 with catch @ 035a582c */
                    /* try { // try from 035a5834 to 036a583b has its CatchHandler @ 035a5850 */
                    /* try { // try from 035a583c to 036a5847 has its CatchHandler @ 035a56e0 */
                    /* WARNING: Could not recover jumptable at 0x035a5840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar7->methodPtr)(JIAMBOGFHID,pVVar7->method);
      return;
    }
  }
  else if (iVar1 == 1) {
    pLVar11 = (__this->fields).FNGNIKNIEMM;
    pSVar4 = BIELHCFJAMH__PPJJDLHLJOG(JIAMBOGFHID,(MethodInfo *)0x0);
                    /* try { // try from 035a566c to 036a566f has its CatchHandler @ 035a5678 */
    pSVar5 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
                    /* try { // try from 035a5670 to 036a5693 has its CatchHandler @ 035a5584 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a5630 with catch @ 035a5674
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a566c with catch @ 035a5678
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a5618 with catch @ 035a567c
                        */
    System_Action<bool>___ctor();
                    /* try { // try from 035a5694 to 036a5697 has its CatchHandler @ 035a56b8 */
                    /* try { // try from 035a5698 to 036a56bf has its CatchHandler @ 035a5584 */
    pSVar6 = UniRx_ObservableExtensions__Subscribe<bool>
                       ((System_IObservable_T__o *)pSVar4,pSVar5,
                        Method_UniRx_ObservableExtensions_Subscribe<bool>__);
    if (pLVar11 != (LCKCDEKNLOA_o *)0x0) {
      UniRx_SerialDisposable__set_Disposable
                ((UniRx_SerialDisposable_o *)pLVar11,pSVar6,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035a5694 with catch @ 035a56b8 */
      pCVar8 = JIAMBOGFHID->klass;
      uVar2._0_1_ = (pCVar8->_2).rank;
      uVar2._1_1_ = (pCVar8->_2).minimumAlignment;
                    /* try { // try from 035a56c0 to 036a56c7 has its CatchHandler @ 035a56dc */
      uVar9 = (ulong)uVar2;
                    /* try { // try from 035a56c8 to 036a56d3 has its CatchHandler @ 035a5584 */
      if (uVar9 != 0) {
                    /* try { // try from 035a56d4 to 036a56db has its CatchHandler @ 035a56dc */
        piVar10 = &((pCVar8->_1).interfaceOffsets)->offset;
        do {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035a56c0 with catch @ 035a56dc
                       catch(type#2 @ 00000000) { ... } // from try @ 035a56d4 with catch @ 035a56dc
                        */
                    /* try { // try from 035a56e0 to 036a5773 has its CatchHandler @ 035a56e0
                       catch() { ... } // from try @ 035a56e0 with catch @ 035a56e0
                       catch() { ... } // from try @ 035a579c with catch @ 035a56e0
                       catch() { ... } // from try @ 035a57dc with catch @ 035a56e0
                       catch() { ... } // from try @ 035a5804 with catch @ 035a56e0
                       catch() { ... } // from try @ 035a583c with catch @ 035a56e0 */
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)CPABHCDGLPI_TypeInfo) {
            pVVar7 = pCVar8->vtable + (*piVar10 + 1);
            goto LAB_035a5800;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar7 = (VirtualInvokeData *)FUN_01b81914(JIAMBOGFHID,CPABHCDGLPI_TypeInfo,1);
LAB_035a5800:
                    /* try { // try from 035a5800 to 036a5803 has its CatchHandler @ 035a582c */
                    /* try { // try from 035a5804 to 036a5833 has its CatchHandler @ 035a56e0 */
                    /* WARNING: Could not recover jumptable at 0x035a5818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar7->methodPtr)(JIAMBOGFHID,0,pVVar7->method);
      return;
    }
  }
  else {
    pLVar11 = (__this->fields).FNOJIPMNDPJ;
    if (pLVar11 != (LCKCDEKNLOA_o *)0x0) {
                    /* try { // try from 035a57d8 to 036a57db has its CatchHandler @ 035a57e4 */
                    /* try { // try from 035a57dc to 036a57ff has its CatchHandler @ 035a56e0 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a5790 with catch @ 035a57e0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a57d8 with catch @ 035a57e4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a5774 with catch @ 035a57e8
                        */
      LCKCDEKNLOA__MAHFCKJGBPP(pLVar11,(__this->fields).super.IJOKKFKPBEP,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

