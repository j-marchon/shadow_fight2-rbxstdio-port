// TypeDefIndex 3372
// Namespace: Nekki.SF2.GUI.Profile
// public class PerkCell : ProfileCell
// Fields:
//   private PerkSubItem _LeftSubItem; // 0x48
//   private PerkSubItem _RightSubItem; // 0x50
//   private HorizontalLayoutGroup _LayoutGroup; // 0x58
//   private PerkTreeLines _PerkLines; // 0x60

// ===== public PerkSubItem GetSubItemByCurrentSubItemAndLastPosition(PerkSubItem GNFENDJPCFD, CMEMKGEPJMH EHFBCDNCMDM)  [RVA 0x353EE48]
// Nekki.SF2.GUI.Profile.PerkCell$$GetSubItemByCurrentSubItemAndLastPosition @ RVA 0x353EE48

Nekki_SF2_GUI_Profile_PerkSubItem_o *
Nekki_SF2_GUI_Profile_PerkCell__GetSubItemByCurrentSubItemAndLastPosition
          (Nekki_SF2_GUI_Profile_PerkCell_o *__this,Nekki_SF2_GUI_Profile_PerkSubItem_o *GNFENDJPCFD
          ,int32_t EHFBCDNCMDM,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_Profile_PerkSubItem_o *pNVar2;
  
                    /* try { // try from 0363ee58 to 0373ee5f has its CatchHandler @ 0363efc4 */
                    /* try { // try from 0363ee68 to 0373ee6f has its CatchHandler @ 0363efdc */
  if ((DAT_04568ae5 & 1) == 0) {
                    /* try { // try from 0363ee74 to 0373ee7b has its CatchHandler @ 0363efcc */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568ae5 = 1;
  }
  if (EHFBCDNCMDM == 3) {
    pNVar2 = (__this->fields)._RightSubItem;
    if ((pNVar2 == (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) ||
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_GameObject_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0363ef80 to 0373ef87 has its CatchHandler @ 0363f014 */
      FUN_01bab8c8();
    }
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 0363eec0 to 0373eee3 has its CatchHandler @ 0363efe0 */
    if (bVar1) {
      pNVar2 = (__this->fields)._RightSubItem;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 0363eee4 to 0373ef7f has its CatchHandler @ 0363eac0 */
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)GNFENDJPCFD,
                         (MethodInfo *)0x0);
      if (bVar1) {
        return (__this->fields)._RightSubItem;
      }
    }
    pNVar2 = (__this->fields)._LeftSubItem;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)GNFENDJPCFD,
                       (MethodInfo *)0x0);
    if (!bVar1) {
      return (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0;
    }
    pNVar2 = (__this->fields)._RightSubItem;
  }
  else {
    if (EHFBCDNCMDM != 2) {
      return (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0;
    }
    pNVar2 = (__this->fields)._LeftSubItem;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)GNFENDJPCFD,
                     (MethodInfo *)0x0);
  pNVar2 = (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0;
  if (bVar1) {
    pNVar2 = (__this->fields)._LeftSubItem;
  }
  return pNVar2;
}


// ===== public void Init(EANNACPOJFA PLKOKDEAMBE, JEIEEMKCNOJ JJHEGPBBMLG, float DLPDIIMKMKE = 15)  [RVA 0x353EF84]
// Nekki.SF2.GUI.Profile.PerkCell$$Init @ RVA 0x353EF84

void Nekki_SF2_GUI_Profile_PerkCell__Init
               (Nekki_SF2_GUI_Profile_PerkCell_o *__this,EANNACPOJFA_o *PLKOKDEAMBE,
               JEIEEMKCNOJ_o *JJHEGPBBMLG,float DLPDIIMKMKE,MethodInfo *method)

