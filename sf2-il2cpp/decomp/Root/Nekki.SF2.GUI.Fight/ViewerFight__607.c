// TypeDefIndex 607
// Namespace: Nekki.SF2.GUI.Fight
// public class ViewerFight : SFMonoBehaviour<object>
// Fields:
//   private GameObject _pointsTablePrefab; // 0x28
//   private Button btnPause; // 0x30
//   private LabelAlias roundTimer; // 0x38
//   private LabelAlias _damageLabel; // 0x40
//   private float damageLabelStartY; // 0x48
//   private float damageLabelEndY; // 0x4C
//   private float damageLabelMoveDuration; // 0x50
//   private ScreenModel leftModel; // 0x58
//   private ScreenModel rightModel; // 0x60
//   private GOJLGHMMDBO <CDKAFMECMHK>k__BackingField; // 0x68
//   private GOJLGHMMDBO <PHBDBOBEDOK>k__BackingField; // 0x70
//   private JIMKCICMMIL <JHNEOBOKOJF>k__BackingField; // 0x78
//   private bool <BBIBLNIKJMG>k__BackingField; // 0x80
//   private bool <NNPPLGMLHEK>k__BackingField; // 0x81
//   private PointsTable HLOILANGFLF; // 0x88
//   private ObscuredInt GJOBKIBMLHC; // 0x90
//   private ObscuredInt MOBINBAJICJ; // 0xA0
//   private int KBFHMLONBPA; // 0xB0
//   private Sequence MJPPAGLCLJD; // 0xB8
//   private Vector2 BPMGLLAICKD; // 0xC0
//   private Vector2 OEOFIEFPAFH; // 0xC8

// ===== public ObscuredInt get_TimeSecond()  [RVA 0x35BDCF4]
// Nekki.SF2.GUI.Fight.ViewerFight$$get_TimeSecond @ RVA 0x35BDCF4

CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o
Nekki_SF2_GUI_Fight_ViewerFight__get_TimeSecond
          (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  return (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)(__this->fields).MOBINBAJICJ.fields;
}


// ===== public void .ctor()  [RVA 0x35BDD00]
// Nekki.SF2.GUI.Fight.ViewerFight$$.ctor @ RVA 0x35BDD00

void Nekki_SF2_GUI_Fight_ViewerFight___ctor
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar1;
  
  if ((DAT_04568ef6 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>__ctor__);
    DAT_04568ef6 = 1;
  }
                    /* try { // try from 036bdd3c to 037bdd43 has its CatchHandler @ 036bddbc */
                    /* try { // try from 036bdd44 to 037bddaf has its CatchHandler @ 036bdc80 */
  (__this->fields).damageLabelStartY = 100.0;
  (__this->fields).damageLabelEndY = 450.0;
  (__this->fields).damageLabelMoveDuration = 3.0;
  CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
  (__this->fields).GJOBKIBMLHC.fields = CVar1;
  CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
  (__this->fields).MOBINBAJICJ.fields = CVar1;
  (__this->fields).KBFHMLONBPA = -1;
  (__this->fields).OEOFIEFPAFH.fields = (UnityEngine_Vector2_Fields)0x44110000442f0000;
  (__this->fields).BPMGLLAICKD.fields = (UnityEngine_Vector2_Fields)0x44110000c42f0000;
  Nekki_SF2_GUI_SFMonoBehaviour<object>___ctor
            ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this,
             Method_Nekki_SF2_GUI_SFMonoBehaviour<object>__ctor__);
  return;
}


// ===== private JIMKCICMMIL BLBILHBACND()  [RVA 0x35BDD90]
// Nekki.SF2.GUI.Fight.ViewerFight$$BLBILHBACND @ RVA 0x35BDD90

JIMKCICMMIL_o *
Nekki_SF2_GUI_Fight_ViewerFight__BLBILHBACND
          (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  return (__this->fields)._JHNEOBOKOJF_k__BackingField;
}


// ===== public void UpdateHotGroundTimer(int LFJGFLNMBMC, HEDFKJBDBFN HEHMPFLAEGE)  [RVA 0x35BDD98]
// Nekki.SF2.GUI.Fight.ViewerFight$$UpdateHotGroundTimer @ RVA 0x35BDD98

