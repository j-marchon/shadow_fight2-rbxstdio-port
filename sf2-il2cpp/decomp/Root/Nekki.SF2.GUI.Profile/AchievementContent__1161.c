// TypeDefIndex 1161
// Namespace: Nekki.SF2.GUI.Profile
// public class AchievementContent : MonoBehaviour
// Fields:
//   private LabelAlias _DescriptionLabel; // 0x20
//   private LabelAlias _RewardLabel; // 0x28
//   private SFButton _TakeButton; // 0x30
//   private KMJDCOABCCG EEMOAOLFPHL; // 0x38
//   private float NNMNKMIMONC; // 0x40

// ===== public void Refresh(KMJDCOABCCG HKCIMMBPDLP, float CPAIGJKEHEO)  [RVA 0x3103D20]
// Nekki.SF2.GUI.Profile.AchievementContent$$Refresh @ RVA 0x3103D20

void Nekki_SF2_GUI_Profile_AchievementContent__Refresh
               (Nekki_SF2_GUI_Profile_AchievementContent_o *__this,KMJDCOABCCG_o *HKCIMMBPDLP,
               float CPAIGJKEHEO,MethodInfo *method)

{
  long lVar1;
  bool bVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  UnityEngine_GameObject_o *pUVar4;
  Il2CppObject *arg1;
  System_String_o *pSVar5;
  SFButton_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  KMJDCOABCCG_o *pKVar6;
  ACHLOMELAJE_o *pAVar7;
  System_String_o **ppSVar8;
  KMJDCOABCCG_o **ppKVar9;
  System_String_o *arg0;
  undefined4 local_44;
  
                    /* try { // try from 03203d24 to 03303d37 has its CatchHandler @ 03203d9c */
                    /* catch() { ... } // from try @ 03203cc0 with catch @ 03203d38
                       try { // try from 03203d38 to 03303d53 has its CatchHandler @ 03203a0c */
                    /* catch() { ... } // from try @ 03203c18 with catch @ 03203d3c */
  if ((DAT_045664e2 & 1) == 0) {
                    /* try { // try from 03203d54 to 03303d57 has its CatchHandler @ 03203d78 */
                    /* try { // try from 03203d58 to 03303d7f has its CatchHandler @ 03203a0c */
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_15833/*"^achievementReward^ <quad name={0} > {1}"*/);
                    /* catch() { ... } // from try @ 03203d54 with catch @ 03203d78 */
    FUN_01bab630(&StringLiteral_9095/*"MiscSprites.ruby"*/);
                    /* try { // try from 03203d80 to 03303d87 has its CatchHandler @ 03203d9c */
    DAT_045664e2 = 1;
  }
                    /* try { // try from 03203d88 to 03303d93 has its CatchHandler @ 03203a0c */
  ppKVar9 = &(__this->fields).EEMOAOLFPHL;
  *ppKVar9 = HKCIMMBPDLP;
                    /* try { // try from 03203d94 to 03303d9b has its CatchHandler @ 03203d9c */
  thunk_FUN_01c20e04(ppKVar9,HKCIMMBPDLP);
                    /* catch() { ... } // from try @ 03203d24 with catch @ 03203d9c
                       catch() { ... } // from try @ 03203d80 with catch @ 03203d9c
                       catch() { ... } // from try @ 03203d94 with catch @ 03203d9c */
  (__this->fields).NNMNKMIMONC = CPAIGJKEHEO;
  if ((*ppKVar9 != (KMJDCOABCCG_o *)0x0) &&
     (pNVar3 = (__this->fields)._DescriptionLabel, pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar3,((*ppKVar9)->fields).BPCADJLKKGA,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._RewardLabel;
    if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      pUVar4 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
      pKVar6 = *ppKVar9;
      if (pKVar6 != (KMJDCOABCCG_o *)0x0) {
        if ((pKVar6->fields).AHKHDBIDDIH == false) {
          if ((pKVar6->fields).ICOLJMCHFEC < 1) {
            bVar2 = 0 < (pKVar6->fields).DBDIDOBPFMC;
          }
          else {
            bVar2 = true;
          }
        }
        else {
          bVar2 = false;
        }
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar4,bVar2,(MethodInfo *)0x0);
          pNVar3 = (__this->fields)._RewardLabel;
          if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
             (pUVar4 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
             pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
            bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
            pSVar5 = StringLiteral_15833/*"^achievementReward^ <quad name={0} > {1}"*/;
            if (bVar2) {
              pKVar6 = (__this->fields).EEMOAOLFPHL;
              if (pKVar6 == (KMJDCOABCCG_o *)0x0) goto LAB_03203fb0;
              pNVar3 = (__this->fields)._RewardLabel;
              if ((pKVar6->fields).ICOLJMCHFEC < 1) {
                ppSVar8 = (System_String_o **)&StringLiteral_9095/*"MiscSprites.ruby"*/;
              }
              else {
                if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                if (DAT_04565b7d == '\0') {
                  FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                  DAT_04565b7d = '\x01';
                }
                if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                if ((pAVar7 == (ACHLOMELAJE_o *)0x0) ||
                   (pKVar6 = *ppKVar9, pKVar6 == (KMJDCOABCCG_o *)0x0)) goto LAB_03203fb0;
                ppSVar8 = &(pAVar7->fields).FAAJGHKHEBI;
              }
              arg0 = *ppSVar8;
              lVar1 = 0x18;
              if ((pKVar6->fields).ICOLJMCHFEC < 1) {
                lVar1 = 0x1c;
              }
              local_44 = *(undefined4 *)((long)&pKVar6->klass + lVar1);
              arg1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_44);
              pSVar5 = System_String__Format(pSVar5,(Il2CppObject *)arg0,arg1,(MethodInfo *)0x0);
              if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03203fb0;
              Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar3,pSVar5,(MethodInfo *)0x0);
            }
            __this_00 = (__this->fields)._TakeButton;
            if (__this_00 != (SFButton_o *)0x0) {
              pUVar4 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
              pNVar3 = (__this->fields)._RewardLabel;
              if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
                 (__this_01 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
                 __this_01 != (UnityEngine_GameObject_o *)0x0)) {
                bVar2 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
                if (bVar2) {
                  if (*ppKVar9 == (KMJDCOABCCG_o *)0x0) goto LAB_03203fb0;
                  bVar2 = (float)((*ppKVar9)->fields).ADHFHEJFJPK <= (__this->fields).NNMNKMIMONC;
                }
                else {
                  bVar2 = false;
                }
                if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                  UnityEngine_GameObject__SetActive(pUVar4,bVar2,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03203fb0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnTakeButtonClick()  [RVA 0x3103FB4]
// Nekki.SF2.GUI.Profile.AchievementContent$$OnTakeButtonClick @ RVA 0x3103FB4

void Nekki_SF2_GUI_Profile_AchievementContent__OnTakeButtonClick
               (Nekki_SF2_GUI_Profile_AchievementContent_o *__this,MethodInfo *method)

{
  long lVar1;
  SFButton_o *__this_00;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  MethodInfo *extraout_x1;
  undefined1 auVar3 [16];
  
  if ((DAT_045664e3 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__);
    DAT_045664e3 = 1;
    method = extraout_x1;
  }
  lVar1 = *(long *)(Method_Nekki_SF2_GUI_Scene<ProfileScene>_get_Current__ + 0x20);
  auVar3._8_8_ = method;
  auVar3._0_8_ = lVar1;
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    auVar3 = FUN_01b81620(lVar1,method);
  }
  lVar1 = *(long *)(*(long *)(auVar3._0_8_ + 0xc0) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620(lVar1,auVar3._8_8_);
  }
  if ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar1 + 0xb8) !=
      (Nekki_SF2_GUI_Profile_ProfileScene_o *)0x0) {
    Nekki_SF2_GUI_Profile_ProfileScene__TakeAchievementReward
              ((Nekki_SF2_GUI_Profile_ProfileScene_o *)**(undefined8 **)(lVar1 + 0xb8),
               (__this->fields).EEMOAOLFPHL,(MethodInfo *)0x0);
    __this_00 = (__this->fields)._TakeButton;
    if ((__this_00 != (SFButton_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      __this_01 = (__this->fields)._RewardLabel;
      if ((__this_01 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3104074]
// Nekki.SF2.GUI.Profile.AchievementContent$$.ctor @ RVA 0x3104074

void Nekki_SF2_GUI_Profile_AchievementContent___ctor
               (Nekki_SF2_GUI_Profile_AchievementContent_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

