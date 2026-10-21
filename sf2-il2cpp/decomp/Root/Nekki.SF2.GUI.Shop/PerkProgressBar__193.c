// TypeDefIndex 193
// Namespace: Nekki.SF2.GUI.Shop
// public class PerkProgressBar : ProgressBar
// Fields:
//   private float PAIPMANMCFP; // 0x48
//   private float PLGLBIKNOLG; // 0x4C
//   private float JHMGOHBKNMG; // 0x50
//   private float NMLGPAGEDKH; // 0x54
//   private GBNEKHAJILA JBNGADJBDHB; // 0x58
//   private float CNDEOMLMFDC; // 0x5C
//   private float MFLPMCOHHGB; // 0x60
//   private string HDOFPOOANDI; // 0x68

// ===== public float get_ValuePercentage()  [RVA 0x3117D34]
// Nekki.SF2.GUI.Shop.PerkProgressBar$$get_ValuePercentage @ RVA 0x3117D34

float Nekki_SF2_GUI_Shop_PerkProgressBar__get_ValuePercentage
                (Nekki_SF2_GUI_Shop_PerkProgressBar_o *__this,MethodInfo *method)

{
  return (__this->fields).super.super.JGFKHMMNJBA;
}


// ===== public void .ctor()  [RVA 0x3117D3C]
// Nekki.SF2.GUI.Shop.PerkProgressBar$$.ctor @ RVA 0x3117D3C

void Nekki_SF2_GUI_Shop_PerkProgressBar___ctor
               (Nekki_SF2_GUI_Shop_PerkProgressBar_o *__this,MethodInfo *method)

