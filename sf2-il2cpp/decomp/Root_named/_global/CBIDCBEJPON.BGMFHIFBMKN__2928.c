// TypeDefIndex 2928
// Namespace: 
// [CompilerGenerated]
// private sealed class CBIDCBEJPON.BGMFHIFBMKN
// Fields:
//   public MJPJANJNDCI<BuildSettingsConfig> configProvider; // 0x10

// ===== public void .ctor()  [RVA 0x34538A0]
// CBIDCBEJPON.BGMFHIFBMKN$$.ctor @ RVA 0x34538A0

void CBIDCBEJPON_BGMFHIFBMKN___ctor(CBIDCBEJPON_BGMFHIFBMKN_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal TimeSpan PNACDJOJGEB()  [RVA 0x3454244]
// CBIDCBEJPON.BGMFHIFBMKN$$PNACDJOJGEB @ RVA 0x3454244

System_TimeSpan_o
CBIDCBEJPON_BGMFHIFBMKN__PNACDJOJGEB(CBIDCBEJPON_BGMFHIFBMKN_o *__this,MethodInfo *method)

{
  int iVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  VirtualInvokeData *pVVar4;
  System_TimeSpan_o SVar5;
  MJPJANJNDCI_BuildSettingsConfig__c *pMVar6;
  ulong uVar7;
  int32_t *piVar8;
  MJPJANJNDCI_BuildSettingsConfig__o *pMVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  auVar10._8_8_ = method;
  auVar10._0_8_ = __this;
  if ((DAT_045682bb & 1) == 0) {
    FUN_01bab630(&MJPJANJNDCI<BuildSettingsConfig>_TypeInfo);
    auVar10 = FUN_01bab630(&System_TimeSpan_TypeInfo);
    DAT_045682bb = 1;
  }
  pMVar9 = (__this->fields).configProvider;
  if (pMVar9 != (MJPJANJNDCI_BuildSettingsConfig__o *)0x0) {
    pMVar6 = pMVar9->klass;
    uVar2._0_1_ = (pMVar6->_2).rank;
    uVar2._1_1_ = (pMVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar2;
    if (uVar7 != 0) {
      piVar8 = &((pMVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)MJPJANJNDCI<BuildSettingsConfig>_TypeInfo) {
          pVVar4 = pMVar6->vtable + *piVar8;
          goto LAB_035542d8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(pMVar9,MJPJANJNDCI<BuildSettingsConfig>_TypeInfo,0);
LAB_035542d8:
    auVar11 = (*pVVar4->methodPtr)(pMVar9,pVVar4->method);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = auVar11._8_8_;
    auVar10 = auVar3 << 0x40;
    if (auVar11._0_8_ != 0) {
      iVar1 = *(int *)(auVar11._0_8_ + 0x58);
      if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(System_TimeSpan_TypeInfo);
      }
      SVar5 = System_TimeSpan__FromMilliseconds((double)iVar1,(MethodInfo *)0x0);
      return (System_TimeSpan_o)SVar5.fields._ticks;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar10._0_8_,auVar10._8_8_);
}

