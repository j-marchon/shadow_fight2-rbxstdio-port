// TypeDefIndex 2744
// Namespace: 
// [CompilerGenerated]
// private sealed class Fight.OPHOGFBEJAM : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public Model.EAOIGPODIAI model; // 0x20
//   public Fight <>4__this; // 0x28
//   private WaitForEndOfFrame <delay>5__2; // 0x30
//   private float <restoreTime>5__3; // 0x38
//   private float <timer>5__4; // 0x3C

// ===== public void .ctor(int <>1__state)  [RVA 0x33F4AA8]
// Fight.OPHOGFBEJAM$$.ctor @ RVA 0x33F4AA8

void Fight_OPHOGFBEJAM___ctor
               (Fight_OPHOGFBEJAM_o *__this,int32_t __1__state,MethodInfo *method)

{
                    /* try { // try from 034f4ab4 to 035f4ab7 has its CatchHandler @ 034f4bdc */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x33F4AD0]
// Fight.OPHOGFBEJAM$$System.IDisposable.Dispose @ RVA 0x33F4AD0

void Fight_OPHOGFBEJAM__System_IDisposable_Dispose
               (Fight_OPHOGFBEJAM_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x33F4AD4]
// Fight.OPHOGFBEJAM$$MoveNext @ RVA 0x33F4AD4

/* WARNING: Type propagation algorithm not settling */