{
  ProgressBar___ctor((ProgressBar_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void OLOBIPCHMCC()  [RVA 0x3117D44]
// Nekki.SF2.GUI.Shop.PerkProgressBar$$OLOBIPCHMCC @ RVA 0x3117D44

void Nekki_SF2_GUI_Shop_PerkProgressBar__OLOBIPCHMCC
               (Nekki_SF2_GUI_Shop_PerkProgressBar_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  float fVar1;
  float value;
  float fVar2;
  
  __this_00 = (__this->fields).super.Stripe;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    value = (__this->fields).super.super.LBDAPHMEAKC;
    fVar1 = (__this->fields).super.super.JGFKHMMNJBA;
    fVar2 = (__this->fields).super.super.FGFINIPCGAL;
    if (fVar1 <= value) {
      value = fVar1;
    }
    if (fVar1 < fVar2) {
      value = fVar2;
    }
    UnityEngine_UI_Image__set_fillAmount
              ((UnityEngine_UI_Image_o *)__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private float EICIAPIEEAP()  [RVA 0x3117D7C]
// Nekki.SF2.GUI.Shop.PerkProgressBar$$EICIAPIEEAP @ RVA 0x3117D7C

float Nekki_SF2_GUI_Shop_PerkProgressBar__EICIAPIEEAP
                (Nekki_SF2_GUI_Shop_PerkProgressBar_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  ACHLOMELAJE_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  float fVar2;
  
  if ((DAT_045665c7 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045665c7 = 1;
    method = extraout_x1;
  }
  fVar2 = (__this->fields).PAIPMANMCFP;
  if ((fVar2 < 0.0) || ((__this->fields).PLGLBIKNOLG < 0.0)) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
      method = extraout_x1_00;
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
      method = extraout_x1_01;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = ACHLOMELAJE__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
    fVar2 = (__this->fields).JHMGOHBKNMG * (float)iVar1 + (__this->fields).NMLGPAGEDKH;
  }
                    /* try { // try from 03217e34 to 03317ec7 has its CatchHandler @ 03217e34
                       catch() { ... } // from try @ 03217e34 with catch @ 03217e34
                       catch() { ... } // from try @ 03218030 with catch @ 03217e34
                       catch() { ... } // from try @ 032180d8 with catch @ 03217e34
                       catch() { ... } // from try @ 032181ac with catch @ 03217e34 */
  return fVar2;
}


// ===== public void set_ValuePercentage(float CJNHFNHJHPE)  [RVA 0x3117E40]
// Nekki.SF2.GUI.Shop.PerkProgressBar$$set_ValuePercentage @ RVA 0x3117E40

void Nekki_SF2_GUI_Shop_PerkProgressBar__set_ValuePercentage
               (Nekki_SF2_GUI_Shop_PerkProgressBar_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_PerkProgressBar_c *pNVar1;
  
  pNVar1 = __this->klass;
  (__this->fields).super.super.JGFKHMMNJBA = CJNHFNHJHPE;
                    /* WARNING: Could not recover jumptable at 0x03217e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pNVar1->vtable)._4_OLOBIPCHMCC.methodPtr)(__this,(pNVar1->vtable)._4_OLOBIPCHMCC.method);
  return;
}


// ===== public void set_BarScale(string CJNHFNHJHPE)  [RVA 0x3117E50]
// Nekki.SF2.GUI.Shop.PerkProgressBar$$set_BarScale @ RVA 0x3117E50

void Nekki_SF2_GUI_Shop_PerkProgressBar__set_BarScale
               (Nekki_SF2_GUI_Shop_PerkProgressBar_o *__this,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  float fVar1;
  bool bVar2;
  int32_t JLAFGLDIFOC;
  ALJBCELIEHC_o *__this_00;
  ACHLOMELAJE_o *__this_01;
  NFEOGKEAFHL_o *pNVar3;
  MethodInfo *method_00;
  System_Collections_Generic_List_NFEOGKEAFHL__o *pSVar4;
  System_String_o **ppSVar5;
  undefined8 uVar6;
  
  if ((DAT_045665c8 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NFEOGKEAFHL>_get_Count__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045665c8 = 1;
  }
  ppSVar5 = &(__this->fields).HDOFPOOANDI;
  method_00 = (MethodInfo *)0x0;
  bVar2 = System_String__op_Equality(*ppSVar5,CJNHFNHJHPE,(MethodInfo *)0x0);
  if ((!bVar2) &&
     (__this_00 = Nekki_SF2_GUI_Shop_PerkProgressBar__HNJLNPEEMOK
                            ((Nekki_SF2_GUI_Shop_PerkProgressBar_o *)0x0,CJNHFNHJHPE,method_00),
     __this_00 != (ALJBCELIEHC_o *)0x0)) {
    *ppSVar5 = CJNHFNHJHPE;
    thunk_FUN_01c20e04(ppSVar5,CJNHFNHJHPE);
                    /* try { // try from 03217ec8 to 03317ecf has its CatchHandler @ 032180e8 */
    pSVar4 = (__this_00->fields).PBGALMEHDBP;
    if (pSVar4 == (System_Collections_Generic_List_NFEOGKEAFHL__o *)0x0) goto LAB_03217fa4;
    if ((pSVar4->fields)._size == 0) {
      (__this->fields).PAIPMANMCFP = 0.0;
      (__this->fields).PLGLBIKNOLG = 0.0;
    }
    else {
                    /* try { // try from 03217ee0 to 03317efb has its CatchHandler @ 032180f0 */
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03217f1c to 03317f23 has its CatchHandler @ 032180f4 */
        thunk_FUN_01ba7564();
      }
      __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* try { // try from 03217f2c to 03317f33 has its CatchHandler @ 032180f8 */
      if (__this_01 == (ACHLOMELAJE_o *)0x0) {
LAB_03217fa4:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      JLAFGLDIFOC = ACHLOMELAJE__EOEAKGGDBFH(__this_01,(MethodInfo *)0x0);
                    /* try { // try from 03217f40 to 03317f67 has its CatchHandler @ 03218100 */
      pNVar3 = ALJBCELIEHC__FCNIFPFAFAF(__this_00,JLAFGLDIFOC,(MethodInfo *)0x0);
      if ((pNVar3 == (NFEOGKEAFHL_o *)0x0) &&
         (pNVar3 = ALJBCELIEHC__ILDMHAKLLJC(__this_00,(MethodInfo *)0x0),
         pNVar3 == (NFEOGKEAFHL_o *)0x0)) goto LAB_03217fa4;
      uVar6._0_4_ = (pNVar3->fields).OAJHHJBAINM;
      uVar6._4_4_ = (pNVar3->fields).DJNEKDHLEHN;
      uVar6 = NEON_scvtf(uVar6,4);
      (__this->fields).PAIPMANMCFP = (float)(int)uVar6;
      (__this->fields).PLGLBIKNOLG = (float)(int)((ulong)uVar6 >> 0x20);
      (__this->fields).JHMGOHBKNMG = (pNVar3->fields).MJHEJPAHPGF;
      (__this->fields).NMLGPAGEDKH = (float)(pNVar3->fields).GHKNFJJOIDM;
    }
    (__this->fields).JBNGADJBDHB = (__this_00->fields).BGHFADDGPAD;
    fVar1 = (__this_00->fields).AKPNOPAEKEF;
    (__this->fields).CNDEOMLMFDC = (__this_00->fields).LDNOMBGGMHF;
    (__this->fields).MFLPMCOHHGB = fVar1;
  }
                    /* try { // try from 03217fa0 to 03317fa7 has its CatchHandler @ 0321810c */
  return;
}


// ===== public override void SetValue(float LHBMDHAGMIO, float GGMALJLKHHB = 0, Action CAMCPDBKCGI)  [RVA 0x31180B0]
// Nekki.SF2.GUI.Shop.PerkProgressBar$$SetValue @ RVA 0x31180B0

/* WARNING: Removing unreachable block (ram,0x032180d4) */

void Nekki_SF2_GUI_Shop_PerkProgressBar__SetValue
               (Nekki_SF2_GUI_Shop_PerkProgressBar_o *__this,float LHBMDHAGMIO,float GGMALJLKHHB,
               System_Action_o *CAMCPDBKCGI,MethodInfo *method)

{
  float NBHHBBOJJME;
  float fVar1;
  
                    /* try { // try from 032180bc to 033180bf has its CatchHandler @ 03218118 */
                    /* try { // try from 032180c0 to 033180c3 has its CatchHandler @ 03218114 */
                    /* try { // try from 032180c4 to 033180c7 has its CatchHandler @ 03218118 */
                    /* try { // try from 032180c8 to 033180cb has its CatchHandler @ 03218104 */
  NBHHBBOJJME = Nekki_SF2_GUI_Shop_PerkProgressBar__PIJGHADPLNK
                          (__this,LHBMDHAGMIO,(MethodInfo *)CAMCPDBKCGI);
                    /* try { // try from 032180cc to 033180d3 has its CatchHandler @ 032180fc */
  fVar1 = (__this->fields).MFLPMCOHHGB;
                    /* try { // try from 032180d4 to 033180d7 has its CatchHandler @ 032180ec */
                    /* try { // try from 032180d8 to 0331812f has its CatchHandler @ 03217e34 */
                    /* catch() { ... } // from try @ 03218024 with catch @ 032180e0 */
                    /* catch() { ... } // from try @ 03218010 with catch @ 032180e4 */
                    /* catch() { ... } // from try @ 03217ec8 with catch @ 032180e8 */
                    /* catch() { ... } // from try @ 032180d4 with catch @ 032180ec */
                    /* catch() { ... } // from try @ 03217ee0 with catch @ 032180f0 */
  if (NBHHBBOJJME < 0.0) {
    NBHHBBOJJME = 0.0;
  }
                    /* catch() { ... } // from try @ 03217f1c with catch @ 032180f4 */
                    /* catch() { ... } // from try @ 03217f2c with catch @ 032180f8 */
  if (NBHHBBOJJME <= fVar1) {
    NBHHBBOJJME = fVar1;
  }
                    /* catch() { ... } // from try @ 032180cc with catch @ 032180fc */
                    /* catch() { ... } // from try @ 03217f40 with catch @ 03218100 */
                    /* catch() { ... } // from try @ 032180c8 with catch @ 03218104 */
                    /* catch() { ... } // from try @ 03217fb4 with catch @ 03218108 */
  ProgressBarBase__SetValue
            ((ProgressBarBase_o *)__this,NBHHBBOJJME,GGMALJLKHHB,CAMCPDBKCGI,(MethodInfo *)0x0);
  return;
}


// ===== public override void SetValueBorders(float OGHDILLOGDA, float KMOHFJKJBMK)  [RVA 0x3118140]
// Nekki.SF2.GUI.Shop.PerkProgressBar$$SetValueBorders @ RVA 0x3118140

void Nekki_SF2_GUI_Shop_PerkProgressBar__SetValueBorders
               (Nekki_SF2_GUI_Shop_PerkProgressBar_o *__this,float OGHDILLOGDA,float KMOHFJKJBMK,
               MethodInfo *method)

{
  (__this->fields).super.super.FGFINIPCGAL = OGHDILLOGDA;
  (__this->fields).super.super.LBDAPHMEAKC = KMOHFJKJBMK;
                    /* catch() { ... } // from try @ 03218130 with catch @ 03218144 */
  return;
}


// ===== public string get_BarScale()  [RVA 0x3118148]
// Nekki.SF2.GUI.Shop.PerkProgressBar$$get_BarScale @ RVA 0x3118148

System_String_o *
Nekki_SF2_GUI_Shop_PerkProgressBar__get_BarScale
          (Nekki_SF2_GUI_Shop_PerkProgressBar_o *__this,MethodInfo *method)

{
  return (__this->fields).HDOFPOOANDI;
}


// ===== public override void Init()  [RVA 0x3118150]
// Nekki.SF2.GUI.Shop.PerkProgressBar$$Init @ RVA 0x3118150

void Nekki_SF2_GUI_Shop_PerkProgressBar__Init
               (Nekki_SF2_GUI_Shop_PerkProgressBar_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_PerkProgressBar_c *pNVar1;
  
  ProgressBar__Init((ProgressBar_o *)__this,(MethodInfo *)0x0);
  pNVar1 = __this->klass;
  (__this->fields).super.super.JGFKHMMNJBA = 0.0;
  (__this->fields).super.super.FGFINIPCGAL = 0.0;
  (__this->fields).super.super.LBDAPHMEAKC = 1.0;
                    /* WARNING: Could not recover jumptable at 0x03218180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pNVar1->vtable)._4_OLOBIPCHMCC.methodPtr)(__this,(pNVar1->vtable)._4_OLOBIPCHMCC.method);
  return;
}


// ===== private float HJDCCABBLKF()  [RVA 0x3118184]
// Nekki.SF2.GUI.Shop.PerkProgressBar$$HJDCCABBLKF @ RVA 0x3118184

float Nekki_SF2_GUI_Shop_PerkProgressBar__HJDCCABBLKF
                (Nekki_SF2_GUI_Shop_PerkProgressBar_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  ACHLOMELAJE_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  float fVar2;
  
                    /* try { // try from 03218184 to 033181ab has its CatchHandler @ 032181c0 */
  if ((DAT_045665c9 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 032181ac to 033181b7 has its CatchHandler @ 03217e34 */
    DAT_045665c9 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 032181b8 to 033181bf has its CatchHandler @ 032181c0 */
                    /* catch() { ... } // from try @ 03218184 with catch @ 032181c0
                       catch() { ... } // from try @ 032181b8 with catch @ 032181c0 */
                    /* try { // try from 032181c4 to 0331828f has its CatchHandler @ 032181c4
                       catch() { ... } // from try @ 032181c4 with catch @ 032181c4
                       catch() { ... } // from try @ 032182d8 with catch @ 032181c4
                       catch() { ... } // from try @ 03218330 with catch @ 032181c4
                       catch() { ... } // from try @ 03218364 with catch @ 032181c4
                       catch() { ... } // from try @ 03218394 with catch @ 032181c4 */
  if (((__this->fields).PAIPMANMCFP < 0.0) || (fVar2 = (__this->fields).PLGLBIKNOLG, fVar2 < 0.0)) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
      method = extraout_x1_00;
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
      method = extraout_x1_01;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = ACHLOMELAJE__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
    fVar2 = (__this->fields).JHMGOHBKNMG * (float)iVar1 + (__this->fields).NMLGPAGEDKH;
  }
  return fVar2;
}


// ===== private float NLFAIJPCCLI(float OOGPLJBADCD)  [RVA 0x311810C]
// Nekki.SF2.GUI.Shop.PerkProgressBar$$NLFAIJPCCLI @ RVA 0x311810C

/* WARNING: Removing unreachable block (ram,0x03218120) */

float Nekki_SF2_GUI_Shop_PerkProgressBar__NLFAIJPCCLI
                (Nekki_SF2_GUI_Shop_PerkProgressBar_o *__this,float OOGPLJBADCD,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
                    /* catch() { ... } // from try @ 03217fa0 with catch @ 0321810c */
                    /* catch() { ... } // from try @ 03217fc8 with catch @ 03218110 */
                    /* catch() { ... } // from try @ 032180c0 with catch @ 03218114 */
  fVar1 = Nekki_SF2_GUI_Shop_PerkProgressBar__PIJGHADPLNK(__this,OOGPLJBADCD,method);
                    /* catch() { ... } // from try @ 032180bc with catch @ 03218118
                       catch() { ... } // from try @ 032180c4 with catch @ 03218118 */
  fVar2 = (__this->fields).MFLPMCOHHGB;
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
                    /* try { // try from 03218130 to 03318133 has its CatchHandler @ 03218144 */
  if (fVar1 <= fVar2) {
    fVar1 = fVar2;
  }
  return fVar1;
}


// ===== private float PIJGHADPLNK(float OOGPLJBADCD)  [RVA 0x3118248]
// Nekki.SF2.GUI.Shop.PerkProgressBar$$PIJGHADPLNK @ RVA 0x3118248

float Nekki_SF2_GUI_Shop_PerkProgressBar__PIJGHADPLNK
                (Nekki_SF2_GUI_Shop_PerkProgressBar_o *__this,float OOGPLJBADCD,MethodInfo *method)

{
  int iVar1;
  MethodInfo *extraout_x1;
  MGNPHCAAEIO_StaticFields *pMVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_50;
  
  if ((DAT_045665ca & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_045665ca = 1;
    method = extraout_x1;
  }
  fVar3 = Nekki_SF2_GUI_Shop_PerkProgressBar__HJDCCABBLKF(__this,method);
  iVar1 = (__this->fields).JBNGADJBDHB;
                    /* try { // try from 03218290 to 03318297 has its CatchHandler @ 03218344 */
  if (iVar1 == 1) {
    fVar5 = (__this->fields).CNDEOMLMFDC;
                    /* try { // try from 032182d0 to 033182d7 has its CatchHandler @ 03218334 */
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 032182d8 to 03318327 has its CatchHandler @ 032181c4 */
      thunk_FUN_01ba7564();
    }
    pMVar2 = MGNPHCAAEIO_TypeInfo->static_fields;
    local_50.fakeValueActive = (pMVar2->EEBCCADECEJ).fields.fakeValueActive;
    local_50.inited = (pMVar2->EEBCCADECEJ).fields.inited;
    local_50._18_2_ = *(undefined2 *)&(pMVar2->EEBCCADECEJ).fields.field_0x12;
    local_50.hiddenValueOldByte4.fields = (pMVar2->EEBCCADECEJ).fields.hiddenValueOldByte4.fields;
    local_50.fakeValue = (pMVar2->EEBCCADECEJ).fields.fakeValue;
    local_50.currentCryptoKey = (pMVar2->EEBCCADECEJ).fields.currentCryptoKey;
    local_50.hiddenValue = (pMVar2->EEBCCADECEJ).fields.hiddenValue;
    fVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_50,
                       (MethodInfo *)0x0);
    OOGPLJBADCD = exp2f(((OOGPLJBADCD - fVar3) * fVar5) / fVar4);
  }
  else if (iVar1 == 0) {
                    /* try { // try from 032182ac to 033182b3 has its CatchHandler @ 03218340 */
                    /* try { // try from 032182bc to 033182c3 has its CatchHandler @ 03218338 */
    fVar3 = powf(OOGPLJBADCD / fVar3,(__this->fields).CNDEOMLMFDC);
    return fVar3;
  }
                    /* try { // try from 03218328 to 0331832f has its CatchHandler @ 0321833c */
  return OOGPLJBADCD;
}


// ===== private ALJBCELIEHC HNJLNPEEMOK(string AFKICLAFDKC)  [RVA 0x3117FA8]
// Nekki.SF2.GUI.Shop.PerkProgressBar$$HNJLNPEEMOK @ RVA 0x3117FA8

ALJBCELIEHC_o *
Nekki_SF2_GUI_Shop_PerkProgressBar__HNJLNPEEMOK
          (Nekki_SF2_GUI_Shop_PerkProgressBar_o *__this,System_String_o *AFKICLAFDKC,
          MethodInfo *method)

{
  DNICJALNLEB_o *pDVar1;
  ALJBCELIEHC_o *pAVar2;
  System_Collections_Generic_List_ALJBCELIEHC__o *pSVar3;
  
                    /* try { // try from 03217fb4 to 03317fbb has its CatchHandler @ 03218108 */
  if ((DAT_045665cb & 1) == 0) {
                    /* try { // try from 03217fc8 to 03317fcf has its CatchHandler @ 03218110 */
    FUN_01bab630(&Method_System_Collections_Generic_List<ALJBCELIEHC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ALJBCELIEHC>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_045665cb = 1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar1 = MGNPHCAAEIO_TypeInfo->static_fields->CKACCOEFOEA;
                    /* try { // try from 03218010 to 03318017 has its CatchHandler @ 032180e4 */
  if (pDVar1 != (DNICJALNLEB_o *)0x0) {
    pAVar2 = DNICJALNLEB__HNJLNPEEMOK(pDVar1,AFKICLAFDKC,(MethodInfo *)0x0);
    if (pAVar2 != (ALJBCELIEHC_o *)0x0) {
                    /* try { // try from 03218024 to 0331802f has its CatchHandler @ 032180e0 */
      return pAVar2;
    }
                    /* try { // try from 03218030 to 033180bb has its CatchHandler @ 03217e34 */
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pDVar1 = MGNPHCAAEIO_TypeInfo->static_fields->CKACCOEFOEA;
    if ((pDVar1 != (DNICJALNLEB_o *)0x0) &&
       (pSVar3 = (pDVar1->fields).HLEDPFGACOE,
       pSVar3 != (System_Collections_Generic_List_ALJBCELIEHC__o *)0x0)) {
      if ((pSVar3->fields)._size < 1) {
        return (ALJBCELIEHC_o *)0x0;
      }
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pDVar1 = MGNPHCAAEIO_TypeInfo->static_fields->CKACCOEFOEA;
        if (pDVar1 == (DNICJALNLEB_o *)0x0) goto LAB_032180ac;
      }
      pSVar3 = (pDVar1->fields).HLEDPFGACOE;
      if (pSVar3 != (System_Collections_Generic_List_ALJBCELIEHC__o *)0x0) {
        pAVar2 = (ALJBCELIEHC_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar3,0,
                            Method_System_Collections_Generic_List<ALJBCELIEHC>_get_Item__);
        return pAVar2;
      }
    }
  }
LAB_032180ac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void set_Value(float CJNHFNHJHPE)  [RVA 0x3118330]
// Nekki.SF2.GUI.Shop.PerkProgressBar$$set_Value @ RVA 0x3118330

void Nekki_SF2_GUI_Shop_PerkProgressBar__set_Value
               (Nekki_SF2_GUI_Shop_PerkProgressBar_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
                    /* try { // try from 03218330 to 0331835f has its CatchHandler @ 032181c4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032182d0 with catch @ 03218334
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032182bc with catch @ 03218338
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03218328 with catch @ 0321833c
                        */
                    /* WARNING: Could not recover jumptable at 0x03218340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032182ac with catch @ 03218340
                        */
  (*(__this->klass->vtable)._8_SetValue.methodPtr)
            (CJNHFNHJHPE,0,__this,0,(__this->klass->vtable)._8_SetValue.method);
  return;
}

