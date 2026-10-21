// TypeDefIndex 2588
// Namespace: Nekki.SF2.Core.Fights.Controls
// public class GameController : UIModule
// Fields:
//   private Stick _Joystick; // 0x28
//   private GameObject _LeftContainer; // 0x30
//   private ActionButtons _ActionButtons; // 0x38
//   private bool BKJCNEFAGMM; // 0x40
//   private bool DHODJJLHHBI; // 0x41
//   private bool FNCLELOEFDM; // 0x42
//   private bool MHCEKGEFGDF; // 0x43
//   private bool BGGEDINJAOI; // 0x44
//   private bool MDBGNLIBANL; // 0x45
//   private bool GADNEKIHBNO; // 0x46
//   private static GameController CNMHHKAMGPI; // 0x0

// ===== public void set_IsStickEnabled(bool CJNHFNHJHPE)  [RVA 0x33A43B0]
// Nekki.SF2.Core.Fights.Controls.GameController$$set_IsStickEnabled @ RVA 0x33A43B0

void Nekki_SF2_Core_Fights_Controls_GameController__set_IsStickEnabled
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  Nekki_SF2_Core_Fights_Controls_Stick_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
                    /* try { // try from 034a43b8 to 035a43df has its CatchHandler @ 034a4494 */
  __this_00 = (__this->fields)._Joystick;
  (__this->fields).FNCLELOEFDM = CJNHFNHJHPE;
  if ((__this_00 != (Nekki_SF2_Core_Fights_Controls_Stick_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 034a43e0 to 035a43f7 has its CatchHandler @ 034a3fe4 */
    UnityEngine_GameObject__SetActive(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_IsMagicEnabled()  [RVA 0x33A43EC]
// Nekki.SF2.Core.Fights.Controls.GameController$$get_IsMagicEnabled @ RVA 0x33A43EC

bool Nekki_SF2_Core_Fights_Controls_GameController__get_IsMagicEnabled
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,MethodInfo *method)

{
  return (__this->fields).MHCEKGEFGDF;
}


// ===== public bool get_IsControlsActive()  [RVA 0x33A43F4]
// Nekki.SF2.Core.Fights.Controls.GameController$$get_IsControlsActive @ RVA 0x33A43F4

bool Nekki_SF2_Core_Fights_Controls_GameController__get_IsControlsActive
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,MethodInfo *method)

{
                    /* try { // try from 034a43f8 to 035a43fb has its CatchHandler @ 034a4420 */
  return (__this->fields).GADNEKIHBNO;
}


// ===== public static GameController get_Current()  [RVA 0x33A43FC]
// Nekki.SF2.Core.Fights.Controls.GameController$$get_Current @ RVA 0x33A43FC

Nekki_SF2_Core_Fights_Controls_GameController_o *
Nekki_SF2_Core_Fights_Controls_GameController__get_Current(MethodInfo *method)

{
                    /* try { // try from 034a4408 to 035a447f has its CatchHandler @ 034a4494 */
                    /* catch() { ... } // from try @ 034a4378 with catch @ 034a4410 */
  if ((DAT_04567cdb & 1) == 0) {
                    /* catch() { ... } // from try @ 034a43f8 with catch @ 034a4420 */
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
    DAT_04567cdb = 1;
  }
  return Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
}


// ===== public void Init(bool IEKDLJAOKCB, bool PLNACNFOEAI, bool HHFCPLHHPKM)  [RVA 0x33A4444]
// Nekki.SF2.Core.Fights.Controls.GameController$$Init @ RVA 0x33A4444

void Nekki_SF2_Core_Fights_Controls_GameController__Init
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,bool IEKDLJAOKCB,
               bool PLNACNFOEAI,bool HHFCPLHHPKM,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Nekki_SF2_Core_Fights_Controls_ActionButtons_o *pNVar2;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)PLNACNFOEAI;
  if ((DAT_04567cdc & 1) == 0) {
                    /* try { // try from 034a4480 to 035a448b has its CatchHandler @ 034a3fe4 */
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
                    /* try { // try from 034a448c to 035a4493 has its CatchHandler @ 034a4494 */
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
                    /* catch() { ... } // from try @ 034a4300 with catch @ 034a4494
                       catch() { ... } // from try @ 034a43b8 with catch @ 034a4494
                       catch() { ... } // from try @ 034a4408 with catch @ 034a4494
                       catch() { ... } // from try @ 034a448c with catch @ 034a4494 */
    DAT_04567cdc = 1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar1 = IFAMAAGNCBJ__GPBMELHDADN<object>(Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
  if (pIVar1 != (Il2CppObject *)0x0) {
    Nekki_SF2_Core_Fights_Controls_GameController__set_IsShowController
              (__this,*(bool *)((long)&pIVar1[2].klass + 1),method_00);
    pNVar2 = (__this->fields)._ActionButtons;
    if (pNVar2 != (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *)0x0) {
      Nekki_SF2_Core_Fights_Controls_ActionButtons__ResetMagicButton(pNVar2,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._ActionButtons;
      if (pNVar2 != (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *)0x0) {
        Nekki_SF2_Core_Fights_Controls_ActionButtons__ResetRaidChargeButton
                  (pNVar2,(MethodInfo *)0x0);
        Nekki_SF2_Core_Fights_Controls_GameController__Refresh
                  (__this,IEKDLJAOKCB,PLNACNFOEAI,HHFCPLHHPKM,method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_IsStickEnabled()  [RVA 0x33A45A4]
// Nekki.SF2.Core.Fights.Controls.GameController$$get_IsStickEnabled @ RVA 0x33A45A4

bool Nekki_SF2_Core_Fights_Controls_GameController__get_IsStickEnabled
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,MethodInfo *method)

{
  return (__this->fields).FNCLELOEFDM;
}


// ===== private bool NPEIOOFJBDO(DMMJFKCBHEK IKKKILCDMMB)  [RVA 0x33A45AC]
// Nekki.SF2.Core.Fights.Controls.GameController$$NPEIOOFJBDO @ RVA 0x33A45AC

bool Nekki_SF2_Core_Fights_Controls_GameController__NPEIOOFJBDO
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,int32_t IKKKILCDMMB,
               MethodInfo *method)

{
                    /* try { // try from 034a45f4 to 035a4683 has its CatchHandler @ 034a45f4
                       catch() { ... } // from try @ 034a45f4 with catch @ 034a45f4
                       catch() { ... } // from try @ 034a4794 with catch @ 034a45f4
                       catch() { ... } // from try @ 034a4834 with catch @ 034a45f4
                       catch() { ... } // from try @ 034a48dc with catch @ 034a45f4
                       catch() { ... } // from try @ 034a499c with catch @ 034a45f4
                       catch() { ... } // from try @ 034a4a3c with catch @ 034a45f4 */
  if ((((((IKKKILCDMMB != 9) || ((__this->fields).BKJCNEFAGMM != false)) &&
        ((IKKKILCDMMB != 10 || ((__this->fields).DHODJJLHHBI != false)))) &&
       ((7 < IKKKILCDMMB - 1U || ((__this->fields).FNCLELOEFDM != false)))) &&
      ((IKKKILCDMMB != 0xb || ((__this->fields).BGGEDINJAOI != false)))) &&
     ((IKKKILCDMMB != 0xc || ((__this->fields).MHCEKGEFGDF != false)))) {
    return IKKKILCDMMB != 0xd || (__this->fields).MDBGNLIBANL != false;
  }
  return false;
}


// ===== protected override void CLNAOMIIBLH()  [RVA 0x33A4624]
// Nekki.SF2.Core.Fights.Controls.GameController$$CLNAOMIIBLH @ RVA 0x33A4624

void Nekki_SF2_Core_Fights_Controls_GameController__CLNAOMIIBLH
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if ((DAT_04567cdd & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
    DAT_04567cdd = 1;
  }
  Nekki_SF2_GUI_UIModule__CLNAOMIIBLH((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI =
       (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0;
  thunk_FUN_01c20e04(Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields,0);
                    /* try { // try from 034a4684 to 035a469b has its CatchHandler @ 034a48fc */
  Nekki_SF2_Core_Fights_Controls_GameController__CIIBDMIDPCN(__this,method_00);
  return;
}


// ===== public bool get_IsPunchEnabled()  [RVA 0x33A480C]
// Nekki.SF2.Core.Fights.Controls.GameController$$get_IsPunchEnabled @ RVA 0x33A480C

bool Nekki_SF2_Core_Fights_Controls_GameController__get_IsPunchEnabled
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,MethodInfo *method)

{
  return (__this->fields).BKJCNEFAGMM;
}


// ===== public void set_IsControlsActive(bool CJNHFNHJHPE)  [RVA 0x33A4814]
// Nekki.SF2.Core.Fights.Controls.GameController$$set_IsControlsActive @ RVA 0x33A4814

void Nekki_SF2_Core_Fights_Controls_GameController__set_IsControlsActive
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields).GADNEKIHBNO = CJNHFNHJHPE;
  return;
}


// ===== public bool get_IsRaidChargeEnabled()  [RVA 0x33A4820]
// Nekki.SF2.Core.Fights.Controls.GameController$$get_IsRaidChargeEnabled @ RVA 0x33A4820

bool Nekki_SF2_Core_Fights_Controls_GameController__get_IsRaidChargeEnabled
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,MethodInfo *method)

{
                    /* try { // try from 034a4820 to 035a4823 has its CatchHandler @ 034a4838 */
                    /* try { // try from 034a4824 to 035a482b has its CatchHandler @ 034a490c */
  return (__this->fields).MDBGNLIBANL;
}


// ===== public bool get_IsKickEnabled()  [RVA 0x33A4828]
// Nekki.SF2.Core.Fights.Controls.GameController$$get_IsKickEnabled @ RVA 0x33A4828

bool Nekki_SF2_Core_Fights_Controls_GameController__get_IsKickEnabled
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,MethodInfo *method)

{
                    /* try { // try from 034a482c to 035a4833 has its CatchHandler @ 034a4918 */
  return (__this->fields).DHODJJLHHBI;
}


// ===== public void set_IsMagicEnabled(bool CJNHFNHJHPE)  [RVA 0x33A4830]
// Nekki.SF2.Core.Fights.Controls.GameController$$set_IsMagicEnabled @ RVA 0x33A4830

void Nekki_SF2_Core_Fights_Controls_GameController__set_IsMagicEnabled
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this_00;
  
                    /* catch() { ... } // from try @ 034a46c8 with catch @ 034a4834
                       try { // try from 034a4834 to 035a4857 has its CatchHandler @ 034a45f4 */
                    /* catch() { ... } // from try @ 034a4820 with catch @ 034a4838 */
  __this_00 = (__this->fields)._ActionButtons;
  (__this->fields).MHCEKGEFGDF = CJNHFNHJHPE;
  if (__this_00 != (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *)0x0) {
    Nekki_SF2_Core_Fights_Controls_ActionButtons__ShowMagic(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0)
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void GIENGNEGHPJ()  [RVA 0x33A4858]
// Nekki.SF2.Core.Fights.Controls.GameController$$GIENGNEGHPJ @ RVA 0x33A4858

void Nekki_SF2_Core_Fights_Controls_GameController__GIENGNEGHPJ
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
                    /* try { // try from 034a4858 to 035a485b has its CatchHandler @ 034a48dc */
  if ((DAT_04567cde & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
    DAT_04567cde = 1;
  }
  Nekki_SF2_GUI_UIModule__GIENGNEGHPJ((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 034a48a4 to 035a48db has its CatchHandler @ 034a4a50 */
  Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI = __this;
  thunk_FUN_01c20e04(Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields,__this);
  Nekki_SF2_Core_Fights_Controls_GameController__DBALJOHIDAB(__this,method_00);
  return;
}


// ===== public void set_IsShowController(bool CJNHFNHJHPE)  [RVA 0x33A4510]
// Nekki.SF2.Core.Fights.Controls.GameController$$set_IsShowController @ RVA 0x33A4510

void Nekki_SF2_Core_Fights_Controls_GameController__set_IsShowController
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_IsKickEnabled(bool CJNHFNHJHPE)  [RVA 0x33A4A58]
// Nekki.SF2.Core.Fights.Controls.GameController$$set_IsKickEnabled @ RVA 0x33A4A58

void Nekki_SF2_Core_Fights_Controls_GameController__set_IsKickEnabled
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this_00;
  
  __this_00 = (__this->fields)._ActionButtons;
  (__this->fields).DHODJJLHHBI = CJNHFNHJHPE;
  if (__this_00 != (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *)0x0) {
    Nekki_SF2_Core_Fights_Controls_ActionButtons__ShowKick(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_IsShowController()  [RVA 0x33A4A80]
// Nekki.SF2.Core.Fights.Controls.GameController$$get_IsShowController @ RVA 0x33A4A80

bool Nekki_SF2_Core_Fights_Controls_GameController__get_IsShowController
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_IsRangedEnabled(bool CJNHFNHJHPE)  [RVA 0x33A4AA0]
// Nekki.SF2.Core.Fights.Controls.GameController$$set_IsRangedEnabled @ RVA 0x33A4AA0

void Nekki_SF2_Core_Fights_Controls_GameController__set_IsRangedEnabled
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this_00;
  
  __this_00 = (__this->fields)._ActionButtons;
  (__this->fields).BGGEDINJAOI = CJNHFNHJHPE;
  if (__this_00 != (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *)0x0) {
    Nekki_SF2_Core_Fights_Controls_ActionButtons__ShowRanged
              (__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ActionButtons get_ActionButtons()  [RVA 0x33A4AC8]
// Nekki.SF2.Core.Fights.Controls.GameController$$get_ActionButtons @ RVA 0x33A4AC8

Nekki_SF2_Core_Fights_Controls_ActionButtons_o *
Nekki_SF2_Core_Fights_Controls_GameController__get_ActionButtons
          (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,MethodInfo *method)

{
  return (__this->fields)._ActionButtons;
}


// ===== public void .ctor()  [RVA 0x33A4AD0]
// Nekki.SF2.Core.Fights.Controls.GameController$$.ctor @ RVA 0x33A4AD0

void Nekki_SF2_Core_Fights_Controls_GameController___ctor
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
                    /* try { // try from 034a4ae0 to 035a4af7 has its CatchHandler @ 034a4da0 */
  if ((DAT_04567cdf & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_04567cdf = 1;
    method = extraout_x1;
  }
                    /* try { // try from 034a4b04 to 035a4b17 has its CatchHandler @ 034a4d9c */
  (__this->fields).BGGEDINJAOI = true;
  (__this->fields).MDBGNLIBANL = true;
  (__this->fields).BKJCNEFAGMM = true;
  (__this->fields).DHODJJLHHBI = true;
  (__this->fields).FNCLELOEFDM = true;
  (__this->fields).MHCEKGEFGDF = true;
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_UIModule_TypeInfo,method);
  }
                    /* try { // try from 034a4b24 to 035a4b2f has its CatchHandler @ 034a4ce4 */
  Nekki_SF2_GUI_UIModule___ctor((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public bool get_IsRangedEnabled()  [RVA 0x33A4B34]
// Nekki.SF2.Core.Fights.Controls.GameController$$get_IsRangedEnabled @ RVA 0x33A4B34

bool Nekki_SF2_Core_Fights_Controls_GameController__get_IsRangedEnabled
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,MethodInfo *method)

{
  return (__this->fields).BGGEDINJAOI;
}


// ===== private void Update()  [RVA 0x33A4B3C]
// Nekki.SF2.Core.Fights.Controls.GameController$$Update @ RVA 0x33A4B3C

void Nekki_SF2_Core_Fights_Controls_GameController__Update
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,MethodInfo *method)

{
  return;
}


// ===== private void PAIBMOAPDLC(GGFFOJJGHGP EJFPCGICJJB)  [RVA 0x33A4B40]
// Nekki.SF2.Core.Fights.Controls.GameController$$PAIBMOAPDLC @ RVA 0x33A4B40

void Nekki_SF2_Core_Fights_Controls_GameController__PAIBMOAPDLC
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,GGFFOJJGHGP_o *EJFPCGICJJB,
               MethodInfo *method)

{
  bool bVar1;
  Fight_o *__this_00;
  
  if ((DAT_04567ce0 & 1) == 0) {
    FUN_01bab630(&Fight_TypeInfo);
                    /* try { // try from 034a4b6c to 035a4b93 has its CatchHandler @ 034a4db0 */
    DAT_04567ce0 = 1;
  }
  if (EJFPCGICJJB == (GGFFOJJGHGP_o *)0x0) {
LAB_034a4c44:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = Nekki_SF2_Core_Fights_Controls_GameController__NPEIOOFJBDO
                    (__this,(EJFPCGICJJB->fields).ACNLHENNKAJ,method);
  if (bVar1) {
    if ((Fight_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7f == '\0') {
      FUN_01bab630(&Fight_TypeInfo);
      DAT_04565b7f = '\x01';
    }
    if ((Fight_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (Fight_TypeInfo->static_fields->IGABFCCGLCO != (Fight_o *)0x0) {
                    /* try { // try from 034a4bdc to 035a4c03 has its CatchHandler @ 034a4da4 */
      if ((Fight_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7f == '\0') {
        FUN_01bab630(&Fight_TypeInfo);
        DAT_04565b7f = '\x01';
      }
      if ((Fight_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = Fight_TypeInfo->static_fields->IGABFCCGLCO;
      if (__this_00 != (Fight_o *)0x0) {
                    /* try { // try from 034a4c24 to 035a4c2b has its CatchHandler @ 034a4cdc */
                    /* try { // try from 034a4c2c to 035a4cc3 has its CatchHandler @ 034a4a54 */
        Fight__DDFNLHMCIND(__this_00,EJFPCGICJJB,(MethodInfo *)0x0);
        return;
      }
      goto LAB_034a4c44;
    }
  }
  return;
}


// ===== private void CIIBDMIDPCN()  [RVA 0x33A4690]
// Nekki.SF2.Core.Fights.Controls.GameController$$CIIBDMIDPCN @ RVA 0x33A4690

void Nekki_SF2_Core_Fights_Controls_GameController__CIIBDMIDPCN
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,MethodInfo *method)

{
  System_Action_GGFFOJJGHGP__o *pSVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_Core_Fights_Controls_Stick_o *pNVar2;
  Nekki_SF2_Core_Fights_Controls_ActionButtons_o *pNVar3;
  
                    /* try { // try from 034a46a8 to 035a46bb has its CatchHandler @ 034a48ec */
  if ((DAT_04567ce1 & 1) == 0) {
                    /* try { // try from 034a46c8 to 035a46cf has its CatchHandler @ 034a4834 */
    FUN_01bab630(&System_Action<GGFFOJJGHGP>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_Controls_GameController_HCLIIHBKIIG__);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_Controls_GameController_PAIBMOAPDLC__);
    DAT_04567ce1 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields)._Joystick;
  pSVar1 = (System_Action_GGFFOJJGHGP__o *)
           thunk_FUN_01bda818(System_Action<GGFFOJJGHGP>_TypeInfo,method);
                    /* try { // try from 034a4708 to 035a472f has its CatchHandler @ 034a4918 */
  System_Action<object>___ctor();
  if (pNVar2 != (Nekki_SF2_Core_Fights_Controls_Stick_o *)0x0) {
    Nekki_SF2_Core_Fights_Controls_Stick__remove_OnStickBegin(pNVar2,pSVar1,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._Joystick;
    pSVar1 = (System_Action_GGFFOJJGHGP__o *)thunk_FUN_01bda818(System_Action<GGFFOJJGHGP>_TypeInfo)
    ;
    System_Action<object>___ctor();
    if (pNVar2 != (Nekki_SF2_Core_Fights_Controls_Stick_o *)0x0) {
      Nekki_SF2_Core_Fights_Controls_Stick__remove_OnStickChange(pNVar2,pSVar1,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._Joystick;
      pSVar1 = (System_Action_GGFFOJJGHGP__o *)
               thunk_FUN_01bda818(System_Action<GGFFOJJGHGP>_TypeInfo);
                    /* try { // try from 034a476c to 035a4793 has its CatchHandler @ 034a490c */
      System_Action<object>___ctor();
      if (pNVar2 != (Nekki_SF2_Core_Fights_Controls_Stick_o *)0x0) {
        Nekki_SF2_Core_Fights_Controls_Stick__remove_OnStickEnd(pNVar2,pSVar1,(MethodInfo *)0x0);
                    /* try { // try from 034a4794 to 035a481f has its CatchHandler @ 034a45f4 */
        pNVar3 = (__this->fields)._ActionButtons;
        pSVar1 = (System_Action_GGFFOJJGHGP__o *)
                 thunk_FUN_01bda818(System_Action<GGFFOJJGHGP>_TypeInfo);
        System_Action<object>___ctor();
        if (pNVar3 != (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *)0x0) {
          Nekki_SF2_Core_Fights_Controls_ActionButtons__remove_OnButtonPress
                    (pNVar3,pSVar1,(MethodInfo *)0x0);
          pNVar3 = (__this->fields)._ActionButtons;
          pSVar1 = (System_Action_GGFFOJJGHGP__o *)
                   thunk_FUN_01bda818(System_Action<GGFFOJJGHGP>_TypeInfo);
          System_Action<object>___ctor();
          if (pNVar3 != (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *)0x0) {
            Nekki_SF2_Core_Fights_Controls_ActionButtons__remove_OnButtonRelease
                      (pNVar3,pSVar1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdateTouchControlsScale()  [RVA 0x33A4C48]
// Nekki.SF2.Core.Fights.Controls.GameController$$UpdateTouchControlsScale @ RVA 0x33A4C48

void Nekki_SF2_Core_Fights_Controls_GameController__UpdateTouchControlsScale
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar3;
  Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this_01;
  MethodInfo *extraout_x1;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  
  if ((DAT_04567ce2 & 1) == 0) {
    FUN_01bab630(&LLKDCCJMFLE_TypeInfo);
    DAT_04567ce2 = 1;
    method = extraout_x1;
  }
  if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LLKDCCJMFLE_TypeInfo,method);
  }
  bVar2 = LLKDCCJMFLE__JGNHBFFLBIB((MethodInfo *)0x0);
  __this_00 = (__this->fields)._LeftContainer;
  uVar1 = 0x3f800000;
  if (!bVar2) {
    uVar1 = 0x3f400000;
  }
  if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar3 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_Transform_o *)0x0)) {
    value.fields.y = (float)uVar1;
    value.fields.x = (float)uVar1;
    value.fields.z = 0.0;
                    /* try { // try from 034a4cc4 to 035a4cc7 has its CatchHandler @ 034a4ce4 */
                    /* try { // try from 034a4cc8 to 035a4ccf has its CatchHandler @ 034a4da4 */
                    /* try { // try from 034a4cd0 to 035a4cd7 has its CatchHandler @ 034a4db0 */
    UnityEngine_Transform__set_localScale(pUVar3,value,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._ActionButtons;
                    /* try { // try from 034a4cd8 to 035a4cdb has its CatchHandler @ 034a4ce0 */
                    /* catch() { ... } // from try @ 034a4c24 with catch @ 034a4cdc
                       try { // try from 034a4cdc to 035a4d03 has its CatchHandler @ 034a4a54 */
                    /* catch() { ... } // from try @ 034a4cd8 with catch @ 034a4ce0 */
                    /* catch() { ... } // from try @ 034a4b24 with catch @ 034a4ce4
                       catch() { ... } // from try @ 034a4cc4 with catch @ 034a4ce4 */
    if ((__this_01 != (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_Transform_o *)0x0)) {
      value_00.fields.y = (float)uVar1;
      value_00.fields.x = (float)uVar1;
      value_00.fields.z = 0.0;
                    /* try { // try from 034a4d04 to 035a4d07 has its CatchHandler @ 034a4d8c */
      UnityEngine_Transform__set_localScale(pUVar3,value_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Stick get_Joystick()  [RVA 0x33A4D0C]
// Nekki.SF2.Core.Fights.Controls.GameController$$get_Joystick @ RVA 0x33A4D0C

Nekki_SF2_Core_Fights_Controls_Stick_o *
Nekki_SF2_Core_Fights_Controls_GameController__get_Joystick
          (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,MethodInfo *method)

{
  return (__this->fields)._Joystick;
}


// ===== public void Refresh(bool IEKDLJAOKCB, bool PLNACNFOEAI, bool HHFCPLHHPKM)  [RVA 0x33A4538]
// Nekki.SF2.Core.Fights.Controls.GameController$$Refresh @ RVA 0x33A4538

void Nekki_SF2_Core_Fights_Controls_GameController__Refresh
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,bool IEKDLJAOKCB,
               bool PLNACNFOEAI,bool HHFCPLHHPKM,MethodInfo *method)

{
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)PLNACNFOEAI;
  Nekki_SF2_Core_Fights_Controls_GameController__set_IsPunchEnabled(__this,true,method_00);
  Nekki_SF2_Core_Fights_Controls_GameController__set_IsKickEnabled(__this,true,method_00);
  Nekki_SF2_Core_Fights_Controls_GameController__set_IsStickEnabled(__this,true,method_00);
  Nekki_SF2_Core_Fights_Controls_GameController__set_IsMagicEnabled(__this,IEKDLJAOKCB,method_00);
  Nekki_SF2_Core_Fights_Controls_GameController__set_IsRangedEnabled(__this,PLNACNFOEAI,method_00);
  Nekki_SF2_Core_Fights_Controls_GameController__set_IsRaidChargeEnabled
            (__this,HHFCPLHHPKM,method_00);
  return;
}


// ===== private void HCLIIHBKIIG(GGFFOJJGHGP EJFPCGICJJB)  [RVA 0x33A4D64]
// Nekki.SF2.Core.Fights.Controls.GameController$$HCLIIHBKIIG @ RVA 0x33A4D64

void Nekki_SF2_Core_Fights_Controls_GameController__HCLIIHBKIIG
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,GGFFOJJGHGP_o *EJFPCGICJJB,
               MethodInfo *method)

{
  int IKKKILCDMMB;
  bool bVar1;
  Fight_o *__this_00;
  
  if ((DAT_04567ce3 & 1) == 0) {
    FUN_01bab630(&Fight_TypeInfo);
                    /* catch() { ... } // from try @ 034a4d04 with catch @ 034a4d8c
                       try { // try from 034a4d8c to 035a4dcb has its CatchHandler @ 034a4a54 */
    DAT_04567ce3 = 1;
  }
  if (EJFPCGICJJB == (GGFFOJJGHGP_o *)0x0) {
LAB_034a4e6c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  IKKKILCDMMB = (EJFPCGICJJB->fields).ACNLHENNKAJ;
                    /* catch() { ... } // from try @ 034a4b04 with catch @ 034a4d9c */
                    /* catch() { ... } // from try @ 034a4ae0 with catch @ 034a4da0 */
                    /* catch() { ... } // from try @ 034a4bdc with catch @ 034a4da4
                       catch() { ... } // from try @ 034a4cc8 with catch @ 034a4da4 */
  if ((IKKKILCDMMB != 0) &&
     (bVar1 = Nekki_SF2_Core_Fights_Controls_GameController__NPEIOOFJBDO(__this,IKKKILCDMMB,method),
     bVar1)) {
                    /* catch() { ... } // from try @ 034a4b6c with catch @ 034a4db0
                       catch() { ... } // from try @ 034a4cd0 with catch @ 034a4db0 */
    if ((Fight_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 034a4dcc to 035a4dcf has its CatchHandler @ 034a4e64 */
    if (DAT_04565b7f == '\0') {
      FUN_01bab630(&Fight_TypeInfo);
      DAT_04565b7f = '\x01';
    }
    if ((Fight_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (Fight_TypeInfo->static_fields->IGABFCCGLCO != (Fight_o *)0x0) {
      if ((Fight_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034a4e0c to 035a4e33 has its CatchHandler @ 034a4ee8 */
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7f == '\0') {
        FUN_01bab630(&Fight_TypeInfo);
        DAT_04565b7f = '\x01';
      }
                    /* try { // try from 034a4e34 to 035a4e4b has its CatchHandler @ 034a4a54 */
      if ((Fight_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = Fight_TypeInfo->static_fields->IGABFCCGLCO;
      if (__this_00 != (Fight_o *)0x0) {
                    /* try { // try from 034a4e4c to 035a4e4f has its CatchHandler @ 034a4e74 */
                    /* try { // try from 034a4e5c to 035a4ed3 has its CatchHandler @ 034a4ee8 */
        Fight__KAIJCNCDMLO(__this_00,EJFPCGICJJB,(MethodInfo *)0x0);
        return;
      }
      goto LAB_034a4e6c;
    }
  }
                    /* catch() { ... } // from try @ 034a4dcc with catch @ 034a4e64 */
  return;
}


// ===== private void DBALJOHIDAB()  [RVA 0x33A48C4]
// Nekki.SF2.Core.Fights.Controls.GameController$$DBALJOHIDAB @ RVA 0x33A48C4

void Nekki_SF2_Core_Fights_Controls_GameController__DBALJOHIDAB
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,MethodInfo *method)

{
  System_Action_GGFFOJJGHGP__o *pSVar1;
  Nekki_SF2_Core_Fights_Controls_ActionButtons_o *pNVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_Core_Fights_Controls_Stick_o *pNVar3;
  
                    /* catch() { ... } // from try @ 034a4858 with catch @ 034a48dc
                       try { // try from 034a48dc to 035a4933 has its CatchHandler @ 034a45f4 */
                    /* catch() { ... } // from try @ 034a46a8 with catch @ 034a48ec */
  if ((DAT_04567ce4 & 1) == 0) {
                    /* catch() { ... } // from try @ 034a4684 with catch @ 034a48fc */
    FUN_01bab630(&System_Action<GGFFOJJGHGP>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_Controls_GameController_HCLIIHBKIIG__);
                    /* catch() { ... } // from try @ 034a476c with catch @ 034a490c
                       catch() { ... } // from try @ 034a4824 with catch @ 034a490c */
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_Controls_GameController_PAIBMOAPDLC__);
                    /* catch() { ... } // from try @ 034a4708 with catch @ 034a4918
                       catch() { ... } // from try @ 034a482c with catch @ 034a4918 */
    DAT_04567ce4 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_Core_Fights_Controls_GameController__UpdateTouchControlsScale(__this,method);
  pNVar3 = (__this->fields)._Joystick;
  pSVar1 = (System_Action_GGFFOJJGHGP__o *)thunk_FUN_01bda818(System_Action<GGFFOJJGHGP>_TypeInfo);
                    /* try { // try from 034a4934 to 035a4937 has its CatchHandler @ 034a49cc */
  System_Action<object>___ctor();
  if (pNVar3 != (Nekki_SF2_Core_Fights_Controls_Stick_o *)0x0) {
    Nekki_SF2_Core_Fights_Controls_Stick__add_OnStickBegin(pNVar3,pSVar1,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._Joystick;
    pSVar1 = (System_Action_GGFFOJJGHGP__o *)thunk_FUN_01bda818(System_Action<GGFFOJJGHGP>_TypeInfo)
    ;
                    /* try { // try from 034a4974 to 035a499b has its CatchHandler @ 034a4a50 */
    System_Action<object>___ctor();
    if (pNVar3 != (Nekki_SF2_Core_Fights_Controls_Stick_o *)0x0) {
      Nekki_SF2_Core_Fights_Controls_Stick__add_OnStickChange(pNVar3,pSVar1,(MethodInfo *)0x0);
                    /* try { // try from 034a499c to 035a49b3 has its CatchHandler @ 034a45f4 */
      pNVar3 = (__this->fields)._Joystick;
      pSVar1 = (System_Action_GGFFOJJGHGP__o *)
               thunk_FUN_01bda818(System_Action<GGFFOJJGHGP>_TypeInfo);
                    /* try { // try from 034a49b4 to 035a49b7 has its CatchHandler @ 034a49dc */
      System_Action<object>___ctor();
      if (pNVar3 != (Nekki_SF2_Core_Fights_Controls_Stick_o *)0x0) {
                    /* try { // try from 034a49c4 to 035a4a3b has its CatchHandler @ 034a4a50 */
        Nekki_SF2_Core_Fights_Controls_Stick__add_OnStickEnd(pNVar3,pSVar1,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034a4934 with catch @ 034a49cc */
        pNVar2 = (__this->fields)._ActionButtons;
        if (pNVar2 != (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *)0x0) {
          Nekki_SF2_Core_Fights_Controls_ActionButtons__Init(pNVar2,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034a49b4 with catch @ 034a49dc */
          pNVar2 = (__this->fields)._ActionButtons;
          pSVar1 = (System_Action_GGFFOJJGHGP__o *)
                   thunk_FUN_01bda818(System_Action<GGFFOJJGHGP>_TypeInfo);
          System_Action<object>___ctor();
          if (pNVar2 != (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *)0x0) {
            Nekki_SF2_Core_Fights_Controls_ActionButtons__add_OnButtonPress
                      (pNVar2,pSVar1,(MethodInfo *)0x0);
            pNVar2 = (__this->fields)._ActionButtons;
            pSVar1 = (System_Action_GGFFOJJGHGP__o *)
                     thunk_FUN_01bda818(System_Action<GGFFOJJGHGP>_TypeInfo);
            System_Action<object>___ctor();
            if (pNVar2 != (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *)0x0) {
                    /* try { // try from 034a4a3c to 035a4a47 has its CatchHandler @ 034a45f4 */
                    /* try { // try from 034a4a48 to 035a4a4f has its CatchHandler @ 034a4a50 */
                    /* catch() { ... } // from try @ 034a48a4 with catch @ 034a4a50
                       catch() { ... } // from try @ 034a4974 with catch @ 034a4a50
                       catch() { ... } // from try @ 034a49c4 with catch @ 034a4a50
                       catch() { ... } // from try @ 034a4a48 with catch @ 034a4a50 */
              Nekki_SF2_Core_Fights_Controls_ActionButtons__add_OnButtonRelease
                        (pNVar2,pSVar1,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034a4a54 to 035a4adf has its CatchHandler @ 034a4a54
                       catch() { ... } // from try @ 034a4a54 with catch @ 034a4a54
                       catch() { ... } // from try @ 034a4c2c with catch @ 034a4a54
                       catch() { ... } // from try @ 034a4cdc with catch @ 034a4a54
                       catch() { ... } // from try @ 034a4d8c with catch @ 034a4a54
                       catch() { ... } // from try @ 034a4e34 with catch @ 034a4a54
                       catch() { ... } // from try @ 034a4ed4 with catch @ 034a4a54 */
  FUN_01bab8c8();
}


// ===== public void set_IsPunchEnabled(bool CJNHFNHJHPE)  [RVA 0x33A4D14]
// Nekki.SF2.Core.Fights.Controls.GameController$$set_IsPunchEnabled @ RVA 0x33A4D14

void Nekki_SF2_Core_Fights_Controls_GameController__set_IsPunchEnabled
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this_00;
  
  __this_00 = (__this->fields)._ActionButtons;
  (__this->fields).BKJCNEFAGMM = CJNHFNHJHPE;
  if (__this_00 != (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *)0x0) {
    Nekki_SF2_Core_Fights_Controls_ActionButtons__ShowPunch(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0)
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_IsRaidChargeEnabled(bool CJNHFNHJHPE)  [RVA 0x33A4D3C]
// Nekki.SF2.Core.Fights.Controls.GameController$$set_IsRaidChargeEnabled @ RVA 0x33A4D3C

void Nekki_SF2_Core_Fights_Controls_GameController__set_IsRaidChargeEnabled
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  Nekki_SF2_Core_Fights_Controls_ActionButtons_o *__this_00;
  
  __this_00 = (__this->fields)._ActionButtons;
  (__this->fields).MDBGNLIBANL = CJNHFNHJHPE;
  if (__this_00 != (Nekki_SF2_Core_Fights_Controls_ActionButtons_o *)0x0) {
                    /* try { // try from 034a4d54 to 035a4d8b has its CatchHandler @ 034a4ee8 */
    Nekki_SF2_Core_Fights_Controls_ActionButtons__ShowRaidCharge
              (__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

