// TypeDefIndex 2420
// Namespace: Nekki.SF2.GUI.Profile
// public class InfoPanel : MonoBehaviour
// Fields:
//   private LabelAlias _TitleLabel; // 0x20
//   private LabelAlias _NoContentMessageLabel; // 0x28
//   private PerkContent _PerkContent; // 0x30
//   private TrickContent _TrickContent; // 0x38
//   private AchievementContent _AchievementContent; // 0x40
//   private SealsContent _SealsContent; // 0x48

// ===== public void Refresh(PerkSubItem OLNJMPMPLOB)  [RVA 0x333AB38]
// Nekki.SF2.GUI.Profile.InfoPanel$$Refresh @ RVA 0x333AB38

void Nekki_SF2_GUI_Profile_InfoPanel__Refresh
               (Nekki_SF2_GUI_Profile_InfoPanel_o *__this,
               Nekki_SF2_GUI_Profile_PerkSubItem_o *OLNJMPMPLOB,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  byte bVar3;
  Nekki_SF2_GUI_Profile_PerkContent_o *pNVar4;
  UnityEngine_GameObject_o *pUVar5;
  Nekki_SF2_GUI_Profile_TrickContent_o *__this_00;
  Nekki_SF2_GUI_Profile_AchievementContent_o *__this_01;
  Nekki_SF2_GUI_Profile_SealsContent_o *__this_02;
  Nekki_SF2_GUI_LabelAlias_o *__this_03;
  JLGNBOILFLN_o *pJVar6;
  System_String_o *pSVar7;
  MethodInfo *in_x4;
  
                    /* try { // try from 0343ab3c to 0353ab43 has its CatchHandler @ 0343aca0 */
                    /* try { // try from 0343ab54 to 0353ab5f has its CatchHandler @ 0343ac90 */
  if ((DAT_0456796a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 0343ab74 to 0353ab7b has its CatchHandler @ 0343ac00 */
    FUN_01bab630(&StringLiteral_7508/*"InfoPanel::Refresh(PerkSubItem) "*/);
    FUN_01bab630(&StringLiteral_465/*" item=null"*/);
                    /* try { // try from 0343ab90 to 0353ab93 has its CatchHandler @ 0343abf8 */
    FUN_01bab630(&StringLiteral_10214/*"Perk=null"*/);
                    /* try { // try from 0343ab94 to 0353ab9f has its CatchHandler @ 0343abfc */
    DAT_0456796a = 1;
  }
  pNVar4 = (__this->fields)._PerkContent;
                    /* try { // try from 0343aba8 to 0353abb7 has its CatchHandler @ 0343abf4 */
  if ((pNVar4 != (Nekki_SF2_GUI_Profile_PerkContent_o *)0x0) &&
     (pUVar5 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
     pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar5,true,(MethodInfo *)0x0);
    __this_00 = (__this->fields)._TrickContent;
    if ((__this_00 != (Nekki_SF2_GUI_Profile_TrickContent_o *)0x0) &&
       (pUVar5 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 0343abd0 to 0353abd7 has its CatchHandler @ 0343ac98 */
      UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
      __this_01 = (__this->fields)._AchievementContent;
                    /* try { // try from 0343abec to 0353abef has its CatchHandler @ 0343abf4 */
      if ((__this_01 != (Nekki_SF2_GUI_Profile_AchievementContent_o *)0x0) &&
         (pUVar5 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
         pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 0343abf0 to 0353ac0f has its CatchHandler @ 0343a9ec */
                    /* catch() { ... } // from try @ 0343aba8 with catch @ 0343abf4
                       catch() { ... } // from try @ 0343abec with catch @ 0343abf4 */
                    /* catch() { ... } // from try @ 0343ab90 with catch @ 0343abf8 */
        UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0343ab94 with catch @ 0343abfc */
        __this_02 = (__this->fields)._SealsContent;
                    /* catch() { ... } // from try @ 0343ab74 with catch @ 0343ac00 */
        if ((__this_02 != (Nekki_SF2_GUI_Profile_SealsContent_o *)0x0) &&
           (pUVar5 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
           pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 0343ac10 to 0353ac13 has its CatchHandler @ 0343ac84 */
                    /* try { // try from 0343ac14 to 0353ac57 has its CatchHandler @ 0343a9ec */
          UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
          __this_03 = (__this->fields)._NoContentMessageLabel;
          if ((__this_03 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
             (pUVar5 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0),
             pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar5,false,(MethodInfo *)0x0);
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
                    /* try { // try from 0343ac58 to 0353ac73 has its CatchHandler @ 0343acfc */
            bVar2 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)OLNJMPMPLOB,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (bVar2) {
LAB_0343ac9c:
                    /* catch() { ... } // from try @ 0343ac74 with catch @ 0343ac9c */
                    /* catch() { ... } // from try @ 0343ab3c with catch @ 0343aca0 */
                    /* try { // try from 0343acb0 to 0353acb3 has its CatchHandler @ 0343acd8 */
                    /* try { // try from 0343acb4 to 0353acdf has its CatchHandler @ 0343a9ec */
              if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
                    /* catch() { ... } // from try @ 0343acb0 with catch @ 0343acd8 */
              bVar2 = UnityEngine_Object__op_Equality
                                ((UnityEngine_Object_o *)OLNJMPMPLOB,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              puVar1 = &StringLiteral_465/*" item=null"*/;
                    /* try { // try from 0343ace0 to 0353ace7 has its CatchHandler @ 0343acfc */
              if (!bVar2) {
                puVar1 = &StringLiteral_10214/*"Perk=null"*/;
              }
                    /* try { // try from 0343ace8 to 0353acf3 has its CatchHandler @ 0343a9ec */
                    /* try { // try from 0343acf4 to 0353acfb has its CatchHandler @ 0343acfc */
              pSVar7 = System_String__Concat
                                 (StringLiteral_7508/*"InfoPanel::Refresh(PerkSubItem) "*/,(System_String_o *)*puVar1,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0343ac58 with catch @ 0343acfc
                       catch() { ... } // from try @ 0343ace0 with catch @ 0343acfc
                       catch() { ... } // from try @ 0343acf4 with catch @ 0343acfc */
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
              }
              UnityEngine_Debug__LogError((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
              return;
            }
            if (OLNJMPMPLOB != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
              pJVar6 = (OLNJMPMPLOB->fields)._CGEGGOPIPHH_k__BackingField;
              if (pJVar6 == (JLGNBOILFLN_o *)0x0) goto LAB_0343ac9c;
                    /* try { // try from 0343ac74 to 0353ac7b has its CatchHandler @ 0343ac9c */
              pSVar7 = JLGNBOILFLN__GKMAFGODLLG(pJVar6,(MethodInfo *)0x0);
                    /* try { // try from 0343ac7c to 0353ac7f has its CatchHandler @ 0343ac94 */
              pJVar6 = (OLNJMPMPLOB->fields)._CGEGGOPIPHH_k__BackingField;
                    /* try { // try from 0343ac80 to 0353acaf has its CatchHandler @ 0343a9ec */
              if (pJVar6 != (JLGNBOILFLN_o *)0x0) {
                    /* catch() { ... } // from try @ 0343ac10 with catch @ 0343ac84 */
                    /* catch() { ... } // from try @ 0343ab54 with catch @ 0343ac90 */
                if ((pJVar6->fields).OIKLOAGFFGO == 3) {
                    /* catch() { ... } // from try @ 0343ac7c with catch @ 0343ac94 */
                  bVar3 = 0;
                    /* catch() { ... } // from try @ 0343abd0 with catch @ 0343ac98 */
                }
                else {
                  bVar3 = (*(OLNJMPMPLOB->klass->vtable)._65_GetLock.methodPtr)
                                    (OLNJMPMPLOB,(OLNJMPMPLOB->klass->vtable)._65_GetLock.method);
                  bVar3 = bVar3 ^ 1;
                }
                Nekki_SF2_GUI_Profile_InfoPanel__PPGCAKOPAJI
                          (__this,pSVar7,(bool)(bVar3 & 1),0x58,in_x4);
                pNVar4 = (__this->fields)._PerkContent;
                pJVar6 = (OLNJMPMPLOB->fields)._CGEGGOPIPHH_k__BackingField;
                bVar3 = (*(OLNJMPMPLOB->klass->vtable)._65_GetLock.methodPtr)
                                  (OLNJMPMPLOB,(OLNJMPMPLOB->klass->vtable)._65_GetLock.method);
                if (pNVar4 != (Nekki_SF2_GUI_Profile_PerkContent_o *)0x0) {
                  Nekki_SF2_GUI_Profile_PerkContent__Refresh
                            (pNVar4,pJVar6,(bool)(bVar3 & 1),(MethodInfo *)0x0);
                  return;
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


// ===== public void Clear()  [RVA 0x333AE00]
// Nekki.SF2.GUI.Profile.InfoPanel$$Clear @ RVA 0x333AE00

void Nekki_SF2_GUI_Profile_InfoPanel__Clear
               (Nekki_SF2_GUI_Profile_InfoPanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_Profile_PerkContent_o *__this_00;
  Nekki_SF2_GUI_Profile_TrickContent_o *__this_01;
  Nekki_SF2_GUI_Profile_AchievementContent_o *__this_02;
  Nekki_SF2_GUI_Profile_SealsContent_o *__this_03;
  
  pNVar1 = (__this->fields)._TitleLabel;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__Clear(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._NoContentMessageLabel;
    if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      __this_00 = (__this->fields)._PerkContent;
      if ((__this_00 != (Nekki_SF2_GUI_Profile_PerkContent_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        __this_01 = (__this->fields)._TrickContent;
        if ((__this_01 != (Nekki_SF2_GUI_Profile_TrickContent_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
          __this_02 = (__this->fields)._AchievementContent;
          if ((__this_02 != (Nekki_SF2_GUI_Profile_AchievementContent_o *)0x0) &&
             (pUVar2 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
             pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
            __this_03 = (__this->fields)._SealsContent;
            if ((__this_03 != (Nekki_SF2_GUI_Profile_SealsContent_o *)0x0) &&
               (pUVar2 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0),
               pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
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


// ===== public void Refresh(AchievementSubItem OLNJMPMPLOB)  [RVA 0x333AEC0]
// Nekki.SF2.GUI.Profile.InfoPanel$$Refresh @ RVA 0x333AEC0

void Nekki_SF2_GUI_Profile_InfoPanel__Refresh
               (Nekki_SF2_GUI_Profile_InfoPanel_o *__this,
               Nekki_SF2_GUI_Profile_AchievementSubItem_o *OLNJMPMPLOB,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  Nekki_SF2_GUI_Profile_PerkContent_o *__this_00;
  UnityEngine_GameObject_o *pUVar3;
  Nekki_SF2_GUI_Profile_TrickContent_o *__this_01;
  Nekki_SF2_GUI_Profile_AchievementContent_o *pNVar4;
  Nekki_SF2_GUI_Profile_SealsContent_o *__this_02;
  Nekki_SF2_GUI_LabelAlias_o *__this_03;
  System_String_o *message;
  MethodInfo *in_x4;
  KMJDCOABCCG_o *pKVar5;
  
  if ((DAT_0456796b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_16285/*"achiev=null"*/);
    FUN_01bab630(&StringLiteral_465/*" item=null"*/);
    FUN_01bab630(&StringLiteral_7506/*"InfoPanel::Refresh(AchievementSubItem): "*/);
    DAT_0456796b = 1;
  }
  __this_00 = (__this->fields)._PerkContent;
  if ((__this_00 != (Nekki_SF2_GUI_Profile_PerkContent_o *)0x0) &&
     (pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._TrickContent;
    if ((__this_01 != (Nekki_SF2_GUI_Profile_TrickContent_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
      pNVar4 = (__this->fields)._AchievementContent;
      if ((pNVar4 != (Nekki_SF2_GUI_Profile_AchievementContent_o *)0x0) &&
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
        __this_02 = (__this->fields)._SealsContent;
        if ((__this_02 != (Nekki_SF2_GUI_Profile_SealsContent_o *)0x0) &&
           (pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
           pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
          __this_03 = (__this->fields)._NoContentMessageLabel;
          if ((__this_03 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
             (pUVar3 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0),
             pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar2 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)OLNJMPMPLOB,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (bVar2) {
LAB_0343b034:
              if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              bVar2 = UnityEngine_Object__op_Equality
                                ((UnityEngine_Object_o *)OLNJMPMPLOB,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              puVar1 = &StringLiteral_465/*" item=null"*/;
              if (!bVar2) {
                puVar1 = &StringLiteral_16285/*"achiev=null"*/;
              }
              message = System_String__Concat
                                  (StringLiteral_7506/*"InfoPanel::Refresh(AchievementSubItem): "*/,(System_String_o *)*puVar1,(MethodInfo *)0x0);
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
              }
              UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
              return;
            }
            if (OLNJMPMPLOB != (Nekki_SF2_GUI_Profile_AchievementSubItem_o *)0x0) {
              pKVar5 = (OLNJMPMPLOB->fields).HNNMAMJOEMB;
              if (pKVar5 == (KMJDCOABCCG_o *)0x0) goto LAB_0343b034;
              Nekki_SF2_GUI_Profile_InfoPanel__PPGCAKOPAJI
                        (__this,(pKVar5->fields).JIJLBFGKNJK,true,0x58,in_x4);
              pNVar4 = (__this->fields)._AchievementContent;
              if (pNVar4 != (Nekki_SF2_GUI_Profile_AchievementContent_o *)0x0) {
                Nekki_SF2_GUI_Profile_AchievementContent__Refresh
                          (pNVar4,(OLNJMPMPLOB->fields).HNNMAMJOEMB,
                           (OLNJMPMPLOB->fields).IFGGFDOALOG,(MethodInfo *)0x0);
                return;
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


// ===== public LabelButton get_PerkImproveButton()  [RVA 0x333B0C4]
// Nekki.SF2.GUI.Profile.InfoPanel$$get_PerkImproveButton @ RVA 0x333B0C4

LabelButton_o *
Nekki_SF2_GUI_Profile_InfoPanel__get_PerkImproveButton
          (Nekki_SF2_GUI_Profile_InfoPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Profile_PerkContent_o *pNVar2;
  UnityEngine_GameObject_o *__this_00;
  LabelButton_o *pLVar3;
  
  pNVar2 = (__this->fields)._PerkContent;
  if ((pNVar2 != (Nekki_SF2_GUI_Profile_PerkContent_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    pLVar3 = (LabelButton_o *)0x0;
    if (bVar1) {
      pNVar2 = (__this->fields)._PerkContent;
      if (pNVar2 == (Nekki_SF2_GUI_Profile_PerkContent_o *)0x0) goto LAB_0343b108;
      pLVar3 = (pNVar2->fields)._ImproveButton;
    }
    return pLVar3;
  }
LAB_0343b108:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Refresh(TrickSubItem OLNJMPMPLOB)  [RVA 0x333B10C]
// Nekki.SF2.GUI.Profile.InfoPanel$$Refresh @ RVA 0x333B10C

void Nekki_SF2_GUI_Profile_InfoPanel__Refresh
               (Nekki_SF2_GUI_Profile_InfoPanel_o *__this,
               Nekki_SF2_GUI_Profile_TrickSubItem_o *OLNJMPMPLOB,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Profile_PerkContent_o *__this_00;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_Profile_TrickContent_o *pNVar3;
  Nekki_SF2_GUI_Profile_AchievementContent_o *__this_01;
  Nekki_SF2_GUI_Profile_SealsContent_o *__this_02;
  Nekki_SF2_GUI_LabelAlias_o *__this_03;
  System_Collections_Generic_List_float__o *pSVar4;
  System_String_o *pSVar5;
  MethodInfo *in_x4;
  KCLPNDAPADO_o *pKVar6;
  undefined8 *puVar7;
  
  if ((DAT_0456796c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_7509/*"InfoPanel::Refresh(TrickSubItem): "*/);
    FUN_01bab630(&StringLiteral_6773/*"GetBaseDMG()=null"*/);
    FUN_01bab630(&StringLiteral_19210/*"item=null"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_6837/*"GetTrick()=null"*/);
    DAT_0456796c = 1;
  }
  __this_00 = (__this->fields)._PerkContent;
  if ((__this_00 != (Nekki_SF2_GUI_Profile_PerkContent_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._TrickContent;
    if ((pNVar3 != (Nekki_SF2_GUI_Profile_TrickContent_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      __this_01 = (__this->fields)._AchievementContent;
      if ((__this_01 != (Nekki_SF2_GUI_Profile_AchievementContent_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        __this_02 = (__this->fields)._SealsContent;
        if ((__this_02 != (Nekki_SF2_GUI_Profile_SealsContent_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
          __this_03 = (__this->fields)._NoContentMessageLabel;
          if ((__this_03 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
             (pUVar2 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0),
             pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar1 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)OLNJMPMPLOB,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (!bVar1) {
              if (OLNJMPMPLOB == (Nekki_SF2_GUI_Profile_TrickSubItem_o *)0x0) goto LAB_0343b388;
              if (((OLNJMPMPLOB->fields).MGHHBGMPDEI != (KCLPNDAPADO_o *)0x0) &&
                 (pSVar4 = Nekki_SF2_GUI_Profile_TrickSubItem__GetBaseDMG
                                     (OLNJMPMPLOB,(MethodInfo *)0x0),
                 pSVar4 != (System_Collections_Generic_List_float__o *)0x0)) {
                pKVar6 = (OLNJMPMPLOB->fields).MGHHBGMPDEI;
                if (pKVar6 != (KCLPNDAPADO_o *)0x0) {
                  Nekki_SF2_GUI_Profile_InfoPanel__PPGCAKOPAJI
                            (__this,(pKVar6->fields).JIJLBFGKNJK,true,0x58,in_x4);
                  pNVar3 = (__this->fields)._TrickContent;
                  pKVar6 = (OLNJMPMPLOB->fields).MGHHBGMPDEI;
                  pSVar4 = Nekki_SF2_GUI_Profile_TrickSubItem__GetBaseDMG
                                     (OLNJMPMPLOB,(MethodInfo *)0x0);
                  if (pNVar3 != (Nekki_SF2_GUI_Profile_TrickContent_o *)0x0) {
                    Nekki_SF2_GUI_Profile_TrickContent__Refresh
                              (pNVar3,pKVar6,pSVar4,(MethodInfo *)0x0);
                    return;
                  }
                }
                goto LAB_0343b388;
              }
            }
            pSVar5 = StringLiteral_7509/*"InfoPanel::Refresh(TrickSubItem): "*/;
            if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            bVar1 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)OLNJMPMPLOB,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (bVar1) {
              puVar7 = &StringLiteral_19210/*"item=null"*/;
            }
            else {
              if (OLNJMPMPLOB == (Nekki_SF2_GUI_Profile_TrickSubItem_o *)0x0) goto LAB_0343b388;
              puVar7 = &StringLiteral_6837/*"GetTrick()=null"*/;
              if ((OLNJMPMPLOB->fields).MGHHBGMPDEI != (KCLPNDAPADO_o *)0x0) {
                puVar7 = &StringLiteral_1/*""*/;
              }
              pSVar5 = System_String__Concat(pSVar5,(System_String_o *)*puVar7,(MethodInfo *)0x0);
              pSVar4 = Nekki_SF2_GUI_Profile_TrickSubItem__GetBaseDMG(OLNJMPMPLOB,(MethodInfo *)0x0)
              ;
              puVar7 = &StringLiteral_6773/*"GetBaseDMG()=null"*/;
              if (pSVar4 != (System_Collections_Generic_List_float__o *)0x0) {
                puVar7 = &StringLiteral_1/*""*/;
              }
            }
            pSVar5 = System_String__Concat(pSVar5,(System_String_o *)*puVar7,(MethodInfo *)0x0);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogError((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_0343b388:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public LabelButton get_TrickPlayButton()  [RVA 0x333B38C]
// Nekki.SF2.GUI.Profile.InfoPanel$$get_TrickPlayButton @ RVA 0x333B38C

LabelButton_o *
Nekki_SF2_GUI_Profile_InfoPanel__get_TrickPlayButton
          (Nekki_SF2_GUI_Profile_InfoPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Profile_TrickContent_o *pNVar2;
  UnityEngine_GameObject_o *__this_00;
  LabelButton_o *pLVar3;
  
  pNVar2 = (__this->fields)._TrickContent;
  if ((pNVar2 != (Nekki_SF2_GUI_Profile_TrickContent_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    pLVar3 = (LabelButton_o *)0x0;
    if (bVar1) {
      pNVar2 = (__this->fields)._TrickContent;
      if (pNVar2 == (Nekki_SF2_GUI_Profile_TrickContent_o *)0x0) goto LAB_0343b3d0;
      pLVar3 = (pNVar2->fields)._ShowButton;
    }
    return pLVar3;
  }
LAB_0343b3d0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x333B3D4]
// Nekki.SF2.GUI.Profile.InfoPanel$$.ctor @ RVA 0x333B3D4

void Nekki_SF2_GUI_Profile_InfoPanel___ctor
               (Nekki_SF2_GUI_Profile_InfoPanel_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void PPGCAKOPAJI(string JLNPKGGFFDD, bool BALACEGEDBN = True, int CFBDPNLELPP = 88)  [RVA 0x333AD98]
// Nekki.SF2.GUI.Profile.InfoPanel$$PPGCAKOPAJI @ RVA 0x333AD98

void Nekki_SF2_GUI_Profile_InfoPanel__PPGCAKOPAJI
               (Nekki_SF2_GUI_Profile_InfoPanel_o *__this,System_String_o *JLNPKGGFFDD,
               bool BALACEGEDBN,int32_t CFBDPNLELPP,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_GameObject_o *__this_00;
  
  pNVar1 = (__this->fields)._TitleLabel;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_LabelFontSize(pNVar1,CFBDPNLELPP,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._TitleLabel;
    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar1,JLNPKGGFFDD,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._TitleLabel;
      if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(__this_00,BALACEGEDBN,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Refresh(HOOAAGABMBL CNDPGGAFHEA)  [RVA 0x333B3DC]
// Nekki.SF2.GUI.Profile.InfoPanel$$Refresh @ RVA 0x333B3DC

void Nekki_SF2_GUI_Profile_InfoPanel__Refresh
               (Nekki_SF2_GUI_Profile_InfoPanel_o *__this,HOOAAGABMBL_o *CNDPGGAFHEA,
               MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_PerkContent_o *__this_00;
  UnityEngine_GameObject_o *pUVar1;
  Nekki_SF2_GUI_Profile_TrickContent_o *__this_01;
  Nekki_SF2_GUI_Profile_AchievementContent_o *__this_02;
  Nekki_SF2_GUI_Profile_SealsContent_o *pNVar2;
  Nekki_SF2_GUI_LabelAlias_o *__this_03;
  MethodInfo *in_x4;
  
  if ((DAT_0456796d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_7507/*"InfoPanel::Refresh(ItemInfo): item=null"*/);
    DAT_0456796d = 1;
  }
  __this_00 = (__this->fields)._PerkContent;
  if ((__this_00 != (Nekki_SF2_GUI_Profile_PerkContent_o *)0x0) &&
     (pUVar1 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._TrickContent;
    if ((__this_01 != (Nekki_SF2_GUI_Profile_TrickContent_o *)0x0) &&
       (pUVar1 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
      __this_02 = (__this->fields)._AchievementContent;
      if ((__this_02 != (Nekki_SF2_GUI_Profile_AchievementContent_o *)0x0) &&
         (pUVar1 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
         pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
        pNVar2 = (__this->fields)._SealsContent;
        if ((pNVar2 != (Nekki_SF2_GUI_Profile_SealsContent_o *)0x0) &&
           (pUVar1 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
           pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar1,true,(MethodInfo *)0x0);
          __this_03 = (__this->fields)._NoContentMessageLabel;
          if ((__this_03 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
             (pUVar1 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0),
             pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
            if (CNDPGGAFHEA == (HOOAAGABMBL_o *)0x0) {
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              UnityEngine_Debug__LogError(StringLiteral_7507/*"InfoPanel::Refresh(ItemInfo): item=null"*/,(MethodInfo *)0x0);
              return;
            }
            Nekki_SF2_GUI_Profile_InfoPanel__PPGCAKOPAJI
                      (__this,(CNDPGGAFHEA->fields)._COIPKAKHDFP_k__BackingField,true,0x58,in_x4);
            pNVar2 = (__this->fields)._SealsContent;
            if (pNVar2 != (Nekki_SF2_GUI_Profile_SealsContent_o *)0x0) {
              Nekki_SF2_GUI_Profile_SealsContent__Refresh(pNVar2,CNDPGGAFHEA,(MethodInfo *)0x0);
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


// ===== public LabelAlias get_NoContentMessageLabel()  [RVA 0x333B524]
// Nekki.SF2.GUI.Profile.InfoPanel$$get_NoContentMessageLabel @ RVA 0x333B524

Nekki_SF2_GUI_LabelAlias_o *
Nekki_SF2_GUI_Profile_InfoPanel__get_NoContentMessageLabel
          (Nekki_SF2_GUI_Profile_InfoPanel_o *__this,MethodInfo *method)

{
  return (__this->fields)._NoContentMessageLabel;
}

