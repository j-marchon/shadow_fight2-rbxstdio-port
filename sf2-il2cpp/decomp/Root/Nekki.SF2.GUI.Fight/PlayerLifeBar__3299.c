// TypeDefIndex 3299
// Namespace: Nekki.SF2.GUI.Fight
// public class PlayerLifeBar : MonoBehaviour
// Fields:
//   private ResolutionImageSkew _background; // 0x20
//   private ResolutionImageSkew _healthBar; // 0x28
//   private ResolutionImageSkew _hitBar; // 0x30
//   private Transform _barPanel; // 0x38
//   private Color _nextLevelColor; // 0x40
//   private string _healthBarSpriteName; // 0x50
//   private string _raidHealthBarSpriteName; // 0x58
//   private string _pvpFirst_HealthBarSpriteName; // 0x60
//   private string _pvpFirst_HitBarSpriteName; // 0x68
//   private List<ResolutionImageSkew> HONNHINBNAJ; // 0x70
//   private PJKHAJKEHEL MFLNIMCFPDK; // 0x78
//   private float HDFOJFNFNGG; // 0x80
//   private float HFMAMOEIOOB; // 0x84
//   private float OEDKOODFCLP; // 0x88
//   private float DANCJAPPNKJ; // 0x8C
//   private int LLNOECKGCGG; // 0x90
//   private int NHDMJMILNKJ; // 0x94
//   private float PCBAEDMJDCC; // 0x98
//   private float AIGDHMHBAFN; // 0x9C
//   private int PACENOHGIGO; // 0xA0
//   private int AFHDCNAMJMP; // 0xA4
//   public bool LockLifeUpdate; // 0xA8
//   private const int FOJNEEFGDFH = 60;
//   private const int AOFCOAPMAIN = 10;
//   private const int PNKEHJGCCCF = 30;
//   private const float LECKMAMNKLC = 1;

// ===== private void ONHOMNIFFEN(float PCAIKIGGBMJ)  [RVA 0x351F804]
// Nekki.SF2.GUI.Fight.PlayerLifeBar$$ONHOMNIFFEN @ RVA 0x351F804

