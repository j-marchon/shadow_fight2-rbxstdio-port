// TypeDefIndex 2156
// Namespace: Nekki.SF2.GUI.Pvp
// public class PhaseBox : MonoBehaviour
// Fields:
//   private AMJPDLOCCNP _PlayerID; // 0x20
//   private GameObject _phaseList; // 0x28
//   private GameObject _phaseContainer; // 0x30
//   private LabelAlias _lockedDescription; // 0x38
//   private HintButton _TagHint; // 0x40
//   private PhaseItem[] _phases; // 0x48
//   private Coroutine CDABKLLENPE; // 0x50
//   private static bool ENKENPPFHPE; // 0x0
//   private bool NLPOEKINGJI; // 0x58
//   private bool DBNELADJPIJ; // 0x59
//   private PhaseBox.HBDMHAPFEGH EMDCCMNONEK; // 0x5C
//   private bool BIPBPGDHDKP; // 0x60
//   private bool PPOLMAACMIE; // 0x61
//   private bool NPIOIFONCFH; // 0x62
//   private float JCGIBMIOMEB; // 0x64
//   private float BFGOLBDJAMB; // 0x68
//   private bool EFLLFMNDBFO; // 0x6C

// ===== private PhaseCharacter DBKNMAJHPAN()  [RVA 0x32D7820]
// Nekki.SF2.GUI.Pvp.PhaseBox$$DBKNMAJHPAN @ RVA 0x32D7820

