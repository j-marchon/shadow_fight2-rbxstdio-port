// TypeDefIndex 542
// Namespace: Nekki.SF2.GUI.Profile
// public class SubItem : SFButton
// Fields:
//   protected ResolutionImage _icon; // 0x168
//   protected ResolutionImage _lockPicture; // 0x170
//   protected ResolutionImage _inactivePicture; // 0x178
//   protected ResolutionImage _selectedPicture; // 0x180
//   protected ResolutionImage _selectWhiteSquare; // 0x188
//   protected ResolutionImage _backPicture; // 0x190
//   protected ProfileCell PEJMMOONAHC; // 0x198
//   protected bool GMEDAKHGMME; // 0x1A0
//   protected bool NBGPKFHLCOG; // 0x1A1
//   protected bool CGLFEDLBCCP; // 0x1A2
//   protected int JDLICGHNBFC; // 0x1A4
//   protected int FBJAKHPAFNO; // 0x1A8
//   protected bool FOIKKEEIOBP; // 0x1AC
//   protected float GJFHNJFGBKE; // 0x1B0
//   protected float NAPGLBIIEJP; // 0x1B4
//   protected string CNMMJHJNNAJ; // 0x1B8
//   protected string COCAGDPOPLL; // 0x1C0
//   private float PJPFLFJCDCB; // 0x1C8
//   private float LNMOOOJEGMF; // 0x1CC
//   private static bool EEDBEBPEPJL; // 0x0
//   private bool HNDODCMPHHK; // 0x1D0
//   private float EEPECIAODNN; // 0x1D4
//   private float BBGEFCIPNAM; // 0x1D8

// ===== private static void .cctor()  [RVA 0x359BA54]
// Nekki.SF2.GUI.Profile.SubItem$$.cctor @ RVA 0x359BA54

void Nekki_SF2_GUI_Profile_SubItem___cctor(MethodInfo *method)

{
  if ((DAT_04568dc9 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Profile_SubItem_TypeInfo);
    DAT_04568dc9 = 1;
  }
  Nekki_SF2_GUI_Profile_SubItem_TypeInfo->static_fields->EEDBEBPEPJL = true;
  return;
}


// ===== public virtual void SetActive(bool POFDNNBNINH)  [RVA 0x359BAA0]
// Nekki.SF2.GUI.Profile.SubItem$$SetActive @ RVA 0x359BAA0