void Nekki_SF2_GUI_Fight_PlayerLifeBar__ONHOMNIFFEN
               (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *__this,float PCAIKIGGBMJ,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  Nekki_SF2_GUI_ResolutionImageSkew_o *pNVar3;
  UnityEngine_GameObject_o *pUVar4;
  Nekki_SF2_GUI_ResolutionImageSkew_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_x2;
  MethodInfo *pMVar5;
  float CJNHFNHJHPE;
  float fVar6;
  UnityEngine_Color_o endValue;
  
  CJNHFNHJHPE = Nekki_SF2_GUI_Fight_PlayerLifeBar__CJBJILOKLDI(__this,PCAIKIGGBMJ,method);
                    /* try { // try from 0361f820 to 0371f82b has its CatchHandler @ 0361f908 */
  iVar1 = Nekki_SF2_GUI_Fight_PlayerLifeBar__DefineLevelNumber
                    (__this,(__this->fields).DANCJAPPNKJ,method_00);
                    /* try { // try from 0361f83c to 0371f8a3 has its CatchHandler @ 0361fab8 */
  iVar2 = Nekki_SF2_GUI_Fight_PlayerLifeBar__DefineLevelNumber(__this,CJNHFNHJHPE,method_01);
  pNVar3 = Nekki_SF2_GUI_Fight_PlayerLifeBar__PHLFFKHKCMD(__this,iVar1 * 2 + -2,in_x2);
  if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0) &&
     (pUVar4 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
     pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
    pMVar5 = (MethodInfo *)0x0;
    UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
    if (1 < iVar1) {
      pNVar3 = Nekki_SF2_GUI_Fight_PlayerLifeBar__PHLFFKHKCMD(__this,iVar1 * 2 + -4,pMVar5);
      if ((pNVar3 == (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0) ||
         (pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         pUVar4 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0361f9ac;
      pMVar5 = (MethodInfo *)0x0;
      UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
    }
    pNVar3 = Nekki_SF2_GUI_Fight_PlayerLifeBar__PHLFFKHKCMD(__this,iVar2 * 2 + -2,pMVar5);
    if (iVar2 == iVar1) {
      if (pNVar3 == (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0) goto LAB_0361f9ac;
    }
    else {
      if (pNVar3 == (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0) goto LAB_0361f9ac;
                    /* try { // try from 0361f8d4 to 0371f8d7 has its CatchHandler @ 0361fa90 */
                    /* try { // try from 0361f8e0 to 0371f8eb has its CatchHandler @ 0361fa88 */
      (*(pNVar3->klass->vtable)._23_set_color.methodPtr)
                ((ulong)(uint)(__this->fields)._nextLevelColor.fields.r,
                 (__this->fields)._nextLevelColor.fields.g,(__this->fields)._nextLevelColor.fields.b
                 ,(__this->fields)._nextLevelColor.fields.a,pNVar3,
                 (pNVar3->klass->vtable)._23_set_color.method);
      endValue.fields.b = 1.0;
      endValue.fields.a = 1.0;
      endValue.fields.r = 1.0;
      endValue.fields.g = 1.0;
                    /* try { // try from 0361f8f0 to 0371f8f7 has its CatchHandler @ 0361f90c */
                    /* try { // try from 0361f8fc to 0371f8ff has its CatchHandler @ 0361f904 */
                    /* try { // try from 0361f900 to 0371f923 has its CatchHandler @ 0361f568 */
      DG_Tweening_DOTweenModuleUI__DOColor
                ((UnityEngine_UI_Image_o *)pNVar3,endValue,1.0,(MethodInfo *)0x0);
    }
                    /* catch() { ... } // from try @ 0361f8fc with catch @ 0361f904 */
                    /* catch() { ... } // from try @ 0361f820 with catch @ 0361f908 */
                    /* catch() { ... } // from try @ 0361f8f0 with catch @ 0361f90c */
    pUVar4 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0361f7c0 with catch @ 0361f910 */
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                    /* catch() { ... } // from try @ 0361f764 with catch @ 0361f914 */
      pMVar5 = (MethodInfo *)0x0;
      UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
                    /* try { // try from 0361f924 to 0371f927 has its CatchHandler @ 0361fa78 */
      if (iVar2 < 2) {
LAB_0361f970:
        fVar6 = (__this->fields).AIGDHMHBAFN;
        UnityEngine_UI_Image__set_fillAmount
                  ((UnityEngine_UI_Image_o *)pNVar3,
                   (CJNHFNHJHPE - fVar6 * (float)(iVar2 + -1)) / fVar6,(MethodInfo *)0x0);
        (__this->fields).DANCJAPPNKJ = CJNHFNHJHPE;
        return;
      }
                    /* try { // try from 0361f928 to 0371f9cf has its CatchHandler @ 0361f568 */
      __this_00 = Nekki_SF2_GUI_Fight_PlayerLifeBar__PHLFFKHKCMD(__this,iVar2 * 2 + -4,pMVar5);
      if (__this_00 != (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0) {
        (*(__this_00->klass->vtable)._23_set_color.methodPtr)
                  ((ulong)(uint)(__this->fields)._nextLevelColor.fields.r,
                   (__this->fields)._nextLevelColor.fields.g,
                   (__this->fields)._nextLevelColor.fields.b,
                   (__this->fields)._nextLevelColor.fields.a,__this_00,
                   (__this_00->klass->vtable)._23_set_color.method);
        pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
          goto LAB_0361f970;
        }
      }
    }
  }
LAB_0361f9ac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetValBarValue(float CJNHFNHJHPE, int ABKNPBMGHKH = 0)  [RVA 0x351FB48]
// Nekki.SF2.GUI.Fight.PlayerLifeBar$$SetValBarValue @ RVA 0x351FB48

void Nekki_SF2_GUI_Fight_PlayerLifeBar__SetValBarValue
               (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *__this,float CJNHFNHJHPE,int32_t ABKNPBMGHKH,
               MethodInfo *method)

{
  (__this->fields).HDFOJFNFNGG = CJNHFNHJHPE;
                    /* try { // try from 0361fb4c to 0371fb57 has its CatchHandler @ 0361f568 */
  (__this->fields).LLNOECKGCGG = ABKNPBMGHKH;
  if (ABKNPBMGHKH != 0) {
    return;
  }
                    /* try { // try from 0361fb58 to 0371fb5f has its CatchHandler @ 0361fb60 */
  Nekki_SF2_GUI_Fight_PlayerLifeBar__JCCAPMJPHOM(__this,CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}


// ===== public int DefineLevelNumber(float CJNHFNHJHPE)  [RVA 0x351FA3C]
// Nekki.SF2.GUI.Fight.PlayerLifeBar$$DefineLevelNumber @ RVA 0x351FA3C

int32_t Nekki_SF2_GUI_Fight_PlayerLifeBar__DefineLevelNumber
                  (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = (__this->fields).PACENOHGIGO;
                    /* try { // try from 0361fa54 to 0371fa57 has its CatchHandler @ 0361faa8 */
                    /* try { // try from 0361fa58 to 0371fa5b has its CatchHandler @ 0361faa4 */
  if ((0 < iVar1) && (0 < (__this->fields).AFHDCNAMJMP)) {
                    /* try { // try from 0361fa5c to 0371fa63 has its CatchHandler @ 0361fa98 */
    fVar3 = (__this->fields).AIGDHMHBAFN;
                    /* try { // try from 0361fa64 to 0371fa67 has its CatchHandler @ 0361fa8c */
                    /* try { // try from 0361fa68 to 0371fa6b has its CatchHandler @ 0361f568 */
                    /* try { // try from 0361fa6c to 0371fa6f has its CatchHandler @ 0361fa84 */
                    /* try { // try from 0361fa70 to 0371fac7 has its CatchHandler @ 0361f568 */
    fVar4 = CJNHFNHJHPE / fVar3 + 1.0;
                    /* catch() { ... } // from try @ 0361f924 with catch @ 0361fa78 */
    iVar2 = -0x80000000;
    if (fVar4 != INFINITY) {
      iVar2 = (int)fVar4;
    }
                    /* catch() { ... } // from try @ 0361fa6c with catch @ 0361fa84 */
                    /* catch() { ... } // from try @ 0361f8e0 with catch @ 0361fa88 */
                    /* catch() { ... } // from try @ 0361fa64 with catch @ 0361fa8c */
    fVar3 = fmodf(CJNHFNHJHPE,fVar3);
                    /* catch() { ... } // from try @ 0361f8d4 with catch @ 0361fa90 */
                    /* catch() { ... } // from try @ 0361f8c0 with catch @ 0361fa94 */
                    /* catch() { ... } // from try @ 0361fa5c with catch @ 0361fa98 */
                    /* catch() { ... } // from try @ 0361f714 with catch @ 0361fa9c */
    iVar2 = iVar2 - (uint)(CJNHFNHJHPE != 0.0 && fVar3 == 0.0);
                    /* catch() { ... } // from try @ 0361f728 with catch @ 0361faa0 */
                    /* catch() { ... } // from try @ 0361fa58 with catch @ 0361faa4 */
    if (0 < iVar2) goto LAB_0361faac;
  }
                    /* catch() { ... } // from try @ 0361fa54 with catch @ 0361faa8 */
  iVar2 = 1;
LAB_0361faac:
                    /* catch() { ... } // from try @ 0361f6a8 with catch @ 0361faac */
                    /* catch() { ... } // from try @ 0361f64c with catch @ 0361fab0 */
                    /* catch() { ... } // from try @ 0361fa20 with catch @ 0361fab4 */
  if (iVar1 < 1 || iVar2 <= iVar1) {
    iVar1 = iVar2;
  }
                    /* catch() { ... } // from try @ 0361f83c with catch @ 0361fab8 */
  return iVar1;
}


// ===== public void set_RaidHealthBarSpriteName(string CJNHFNHJHPE)  [RVA 0x351FD08]
// Nekki.SF2.GUI.Fight.PlayerLifeBar$$set_RaidHealthBarSpriteName @ RVA 0x351FD08

void Nekki_SF2_GUI_Fight_PlayerLifeBar__set_RaidHealthBarSpriteName
               (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *__this,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
                    /* try { // try from 0361fd08 to 0371fd1b has its CatchHandler @ 0361fd7c */
  (__this->fields)._raidHealthBarSpriteName = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void set_HealthBarSpriteName(string CJNHFNHJHPE)  [RVA 0x351FD10]
// Nekki.SF2.GUI.Fight.PlayerLifeBar$$set_HealthBarSpriteName @ RVA 0x351FD10

void Nekki_SF2_GUI_Fight_PlayerLifeBar__set_HealthBarSpriteName
               (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *__this,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._healthBarSpriteName = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public RectTransform get_rectTransform()  [RVA 0x351FD18]
// Nekki.SF2.GUI.Fight.PlayerLifeBar$$get_rectTransform @ RVA 0x351FD18

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_Fight_PlayerLifeBar__get_rectTransform
          (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  
                    /* try { // try from 0361fd1c to 0371fd57 has its CatchHandler @ 0361fb64 */
  if ((DAT_045689b0 & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_045689b0 = 1;
  }
  pUVar1 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
                    /* try { // try from 0361fd58 to 0371fd5b has its CatchHandler @ 0361fda0 */
                    /* try { // try from 0361fd5c to 0371fd5f has its CatchHandler @ 0361fd9c */
                    /* try { // try from 0361fd60 to 0371fd63 has its CatchHandler @ 0361fb64 */
                    /* try { // try from 0361fd64 to 0371fd67 has its CatchHandler @ 0361fd8c */
                    /* try { // try from 0361fd68 to 0371fd6b has its CatchHandler @ 0361fd84 */
    if (pUVar1->klass != UnityEngine_RectTransform_TypeInfo) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0361fcb8 with catch @ 0361fd78 */
      FUN_01babc64();
    }
  }
                    /* try { // try from 0361fd6c to 0371fd6f has its CatchHandler @ 0361fd74 */
                    /* catch() { ... } // from try @ 0361fcd4 with catch @ 0361fd70
                       try { // try from 0361fd70 to 0371fdbb has its CatchHandler @ 0361fb64 */
                    /* catch() { ... } // from try @ 0361fd6c with catch @ 0361fd74 */
  return pUVar1;
}


// ===== private void ABOIEFEPBBF()  [RVA 0x351FD7C]
// Nekki.SF2.GUI.Fight.PlayerLifeBar$$ABOIEFEPBBF @ RVA 0x351FD7C

void Nekki_SF2_GUI_Fight_PlayerLifeBar__ABOIEFEPBBF
               (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  int32_t iVar3;
  FCJBEKHDLAF_o *__this_00;
  UnityEngine_GameObject_o *pUVar4;
  System_Collections_Generic_List_ResolutionImageSkew__o *pSVar5;
  UnityEngine_Component_o *pUVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  int iVar7;
  PJKHAJKEHEL_o *pPVar8;
  Nekki_SF2_GUI_ResolutionImageSkew_o *pNVar9;
  Nekki_SF2_GUI_ResolutionImageSkew_array *pNVar10;
  System_String_o **ppSVar11;
  int iVar12;
  float fVar13;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_80;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_60;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_40;
  
                    /* catch() { ... } // from try @ 0361fd08 with catch @ 0361fd7c */
                    /* catch() { ... } // from try @ 0361fca8 with catch @ 0361fd80 */
                    /* catch() { ... } // from try @ 0361fd68 with catch @ 0361fd84 */
                    /* catch() { ... } // from try @ 0361fce8 with catch @ 0361fd88 */
                    /* catch() { ... } // from try @ 0361fd64 with catch @ 0361fd8c */
                    /* catch() { ... } // from try @ 0361fcf4 with catch @ 0361fd90 */
                    /* catch() { ... } // from try @ 0361fc80 with catch @ 0361fd94 */
  if ((DAT_045689b1 & 1) == 0) {
                    /* catch() { ... } // from try @ 0361fc90 with catch @ 0361fd98 */
                    /* catch() { ... } // from try @ 0361fd5c with catch @ 0361fd9c */
                    /* catch() { ... } // from try @ 0361fd58 with catch @ 0361fda0 */
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
                    /* catch() { ... } // from try @ 0361fc6c with catch @ 0361fda4 */
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImageSkew>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImageSkew>_get_Item__);
                    /* try { // try from 0361fdbc to 0371fdbf has its CatchHandler @ 0361fde0 */
                    /* try { // try from 0361fdc0 to 0371fde7 has its CatchHandler @ 0361fb64 */
    DAT_045689b1 = 1;
  }
  pPVar8 = (__this->fields).MFLNIMCFPDK;
  (__this->fields).LockLifeUpdate = false;
  (__this->fields).OEDKOODFCLP = 0.0;
  (__this->fields).DANCJAPPNKJ = 0.0;
  (__this->fields).LLNOECKGCGG = 0;
  (__this->fields).NHDMJMILNKJ = 0;
  (__this->fields).HDFOJFNFNGG = 0.0;
  (__this->fields).HFMAMOEIOOB = 0.0;
  (__this->fields).PCBAEDMJDCC = 0.0;
  if (pPVar8 != (PJKHAJKEHEL_o *)0x0) {
                    /* catch() { ... } // from try @ 0361fdbc with catch @ 0361fde0 */
                    /* try { // try from 0361fde8 to 0371fdef has its CatchHandler @ 0361fe04 */
    iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (pPVar8->fields).GLOFEDAFAEG.fields,(MethodInfo *)0x0);
    pPVar8 = (__this->fields).MFLNIMCFPDK;
                    /* try { // try from 0361fdf0 to 0371fdfb has its CatchHandler @ 0361fb64 */
    (__this->fields).PACENOHGIGO = iVar3;
    if (pPVar8 != (PJKHAJKEHEL_o *)0x0) {
                    /* try { // try from 0361fdfc to 0371fe03 has its CatchHandler @ 0361fe04 */
                    /* catch() { ... } // from try @ 0361fde8 with catch @ 0361fe04
                       catch() { ... } // from try @ 0361fdfc with catch @ 0361fe04 */
      iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (pPVar8->fields).ALJDGEBLHAF.fields,(MethodInfo *)0x0);
      (__this->fields).AFHDCNAMJMP = iVar3;
      if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7f == '\0') {
        FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
        DAT_04565b7f = '\x01';
      }
      if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
      if (__this_00 != (FCJBEKHDLAF_o *)0x0) {
        iVar3 = FCJBEKHDLAF__IHMLDBDLJON(__this_00,(MethodInfo *)0x0);
        pNVar9 = (__this->fields)._healthBar;
        if (iVar3 == 0x11) {
          if (pNVar9 == (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0) goto LAB_03620260;
          Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                    ((Nekki_SF2_GUI_ResolutionImage_o *)pNVar9,
                     (__this->fields)._pvpFirst_HealthBarSpriteName,(MethodInfo *)0x0);
          pNVar9 = (__this->fields)._hitBar;
          if (pNVar9 == (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0) goto LAB_03620260;
          ppSVar11 = &(__this->fields)._pvpFirst_HitBarSpriteName;
        }
        else {
          if (pNVar9 == (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0) goto LAB_03620260;
          ppSVar11 = &(__this->fields)._raidHealthBarSpriteName;
          if ((__this->fields).PACENOHGIGO < 1) {
            ppSVar11 = &(__this->fields)._healthBarSpriteName;
          }
        }
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                  ((Nekki_SF2_GUI_ResolutionImage_o *)pNVar9,*ppSVar11,(MethodInfo *)0x0);
        pNVar9 = (__this->fields)._healthBar;
        if ((pNVar9 != (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0) &&
           (pUVar4 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar9,(MethodInfo *)0x0),
           pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
          pNVar9 = (__this->fields)._hitBar;
          if ((pNVar9 != (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0) &&
             (pUVar4 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar9,(MethodInfo *)0x0),
             pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
            method_02 = (MethodInfo *)0x0;
            UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
            lVar2 = Method_System_Collections_Generic_List<ResolutionImageSkew>_Add__;
            pSVar5 = (__this->fields).HONNHINBNAJ;
            if (pSVar5 != (System_Collections_Generic_List_ResolutionImageSkew__o *)0x0) {
              pNVar9 = (__this->fields)._hitBar;
              pNVar10 = (pSVar5->fields)._items;
              (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
              if (pNVar10 != (Nekki_SF2_GUI_ResolutionImageSkew_array *)0x0) {
                uVar1 = (pSVar5->fields)._size;
                if (uVar1 < (uint)pNVar10->max_length) {
                  (pSVar5->fields)._size = uVar1 + 1;
                  pNVar10->m_Items[(int)uVar1] = pNVar9;
                  thunk_FUN_01c20e04(pNVar10->m_Items + (int)uVar1);
                }
                else {
                  method_02 = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar5,
                             (Il2CppObject *)pNVar9,(MethodInfo_26E4DAC *)method_02);
                }
                lVar2 = Method_System_Collections_Generic_List<ResolutionImageSkew>_Add__;
                pSVar5 = (__this->fields).HONNHINBNAJ;
                if (pSVar5 != (System_Collections_Generic_List_ResolutionImageSkew__o *)0x0) {
                  pNVar9 = (__this->fields)._healthBar;
                  pNVar10 = (pSVar5->fields)._items;
                  (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
                  if (pNVar10 != (Nekki_SF2_GUI_ResolutionImageSkew_array *)0x0) {
                    uVar1 = (pSVar5->fields)._size;
                    if (uVar1 < (uint)pNVar10->max_length) {
                      (pSVar5->fields)._size = uVar1 + 1;
                      pNVar10->m_Items[(int)uVar1] = pNVar9;
                      thunk_FUN_01c20e04(pNVar10->m_Items + (int)uVar1);
                    }
                    else {
                      method_02 = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70)
                      ;
                      System_Collections_Generic_List<object>__AddWithResize
                                ((System_Collections_Generic_List_object__o *)pSVar5,
                                 (Il2CppObject *)pNVar9,(MethodInfo_26E4DAC *)method_02);
                    }
                    /* try { // try from 0361ffcc to 0372013f has its CatchHandler @ 0361ffcc
                       catch() { ... } // from try @ 0361ffcc with catch @ 0361ffcc
                       catch() { ... } // from try @ 036202b0 with catch @ 0361ffcc
                       catch() { ... } // from try @ 03620360 with catch @ 0361ffcc
                       catch() { ... } // from try @ 03620368 with catch @ 0361ffcc
                       catch() { ... } // from try @ 03620438 with catch @ 0361ffcc */
                    iVar7 = (__this->fields).PACENOHGIGO;
                    if (1 < iVar7) {
                      iVar12 = 1;
                      do {
                        pNVar9 = Nekki_SF2_GUI_Fight_PlayerLifeBar__BBEJMLOCNNM
                                           (__this,(__this->fields)._hitBar,method_02);
                        lVar2 = Method_System_Collections_Generic_List<ResolutionImageSkew>_Add__;
                        pSVar5 = (__this->fields).HONNHINBNAJ;
                        if (pSVar5 == (System_Collections_Generic_List_ResolutionImageSkew__o *)0x0)
                        goto LAB_03620260;
                        pNVar10 = (pSVar5->fields)._items;
                        (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
                        if (pNVar10 == (Nekki_SF2_GUI_ResolutionImageSkew_array *)0x0)
                        goto LAB_03620260;
                        uVar1 = (pSVar5->fields)._size;
                        if (uVar1 < (uint)pNVar10->max_length) {
                          (pSVar5->fields)._size = uVar1 + 1;
                          pNVar10->m_Items[(int)uVar1] = pNVar9;
                          thunk_FUN_01c20e04();
                        }
                        else {
                          method_02 = *(MethodInfo **)
                                       (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
                          System_Collections_Generic_List<object>__AddWithResize
                                    ((System_Collections_Generic_List_object__o *)pSVar5,
                                     (Il2CppObject *)pNVar9,(MethodInfo_26E4DAC *)method_02);
                        }
                        pNVar9 = Nekki_SF2_GUI_Fight_PlayerLifeBar__BBEJMLOCNNM
                                           (__this,(__this->fields)._healthBar,method_02);
                        lVar2 = Method_System_Collections_Generic_List<ResolutionImageSkew>_Add__;
                        pSVar5 = (__this->fields).HONNHINBNAJ;
                        if (pSVar5 == (System_Collections_Generic_List_ResolutionImageSkew__o *)0x0)
                        goto LAB_03620260;
                        pNVar10 = (pSVar5->fields)._items;
                        (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
                        if (pNVar10 == (Nekki_SF2_GUI_ResolutionImageSkew_array *)0x0)
                        goto LAB_03620260;
                        uVar1 = (pSVar5->fields)._size;
                        if (uVar1 < (uint)pNVar10->max_length) {
                          (pSVar5->fields)._size = uVar1 + 1;
                          pNVar10->m_Items[(int)uVar1] = pNVar9;
                          thunk_FUN_01c20e04();
                        }
                        else {
                          method_02 = *(MethodInfo **)
                                       (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
                          System_Collections_Generic_List<object>__AddWithResize
                                    ((System_Collections_Generic_List_object__o *)pSVar5,
                                     (Il2CppObject *)pNVar9,(MethodInfo_26E4DAC *)method_02);
                        }
                        iVar7 = (__this->fields).PACENOHGIGO;
                        iVar12 = iVar12 + 1;
                      } while (iVar12 < iVar7);
                    }
                    if ((iVar7 < 1) || (iVar12 = (__this->fields).AFHDCNAMJMP, iVar12 < 1)) {
                      pPVar8 = (__this->fields).MFLNIMCFPDK;
                      if (pPVar8 == (PJKHAJKEHEL_o *)0x0) goto LAB_03620260;
                      local_40.fakeValueActive = (pPVar8->fields).JNFNFEJAGGN.fields.fakeValueActive
                      ;
                      local_40.inited = (pPVar8->fields).JNFNFEJAGGN.fields.inited;
                      local_40._18_2_ =
                           *(undefined2 *)&(pPVar8->fields).JNFNFEJAGGN.fields.field_0x12;
                      local_40.hiddenValueOldByte4.fields =
                           (pPVar8->fields).JNFNFEJAGGN.fields.hiddenValueOldByte4.fields;
                      local_40.fakeValue = (pPVar8->fields).JNFNFEJAGGN.fields.fakeValue;
                      local_40.currentCryptoKey =
                           (pPVar8->fields).JNFNFEJAGGN.fields.currentCryptoKey;
                      local_40.hiddenValue = (pPVar8->fields).JNFNFEJAGGN.fields.hiddenValue;
                      fVar13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                                         ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)
                                          &local_40,(MethodInfo *)0x0);
                      if (fVar13 <= 1.0) {
                        fVar13 = 1.0;
                      }
                      (__this->fields).AIGDHMHBAFN = fVar13;
                      (__this->fields).PACENOHGIGO = 1;
                      (__this->fields).AFHDCNAMJMP = 1;
                    }
                    else {
                      (__this->fields).AIGDHMHBAFN = (float)iVar12 / (float)iVar7;
                    }
                    pSVar5 = (__this->fields).HONNHINBNAJ;
                    /* try { // try from 03620140 to 03720167 has its CatchHandler @ 0362039c */
                    if (((pSVar5 != (System_Collections_Generic_List_ResolutionImageSkew__o *)0x0)
                        && (pUVar6 = (UnityEngine_Component_o *)
                                     System_Collections_Generic_List<object>__get_Item
                                               ((System_Collections_Generic_List_object__o *)pSVar5,
                                                1,
                                                Method_System_Collections_Generic_List<ResolutionImageSkew>_get_Item__
                                               ), pUVar6 != (UnityEngine_Component_o *)0x0)) &&
                       (pUVar4 = UnityEngine_Component__get_gameObject(pUVar6,(MethodInfo *)0x0),
                       pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                      UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
                      (**(code **)&pUVar6->klass[1]._2.naturalAligment)
                                (0x3f800000,0x3f800000,0x3f800000,0x3f800000,pUVar6,
                                 pUVar6->klass[1].vtable._0_Equals.methodPtr);
                      pSVar5 = (__this->fields).HONNHINBNAJ;
                    /* try { // try from 0362019c to 037201c7 has its CatchHandler @ 03620398 */
                      if (((pSVar5 != (System_Collections_Generic_List_ResolutionImageSkew__o *)0x0)
                          && (pUVar6 = (UnityEngine_Component_o *)
                                       System_Collections_Generic_List<object>__get_Item
                                                 ((System_Collections_Generic_List_object__o *)
                                                  pSVar5,0,
                                                  Method_System_Collections_Generic_List<ResolutionImageSkew>_get_Item__
                                                 ), pUVar6 != (UnityEngine_Component_o *)0x0)) &&
                         (pUVar4 = UnityEngine_Component__get_gameObject(pUVar6,(MethodInfo *)0x0),
                         pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                        UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
                        (**(code **)&pUVar6->klass[1]._2.naturalAligment)
                                  (0x3f800000,0x3f800000,0x3f800000,0x3f800000,pUVar6,
                                   pUVar6->klass[1].vtable._0_Equals.methodPtr);
                        pPVar8 = (__this->fields).MFLNIMCFPDK;
                        if (pPVar8 != (PJKHAJKEHEL_o *)0x0) {
                          local_60.fakeValueActive =
                               (pPVar8->fields).JNFNFEJAGGN.fields.fakeValueActive;
                          local_60.inited = (pPVar8->fields).JNFNFEJAGGN.fields.inited;
                          local_60._18_2_ =
                               *(undefined2 *)&(pPVar8->fields).JNFNFEJAGGN.fields.field_0x12;
                          local_60.hiddenValueOldByte4.fields =
                               (pPVar8->fields).JNFNFEJAGGN.fields.hiddenValueOldByte4.fields;
                          local_60.fakeValue = (pPVar8->fields).JNFNFEJAGGN.fields.fakeValue;
                          local_60.currentCryptoKey =
                               (pPVar8->fields).JNFNFEJAGGN.fields.currentCryptoKey;
                          local_60.hiddenValue = (pPVar8->fields).JNFNFEJAGGN.fields.hiddenValue;
                    /* try { // try from 03620204 to 0372020b has its CatchHandler @ 03620380 */
                          fVar13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                                             ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)
                                              &local_60,(MethodInfo *)0x0);
                          (__this->fields).HDFOJFNFNGG = fVar13;
                          (__this->fields).LLNOECKGCGG = 0;
                    /* try { // try from 03620214 to 0372021b has its CatchHandler @ 0362038c */
                          Nekki_SF2_GUI_Fight_PlayerLifeBar__JCCAPMJPHOM(__this,fVar13,method_00);
                          pPVar8 = (__this->fields).MFLNIMCFPDK;
                          if (pPVar8 != (PJKHAJKEHEL_o *)0x0) {
                    /* try { // try from 03620224 to 03720233 has its CatchHandler @ 03620390 */
                            local_80.fakeValueActive =
                                 (pPVar8->fields).JNFNFEJAGGN.fields.fakeValueActive;
                            local_80.inited = (pPVar8->fields).JNFNFEJAGGN.fields.inited;
                            local_80._18_2_ =
                                 *(undefined2 *)&(pPVar8->fields).JNFNFEJAGGN.fields.field_0x12;
                            local_80.hiddenValueOldByte4.fields =
                                 (pPVar8->fields).JNFNFEJAGGN.fields.hiddenValueOldByte4.fields;
                            local_80.fakeValue = (pPVar8->fields).JNFNFEJAGGN.fields.fakeValue;
                            local_80.currentCryptoKey =
                                 (pPVar8->fields).JNFNFEJAGGN.fields.currentCryptoKey;
                            local_80.hiddenValue = (pPVar8->fields).JNFNFEJAGGN.fields.hiddenValue;
                    /* try { // try from 03620238 to 0372024b has its CatchHandler @ 03620378 */
                            fVar13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                                               ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *
                                                )&local_80,(MethodInfo *)0x0);
                            (__this->fields).HFMAMOEIOOB = fVar13;
                            (__this->fields).NHDMJMILNKJ = 0;
                            Nekki_SF2_GUI_Fight_PlayerLifeBar__ONHOMNIFFEN(__this,fVar13,method_01);
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
        }
      }
    }
  }
LAB_03620260:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JCCAPMJPHOM(float PCAIKIGGBMJ)  [RVA 0x351FB5C]
// Nekki.SF2.GUI.Fight.PlayerLifeBar$$JCCAPMJPHOM @ RVA 0x351FB5C

void Nekki_SF2_GUI_Fight_PlayerLifeBar__JCCAPMJPHOM
               (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *__this,float PCAIKIGGBMJ,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  Nekki_SF2_GUI_ResolutionImageSkew_o *pNVar3;
  UnityEngine_GameObject_o *pUVar4;
  Nekki_SF2_GUI_ResolutionImageSkew_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_x2;
  MethodInfo *pMVar5;
  float CJNHFNHJHPE;
  float fVar6;
  UnityEngine_Color_o endValue;
  
                    /* catch() { ... } // from try @ 0361f9d0 with catch @ 0361fb60
                       catch() { ... } // from try @ 0361fa38 with catch @ 0361fb60
                       catch() { ... } // from try @ 0361fae4 with catch @ 0361fb60
                       catch() { ... } // from try @ 0361fb58 with catch @ 0361fb60 */
                    /* try { // try from 0361fb64 to 0371fc6b has its CatchHandler @ 0361fb64
                       catch() { ... } // from try @ 0361fb64 with catch @ 0361fb64
                       catch() { ... } // from try @ 0361fd1c with catch @ 0361fb64
                       catch() { ... } // from try @ 0361fd60 with catch @ 0361fb64
                       catch() { ... } // from try @ 0361fd70 with catch @ 0361fb64
                       catch() { ... } // from try @ 0361fdc0 with catch @ 0361fb64
                       catch() { ... } // from try @ 0361fdf0 with catch @ 0361fb64 */
  CJNHFNHJHPE = Nekki_SF2_GUI_Fight_PlayerLifeBar__CJBJILOKLDI(__this,PCAIKIGGBMJ,method);
  iVar1 = Nekki_SF2_GUI_Fight_PlayerLifeBar__DefineLevelNumber
                    (__this,(__this->fields).OEDKOODFCLP,method_00);
  iVar2 = Nekki_SF2_GUI_Fight_PlayerLifeBar__DefineLevelNumber(__this,CJNHFNHJHPE,method_01);
  pNVar3 = Nekki_SF2_GUI_Fight_PlayerLifeBar__PHLFFKHKCMD(__this,iVar1 * 2 + -1,in_x2);
  if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0) &&
     (pUVar4 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
     pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
    pMVar5 = (MethodInfo *)0x0;
    UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
    if (1 < iVar1) {
      pNVar3 = Nekki_SF2_GUI_Fight_PlayerLifeBar__PHLFFKHKCMD(__this,iVar1 * 2 + -3,pMVar5);
      if ((pNVar3 == (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0) ||
         (pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         pUVar4 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0361fd04;
      pMVar5 = (MethodInfo *)0x0;
      UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
    }
    pNVar3 = Nekki_SF2_GUI_Fight_PlayerLifeBar__PHLFFKHKCMD(__this,iVar2 * 2 + -1,pMVar5);
    if (iVar2 == iVar1) {
      if (pNVar3 == (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0) goto LAB_0361fd04;
    }
    else {
      if (pNVar3 == (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0) goto LAB_0361fd04;
      (*(pNVar3->klass->vtable)._23_set_color.methodPtr)
                ((ulong)(uint)(__this->fields)._nextLevelColor.fields.r,
                 (__this->fields)._nextLevelColor.fields.g,(__this->fields)._nextLevelColor.fields.b
                 ,(__this->fields)._nextLevelColor.fields.a,pNVar3,
                 (pNVar3->klass->vtable)._23_set_color.method);
      endValue.fields.b = 1.0;
      endValue.fields.a = 1.0;
      endValue.fields.r = 1.0;
      endValue.fields.g = 1.0;
      DG_Tweening_DOTweenModuleUI__DOColor
                ((UnityEngine_UI_Image_o *)pNVar3,endValue,1.0,(MethodInfo *)0x0);
    }
    pUVar4 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                    /* try { // try from 0361fc6c to 0371fc73 has its CatchHandler @ 0361fda4 */
      pMVar5 = (MethodInfo *)0x0;
      UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
      if (iVar2 < 2) {
LAB_0361fcc8:
        fVar6 = (__this->fields).AIGDHMHBAFN;
                    /* try { // try from 0361fcd4 to 0371fce7 has its CatchHandler @ 0361fd70 */
                    /* try { // try from 0361fce8 to 0371fcef has its CatchHandler @ 0361fd88 */
        UnityEngine_UI_Image__set_fillAmount
                  ((UnityEngine_UI_Image_o *)pNVar3,
                   (CJNHFNHJHPE - fVar6 * (float)(iVar2 + -1)) / fVar6,(MethodInfo *)0x0);
        (__this->fields).OEDKOODFCLP = CJNHFNHJHPE;
                    /* try { // try from 0361fcf4 to 0371fd03 has its CatchHandler @ 0361fd90 */
        return;
      }
                    /* try { // try from 0361fc80 to 0371fc8b has its CatchHandler @ 0361fd94 */
      __this_00 = Nekki_SF2_GUI_Fight_PlayerLifeBar__PHLFFKHKCMD(__this,iVar2 * 2 + -3,pMVar5);
      if (__this_00 != (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0) {
                    /* try { // try from 0361fc90 to 0371fc9b has its CatchHandler @ 0361fd98 */
                    /* try { // try from 0361fca8 to 0371fcb3 has its CatchHandler @ 0361fd80 */
        (*(__this_00->klass->vtable)._23_set_color.methodPtr)
                  ((ulong)(uint)(__this->fields)._nextLevelColor.fields.r,
                   (__this->fields)._nextLevelColor.fields.g,
                   (__this->fields)._nextLevelColor.fields.b,
                   (__this->fields)._nextLevelColor.fields.a,__this_00,
                   (__this_00->klass->vtable)._23_set_color.method);
        pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                    /* try { // try from 0361fcb8 to 0371fcc3 has its CatchHandler @ 0361fd78 */
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
          goto LAB_0361fcc8;
        }
      }
    }
  }
LAB_0361fd04:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private float CJBJILOKLDI(float CJNHFNHJHPE)  [RVA 0x351F9B0]
// Nekki.SF2.GUI.Fight.PlayerLifeBar$$CJBJILOKLDI @ RVA 0x351F9B0

float Nekki_SF2_GUI_Fight_PlayerLifeBar__CJBJILOKLDI
                (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  int32_t iVar1;
  PJKHAJKEHEL_o *pPVar2;
  float fVar3;
  
  pPVar2 = (__this->fields).MFLNIMCFPDK;
  if (pPVar2 != (PJKHAJKEHEL_o *)0x0) {
                    /* try { // try from 0361f9d0 to 0371fa1b has its CatchHandler @ 0361fb60 */
    fVar3 = CJNHFNHJHPE;
    if (CJNHFNHJHPE <= 0.0) {
      fVar3 = 0.0;
    }
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (pPVar2->fields).ALJDGEBLHAF.fields,(MethodInfo *)0x0);
    if (0 < iVar1) {
      pPVar2 = (__this->fields).MFLNIMCFPDK;
      if (pPVar2 == (PJKHAJKEHEL_o *)0x0) goto LAB_0361fa38;
      iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (pPVar2->fields).ALJDGEBLHAF.fields,(MethodInfo *)0x0);
      if ((float)iVar1 < CJNHFNHJHPE) {
        pPVar2 = (__this->fields).MFLNIMCFPDK;
        if (pPVar2 == (PJKHAJKEHEL_o *)0x0) goto LAB_0361fa38;
                    /* try { // try from 0361fa20 to 0371fa27 has its CatchHandler @ 0361fab4 */
        iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                           (pPVar2->fields).ALJDGEBLHAF.fields,(MethodInfo *)0x0);
        fVar3 = (float)iVar1;
      }
    }
    return fVar3;
  }
LAB_0361fa38:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0361fa38 to 0371fa53 has its CatchHandler @ 0361fb60 */
  FUN_01bab8c8();
}


// ===== public void Init(PJKHAJKEHEL OKBIKHHKOEN)  [RVA 0x3520388]
// Nekki.SF2.GUI.Fight.PlayerLifeBar$$Init @ RVA 0x3520388

void Nekki_SF2_GUI_Fight_PlayerLifeBar__Init
               (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *__this,PJKHAJKEHEL_o *OKBIKHHKOEN,
               MethodInfo *method)

{
  MethodInfo *method_00;
  
                    /* catch() { ... } // from try @ 03620350 with catch @ 03620388 */
                    /* catch() { ... } // from try @ 03620214 with catch @ 0362038c */
                    /* catch() { ... } // from try @ 03620224 with catch @ 03620390 */
  (__this->fields).MFLNIMCFPDK = OKBIKHHKOEN;
                    /* catch() { ... } // from try @ 0362034c with catch @ 03620394 */
  thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 0362019c with catch @ 03620398 */
                    /* catch() { ... } // from try @ 03620140 with catch @ 0362039c */
                    /* catch() { ... } // from try @ 03620344 with catch @ 036203a0 */
  Nekki_SF2_GUI_Fight_PlayerLifeBar__ABOIEFEPBBF(__this,method_00);
  return;
}


// ===== public virtual void Render()  [RVA 0x35203A4]
// Nekki.SF2.GUI.Fight.PlayerLifeBar$$Render @ RVA 0x35203A4

void Nekki_SF2_GUI_Fight_PlayerLifeBar__Render
               (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  float fVar2;
  
                    /* try { // try from 036203b8 to 037203bb has its CatchHandler @ 036203c8 */
  if ((DAT_045689b2 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                    /* catch() { ... } // from try @ 036203b8 with catch @ 036203c8 */
    DAT_045689b2 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 036203d0 to 03720437 has its CatchHandler @ 0362044c */
  if ((__this->fields).LockLifeUpdate == false) {
    Nekki_SF2_GUI_Fight_PlayerLifeBar__IKKHECKCEJC(__this,method);
    method = extraout_x1_00;
  }
  Nekki_SF2_GUI_Fight_PlayerLifeBar__KEEOAHOAOPC(__this,method);
  Nekki_SF2_GUI_Fight_PlayerLifeBar__BNBAFNOBOGM(__this,method_00);
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  iVar1 = MGNPHCAAEIO__PCJHAMFGJLP((MethodInfo *)0x0);
  fVar2 = (__this->fields).PCBAEDMJDCC;
  if ((0.0 < fVar2) &&
     (fVar2 = fVar2 + -1.0 / (float)iVar1, (__this->fields).PCBAEDMJDCC = fVar2, fVar2 <= 0.0)) {
                    /* try { // try from 03620438 to 03720443 has its CatchHandler @ 0361ffcc */
    (__this->fields).NHDMJMILNKJ = 0x1e;
                    /* try { // try from 03620444 to 0372044b has its CatchHandler @ 0362044c */
    (__this->fields).HFMAMOEIOOB = (__this->fields).HDFOJFNFNGG;
  }
                    /* catch() { ... } // from try @ 036203d0 with catch @ 0362044c
                       catch() { ... } // from try @ 03620444 with catch @ 0362044c */
  return;
}


// ===== private ResolutionImageSkew PHLFFKHKCMD(int MIKOCHDNFNJ)  [RVA 0x351FAC4]
// Nekki.SF2.GUI.Fight.PlayerLifeBar$$PHLFFKHKCMD @ RVA 0x351FAC4

Nekki_SF2_GUI_ResolutionImageSkew_o *
Nekki_SF2_GUI_Fight_PlayerLifeBar__PHLFFKHKCMD
          (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *__this,int32_t MIKOCHDNFNJ,MethodInfo *method)

{
  System_Collections_Generic_List_ResolutionImageSkew__o *__this_00;
  Nekki_SF2_GUI_ResolutionImageSkew_o *pNVar1;
  
                    /* try { // try from 0361fac8 to 0371facb has its CatchHandler @ 0361fadc */
                    /* catch() { ... } // from try @ 0361fac8 with catch @ 0361fadc */
  if ((DAT_045689b3 & 1) == 0) {
                    /* try { // try from 0361fae4 to 0371fb4b has its CatchHandler @ 0361fb60 */
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImageSkew>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImageSkew>_get_Item__);
    DAT_045689b3 = 1;
  }
  __this_00 = (__this->fields).HONNHINBNAJ;
  if (__this_00 != (System_Collections_Generic_List_ResolutionImageSkew__o *)0x0) {
    if ((-1 < MIKOCHDNFNJ) && (MIKOCHDNFNJ < (__this_00->fields)._size)) {
      pNVar1 = (Nekki_SF2_GUI_ResolutionImageSkew_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,MIKOCHDNFNJ,
                          Method_System_Collections_Generic_List<ResolutionImageSkew>_get_Item__);
      return pNVar1;
    }
    return (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string get_RaidHealthBarSpriteName()  [RVA 0x3520560]
// Nekki.SF2.GUI.Fight.PlayerLifeBar$$get_RaidHealthBarSpriteName @ RVA 0x3520560

System_String_o *
Nekki_SF2_GUI_Fight_PlayerLifeBar__get_RaidHealthBarSpriteName
          (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *__this,MethodInfo *method)

{
  return (__this->fields)._raidHealthBarSpriteName;
}


// ===== public void .ctor()  [RVA 0x3520568]
// Nekki.SF2.GUI.Fight.PlayerLifeBar$$.ctor @ RVA 0x3520568

void Nekki_SF2_GUI_Fight_PlayerLifeBar___ctor
               (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ResolutionImageSkew__o *__this_00;
  System_Collections_Generic_List_ResolutionImageSkew__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045689b4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImageSkew>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ResolutionImageSkew>_TypeInfo);
    DAT_045689b4 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_ResolutionImageSkew__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ResolutionImageSkew>_TypeInfo,
                                 method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ResolutionImageSkew>__ctor__);
  ppSVar1 = &(__this->fields).HONNHINBNAJ;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  (__this->fields).AIGDHMHBAFN = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private float HOPDLCBPCNB()  [RVA 0x35205F8]
// Nekki.SF2.GUI.Fight.PlayerLifeBar$$HOPDLCBPCNB @ RVA 0x35205F8

float Nekki_SF2_GUI_Fight_PlayerLifeBar__HOPDLCBPCNB
                (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *__this,MethodInfo *method)

{
  PJKHAJKEHEL_o *pPVar1;
  float fVar2;
  float fVar3;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_70;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_58;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_40;
  
  pPVar1 = (__this->fields).MFLNIMCFPDK;
  if (pPVar1 == (PJKHAJKEHEL_o *)0x0) {
    CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_58,0.0,(MethodInfo *)0x0)
    ;
    local_40.hiddenValueOldByte4.fields = local_58.hiddenValueOldByte4.fields;
    local_40.fakeValue = local_58.fakeValue;
    local_40.currentCryptoKey = local_58.currentCryptoKey;
    local_40.hiddenValue = local_58.hiddenValue;
    local_40.fakeValueActive = local_58.fakeValueActive;
    local_40.inited = local_58.inited;
    local_40._18_2_ = local_58._18_2_;
  }
  else {
    local_40.fakeValueActive = (pPVar1->fields).JNFNFEJAGGN.fields.fakeValueActive;
    local_40.inited = (pPVar1->fields).JNFNFEJAGGN.fields.inited;
    local_40._18_2_ = *(undefined2 *)&(pPVar1->fields).JNFNFEJAGGN.fields.field_0x12;
    local_40.hiddenValueOldByte4.fields =
         (pPVar1->fields).JNFNFEJAGGN.fields.hiddenValueOldByte4.fields;
    local_40.fakeValue = (pPVar1->fields).JNFNFEJAGGN.fields.fakeValue;
    local_40.currentCryptoKey = (pPVar1->fields).JNFNFEJAGGN.fields.currentCryptoKey;
    local_40.hiddenValue = (pPVar1->fields).JNFNFEJAGGN.fields.hiddenValue;
  }
  local_70.hiddenValueOldByte4.fields = local_40.hiddenValueOldByte4.fields;
  local_70.fakeValue = local_40.fakeValue;
  local_70.currentCryptoKey = local_40.currentCryptoKey;
  local_70.hiddenValue = local_40.hiddenValue;
  local_70.fakeValueActive = local_40.fakeValueActive;
  local_70.inited = local_40.inited;
  local_70._18_2_ = local_40._18_2_;
  fVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_70,
                     (MethodInfo *)0x0);
  if (0.0 < fVar2) {
    if (DAT_04568a2e == '\0') {
      FUN_01bab630(&LNEGPKPOLGO_TypeInfo);
      DAT_04568a2e = '\x01';
    }
    fVar3 = LNEGPKPOLGO_TypeInfo->static_fields->KLAPNGPGIGB;
    if (fVar2 < fVar3) {
      fVar2 = fVar3;
    }
  }
  return fVar2;
}


// ===== private ResolutionImageSkew BBEJMLOCNNM(ResolutionImageSkew EMMEKOIAOOE)  [RVA 0x3520264]
// Nekki.SF2.GUI.Fight.PlayerLifeBar$$BBEJMLOCNNM @ RVA 0x3520264

Nekki_SF2_GUI_ResolutionImageSkew_o *
Nekki_SF2_GUI_Fight_PlayerLifeBar__BBEJMLOCNNM
          (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *__this,
          Nekki_SF2_GUI_ResolutionImageSkew_o *EMMEKOIAOOE,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImageSkew_o *__this_00;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o *__this_01;
  Il2CppObject *pIVar2;
  
  if ((DAT_045689b5 & 1) == 0) {
                    /* try { // try from 0362028c to 037202af has its CatchHandler @ 0362037c */
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<ResolutionImageSkew>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<ResolutionImageSkew>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 036202b0 to 03720343 has its CatchHandler @ 0361ffcc */
    DAT_045689b5 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = (Nekki_SF2_GUI_ResolutionImageSkew_o *)
              UnityEngine_Object__Instantiate<object>
                        ((Il2CppObject *)EMMEKOIAOOE,
                         Method_UnityEngine_Object_Instantiate<ResolutionImageSkew>__);
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0) &&
     (pUVar1 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar1 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__SetParent(pUVar1,(__this->fields)._barPanel,false,(MethodInfo *)0x0);
    pUVar1 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetAsLastSibling(pUVar1,(MethodInfo *)0x0);
      __this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
                    /* try { // try from 03620344 to 0372034b has its CatchHandler @ 036203a0 */
        pIVar2 = UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)__this_00,
                            Method_UnityEngine_Component_GetComponent<ResolutionImageSkew>__);
        if (pIVar2 != (Il2CppObject *)0x0) {
                    /* try { // try from 0362034c to 0372034f has its CatchHandler @ 03620394 */
                    /* try { // try from 03620350 to 03720353 has its CatchHandler @ 03620388 */
                    /* try { // try from 03620354 to 0372035b has its CatchHandler @ 03620384 */
          (*pIVar2->klass->vtable[0x5b].methodPtr)(pIVar2,pIVar2->klass->vtable[0x5b].method);
                    /* try { // try from 0362035c to 0372035f has its CatchHandler @ 03620374 */
                    /* try { // try from 03620360 to 03720363 has its CatchHandler @ 0361ffcc */
                    /* try { // try from 03620364 to 03720367 has its CatchHandler @ 03620370 */
                    /* try { // try from 03620368 to 037203b7 has its CatchHandler @ 0361ffcc */
          return __this_00;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03620364 with catch @ 03620370 */
  FUN_01bab8c8();
}


// ===== public void SetHitBarValue(float CJNHFNHJHPE, int ABKNPBMGHKH = 0)  [RVA 0x3520374]
// Nekki.SF2.GUI.Fight.PlayerLifeBar$$SetHitBarValue @ RVA 0x3520374

void Nekki_SF2_GUI_Fight_PlayerLifeBar__SetHitBarValue
               (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *__this,float CJNHFNHJHPE,int32_t ABKNPBMGHKH,
               MethodInfo *method)

{
                    /* catch() { ... } // from try @ 0362035c with catch @ 03620374 */
  (__this->fields).HFMAMOEIOOB = CJNHFNHJHPE;
                    /* catch() { ... } // from try @ 03620238 with catch @ 03620378 */
  (__this->fields).NHDMJMILNKJ = ABKNPBMGHKH;
                    /* catch() { ... } // from try @ 0362028c with catch @ 0362037c */
  if (ABKNPBMGHKH != 0) {
                    /* catch() { ... } // from try @ 03620204 with catch @ 03620380 */
    return;
  }
                    /* catch() { ... } // from try @ 03620354 with catch @ 03620384 */
  Nekki_SF2_GUI_Fight_PlayerLifeBar__ONHOMNIFFEN(__this,CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}


// ===== private void IKKHECKCEJC()  [RVA 0x3520454]
// Nekki.SF2.GUI.Fight.PlayerLifeBar$$IKKHECKCEJC @ RVA 0x3520454

void Nekki_SF2_GUI_Fight_PlayerLifeBar__IKKHECKCEJC
               (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = Nekki_SF2_GUI_Fight_PlayerLifeBar__HOPDLCBPCNB(__this,method);
  fVar2 = fVar1 - (__this->fields).HDFOJFNFNGG;
  if (fVar2 != 0.0) {
    if (fVar2 <= 0.0) {
      (__this->fields).HDFOJFNFNGG = fVar1;
      fVar1 = 1.0;
      if (0.01 <= ABS(fVar2)) {
        fVar1 = 60.0;
      }
      (__this->fields).PCBAEDMJDCC = fVar1;
      (__this->fields).LLNOECKGCGG = 10;
    }
    else {
      (__this->fields).HDFOJFNFNGG = fVar1;
      (__this->fields).HFMAMOEIOOB = fVar1;
      (__this->fields).LLNOECKGCGG = 10;
      (__this->fields).NHDMJMILNKJ = 0x1e;
    }
  }
  return;
}


// ===== private void BNBAFNOBOGM()  [RVA 0x3520510]
// Nekki.SF2.GUI.Fight.PlayerLifeBar$$BNBAFNOBOGM @ RVA 0x3520510

void Nekki_SF2_GUI_Fight_PlayerLifeBar__BNBAFNOBOGM
               (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *__this,MethodInfo *method)

{
  int iVar1;
  float PCAIKIGGBMJ;
  float fVar2;
  
  fVar2 = (__this->fields).DANCJAPPNKJ;
  PCAIKIGGBMJ = (__this->fields).HFMAMOEIOOB;
  if (fVar2 != PCAIKIGGBMJ) {
    iVar1 = (__this->fields).NHDMJMILNKJ;
    if (0 < iVar1) {
      PCAIKIGGBMJ = fVar2 + (PCAIKIGGBMJ - fVar2) / (float)iVar1;
    }
    Nekki_SF2_GUI_Fight_PlayerLifeBar__ONHOMNIFFEN(__this,PCAIKIGGBMJ,method);
    (__this->fields).NHDMJMILNKJ = (__this->fields).NHDMJMILNKJ + -1;
  }
  return;
}


// ===== private void KEEOAHOAOPC()  [RVA 0x35204C0]
// Nekki.SF2.GUI.Fight.PlayerLifeBar$$KEEOAHOAOPC @ RVA 0x35204C0

void Nekki_SF2_GUI_Fight_PlayerLifeBar__KEEOAHOAOPC
               (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *__this,MethodInfo *method)

{
  int iVar1;
  float PCAIKIGGBMJ;
  float fVar2;
  
  fVar2 = (__this->fields).OEDKOODFCLP;
  PCAIKIGGBMJ = (__this->fields).HDFOJFNFNGG;
  if (fVar2 != PCAIKIGGBMJ) {
    iVar1 = (__this->fields).LLNOECKGCGG;
    if (0 < iVar1) {
      PCAIKIGGBMJ = fVar2 - (fVar2 - PCAIKIGGBMJ) / (float)iVar1;
    }
    Nekki_SF2_GUI_Fight_PlayerLifeBar__JCCAPMJPHOM(__this,PCAIKIGGBMJ,method);
    (__this->fields).LLNOECKGCGG = (__this->fields).LLNOECKGCGG + -1;
  }
  return;
}


// ===== public string get_HealthBarSpriteName()  [RVA 0x35206C0]
// Nekki.SF2.GUI.Fight.PlayerLifeBar$$get_HealthBarSpriteName @ RVA 0x35206C0

System_String_o *
Nekki_SF2_GUI_Fight_PlayerLifeBar__get_HealthBarSpriteName
          (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *__this,MethodInfo *method)

{
  return (__this->fields)._healthBarSpriteName;
}

