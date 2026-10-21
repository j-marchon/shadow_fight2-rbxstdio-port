// TypeDefIndex 474
// Namespace: Nekki.SF2.GUI.Common
// public class LoaderScreenSelector : MonoBehaviour
// Fields:
//   private GLLJKGHFGJH _loaderScreenType; // 0x20
//   private ResolutionImage _fullSprite; // 0x28
//   private ResolutionImage _leftSprite; // 0x30
//   private ResolutionImage _rightSprite; // 0x38

// ===== private void OnEnable()  [RVA 0x3580664]
// Nekki.SF2.GUI.Common.LoaderScreenSelector$$OnEnable @ RVA 0x3580664

void Nekki_SF2_GUI_Common_LoaderScreenSelector__OnEnable
               (Nekki_SF2_GUI_Common_LoaderScreenSelector_o *__this,MethodInfo *method)

{
  uint uVar1;
  ushort uVar2;
  bool value;
  bool bVar3;
  CABBAAHEBCC_o *pCVar4;
  VirtualInvokeData *pVVar5;
  UnityEngine_GameObject_o *pUVar6;
  MethodInfo *extraout_x1;
  undefined8 uVar7;
  CABBAAHEBCC_c *pCVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int32_t *piVar11;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar12;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar13;
  undefined1 auVar14 [16];
  long lStack_28;
  
  if ((DAT_04568ccb & 1) == 0) {
    FUN_01bab630(&CABBAAHEBCC_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568ccb = 1;
    method = extraout_x1;
  }
  lStack_28 = 0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pCVar4 = NLPJLHOEAOE__BPGBMNDEHEA((MethodInfo *)0x0);
  if (pCVar4 == (CABBAAHEBCC_o *)0x0) goto LAB_036808f8;
  pCVar8 = pCVar4->klass;
  uVar1 = (__this->fields)._loaderScreenType;
  uVar2._0_1_ = (pCVar8->_2).rank;
  uVar2._1_1_ = (pCVar8->_2).minimumAlignment;
  uVar10 = (ulong)uVar2;
  if (uVar10 != 0) {
    piVar11 = &((pCVar8->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
          (Il2CppClass *)CABBAAHEBCC_TypeInfo) {
        pVVar5 = pCVar8->vtable + *piVar11;
        goto LAB_03680734;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pCVar4,CABBAAHEBCC_TypeInfo,0);
LAB_03680734:
  auVar14 = (*pVVar5->methodPtr)(pCVar4,(ulong)uVar1,&lStack_28,pVVar5->method);
  if ((auVar14._0_8_ & 1) == 0) {
    Nekki_SF2_GUI_Common_LoaderScreenSelector__LFGMJGFHILO(__this,auVar14._8_8_);
    return;
  }
  if (lStack_28 == 0) goto LAB_036808f8;
  value = PCOEHCPGBBG__EDHHJAMCOJH(*(System_String_o **)(lStack_28 + 0x18),(MethodInfo *)0x0);
  if (value) {
LAB_036807dc:
    if ((lStack_28 == 0) ||
       (pNVar12 = (__this->fields)._rightSprite, pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0))
    goto LAB_036808f8;
    uVar7 = *(undefined8 *)(lStack_28 + 0x10);
    pNVar13 = (__this->fields)._leftSprite;
    (pNVar12->fields).super.m_PixelsPerUnitMultiplier = (float)(int)uVar7;
    (pNVar12->fields).super.m_CachedReferencePixelsPerUnit = (float)(int)((ulong)uVar7 >> 0x20);
    thunk_FUN_01c20e04(&(pNVar12->fields).super.m_PixelsPerUnitMultiplier,uVar7);
    if (pNVar13 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_036808f8;
    (pNVar13->fields).super.m_PixelsPerUnitMultiplier = (float)(int)uVar7;
    (pNVar13->fields).super.m_CachedReferencePixelsPerUnit = (float)(int)((ulong)uVar7 >> 0x20);
    thunk_FUN_01c20e04(&(pNVar13->fields).super.m_PixelsPerUnitMultiplier,uVar7);
    if ((((lStack_28 == 0) ||
         (pNVar12 = (__this->fields)._leftSprite, pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0)
         ) || (Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                         (pNVar12,*(System_String_o **)(lStack_28 + 0x20),(MethodInfo *)0x0),
              lStack_28 == 0)) ||
       (pNVar12 = (__this->fields)._rightSprite, pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0))
    goto LAB_036808f8;
    puVar9 = (undefined8 *)(lStack_28 + 0x28);
  }
  else {
    pNVar12 = (__this->fields)._fullSprite;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                      );
    if (!bVar3) goto LAB_036807dc;
    if ((lStack_28 == 0) ||
       (pNVar12 = (__this->fields)._fullSprite, pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0))
    goto LAB_036808f8;
    uVar7 = *(undefined8 *)(lStack_28 + 0x10);
    (pNVar12->fields).super.m_PixelsPerUnitMultiplier = (float)(int)uVar7;
    (pNVar12->fields).super.m_CachedReferencePixelsPerUnit = (float)(int)((ulong)uVar7 >> 0x20);
    thunk_FUN_01c20e04(&(pNVar12->fields).super.m_PixelsPerUnitMultiplier);
    if ((lStack_28 == 0) ||
       (pNVar12 = (__this->fields)._fullSprite, pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0))
    goto LAB_036808f8;
    puVar9 = (undefined8 *)(lStack_28 + 0x18);
  }
  Nekki_SF2_GUI_ResolutionImage__set_SpriteName
            (pNVar12,(System_String_o *)*puVar9,(MethodInfo *)0x0);
  pNVar12 = (__this->fields)._fullSprite;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pNVar12 = (__this->fields)._fullSprite;
    if ((pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar6 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar12,(MethodInfo *)0x0),
       pUVar6 == (UnityEngine_GameObject_o *)0x0)) goto LAB_036808f8;
    UnityEngine_GameObject__SetActive(pUVar6,!value,(MethodInfo *)0x0);
  }
  pNVar12 = (__this->fields)._leftSprite;
  if ((pNVar12 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar6 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar12,(MethodInfo *)0x0),
     pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar6,value,(MethodInfo *)0x0);
    pNVar12 = (__this->fields)._rightSprite;
    if ((pNVar12 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar6 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar12,(MethodInfo *)0x0),
       pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar6,value,(MethodInfo *)0x0);
      return;
    }
  }