{
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_00;
  Nekki_SF2_GUI_Profile_PerkTreeLines_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  MethodInfo *method_00;
  JEIEEMKCNOJ_o **ppJVar1;
  
                    /* try { // try from 0363ef88 to 0373ef8b has its CatchHandler @ 0363f000 */
                    /* try { // try from 0363ef8c to 0373ef8f has its CatchHandler @ 0363effc */
                    /* try { // try from 0363ef90 to 0373ef93 has its CatchHandler @ 0363eff8 */
                    /* try { // try from 0363ef94 to 0373ef97 has its CatchHandler @ 0363efd8 */
                    /* try { // try from 0363ef98 to 0373ef9b has its CatchHandler @ 0363efd0 */
                    /* try { // try from 0363ef9c to 0373ef9f has its CatchHandler @ 0363f020 */
                    /* try { // try from 0363efa0 to 0373efa3 has its CatchHandler @ 0363efc0 */
                    /* try { // try from 0363efa4 to 0373efa7 has its CatchHandler @ 0363f020 */
  method_00 = (MethodInfo *)JJHEGPBBMLG;
                    /* try { // try from 0363efa8 to 0373efab has its CatchHandler @ 0363eac0 */
                    /* try { // try from 0363efac to 0373efaf has its CatchHandler @ 0363efb8 */
                    /* try { // try from 0363efb0 to 0373f047 has its CatchHandler @ 0363eac0 */
  (*(__this->klass->vtable)._17_Clear.methodPtr)(__this,(__this->klass->vtable)._17_Clear.method);
                    /* catch() { ... } // from try @ 0363efac with catch @ 0363efb8 */
                    /* catch() { ... } // from try @ 0363ee00 with catch @ 0363efbc */
  Nekki_SF2_GUI_Profile_PerkCell__GJNMBGMOEHH(__this,(__this->fields)._LeftSubItem,method_00);
                    /* catch() { ... } // from try @ 0363efa0 with catch @ 0363efc0 */
                    /* catch() { ... } // from try @ 0363ee58 with catch @ 0363efc4 */
                    /* catch() { ... } // from try @ 0363ee08 with catch @ 0363efc8 */
  Nekki_SF2_GUI_Profile_PerkCell__GJNMBGMOEHH(__this,(__this->fields)._RightSubItem,method_00);
                    /* catch() { ... } // from try @ 0363ee74 with catch @ 0363efcc */
  if (PLKOKDEAMBE != (EANNACPOJFA_o *)0x0) {
                    /* catch() { ... } // from try @ 0363ef98 with catch @ 0363efd0 */
                    /* catch() { ... } // from try @ 0363ee3c with catch @ 0363efd4 */
                    /* catch() { ... } // from try @ 0363ef94 with catch @ 0363efd8 */
    Nekki_SF2_GUI_Profile_PerkCell__GJAELBNACIK(__this,(PLKOKDEAMBE->fields).GJBLBEALOBO,method_00);
    ppJVar1 = &(__this->fields).super.MKAAKGJNBHI;
                    /* catch() { ... } // from try @ 0363ee68 with catch @ 0363efdc */
                    /* catch() { ... } // from try @ 0363eec0 with catch @ 0363efe0 */
    *ppJVar1 = JJHEGPBBMLG;
                    /* catch() { ... } // from try @ 0363ee34 with catch @ 0363efe4 */
                    /* catch() { ... } // from try @ 0363edf0 with catch @ 0363efe8 */
                    /* catch() { ... } // from try @ 0363ee24 with catch @ 0363efec */
    thunk_FUN_01c20e04(ppJVar1,JJHEGPBBMLG);
                    /* catch() { ... } // from try @ 0363ed98 with catch @ 0363eff0 */
    __this_00 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)(__this->fields)._LayoutGroup;
                    /* catch() { ... } // from try @ 0363ed50 with catch @ 0363eff4 */
    if (__this_00 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
                    /* catch() { ... } // from try @ 0363ef90 with catch @ 0363eff8 */
                    /* catch() { ... } // from try @ 0363ef8c with catch @ 0363effc */
                    /* catch() { ... } // from try @ 0363ef88 with catch @ 0363f000 */
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                (__this_00,DLPDIIMKMKE,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0363ed64 with catch @ 0363f004 */
      __this_01 = (__this->fields)._PerkLines;
                    /* catch() { ... } // from try @ 0363edc0 with catch @ 0363f008 */
                    /* catch() { ... } // from try @ 0363edb0 with catch @ 0363f00c */
                    /* catch() { ... } // from try @ 0363ed88 with catch @ 0363f010 */
                    /* catch() { ... } // from try @ 0363ef80 with catch @ 0363f014 */
      if ((__this_01 != (Nekki_SF2_GUI_Profile_PerkTreeLines_o *)0x0) &&
         (__this_02 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
         __this_02 != (UnityEngine_GameObject_o *)0x0)) {
                    /* catch() { ... } // from try @ 0363ecb0 with catch @ 0363f018 */
                    /* catch() { ... } // from try @ 0363ec54 with catch @ 0363f01c */
                    /* catch() { ... } // from try @ 0363ef9c with catch @ 0363f020
                       catch() { ... } // from try @ 0363efa4 with catch @ 0363f020 */
                    /* catch() { ... } // from try @ 0363edc8 with catch @ 0363f024 */
                    /* catch() { ... } // from try @ 0363ed24 with catch @ 0363f028 */
        UnityEngine_GameObject__SetActive(__this_02,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void UpdateState()  [RVA 0x353F260]
// Nekki.SF2.GUI.Profile.PerkCell$$UpdateState @ RVA 0x353F260

void Nekki_SF2_GUI_Profile_PerkCell__UpdateState
               (Nekki_SF2_GUI_Profile_PerkCell_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Profile_PerkSubItem_o *pNVar2;
  UnityEngine_GameObject_o *__this_00;
  
  pNVar2 = (__this->fields)._LeftSubItem;
  if (pNVar2 != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
    (*(pNVar2->klass->vtable)._58_UpdateState.methodPtr)
              (pNVar2,(pNVar2->klass->vtable)._58_UpdateState.method);
    pNVar2 = (__this->fields)._RightSubItem;
    if ((pNVar2 != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pNVar2 = (__this->fields)._RightSubItem;
      if (pNVar2 != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0363f2b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pNVar2->klass->vtable)._58_UpdateState.methodPtr)
                  (pNVar2,(pNVar2->klass->vtable)._58_UpdateState.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public PerkSubItem get_RightSubItem()  [RVA 0x353F2C8]
// Nekki.SF2.GUI.Profile.PerkCell$$get_RightSubItem @ RVA 0x353F2C8

Nekki_SF2_GUI_Profile_PerkSubItem_o *
Nekki_SF2_GUI_Profile_PerkCell__get_RightSubItem
          (Nekki_SF2_GUI_Profile_PerkCell_o *__this,MethodInfo *method)

{
  return (__this->fields)._RightSubItem;
}


// ===== private void HJKLMBOACHH()  [RVA 0x353F2D0]
// Nekki.SF2.GUI.Profile.PerkCell$$HJKLMBOACHH @ RVA 0x353F2D0

void Nekki_SF2_GUI_Profile_PerkCell__HJKLMBOACHH
               (Nekki_SF2_GUI_Profile_PerkCell_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_int__o *__this_00;
  
  if ((DAT_04568ae6 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<int>_Invoke__);
    DAT_04568ae6 = 1;
  }
  __this_00 = (UnityEngine_Events_UnityEvent_int__o *)(__this->fields).super.super.DidSelectEvent;
  if (__this_00 != (UnityEngine_Events_UnityEvent_int__o *)0x0) {
    UnityEngine_Events_UnityEvent<int>__Invoke
              (__this_00,(__this->fields).super.super.FIMCNHGPCNA,
               Method_UnityEngine_Events_UnityEvent<int>_Invoke__);
    return;
  }
  return;
}


// ===== private void GJAELBNACIK(List<JLGNBOILFLN> GJBLBEALOBO)  [RVA 0x353F134]
// Nekki.SF2.GUI.Profile.PerkCell$$GJAELBNACIK @ RVA 0x353F134

void Nekki_SF2_GUI_Profile_PerkCell__GJAELBNACIK
               (Nekki_SF2_GUI_Profile_PerkCell_o *__this,
               System_Collections_Generic_List_JLGNBOILFLN__o *GJBLBEALOBO,MethodInfo *method)

{
  bool bVar1;
  JLGNBOILFLN_o *pJVar2;
  UnityEngine_GameObject_o *pUVar3;
  Nekki_SF2_GUI_Profile_PerkSubItem_o *pNVar4;
  
  if ((DAT_04568ae7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
    DAT_04568ae7 = 1;
  }
  if (GJBLBEALOBO != (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0) {
    pNVar4 = (__this->fields)._LeftSubItem;
    pJVar2 = (JLGNBOILFLN_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)GJBLBEALOBO,0,
                        Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
    if (pNVar4 != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
      Nekki_SF2_GUI_Profile_PerkSubItem__Init(pNVar4,pJVar2,(MethodInfo *)0x0);
      pNVar4 = (__this->fields)._RightSubItem;
      if ((pNVar4 != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) &&
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar3,1 < (GJBLBEALOBO->fields)._size,(MethodInfo *)0x0);
        pNVar4 = (__this->fields)._LeftSubItem;
        if (pNVar4 != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
          (pNVar4->fields)._Position = 1;
          pNVar4 = (__this->fields)._RightSubItem;
          if (pNVar4 != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
            (pNVar4->fields)._Position = 0;
            pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
            if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
              bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
              if (!bVar1) {
                return;
              }
              pNVar4 = (__this->fields)._RightSubItem;
              pJVar2 = (JLGNBOILFLN_o *)
                       System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)GJBLBEALOBO,1,
                                  Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
              if (pNVar4 != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
                Nekki_SF2_GUI_Profile_PerkSubItem__Init(pNVar4,pJVar2,(MethodInfo *)0x0);
                pNVar4 = (__this->fields)._LeftSubItem;
                if (pNVar4 != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
                  (pNVar4->fields)._Position = 2;
                  pNVar4 = (__this->fields)._RightSubItem;
                  if (pNVar4 != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
                    (pNVar4->fields)._Position = 3;
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


// ===== public void .ctor()  [RVA 0x353F32C]
// Nekki.SF2.GUI.Profile.PerkCell$$.ctor @ RVA 0x353F32C

void Nekki_SF2_GUI_Profile_PerkCell___ctor
               (Nekki_SF2_GUI_Profile_PerkCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_ProfileCell___ctor
            ((Nekki_SF2_GUI_Profile_ProfileCell_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void ChoosePerkByName(string LMPMHKIABOM)  [RVA 0x353F334]
// Nekki.SF2.GUI.Profile.PerkCell$$ChoosePerkByName @ RVA 0x353F334

void Nekki_SF2_GUI_Profile_PerkCell__ChoosePerkByName
               (Nekki_SF2_GUI_Profile_PerkCell_o *__this,System_String_o *LMPMHKIABOM,
               MethodInfo *method)

{
  bool bVar1;
  JLGNBOILFLN_o *__this_00;
  System_String_o *a;
  Nekki_SF2_GUI_Profile_PerkSubItem_o *pNVar2;
  
  pNVar2 = (__this->fields)._LeftSubItem;
  if ((pNVar2 != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) &&
     (__this_00 = (pNVar2->fields)._CGEGGOPIPHH_k__BackingField, __this_00 != (JLGNBOILFLN_o *)0x0))
  {
    a = JLGNBOILFLN__GKMAFGODLLG(__this_00,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(a,LMPMHKIABOM,(MethodInfo *)0x0);
    if (bVar1) {
      pNVar2 = (__this->fields)._LeftSubItem;
    }
    else {
      pNVar2 = (__this->fields)._RightSubItem;
    }
    if (pNVar2 != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0363f394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar2->klass->vtable)._59_Choose.methodPtr)
                (pNVar2,(pNVar2->klass->vtable)._59_Choose.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init(EANNACPOJFA PLKOKDEAMBE, bool NANHIJPKIAP, bool LHFLFHOAHGM, JEIEEMKCNOJ JJHEGPBBMLG, float DLPDIIMKMKE = 95)  [RVA 0x353F398]
// Nekki.SF2.GUI.Profile.PerkCell$$Init @ RVA 0x353F398

void Nekki_SF2_GUI_Profile_PerkCell__Init
               (Nekki_SF2_GUI_Profile_PerkCell_o *__this,EANNACPOJFA_o *PLKOKDEAMBE,bool NANHIJPKIAP
               ,bool LHFLFHOAHGM,JEIEEMKCNOJ_o *JJHEGPBBMLG,float DLPDIIMKMKE,MethodInfo *method)

{
  bool ICCGIMJNNKM;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_00;
  Nekki_SF2_GUI_Profile_PerkSubItem_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Profile_PerkTreeLines_o *__this_03;
  JEIEEMKCNOJ_o **ppJVar1;
  
  method_00 = (MethodInfo *)(ulong)NANHIJPKIAP;
  (*(__this->klass->vtable)._17_Clear.methodPtr)(__this,(__this->klass->vtable)._17_Clear.method);
  Nekki_SF2_GUI_Profile_PerkCell__GJNMBGMOEHH(__this,(__this->fields)._LeftSubItem,method_00);
  Nekki_SF2_GUI_Profile_PerkCell__GJNMBGMOEHH(__this,(__this->fields)._RightSubItem,method_00);
  if (PLKOKDEAMBE != (EANNACPOJFA_o *)0x0) {
    Nekki_SF2_GUI_Profile_PerkCell__GJAELBNACIK(__this,(PLKOKDEAMBE->fields).GJBLBEALOBO,method_00);
    ppJVar1 = &(__this->fields).super.MKAAKGJNBHI;
    *ppJVar1 = JJHEGPBBMLG;
    thunk_FUN_01c20e04(ppJVar1,JJHEGPBBMLG);
    __this_00 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)(__this->fields)._LayoutGroup;
    if (__this_00 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                (__this_00,DLPDIIMKMKE,(MethodInfo *)0x0);
      __this_01 = (__this->fields)._RightSubItem;
      if (__this_01 != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
        __this_03 = (__this->fields)._PerkLines;
        __this_02 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
        if ((__this_02 != (UnityEngine_GameObject_o *)0x0) &&
           (ICCGIMJNNKM = UnityEngine_GameObject__get_activeSelf(__this_02,(MethodInfo *)0x0),
           __this_03 != (Nekki_SF2_GUI_Profile_PerkTreeLines_o *)0x0)) {
          Nekki_SF2_GUI_Profile_PerkTreeLines__Refresh
                    (__this_03,NANHIJPKIAP,LHFLFHOAHGM,ICCGIMJNNKM,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public PerkSubItem GetSubItemByPosition(CMEMKGEPJMH EEGKJKNENDE)  [RVA 0x353F474]
// Nekki.SF2.GUI.Profile.PerkCell$$GetSubItemByPosition @ RVA 0x353F474

Nekki_SF2_GUI_Profile_PerkSubItem_o *
Nekki_SF2_GUI_Profile_PerkCell__GetSubItemByPosition
          (Nekki_SF2_GUI_Profile_PerkCell_o *__this,int32_t EEGKJKNENDE,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Profile_PerkSubItem_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  
  if (EEGKJKNENDE == 3) {
    pNVar2 = (__this->fields)._RightSubItem;
    if ((pNVar2 == (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) ||
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_GameObject_o *)0x0)) {
LAB_0363f4fc:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
    if (bVar1) {
      return (__this->fields)._RightSubItem;
    }
  }
  else if (EEGKJKNENDE != 2) {
    if (EEGKJKNENDE != 1) {
      return (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0;
    }
    pNVar2 = (__this->fields)._RightSubItem;
    if ((pNVar2 == (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) ||
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0363f4fc;
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
    if (bVar1) {
      return (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0;
    }
  }
  return (__this->fields)._LeftSubItem;
}


// ===== public override SubItem get_MainSubItem()  [RVA 0x353F500]
// Nekki.SF2.GUI.Profile.PerkCell$$get_MainSubItem @ RVA 0x353F500

Nekki_SF2_GUI_Profile_SubItem_o *
Nekki_SF2_GUI_Profile_PerkCell__get_MainSubItem
          (Nekki_SF2_GUI_Profile_PerkCell_o *__this,MethodInfo *method)

{
  return (Nekki_SF2_GUI_Profile_SubItem_o *)(__this->fields)._LeftSubItem;
}


// ===== public PerkSubItem get_LeftSubItem()  [RVA 0x353F508]
// Nekki.SF2.GUI.Profile.PerkCell$$get_LeftSubItem @ RVA 0x353F508

Nekki_SF2_GUI_Profile_PerkSubItem_o *
Nekki_SF2_GUI_Profile_PerkCell__get_LeftSubItem
          (Nekki_SF2_GUI_Profile_PerkCell_o *__this,MethodInfo *method)

{
  return (__this->fields)._LeftSubItem;
}


// ===== public override void Clear()  [RVA 0x353F510]
// Nekki.SF2.GUI.Profile.PerkCell$$Clear @ RVA 0x353F510

void Nekki_SF2_GUI_Profile_PerkCell__Clear
               (Nekki_SF2_GUI_Profile_PerkCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_PerkSubItem_o *pNVar1;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_Profile_PerkTreeLines_o *__this_00;
  
  pNVar1 = (__this->fields)._LeftSubItem;
  if (pNVar1 != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
    Nekki_SF2_GUI_Profile_PerkSubItem__Clear(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._RightSubItem;
    if (pNVar1 != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
      Nekki_SF2_GUI_Profile_PerkSubItem__Clear(pNVar1,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._RightSubItem;
      if ((pNVar1 != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        __this_00 = (__this->fields)._PerkLines;
        if ((__this_00 != (Nekki_SF2_GUI_Profile_PerkTreeLines_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GJNMBGMOEHH(PerkSubItem BCBJCIDEALA)  [RVA 0x353F034]
// Nekki.SF2.GUI.Profile.PerkCell$$GJNMBGMOEHH @ RVA 0x353F034

void Nekki_SF2_GUI_Profile_PerkCell__GJNMBGMOEHH
               (Nekki_SF2_GUI_Profile_PerkCell_o *__this,
               Nekki_SF2_GUI_Profile_PerkSubItem_o *BCBJCIDEALA,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  UnityEngine_Events_UnityEvent_o *pUVar2;
  
                    /* try { // try from 0363f048 to 0373f04b has its CatchHandler @ 0363f058 */
  if ((DAT_04568ae8 & 1) == 0) {
                    /* catch() { ... } // from try @ 0363f048 with catch @ 0363f058 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_PerkCell_HJKLMBOACHH__);
                    /* try { // try from 0363f068 to 0373f0d7 has its CatchHandler @ 0363f0ec */
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04568ae8 = 1;
  }
  if (BCBJCIDEALA != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
    (BCBJCIDEALA->fields).super.PEJMMOONAHC = (Nekki_SF2_GUI_Profile_ProfileCell_o *)__this;
    thunk_FUN_01c20e04(&(BCBJCIDEALA->fields).super.PEJMMOONAHC,__this);
    (BCBJCIDEALA->fields).super.HNDODCMPHHK = true;
    Nekki_SF2_GUI_Profile_SubItem__SetSelectFlashingMinOpacity
              ((Nekki_SF2_GUI_Profile_SubItem_o *)BCBJCIDEALA,0.33333334,(MethodInfo *)0x0);
    pUVar2 = (UnityEngine_Events_UnityEvent_o *)(BCBJCIDEALA->fields).super.super.super.m_OnClick;
    pUVar1 = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
                    /* try { // try from 0363f0d8 to 0373f0e3 has its CatchHandler @ 0363eac0 */
    if (pUVar2 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 0363f0e4 to 0373f0eb has its CatchHandler @ 0363f0ec */
      UnityEngine_Events_UnityEvent__RemoveListener(pUVar2,pUVar1,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0363f068 with catch @ 0363f0ec
                       catch() { ... } // from try @ 0363f0e4 with catch @ 0363f0ec */
      pUVar2 = (UnityEngine_Events_UnityEvent_o *)(BCBJCIDEALA->fields).super.super.super.m_OnClick;
      pUVar1 = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (pUVar2 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(pUVar2,pUVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void OnDestroy()  [RVA 0x353F580]
// Nekki.SF2.GUI.Profile.PerkCell$$OnDestroy @ RVA 0x353F580

void Nekki_SF2_GUI_Profile_PerkCell__OnDestroy
               (Nekki_SF2_GUI_Profile_PerkCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_PerkSubItem_o *pNVar1;
  
  Nekki_SF2_GUI_TableViewCell__OnDestroy((Nekki_SF2_GUI_TableViewCell_o *)__this,(MethodInfo *)0x0);
  pNVar1 = (__this->fields)._LeftSubItem;
  if (pNVar1 != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
    SFButton__RemoveAllEventListener((SFButton_o *)pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._RightSubItem;
    if (pNVar1 != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
      SFButton__RemoveAllEventListener((SFButton_o *)pNVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

