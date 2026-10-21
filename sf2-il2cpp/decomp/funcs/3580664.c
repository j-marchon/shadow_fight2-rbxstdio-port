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