LAB_036808f8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_LoaderScreenType(GLLJKGHFGJH CJNHFNHJHPE)  [RVA 0x35808FC]
// Nekki.SF2.GUI.Common.LoaderScreenSelector$$set_LoaderScreenType @ RVA 0x35808FC

void Nekki_SF2_GUI_Common_LoaderScreenSelector__set_LoaderScreenType
               (Nekki_SF2_GUI_Common_LoaderScreenSelector_o *__this,int32_t CJNHFNHJHPE,
               MethodInfo *method)

{
                    /* try { // try from 036808fc to 037808ff has its CatchHandler @ 03680924 */
                    /* try { // try from 03680900 to 0378092b has its CatchHandler @ 036806dc */
  if ((__this->fields)._loaderScreenType == CJNHFNHJHPE) {
    return;
  }
  (__this->fields)._loaderScreenType = CJNHFNHJHPE;
  Nekki_SF2_GUI_Common_LoaderScreenSelector__LPNCEHPFOAF
            (__this,(MethodInfo *)(ulong)(uint)CJNHFNHJHPE);
  return;
}


// ===== private void LPNCEHPFOAF()  [RVA 0x3580668]
// Nekki.SF2.GUI.Common.LoaderScreenSelector$$LPNCEHPFOAF @ RVA 0x3580668

void Nekki_SF2_GUI_Common_LoaderScreenSelector__LPNCEHPFOAF
               (Nekki_SF2_GUI_Common_LoaderScreenSelector_o *__this,MethodInfo *method)