void Nekki_SF2_GUI_Profile_SubItem__SetActive
               (Nekki_SF2_GUI_Profile_SubItem_o *__this,bool POFDNNBNINH,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_SubItem_c *pNVar1;
  
  pNVar1 = __this->klass;
  (__this->fields).NBGPKFHLCOG = POFDNNBNINH;
                    /* WARNING: Could not recover jumptable at 0x0369bab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pNVar1->vtable)._64_MEPNOKOKPIA.methodPtr)(__this,(pNVar1->vtable)._64_MEPNOKOKPIA.method);
  return;
}


// ===== protected virtual void GCCFOKIIBBB(PressType ACCIHBHMFPN)  [RVA 0x359BAB8]
// Nekki.SF2.GUI.Profile.SubItem$$GCCFOKIIBBB @ RVA 0x359BAB8

void Nekki_SF2_GUI_Profile_SubItem__GCCFOKIIBBB
               (Nekki_SF2_GUI_Profile_SubItem_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0x0369bac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._64_MEPNOKOKPIA.methodPtr)
            (__this,(__this->klass->vtable)._64_MEPNOKOKPIA.method);
  return;
}


// ===== public void SetSelectFlashing(bool IHCCJAHMKPH)  [RVA 0x359BAC8]
// Nekki.SF2.GUI.Profile.SubItem$$SetSelectFlashing @ RVA 0x359BAC8

void Nekki_SF2_GUI_Profile_SubItem__SetSelectFlashing
               (Nekki_SF2_GUI_Profile_SubItem_o *__this,bool IHCCJAHMKPH,MethodInfo *method)

{
  (__this->fields).HNDODCMPHHK = IHCCJAHMKPH;
  return;
}


// ===== public void SetSelectFlashingMaxOpacity(int ILMPNBJGEDH)  [RVA 0x359BAD4]
// Nekki.SF2.GUI.Profile.SubItem$$SetSelectFlashingMaxOpacity @ RVA 0x359BAD4

void Nekki_SF2_GUI_Profile_SubItem__SetSelectFlashingMaxOpacity
               (Nekki_SF2_GUI_Profile_SubItem_o *__this,int32_t ILMPNBJGEDH,MethodInfo *method)

{
  uint uVar1;
  Nekki_SF2_GUI_ResolutionImage_o *x;
  
  if ((DAT_04568dca & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568dca = 1;
  }
  x = (__this->fields)._selectWhiteSquare;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Object__op_Inequality
            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  uVar1 = ILMPNBJGEDH & (ILMPNBJGEDH >> 0x1f ^ 0xffffffffU);
  if (0 < (int)uVar1) {
    uVar1 = 1;
  }
  (__this->fields).BBGEFCIPNAM = (float)(int)uVar1;
  return;
}


// ===== public void SetSelectFlashingMinOpacity(float CBEFHLDCMFF)  [RVA 0x359BB58]
// Nekki.SF2.GUI.Profile.SubItem$$SetSelectFlashingMinOpacity @ RVA 0x359BB58

void Nekki_SF2_GUI_Profile_SubItem__SetSelectFlashingMinOpacity
               (Nekki_SF2_GUI_Profile_SubItem_o *__this,float CBEFHLDCMFF,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_ResolutionImage_o *x;
  float fVar1;
  
  if ((DAT_04568dcb & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568dcb = 1;
    method = extraout_x1;
  }
  x = (__this->fields)._selectWhiteSquare;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  UnityEngine_Object__op_Inequality
            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar1 = 0.0;
  (__this->fields).EEPECIAODNN = CBEFHLDCMFF;
  if ((CBEFHLDCMFF < 0.0) || (fVar1 = 1.0, 1.0 < CBEFHLDCMFF)) {
    (__this->fields).EEPECIAODNN = fVar1;
  }
                    /* try { // try from 0369bbe4 to 0379bd8f has its CatchHandler @ 0369bbe4
                       catch() { ... } // from try @ 0369bbe4 with catch @ 0369bbe4
                       catch() { ... } // from try @ 0369bdf4 with catch @ 0369bbe4
                       catch() { ... } // from try @ 0369c010 with catch @ 0369bbe4
                       catch() { ... } // from try @ 0369c2a0 with catch @ 0369bbe4
                       catch() { ... } // from try @ 0369c2d0 with catch @ 0369bbe4
                       catch() { ... } // from try @ 0369c2ec with catch @ 0369bbe4
                       catch() { ... } // from try @ 0369c31c with catch @ 0369bbe4
                       catch() { ... } // from try @ 0369c368 with catch @ 0369bbe4
                       catch() { ... } // from try @ 0369c398 with catch @ 0369bbe4
                       catch() { ... } // from try @ 0369c3c8 with catch @ 0369bbe4 */
  return;
}


// ===== public virtual bool GetActive()  [RVA 0x359BBE8]
// Nekki.SF2.GUI.Profile.SubItem$$GetActive @ RVA 0x359BBE8

bool Nekki_SF2_GUI_Profile_SubItem__GetActive
               (Nekki_SF2_GUI_Profile_SubItem_o *__this,MethodInfo *method)

{
  return (__this->fields).NBGPKFHLCOG;
}


// ===== protected override void Awake()  [RVA 0x359BBF0]
// Nekki.SF2.GUI.Profile.SubItem$$Awake @ RVA 0x359BBF0

void Nekki_SF2_GUI_Profile_SubItem__Awake
               (Nekki_SF2_GUI_Profile_SubItem_o *__this,MethodInfo *method)

{
  SFButton__Awake((SFButton_o *)__this,(MethodInfo *)0x0);
  (__this->fields).super._EnableClickAnimation = false;
  return;
}


// ===== protected virtual void ACCLNHDNBEI(bool AHBKHGFDGHN)  [RVA 0x359BC0C]
// Nekki.SF2.GUI.Profile.SubItem$$ACCLNHDNBEI @ RVA 0x359BC0C

void Nekki_SF2_GUI_Profile_SubItem__ACCLNHDNBEI
               (Nekki_SF2_GUI_Profile_SubItem_o *__this,bool AHBKHGFDGHN,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._backPicture;
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,AHBKHGFDGHN,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x359BC3C]
// Nekki.SF2.GUI.Profile.SubItem$$.ctor @ RVA 0x359BC3C

