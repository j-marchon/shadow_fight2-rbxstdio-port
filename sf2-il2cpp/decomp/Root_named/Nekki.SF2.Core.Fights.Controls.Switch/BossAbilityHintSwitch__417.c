// TypeDefIndex 417
// Namespace: Nekki.SF2.Core.Fights.Controls.Switch
// public class BossAbilityHintSwitch : MonoBehaviour
// Fields:
//   private ResolutionImage _HintImage; // 0x20
//   private KKCLOOGGILP _ModelTeam; // 0x28
//   private int AFEOEPFDNLI; // 0x2C

// ===== public ResolutionImage get_HintImage()  [RVA 0x3487984]
// Nekki.SF2.Core.Fights.Controls.Switch.BossAbilityHintSwitch$$get_HintImage @ RVA 0x3487984

Nekki_SF2_GUI_ResolutionImage_o *
Nekki_SF2_Core_Fights_Controls_Switch_BossAbilityHintSwitch__get_HintImage
          (Nekki_SF2_Core_Fights_Controls_Switch_BossAbilityHintSwitch_o *__this,MethodInfo *method)

{
  return (__this->fields)._HintImage;
}


// ===== private void NNCDBOLMLHK()  [RVA 0x348798C]
// Nekki.SF2.Core.Fights.Controls.Switch.BossAbilityHintSwitch$$NNCDBOLMLHK @ RVA 0x348798C

void Nekki_SF2_Core_Fights_Controls_Switch_BossAbilityHintSwitch__NNCDBOLMLHK
               (Nekki_SF2_Core_Fights_Controls_Switch_BossAbilityHintSwitch_o *__this,
               MethodInfo *method)