{
  uint uVar1;
  ushort uVar2;
  bool value;
  bool bVar3;
  CABBAAHEBCC_o *pCVar4;
  VirtualInvokeData *pVVar5;
  UnityEngine_GameObject_o *pUVar6;
  MethodInfo *extraout_x1;
  undefined8 uVar7;
  CABBAAHEBCC_c *pCVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int32_t *piVar11;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar12;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar13;
  undefined1 auVar14 [16];
  long local_28;
  
  if ((DAT_04568ccb & 1) == 0) {
    FUN_01bab630(&CABBAAHEBCC_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568ccb = 1;
    method = extraout_x1;
  }
  local_28 = 0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pCVar4 = NLPJLHOEAOE__BPGBMNDEHEA((MethodInfo *)0x0);
  if (pCVar4 == (CABBAAHEBCC_o *)0x0) goto LAB_036808f8;
                    /* try { // try from 036806dc to 037807eb has its CatchHandler @ 036806dc
                       catch() { ... } // from try @ 036806dc with catch @ 036806dc
                       catch() { ... } // from try @ 036808a0 with catch @ 036806dc
                       catch() { ... } // from try @ 036808d8 with catch @ 036806dc
                       catch() { ... } // from try @ 03680900 with catch @ 036806dc
                       catch() { ... } // from try @ 03680934 with catch @ 036806dc */
  pCVar8 = pCVar4->klass;
  uVar1 = (__this->fields)._loaderScreenType;
  uVar2._0_1_ = (pCVar8->_2).rank;
  uVar2._1_1_ = (pCVar8->_2).minimumAlignment;
  uVar10 = (ulong)uVar2;
  if (uVar10 != 0) {
    piVar11 = &((pCVar8->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
          (Il2CppClass *)CABBAAHEBCC_TypeInfo) {
        pVVar5 = pCVar8->vtable + *piVar11;
        goto LAB_03680734;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pCVar4,CABBAAHEBCC_TypeInfo,0);
LAB_03680734:
  auVar14 = (*pVVar5->methodPtr)(pCVar4,(ulong)uVar1,&local_28,pVVar5->method);
  if ((auVar14._0_8_ & 1) == 0) {
    Nekki_SF2_GUI_Common_LoaderScreenSelector__LFGMJGFHILO(__this,auVar14._8_8_);
    return;
  }
  if (local_28 == 0) goto LAB_036808f8;
  value = PCOEHCPGBBG__EDHHJAMCOJH(*(System_String_o **)(local_28 + 0x18),(MethodInfo *)0x0);
  if (value) {
LAB_036807dc:
    if ((local_28 == 0) ||
       (pNVar12 = (__this->fields)._rightSprite, pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0))
    goto LAB_036808f8;
                    /* try { // try from 036807ec to 037807f3 has its CatchHandler @ 036808ec */
    uVar7 = *(undefined8 *)(local_28 + 0x10);
    pNVar13 = (__this->fields)._leftSprite;
    (pNVar12->fields).super.m_PixelsPerUnitMultiplier = (float)(int)uVar7;
    (pNVar12->fields).super.m_CachedReferencePixelsPerUnit = (float)(int)((ulong)uVar7 >> 0x20);
                    /* try { // try from 03680800 to 0378080b has its CatchHandler @ 036808e8 */
    thunk_FUN_01c20e04(&(pNVar12->fields).super.m_PixelsPerUnitMultiplier,uVar7);
    if (pNVar13 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_036808f8;
    (pNVar13->fields).super.m_PixelsPerUnitMultiplier = (float)(int)uVar7;
    (pNVar13->fields).super.m_CachedReferencePixelsPerUnit = (float)(int)((ulong)uVar7 >> 0x20);
    thunk_FUN_01c20e04(&(pNVar13->fields).super.m_PixelsPerUnitMultiplier,uVar7);
    if ((((local_28 == 0) ||
         (pNVar12 = (__this->fields)._leftSprite, pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0)
         ) || (Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                         (pNVar12,*(System_String_o **)(local_28 + 0x20),(MethodInfo *)0x0),
              local_28 == 0)) ||
       (pNVar12 = (__this->fields)._rightSprite, pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0))
    goto LAB_036808f8;
    puVar9 = (undefined8 *)(local_28 + 0x28);
  }
  else {
    pNVar12 = (__this->fields)._fullSprite;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                      );
    if (!bVar3) goto LAB_036807dc;
    if ((local_28 == 0) ||
       (pNVar12 = (__this->fields)._fullSprite, pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0))
    goto LAB_036808f8;
    uVar7 = *(undefined8 *)(local_28 + 0x10);
    (pNVar12->fields).super.m_PixelsPerUnitMultiplier = (float)(int)uVar7;
    (pNVar12->fields).super.m_CachedReferencePixelsPerUnit = (float)(int)((ulong)uVar7 >> 0x20);
    thunk_FUN_01c20e04(&(pNVar12->fields).super.m_PixelsPerUnitMultiplier);
    if ((local_28 == 0) ||
       (pNVar12 = (__this->fields)._fullSprite, pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0))
    goto LAB_036808f8;
    puVar9 = (undefined8 *)(local_28 + 0x18);
  }
  Nekki_SF2_GUI_ResolutionImage__set_SpriteName
            (pNVar12,(System_String_o *)*puVar9,(MethodInfo *)0x0);
  pNVar12 = (__this->fields)._fullSprite;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
                    /* try { // try from 03680884 to 0378089f has its CatchHandler @ 036808dc */
    pNVar12 = (__this->fields)._fullSprite;
    if ((pNVar12 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar6 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar12,(MethodInfo *)0x0),
       pUVar6 == (UnityEngine_GameObject_o *)0x0)) goto LAB_036808f8;
                    /* try { // try from 036808a0 to 037808cb has its CatchHandler @ 036806dc */
    UnityEngine_GameObject__SetActive(pUVar6,!value,(MethodInfo *)0x0);
  }
  pNVar12 = (__this->fields)._leftSprite;
  if ((pNVar12 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar6 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar12,(MethodInfo *)0x0),
     pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar6,value,(MethodInfo *)0x0);
    pNVar12 = (__this->fields)._rightSprite;
                    /* try { // try from 036808cc to 037808cf has its CatchHandler @ 036808e0 */
                    /* try { // try from 036808d0 to 037808d7 has its CatchHandler @ 036808e4 */
                    /* try { // try from 036808d8 to 037808fb has its CatchHandler @ 036806dc */
    if ((pNVar12 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar6 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar12,(MethodInfo *)0x0),
       pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03680884 with catch @ 036808dc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036808cc with catch @ 036808e0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036808d0 with catch @ 036808e4
                        */
      UnityEngine_GameObject__SetActive(pUVar6,value,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03680800 with catch @ 036808e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036807ec with catch @ 036808ec
                        */
      return;
    }
  }
LAB_036808f8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public GLLJKGHFGJH get_LoaderScreenType()  [RVA 0x35809DC]
// Nekki.SF2.GUI.Common.LoaderScreenSelector$$get_LoaderScreenType @ RVA 0x35809DC

int32_t Nekki_SF2_GUI_Common_LoaderScreenSelector__get_LoaderScreenType
                  (Nekki_SF2_GUI_Common_LoaderScreenSelector_o *__this,MethodInfo *method)

{
  return (__this->fields)._loaderScreenType;
}


// ===== private void LFGMJGFHILO()  [RVA 0x3580914]
// Nekki.SF2.GUI.Common.LoaderScreenSelector$$LFGMJGFHILO @ RVA 0x3580914

void Nekki_SF2_GUI_Common_LoaderScreenSelector__LFGMJGFHILO
               (Nekki_SF2_GUI_Common_LoaderScreenSelector_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  
                    /* catch() { ... } // from try @ 036808fc with catch @ 03680924 */
                    /* try { // try from 0368092c to 03780933 has its CatchHandler @ 03680948 */
  if ((DAT_04568ccc & 1) == 0) {
                    /* try { // try from 03680934 to 0378093f has its CatchHandler @ 036806dc */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 03680940 to 03780947 has its CatchHandler @ 03680948 */
    DAT_04568ccc = 1;
    method = extraout_x1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0368092c with catch @ 03680948
                       catch(type#2 @ 00000000) { ... } // from try @ 03680940 with catch @ 03680948
                        */
  pNVar3 = (__this->fields)._fullSprite;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._fullSprite;
    if ((pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_036809d8;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar3 = (__this->fields)._leftSprite;
  if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._rightSprite;
    if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      return;
    }
  }
LAB_036809d8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OnDisable()  [RVA 0x35809E4]
// Nekki.SF2.GUI.Common.LoaderScreenSelector$$OnDisable @ RVA 0x35809E4

void Nekki_SF2_GUI_Common_LoaderScreenSelector__OnDisable
               (Nekki_SF2_GUI_Common_LoaderScreenSelector_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  
  if ((DAT_04568ccc & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568ccc = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._fullSprite;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._fullSprite;
    if ((pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_036809d8;
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
  }
  pNVar3 = (__this->fields)._leftSprite;
  if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._rightSprite;
    if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      return;
    }
  }
LAB_036809d8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void Awake()  [RVA 0x35809E8]
// Nekki.SF2.GUI.Common.LoaderScreenSelector$$Awake @ RVA 0x35809E8

void Nekki_SF2_GUI_Common_LoaderScreenSelector__Awake
               (Nekki_SF2_GUI_Common_LoaderScreenSelector_o *__this,MethodInfo *method)

{
  return;
}


// ===== public void .ctor()  [RVA 0x35809EC]
// Nekki.SF2.GUI.Common.LoaderScreenSelector$$.ctor @ RVA 0x35809EC

void Nekki_SF2_GUI_Common_LoaderScreenSelector___ctor
               (Nekki_SF2_GUI_Common_LoaderScreenSelector_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