void Nekki_SF2_GUI_Profile_SubItem___ctor
               (Nekki_SF2_GUI_Profile_SubItem_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  undefined8 uVar2;
  
  if ((DAT_04568dcc & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568dcc = 1;
    method = extraout_x1;
  }
  uVar2 = NEON_fmov(0x3f800000,4);
  (__this->fields).FOIKKEEIOBP = true;
  (__this->fields).GJFHNJFGBKE = (float)(int)uVar2;
  (__this->fields).NAPGLBIIEJP = (float)(int)((ulong)uVar2 >> 0x20);
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo,method);
  }
  pSVar1 = MGENAMAJALB__CDEFMBKAPPC((MethodInfo *)0x0);
  (__this->fields).CNMMJHJNNAJ = pSVar1;
  thunk_FUN_01c20e04(&(__this->fields).CNMMJHJNNAJ);
  (__this->fields).COCAGDPOPLL = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(&(__this->fields).COCAGDPOPLL);
  (__this->fields).BBGEFCIPNAM = 1.0;
  SFButton___ctor((SFButton_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public virtual void SetSelected(bool OOOCEFEJKCI)  [RVA 0x359BCE8]
// Nekki.SF2.GUI.Profile.SubItem$$SetSelected @ RVA 0x359BCE8

void Nekki_SF2_GUI_Profile_SubItem__SetSelected
               (Nekki_SF2_GUI_Profile_SubItem_o *__this,bool OOOCEFEJKCI,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  Il2CppObject *pIVar3;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  
  if ((DAT_04568dcd & 1) == 0) {
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568dcd = 1;
  }
  (__this->fields).CGLFEDLBCCP = OOOCEFEJKCI;
  pNVar4 = (__this->fields)._selectedPicture;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar4 = (__this->fields)._selectedPicture;
    if ((pNVar4 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0369be20;
    UnityEngine_GameObject__SetActive(pUVar2,(__this->fields).CGLFEDLBCCP,(MethodInfo *)0x0);
  }
  pNVar4 = (__this->fields)._selectWhiteSquare;
                    /* try { // try from 0369bd90 to 0379bd97 has its CatchHandler @ 0369c37c */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 0369bdac to 0379bdb3 has its CatchHandler @ 0369c378 */
  if (!bVar1) {
    return;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar3 = IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
  if (pIVar3 != (Il2CppObject *)0x0) {
    if (*(char *)((long)&pIVar3[3].monitor + 3) == '\0') {
      return;
    }
    pNVar4 = (__this->fields)._selectWhiteSquare;
                    /* try { // try from 0369bdec to 0379bdf3 has its CatchHandler @ 0369c368 */
                    /* try { // try from 0369bdf4 to 0379bf2f has its CatchHandler @ 0369bbe4 */
    if ((pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,(__this->fields).CGLFEDLBCCP,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0369be20:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected virtual void OEIIAJMHBFJ()  [RVA 0x359BE24]
// Nekki.SF2.GUI.Profile.SubItem$$OEIIAJMHBFJ @ RVA 0x359BE24

void Nekki_SF2_GUI_Profile_SubItem__OEIIAJMHBFJ
               (Nekki_SF2_GUI_Profile_SubItem_o *__this,MethodInfo *method)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (__this->fields).GJFHNJFGBKE;
  fVar3 = (__this->fields).NAPGLBIIEJP;
  fVar4 = fVar2 - fVar3;
  if ((0.0 < fVar4) && (iVar1 = (__this->fields).FBJAKHPAFNO, 0 < iVar1)) {
    fVar4 = (fVar4 / (float)iVar1) * (float)(__this->fields).JDLICGHNBFC;
    fVar2 = fVar2 - fVar4;
    if ((__this->fields).FOIKKEEIOBP != false) {
      fVar2 = fVar3 + fVar4;
    }
    LJLLAKHOFFF__IFBBIDIEBEL
              ((UnityEngine_UI_Graphic_o *)(__this->fields)._icon,fVar2,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public virtual void UpdateIcon()  [RVA 0x359BE7C]
// Nekki.SF2.GUI.Profile.SubItem$$UpdateIcon @ RVA 0x359BE7C

void Nekki_SF2_GUI_Profile_SubItem__UpdateIcon
               (Nekki_SF2_GUI_Profile_SubItem_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  
  pNVar2 = (__this->fields)._icon;
  if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    *(System_String_o **)&(pNVar2->fields).super.m_PixelsPerUnitMultiplier =
         (__this->fields).CNMMJHJNNAJ;
    thunk_FUN_01c20e04(&(pNVar2->fields).super.m_PixelsPerUnitMultiplier);
    pNVar2 = (__this->fields)._icon;
    if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                (pNVar2,(__this->fields).COCAGDPOPLL,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._selectedPicture;
      if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
         (pUVar1 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
        pNVar2 = (__this->fields)._lockPicture;
        if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (pUVar1 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
           pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
          pNVar2 = (__this->fields)._inactivePicture;
          if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
             (pUVar1 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
             pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0369bf24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(__this->klass->vtable)._64_MEPNOKOKPIA.methodPtr)
                      (__this,(__this->klass->vtable)._64_MEPNOKOKPIA.method);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual void UpdateState()  [RVA 0x359BF2C]
// Nekki.SF2.GUI.Profile.SubItem$$UpdateState @ RVA 0x359BF2C

void Nekki_SF2_GUI_Profile_SubItem__UpdateState
               (Nekki_SF2_GUI_Profile_SubItem_o *__this,MethodInfo *method)

{
  return;
}


// ===== public virtual void Choose()  [RVA 0x359BF30]
// Nekki.SF2.GUI.Profile.SubItem$$Choose @ RVA 0x359BF30

void Nekki_SF2_GUI_Profile_SubItem__Choose
               (Nekki_SF2_GUI_Profile_SubItem_o *__this,MethodInfo *method)

{
  long lVar1;
  MethodInfo *extraout_x1;
  undefined1 auVar2 [16];
  
                    /* try { // try from 0369bf30 to 0379bf37 has its CatchHandler @ 0369c300 */
  if ((DAT_04568dce & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__);
    DAT_04568dce = 1;
    method = extraout_x1;
  }
  lVar1 = *(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20);
  auVar2._8_8_ = method;
  auVar2._0_8_ = lVar1;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                    /* try { // try from 0369bf74 to 0379bf7f has its CatchHandler @ 0369c2f0 */
    auVar2 = FUN_01b81620(lVar1,method);
  }
  lVar1 = *(long *)(*(long *)(auVar2._0_8_ + 0xc0) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620(lVar1,auVar2._8_8_);
  }
  if ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar1 + 0xb8) !=
      (Nekki_SF2_GUI_Profile_ProfileScene_o *)0x0) {
                    /* try { // try from 0369bfa0 to 0379c00f has its CatchHandler @ 0369c2f4 */
    Nekki_SF2_GUI_Profile_ProfileScene__SelectSubItem
              ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar1 + 0xb8),__this,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ProfileCell get_ParentCell()  [RVA 0x359BFB0]
// Nekki.SF2.GUI.Profile.SubItem$$get_ParentCell @ RVA 0x359BFB0

Nekki_SF2_GUI_Profile_ProfileCell_o *
Nekki_SF2_GUI_Profile_SubItem__get_ParentCell
          (Nekki_SF2_GUI_Profile_SubItem_o *__this,MethodInfo *method)

{
  return (__this->fields).PEJMMOONAHC;
}


// ===== protected virtual void BNGDONJEHMH()  [RVA 0x359BFB8]
// Nekki.SF2.GUI.Profile.SubItem$$BNGDONJEHMH @ RVA 0x359BFB8

void Nekki_SF2_GUI_Profile_SubItem__BNGDONJEHMH
               (Nekki_SF2_GUI_Profile_SubItem_o *__this,MethodInfo *method)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((__this->fields).CGLFEDLBCCP != false) {
    fVar2 = (__this->fields).PJPFLFJCDCB;
    fVar3 = (__this->fields).LNMOOOJEGMF;
    fVar4 = fVar2 - fVar3;
    if ((0.0 < fVar4) && (iVar1 = (__this->fields).FBJAKHPAFNO, 0 < iVar1)) {
      fVar4 = (fVar4 / (float)iVar1) * (float)(__this->fields).JDLICGHNBFC;
      fVar2 = fVar2 - fVar4;
      if ((__this->fields).FOIKKEEIOBP != false) {
        fVar2 = fVar3 + fVar4;
      }
                    /* try { // try from 0369c010 to 0379c293 has its CatchHandler @ 0369bbe4 */
      LJLLAKHOFFF__IFBBIDIEBEL
                ((UnityEngine_UI_Graphic_o *)(__this->fields)._selectedPicture,fVar2,
                 (MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// ===== public void set_ParentCell(ProfileCell CJNHFNHJHPE)  [RVA 0x359C018]
// Nekki.SF2.GUI.Profile.SubItem$$set_ParentCell @ RVA 0x359C018

void Nekki_SF2_GUI_Profile_SubItem__set_ParentCell
               (Nekki_SF2_GUI_Profile_SubItem_o *__this,
               Nekki_SF2_GUI_Profile_ProfileCell_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).PEJMMOONAHC = CJNHFNHJHPE;
  thunk_FUN_01c20e04(&(__this->fields).PEJMMOONAHC);
  return;
}


// ===== protected virtual void IAPFLEBPOJL()  [RVA 0x359C028]
// Nekki.SF2.GUI.Profile.SubItem$$IAPFLEBPOJL @ RVA 0x359C028

void Nekki_SF2_GUI_Profile_SubItem__IAPFLEBPOJL
               (Nekki_SF2_GUI_Profile_SubItem_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *pNVar1;
  UnityEngine_GameObject_o *pUVar2;
  
  pNVar1 = (__this->fields)._lockPicture;
  if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,(__this->fields).GMEDAKHGMME,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._icon;
    if ((pNVar1 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive
                (pUVar2,(__this->fields).GMEDAKHGMME == false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void Update()  [RVA 0x359C080]
// Nekki.SF2.GUI.Profile.SubItem$$Update @ RVA 0x359C080

void Nekki_SF2_GUI_Profile_SubItem__Update
               (Nekki_SF2_GUI_Profile_SubItem_o *__this,MethodInfo *method)

{
  int iVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568dcf & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Profile_SubItem_TypeInfo);
    DAT_04568dcf = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Profile_SubItem_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Profile_SubItem_TypeInfo,method);
  }
  if (Nekki_SF2_GUI_Profile_SubItem_TypeInfo->static_fields->EEDBEBPEPJL != false) {
    (*(__this->klass->vtable)._60_BNGDONJEHMH.methodPtr)
              (__this,(__this->klass->vtable)._60_BNGDONJEHMH.method);
  }
  iVar1 = (__this->fields).JDLICGHNBFC + 1;
  (__this->fields).JDLICGHNBFC = iVar1;
  if ((__this->fields).FBJAKHPAFNO < iVar1) {
    (__this->fields).JDLICGHNBFC = 0;
    (__this->fields).FOIKKEEIOBP = (bool_conflict)((__this->fields).FOIKKEEIOBP ^ 1);
  }
  return;
}


// ===== public virtual void SetLock(bool NOLCCAPIBLL)  [RVA 0x359C11C]
// Nekki.SF2.GUI.Profile.SubItem$$SetLock @ RVA 0x359C11C

void Nekki_SF2_GUI_Profile_SubItem__SetLock
               (Nekki_SF2_GUI_Profile_SubItem_o *__this,bool NOLCCAPIBLL,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_SubItem_c *pNVar1;
  
  pNVar1 = __this->klass;
  (__this->fields).GMEDAKHGMME = NOLCCAPIBLL;
                    /* WARNING: Could not recover jumptable at 0x0369c130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pNVar1->vtable)._61_IAPFLEBPOJL.methodPtr)(__this,(pNVar1->vtable)._61_IAPFLEBPOJL.method);
  return;
}


// ===== public override void OnPointerClick(PointerEventData OHNNFPGGEFK)  [RVA 0x359C134]
// Nekki.SF2.GUI.Profile.SubItem$$OnPointerClick @ RVA 0x359C134

void Nekki_SF2_GUI_Profile_SubItem__OnPointerClick
               (Nekki_SF2_GUI_Profile_SubItem_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  SFButton__OnPointerClick((SFButton_o *)__this,OHNNFPGGEFK,(MethodInfo *)0x0);
  EDFDANKEBGF__EBPFDOEIBEH(1.0,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0369c164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._59_Choose.methodPtr)(__this,(__this->klass->vtable)._59_Choose.method);
  return;
}


// ===== protected override void OnDestroy()  [RVA 0x359C168]
// Nekki.SF2.GUI.Profile.SubItem$$OnDestroy @ RVA 0x359C168

void Nekki_SF2_GUI_Profile_SubItem__OnDestroy
               (Nekki_SF2_GUI_Profile_SubItem_o *__this,MethodInfo *method)

{
  SFButton__OnDestroy((SFButton_o *)__this,(MethodInfo *)0x0);
  SFButton__RemoveAllEventListener((SFButton_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public virtual bool GetSelected()  [RVA 0x359C188]
// Nekki.SF2.GUI.Profile.SubItem$$GetSelected @ RVA 0x359C188

bool Nekki_SF2_GUI_Profile_SubItem__GetSelected
               (Nekki_SF2_GUI_Profile_SubItem_o *__this,MethodInfo *method)

{
  return (__this->fields).CGLFEDLBCCP;
}


// ===== protected virtual void MEPNOKOKPIA()  [RVA 0x359C190]
// Nekki.SF2.GUI.Profile.SubItem$$MEPNOKOKPIA @ RVA 0x359C190

void Nekki_SF2_GUI_Profile_SubItem__MEPNOKOKPIA
               (Nekki_SF2_GUI_Profile_SubItem_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  __this_00 = (__this->fields)._inactivePicture;
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive
              (__this_01,(__this->fields).NBGPKFHLCOG == false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void EnableAnimation(bool CJNHFNHJHPE)  [RVA 0x359C1C8]
// Nekki.SF2.GUI.Profile.SubItem$$EnableAnimation @ RVA 0x359C1C8

void Nekki_SF2_GUI_Profile_SubItem__EnableAnimation(bool CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04568dd0 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Profile_SubItem_TypeInfo);
    DAT_04568dd0 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Profile_SubItem_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Profile_SubItem_TypeInfo,method);
  }
  Nekki_SF2_GUI_Profile_SubItem_TypeInfo->static_fields->EEDBEBPEPJL = CJNHFNHJHPE;
  return;
}


// ===== public void Init()  [RVA 0x359C228]
// Nekki.SF2.GUI.Profile.SubItem$$Init @ RVA 0x359C228

void Nekki_SF2_GUI_Profile_SubItem__Init(Nekki_SF2_GUI_Profile_SubItem_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *extraout_x1;
  FIPOABEGELK_StaticFields *pFVar1;
  GODDDLLLOLB_o *pGVar2;
  GODDDLLLOLB_Fields GVar3;
  undefined8 uVar4;
  
  if ((DAT_04568dd1 & 1) == 0) {
    FUN_01bab630(&FIPOABEGELK_TypeInfo);
    DAT_04568dd1 = 1;
    method = extraout_x1;
  }
  if ((FIPOABEGELK_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(FIPOABEGELK_TypeInfo,method);
  }
  pFVar1 = FIPOABEGELK_TypeInfo->static_fields;
  pGVar2 = pFVar1->PNKKLHDNAGP;
  if (pGVar2 != (GODDDLLLOLB_o *)0x0) {
    GVar3 = pGVar2->fields;
    __this_00 = (__this->fields)._backPicture;
    uVar4 = NEON_rev64(CONCAT44(GVar3.HFBHMJBLLOI / 255.0,GVar3.AKPNOPAEKEF / 255.0),4);
                    /* try { // try from 0369c294 to 0379c29f has its CatchHandler @ 0369c2f4 */
    (__this->fields).PJPFLFJCDCB = (float)(int)uVar4;
    (__this->fields).LNMOOOJEGMF = (float)(int)((ulong)uVar4 >> 0x20);
    (__this->fields).FBJAKHPAFNO = pFVar1->EBHMIOHJIJJ;
                    /* try { // try from 0369c2a0 to 0379c2c3 has its CatchHandler @ 0369bbe4 */
    if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (__this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0369c2c4 to 0379c2c7 has its CatchHandler @ 0369c374 */
  FUN_01bab8c8();
}


// ===== public virtual bool GetLock()  [RVA 0x359C2C8]
// Nekki.SF2.GUI.Profile.SubItem$$GetLock @ RVA 0x359C2C8

bool Nekki_SF2_GUI_Profile_SubItem__GetLock
               (Nekki_SF2_GUI_Profile_SubItem_o *__this,MethodInfo *method)

{
                    /* try { // try from 0369c2c8 to 0379c2cb has its CatchHandler @ 0369c370 */
                    /* try { // try from 0369c2cc to 0379c2cf has its CatchHandler @ 0369c36c */
  return (__this->fields).GMEDAKHGMME;
}