void Nekki_SF2_GUI_Fight_ViewerFight__UpdateHotGroundTimer
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,int32_t LFJGFLNMBMC,int32_t HEHMPFLAEGE,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ScreenModel_o *pNVar2;
  
                    /* try { // try from 036bddb0 to 037bddb3 has its CatchHandler @ 036bddb8 */
                    /* try { // try from 036bddb4 to 037bddd3 has its CatchHandler @ 036bdc80 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036bddb0 with catch @ 036bddb8
                        */
  if ((DAT_04568ef7 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036bdd3c with catch @ 036bddbc
                        */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568ef7 = 1;
  }
                    /* try { // try from 036bddd4 to 037bddd7 has its CatchHandler @ 036bde00 */
  if (HEHMPFLAEGE == 1) {
    pNVar2 = (__this->fields).leftModel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      return;
    }
    pNVar2 = (__this->fields).leftModel;
  }
  else {
                    /* try { // try from 036bddd8 to 037bde0f has its CatchHandler @ 036bdc80 */
    if (HEHMPFLAEGE != 2) {
      if (HEHMPFLAEGE != 3) {
        return;
      }
      pNVar2 = (__this->fields).leftModel;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 036bddd4 with catch @ 036bde00 */
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 036bde10 to 037bde17 has its CatchHandler @ 036bde2c */
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
                    /* try { // try from 036bde18 to 037bde23 has its CatchHandler @ 036bdc80 */
        pNVar2 = (__this->fields).leftModel;
        if (pNVar2 == (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) goto LAB_036bde6c;
                    /* try { // try from 036bde24 to 037bde2b has its CatchHandler @ 036bde2c */
        Nekki_SF2_GUI_Fight_ScreenModel__ShowHotGroundTimer(pNVar2,LFJGFLNMBMC,(MethodInfo *)0x0);
      }
    }
    pNVar2 = (__this->fields).rightModel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      return;
    }
    pNVar2 = (__this->fields).rightModel;
  }
  if (pNVar2 != (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) {
    Nekki_SF2_GUI_Fight_ScreenModel__ShowHotGroundTimer(pNVar2,LFJGFLNMBMC,(MethodInfo *)0x0);
    return;
  }
LAB_036bde6c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void RemovePointsTable()  [RVA 0x35BDED0]
// Nekki.SF2.GUI.Fight.ViewerFight$$RemovePointsTable @ RVA 0x35BDED0

void Nekki_SF2_GUI_Fight_ViewerFight__RemovePointsTable
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_PointsTable_o **ppNVar2;
  Nekki_SF2_GUI_Fight_PointsTable_o *x;
  
  if ((DAT_04568ef8 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568ef8 = 1;
    method = extraout_x1;
  }
  ppNVar2 = &(__this->fields).HLOILANGFLF;
  x = *ppNVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (*ppNVar2 != (Nekki_SF2_GUI_Fight_PointsTable_o *)0x0) {
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)*ppNVar2,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
      *ppNVar2 = (Nekki_SF2_GUI_Fight_PointsTable_o *)0x0;
      thunk_FUN_01c20e04(ppNVar2,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public int get_RoundTimeTotal()  [RVA 0x35BDF70]
// Nekki.SF2.GUI.Fight.ViewerFight$$get_RoundTimeTotal @ RVA 0x35BDF70

int32_t Nekki_SF2_GUI_Fight_ViewerFight__get_RoundTimeTotal
                  (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  JIMKCICMMIL_o *pJVar1;
  
  pJVar1 = (__this->fields)._JHNEOBOKOJF_k__BackingField;
  if (pJVar1 != (JIMKCICMMIL_o *)0x0) {
                    /* try { // try from 036bdf78 to 037bdf7f has its CatchHandler @ 036be0a4 */
    return (pJVar1->fields).OBOADGAKAHJ;
  }
  return 0;
}


// ===== public void PreInit(GOJLGHMMDBO NOKHDHCKCPH, GOJLGHMMDBO KJDLPOFAIBB)  [RVA 0x35BDF88]
// Nekki.SF2.GUI.Fight.ViewerFight$$PreInit @ RVA 0x35BDF88

void Nekki_SF2_GUI_Fight_ViewerFight__PreInit
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,GOJLGHMMDBO_o *NOKHDHCKCPH,
               GOJLGHMMDBO_o *KJDLPOFAIBB,MethodInfo *method)

{
  GOJLGHMMDBO_o **ppGVar1;
  JIMKCICMMIL_o **ppJVar2;
  System_Action_bool__o *CJNHFNHJHPE;
  
                    /* try { // try from 036bdf98 to 037bdf9f has its CatchHandler @ 036be048 */
                    /* try { // try from 036bdfa0 to 037bdfcb has its CatchHandler @ 036bde30 */
  if ((DAT_04568ef9 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
                    /* try { // try from 036bdfcc to 037bdfd3 has its CatchHandler @ 036be04c */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ViewerFight_OMANLLACFOG__);
    DAT_04568ef9 = 1;
  }
  ppGVar1 = &(__this->fields)._CDKAFMECMHK_k__BackingField;
  *ppGVar1 = NOKHDHCKCPH;
                    /* try { // try from 036bdfec to 037bdff3 has its CatchHandler @ 036be03c */
  thunk_FUN_01c20e04(ppGVar1,NOKHDHCKCPH);
  ppGVar1 = &(__this->fields)._PHBDBOBEDOK_k__BackingField;
                    /* try { // try from 036bdff4 to 037be01f has its CatchHandler @ 036bde30 */
  *ppGVar1 = KJDLPOFAIBB;
  thunk_FUN_01c20e04(ppGVar1,KJDLPOFAIBB);
  ppJVar2 = &(__this->fields)._JHNEOBOKOJF_k__BackingField;
  *ppJVar2 = (JIMKCICMMIL_o *)0x0;
  thunk_FUN_01c20e04(ppJVar2,0);
  (__this->fields)._BBIBLNIKJMG_k__BackingField = false;
  (__this->fields)._NNPPLGMLHEK_k__BackingField = true;
  CJNHFNHJHPE = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
                    /* try { // try from 036be020 to 037be023 has its CatchHandler @ 036be044 */
                    /* try { // try from 036be024 to 037be027 has its CatchHandler @ 036be040 */
                    /* try { // try from 036be028 to 037be02b has its CatchHandler @ 036be038 */
                    /* try { // try from 036be02c to 037be02f has its CatchHandler @ 036be034 */
                    /* try { // try from 036be030 to 037be063 has its CatchHandler @ 036bde30 */
  System_Action<bool>___ctor();
                    /* catch() { ... } // from try @ 036be02c with catch @ 036be034 */
                    /* catch() { ... } // from try @ 036be028 with catch @ 036be038 */
                    /* catch() { ... } // from try @ 036bdfec with catch @ 036be03c */
                    /* catch() { ... } // from try @ 036be024 with catch @ 036be040 */
                    /* catch() { ... } // from try @ 036be020 with catch @ 036be044 */
                    /* catch() { ... } // from try @ 036bdf98 with catch @ 036be048 */
                    /* catch() { ... } // from try @ 036bdfcc with catch @ 036be04c */
  Nekki_SF2_Core_ApplicationController__add_OnPause(CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}


// ===== public void Play()  [RVA 0x35BE050]
// Nekki.SF2.GUI.Fight.ViewerFight$$Play @ RVA 0x35BE050

void Nekki_SF2_GUI_Fight_ViewerFight__Play
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  JIMKCICMMIL_o *pJVar2;
  UnityEngine_UI_Button_o *pUVar3;
  
                    /* try { // try from 036be064 to 037be067 has its CatchHandler @ 036be088 */
  if ((DAT_04568efa & 1) == 0) {
                    /* try { // try from 036be068 to 037be08f has its CatchHandler @ 036bde30 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568efa = 1;
    method = extraout_x1;
  }
  pJVar2 = (__this->fields)._JHNEOBOKOJF_k__BackingField;
  if (pJVar2 != (JIMKCICMMIL_o *)0x0) {
                    /* catch() { ... } // from try @ 036be064 with catch @ 036be088 */
                    /* try { // try from 036be090 to 037be0a3 has its CatchHandler @ 036be114 */
    (pJVar2->fields).BLGIPOEBHGA = true;
    (__this->fields)._BBIBLNIKJMG_k__BackingField = true;
    pUVar3 = (__this->fields).btnPause;
                    /* catch() { ... } // from try @ 036bdf78 with catch @ 036be0a4
                       try { // try from 036be0a4 to 037be0bb has its CatchHandler @ 036bde30 */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    method_00 = extraout_x1_00;
                    /* try { // try from 036be0bc to 037be0bf has its CatchHandler @ 036be0e8 */
    if (bVar1) {
                    /* try { // try from 036be0c0 to 037be0f7 has its CatchHandler @ 036bde30 */
      pUVar3 = (__this->fields).btnPause;
      if (pUVar3 == (UnityEngine_UI_Button_o *)0x0) goto LAB_036be0e4;
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pUVar3,true,(MethodInfo *)0x0);
      method_00 = extraout_x1_01;
    }
    Nekki_SF2_GUI_Fight_ViewerFight__SetTimerForLastRaidRound(__this,method_00);
    return;
  }
LAB_036be0e4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Button get_PauseButton()  [RVA 0x35BE384]
// Nekki.SF2.GUI.Fight.ViewerFight$$get_PauseButton @ RVA 0x35BE384

UnityEngine_UI_Button_o *
Nekki_SF2_GUI_Fight_ViewerFight__get_PauseButton
          (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  return (__this->fields).btnPause;
}


// ===== public void SetHealthBarVisible(HEDFKJBDBFN HEHMPFLAEGE, bool CJNHFNHJHPE)  [RVA 0x35BE38C]
// Nekki.SF2.GUI.Fight.ViewerFight$$SetHealthBarVisible @ RVA 0x35BE38C

void Nekki_SF2_GUI_Fight_ViewerFight__SetHealthBarVisible
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,int32_t HEHMPFLAEGE,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ScreenModel_o *pNVar2;
  
  if ((DAT_04568efb & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568efb = 1;
  }
  if (HEHMPFLAEGE == 3) {
    pNVar2 = (__this->fields).leftModel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar2 = (__this->fields).leftModel;
      if (pNVar2 == (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) goto LAB_036be4c4;
      Nekki_SF2_GUI_Fight_ScreenModel__SetHealthBarVisible(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    }
LAB_036be470:
    pNVar2 = (__this->fields).rightModel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      return;
    }
    pNVar2 = (__this->fields).rightModel;
  }
  else {
    if (HEHMPFLAEGE == 2) goto LAB_036be470;
    if (HEHMPFLAEGE != 1) {
      return;
    }
    pNVar2 = (__this->fields).leftModel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      return;
    }
    pNVar2 = (__this->fields).leftModel;
  }
  if (pNVar2 != (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) {
    Nekki_SF2_GUI_Fight_ScreenModel__SetHealthBarVisible(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
LAB_036be4c4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NFGDFNAPGII(GOJLGHMMDBO CJNHFNHJHPE)  [RVA 0x35BE4C8]
// Nekki.SF2.GUI.Fight.ViewerFight$$NFGDFNAPGII @ RVA 0x35BE4C8

void Nekki_SF2_GUI_Fight_ViewerFight__NFGDFNAPGII
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,GOJLGHMMDBO_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._PHBDBOBEDOK_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private GOJLGHMMDBO CACFDABIKGA()  [RVA 0x35BE4D0]
// Nekki.SF2.GUI.Fight.ViewerFight$$CACFDABIKGA @ RVA 0x35BE4D0

GOJLGHMMDBO_o *
Nekki_SF2_GUI_Fight_ViewerFight__CACFDABIKGA
          (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  return (__this->fields)._CDKAFMECMHK_k__BackingField;
}


// ===== private void PMEFBIEMKGJ(bool CJNHFNHJHPE)  [RVA 0x35BE4D8]
// Nekki.SF2.GUI.Fight.ViewerFight$$PMEFBIEMKGJ @ RVA 0x35BE4D8

void Nekki_SF2_GUI_Fight_ViewerFight__PMEFBIEMKGJ
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._NNPPLGMLHEK_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void SetVisible(bool CJNHFNHJHPE)  [RVA 0x35BE4E4]
// Nekki.SF2.GUI.Fight.ViewerFight$$SetVisible @ RVA 0x35BE4E4

void Nekki_SF2_GUI_Fight_ViewerFight__SetVisible
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_Button_o *pUVar3;
  
  if ((DAT_04568efc & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568efc = 1;
  }
  pUVar2 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).btnPause;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      return;
    }
    pUVar3 = (__this->fields).btnPause;
    if ((pUVar3 != (UnityEngine_UI_Button_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive
                (pUVar2,(__this->fields)._NNPPLGMLHEK_k__BackingField != false && CJNHFNHJHPE,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private GOJLGHMMDBO BJPOGMPAJGO()  [RVA 0x35BE5A4]
// Nekki.SF2.GUI.Fight.ViewerFight$$BJPOGMPAJGO @ RVA 0x35BE5A4

GOJLGHMMDBO_o *
Nekki_SF2_GUI_Fight_ViewerFight__BJPOGMPAJGO
          (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  return (__this->fields)._PHBDBOBEDOK_k__BackingField;
}


// ===== public ScreenModel get_LeftModel()  [RVA 0x35BE5AC]
// Nekki.SF2.GUI.Fight.ViewerFight$$get_LeftModel @ RVA 0x35BE5AC

Nekki_SF2_GUI_Fight_ScreenModel_o *
Nekki_SF2_GUI_Fight_ViewerFight__get_LeftModel
          (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  return (__this->fields).leftModel;
}


// ===== public void Init(JIMKCICMMIL ODIAFMNGOLA, PJKHAJKEHEL CGEHDIHFMEE, PJKHAJKEHEL EOBHGAMOGJF, bool BFANHMIHMGA = True)  [RVA 0x35BE5B4]
// Nekki.SF2.GUI.Fight.ViewerFight$$Init @ RVA 0x35BE5B4

void Nekki_SF2_GUI_Fight_ViewerFight__Init
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,JIMKCICMMIL_o *ODIAFMNGOLA,
               PJKHAJKEHEL_o *CGEHDIHFMEE,PJKHAJKEHEL_o *EOBHGAMOGJF,bool BFANHMIHMGA,
               MethodInfo *method)

{
  bool bVar1;
  JIMKCICMMIL_o **ppJVar2;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *method_01;
  System_String_o *KGLJICLJHEL;
  Nekki_SF2_GUI_Fight_ScreenModel_o *pNVar3;
  float extraout_s0;
  float extraout_s0_00;
  float in_s1;
  UnityEngine_Vector2_o EMPKHNEPHPO;
  UnityEngine_Vector2_o EMPKHNEPHPO_00;
  
  KGLJICLJHEL = (System_String_o *)(ulong)BFANHMIHMGA;
                    /* try { // try from 036be5b8 to 037be663 has its CatchHandler @ 036be5b8
                       catch() { ... } // from try @ 036be5b8 with catch @ 036be5b8
                       catch() { ... } // from try @ 036be67c with catch @ 036be5b8
                       catch() { ... } // from try @ 036be6d8 with catch @ 036be5b8
                       catch() { ... } // from try @ 036be718 with catch @ 036be5b8 */
  if ((DAT_04568efd & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_8386/*"LeftModel"*/);
    FUN_01bab630(&StringLiteral_11389/*"RightModel"*/);
    DAT_04568efd = 1;
  }
  (__this->fields).KBFHMLONBPA = -1;
  ppJVar2 = &(__this->fields)._JHNEOBOKOJF_k__BackingField;
  *ppJVar2 = ODIAFMNGOLA;
  thunk_FUN_01c20e04(ppJVar2,ODIAFMNGOLA);
  Nekki_SF2_GUI_Fight_ViewerFight__JDGDBEGKHPD(__this,method_00);
  EMPKHNEPHPO.fields.y = in_s1;
  EMPKHNEPHPO.fields.x = extraout_s0;
  Nekki_SF2_GUI_Fight_ViewerFight__ILGAFEJCKBD
            (__this,(__this->fields).leftModel,CGEHDIHFMEE,BFANHMIHMGA,EMPKHNEPHPO,KGLJICLJHEL,
             method);
  EMPKHNEPHPO_00.fields.y = in_s1;
  EMPKHNEPHPO_00.fields.x = extraout_s0_00;
  Nekki_SF2_GUI_Fight_ViewerFight__ILGAFEJCKBD
            (__this,(__this->fields).rightModel,EOBHGAMOGJF,BFANHMIHMGA,EMPKHNEPHPO_00,KGLJICLJHEL,
             method);
                    /* try { // try from 036be664 to 037be66b has its CatchHandler @ 036be6bc */
  method_01 = extraout_x1;
  if ((__this->fields)._CDKAFMECMHK_k__BackingField != (GOJLGHMMDBO_o *)0x0) {
    pNVar3 = (__this->fields).leftModel;
                    /* try { // try from 036be674 to 037be67b has its CatchHandler @ 036be6b8 */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 036be67c to 037be6d3 has its CatchHandler @ 036be5b8 */
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    method_01 = extraout_x1_00;
    if (bVar1) {
      pNVar3 = (__this->fields).leftModel;
      if (pNVar3 == (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) goto LAB_036be704;
      Nekki_SF2_GUI_Fight_ScreenModel__set_Statistic
                (pNVar3,(__this->fields)._CDKAFMECMHK_k__BackingField,(MethodInfo *)0x0);
      method_01 = extraout_x1_01;
    }
  }
  if ((__this->fields)._PHBDBOBEDOK_k__BackingField != (GOJLGHMMDBO_o *)0x0) {
    pNVar3 = (__this->fields).rightModel;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036be674 with catch @ 036be6b8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036be664 with catch @ 036be6bc
                        */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    method_01 = extraout_x1_02;
                    /* try { // try from 036be6d4 to 037be6d7 has its CatchHandler @ 036be700 */
    if (bVar1) {
                    /* try { // try from 036be6d8 to 037be70f has its CatchHandler @ 036be5b8 */
      pNVar3 = (__this->fields).rightModel;
      if (pNVar3 == (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) {
LAB_036be704:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Nekki_SF2_GUI_Fight_ScreenModel__set_Statistic
                (pNVar3,(__this->fields)._PHBDBOBEDOK_k__BackingField,(MethodInfo *)0x0);
      method_01 = extraout_x1_03;
    }
  }
                    /* catch() { ... } // from try @ 036be6d4 with catch @ 036be700 */
  Nekki_SF2_GUI_Fight_ViewerFight__Reset(__this,method_01);
  return;
}


// ===== private void DLOCFGMOEFN()  [RVA 0x35BE910]
// Nekki.SF2.GUI.Fight.ViewerFight$$DLOCFGMOEFN @ RVA 0x35BE910

void Nekki_SF2_GUI_Fight_ViewerFight__DLOCFGMOEFN
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *str1;
  System_String_o *pSVar2;
  MethodInfo *pMVar3;
  JIMKCICMMIL_o *pJVar4;
  Il2CppMethodPointer pIVar5;
  Nekki_SF2_GUI_LabelAlias_o *pNVar6;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar7;
  uint local_14;
  
  if ((DAT_04568efe & 1) == 0) {
    FUN_01bab630(&StringLiteral_1242/*"--"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_04568efe = 1;
  }
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).GJOBKIBMLHC.fields,(MethodInfo *)0x0);
  CVar7 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar1 + -1,(MethodInfo *)0x0);
  (__this->fields).GJOBKIBMLHC.fields = CVar7;
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)CVar7,(MethodInfo *)0x0);
  CVar7 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar1 / 0x3c,(MethodInfo *)0x0)
  ;
  (__this->fields).MOBINBAJICJ.fields = CVar7;
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)CVar7,(MethodInfo *)0x0);
  if (iVar1 == (__this->fields).KBFHMLONBPA) {
    return;
  }
  if ((__this->fields)._BBIBLNIKJMG_k__BackingField == false) {
    pJVar4 = (__this->fields)._JHNEOBOKOJF_k__BackingField;
    if (pJVar4 == (JIMKCICMMIL_o *)0x0) goto LAB_036bea78;
    if ((pJVar4->fields).FIICJBPKIJA != false) {
      pNVar6 = (__this->fields).roundTimer;
      if (pNVar6 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_036bea78;
      pMVar3 = (pNVar6->klass->vtable)._75_set_text.method;
      pIVar5 = (pNVar6->klass->vtable)._75_set_text.methodPtr;
      pSVar2 = StringLiteral_1242/*"--"*/;
      goto LAB_036bea68;
    }
  }
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).MOBINBAJICJ.fields,(MethodInfo *)0x0);
  CVar7 = (__this->fields).MOBINBAJICJ.fields;
  pNVar6 = (__this->fields).roundTimer;
  (__this->fields).KBFHMLONBPA = iVar1;
  iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)CVar7,(MethodInfo *)0x0);
  pSVar2 = StringLiteral_1567/*"0"*/;
  if (9 < iVar1) {
    pSVar2 = (System_String_o *)0x0;
  }
  local_14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                       ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                        (__this->fields).MOBINBAJICJ.fields,(MethodInfo *)0x0);
  local_14 = local_14 & ((int)local_14 >> 0x1f ^ 0xffffffffU);
  str1 = System_Int32__ToString((int32_t)&local_14,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat(pSVar2,str1,(MethodInfo *)0x0);
  if (pNVar6 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    pIVar5 = (pNVar6->klass->vtable)._75_set_text.methodPtr;
    pMVar3 = (pNVar6->klass->vtable)._75_set_text.method;
LAB_036bea68:
    (*pIVar5)(pNVar6,pSVar2,pMVar3);
    return;
  }
LAB_036bea78:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetLockLifeUpdate(bool FOFCAILEKJD, bool CJNHFNHJHPE)  [RVA 0x35BEA7C]
// Nekki.SF2.GUI.Fight.ViewerFight$$SetLockLifeUpdate @ RVA 0x35BEA7C

void Nekki_SF2_GUI_Fight_ViewerFight__SetLockLifeUpdate
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,bool FOFCAILEKJD,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  long lVar1;
  bool bVar2;
  Nekki_SF2_GUI_Fight_ScreenModel_o *__this_00;
  
  if ((DAT_04568eff & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568eff = 1;
  }
  lVar1 = 0x58;
  if (!FOFCAILEKJD) {
    lVar1 = 0x60;
  }
  __this_00 = *(Nekki_SF2_GUI_Fight_ScreenModel_o **)((long)&__this->klass + lVar1);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar2) {
    if (__this_00 != (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) {
      Nekki_SF2_GUI_Fight_ScreenModel__SetLockLifeUpdate(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public int get_RoundTimeTotalFrames()  [RVA 0x35BEB28]
// Nekki.SF2.GUI.Fight.ViewerFight$$get_RoundTimeTotalFrames @ RVA 0x35BEB28

int32_t Nekki_SF2_GUI_Fight_ViewerFight__get_RoundTimeTotalFrames
                  (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  JIMKCICMMIL_o *pJVar1;
  
  pJVar1 = (__this->fields)._JHNEOBOKOJF_k__BackingField;
  if (pJVar1 != (JIMKCICMMIL_o *)0x0) {
    return (pJVar1->fields).OBOADGAKAHJ * 0x3c;
  }
  return 0;
}


// ===== public ObscuredInt get_TimeCount()  [RVA 0x35BEB48]
// Nekki.SF2.GUI.Fight.ViewerFight$$get_TimeCount @ RVA 0x35BEB48

CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o
Nekki_SF2_GUI_Fight_ViewerFight__get_TimeCount
          (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  return (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)(__this->fields).GJOBKIBMLHC.fields;
}


// ===== private void PIJFLNBBPIO(JIMKCICMMIL CJNHFNHJHPE)  [RVA 0x35BEB54]
// Nekki.SF2.GUI.Fight.ViewerFight$$PIJFLNBBPIO @ RVA 0x35BEB54

void Nekki_SF2_GUI_Fight_ViewerFight__PIJFLNBBPIO
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,JIMKCICMMIL_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._JHNEOBOKOJF_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private void KIHJLKHFMBD(GOJLGHMMDBO CJNHFNHJHPE)  [RVA 0x35BEB5C]
// Nekki.SF2.GUI.Fight.ViewerFight$$KIHJLKHFMBD @ RVA 0x35BEB5C

void Nekki_SF2_GUI_Fight_ViewerFight__KIHJLKHFMBD
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,GOJLGHMMDBO_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._CDKAFMECMHK_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void SetPlayerPvpMode(HEDFKJBDBFN HEHMPFLAEGE, bool CJNHFNHJHPE)  [RVA 0x35BEB64]
// Nekki.SF2.GUI.Fight.ViewerFight$$SetPlayerPvpMode @ RVA 0x35BEB64

void Nekki_SF2_GUI_Fight_ViewerFight__SetPlayerPvpMode
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,int32_t HEHMPFLAEGE,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ScreenModel_o *pNVar2;
  
  if ((DAT_04568f00 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568f00 = 1;
  }
  if (HEHMPFLAEGE == 3) {
    pNVar2 = (__this->fields).leftModel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar2 = (__this->fields).leftModel;
      if (pNVar2 == (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) goto LAB_036bec9c;
      Nekki_SF2_GUI_Fight_ScreenModel__SetPlayerPvpMode(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    }
LAB_036bec48:
    pNVar2 = (__this->fields).rightModel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
                    /* try { // try from 036bec8c to 037bed1b has its CatchHandler @ 036bec8c
                       catch() { ... } // from try @ 036bec8c with catch @ 036bec8c
                       catch() { ... } // from try @ 036bed50 with catch @ 036bec8c
                       catch() { ... } // from try @ 036bed74 with catch @ 036bec8c
                       catch() { ... } // from try @ 036bed9c with catch @ 036bec8c
                       catch() { ... } // from try @ 036beddc with catch @ 036bec8c */
      return;
    }
    pNVar2 = (__this->fields).rightModel;
  }
  else {
    if (HEHMPFLAEGE == 2) goto LAB_036bec48;
    if (HEHMPFLAEGE != 1) {
      return;
    }
    pNVar2 = (__this->fields).leftModel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      return;
    }
    pNVar2 = (__this->fields).leftModel;
  }
  if (pNVar2 != (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) {
    Nekki_SF2_GUI_Fight_ScreenModel__SetPlayerPvpMode(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
LAB_036bec9c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void PauseVisible(bool CJNHFNHJHPE)  [RVA 0x35BECA0]
// Nekki.SF2.GUI.Fight.ViewerFight$$PauseVisible @ RVA 0x35BECA0

void Nekki_SF2_GUI_Fight_ViewerFight__PauseVisible
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Button_o *pUVar2;
  
  if ((DAT_04568f01 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568f01 = 1;
  }
  (__this->fields)._NNPPLGMLHEK_k__BackingField = CJNHFNHJHPE;
  pUVar2 = (__this->fields).btnPause;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields).btnPause;
                    /* try { // try from 036bed1c to 037bed23 has its CatchHandler @ 036bed80 */
    if ((pUVar2 != (UnityEngine_UI_Button_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 036bed44 to 037bed4f has its CatchHandler @ 036bed78 */
  return;
}


// ===== public ScreenModel GetScreenModel(int DPJIDNBJIBG)  [RVA 0x35BED4C]
// Nekki.SF2.GUI.Fight.ViewerFight$$GetScreenModel @ RVA 0x35BED4C

Nekki_SF2_GUI_Fight_ScreenModel_o *
Nekki_SF2_GUI_Fight_ViewerFight__GetScreenModel
          (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  long lVar1;
  
                    /* try { // try from 036bed50 to 037bed6f has its CatchHandler @ 036bec8c */
  lVar1 = 0x58;
  if (DPJIDNBJIBG != 0) {
    lVar1 = 0x60;
  }
  return *(Nekki_SF2_GUI_Fight_ScreenModel_o **)((long)&__this->klass + lVar1);
}


// ===== public void SetTimerForLastRaidRound()  [RVA 0x35BE0E8]
// Nekki.SF2.GUI.Fight.ViewerFight$$SetTimerForLastRaidRound @ RVA 0x35BE0E8

void Nekki_SF2_GUI_Fight_ViewerFight__SetTimerForLastRaidRound
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  CHDGOFBHAFI_o *pCVar4;
  int64_t iVar5;
  Nekki_SF2_GUI_LabelAlias_o *pNVar6;
  DG_Tweening_Sequence_o *pDVar7;
  DG_Tweening_Core_DOGetter_float__o *getter;
  DG_Tweening_Core_DOSetter_float__o *setter;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *t;
  MethodInfo *extraout_x1;
  JIMKCICMMIL_o *pJVar8;
  AADKBCFCLKK_o *IIPPMAOIKHB;
  DG_Tweening_Sequence_o **ppDVar9;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o CJNHFNHJHPE;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CJNHFNHJHPE_00;
  
                    /* catch() { ... } // from try @ 036be0bc with catch @ 036be0e8 */
                    /* try { // try from 036be0f8 to 037be0ff has its CatchHandler @ 036be114 */
                    /* try { // try from 036be100 to 037be10b has its CatchHandler @ 036bde30 */
  if ((DAT_04568f02 & 1) == 0) {
                    /* try { // try from 036be10c to 037be113 has its CatchHandler @ 036be114 */
    FUN_01bab630(&DG_Tweening_Core_DOGetter<float>_TypeInfo);
                    /* catch() { ... } // from try @ 036be090 with catch @ 036be114
                       catch() { ... } // from try @ 036be0f8 with catch @ 036be114
                       catch() { ... } // from try @ 036be10c with catch @ 036be114 */
    FUN_01bab630(&DG_Tweening_Core_DOSetter<float>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ViewerFight_EIJGFNBCPLK__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ViewerFight_IFBBIDIEBEL__);
    DAT_04568f02 = 1;
    method = extraout_x1;
  }
  pJVar8 = (__this->fields)._JHNEOBOKOJF_k__BackingField;
  if ((pJVar8 != (JIMKCICMMIL_o *)0x0) && ((pJVar8->fields).FIICJBPKIJA != false)) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
    }
    pCVar4 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
    if (pCVar4 == (CHDGOFBHAFI_o *)0x0) {
LAB_036be380:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    IIPPMAOIKHB = (pCVar4->fields).AABMLCNHHPN;
    if ((IIPPMAOIKHB != (AADKBCFCLKK_o *)0x0) &&
       (bVar1 = OOBBAGLCFPF__IFFNMNFGOII(IIPPMAOIKHB,(MethodInfo *)0x0), !bVar1)) {
      iVar5 = OOBBAGLCFPF__ACNOPBOADGE(IIPPMAOIKHB,(MethodInfo *)0x0);
      CJNHFNHJHPE = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                              ((int)(SUB168(SEXT816(iVar5) * SEXT816(0x20c49ba5e353f7cf),8) >> 7) -
                               (SUB164(SEXT816(iVar5) * SEXT816(0x20c49ba5e353f7cf),0xc) >> 0x1f),
                               (MethodInfo *)0x0);
      iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        (CJNHFNHJHPE,(MethodInfo *)0x0);
      CJNHFNHJHPE_00 =
           (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                     (iVar2 * 0x3c | 1,(MethodInfo *)0x0);
      iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (__this->fields).GJOBKIBMLHC.fields,(MethodInfo *)0x0);
      iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)CJNHFNHJHPE_00,
                         (MethodInfo *)0x0);
      if (iVar3 < iVar2) {
        pNVar6 = (__this->fields).roundTimer;
        (__this->fields).GJOBKIBMLHC.fields = CJNHFNHJHPE_00;
        if (pNVar6 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_036be380;
        (*(pNVar6->klass->vtable)._23_set_color.methodPtr)
                  (0x3f800000,0,0,0x3f800000,pNVar6,(pNVar6->klass->vtable)._23_set_color.method);
        ppDVar9 = &(__this->fields).MJPPAGLCLJD;
        if (*ppDVar9 == (DG_Tweening_Sequence_o *)0x0) {
          if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pDVar7 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
          (__this->fields).MJPPAGLCLJD = pDVar7;
          thunk_FUN_01c20e04(ppDVar9,pDVar7);
          getter = (DG_Tweening_Core_DOGetter_float__o *)
                   thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<float>_TypeInfo);
          DG_Tweening_Core_DOGetter<float>___ctor();
          setter = (DG_Tweening_Core_DOSetter_float__o *)
                   thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<float>_TypeInfo);
          DG_Tweening_Core_DOSetter<float>___ctor();
          t = DG_Tweening_DOTween__To(getter,setter,0.25,0.45,(MethodInfo *)0x0);
          DG_Tweening_TweenSettingsExtensions__Append
                    ((__this->fields).MJPPAGLCLJD,(DG_Tweening_Tween_o *)t,(MethodInfo *)0x0);
          DG_Tweening_TweenSettingsExtensions__AppendInterval
                    ((__this->fields).MJPPAGLCLJD,0.1,(MethodInfo *)0x0);
          DG_Tweening_TweenSettingsExtensions__SetLoops<object>
                    ((Il2CppObject *)(__this->fields).MJPPAGLCLJD,-1,1,
                     Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Sequence>__);
          DG_Tweening_TweenExtensions__Restart
                    ((DG_Tweening_Tween_o *)(__this->fields).MJPPAGLCLJD,true,-1.0,(MethodInfo *)0x0
                    );
          return;
        }
      }
    }
  }
  return;
}


// ===== public void RenderComboModel()  [RVA 0x35BED64]
// Nekki.SF2.GUI.Fight.ViewerFight$$RenderComboModel @ RVA 0x35BED64

void Nekki_SF2_GUI_Fight_ViewerFight__RenderComboModel
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ScreenModel_o *pNVar2;
  
                    /* try { // try from 036bed70 to 037bed73 has its CatchHandler @ 036bed7c */
                    /* try { // try from 036bed74 to 037bed97 has its CatchHandler @ 036bec8c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036bed44 with catch @ 036bed78
                        */
  if ((DAT_04568f03 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036bed70 with catch @ 036bed7c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036bed1c with catch @ 036bed80
                        */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568f03 = 1;
    method = extraout_x1;
  }
  if ((__this->fields)._BBIBLNIKJMG_k__BackingField != false) {
                    /* try { // try from 036bed98 to 037bed9b has its CatchHandler @ 036bedc4 */
                    /* try { // try from 036bed9c to 037bedd3 has its CatchHandler @ 036bec8c */
    pNVar2 = (__this->fields).leftModel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
                    /* catch() { ... } // from try @ 036bed98 with catch @ 036bedc4 */
    if (bVar1) {
      pNVar2 = (__this->fields).leftModel;
      if (pNVar2 == (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) goto LAB_036bee24;
                    /* try { // try from 036bedd4 to 037beddb has its CatchHandler @ 036bedf0 */
      Nekki_SF2_GUI_Fight_ScreenModel__RenderComboModel(pNVar2,(MethodInfo *)0x0);
    }
                    /* try { // try from 036beddc to 037bede7 has its CatchHandler @ 036bec8c */
    pNVar2 = (__this->fields).rightModel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 036bede8 to 037bedef has its CatchHandler @ 036bedf0 */
      thunk_FUN_01ba7564();
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036bedd4 with catch @ 036bedf0
                       catch(type#2 @ 00000000) { ... } // from try @ 036bede8 with catch @ 036bedf0
                        */
                    /* try { // try from 036bedf4 to 037bee7f has its CatchHandler @ 036bedf4
                       catch() { ... } // from try @ 036bedf4 with catch @ 036bedf4
                       catch() { ... } // from try @ 036beeac with catch @ 036bedf4
                       catch() { ... } // from try @ 036beed0 with catch @ 036bedf4
                       catch() { ... } // from try @ 036beef8 with catch @ 036bedf4
                       catch() { ... } // from try @ 036bef38 with catch @ 036bedf4 */
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar2 = (__this->fields).rightModel;
      if (pNVar2 != (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) {
        Nekki_SF2_GUI_Fight_ScreenModel__RenderComboModel(pNVar2,(MethodInfo *)0x0);
        return;
      }
LAB_036bee24:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== private bool AAMBLICMFCJ()  [RVA 0x35BEE28]
// Nekki.SF2.GUI.Fight.ViewerFight$$AAMBLICMFCJ @ RVA 0x35BEE28

bool Nekki_SF2_GUI_Fight_ViewerFight__AAMBLICMFCJ
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  return (__this->fields)._NNPPLGMLHEK_k__BackingField;
}


// ===== public void DisplayDamage(string GIHPFBNPHMP)  [RVA 0x35BEE30]
// Nekki.SF2.GUI.Fight.ViewerFight$$DisplayDamage @ RVA 0x35BEE30

void Nekki_SF2_GUI_Fight_ViewerFight__DisplayDamage
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,System_String_o *GIHPFBNPHMP,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  Il2CppObject *pIVar3;
  Il2CppClass *pIVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_GameObject_o *__this_00;
  DG_Tweening_Sequence_o *s;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_Tween_o *t_00;
  DG_Tweening_TweenCallback_o *callback;
  void *pvVar6;
  Nekki_SF2_GUI_LabelAlias_o *pNVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04568f04 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ViewerFight_BGKPLGELAHC_EGOKMGOBBNJ__);
    FUN_01bab630(&Nekki_SF2_GUI_Fight_ViewerFight_BGKPLGELAHC_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
                    /* try { // try from 036bee80 to 037bee87 has its CatchHandler @ 036beedc */
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<LabelAlias>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 036beea0 to 037beeab has its CatchHandler @ 036beed4 */
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
                    /* try { // try from 036beeac to 037beecb has its CatchHandler @ 036bedf4 */
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    DAT_04568f04 = 1;
  }
  pNVar7 = (__this->fields)._damageLabel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 036beecc to 037beecf has its CatchHandler @ 036beed8 */
                    /* try { // try from 036beed0 to 037beef3 has its CatchHandler @ 036bedf4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036beea0 with catch @ 036beed4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036beecc with catch @ 036beed8
                        */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036bee80 with catch @ 036beedc
                        */
  if (!bVar1) {
    return;
  }
  pNVar7 = (__this->fields)._damageLabel;
  if ((pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_Transform_o *)0x0)) {
                    /* try { // try from 036beef4 to 037beef7 has its CatchHandler @ 036bef20 */
                    /* try { // try from 036beef8 to 037bef2f has its CatchHandler @ 036bedf4 */
    pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
                    /* catch() { ... } // from try @ 036beef4 with catch @ 036bef20 */
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      return;
    }
                    /* try { // try from 036bef30 to 037bef37 has its CatchHandler @ 036bef4c */
    pIVar3 = (Il2CppObject *)
             thunk_FUN_01bda818(Nekki_SF2_GUI_Fight_ViewerFight_BGKPLGELAHC_TypeInfo);
                    /* try { // try from 036bef38 to 037bef43 has its CatchHandler @ 036bedf4 */
    System_Object___ctor(pIVar3,(MethodInfo *)0x0);
                    /* try { // try from 036bef44 to 037bef4b has its CatchHandler @ 036bef4c */
    pNVar7 = (__this->fields)._damageLabel;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036bef30 with catch @ 036bef4c
                       catch(type#2 @ 00000000) { ... } // from try @ 036bef44 with catch @ 036bef4c
                        */
                    /* try { // try from 036bef50 to 037bf037 has its CatchHandler @ 036bef50
                       catch() { ... } // from try @ 036bef50 with catch @ 036bef50
                       catch() { ... } // from try @ 036bf2ec with catch @ 036bef50
                       catch() { ... } // from try @ 036bf358 with catch @ 036bef50
                       catch() { ... } // from try @ 036bf368 with catch @ 036bef50
                       catch() { ... } // from try @ 036bf3c8 with catch @ 036bef50
                       catch() { ... } // from try @ 036bf408 with catch @ 036bef50 */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pIVar4 = (Il2CppClass *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pNVar7,Method_UnityEngine_Object_Instantiate<LabelAlias>__);
    if (pIVar3 != (Il2CppObject *)0x0) {
      pIVar3 = pIVar3 + 1;
      pIVar3->klass = pIVar4;
      thunk_FUN_01c20e04(pIVar3,pIVar4);
      if (pIVar3->klass != (Il2CppClass *)0x0) {
        pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pIVar3->klass,(MethodInfo *)0x0);
        pNVar7 = (__this->fields)._damageLabel;
        if (((pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
            (pUVar5 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0),
            pUVar5 != (UnityEngine_Transform_o *)0x0)) &&
           (pUVar5 = UnityEngine_Transform__get_parent(pUVar5,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__SetParent(pUVar2,pUVar5,false,(MethodInfo *)0x0);
          pIVar4 = pIVar3->klass;
          if (pIVar4 != (Il2CppClass *)0x0) {
            pvVar6 = (pIVar4->_1).image;
            (**(code **)((long)pvVar6 + 0x5e8))
                      (pIVar4,GIHPFBNPHMP,*(undefined8 *)((long)pvVar6 + 0x5f0));
            if ((pIVar3->klass != (Il2CppClass *)0x0) &&
               (__this_00 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pIVar3->klass,(MethodInfo *)0x0),
               __this_00 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
              if (DAT_0455fa75 == '\0') {
                FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
                DAT_0455fa75 = '\x01';
              }
              if (pIVar3->klass != (Il2CppClass *)0x0) {
                    /* try { // try from 036bf038 to 037bf03f has its CatchHandler @ 036bf3ac */
                fVar9 = (__this->fields).damageLabelStartY;
                fVar8 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.x;
                pUVar2 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)pIVar3->klass,(MethodInfo *)0x0);
                if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                  value.fields.y = fVar9;
                  value.fields.x = fVar8;
                  value.fields.z = 0.0;
                    /* try { // try from 036bf064 to 037bf06f has its CatchHandler @ 036bf3a4 */
                  UnityEngine_Transform__set_localPosition(pUVar2,value,(MethodInfo *)0x0);
                  LJLLAKHOFFF__IFBBIDIEBEL
                            ((UnityEngine_UI_Graphic_o *)pIVar3->klass,1.0,(MethodInfo *)0x0);
                  if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  s = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
                    /* try { // try from 036bf0a0 to 037bf0af has its CatchHandler @ 036bf3a0 */
                  if (pIVar3->klass != (Il2CppClass *)0x0) {
                    pUVar2 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)pIVar3->klass,(MethodInfo *)0x0);
                    t = DG_Tweening_ShortcutExtensions__DOLocalMoveY
                                  (pUVar2,(__this->fields).damageLabelEndY,
                                   (__this->fields).damageLabelMoveDuration,false,(MethodInfo *)0x0)
                    ;
                    t_00 = (DG_Tweening_Tween_o *)
                           DG_Tweening_TweenSettingsExtensions__SetEase<object>
                                     ((Il2CppObject *)t,1,
                                      Method_DG_Tweening_TweenSettingsExtensions_SetEase<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                                     );
                    DG_Tweening_TweenSettingsExtensions__Append(s,t_00,(MethodInfo *)0x0);
                    callback = (DG_Tweening_TweenCallback_o *)
                               thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
                    /* try { // try from 036bf10c to 037bf113 has its CatchHandler @ 036bf37c */
                    DG_Tweening_TweenCallback___ctor();
                    DG_Tweening_TweenSettingsExtensions__AppendCallback
                              (s,callback,(MethodInfo *)0x0);
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


// ===== private float EIJGFNBCPLK()  [RVA 0x35BF154]
// Nekki.SF2.GUI.Fight.ViewerFight$$EIJGFNBCPLK @ RVA 0x35BF154

float Nekki_SF2_GUI_Fight_ViewerFight__EIJGFNBCPLK
                (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = LJLLAKHOFFF__EIJGFNBCPLK
                    ((UnityEngine_UI_Graphic_o *)(__this->fields).roundTimer,(MethodInfo *)0x0);
  return fVar1;
}


// ===== public void Reset()  [RVA 0x35BE7E8]
// Nekki.SF2.GUI.Fight.ViewerFight$$Reset @ RVA 0x35BE7E8

void Nekki_SF2_GUI_Fight_ViewerFight__Reset
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  JIMKCICMMIL_o *pJVar2;
  Nekki_SF2_GUI_Fight_ScreenModel_o *pNVar3;
  UnityEngine_UI_Button_o *pUVar4;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar5;
  
  if ((DAT_04568f05 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568f05 = 1;
  }
  pJVar2 = (__this->fields)._JHNEOBOKOJF_k__BackingField;
  (__this->fields)._BBIBLNIKJMG_k__BackingField = false;
  if (pJVar2 != (JIMKCICMMIL_o *)0x0) {
    CVar5 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
            CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((pJVar2->fields).OBOADGAKAHJ * 0x3c | 1,(MethodInfo *)0x0);
    (__this->fields).GJOBKIBMLHC.fields = CVar5;
    pNVar3 = (__this->fields).leftModel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar3 = (__this->fields).leftModel;
      if (pNVar3 == (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) goto LAB_036be90c;
      Nekki_SF2_GUI_Fight_ScreenModel__Reset(pNVar3,(MethodInfo *)0x0);
    }
    pNVar3 = (__this->fields).rightModel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    method_00 = extraout_x1;
    if (bVar1) {
      pNVar3 = (__this->fields).rightModel;
      if (pNVar3 == (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) goto LAB_036be90c;
      Nekki_SF2_GUI_Fight_ScreenModel__Reset(pNVar3,(MethodInfo *)0x0);
      method_00 = extraout_x1_00;
    }
    Nekki_SF2_GUI_Fight_ViewerFight__DLOCFGMOEFN(__this,method_00);
    pUVar4 = (__this->fields).btnPause;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      return;
    }
    pUVar4 = (__this->fields).btnPause;
    if (pUVar4 != (UnityEngine_UI_Button_o *)0x0) {
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pUVar4,true,(MethodInfo *)0x0);
      return;
    }
  }
LAB_036be90c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CreatePointsTable(float OAGELANKMBH, float IOJNHKIPJOK, int NJBICBHLOMO, BGMKDONJFPI DJFJIEDMAMJ, int FLHLGFGJDMH)  [RVA 0x35BF160]
// Nekki.SF2.GUI.Fight.ViewerFight$$CreatePointsTable @ RVA 0x35BF160

void Nekki_SF2_GUI_Fight_ViewerFight__CreatePointsTable
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,float OAGELANKMBH,float IOJNHKIPJOK,
               int32_t NJBICBHLOMO,int32_t DJFJIEDMAMJ,int32_t FLHLGFGJDMH,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  Nekki_SF2_GUI_Fight_PointsTable_o **ppNVar2;
  Nekki_SF2_GUI_Fight_PointsTable_o *pNVar3;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar4;
  
  if ((DAT_04568f06 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<PointsTable>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    OAGELANKMBH = (float)FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568f06 = 1;
  }
  ppNVar2 = &(__this->fields).HLOILANGFLF;
  pNVar3 = *ppNVar2;
                    /* try { // try from 036bf1cc to 037bf1e7 has its CatchHandler @ 036bf384 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(OAGELANKMBH);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    x = (UnityEngine_Object_o *)(__this->fields)._pointsTablePrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar4 = (__this->fields)._pointsTablePrefab;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pUVar4 = (UnityEngine_GameObject_o *)
               UnityEngine_Object__Instantiate<object>
                         ((Il2CppObject *)pUVar4,Method_UnityEngine_Object_Instantiate<GameObject>__
                         );
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        pNVar3 = (Nekki_SF2_GUI_Fight_PointsTable_o *)
                 UnityEngine_GameObject__GetComponent<object>
                           (pUVar4,Method_UnityEngine_GameObject_GetComponent<PointsTable>__);
        *ppNVar2 = pNVar3;
                    /* try { // try from 036bf258 to 037bf25f has its CatchHandler @ 036bf370 */
        thunk_FUN_01c20e04(ppNVar2,pNVar3);
        if (*ppNVar2 != (Nekki_SF2_GUI_Fight_PointsTable_o *)0x0) {
          __this_00 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)*ppNVar2,(MethodInfo *)0x0);
          parent = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent(__this_00,parent,false,(MethodInfo *)0x0);
            if (*ppNVar2 != (Nekki_SF2_GUI_Fight_PointsTable_o *)0x0) {
              Nekki_SF2_GUI_Fight_PointsTable__Init
                        (*ppNVar2,DJFJIEDMAMJ,FLHLGFGJDMH,NJBICBHLOMO,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== public void OnFightPause(bool CJNHFNHJHPE)  [RVA 0x35BF2DC]
// Nekki.SF2.GUI.Fight.ViewerFight$$OnFightPause @ RVA 0x35BF2DC

void Nekki_SF2_GUI_Fight_ViewerFight__OnFightPause
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ScreenModel_o *pNVar2;
  
                    /* try { // try from 036bf2e4 to 037bf2eb has its CatchHandler @ 036bf36c */
                    /* try { // try from 036bf2ec to 037bf32f has its CatchHandler @ 036bef50 */
  if ((DAT_04568f07 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568f07 = 1;
  }
  pNVar2 = (__this->fields).leftModel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 036bf330 to 037bf333 has its CatchHandler @ 036bf3a8 */
                    /* try { // try from 036bf334 to 037bf33b has its CatchHandler @ 036bf39c */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 036bf33c to 037bf33f has its CatchHandler @ 036bf398 */
  if (bVar1) {
                    /* try { // try from 036bf340 to 037bf347 has its CatchHandler @ 036bf394 */
    pNVar2 = (__this->fields).leftModel;
    if (pNVar2 == (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) goto LAB_036bf3ac;
                    /* try { // try from 036bf348 to 037bf34b has its CatchHandler @ 036bf390 */
                    /* try { // try from 036bf34c to 037bf353 has its CatchHandler @ 036bf388 */
    Nekki_SF2_GUI_Fight_ScreenModel__OnFightPause(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
                    /* try { // try from 036bf354 to 037bf357 has its CatchHandler @ 036bf380 */
                    /* try { // try from 036bf358 to 037bf35b has its CatchHandler @ 036bef50 */
  pNVar2 = (__this->fields).rightModel;
                    /* try { // try from 036bf35c to 037bf35f has its CatchHandler @ 036bf378 */
                    /* try { // try from 036bf360 to 037bf363 has its CatchHandler @ 036bf374 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 036bf364 to 037bf367 has its CatchHandler @ 036bf368 */
    thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 036bf364 with catch @ 036bf368
                       try { // try from 036bf368 to 037bf3c3 has its CatchHandler @ 036bef50 */
                    /* catch() { ... } // from try @ 036bf2e4 with catch @ 036bf36c */
                    /* catch() { ... } // from try @ 036bf258 with catch @ 036bf370 */
                    /* catch() { ... } // from try @ 036bf360 with catch @ 036bf374 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 036bf35c with catch @ 036bf378 */
  if (!bVar1) {
                    /* catch() { ... } // from try @ 036bf334 with catch @ 036bf39c */
                    /* catch() { ... } // from try @ 036bf0a0 with catch @ 036bf3a0 */
                    /* catch() { ... } // from try @ 036bf064 with catch @ 036bf3a4 */
                    /* catch() { ... } // from try @ 036bf330 with catch @ 036bf3a8 */
    return;
  }
                    /* catch() { ... } // from try @ 036bf10c with catch @ 036bf37c */
  pNVar2 = (__this->fields).rightModel;
                    /* catch() { ... } // from try @ 036bf354 with catch @ 036bf380 */
  if (pNVar2 != (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) {
                    /* catch() { ... } // from try @ 036bf1cc with catch @ 036bf384 */
                    /* catch() { ... } // from try @ 036bf34c with catch @ 036bf388 */
                    /* catch() { ... } // from try @ 036bf150 with catch @ 036bf38c */
                    /* catch() { ... } // from try @ 036bf348 with catch @ 036bf390 */
                    /* catch() { ... } // from try @ 036bf340 with catch @ 036bf394 */
                    /* catch() { ... } // from try @ 036bf33c with catch @ 036bf398 */
    Nekki_SF2_GUI_Fight_ScreenModel__OnFightPause(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
LAB_036bf3ac:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 036bf038 with catch @ 036bf3ac */
  FUN_01bab8c8();
}


// ===== public void UpdateVictorys()  [RVA 0x35BF3B0]
// Nekki.SF2.GUI.Fight.ViewerFight$$UpdateVictorys @ RVA 0x35BF3B0

void Nekki_SF2_GUI_Fight_ViewerFight__UpdateVictorys
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ScreenModel_o *pNVar2;
  
                    /* try { // try from 036bf3c4 to 037bf3c7 has its CatchHandler @ 036bf3f0 */
                    /* try { // try from 036bf3c8 to 037bf3ff has its CatchHandler @ 036bef50 */
  if ((DAT_04568f08 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568f08 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).leftModel;
                    /* catch() { ... } // from try @ 036bf3c4 with catch @ 036bf3f0 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 036bf400 to 037bf407 has its CatchHandler @ 036bf41c */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 036bf408 to 037bf413 has its CatchHandler @ 036bef50 */
  if (bVar1) {
    pNVar2 = (__this->fields).leftModel;
    if (pNVar2 == (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) goto LAB_036bf468;
                    /* try { // try from 036bf414 to 037bf41b has its CatchHandler @ 036bf41c */
    Nekki_SF2_GUI_Fight_ScreenModel__UpdateVictories(pNVar2,(MethodInfo *)0x0);
  }
                    /* catch() { ... } // from try @ 036bf400 with catch @ 036bf41c
                       catch() { ... } // from try @ 036bf414 with catch @ 036bf41c */
  pNVar2 = (__this->fields).rightModel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pNVar2 = (__this->fields).rightModel;
  if (pNVar2 != (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) {
    Nekki_SF2_GUI_Fight_ScreenModel__UpdateVictories(pNVar2,(MethodInfo *)0x0);
    return;
  }
LAB_036bf468:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool OJJOKHEBDLP()  [RVA 0x35BF46C]
// Nekki.SF2.GUI.Fight.ViewerFight$$OJJOKHEBDLP @ RVA 0x35BF46C

bool Nekki_SF2_GUI_Fight_ViewerFight__OJJOKHEBDLP
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  return (__this->fields)._BBIBLNIKJMG_k__BackingField;
}


// ===== private void OnDestroy()  [RVA 0x35BF474]
// Nekki.SF2.GUI.Fight.ViewerFight$$OnDestroy @ RVA 0x35BF474

void Nekki_SF2_GUI_Fight_ViewerFight__OnDestroy
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  System_Action_bool__o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  DG_Tweening_Sequence_o **ppDVar1;
  
  if ((DAT_04568f09 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ViewerFight_OMANLLACFOG__);
    DAT_04568f09 = 1;
    method = extraout_x1;
  }
  ppDVar1 = &(__this->fields).MJPPAGLCLJD;
  if (*ppDVar1 != (DG_Tweening_Sequence_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)*ppDVar1,false,(MethodInfo *)0x0);
    *ppDVar1 = (DG_Tweening_Sequence_o *)0x0;
    thunk_FUN_01c20e04(ppDVar1,0);
    method = extraout_x1_00;
  }
  CJNHFNHJHPE = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo,method);
  System_Action<bool>___ctor();
  Nekki_SF2_Core_ApplicationController__remove_OnPause(CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}


// ===== private void JDGDBEGKHPD()  [RVA 0x35BE708]
// Nekki.SF2.GUI.Fight.ViewerFight$$JDGDBEGKHPD @ RVA 0x35BE708

void Nekki_SF2_GUI_Fight_ViewerFight__JDGDBEGKHPD
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  UnityEngine_UI_Button_o *pUVar2;
  
                    /* try { // try from 036be710 to 037be717 has its CatchHandler @ 036be72c */
                    /* try { // try from 036be718 to 037be723 has its CatchHandler @ 036be5b8 */
                    /* try { // try from 036be724 to 037be72b has its CatchHandler @ 036be72c */
  if ((DAT_04568f0a & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036be710 with catch @ 036be72c
                       catch(type#2 @ 00000000) { ... } // from try @ 036be724 with catch @ 036be72c
                        */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568f0a = 1;
    method = extraout_x1;
  }
  pUVar2 = (__this->fields).btnPause;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields).btnPause;
    if (pUVar2 != (UnityEngine_UI_Button_o *)0x0) {
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pUVar2,true,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public GOJLGHMMDBO GetStatistic(int DPJIDNBJIBG)  [RVA 0x35BF51C]
// Nekki.SF2.GUI.Fight.ViewerFight$$GetStatistic @ RVA 0x35BF51C

GOJLGHMMDBO_o *
Nekki_SF2_GUI_Fight_ViewerFight__GetStatistic
          (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  long lVar1;
  bool bVar2;
  GOJLGHMMDBO_o *pGVar3;
  Nekki_SF2_GUI_Fight_ScreenModel_o *__this_00;
  
                    /* try { // try from 036bf51c to 037bf60b has its CatchHandler @ 036bf51c
                       catch() { ... } // from try @ 036bf51c with catch @ 036bf51c
                       catch() { ... } // from try @ 036bf630 with catch @ 036bf51c
                       catch() { ... } // from try @ 036bf654 with catch @ 036bf51c
                       catch() { ... } // from try @ 036bf67c with catch @ 036bf51c
                       catch() { ... } // from try @ 036bf6bc with catch @ 036bf51c */
  if ((DAT_04568f0b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568f0b = 1;
  }
  lVar1 = 0x58;
  if (DPJIDNBJIBG != 0) {
    lVar1 = 0x60;
  }
  __this_00 = *(Nekki_SF2_GUI_Fight_ScreenModel_o **)((long)&__this->klass + lVar1);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar2) {
    if (__this_00 != (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) {
      pGVar3 = Nekki_SF2_GUI_Fight_ScreenModel__get_Statistic(__this_00,(MethodInfo *)0x0);
      return pGVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return (GOJLGHMMDBO_o *)0x0;
}


// ===== public void UpdatePointsTable(int HLGODJGOMPL, int JJIMOBDENPB)  [RVA 0x35BF5C4]
// Nekki.SF2.GUI.Fight.ViewerFight$$UpdatePointsTable @ RVA 0x35BF5C4

void Nekki_SF2_GUI_Fight_ViewerFight__UpdatePointsTable
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,int32_t HLGODJGOMPL,int32_t JJIMOBDENPB,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_PointsTable_o *pNVar2;
  
  if ((DAT_04568f0c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568f0c = 1;
  }
  pNVar2 = (__this->fields).HLOILANGFLF;
                    /* try { // try from 036bf60c to 037bf613 has its CatchHandler @ 036bf660 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
                    /* try { // try from 036bf650 to 037bf653 has its CatchHandler @ 036bf658 */
                    /* try { // try from 036bf654 to 037bf677 has its CatchHandler @ 036bf51c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036bf650 with catch @ 036bf658
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036bf62c with catch @ 036bf65c
                        */
    return;
  }
                    /* try { // try from 036bf62c to 037bf62f has its CatchHandler @ 036bf65c */
  pNVar2 = (__this->fields).HLOILANGFLF;
                    /* try { // try from 036bf630 to 037bf64f has its CatchHandler @ 036bf51c */
  if (pNVar2 != (Nekki_SF2_GUI_Fight_PointsTable_o *)0x0) {
    Nekki_SF2_GUI_Fight_PointsTable__set_LeftScore(pNVar2,HLGODJGOMPL,(MethodInfo *)0x0);
    pNVar2 = (__this->fields).HLOILANGFLF;
    if (pNVar2 != (Nekki_SF2_GUI_Fight_PointsTable_o *)0x0) {
      if ((pNVar2->fields)._GMPAEDFIIHF_k__BackingField != 0) {
        return;
      }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036bf60c with catch @ 036bf660
                        */
      Nekki_SF2_GUI_Fight_PointsTable__set_RightScore(pNVar2,JJIMOBDENPB,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 036bf678 to 037bf67b has its CatchHandler @ 036bf6a4 */
  FUN_01bab8c8();
}


// ===== private void BDPDMFMDBBI(bool CJNHFNHJHPE)  [RVA 0x35BF67C]
// Nekki.SF2.GUI.Fight.ViewerFight$$BDPDMFMDBBI @ RVA 0x35BF67C

void Nekki_SF2_GUI_Fight_ViewerFight__BDPDMFMDBBI
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
                    /* try { // try from 036bf67c to 037bf6b3 has its CatchHandler @ 036bf51c */
  (__this->fields)._BBIBLNIKJMG_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void Render()  [RVA 0x35BF688]
// Nekki.SF2.GUI.Fight.ViewerFight$$Render @ RVA 0x35BF688

void Nekki_SF2_GUI_Fight_ViewerFight__Render
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  JIMKCICMMIL_o *pJVar2;
  Nekki_SF2_GUI_Fight_ScreenModel_o *pNVar3;
  
  if ((DAT_04568f0d & 1) == 0) {
                    /* catch() { ... } // from try @ 036bf678 with catch @ 036bf6a4 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568f0d = 1;
    method = extraout_x1;
  }
                    /* try { // try from 036bf6b4 to 037bf6bb has its CatchHandler @ 036bf6d0 */
                    /* try { // try from 036bf6bc to 037bf6c7 has its CatchHandler @ 036bf51c */
  if ((__this->fields)._BBIBLNIKJMG_k__BackingField != false) {
    pJVar2 = (__this->fields)._JHNEOBOKOJF_k__BackingField;
                    /* try { // try from 036bf6c8 to 037bf6cf has its CatchHandler @ 036bf6d0 */
    if (pJVar2 == (JIMKCICMMIL_o *)0x0) goto LAB_036bf7e8;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036bf6b4 with catch @ 036bf6d0
                       catch(type#2 @ 00000000) { ... } // from try @ 036bf6c8 with catch @ 036bf6d0
                        */
    if ((pJVar2->fields).BLGIPOEBHGA != false) {
                    /* try { // try from 036bf6d4 to 037bf897 has its CatchHandler @ 036bf6d4
                       catch() { ... } // from try @ 036bf6d4 with catch @ 036bf6d4
                       catch() { ... } // from try @ 036bf8e8 with catch @ 036bf6d4
                       catch() { ... } // from try @ 036bf970 with catch @ 036bf6d4
                       catch() { ... } // from try @ 036bf9f8 with catch @ 036bf6d4
                       catch() { ... } // from try @ 036bfa90 with catch @ 036bf6d4
                       catch() { ... } // from try @ 036bfb18 with catch @ 036bf6d4
                       catch() { ... } // from try @ 036bfb64 with catch @ 036bf6d4
                       catch() { ... } // from try @ 036bfbcc with catch @ 036bf6d4
                       catch() { ... } // from try @ 036bfc18 with catch @ 036bf6d4
                       catch() { ... } // from try @ 036bfc2c with catch @ 036bf6d4
                       catch() { ... } // from try @ 036bfc78 with catch @ 036bf6d4
                       catch() { ... } // from try @ 036bfc8c with catch @ 036bf6d4
                       catch() { ... } // from try @ 036bfcd8 with catch @ 036bf6d4
                       catch() { ... } // from try @ 036bfcec with catch @ 036bf6d4
                       catch() { ... } // from try @ 036bfd28 with catch @ 036bf6d4
                       catch() { ... } // from try @ 036bfd3c with catch @ 036bf6d4
                       catch() { ... } // from try @ 036bfd70 with catch @ 036bf6d4 */
      Nekki_SF2_GUI_Fight_ViewerFight__DLOCFGMOEFN(__this,method);
    }
    pNVar3 = (__this->fields).leftModel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pJVar2 = (__this->fields)._JHNEOBOKOJF_k__BackingField;
      if ((pJVar2 == (JIMKCICMMIL_o *)0x0) ||
         (pNVar3 = (__this->fields).leftModel, pNVar3 == (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0))
      goto LAB_036bf7e8;
      Nekki_SF2_GUI_Fight_ScreenModel__Render(pNVar3,(pJVar2->fields).BLGIPOEBHGA,(MethodInfo *)0x0)
      ;
    }
    pNVar3 = (__this->fields).rightModel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pJVar2 = (__this->fields)._JHNEOBOKOJF_k__BackingField;
      if ((pJVar2 == (JIMKCICMMIL_o *)0x0) ||
         (pNVar3 = (__this->fields).rightModel, pNVar3 == (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0))
      goto LAB_036bf7e8;
      Nekki_SF2_GUI_Fight_ScreenModel__Render(pNVar3,(pJVar2->fields).BLGIPOEBHGA,(MethodInfo *)0x0)
      ;
    }
  }
  pNVar3 = (__this->fields).leftModel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields).leftModel;
    if (pNVar3 == (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) goto LAB_036bf7e8;
    Nekki_SF2_GUI_Fight_ScreenModel__RenderActivePerkModel(pNVar3,(MethodInfo *)0x0);
  }
  pNVar3 = (__this->fields).rightModel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pNVar3 = (__this->fields).rightModel;
  if (pNVar3 != (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) {
    Nekki_SF2_GUI_Fight_ScreenModel__RenderActivePerkModel(pNVar3,(MethodInfo *)0x0);
    return;
  }
LAB_036bf7e8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IFBBIDIEBEL(float CJNHFNHJHPE)  [RVA 0x35BF7EC]
// Nekki.SF2.GUI.Fight.ViewerFight$$IFBBIDIEBEL @ RVA 0x35BF7EC

void Nekki_SF2_GUI_Fight_ViewerFight__IFBBIDIEBEL
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  LJLLAKHOFFF__IFBBIDIEBEL
            ((UnityEngine_UI_Graphic_o *)(__this->fields).roundTimer,CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}


// ===== public void RandomizeObscuredVars()  [RVA 0x35BF7F8]
// Nekki.SF2.GUI.Fight.ViewerFight$$RandomizeObscuredVars @ RVA 0x35BF7F8

void Nekki_SF2_GUI_Fight_ViewerFight__RandomizeObscuredVars
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_01;
  
  __this_00.fields.fakeValue = 0;
  __this_00.fields.fakeValueActive = false;
  __this_00.fields.inited = false;
  __this_00.fields._14_2_ = 0;
  __this_00.fields._0_8_ = &(__this->fields).GJOBKIBMLHC;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_00,in_x2);
  __this_01.fields.fakeValue = 0;
  __this_01.fields.fakeValueActive = false;
  __this_01.fields.inited = false;
  __this_01.fields._14_2_ = 0;
  __this_01.fields._0_8_ = &(__this->fields).MOBINBAJICJ;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_01,in_x2);
  return;
}


// ===== private void OMANLLACFOG(bool DGBEEJNJCHH)  [RVA 0x35BF81C]
// Nekki.SF2.GUI.Fight.ViewerFight$$OMANLLACFOG @ RVA 0x35BF81C

void Nekki_SF2_GUI_Fight_ViewerFight__OMANLLACFOG
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,bool DGBEEJNJCHH,MethodInfo *method)

{
  if (DGBEEJNJCHH) {
    Nekki_SF2_GUI_Fight_ViewerFight__PausePress(__this,(MethodInfo *)0x1);
    return;
  }
  return;
}


// ===== private void ILGAFEJCKBD(ScreenModel BCKBBGCOMJD, PJKHAJKEHEL JMCEAKJCJLH, bool BFANHMIHMGA, Vector2 EMPKHNEPHPO, string KGLJICLJHEL)  [RVA 0x35BE790]
// Nekki.SF2.GUI.Fight.ViewerFight$$ILGAFEJCKBD @ RVA 0x35BE790

void Nekki_SF2_GUI_Fight_ViewerFight__ILGAFEJCKBD
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,
               Nekki_SF2_GUI_Fight_ScreenModel_o *BCKBBGCOMJD,PJKHAJKEHEL_o *JMCEAKJCJLH,
               bool BFANHMIHMGA,UnityEngine_Vector2_o EMPKHNEPHPO,System_String_o *KGLJICLJHEL,
               MethodInfo *method)

{
  JIMKCICMMIL_o *pJVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar2;
  
  pJVar1 = (__this->fields)._JHNEOBOKOJF_k__BackingField;
  if (((pJVar1 != (JIMKCICMMIL_o *)0x0) &&
      (CVar2 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
               CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                         ((pJVar1->fields).JLGJOLIMJKB,(MethodInfo *)0x0),
      JMCEAKJCJLH != (PJKHAJKEHEL_o *)0x0)) &&
     ((JMCEAKJCJLH->fields).AGFNMOMJCGB.fields = CVar2,
     BCKBBGCOMJD != (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0)) {
    Nekki_SF2_GUI_Fight_ScreenModel__Init(BCKBBGCOMJD,JMCEAKJCJLH,BFANHMIHMGA,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Strike(ECENNHNBAME CAMAHOAFAPK, float LINBBAKAFCP, int ACCIHBHMFPN, bool JHMMNIMBIKL, bool JFOKCHFLFJG, bool CPKEPNCILEN, bool JECKCMKCNCH, bool ABOGGPJGIAI)  [RVA 0x35BF8A8]
// Nekki.SF2.GUI.Fight.ViewerFight$$Strike @ RVA 0x35BF8A8

void Nekki_SF2_GUI_Fight_ViewerFight__Strike
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,ECENNHNBAME_o *CAMAHOAFAPK,
               float LINBBAKAFCP,int32_t ACCIHBHMFPN,bool JHMMNIMBIKL,bool JFOKCHFLFJG,
               bool CPKEPNCILEN,bool JECKCMKCNCH,bool ABOGGPJGIAI,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_ScreenModel_o **ppNVar1;
  bool bVar2;
  Nekki_SF2_GUI_Fight_ScreenModel_o **ppNVar3;
  Nekki_SF2_GUI_Fight_ScreenModel_o *pNVar4;
  Nekki_SF2_GUI_Fight_ScreenModel_o *pNVar5;
  Nekki_SF2_GUI_Fight_ScreenModel_o **ppNVar6;
  
                    /* try { // try from 036bf8b0 to 037bf8bb has its CatchHandler @ 036bfbb4 */
                    /* try { // try from 036bf8c0 to 037bf8cb has its CatchHandler @ 036bfb78 */
                    /* try { // try from 036bf8e0 to 037bf8e7 has its CatchHandler @ 036bfbb0 */
                    /* try { // try from 036bf8e8 to 037bf91f has its CatchHandler @ 036bf6d4 */
  if ((DAT_04568f0e & 1) == 0) {
    LINBBAKAFCP = (float)FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568f0e = 1;
  }
  ppNVar6 = &(__this->fields).leftModel;
  pNVar5 = *ppNVar6;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(LINBBAKAFCP);
  }
                    /* try { // try from 036bf920 to 037bf927 has its CatchHandler @ 036bfcd8 */
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    ppNVar3 = &(__this->fields).rightModel;
    pNVar5 = *ppNVar3;
                    /* try { // try from 036bf938 to 037bf943 has its CatchHandler @ 036bfba8 */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 036bf948 to 037bf953 has its CatchHandler @ 036bfb74 */
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar2) {
      return;
    }
    ppNVar1 = ppNVar6;
    if (ACCIHBHMFPN != 0) {
      ppNVar1 = ppNVar3;
      ppNVar3 = ppNVar6;
    }
                    /* try { // try from 036bf968 to 037bf96f has its CatchHandler @ 036bfba4 */
    pNVar5 = *ppNVar3;
    pNVar4 = *ppNVar1;
                    /* try { // try from 036bf970 to 037bf9a7 has its CatchHandler @ 036bf6d4 */
    if (ABOGGPJGIAI) {
      if (pNVar5 == (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) goto LAB_036bfa24;
      Nekki_SF2_GUI_Fight_ScreenModel__ShowShock(pNVar5,(MethodInfo *)0x0);
    }
    if (CPKEPNCILEN) {
      if (pNVar5 == (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) goto LAB_036bfa24;
      Nekki_SF2_GUI_Fight_ScreenModel__ShowCritical(pNVar5,(MethodInfo *)0x0);
    }
    else if (pNVar5 == (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) goto LAB_036bfa24;
    if (JECKCMKCNCH) {
                    /* try { // try from 036bf9a8 to 037bf9af has its CatchHandler @ 036bfc78 */
                    /* try { // try from 036bf9c0 to 037bf9cb has its CatchHandler @ 036bfb9c */
      Nekki_SF2_GUI_Fight_ScreenModel__CallEventBlockHit(pNVar5,(MethodInfo *)0x0);
      return;
    }
                    /* try { // try from 036bf9d0 to 037bf9db has its CatchHandler @ 036bfb70 */
    Nekki_SF2_GUI_Fight_ScreenModel__UpdateStyle(pNVar5,CAMAHOAFAPK,(MethodInfo *)0x0);
    if (JHMMNIMBIKL) {
      Nekki_SF2_GUI_Fight_ScreenModel__ShowFirstStrike(pNVar5,(MethodInfo *)0x0);
    }
    if (JFOKCHFLFJG) {
      Nekki_SF2_GUI_Fight_ScreenModel__ShowHeadStrike(pNVar5,(MethodInfo *)0x0);
    }
    if (pNVar4 == (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) {
LAB_036bfa24:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (pNVar4->fields)._IsNoBlock_k__BackingField = false;
  }
                    /* try { // try from 036bf9f0 to 037bf9f7 has its CatchHandler @ 036bfb98 */
                    /* try { // try from 036bf9f8 to 037bfa3f has its CatchHandler @ 036bf6d4 */
  return;
}


// ===== public void PausePress()  [RVA 0x35BF828]
// Nekki.SF2.GUI.Fight.ViewerFight$$PausePress @ RVA 0x35BF828

void Nekki_SF2_GUI_Fight_ViewerFight__PausePress
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  Il2CppObject *PLPFOJADDML;
  undefined4 local_24;
  
  if ((DAT_04568f0f & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Fight_ViewerFight_GHOHIFCGFBO_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_CallEvent__);
    DAT_04568f0f = 1;
  }
  local_24 = 0;
  PLPFOJADDML = (Il2CppObject *)
                thunk_FUN_01bda448(Nekki_SF2_GUI_Fight_ViewerFight_GHOHIFCGFBO_TypeInfo,&local_24);
  Nekki_SF2_GUI_SFMonoBehaviour<object>__CallEvent
            ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this,0,PLPFOJADDML,
             Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_CallEvent__);
                    /* try { // try from 036bf898 to 037bf89f has its CatchHandler @ 036bfd28 */
  return;
}


// ===== public void UpdateCombo(bool FOFCAILEKJD, int CJNHFNHJHPE, int LHLELGFDIAP)  [RVA 0x35BFA28]
// Nekki.SF2.GUI.Fight.ViewerFight$$UpdateCombo @ RVA 0x35BFA28

void Nekki_SF2_GUI_Fight_ViewerFight__UpdateCombo
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,bool FOFCAILEKJD,int32_t CJNHFNHJHPE,
               int32_t LHLELGFDIAP,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Fight_ScreenModel_o *pNVar2;
  
                    /* try { // try from 036bfa40 to 037bfa47 has its CatchHandler @ 036bfc18 */
  if ((DAT_04568f10 & 1) == 0) {
                    /* try { // try from 036bfa58 to 037bfa63 has its CatchHandler @ 036bfb90 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568f10 = 1;
  }
                    /* try { // try from 036bfa68 to 037bfa73 has its CatchHandler @ 036bfb6c */
  if (FOFCAILEKJD) {
    pNVar2 = (__this->fields).leftModel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 036bfa88 to 037bfa8f has its CatchHandler @ 036bfb8c */
                    /* try { // try from 036bfa90 to 037bfac7 has its CatchHandler @ 036bf6d4 */
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
                    /* try { // try from 036bfaf0 to 037bfafb has its CatchHandler @ 036bfb68 */
      return;
    }
    pNVar2 = (__this->fields).leftModel;
  }
  else {
    pNVar2 = (__this->fields).rightModel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
                    /* try { // try from 036bfac8 to 037bfacf has its CatchHandler @ 036bfbb8 */
    if (!bVar1) {
      return;
    }
    pNVar2 = (__this->fields).rightModel;
  }
  if (pNVar2 != (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) {
                    /* try { // try from 036bfae0 to 037bfaeb has its CatchHandler @ 036bfb84 */
    Nekki_SF2_GUI_Fight_ScreenModel__UpdateCombo(pNVar2,CJNHFNHJHPE,LHLELGFDIAP,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void RemoveCombo()  [RVA 0x35BFB00]
// Nekki.SF2.GUI.Fight.ViewerFight$$RemoveCombo @ RVA 0x35BFB00

void Nekki_SF2_GUI_Fight_ViewerFight__RemoveCombo
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_ScreenModel_o *pNVar2;
  
                    /* try { // try from 036bfb10 to 037bfb17 has its CatchHandler @ 036bfb80 */
                    /* try { // try from 036bfb18 to 037bfb4f has its CatchHandler @ 036bf6d4 */
  if ((DAT_04568f11 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568f11 = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).leftModel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
                    /* try { // try from 036bfb50 to 037bfb53 has its CatchHandler @ 036bfbac */
                    /* try { // try from 036bfb54 to 037bfb57 has its CatchHandler @ 036bfba0 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 036bfb58 to 037bfb5b has its CatchHandler @ 036bfb94 */
  if (bVar1) {
                    /* try { // try from 036bfb5c to 037bfb5f has its CatchHandler @ 036bfb88 */
    pNVar2 = (__this->fields).leftModel;
                    /* try { // try from 036bfb60 to 037bfb63 has its CatchHandler @ 036bfb7c */
    if (pNVar2 == (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) goto LAB_036bfbb8;
                    /* try { // try from 036bfb64 to 037bfbc7 has its CatchHandler @ 036bf6d4 */
                    /* catch() { ... } // from try @ 036bfaf0 with catch @ 036bfb68 */
    Nekki_SF2_GUI_Fight_ScreenModel__RemoveCombo(pNVar2,(MethodInfo *)0x0);
  }
                    /* catch() { ... } // from try @ 036bfa68 with catch @ 036bfb6c */
                    /* catch() { ... } // from try @ 036bf9d0 with catch @ 036bfb70 */
  pNVar2 = (__this->fields).rightModel;
                    /* catch() { ... } // from try @ 036bf948 with catch @ 036bfb74 */
                    /* catch() { ... } // from try @ 036bf8c0 with catch @ 036bfb78 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 036bfb60 with catch @ 036bfb7c */
    thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 036bfb10 with catch @ 036bfb80 */
                    /* catch() { ... } // from try @ 036bfae0 with catch @ 036bfb84 */
                    /* catch() { ... } // from try @ 036bfb5c with catch @ 036bfb88 */
                    /* catch() { ... } // from try @ 036bfa88 with catch @ 036bfb8c */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 036bfa58 with catch @ 036bfb90 */
  if (!bVar1) {
                    /* catch() { ... } // from try @ 036bfb50 with catch @ 036bfbac */
                    /* catch() { ... } // from try @ 036bf8e0 with catch @ 036bfbb0 */
                    /* catch() { ... } // from try @ 036bf8b0 with catch @ 036bfbb4 */
    return;
  }
                    /* catch() { ... } // from try @ 036bfb58 with catch @ 036bfb94 */
  pNVar2 = (__this->fields).rightModel;
                    /* catch() { ... } // from try @ 036bf9f0 with catch @ 036bfb98 */
  if (pNVar2 != (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) {
                    /* catch() { ... } // from try @ 036bf9c0 with catch @ 036bfb9c */
                    /* catch() { ... } // from try @ 036bfb54 with catch @ 036bfba0 */
                    /* catch() { ... } // from try @ 036bf968 with catch @ 036bfba4 */
                    /* catch() { ... } // from try @ 036bf938 with catch @ 036bfba8 */
    Nekki_SF2_GUI_Fight_ScreenModel__RemoveCombo(pNVar2,(MethodInfo *)0x0);
    return;
  }
LAB_036bfbb8:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 036bfac8 with catch @ 036bfbb8 */
  FUN_01bab8c8();
}


// ===== public ScreenModel get_RightModel()  [RVA 0x35BFBBC]
// Nekki.SF2.GUI.Fight.ViewerFight$$get_RightModel @ RVA 0x35BFBBC

Nekki_SF2_GUI_Fight_ScreenModel_o *
Nekki_SF2_GUI_Fight_ViewerFight__get_RightModel
          (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  return (__this->fields).rightModel;
}

