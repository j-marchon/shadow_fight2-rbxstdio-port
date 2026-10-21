// TypeDefIndex 2027
// Namespace: 
// public class ProfitViewer : MonoBehaviour
// Fields:
//   private ResolutionImageAvatar _profitImage; // 0x20
//   private Mask _profitMask; // 0x28
//   private ResolutionImageAvatar _profitMaskImage; // 0x30
//   private CocosAnimation _profitShine; // 0x38
//   private IEnumerator EFFEJDCPDPB; // 0x40
//   private const float CFCBKBLLDAM = 0.05;
//   private const float MFNFAPPLPPH = 2;

// ===== private void DBEICCIBFDB()  [RVA 0x32A54E0]
// ProfitViewer$$DBEICCIBFDB @ RVA 0x32A54E0

void ProfitViewer__DBEICCIBFDB(ProfitViewer_o *__this,MethodInfo *method)

{
  ushort uVar1;
  CocosAnimation_o *pCVar2;
  PBAKFOBIHEG_o *pPVar3;
  undefined8 uVar4;
  VirtualInvokeData *pVVar5;
  System_Collections_IEnumerator_o *pSVar6;
  PBAKFOBIHEG_c *pPVar7;
  ulong uVar8;
  int32_t *piVar9;
  System_Collections_IEnumerator_o **ppSVar10;
  
  if ((DAT_045673e9 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&Method_ProfitViewer_DBEICCIBFDB__);
    DAT_045673e9 = 1;
  }
  pCVar2 = (__this->fields)._profitShine;
  if (pCVar2 != (CocosAnimation_o *)0x0) {
    CocosAnimation__SetFramesRange(pCVar2,0,-1,(MethodInfo *)0x0);
    pCVar2 = (__this->fields)._profitShine;
    if (pCVar2 != (CocosAnimation_o *)0x0) {
      CocosAnimation__SetFirstFrame(pCVar2,(MethodInfo *)0x0);
      pCVar2 = (__this->fields)._profitShine;
      if (pCVar2 != (CocosAnimation_o *)0x0) {
        (pCVar2->fields)._FEBBHCOAEMI_k__BackingField = 1;
        (pCVar2->fields)._NOAJIBNJKPE_k__BackingField = true;
        pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
        uVar4 = thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if (pPVar3 != (PBAKFOBIHEG_o *)0x0) {
          pPVar7 = pPVar3->klass;
          uVar1._0_1_ = (pPVar7->_2).rank;
          uVar1._1_1_ = (pPVar7->_2).minimumAlignment;
          uVar8 = (ulong)uVar1;
          if (uVar8 != 0) {
            piVar9 = &((pPVar7->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                  (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                pVVar5 = pPVar7->vtable + (*piVar9 + 2);
                goto LAB_033a55f8;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,2);
LAB_033a55f8:
          pSVar6 = (System_Collections_IEnumerator_o *)
                   (*pVVar5->methodPtr)(0x40000000,pPVar3,uVar4,pVVar5->method);
          ppSVar10 = &(__this->fields).EFFEJDCPDPB;
          *ppSVar10 = pSVar6;
          thunk_FUN_01c20e04(ppSVar10,pSVar6);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LFCEOEEBLMM(string CADMJIKLNCN)  [RVA 0x32A5628]
// ProfitViewer$$LFCEOEEBLMM @ RVA 0x32A5628

void ProfitViewer__LFCEOEEBLMM
               (ProfitViewer_o *__this,System_String_o *CADMJIKLNCN,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_Exception_o *__this_00;
  undefined8 uVar3;
  CocosAnimation_o *pCVar4;
  
  if ((DAT_045673ea & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045673ea = 1;
  }
  pCVar4 = (__this->fields)._profitShine;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pCVar4 = (__this->fields)._profitShine;
  if (pCVar4 != (CocosAnimation_o *)0x0) {
    bVar1 = CocosAnimation__Init(pCVar4,CADMJIKLNCN,0,(System_String_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar2 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_5967/*"Error: profit animation not found: "*/);
      pSVar2 = System_String__Concat(pSVar2,CADMJIKLNCN,(MethodInfo *)0x0);
      thunk_FUN_01bb9178(&System_Exception_TypeInfo);
      __this_00 = (System_Exception_o *)thunk_FUN_01bda818();
                    /* try { // try from 033a5704 to 034a574f has its CatchHandler @ 033a5704
                       catch() { ... } // from try @ 033a5704 with catch @ 033a5704
                       catch() { ... } // from try @ 033a5788 with catch @ 033a5704
                       catch() { ... } // from try @ 033a57c4 with catch @ 033a5704
                       catch() { ... } // from try @ 033a58b4 with catch @ 033a5704 */
      System_Exception___ctor(__this_00,pSVar2,(MethodInfo *)0x0);
      uVar3 = thunk_FUN_01bb9178(&Method_ProfitViewer_LFCEOEEBLMM__);
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(__this_00,uVar3);
    }
    pCVar4 = (__this->fields)._profitShine;
    if (pCVar4 != (CocosAnimation_o *)0x0) {
      (pCVar4->fields)._PPEGDOHGLJJ_k__BackingField = 0.05;
      (pCVar4->fields)._NOAJIBNJKPE_k__BackingField = false;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OnDestroy()  [RVA 0x32A572C]
// ProfitViewer$$OnDestroy @ RVA 0x32A572C

void ProfitViewer__OnDestroy(ProfitViewer_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_045673eb & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
                    /* try { // try from 033a5750 to 034a575f has its CatchHandler @ 033a5794 */
    DAT_045673eb = 1;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  ppSVar7 = &(__this->fields).EFFEJDCPDPB;
                    /* try { // try from 033a5760 to 034a5767 has its CatchHandler @ 033a5790 */
  pSVar8 = *ppSVar7;
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar4 = pPVar2->klass;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
                    /* try { // try from 033a5778 to 034a577f has its CatchHandler @ 033a5788 */
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
                    /* try { // try from 033a5784 to 034a5787 has its CatchHandler @ 033a578c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033a5778 with catch @ 033a5788
                       try { // try from 033a5788 to 034a57ab has its CatchHandler @ 033a5704 */
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033a5784 with catch @ 033a578c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033a5760 with catch @ 033a5790
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033a5750 with catch @ 033a5794
                        */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_033a57c4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
                    /* try { // try from 033a57ac to 034a57c3 has its CatchHandler @ 033a58ac */
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_033a57c4:
                    /* try { // try from 033a57c4 to 034a589b has its CatchHandler @ 033a5704 */
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}


// ===== public void Init(string OOKEKJMFKPE, string HCAAAAMDCNO, string HCCNJHGEBBI)  [RVA 0x32A57F0]
// ProfitViewer$$Init @ RVA 0x32A57F0

void ProfitViewer__Init(ProfitViewer_o *__this,System_String_o *OOKEKJMFKPE,
                       System_String_o *HCAAAAMDCNO,System_String_o *HCCNJHGEBBI,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImageAvatar_o *pNVar1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_045673ec & 1) == 0) {
    FUN_01bab630(&StringLiteral_19589/*"mask"*/);
    DAT_045673ec = 1;
  }
  pNVar1 = (__this->fields)._profitImage;
  if (pNVar1 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
    Nekki_SF2_GUI_ResolutionImageAvatar__UseHighModeOnly(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._profitImage;
    if (pNVar1 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
      *(System_String_o **)&(pNVar1->fields).super.super.m_PixelsPerUnitMultiplier = OOKEKJMFKPE;
      thunk_FUN_01c20e04(&(pNVar1->fields).super.super.m_PixelsPerUnitMultiplier,OOKEKJMFKPE);
      pNVar1 = (__this->fields)._profitImage;
      if (pNVar1 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                  ((Nekki_SF2_GUI_ResolutionImage_o *)pNVar1,HCAAAAMDCNO,(MethodInfo *)0x0);
        pNVar1 = (__this->fields)._profitImage;
        if (pNVar1 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
          (*(pNVar1->klass->vtable)._45_SetNativeSize.methodPtr)
                    (pNVar1,(pNVar1->klass->vtable)._45_SetNativeSize.method);
          pNVar1 = (__this->fields)._profitMaskImage;
          if (pNVar1 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
            Nekki_SF2_GUI_ResolutionImageAvatar__UseHighModeOnly(pNVar1,(MethodInfo *)0x0);
            pNVar1 = (__this->fields)._profitMaskImage;
            if (pNVar1 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
                    /* try { // try from 033a589c to 034a58ab has its CatchHandler @ 033a58ac */
                    /* catch() { ... } // from try @ 033a57ac with catch @ 033a58ac
                       catch() { ... } // from try @ 033a589c with catch @ 033a58ac */
              *(System_String_o **)&(pNVar1->fields).super.super.m_PixelsPerUnitMultiplier =
                   OOKEKJMFKPE;
                    /* try { // try from 033a58b0 to 034a58b3 has its CatchHandler @ 033a58bc */
              thunk_FUN_01c20e04(&(pNVar1->fields).super.super.m_PixelsPerUnitMultiplier,OOKEKJMFKPE
                                );
                    /* try { // try from 033a58b4 to 034a58bf has its CatchHandler @ 033a5704 */
              pNVar1 = (__this->fields)._profitMaskImage;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033a58b0 with catch @ 033a58bc
                        */
              pSVar2 = System_String__Concat(HCAAAAMDCNO,StringLiteral_19589/*"mask"*/,(MethodInfo *)0x0);
              if (pNVar1 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
                Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                          ((Nekki_SF2_GUI_ResolutionImage_o *)pNVar1,pSVar2,(MethodInfo *)0x0);
                pNVar1 = (__this->fields)._profitMaskImage;
                if (pNVar1 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
                  (*(pNVar1->klass->vtable)._45_SetNativeSize.methodPtr)
                            (pNVar1,(pNVar1->klass->vtable)._45_SetNativeSize.method);
                  pNVar1 = (__this->fields)._profitMaskImage;
                  if (pNVar1 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
                    (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                              (0,0,0,0x3dcccccd,pNVar1,(pNVar1->klass->vtable)._23_set_color.method)
                    ;
                    method_01 = (MethodInfo *)0x0;
                    pSVar2 = System_String__Concat(OOKEKJMFKPE,HCCNJHGEBBI,(MethodInfo *)0x0);
                    ProfitViewer__LFCEOEEBLMM(__this,pSVar2,method_01);
                    ProfitViewer__DBEICCIBFDB(__this,method_00);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x32A5958]
// ProfitViewer$$.ctor @ RVA 0x32A5958

void ProfitViewer___ctor(ProfitViewer_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