bool Fight_OPHOGFBEJAM__MoveNext(Fight_OPHOGFBEJAM_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  bool bVar5;
  UnityEngine_WaitForEndOfFrame_o *__this_00;
  PBAKFOBIHEG_o *pPVar6;
  Il2CppMethodPointer *ppIVar7;
  MethodInfo *extraout_x1;
  Model_EAOIGPODIAI_o *pOVar8;
  Model_o *pOVar9;
  PBAKFOBIHEG_c *pPVar10;
  GameUtils_StaticFields *pMVar11;
  Model_c *pOVar12;
  ulong uVar13;
  int32_t *piVar14;
  Il2CppObject **ppIVar15;
  Fight_o *pFVar16;
  UnityEngine_WaitForEndOfFrame_o **ppUVar17;
  System_Collections_IEnumerator_o *pSVar18;
  float fVar19;
  float fVar20;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_70;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_50;
  
                    /* try { // try from 034f4ad4 to 035f4adb has its CatchHandler @ 034f4bf8 */
                    /* try { // try from 034f4adc to 035f4af3 has its CatchHandler @ 034f4064 */
  if ((DAT_04567f8e & 1) == 0) {
                    /* try { // try from 034f4af4 to 035f4b0b has its CatchHandler @ 034f4be8 */
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&OIGAJAKPPEO_TypeInfo);
                    /* try { // try from 034f4b0c to 035f4bbf has its CatchHandler @ 034f4064 */
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    DAT_04567f8e = 1;
    method = extraout_x1;
  }
  iVar2 = (__this->fields).__1__state;
  pFVar16 = (__this->fields).__4__this;
  if (iVar2 == 2) {
    fVar20 = (__this->fields)._timer_5__4;
                    /* try { // try from 034f4bc0 to 035f4bcf has its CatchHandler @ 034f4be8 */
    (__this->fields).__1__state = -1;
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 0) {
        return false;
      }
      (__this->fields).__1__state = -1;
      __this_00 = (UnityEngine_WaitForEndOfFrame_o *)
                  thunk_FUN_01bda818(UnityEngine_WaitForEndOfFrame_TypeInfo,method);
      UnityEngine_WaitForEndOfFrame___ctor(__this_00,(MethodInfo *)0x0);
      ppUVar17 = &(__this->fields)._delay_5__2;
      *ppUVar17 = __this_00;
      thunk_FUN_01c20e04(ppUVar17,__this_00);
      pOVar8 = (__this->fields).model;
      if (pOVar8 != (Model_EAOIGPODIAI_o *)0x0) {
        pOVar9 = (pOVar8->fields).HEMGHNOOJPI;
        if (pOVar9 != (Model_o *)0x0) {
          pOVar12 = pOVar9->klass;
          bVar3 = (OIGAJAKPPEO_TypeInfo->_2).naturalAligment;
          if (bVar3 <= (pOVar12->_2).naturalAligment) {
            bVar5 = (pOVar12->_2).typeHierarchy[(ulong)bVar3 - 1] !=
                    (Il2CppClass *)OIGAJAKPPEO_TypeInfo;
            goto LAB_034f4cf4;
          }
        }
        bVar5 = true;
LAB_034f4cf4:
        if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pMVar11 = GameUtils_TypeInfo->static_fields;
        if (bVar5) {
          local_70.fakeValueActive = (pMVar11->EKJJMBGGJAC).fields.fakeValueActive;
          local_70.inited = (pMVar11->EKJJMBGGJAC).fields.inited;
          local_70._18_2_ = *(undefined2 *)&(pMVar11->EKJJMBGGJAC).fields.field_0x12;
          local_70.hiddenValueOldByte4.fields =
               (pMVar11->EKJJMBGGJAC).fields.hiddenValueOldByte4.fields;
          local_70.fakeValue = (pMVar11->EKJJMBGGJAC).fields.fakeValue;
          local_70.currentCryptoKey = (pMVar11->EKJJMBGGJAC).fields.currentCryptoKey;
          local_70.hiddenValue = (pMVar11->EKJJMBGGJAC).fields.hiddenValue;
        }
        else {
          local_70.fakeValueActive = (pMVar11->DLFHGFGPKDE).fields.fakeValueActive;
          local_70.inited = (pMVar11->DLFHGFGPKDE).fields.inited;
          local_70._18_2_ = *(undefined2 *)&(pMVar11->DLFHGFGPKDE).fields.field_0x12;
          local_70.hiddenValueOldByte4.fields =
               (pMVar11->DLFHGFGPKDE).fields.hiddenValueOldByte4.fields;
          local_70.fakeValue = (pMVar11->DLFHGFGPKDE).fields.fakeValue;
          local_70.currentCryptoKey = (pMVar11->DLFHGFGPKDE).fields.currentCryptoKey;
          local_70.hiddenValue = (pMVar11->DLFHGFGPKDE).fields.hiddenValue;
        }
        local_50._0_8_ = local_70._0_8_;
        local_50._8_8_ = local_70._8_8_;
        local_50._16_4_ = local_70._16_4_;
        fVar20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                           ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_70,
                            (MethodInfo *)0x0);
        ppIVar15 = &(__this->fields).__2__current;
        *ppIVar15 = (Il2CppObject *)(__this->fields)._delay_5__2;
        (__this->fields)._restoreTime_5__3 = fVar20;
        thunk_FUN_01c20e04(ppIVar15);
        (__this->fields).__1__state = 1;
        return true;
      }
      goto LAB_034f4d84;
    }
    (__this->fields)._timer_5__4 = 0.0;
                    /* try { // try from 034f4bd0 to 035f4bd3 has its CatchHandler @ 034f4064 */
    (__this->fields).__1__state = -1;
                    /* try { // try from 034f4bd4 to 035f4bef has its CatchHandler @ 034f4bf8 */
    fVar20 = 0.0;
  }
                    /* catch() { ... } // from try @ 034f4ab4 with catch @ 034f4bdc */
  if (fVar20 < (__this->fields)._restoreTime_5__3) {
    if (pFVar16 != (Fight_o *)0x0) {
                    /* catch() { ... } // from try @ 034f4af4 with catch @ 034f4be8
                       catch() { ... } // from try @ 034f4bc0 with catch @ 034f4be8 */
                    /* try { // try from 034f4bf0 to 035f4bfb has its CatchHandler @ 034f4064 */
      if (((pFVar16->fields).MDJMIPGAJLL == false) && ((pFVar16->fields).AHNAIKFDANF == false)) {
                    /* catch() { ... } // from try @ 034f4a10 with catch @ 034f4bf8
                       catch() { ... } // from try @ 034f4a70 with catch @ 034f4bf8
                       catch() { ... } // from try @ 034f4ad4 with catch @ 034f4bf8
                       catch() { ... } // from try @ 034f4bd4 with catch @ 034f4bf8 */
        fVar19 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
        (__this->fields)._timer_5__4 = fVar20 + fVar19;
      }
      ppIVar15 = &(__this->fields).__2__current;
      *ppIVar15 = (Il2CppObject *)(__this->fields)._delay_5__2;
      thunk_FUN_01c20e04(ppIVar15);
      (__this->fields).__1__state = 2;
      return true;
    }
  }
  else {
    pOVar8 = (__this->fields).model;
    if ((pOVar8 != (Model_EAOIGPODIAI_o *)0x0) &&
       (pOVar9 = (pOVar8->fields).HEMGHNOOJPI, pOVar9 != (Model_o *)0x0)) {
      Model__PLPBFMKLPGI(pOVar9,true,(MethodInfo *)0x0);
    }
    pPVar6 = CoroutineManager__get_Current((MethodInfo *)0x0);
    if ((pFVar16 != (Fight_o *)0x0) && (pPVar6 != (PBAKFOBIHEG_o *)0x0)) {
      pPVar10 = pPVar6->klass;
      pSVar18 = (pFVar16->fields).AFIFGCCDGNF;
      ppSVar1 = &(pFVar16->fields).AFIFGCCDGNF;
      uVar4._0_1_ = (pPVar10->_2).rank;
      uVar4._1_1_ = (pPVar10->_2).minimumAlignment;
      uVar13 = (ulong)uVar4;
      if (uVar13 != 0) {
        piVar14 = &((pPVar10->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            ppIVar7 = &pPVar10->vtable[*piVar14 + 1].methodPtr;
            goto LAB_034f4cb8;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      ppIVar7 = (Il2CppMethodPointer *)FUN_01b81914(pPVar6,PBAKFOBIHEG_TypeInfo,1);
LAB_034f4cb8:
      (**ppIVar7)(pPVar6,pSVar18,(MethodInfo *)ppIVar7[1]);
      *ppSVar1 = (System_Collections_IEnumerator_o *)0x0;
      thunk_FUN_01c20e04(ppSVar1,0);
      return false;
    }
  }
LAB_034f4d84:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x33F4D88]
// Fight.OPHOGFBEJAM$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x33F4D88

Il2CppObject *
Fight_OPHOGFBEJAM__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Fight_OPHOGFBEJAM_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x33F4D90]
// Fight.OPHOGFBEJAM$$System.Collections.IEnumerator.Reset @ RVA 0x33F4D90

void Fight_OPHOGFBEJAM__System_Collections_IEnumerator_Reset
               (Fight_OPHOGFBEJAM_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&Method_FCJBEKHDLAF_OPHOGFBEJAM_System_Collections_IEnumerator_Reset__)
  ;
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x33F4DC8]
// Fight.OPHOGFBEJAM$$System.Collections.IEnumerator.get_Current @ RVA 0x33F4DC8

Il2CppObject *
Fight_OPHOGFBEJAM__System_Collections_IEnumerator_get_Current
          (Fight_OPHOGFBEJAM_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