Nekki_SF2_GUI_Pvp_PhaseCharacter_o *
Nekki_SF2_GUI_Pvp_PhaseBox__DBKNMAJHPAN(Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_Pvp_PhaseItem_array *pNVar2;
  Nekki_SF2_GUI_Pvp_PhaseCharacter_o *pNVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
  if ((DAT_04567599 & 1) == 0) {
    auVar4 = FUN_01bab630(&Nekki_SF2_GUI_Pvp_PhaseCharacter_TypeInfo);
    DAT_04567599 = 1;
  }
  pNVar2 = (__this->fields)._phases;
  if (pNVar2 != (Nekki_SF2_GUI_Pvp_PhaseItem_array *)0x0) {
    if ((uint)pNVar2->max_length < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pNVar3 = (Nekki_SF2_GUI_Pvp_PhaseCharacter_o *)pNVar2->m_Items[2];
    if (pNVar3 != (Nekki_SF2_GUI_Pvp_PhaseCharacter_o *)0x0) {
      bVar1 = (Nekki_SF2_GUI_Pvp_PhaseCharacter_TypeInfo->_2).naturalAligment;
      if (bVar1 <= (((Nekki_SF2_GUI_Pvp_PhaseItem_c *)pNVar3->klass)->_2).naturalAligment) {
        if ((((Nekki_SF2_GUI_Pvp_PhaseItem_c *)pNVar3->klass)->_2).typeHierarchy[(ulong)bVar1 - 1]
            == (Il2CppClass *)Nekki_SF2_GUI_Pvp_PhaseCharacter_TypeInfo) {
          return pNVar3;
        }
        return (Nekki_SF2_GUI_Pvp_PhaseCharacter_o *)0x0;
      }
    }
    return (Nekki_SF2_GUI_Pvp_PhaseCharacter_o *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar4._0_8_,auVar4._8_8_);
}


// ===== public HOOAAGABMBL get_PlayerWeapon()  [RVA 0x32D78B8]
// Nekki.SF2.GUI.Pvp.PhaseBox$$get_PlayerWeapon @ RVA 0x32D78B8

HOOAAGABMBL_o *
Nekki_SF2_GUI_Pvp_PhaseBox__get_PlayerWeapon
          (Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this_00;
  HOOAAGABMBL_o *pHVar1;
  
  __this_00 = Nekki_SF2_GUI_Pvp_PhaseBox__GJANJPLLOPH(__this,method);
  if (__this_00 != (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)0x0) {
    pHVar1 = Nekki_SF2_GUI_Pvp_PhaseWeapon__get_ResultWeapon(__this_00,(MethodInfo *)0x0);
    return pHVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnControlDown(FBBNEILNOKK PMACBPAMPJA)  [RVA 0x32D7968]
// Nekki.SF2.GUI.Pvp.PhaseBox$$OnControlDown @ RVA 0x32D7968

void Nekki_SF2_GUI_Pvp_PhaseBox__OnControlDown
               (Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,int32_t PMACBPAMPJA,MethodInfo *method)

{
  Nekki_SF2_GUI_Pvp_PhaseWeapon_o *pNVar1;
  SFButton_o *__this_00;
  MethodInfo *method_00;
  
  if (PMACBPAMPJA == 0x15) {
    (__this->fields).PPOLMAACMIE = true;
    (__this->fields).JCGIBMIOMEB = (__this->fields).BFGOLBDJAMB;
    if ((__this->fields).EMDCCMNONEK == 0) {
      pNVar1 = Nekki_SF2_GUI_Pvp_PhaseBox__GJANJPLLOPH(__this,(MethodInfo *)0x15);
      if (pNVar1 == (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)0x0) goto LAB_033d7a34;
      __this_00 = (pNVar1->fields)._RightHint;
joined_r0x033d79d8:
      if (__this_00 == (SFButton_o *)0x0) goto LAB_033d7a34;
      SFButton__SetStatePressed(__this_00,(MethodInfo *)0x0);
    }
  }
  else if (PMACBPAMPJA == 0x13) {
    (__this->fields).BIPBPGDHDKP = true;
    (__this->fields).JCGIBMIOMEB = (__this->fields).BFGOLBDJAMB;
    if ((__this->fields).EMDCCMNONEK == 0) {
      pNVar1 = Nekki_SF2_GUI_Pvp_PhaseBox__GJANJPLLOPH(__this,(MethodInfo *)0x13);
      if (pNVar1 == (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)0x0) goto LAB_033d7a34;
      __this_00 = (pNVar1->fields)._LeftHint;
      goto joined_r0x033d79d8;
    }
  }
  if (((((__this->fields).BIPBPGDHDKP != false) && ((__this->fields).PPOLMAACMIE != false)) &&
      ((__this->fields).EMDCCMNONEK == 0)) && ((__this->fields).NPIOIFONCFH == false)) {
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    pNVar1 = Nekki_SF2_GUI_Pvp_PhaseBox__GJANJPLLOPH(__this,method_00);
    if (pNVar1 == (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)0x0) {
LAB_033d7a34:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_Pvp_PhaseWeapon__ResetToDefaultWeapon(pNVar1,(MethodInfo *)0x0);
    (__this->fields).NPIOIFONCFH = true;
  }
  return;
}


// ===== private IEnumerator BIBCFLMBMIG()  [RVA 0x32D7A38]
// Nekki.SF2.GUI.Pvp.PhaseBox$$BIBCFLMBMIG @ RVA 0x32D7A38

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Pvp_PhaseBox__BIBCFLMBMIG(Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456759a & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PhaseBox_FBPENINHENE_TypeInfo);
    DAT_0456759a = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Pvp_PhaseBox_FBPENINHENE_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== public void Init()  [RVA 0x32D7ACC]
// Nekki.SF2.GUI.Pvp.PhaseBox$$Init @ RVA 0x32D7ACC

void Nekki_SF2_GUI_Pvp_PhaseBox__Init(Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,MethodInfo *method)

{
  int iVar1;
  Nekki_SF2_GUI_Pvp_PhaseWeapon_o *pNVar2;
  Nekki_SF2_GUI_Pvp_PhasePerks_o *pNVar3;
  Nekki_SF2_GUI_Pvp_PhaseCharacter_o *pNVar4;
  Nekki_SF2_GUI_ResolutionImageAvatar_o *pNVar5;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  NLIDHEAMLMC_o *pNVar6;
  Nekki_SF2_GUI_Pvp_PhaseWeapon_o **ppNVar7;
  
  if ((DAT_0456759b & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PhaseBox_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
    DAT_0456759b = 1;
    method = extraout_x1;
  }
  pNVar2 = Nekki_SF2_GUI_Pvp_PhaseBox__GJANJPLLOPH(__this,method);
  if (pNVar2 != (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)0x0) {
    (*(pNVar2->klass->vtable)._4_Init.methodPtr)
              (pNVar2,(ulong)(uint)(__this->fields)._PlayerID,(pNVar2->klass->vtable)._4_Init.method
              );
    pNVar3 = Nekki_SF2_GUI_Pvp_PhaseBox__CJODABFPHPB(__this,method_00);
    if (pNVar3 != (Nekki_SF2_GUI_Pvp_PhasePerks_o *)0x0) {
      (*(pNVar3->klass->vtable)._4_Init.methodPtr)
                (pNVar3,(ulong)(uint)(__this->fields)._PlayerID,
                 (pNVar3->klass->vtable)._4_Init.method);
      pNVar3 = Nekki_SF2_GUI_Pvp_PhaseBox__CJODABFPHPB(__this,method_01);
      pNVar2 = Nekki_SF2_GUI_Pvp_PhaseBox__GJANJPLLOPH(__this,method_02);
      if (pNVar3 != (Nekki_SF2_GUI_Pvp_PhasePerks_o *)0x0) {
        ppNVar7 = &(pNVar3->fields).WeaponPhase;
        *ppNVar7 = pNVar2;
        thunk_FUN_01c20e04(ppNVar7,pNVar2);
        pNVar4 = Nekki_SF2_GUI_Pvp_PhaseBox__DBKNMAJHPAN(__this,method_03);
        if (pNVar4 != (Nekki_SF2_GUI_Pvp_PhaseCharacter_o *)0x0) {
          method_05 = (pNVar4->klass->vtable)._4_Init.method;
          (*(pNVar4->klass->vtable)._4_Init.methodPtr)
                    (pNVar4,(ulong)(uint)(__this->fields)._PlayerID);
          Nekki_SF2_GUI_Pvp_PhaseBox__set_CurrentPhase(__this,2,method_05);
          pNVar5 = Nekki_SF2_GUI_Pvp_PhaseBox__get_Avatar(__this,method_04);
          if (pNVar5 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) {
            (*(pNVar5->klass->vtable)._23_set_color.methodPtr)
                      (0x3f800000,0x3f800000,0x3f800000,0x3f800000,pNVar5,
                       (pNVar5->klass->vtable)._23_set_color.method);
            iVar1 = (__this->fields)._PlayerID;
            if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if (iVar1 == 0) {
              if (DAT_04565e5c == '\0') {
                FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
                DAT_04565e5c = '\x01';
              }
              if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pNVar6 = Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->DHDNCFLOPNH;
            }
            else {
              if (DAT_04565e5b == '\0') {
                FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
                DAT_04565e5b = '\x01';
              }
              if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pNVar6 = Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->IHDCFNPHCHM;
            }
            if (pNVar6 != (NLIDHEAMLMC_o *)0x0) {
              Nekki_SF2_GUI_Pvp_PhaseBox__set_TrackingDeviceID
                        (__this,(pNVar6->fields).OFFPEKODFPE,method_05);
              Nekki_SF2_GUI_Pvp_PhaseBox_TypeInfo->static_fields->ENKENPPFHPE = false;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JCKJFDLOGEF()  [RVA 0x32D7E18]
// Nekki.SF2.GUI.Pvp.PhaseBox$$JCKJFDLOGEF @ RVA 0x32D7E18

void Nekki_SF2_GUI_Pvp_PhaseBox__JCKJFDLOGEF
               (Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,MethodInfo *method)

{
  (__this->fields).DBNELADJPIJ = true;
  return;
}


// ===== public ResolutionImageAvatar get_Avatar()  [RVA 0x32D7DA4]
// Nekki.SF2.GUI.Pvp.PhaseBox$$get_Avatar @ RVA 0x32D7DA4

Nekki_SF2_GUI_ResolutionImageAvatar_o *
Nekki_SF2_GUI_Pvp_PhaseBox__get_Avatar(Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Pvp_PhaseCharacter_o *pNVar1;
  Nekki_SF2_GUI_Fight_DisplayModel_o *pNVar2;
  
  pNVar1 = Nekki_SF2_GUI_Pvp_PhaseBox__DBKNMAJHPAN(__this,method);
  if ((pNVar1 != (Nekki_SF2_GUI_Pvp_PhaseCharacter_o *)0x0) &&
     (pNVar2 = (pNVar1->fields)._avatar, pNVar2 != (Nekki_SF2_GUI_Fight_DisplayModel_o *)0x0)) {
    return (pNVar2->fields).avatar;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private PhaseWeapon GJANJPLLOPH()  [RVA 0x32D78D4]
// Nekki.SF2.GUI.Pvp.PhaseBox$$GJANJPLLOPH @ RVA 0x32D78D4

Nekki_SF2_GUI_Pvp_PhaseWeapon_o *
Nekki_SF2_GUI_Pvp_PhaseBox__GJANJPLLOPH(Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_Pvp_PhaseItem_array *pNVar2;
  Nekki_SF2_GUI_Pvp_PhaseWeapon_o *pNVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
  if ((DAT_0456759c & 1) == 0) {
    auVar4 = FUN_01bab630(&Nekki_SF2_GUI_Pvp_PhaseWeapon_TypeInfo);
    DAT_0456759c = 1;
  }
  pNVar2 = (__this->fields)._phases;
  if (pNVar2 != (Nekki_SF2_GUI_Pvp_PhaseItem_array *)0x0) {
    if ((int)pNVar2->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pNVar3 = (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)pNVar2->m_Items[0];
    if (pNVar3 != (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)0x0) {
      bVar1 = (Nekki_SF2_GUI_Pvp_PhaseWeapon_TypeInfo->_2).naturalAligment;
      if (bVar1 <= (pNVar3->klass->_2).naturalAligment) {
        if ((pNVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
            (Il2CppClass *)Nekki_SF2_GUI_Pvp_PhaseWeapon_TypeInfo) {
          return pNVar3;
        }
        return (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)0x0;
      }
    }
    return (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar4._0_8_,auVar4._8_8_);
}


// ===== private void Update()  [RVA 0x32D7E24]
// Nekki.SF2.GUI.Pvp.PhaseBox$$Update @ RVA 0x32D7E24

void Nekki_SF2_GUI_Pvp_PhaseBox__Update(Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Pvp_PhaseWeapon_o *pNVar1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  float fVar2;
  float fVar3;
  
  if (((__this->fields).EMDCCMNONEK == 0) && ((__this->fields).NPIOIFONCFH == false)) {
    fVar3 = (__this->fields).JCGIBMIOMEB;
    if (0.0 < fVar3) {
      fVar2 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar3 = fVar3 - fVar2;
      (__this->fields).JCGIBMIOMEB = fVar3;
      if (fVar3 <= 0.0) {
        method_01 = method_00;
        if ((__this->fields).BIPBPGDHDKP != false) {
          pNVar1 = Nekki_SF2_GUI_Pvp_PhaseBox__GJANJPLLOPH(__this,method_00);
          if (pNVar1 == (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)0x0) goto LAB_033d7eec;
          Nekki_SF2_GUI_Pvp_PhaseWeapon__Scroll(pNVar1,-1,(MethodInfo *)0x0);
          (__this->fields).EFLLFMNDBFO = true;
          (__this->fields).JCGIBMIOMEB = (__this->fields).BFGOLBDJAMB;
          method_01 = extraout_x1;
        }
        if ((__this->fields).PPOLMAACMIE != false) {
          pNVar1 = Nekki_SF2_GUI_Pvp_PhaseBox__GJANJPLLOPH(__this,method_01);
          if (pNVar1 == (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)0x0) {
LAB_033d7eec:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          Nekki_SF2_GUI_Pvp_PhaseWeapon__Scroll(pNVar1,1,(MethodInfo *)0x0);
          (__this->fields).EFLLFMNDBFO = true;
          (__this->fields).JCGIBMIOMEB = (__this->fields).BFGOLBDJAMB;
        }
      }
    }
    if (((__this->fields).BIPBPGDHDKP == false) && ((__this->fields).PPOLMAACMIE == false)) {
      (__this->fields).JCGIBMIOMEB = 0.0;
    }
  }
  return;
}


// ===== public void set_CurrentPhase(PhaseBox.HBDMHAPFEGH CJNHFNHJHPE)  [RVA 0x32D7D24]
// Nekki.SF2.GUI.Pvp.PhaseBox$$set_CurrentPhase @ RVA 0x32D7D24

void Nekki_SF2_GUI_Pvp_PhaseBox__set_CurrentPhase
               (Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  uint uVar1;
  Nekki_SF2_GUI_Pvp_PhaseItem_o *pNVar2;
  Nekki_SF2_GUI_Pvp_PhaseItem_array *pNVar3;
  
  pNVar3 = (__this->fields)._phases;
  if (pNVar3 != (Nekki_SF2_GUI_Pvp_PhaseItem_array *)0x0) {
    uVar1 = (__this->fields).EMDCCMNONEK;
    if ((uint)pNVar3->max_length <= uVar1) {
LAB_033d7da0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pNVar2 = pNVar3->m_Items[(int)uVar1];
    if (pNVar2 != (Nekki_SF2_GUI_Pvp_PhaseItem_o *)0x0) {
      (*(pNVar2->klass->vtable)._5_Hide.methodPtr)(pNVar2,(pNVar2->klass->vtable)._5_Hide.method);
      pNVar3 = (__this->fields)._phases;
      (__this->fields).EMDCCMNONEK = CJNHFNHJHPE;
      if (pNVar3 != (Nekki_SF2_GUI_Pvp_PhaseItem_array *)0x0) {
        if ((uint)pNVar3->max_length <= (uint)CJNHFNHJHPE) goto LAB_033d7da0;
        pNVar2 = pNVar3->m_Items[CJNHFNHJHPE];
        if (pNVar2 != (Nekki_SF2_GUI_Pvp_PhaseItem_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033d7d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pNVar2->klass->vtable)._6_Show.methodPtr)
                    (pNVar2,(pNVar2->klass->vtable)._6_Show.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public PhaseBox.HBDMHAPFEGH get_CurrentPhase()  [RVA 0x32D7EF0]
// Nekki.SF2.GUI.Pvp.PhaseBox$$get_CurrentPhase @ RVA 0x32D7EF0

int32_t Nekki_SF2_GUI_Pvp_PhaseBox__get_CurrentPhase
                  (Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,MethodInfo *method)

{
  return (__this->fields).EMDCCMNONEK;
}


// ===== private void DKKNHKPHJKJ()  [RVA 0x32D7EF8]
// Nekki.SF2.GUI.Pvp.PhaseBox$$DKKNHKPHJKJ @ RVA 0x32D7EF8

void Nekki_SF2_GUI_Pvp_PhaseBox__DKKNHKPHJKJ
               (Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,MethodInfo *method)

{
  (__this->fields).DBNELADJPIJ = false;
  return;
}


// ===== public void ConfirmItem(bool CJNHFNHJHPE)  [RVA 0x32D7F00]
// Nekki.SF2.GUI.Pvp.PhaseBox$$ConfirmItem @ RVA 0x32D7F00

void Nekki_SF2_GUI_Pvp_PhaseBox__ConfirmItem
               (Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  undefined4 uVar1;
  Nekki_SF2_GUI_ResolutionImageAvatar_o *target;
  Nekki_SF2_GUI_Pvp_PhaseCharacter_o *pNVar2;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_Color_o endValue;
  
  (__this->fields).NLPOEKINGJI = CJNHFNHJHPE;
  uVar1 = 0x3f000000;
  if (!CJNHFNHJHPE) {
    uVar1 = 0x3f800000;
  }
  target = Nekki_SF2_GUI_Pvp_PhaseBox__get_Avatar(__this,(MethodInfo *)(ulong)CJNHFNHJHPE);
  endValue.fields.g = (float)uVar1;
  endValue.fields.r = (float)uVar1;
  endValue.fields.a = 1.0;
  endValue.fields.b = (float)uVar1;
  DG_Tweening_DOTweenModuleUI__DOColor
            ((UnityEngine_UI_Image_o *)target,endValue,0.5,(MethodInfo *)0x0);
  pNVar2 = Nekki_SF2_GUI_Pvp_PhaseBox__DBKNMAJHPAN(__this,method_00);
  if ((pNVar2 != (Nekki_SF2_GUI_Pvp_PhaseCharacter_o *)0x0) &&
     (__this_00 = (pNVar2->fields)._checkmark, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Pvp_PhaseBox__HidePhaseList(__this,method_01);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnControlUp(FBBNEILNOKK PMACBPAMPJA)  [RVA 0x32D8060]
// Nekki.SF2.GUI.Pvp.PhaseBox$$OnControlUp @ RVA 0x32D8060

void Nekki_SF2_GUI_Pvp_PhaseBox__OnControlUp
               (Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,int32_t PMACBPAMPJA,MethodInfo *method)

{
  Nekki_SF2_GUI_Pvp_PhaseWeapon_o *pNVar1;
  SFButton_o *pSVar2;
  int32_t DPJIDNBJIBG;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (PMACBPAMPJA == 0x15) {
    (__this->fields).PPOLMAACMIE = false;
    pNVar1 = Nekki_SF2_GUI_Pvp_PhaseBox__GJANJPLLOPH(__this,(MethodInfo *)0x15);
    if ((pNVar1 == (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)0x0) ||
       (pSVar2 = (pNVar1->fields)._RightHint, pSVar2 == (SFButton_o *)0x0)) {
LAB_033d8134:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    SFButton__SetStateNormal(pSVar2,(MethodInfo *)0x0);
    if (((__this->fields).EMDCCMNONEK != 0) ||
       (((__this->fields).NPIOIFONCFH != false || ((__this->fields).EFLLFMNDBFO != false))))
    goto LAB_033d8114;
    pNVar1 = Nekki_SF2_GUI_Pvp_PhaseBox__GJANJPLLOPH(__this,method_01);
    if (pNVar1 == (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)0x0) goto LAB_033d8134;
    DPJIDNBJIBG = 1;
  }
  else {
    if (PMACBPAMPJA != 0x13) goto LAB_033d8114;
    (__this->fields).BIPBPGDHDKP = false;
    pNVar1 = Nekki_SF2_GUI_Pvp_PhaseBox__GJANJPLLOPH(__this,(MethodInfo *)0x13);
    if ((pNVar1 == (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)0x0) ||
       (pSVar2 = (pNVar1->fields)._LeftHint, pSVar2 == (SFButton_o *)0x0)) goto LAB_033d8134;
    SFButton__SetStateNormal(pSVar2,(MethodInfo *)0x0);
    if (((__this->fields).EMDCCMNONEK != 0) ||
       (((__this->fields).NPIOIFONCFH != false || ((__this->fields).EFLLFMNDBFO != false))))
    goto LAB_033d8114;
    pNVar1 = Nekki_SF2_GUI_Pvp_PhaseBox__GJANJPLLOPH(__this,method_00);
    if (pNVar1 == (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)0x0) goto LAB_033d8134;
    DPJIDNBJIBG = -1;
  }
  Nekki_SF2_GUI_Pvp_PhaseWeapon__Scroll(pNVar1,DPJIDNBJIBG,(MethodInfo *)0x0);
LAB_033d8114:
  if (((__this->fields).BIPBPGDHDKP == false) && ((__this->fields).PPOLMAACMIE == false)) {
    (__this->fields).EFLLFMNDBFO = false;
    (__this->fields).NPIOIFONCFH = false;
  }
  return;
}


// ===== public PhaseBox.HBDMHAPFEGH NextPhase()  [RVA 0x32D8138]
// Nekki.SF2.GUI.Pvp.PhaseBox$$NextPhase @ RVA 0x32D8138

int32_t Nekki_SF2_GUI_Pvp_PhaseBox__NextPhase
                  (Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  Il2CppType *handle;
  System_Type_o *enumType;
  System_String_array *pSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  int iVar4;
  
  if ((DAT_0456759d & 1) == 0) {
    FUN_01bab630(&System_Enum_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PhaseBox_HBDMHAPFEGH_var);
    FUN_01bab630(&System_Type_TypeInfo);
    DAT_0456759d = 1;
    method = extraout_x1;
  }
  handle = Nekki_SF2_GUI_Pvp_PhaseBox_HBDMHAPFEGH_var;
  iVar4 = (__this->fields).EMDCCMNONEK;
  if ((__this->fields).NLPOEKINGJI == false) {
    if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Type_TypeInfo,method);
    }
    enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    if ((System_Enum_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Enum_TypeInfo);
    }
    pSVar3 = System_Enum__GetNames(enumType,(MethodInfo *)0x0);
    if (pSVar3 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = (int)pSVar3->max_length;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = (iVar4 + 1) / iVar1;
    }
    Nekki_SF2_GUI_Pvp_PhaseBox__set_CurrentPhase(__this,(iVar4 + 1) - iVar2 * iVar1,in_x2);
    EDFDANKEBGF__KHJIBEJGONJ(0.85,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Pvp_PhaseBox__ShowPhaseList(__this,method_00);
    iVar4 = (__this->fields).EMDCCMNONEK;
  }
  return iVar4;
}


// ===== public void HidePhaseList()  [RVA 0x32D7F80]
// Nekki.SF2.GUI.Pvp.PhaseBox$$HidePhaseList @ RVA 0x32D7F80

void Nekki_SF2_GUI_Pvp_PhaseBox__HidePhaseList
               (Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *target;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_TweenCallback_o *action;
  UnityEngine_Coroutine_o *routine;
  
  if ((DAT_0456759e & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PhaseBox_DKKNHKPHJKJ__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    DAT_0456759e = 1;
  }
  routine = (__this->fields).CDABKLLENPE;
  if (routine != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields)._phaseList;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    target = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    t = DG_Tweening_ShortcutExtensions__DOLocalMoveY(target,400.0,0.5,false,(MethodInfo *)0x0);
    action = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
    DG_Tweening_TweenCallback___ctor();
    DG_Tweening_TweenSettingsExtensions__OnComplete<object>
              ((Il2CppObject *)t,action,
               Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
              );
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnPhaseTagClick()  [RVA 0x32D82F4]
// Nekki.SF2.GUI.Pvp.PhaseBox$$OnPhaseTagClick @ RVA 0x32D82F4

void Nekki_SF2_GUI_Pvp_PhaseBox__OnPhaseTagClick
               (Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Il2CppType *handle;
  System_Type_o *enumType;
  System_String_array *pSVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  
  if ((DAT_0456759d & 1) == 0) {
    FUN_01bab630(&System_Enum_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PhaseBox_HBDMHAPFEGH_var);
    FUN_01bab630(&System_Type_TypeInfo);
    DAT_0456759d = 1;
    method = extraout_x1;
  }
  handle = Nekki_SF2_GUI_Pvp_PhaseBox_HBDMHAPFEGH_var;
  iVar1 = (__this->fields).EMDCCMNONEK;
  if ((__this->fields).NLPOEKINGJI == false) {
    if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Type_TypeInfo,method);
    }
    enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    if ((System_Enum_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Enum_TypeInfo);
    }
    pSVar4 = System_Enum__GetNames(enumType,(MethodInfo *)0x0);
    if (pSVar4 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar2 = (int)pSVar4->max_length;
    iVar1 = iVar1 + 1;
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = iVar1 / iVar2;
    }
    Nekki_SF2_GUI_Pvp_PhaseBox__set_CurrentPhase(__this,iVar1 - iVar3 * iVar2,in_x2);
    EDFDANKEBGF__KHJIBEJGONJ(0.85,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Pvp_PhaseBox__ShowPhaseList(__this,method_00);
  }
  return;
}


// ===== private PhasePerks CJODABFPHPB()  [RVA 0x32D7C8C]
// Nekki.SF2.GUI.Pvp.PhaseBox$$CJODABFPHPB @ RVA 0x32D7C8C

Nekki_SF2_GUI_Pvp_PhasePerks_o *
Nekki_SF2_GUI_Pvp_PhaseBox__CJODABFPHPB(Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_Pvp_PhaseItem_array *pNVar2;
  Nekki_SF2_GUI_Pvp_PhasePerks_o *pNVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
  if ((DAT_0456759f & 1) == 0) {
    auVar4 = FUN_01bab630(&Nekki_SF2_GUI_Pvp_PhasePerks_TypeInfo);
    DAT_0456759f = 1;
  }
  pNVar2 = (__this->fields)._phases;
  if (pNVar2 != (Nekki_SF2_GUI_Pvp_PhaseItem_array *)0x0) {
    if ((uint)pNVar2->max_length < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    pNVar3 = (Nekki_SF2_GUI_Pvp_PhasePerks_o *)pNVar2->m_Items[1];
    if (pNVar3 != (Nekki_SF2_GUI_Pvp_PhasePerks_o *)0x0) {
      bVar1 = (Nekki_SF2_GUI_Pvp_PhasePerks_TypeInfo->_2).naturalAligment;
      if (bVar1 <= (((Nekki_SF2_GUI_Pvp_PhaseItem_c *)pNVar3->klass)->_2).naturalAligment) {
        if ((((Nekki_SF2_GUI_Pvp_PhaseItem_c *)pNVar3->klass)->_2).typeHierarchy[(ulong)bVar1 - 1]
            == (Il2CppClass *)Nekki_SF2_GUI_Pvp_PhasePerks_TypeInfo) {
          return pNVar3;
        }
        return (Nekki_SF2_GUI_Pvp_PhasePerks_o *)0x0;
      }
    }
    return (Nekki_SF2_GUI_Pvp_PhasePerks_o *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar4._0_8_,auVar4._8_8_);
}


// ===== public void .ctor()  [RVA 0x32D82F8]
// Nekki.SF2.GUI.Pvp.PhaseBox$$.ctor @ RVA 0x32D82F8

void Nekki_SF2_GUI_Pvp_PhaseBox___ctor(Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,MethodInfo *method)

{
  (__this->fields).BFGOLBDJAMB = 0.2;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public HintButton get_TagHint()  [RVA 0x32D830C]
// Nekki.SF2.GUI.Pvp.PhaseBox$$get_TagHint @ RVA 0x32D830C

HintButton_o *
Nekki_SF2_GUI_Pvp_PhaseBox__get_TagHint(Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,MethodInfo *method)

{
  return (__this->fields)._TagHint;
}


// ===== public void ShowPhase(int EEMJJBMLJFO)  [RVA 0x32D8314]
// Nekki.SF2.GUI.Pvp.PhaseBox$$ShowPhase @ RVA 0x32D8314

void Nekki_SF2_GUI_Pvp_PhaseBox__ShowPhase
               (Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,int32_t EEMJJBMLJFO,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if ((__this->fields).NLPOEKINGJI != false) {
    return;
  }
  Nekki_SF2_GUI_Pvp_PhaseBox__set_CurrentPhase(__this,EEMJJBMLJFO,method);
  EDFDANKEBGF__KHJIBEJGONJ(0.85,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Pvp_PhaseBox__ShowPhaseList(__this,method_00);
  return;
}


// ===== public void Free()  [RVA 0x32D834C]
// Nekki.SF2.GUI.Pvp.PhaseBox$$Free @ RVA 0x32D834C

void Nekki_SF2_GUI_Pvp_PhaseBox__Free(Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Pvp_PhaseWeapon_o *pNVar1;
  Nekki_SF2_GUI_Pvp_PhasePerks_o *pNVar2;
  Nekki_SF2_GUI_Pvp_PhaseCharacter_o *pNVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
                    /* try { // try from 033d834c to 034d83db has its CatchHandler @ 033d834c
                       catch() { ... } // from try @ 033d834c with catch @ 033d834c
                       catch() { ... } // from try @ 033d83fc with catch @ 033d834c
                       catch() { ... } // from try @ 033d8420 with catch @ 033d834c
                       catch() { ... } // from try @ 033d8448 with catch @ 033d834c
                       catch() { ... } // from try @ 033d8488 with catch @ 033d834c */
  pNVar1 = Nekki_SF2_GUI_Pvp_PhaseBox__GJANJPLLOPH(__this,method);
  if (pNVar1 != (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)0x0) {
    (*(pNVar1->klass->vtable)._7_Free.methodPtr)(pNVar1,(pNVar1->klass->vtable)._7_Free.method);
    pNVar2 = Nekki_SF2_GUI_Pvp_PhaseBox__CJODABFPHPB(__this,method_00);
    if (pNVar2 != (Nekki_SF2_GUI_Pvp_PhasePerks_o *)0x0) {
      (*(pNVar2->klass->vtable)._7_Free.methodPtr)(pNVar2,(pNVar2->klass->vtable)._7_Free.method);
      pNVar3 = Nekki_SF2_GUI_Pvp_PhaseBox__DBKNMAJHPAN(__this,method_01);
      if (pNVar3 != (Nekki_SF2_GUI_Pvp_PhaseCharacter_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033d8398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pNVar3->klass->vtable)._7_Free.methodPtr)(pNVar3,(pNVar3->klass->vtable)._7_Free.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int get_TrackingDeviceID()  [RVA 0x32D83A0]
// Nekki.SF2.GUI.Pvp.PhaseBox$$get_TrackingDeviceID @ RVA 0x32D83A0

int32_t Nekki_SF2_GUI_Pvp_PhaseBox__get_TrackingDeviceID
                  (Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Pvp_PhaseWeapon_o *pNVar1;
  
  pNVar1 = Nekki_SF2_GUI_Pvp_PhaseBox__GJANJPLLOPH(__this,method);
  if (pNVar1 != (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)0x0) {
    return (pNVar1->fields).AFEOEPFDNLI;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_TrackingDeviceID(int CJNHFNHJHPE)  [RVA 0x32D7DC8]
// Nekki.SF2.GUI.Pvp.PhaseBox$$set_TrackingDeviceID @ RVA 0x32D7DC8

void Nekki_SF2_GUI_Pvp_PhaseBox__set_TrackingDeviceID
               (Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this_00;
  HintButton_o *__this_01;
  
  __this_00 = Nekki_SF2_GUI_Pvp_PhaseBox__GJANJPLLOPH(__this,(MethodInfo *)(ulong)(uint)CJNHFNHJHPE)
  ;
  __this_01 = (__this->fields)._TagHint;
  if ((__this_01 != (HintButton_o *)0x0) &&
     (HintButton__set_TrackingDeviceID(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0),
     __this_00 != (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *)0x0)) {
    Nekki_SF2_GUI_Pvp_PhaseWeapon__set_TrackingDeviceID(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ShowPhaseList()  [RVA 0x32D8230]
// Nekki.SF2.GUI.Pvp.PhaseBox$$ShowPhaseList @ RVA 0x32D8230

void Nekki_SF2_GUI_Pvp_PhaseBox__ShowPhaseList
               (Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Coroutine_o *pUVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_Coroutine_o **ppUVar2;
  
  if ((DAT_045675a0 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PhaseBox_TypeInfo);
    DAT_045675a0 = 1;
  }
  if ((__this->fields).NLPOEKINGJI != false) {
    return;
  }
  if (Nekki_SF2_GUI_Pvp_PhaseBox_TypeInfo->static_fields->ENKENPPFHPE == false) {
    Nekki_SF2_GUI_Pvp_PhaseBox_TypeInfo->static_fields->ENKENPPFHPE = true;
    __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (__this_00 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(__this_00,0x40,(MethodInfo *)0x0);
  }
  ppUVar2 = &(__this->fields).CDABKLLENPE;
  pUVar1 = *ppUVar2;
  method_00 = (MethodInfo *)0x0;
  if (pUVar1 != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,pUVar1,(MethodInfo *)0x0);
    method_00 = extraout_x1;
  }
  routine = Nekki_SF2_GUI_Pvp_PhaseBox__BIBCFLMBMIG(__this,method_00);
  pUVar1 = UnityEngine_MonoBehaviour__StartCoroutine
                     ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
  (__this->fields).CDABKLLENPE = pUVar1;
  thunk_FUN_01c20e04(ppUVar2,pUVar1);
  return;
}


// ===== public void ChangeCharacter(BNAIBAODKAK CJDCMKEBBNK)  [RVA 0x32D83BC]
// Nekki.SF2.GUI.Pvp.PhaseBox$$ChangeCharacter @ RVA 0x32D83BC

void Nekki_SF2_GUI_Pvp_PhaseBox__ChangeCharacter
               (Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,BNAIBAODKAK_o *CJDCMKEBBNK,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  Nekki_SF2_GUI_Pvp_PhaseItem_o *pNVar4;
  Nekki_SF2_GUI_Pvp_PhaseItem_array *pNVar5;
  uint uVar6;
  UnityEngine_GameObject_o *pUVar7;
  
  if (CJDCMKEBBNK != (BNAIBAODKAK_o *)0x0) {
    pUVar7 = (__this->fields)._phaseContainer;
                    /* try { // try from 033d83dc to 034d83e3 has its CatchHandler @ 033d842c */
    bVar2 = BNAIBAODKAK__AAAMBLLDPHJ(CJDCMKEBBNK,(MethodInfo *)0x0);
    if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar7,bVar2,(MethodInfo *)0x0);
      pNVar3 = (__this->fields)._lockedDescription;
                    /* try { // try from 033d83f8 to 034d83fb has its CatchHandler @ 033d8428 */
      if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* try { // try from 033d83fc to 034d841b has its CatchHandler @ 033d834c */
        pUVar7 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
        bVar2 = BNAIBAODKAK__AAAMBLLDPHJ(CJDCMKEBBNK,(MethodInfo *)0x0);
        if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                    /* try { // try from 033d841c to 034d841f has its CatchHandler @ 033d8424 */
                    /* try { // try from 033d8420 to 034d8443 has its CatchHandler @ 033d834c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033d841c with catch @ 033d8424
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033d83f8 with catch @ 033d8428
                        */
          UnityEngine_GameObject__SetActive(pUVar7,(bool)(~bVar2 & 1),(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033d83dc with catch @ 033d842c
                        */
          pNVar3 = (__this->fields)._lockedDescription;
          if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            Nekki_SF2_GUI_LabelAlias__set_Alias
                      (pNVar3,(CJDCMKEBBNK->fields).FNFCJDKHLKK,(MethodInfo *)0x0);
            pNVar5 = (__this->fields)._phases;
                    /* try { // try from 033d8444 to 034d8447 has its CatchHandler @ 033d8470 */
            if (pNVar5 != (Nekki_SF2_GUI_Pvp_PhaseItem_array *)0x0) {
                    /* try { // try from 033d8448 to 034d847f has its CatchHandler @ 033d834c */
              uVar1 = (uint)pNVar5->max_length;
              if (0 < (int)uVar1) {
                uVar6 = 0;
                do {
                  if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033d8480 with catch @ 033d849c
                       catch(type#2 @ 00000000) { ... } // from try @ 033d8494 with catch @ 033d849c
                        */
                    FUN_01bab8d0();
                  }
                  pNVar4 = pNVar5->m_Items[(int)uVar6];
                  if (pNVar4 == (Nekki_SF2_GUI_Pvp_PhaseItem_o *)0x0) goto LAB_033d8498;
                    /* catch() { ... } // from try @ 033d8444 with catch @ 033d8470 */
                  (*(pNVar4->klass->vtable)._8_ChangeCharacter.methodPtr)
                            (pNVar4,CJDCMKEBBNK,(pNVar4->klass->vtable)._8_ChangeCharacter.method);
                  uVar1 = (uint)pNVar5->max_length;
                    /* try { // try from 033d8480 to 034d8487 has its CatchHandler @ 033d849c */
                  uVar6 = uVar6 + 1;
                    /* try { // try from 033d8488 to 034d8493 has its CatchHandler @ 033d834c */
                } while ((int)uVar6 < (int)uVar1);
              }
                    /* try { // try from 033d8494 to 034d849b has its CatchHandler @ 033d849c */
              return;
            }
          }
        }
      }
    }
  }
LAB_033d8498:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