{
  int32_t BMPJIDHGCBN;
  MGNDHCBAPEN_string__ODLJFAIHELG__o *pMVar1;
  MethodInfo *extraout_x1;
  System_String_o *in_x2;
  MethodInfo *in_x4;
  
  if ((DAT_045683bf & 1) == 0) {
    FUN_01bab630(&HintSchemeUtility_TypeInfo);
    DAT_045683bf = 1;
    method = extraout_x1;
  }
  BMPJIDHGCBN = (__this->fields).AFEOEPFDNLI;
  if ((HintSchemeUtility_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HintSchemeUtility_TypeInfo,method);
  }
  pMVar1 = HintSchemeUtility__ABOLJGNNGMC(BMPJIDHGCBN,(MethodInfo *)0x0);
  if (pMVar1 != (MGNDHCBAPEN_string__ODLJFAIHELG__o *)0x0) {
    Nekki_SF2_Core_Fights_Controls_Switch_BossAbilityHintSwitch__JCDGMAEDFIF
              (__this,(__this->fields).AFEOEPFDNLI,in_x2,(pMVar1->fields).DOKHHBGJICA,in_x4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JCDGMAEDFIF(int BMPJIDHGCBN, string LOAHEPDBFAO, ODLJFAIHELG CGLFKKMBHCN)  [RVA 0x3487A00]
// Nekki.SF2.Core.Fights.Controls.Switch.BossAbilityHintSwitch$$JCDGMAEDFIF @ RVA 0x3487A00

void Nekki_SF2_Core_Fights_Controls_Switch_BossAbilityHintSwitch__JCDGMAEDFIF
               (Nekki_SF2_Core_Fights_Controls_Switch_BossAbilityHintSwitch_o *__this,
               int32_t BMPJIDHGCBN,System_String_o *LOAHEPDBFAO,int32_t CGLFKKMBHCN,
               MethodInfo *method)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  
  if ((DAT_045683c0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12560/*"SwitchControls.SL+SR"*/);
    FUN_01bab630(&StringLiteral_12563/*"SwitchControls.ZL+ZR"*/);
    DAT_045683c0 = 1;
  }
  if (((CGLFKKMBHCN != 0x67) && (iVar2 = (__this->fields).AFEOEPFDNLI, iVar2 != -1)) &&
     (iVar2 == BMPJIDHGCBN)) {
    __this_00 = (__this->fields)._HintImage;
    bVar3 = IEPJHKEBFEB__MMMKDKHNGLI(CGLFKKMBHCN,(MethodInfo *)0x0);
    if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      puVar1 = &StringLiteral_12560/*"SwitchControls.SL+SR"*/;
      if (!bVar3) {
        puVar1 = &StringLiteral_12563/*"SwitchControls.ZL+ZR"*/;
      }
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                (__this_00,(System_String_o *)*puVar1,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void OnDestroy()  [RVA 0x3487ABC]
// Nekki.SF2.Core.Fights.Controls.Switch.BossAbilityHintSwitch$$OnDestroy @ RVA 0x3487ABC

void Nekki_SF2_Core_Fights_Controls_Switch_BossAbilityHintSwitch__OnDestroy
               (Nekki_SF2_Core_Fights_Controls_Switch_BossAbilityHintSwitch_o *__this,
               MethodInfo *method)

{
  System_Action_int__string__ODLJFAIHELG__o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  
  if ((DAT_045683c1 & 1) == 0) {
    FUN_01bab630(&System_Action<int,_string,_ODLJFAIHELG>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_Controls_Switch_BossAbilityHintSwitch_JCDGMAEDFIF__);
    FUN_01bab630(&JLEKKANADII_TypeInfo);
    DAT_045683c1 = 1;
    method = extraout_x1;
  }
  CJNHFNHJHPE = (System_Action_int__string__ODLJFAIHELG__o *)
                thunk_FUN_01bda818(System_Action<int,_string,_ODLJFAIHELG>_TypeInfo,method);
  System_Action<int,_object,_Int32Enum>___ctor();
  if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  JLEKKANADII__KJHIBNMCKKG(CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}


// ===== private void Awake()  [RVA 0x3487B60]
// Nekki.SF2.Core.Fights.Controls.Switch.BossAbilityHintSwitch$$Awake @ RVA 0x3487B60

void Nekki_SF2_Core_Fights_Controls_Switch_BossAbilityHintSwitch__Awake
               (Nekki_SF2_Core_Fights_Controls_Switch_BossAbilityHintSwitch_o *__this,
               MethodInfo *method)

{
  int32_t PCLEALHGACC;
  NLIDHEAMLMC_o *pNVar1;
  System_Action_int__string__ODLJFAIHELG__o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_045683c2 & 1) == 0) {
    FUN_01bab630(&System_Action<int,_string,_ODLJFAIHELG>_TypeInfo);
    FUN_01bab630(&BGFNOPDHEOM_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_Core_Fights_Controls_Switch_BossAbilityHintSwitch_JCDGMAEDFIF__);
    FUN_01bab630(&JLEKKANADII_TypeInfo);
    DAT_045683c2 = 1;
    method = extraout_x1;
  }
  PCLEALHGACC = (__this->fields)._ModelTeam;
  if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BGFNOPDHEOM_TypeInfo,method);
  }
  pNVar1 = BGFNOPDHEOM__PFOBJKIPLCK(PCLEALHGACC,(MethodInfo *)0x0);
  if (pNVar1 != (NLIDHEAMLMC_o *)0x0) {
    (__this->fields).AFEOEPFDNLI = (pNVar1->fields).OFFPEKODFPE;
  }
  CJNHFNHJHPE = (System_Action_int__string__ODLJFAIHELG__o *)
                thunk_FUN_01bda818(System_Action<int,_string,_ODLJFAIHELG>_TypeInfo);
  System_Action<int,_object,_Int32Enum>___ctor();
  if ((JLEKKANADII_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  JLEKKANADII__HFKKKKBAMGE(CJNHFNHJHPE,(MethodInfo *)0x0);
  Nekki_SF2_Core_Fights_Controls_Switch_BossAbilityHintSwitch__NNCDBOLMLHK(__this,method_00);
  return;
}


// ===== public void .ctor()  [RVA 0x3487C4C]
// Nekki.SF2.Core.Fights.Controls.Switch.BossAbilityHintSwitch$$.ctor @ RVA 0x3487C4C

void Nekki_SF2_Core_Fights_Controls_Switch_BossAbilityHintSwitch___ctor
               (Nekki_SF2_Core_Fights_Controls_Switch_BossAbilityHintSwitch_o *__this,
               MethodInfo *method)

{
  (__this->fields).AFEOEPFDNLI = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

