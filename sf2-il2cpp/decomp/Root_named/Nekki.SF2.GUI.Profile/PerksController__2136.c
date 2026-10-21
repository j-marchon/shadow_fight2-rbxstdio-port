// TypeDefIndex 2136
// Namespace: Nekki.SF2.GUI.Profile
// public class PerksController : ItemsController
// Fields:
//   private PerksController.MIJHABAAONP _OnCellSelected; // 0x40
//   private List<EANNACPOJFA> GPFJGCCIHLB; // 0x48
//   private float PFDLJJBHELJ; // 0x50
//   private CMEMKGEPJMH IGLNJPCAJOD; // 0x54

// ===== public void UpdateCellAtIndex(int HAJDGFPLGNK)  [RVA 0x32D0104]
// Nekki.SF2.GUI.Profile.PerksController$$UpdateCellAtIndex @ RVA 0x32D0104

void Nekki_SF2_GUI_Profile_PerksController__UpdateCellAtIndex
               (Nekki_SF2_GUI_Profile_PerksController_o *__this,int32_t HAJDGFPLGNK,
               MethodInfo *method)

{
  byte bVar1;
  KELJDKIIHMM_o *__this_00;
  Nekki_SF2_GUI_Profile_PerkCell_o *__this_01;
  EANNACPOJFA_o *PLKOKDEAMBE;
  Nekki_SF2_GUI_TableView_o *pNVar2;
  System_Collections_Generic_List_EANNACPOJFA__o *pSVar3;
  
                    /* try { // try from 033d0108 to 034d010f has its CatchHandler @ 033d02ac */
  if ((DAT_04567546 & 1) == 0) {
                    /* try { // try from 033d0120 to 034d0127 has its CatchHandler @ 033d0298 */
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_get_Count__);
                    /* try { // try from 033d0130 to 034d0137 has its CatchHandler @ 033d029c */
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_get_Item__);
                    /* try { // try from 033d0138 to 034d0143 has its CatchHandler @ 033d0294 */
    FUN_01bab630(&Nekki_SF2_GUI_Profile_PerkCell_TypeInfo);
    DAT_04567546 = 1;
  }
  pNVar2 = (__this->fields).super._TableView;
                    /* try { // try from 033d0154 to 034d015f has its CatchHandler @ 033d0284 */
  if ((pNVar2 != (Nekki_SF2_GUI_TableView_o *)0x0) &&
     (__this_00 = (pNVar2->fields)._LBHOKEBOIFN_k__BackingField, __this_00 != (KELJDKIIHMM_o *)0x0))
  {
    __this_01 = (Nekki_SF2_GUI_Profile_PerkCell_o *)
                KELJDKIIHMM__KHGEMIEPBJB(__this_00,HAJDGFPLGNK,(MethodInfo *)0x0);
    pSVar3 = (__this->fields).GPFJGCCIHLB;
    if (pSVar3 != (System_Collections_Generic_List_EANNACPOJFA__o *)0x0) {
                    /* try { // try from 033d0170 to 034d0177 has its CatchHandler @ 033d0288 */
                    /* try { // try from 033d0184 to 034d018b has its CatchHandler @ 033d02a0 */
      PLKOKDEAMBE = (EANNACPOJFA_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar3,HAJDGFPLGNK,
                               Method_System_Collections_Generic_List<EANNACPOJFA>_get_Item__);
      pSVar3 = (__this->fields).GPFJGCCIHLB;
                    /* try { // try from 033d0190 to 034d0197 has its CatchHandler @ 033d02a8 */
      if ((pSVar3 != (System_Collections_Generic_List_EANNACPOJFA__o *)0x0) &&
         (__this_01 != (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0)) {
                    /* try { // try from 033d01a4 to 034d01bf has its CatchHandler @ 033d02a4 */
        bVar1 = (Nekki_SF2_GUI_Profile_PerkCell_TypeInfo->_2).naturalAligment;
                    /* try { // try from 033d01c0 to 034d025b has its CatchHandler @ 033cfdf4 */
        if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
           ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
            (Il2CppClass *)Nekki_SF2_GUI_Profile_PerkCell_TypeInfo)) {
          Nekki_SF2_GUI_Profile_PerkCell__Init
                    (__this_01,PLKOKDEAMBE,HAJDGFPLGNK == 0,
                     HAJDGFPLGNK + 1 == (pSVar3->fields)._size,(JEIEEMKCNOJ_o *)__this,95.0,
                     (MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(__this_01);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override int NumberOfRowsInTableView(TableView GECPJPBIBPN)  [RVA 0x32D0218]
// Nekki.SF2.GUI.Profile.PerksController$$NumberOfRowsInTableView @ RVA 0x32D0218

int32_t Nekki_SF2_GUI_Profile_PerksController__NumberOfRowsInTableView
                  (Nekki_SF2_GUI_Profile_PerksController_o *__this,
                  Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,MethodInfo *method)

{
  System_Collections_Generic_List_EANNACPOJFA__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = GECPJPBIBPN;
  auVar2._0_8_ = __this;
  if ((DAT_04567547 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_get_Count__);
    DAT_04567547 = 1;
  }
  pSVar1 = (__this->fields).GPFJGCCIHLB;
  if (pSVar1 != (System_Collections_Generic_List_EANNACPOJFA__o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033d025c to 034d0263 has its CatchHandler @ 033d02c0 */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== private int HNJLAMEEFAD(string AFKICLAFDKC)  [RVA 0x32D0260]
// Nekki.SF2.GUI.Profile.PerksController$$HNJLAMEEFAD @ RVA 0x32D0260

int32_t Nekki_SF2_GUI_Profile_PerksController__HNJLAMEEFAD
                  (Nekki_SF2_GUI_Profile_PerksController_o *__this,System_String_o *AFKICLAFDKC,
                  MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_EANNACPOJFA__o *__this_00;
  Il2CppObject *pIVar3;
  System_String_o *a;
  int index;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
                    /* try { // try from 033d0264 to 034d0267 has its CatchHandler @ 033d02b0 */
                    /* try { // try from 033d0268 to 034d026b has its CatchHandler @ 033d0290 */
                    /* try { // try from 033d026c to 034d026f has its CatchHandler @ 033d028c */
                    /* try { // try from 033d0270 to 034d0273 has its CatchHandler @ 033cfdf4 */
                    /* try { // try from 033d0274 to 034d0277 has its CatchHandler @ 033d0280 */
                    /* try { // try from 033d0278 to 034d02df has its CatchHandler @ 033cfdf4 */
                    /* catch() { ... } // from try @ 033d0274 with catch @ 033d0280 */
                    /* catch() { ... } // from try @ 033d0154 with catch @ 033d0284 */
                    /* catch() { ... } // from try @ 033d0170 with catch @ 033d0288 */
                    /* catch() { ... } // from try @ 033d026c with catch @ 033d028c */
  if ((DAT_04567548 & 1) == 0) {
                    /* catch() { ... } // from try @ 033d0268 with catch @ 033d0290 */
                    /* catch() { ... } // from try @ 033d0138 with catch @ 033d0294 */
                    /* catch() { ... } // from try @ 033d0120 with catch @ 033d0298 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_Dispose__);
                    /* catch() { ... } // from try @ 033d0130 with catch @ 033d029c */
                    /* catch() { ... } // from try @ 033d0184 with catch @ 033d02a0 */
                    /* catch() { ... } // from try @ 033d01a4 with catch @ 033d02a4 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_MoveNext__);
                    /* catch() { ... } // from try @ 033d0190 with catch @ 033d02a8 */
                    /* catch() { ... } // from try @ 033d0108 with catch @ 033d02ac */
                    /* catch() { ... } // from try @ 033d0264 with catch @ 033d02b0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_get_Current__);
                    /* catch() { ... } // from try @ 033d00fc with catch @ 033d02b4 */
                    /* catch() { ... } // from try @ 033d0094 with catch @ 033d02b8 */
                    /* catch() { ... } // from try @ 033d0038 with catch @ 033d02bc */
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_GetEnumerator__);
                    /* catch() { ... } // from try @ 033d025c with catch @ 033d02c0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_get_Item__);
    DAT_04567548 = 1;
  }
                    /* try { // try from 033d02e0 to 034d02e3 has its CatchHandler @ 033d02f0 */
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).GPFJGCCIHLB;
  if (__this_00 != (System_Collections_Generic_List_EANNACPOJFA__o *)0x0) {
                    /* catch() { ... } // from try @ 033d02e0 with catch @ 033d02f0 */
    iVar1 = (__this_00->fields)._size;
    if (iVar1 < 1) {
      return -1;
    }
                    /* try { // try from 033d0300 to 034d036f has its CatchHandler @ 033d0384 */
    index = 0;
    do {
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<EANNACPOJFA>_get_Item__);
      if ((pIVar3 == (Il2CppObject *)0x0) ||
         (pIVar3[1].monitor == (System_Collections_Generic_List_object__o *)0x0)) break;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,pIVar3[1].monitor,
                 Method_System_Collections_Generic_List<JLGNBOILFLN>_GetEnumerator__);
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_MoveNext__
                               ), bVar2) {
        if ((JLGNBOILFLN_o *)local_80.fields._current == (JLGNBOILFLN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 033d0370 to 034d037b has its CatchHandler @ 033cfdf4 */
        a = JLGNBOILFLN__GKMAFGODLLG((JLGNBOILFLN_o *)local_80.fields._current,(MethodInfo *)0x0);
                    /* try { // try from 033d037c to 034d0383 has its CatchHandler @ 033d0384 */
        bVar2 = System_String__op_Equality(a,AFKICLAFDKC,(MethodInfo *)0x0);
        if (bVar2) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_80,
                     Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_Dispose__);
          return index;
        }
      }
                    /* try { // try from 033d0388 to 034d04e3 has its CatchHandler @ 033d0388
                       catch() { ... } // from try @ 033d0388 with catch @ 033d0388
                       catch() { ... } // from try @ 033d05e0 with catch @ 033d0388
                       catch() { ... } // from try @ 033d062c with catch @ 033d0388
                       catch() { ... } // from try @ 033d067c with catch @ 033d0388
                       catch() { ... } // from try @ 033d06bc with catch @ 033d0388 */
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_Dispose__)
      ;
      index = index + 1;
      if (index == iVar1) {
        return -1;
      }
      __this_00 = (__this->fields).GPFJGCCIHLB;
    } while (__this_00 != (System_Collections_Generic_List_EANNACPOJFA__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void Free()  [RVA 0x32D0460]
// Nekki.SF2.GUI.Profile.PerksController$$Free @ RVA 0x32D0460

void Nekki_SF2_GUI_Profile_PerksController__Free
               (Nekki_SF2_GUI_Profile_PerksController_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_ItemsController__Free
            ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void set_CurrentSubItem(SubItem CJNHFNHJHPE)  [RVA 0x32D0468]
// Nekki.SF2.GUI.Profile.PerksController$$set_CurrentSubItem @ RVA 0x32D0468

void Nekki_SF2_GUI_Profile_PerksController__set_CurrentSubItem
               (Nekki_SF2_GUI_Profile_PerksController_o *__this,
               Nekki_SF2_GUI_Profile_SubItem_o *CJNHFNHJHPE,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  Nekki_SF2_GUI_Profile_SubItem_o *x;
  Nekki_SF2_GUI_Profile_SubItem_o **ppNVar4;
  
  if ((DAT_04567549 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo);
    DAT_04567549 = 1;
  }
  ppNVar4 = &(__this->fields).super.PFKHDCBBDOG;
  *ppNVar4 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppNVar4,CJNHFNHJHPE);
  x = *ppNVar4;
  if (x != (Nekki_SF2_GUI_Profile_SubItem_o *)0x0) {
    bVar2 = (Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo->_2).naturalAligment;
                    /* try { // try from 033d04e4 to 034d04eb has its CatchHandler @ 033d0654 */
    if (bVar2 <= (x->klass->_2).naturalAligment) {
                    /* try { // try from 033d04f8 to 034d0507 has its CatchHandler @ 033d0660 */
      if ((x->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo) {
        x = (Nekki_SF2_GUI_Profile_SubItem_o *)0x0;
      }
      goto LAB_033d0508;
    }
  }
  x = (Nekki_SF2_GUI_Profile_SubItem_o *)0x0;
LAB_033d0508:
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033d0514 to 034d0533 has its CatchHandler @ 033d065c */
    thunk_FUN_01ba7564();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (x == (Nekki_SF2_GUI_Profile_SubItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar1 = *(int *)&x[1].fields.super.super.super.m_EnableCalled;
    if (iVar1 != 1) {
      (__this->fields).IGLNJPCAJOD = iVar1;
    }
  }
                    /* try { // try from 033d0540 to 034d0543 has its CatchHandler @ 033d0650 */
                    /* try { // try from 033d054c to 034d0553 has its CatchHandler @ 033d064c */
  return;
}


// ===== public override bool SelectLeftSubItem()  [RVA 0x32D0564]
// Nekki.SF2.GUI.Profile.PerksController$$SelectLeftSubItem @ RVA 0x32D0564

bool Nekki_SF2_GUI_Profile_PerksController__SelectLeftSubItem
               (Nekki_SF2_GUI_Profile_PerksController_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  Nekki_SF2_GUI_Profile_PerkCell_o *__this_00;
  Nekki_SF2_GUI_Profile_PerkSubItem_o *x;
  
                    /* try { // try from 033d0564 to 034d056f has its CatchHandler @ 033d0630 */
                    /* try { // try from 033d0574 to 034d057b has its CatchHandler @ 033d0638 */
  if ((DAT_0456754a & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_ItemsController_DLHMNFBGOGN<PerkCell>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456754a = 1;
  }
  LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  bVar1 = TutorialExtension__MNKFDLHJPAA(LAIGNDBNBJG,(MethodInfo *)0x0);
  if (!bVar1) {
                    /* try { // try from 033d05bc to 034d05df has its CatchHandler @ 033d063c */
    __this_00 = (Nekki_SF2_GUI_Profile_PerkCell_o *)
                Nekki_SF2_GUI_Profile_ItemsController__DLHMNFBGOGN<object>
                          ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this,
                           Method_Nekki_SF2_GUI_Profile_ItemsController_DLHMNFBGOGN<PerkCell>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033d05e0 to 034d0613 has its CatchHandler @ 033d0388 */
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (!bVar1) {
      if (__this_00 != (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) {
        x = Nekki_SF2_GUI_Profile_PerkCell__GetSubItemByPosition(__this_00,2,(MethodInfo *)0x0);
                    /* try { // try from 033d0614 to 034d0617 has its CatchHandler @ 033d0658 */
                    /* try { // try from 033d0618 to 034d061b has its CatchHandler @ 033d0648 */
                    /* try { // try from 033d061c to 034d061f has its CatchHandler @ 033d0658 */
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033d0620 to 034d0623 has its CatchHandler @ 033d0644 */
                    /* try { // try from 033d0624 to 034d0627 has its CatchHandler @ 033d0640 */
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
                    /* try { // try from 033d0628 to 034d062b has its CatchHandler @ 033d0634 */
                    /* try { // try from 033d062c to 034d0677 has its CatchHandler @ 033d0388 */
                    /* catch() { ... } // from try @ 033d0564 with catch @ 033d0630 */
                    /* catch() { ... } // from try @ 033d0628 with catch @ 033d0634 */
        bVar1 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033d0574 with catch @ 033d0638 */
        if (bVar1) {
          return false;
        }
                    /* catch() { ... } // from try @ 033d054c with catch @ 033d064c */
        if (x != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
                    /* catch() { ... } // from try @ 033d0540 with catch @ 033d0650 */
                    /* catch() { ... } // from try @ 033d04e4 with catch @ 033d0654 */
                    /* catch() { ... } // from try @ 033d0614 with catch @ 033d0658
                       catch() { ... } // from try @ 033d061c with catch @ 033d0658 */
                    /* catch() { ... } // from try @ 033d0514 with catch @ 033d065c */
                    /* catch() { ... } // from try @ 033d04f8 with catch @ 033d0660 */
          (*(x->klass->vtable)._59_Choose.methodPtr)(x,(x->klass->vtable)._59_Choose.method);
          return true;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* catch() { ... } // from try @ 033d05bc with catch @ 033d063c */
                    /* catch() { ... } // from try @ 033d0624 with catch @ 033d0640 */
                    /* catch() { ... } // from try @ 033d0620 with catch @ 033d0644 */
                    /* catch() { ... } // from try @ 033d0618 with catch @ 033d0648 */
  return false;
}


// ===== public bool get_IsAvailablePerk()  [RVA 0x32D0670]
// Nekki.SF2.GUI.Profile.PerksController$$get_IsAvailablePerk @ RVA 0x32D0670

bool Nekki_SF2_GUI_Profile_PerksController__get_IsAvailablePerk
               (Nekki_SF2_GUI_Profile_PerksController_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  EPFMFHDGMCE_o *pEVar3;
  Roster_o *__this_00;
  System_Collections_Generic_List_JLGNBOILFLN__o *__this_01;
  int iVar4;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
                    /* try { // try from 033d0678 to 034d067b has its CatchHandler @ 033d06a4 */
                    /* try { // try from 033d067c to 034d06b3 has its CatchHandler @ 033d0388 */
  if ((DAT_0456754b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_MoveNext__);
                    /* catch() { ... } // from try @ 033d0678 with catch @ 033d06a4 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_get_Current__);
                    /* try { // try from 033d06b4 to 034d06bb has its CatchHandler @ 033d06d0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_GetEnumerator__);
                    /* try { // try from 033d06bc to 034d06c7 has its CatchHandler @ 033d0388 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 033d06c8 to 034d06cf has its CatchHandler @ 033d06d0 */
    DAT_0456754b = 1;
  }
                    /* catch() { ... } // from try @ 033d06b4 with catch @ 033d06d0
                       catch() { ... } // from try @ 033d06c8 with catch @ 033d06d0 */
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pEVar3 = EPFMFHDGMCE__ICEPMHDMFLM((MethodInfo *)0x0);
  if (pEVar3 != (EPFMFHDGMCE_o *)0x0) {
    __this_01 = (pEVar3->fields).GCHAMOPMNHF;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 != (Roster_o *)0x0) {
      iVar2 = Roster__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
      if (__this_01 != (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_48,(System_Collections_Generic_List_object__o *)__this_01,
                   Method_System_Collections_Generic_List<JLGNBOILFLN>_GetEnumerator__);
        do {
          bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_48,
                             Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_MoveNext__
                            );
          if (!bVar1) {
            iVar4 = 5;
            goto LAB_033d07b8;
          }
          if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        } while ((*(int *)&local_48.fields._current[1].monitor != 0) ||
                (iVar2 < *(int *)((long)&local_48.fields._current[1].monitor + 4)));
        iVar4 = 4;
LAB_033d07b8:
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_Dispose__);
        return bVar1 && iVar4 == 4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool SelectRightSubItem()  [RVA 0x32D085C]
// Nekki.SF2.GUI.Profile.PerksController$$SelectRightSubItem @ RVA 0x32D085C

bool Nekki_SF2_GUI_Profile_PerksController__SelectRightSubItem
               (Nekki_SF2_GUI_Profile_PerksController_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  Nekki_SF2_GUI_Profile_PerkCell_o *__this_00;
  Nekki_SF2_GUI_Profile_PerkSubItem_o *x;
  
  if ((DAT_0456754c & 1) == 0) {
                    /* try { // try from 033d0878 to 034d098f has its CatchHandler @ 033d0878
                       catch() { ... } // from try @ 033d0878 with catch @ 033d0878
                       catch() { ... } // from try @ 033d0a04 with catch @ 033d0878
                       catch() { ... } // from try @ 033d0a2c with catch @ 033d0878
                       catch() { ... } // from try @ 033d0a84 with catch @ 033d0878
                       catch() { ... } // from try @ 033d0ae4 with catch @ 033d0878
                       catch() { ... } // from try @ 033d0b28 with catch @ 033d0878
                       catch() { ... } // from try @ 033d0b64 with catch @ 033d0878
                       catch() { ... } // from try @ 033d0b80 with catch @ 033d0878
                       catch() { ... } // from try @ 033d0bb0 with catch @ 033d0878 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_ItemsController_DLHMNFBGOGN<PerkCell>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456754c = 1;
  }
  LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  bVar1 = TutorialExtension__MNKFDLHJPAA(LAIGNDBNBJG,(MethodInfo *)0x0);
  if (!bVar1) {
    __this_00 = (Nekki_SF2_GUI_Profile_PerkCell_o *)
                Nekki_SF2_GUI_Profile_ItemsController__DLHMNFBGOGN<object>
                          ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this,
                           Method_Nekki_SF2_GUI_Profile_ItemsController_DLHMNFBGOGN<PerkCell>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (!bVar1) {
      if (__this_00 != (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) {
        x = Nekki_SF2_GUI_Profile_PerkCell__GetSubItemByPosition(__this_00,3,(MethodInfo *)0x0);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        bVar1 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          return false;
        }
        if (x != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
          (*(x->klass->vtable)._59_Choose.methodPtr)(x,(x->klass->vtable)._59_Choose.method);
          return true;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return false;
}


// ===== private int AJKEPBOILNA(JLGNBOILFLN CDEABOAKDEJ)  [RVA 0x32D0968]
// Nekki.SF2.GUI.Profile.PerksController$$AJKEPBOILNA @ RVA 0x32D0968

int32_t Nekki_SF2_GUI_Profile_PerksController__AJKEPBOILNA
                  (Nekki_SF2_GUI_Profile_PerksController_o *__this,JLGNBOILFLN_o *CDEABOAKDEJ,
                  MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_EANNACPOJFA__o *__this_00;
  Il2CppObject *pIVar3;
  int index;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
                    /* try { // try from 033d0990 to 034d0997 has its CatchHandler @ 033d0b0c */
  if ((DAT_0456754d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_Dispose__);
                    /* try { // try from 033d09a8 to 034d09af has its CatchHandler @ 033d0afc */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_get_Current__);
                    /* try { // try from 033d09c4 to 034d09cb has its CatchHandler @ 033d0a10 */
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_get_Item__);
                    /* try { // try from 033d09e0 to 034d09e3 has its CatchHandler @ 033d0a0c */
    DAT_0456754d = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
                    /* try { // try from 033d09f0 to 034d09f7 has its CatchHandler @ 033d0b00 */
  __this_00 = (__this->fields).GPFJGCCIHLB;
  if (__this_00 != (System_Collections_Generic_List_EANNACPOJFA__o *)0x0) {
    iVar1 = (__this_00->fields)._size;
                    /* try { // try from 033d0a00 to 034d0a03 has its CatchHandler @ 033d0a08 */
    if (iVar1 < 1) {
                    /* try { // try from 033d0ae4 to 034d0b23 has its CatchHandler @ 033d0878 */
                    /* catch() { ... } // from try @ 033d0a28 with catch @ 033d0ae8 */
                    /* catch() { ... } // from try @ 033d0ae0 with catch @ 033d0af4 */
                    /* catch() { ... } // from try @ 033d0ad8 with catch @ 033d0af8 */
                    /* catch() { ... } // from try @ 033d09a8 with catch @ 033d0afc */
                    /* catch() { ... } // from try @ 033d09f0 with catch @ 033d0b00 */
                    /* catch() { ... } // from try @ 033d0ad4 with catch @ 033d0b04 */
                    /* catch() { ... } // from try @ 033d0a80 with catch @ 033d0b08 */
      return -1;
    }
                    /* try { // try from 033d0a04 to 034d0a27 has its CatchHandler @ 033d0878 */
                    /* catch() { ... } // from try @ 033d0a00 with catch @ 033d0a08 */
                    /* catch() { ... } // from try @ 033d09e0 with catch @ 033d0a0c */
                    /* catch() { ... } // from try @ 033d09c4 with catch @ 033d0a10 */
    index = 0;
    do {
                    /* try { // try from 033d0a28 to 034d0a2b has its CatchHandler @ 033d0ae8 */
                    /* try { // try from 033d0a2c to 034d0a63 has its CatchHandler @ 033d0878 */
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<EANNACPOJFA>_get_Item__);
      if ((pIVar3 == (Il2CppObject *)0x0) ||
         (pIVar3[1].monitor == (System_Collections_Generic_List_object__o *)0x0)) break;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,pIVar3[1].monitor,
                 Method_System_Collections_Generic_List<JLGNBOILFLN>_GetEnumerator__);
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._list = local_98.fields._list;
      local_80.fields._current = local_98.fields._current;
                    /* try { // try from 033d0a64 to 034d0a6b has its CatchHandler @ 033d0b64 */
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_MoveNext__
                               ), bVar2) {
        if ((JLGNBOILFLN_o *)local_80.fields._current == CDEABOAKDEJ) {
                    /* try { // try from 033d0ad4 to 034d0ad7 has its CatchHandler @ 033d0b04 */
                    /* try { // try from 033d0ad8 to 034d0adf has its CatchHandler @ 033d0af8 */
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_80,
                     Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_Dispose__);
          return index;
                    /* try { // try from 033d0ae0 to 034d0ae3 has its CatchHandler @ 033d0af4 */
        }
      }
                    /* try { // try from 033d0a80 to 034d0a83 has its CatchHandler @ 033d0b08 */
                    /* try { // try from 033d0a84 to 034d0abb has its CatchHandler @ 033d0878 */
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_Dispose__)
      ;
      index = index + 1;
      if (index == iVar1) {
        return -1;
      }
      __this_00 = (__this->fields).GPFJGCCIHLB;
    } while (__this_00 != (System_Collections_Generic_List_EANNACPOJFA__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033d0990 with catch @ 033d0b0c */
  FUN_01bab8c8();
}


// ===== protected override void EHPMHOHOPGA(TableViewCell AHICPBEJIKJ)  [RVA 0x32D0B40]
// Nekki.SF2.GUI.Profile.PerksController$$EHPMHOHOPGA @ RVA 0x32D0B40

void Nekki_SF2_GUI_Profile_PerksController__EHPMHOHOPGA
               (Nekki_SF2_GUI_Profile_PerksController_o *__this,
               Nekki_SF2_GUI_TableViewCell_o *AHICPBEJIKJ,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Nekki_SF2_GUI_Profile_PerksController_MIJHABAAONP_o *__this_00;
  
                    /* catch() { ... } // from try @ 033d0b24 with catch @ 033d0b48 */
                    /* try { // try from 033d0b50 to 034d0b63 has its CatchHandler @ 033d0bc4 */
                    /* catch() { ... } // from try @ 033d0a64 with catch @ 033d0b64
                       try { // try from 033d0b64 to 034d0b7b has its CatchHandler @ 033d0878 */
  if ((DAT_0456754e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 033d0b7c to 034d0b7f has its CatchHandler @ 033d0ba0 */
    FUN_01bab630(&Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo);
                    /* try { // try from 033d0b80 to 034d0ba7 has its CatchHandler @ 033d0878 */
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<ProfileCell>_Invoke__);
    DAT_0456754e = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 033d0b7c with catch @ 033d0ba0 */
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 033d0ba8 to 034d0baf has its CatchHandler @ 033d0bc4 */
                    /* try { // try from 033d0bb0 to 034d0bbb has its CatchHandler @ 033d0878 */
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)AHICPBEJIKJ,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar2) {
                    /* try { // try from 033d0bbc to 034d0bc3 has its CatchHandler @ 033d0bc4 */
                    /* catch() { ... } // from try @ 033d0abc with catch @ 033d0bc4
                       catch() { ... } // from try @ 033d0b50 with catch @ 033d0bc4
                       catch() { ... } // from try @ 033d0ba8 with catch @ 033d0bc4
                       catch() { ... } // from try @ 033d0bbc with catch @ 033d0bc4 */
    return;
  }
  Nekki_SF2_GUI_Profile_ItemsController__EHPMHOHOPGA
            ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this,AHICPBEJIKJ,(MethodInfo *)0x0);
  if (AHICPBEJIKJ != (Nekki_SF2_GUI_TableViewCell_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo->_2).naturalAligment;
    if (((AHICPBEJIKJ->klass->_2).naturalAligment < bVar1) ||
       ((AHICPBEJIKJ->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(AHICPBEJIKJ);
    }
  }
  __this_00 = (__this->fields)._OnCellSelected;
  if (__this_00 != (Nekki_SF2_GUI_Profile_PerksController_MIJHABAAONP_o *)0x0) {
    UnityEngine_Events_UnityEvent<object>__Invoke
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,(Il2CppObject *)AHICPBEJIKJ,
               Method_UnityEngine_Events_UnityEvent<ProfileCell>_Invoke__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public PerkCell GetCellByPerk(JLGNBOILFLN CDEABOAKDEJ)  [RVA 0x32D0C44]
// Nekki.SF2.GUI.Profile.PerksController$$GetCellByPerk @ RVA 0x32D0C44

Nekki_SF2_GUI_Profile_PerkCell_o *
Nekki_SF2_GUI_Profile_PerksController__GetCellByPerk
          (Nekki_SF2_GUI_Profile_PerksController_o *__this,JLGNBOILFLN_o *CDEABOAKDEJ,
          MethodInfo *method)

{
  byte bVar1;
  int32_t DPJIDNBJIBG;
  int32_t iVar2;
  Nekki_SF2_GUI_TableView_o *pNVar3;
  Nekki_SF2_GUI_Profile_PerkCell_o *pNVar4;
  KELJDKIIHMM_o *__this_00;
  
  if ((DAT_0456754f & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Profile_PerkCell_TypeInfo);
    DAT_0456754f = 1;
  }
  DPJIDNBJIBG = Nekki_SF2_GUI_Profile_PerksController__AJKEPBOILNA(__this,CDEABOAKDEJ,method);
  if (DPJIDNBJIBG < 0) {
    pNVar4 = (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0;
  }
  else {
    pNVar3 = (__this->fields).super._TableView;
    if (pNVar3 == (Nekki_SF2_GUI_TableView_o *)0x0) {
LAB_033d0d0c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar2 = Nekki_SF2_GUI_TableView__NumberOfRows(pNVar3,(MethodInfo *)0x0);
    pNVar4 = (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0;
    if (DPJIDNBJIBG < iVar2) {
      pNVar3 = (__this->fields).super._TableView;
      if ((pNVar3 == (Nekki_SF2_GUI_TableView_o *)0x0) ||
         (__this_00 = (pNVar3->fields)._LBHOKEBOIFN_k__BackingField,
         __this_00 == (KELJDKIIHMM_o *)0x0)) goto LAB_033d0d0c;
      pNVar4 = (Nekki_SF2_GUI_Profile_PerkCell_o *)
               KELJDKIIHMM__KHGEMIEPBJB(__this_00,DPJIDNBJIBG,(MethodInfo *)0x0);
      if (pNVar4 != (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) {
        bVar1 = (Nekki_SF2_GUI_Profile_PerkCell_TypeInfo->_2).naturalAligment;
        if (((pNVar4->klass->_2).naturalAligment < bVar1) ||
           ((pNVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)Nekki_SF2_GUI_Profile_PerkCell_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64();
        }
      }
    }
  }
  return pNVar4;
}


// ===== public override void Init()  [RVA 0x32D0D10]
// Nekki.SF2.GUI.Profile.PerksController$$Init @ RVA 0x32D0D10

void Nekki_SF2_GUI_Profile_PerksController__Init
               (Nekki_SF2_GUI_Profile_PerksController_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Profile_PerksController_o *__this_00;
  MethodInfo *method_00;
  
  Nekki_SF2_GUI_Profile_ItemsController__Init
            ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this,(MethodInfo *)0x0);
  bVar1 = Nekki_SF2_GUI_Profile_PerksController__get_IsAvailablePerk(__this_00,method_00);
  if (bVar1) {
    Nekki_SF2_GUI_Profile_ItemsController__MBMAFJIBBAB
              ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ===== public override TableViewCell CellForRowInTableView(TableView GECPJPBIBPN, int HAJDGFPLGNK)  [RVA 0x32D0D40]
// Nekki.SF2.GUI.Profile.PerksController$$CellForRowInTableView @ RVA 0x32D0D40

Nekki_SF2_GUI_TableViewCell_o *
Nekki_SF2_GUI_Profile_PerksController__CellForRowInTableView
          (Nekki_SF2_GUI_Profile_PerksController_o *__this,Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,
          int32_t HAJDGFPLGNK,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_o *__this_00;
  Nekki_SF2_GUI_Profile_PerkCell_o *__this_01;
  EANNACPOJFA_o *PLKOKDEAMBE;
  System_Collections_Generic_List_EANNACPOJFA__o *pSVar1;
  
  if ((DAT_04567550 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_get_Item__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TableView_ReusableCellForRow<PerkCell>__);
    DAT_04567550 = 1;
  }
  __this_00 = (__this->fields).super._TableView;
  if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    __this_01 = (Nekki_SF2_GUI_Profile_PerkCell_o *)
                Nekki_SF2_GUI_TableView__ReusableCellForRow<object>
                          (__this_00,HAJDGFPLGNK,
                           Method_Nekki_SF2_GUI_TableView_ReusableCellForRow<PerkCell>__);
    pSVar1 = (__this->fields).GPFJGCCIHLB;
    if (pSVar1 != (System_Collections_Generic_List_EANNACPOJFA__o *)0x0) {
      PLKOKDEAMBE = (EANNACPOJFA_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar1,HAJDGFPLGNK,
                               Method_System_Collections_Generic_List<EANNACPOJFA>_get_Item__);
      pSVar1 = (__this->fields).GPFJGCCIHLB;
      if ((pSVar1 != (System_Collections_Generic_List_EANNACPOJFA__o *)0x0) &&
         (__this_01 != (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0)) {
        Nekki_SF2_GUI_Profile_PerkCell__Init
                  (__this_01,PLKOKDEAMBE,HAJDGFPLGNK == 0,HAJDGFPLGNK + 1 == (pSVar1->fields)._size,
                   (JEIEEMKCNOJ_o *)__this,95.0,(MethodInfo *)0x0);
        return (Nekki_SF2_GUI_TableViewCell_o *)__this_01;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool get_IsLeftSubItemSelected()  [RVA 0x32D0E1C]
// Nekki.SF2.GUI.Profile.PerksController$$get_IsLeftSubItemSelected @ RVA 0x32D0E1C

bool Nekki_SF2_GUI_Profile_PerksController__get_IsLeftSubItemSelected
               (Nekki_SF2_GUI_Profile_PerksController_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  MethodInfo *method_00;
  
  iVar2 = Nekki_SF2_GUI_Profile_PerksController__get_LastPosition(__this,method);
  if (iVar2 == 2) {
    bVar1 = true;
  }
  else {
    iVar2 = Nekki_SF2_GUI_Profile_PerksController__get_LastPosition(__this,method_00);
    bVar1 = iVar2 == 1;
  }
  return bVar1;
}


// ===== protected override void BACIFGCANEA()  [RVA 0x32D0F40]
// Nekki.SF2.GUI.Profile.PerksController$$BACIFGCANEA @ RVA 0x32D0F40

void Nekki_SF2_GUI_Profile_PerksController__BACIFGCANEA
               (Nekki_SF2_GUI_Profile_PerksController_o *__this,MethodInfo *method)

{
  EPFMFHDGMCE_o *pEVar1;
  System_Collections_Generic_List_EANNACPOJFA__o **ppSVar2;
  
  pEVar1 = EPFMFHDGMCE__ICEPMHDMFLM((MethodInfo *)0x0);
  if (pEVar1 != (EPFMFHDGMCE_o *)0x0) {
    ppSVar2 = &(__this->fields).GPFJGCCIHLB;
    *ppSVar2 = (pEVar1->fields).JMPJKOKFJMN;
    thunk_FUN_01c20e04(ppSVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool SelectTopSubItem()  [RVA 0x32D0F6C]
// Nekki.SF2.GUI.Profile.PerksController$$SelectTopSubItem @ RVA 0x32D0F6C

bool Nekki_SF2_GUI_Profile_PerksController__SelectTopSubItem
               (Nekki_SF2_GUI_Profile_PerksController_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t EHFBCDNCMDM;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  Nekki_SF2_GUI_Profile_PerkSubItem_o *GNFENDJPCFD;
  Nekki_SF2_GUI_Profile_PerkCell_o *__this_00;
  Nekki_SF2_GUI_Profile_PerkSubItem_o *x;
  MethodInfo *method_00;
  
  if ((DAT_04567551 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_ItemsController_DLHMNFBGOGN<PerkCell>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_PerkCell_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo);
    DAT_04567551 = 1;
  }
  LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  bVar2 = TutorialExtension__MNKFDLHJPAA(LAIGNDBNBJG,(MethodInfo *)0x0);
  if (bVar2) {
    return false;
  }
  GNFENDJPCFD = (Nekki_SF2_GUI_Profile_PerkSubItem_o *)
                (*(__this->klass->vtable)._25_get_CurrentSubItem.methodPtr)
                          (__this,(__this->klass->vtable)._25_get_CurrentSubItem.method);
  if (GNFENDJPCFD == (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
LAB_033d101c:
    GNFENDJPCFD = (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0;
  }
  else {
    bVar1 = (Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo->_2).naturalAligment;
    if ((GNFENDJPCFD->klass->_2).naturalAligment < bVar1) goto LAB_033d101c;
    if ((GNFENDJPCFD->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo) {
      GNFENDJPCFD = (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0;
    }
  }
  __this_00 = (Nekki_SF2_GUI_Profile_PerkCell_o *)
              Nekki_SF2_GUI_Profile_ItemsController__DLHMNFBGOGN<object>
                        ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this,
                         Method_Nekki_SF2_GUI_Profile_ItemsController_DLHMNFBGOGN<PerkCell>__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)GNFENDJPCFD,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar2) {
    if (__this_00 == (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) goto LAB_033d117c;
    GNFENDJPCFD = (__this_00->fields)._RightSubItem;
  }
  while( true ) {
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (!bVar2) {
      return false;
    }
    EHFBCDNCMDM = Nekki_SF2_GUI_Profile_PerksController__get_LastPosition(__this,method_00);
    if (__this_00 == (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) goto LAB_033d117c;
    x = Nekki_SF2_GUI_Profile_PerkCell__GetSubItemByCurrentSubItemAndLastPosition
                  (__this_00,GNFENDJPCFD,EHFBCDNCMDM,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) break;
    __this_00 = (Nekki_SF2_GUI_Profile_PerkCell_o *)
                Nekki_SF2_GUI_Profile_ItemsController__GetPrevCell
                          ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this,
                           (Nekki_SF2_GUI_Profile_ProfileCell_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) {
      bVar1 = (Nekki_SF2_GUI_Profile_PerkCell_TypeInfo->_2).naturalAligment;
      if (((__this_00->klass->_2).naturalAligment < bVar1) ||
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Profile_PerkCell_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(__this_00);
      }
    }
  }
  if (x != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
    (*(x->klass->vtable)._59_Choose.methodPtr)(x,(x->klass->vtable)._59_Choose.method);
    return true;
  }
LAB_033d117c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x32D1180]
// Nekki.SF2.GUI.Profile.PerksController$$.ctor @ RVA 0x32D1180

void Nekki_SF2_GUI_Profile_PerksController___ctor
               (Nekki_SF2_GUI_Profile_PerksController_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_PerksController_MIJHABAAONP_o *__this_00;
  Nekki_SF2_GUI_Profile_PerksController_MIJHABAAONP_o **ppNVar1;
  System_Collections_Generic_List_EANNACPOJFA__o *__this_01;
  System_Collections_Generic_List_EANNACPOJFA__o **ppSVar2;
  MethodInfo *extraout_x1;
  undefined1 auVar3 [16];
  
  if ((DAT_04567552 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<EANNACPOJFA>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_PerksController_MIJHABAAONP_TypeInfo);
    DAT_04567552 = 1;
    method = extraout_x1;
  }
  auVar3 = thunk_FUN_01bda818(Nekki_SF2_GUI_Profile_PerksController_MIJHABAAONP_TypeInfo,method);
  __this_00 = auVar3._0_8_;
  Nekki_SF2_GUI_Profile_PerksController_MIJHABAAONP___ctor(__this_00,auVar3._8_8_);
  ppNVar1 = &(__this->fields)._OnCellSelected;
  *ppNVar1 = __this_00;
  thunk_FUN_01c20e04(ppNVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_EANNACPOJFA__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<EANNACPOJFA>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<EANNACPOJFA>__ctor__);
  ppSVar2 = &(__this->fields).GPFJGCCIHLB;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  Nekki_SF2_GUI_Profile_ItemsController___ctor
            ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public PerksController.MIJHABAAONP get_OnCellSelected()  [RVA 0x32D1284]
// Nekki.SF2.GUI.Profile.PerksController$$get_OnCellSelected @ RVA 0x32D1284

Nekki_SF2_GUI_Profile_PerksController_MIJHABAAONP_o *
Nekki_SF2_GUI_Profile_PerksController__get_OnCellSelected
          (Nekki_SF2_GUI_Profile_PerksController_o *__this,MethodInfo *method)

{
  return (__this->fields)._OnCellSelected;
}


// ===== public bool ScrollToItem(JLGNBOILFLN CDEABOAKDEJ, float GGMALJLKHHB = 0)  [RVA 0x32D128C]
// Nekki.SF2.GUI.Profile.PerksController$$ScrollToItem @ RVA 0x32D128C

bool Nekki_SF2_GUI_Profile_PerksController__ScrollToItem
               (Nekki_SF2_GUI_Profile_PerksController_o *__this,JLGNBOILFLN_o *CDEABOAKDEJ,
               float GGMALJLKHHB,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t JDEFJPHCNMM;
  int32_t iVar3;
  Nekki_SF2_GUI_TableView_o *pNVar4;
  KELJDKIIHMM_o *__this_00;
  Nekki_SF2_GUI_Profile_PerkCell_o *__this_01;
  System_String_o *LMPMHKIABOM;
  
  if ((DAT_04567553 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_PerkCell_TypeInfo);
    DAT_04567553 = 1;
  }
  JDEFJPHCNMM = Nekki_SF2_GUI_Profile_PerksController__AJKEPBOILNA(__this,CDEABOAKDEJ,method);
  if (JDEFJPHCNMM < 0) {
    return false;
  }
  pNVar4 = (__this->fields).super._TableView;
  if (pNVar4 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    iVar3 = Nekki_SF2_GUI_TableView__NumberOfRows(pNVar4,(MethodInfo *)0x0);
    if (iVar3 <= JDEFJPHCNMM) {
      return false;
    }
    pNVar4 = (__this->fields).super._TableView;
    if (pNVar4 != (Nekki_SF2_GUI_TableView_o *)0x0) {
      Nekki_SF2_GUI_TableView__ScrollToCell(pNVar4,JDEFJPHCNMM,GGMALJLKHHB,(MethodInfo *)0x0);
      pNVar4 = (__this->fields).super._TableView;
      if ((pNVar4 != (Nekki_SF2_GUI_TableView_o *)0x0) &&
         (__this_00 = (pNVar4->fields)._LBHOKEBOIFN_k__BackingField,
         __this_00 != (KELJDKIIHMM_o *)0x0)) {
        __this_01 = (Nekki_SF2_GUI_Profile_PerkCell_o *)
                    KELJDKIIHMM__KHGEMIEPBJB(__this_00,JDEFJPHCNMM,(MethodInfo *)0x0);
        if (__this_01 != (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) {
          bVar1 = (Nekki_SF2_GUI_Profile_PerkCell_TypeInfo->_2).naturalAligment;
          if (((__this_01->klass->_2).naturalAligment < bVar1) ||
             ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)Nekki_SF2_GUI_Profile_PerkCell_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(__this_01);
          }
        }
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar2) {
          if ((CDEABOAKDEJ == (JLGNBOILFLN_o *)0x0) ||
             (LMPMHKIABOM = JLGNBOILFLN__GKMAFGODLLG(CDEABOAKDEJ,(MethodInfo *)0x0),
             __this_01 == (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0)) goto LAB_033d13d8;
          Nekki_SF2_GUI_Profile_PerkCell__ChoosePerkByName(__this_01,LMPMHKIABOM,(MethodInfo *)0x0);
        }
        return true;
      }
    }
  }
LAB_033d13d8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ScrollToLastOpenItem(float GGMALJLKHHB = 0)  [RVA 0x32D13E4]
// Nekki.SF2.GUI.Profile.PerksController$$ScrollToLastOpenItem @ RVA 0x32D13E4

void Nekki_SF2_GUI_Profile_PerksController__ScrollToLastOpenItem
               (Nekki_SF2_GUI_Profile_PerksController_o *__this,float GGMALJLKHHB,MethodInfo *method
               )

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  int32_t iVar4;
  EPFMFHDGMCE_o *pEVar5;
  Roster_o *__this_00;
  Nekki_SF2_GUI_TableView_o *pNVar6;
  PBAKFOBIHEG_o *pPVar7;
  System_Collections_IEnumerator_o *pSVar8;
  VirtualInvokeData *pVVar9;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar10;
  ulong uVar11;
  int32_t *piVar12;
  System_Collections_Generic_List_JLGNBOILFLN__o *__this_01;
  JLGNBOILFLN_o *CDEABOAKDEJ;
  int JDEFJPHCNMM;
  int iVar13;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04567554 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04567554 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  pEVar5 = EPFMFHDGMCE__ICEPMHDMFLM((MethodInfo *)0x0);
                    /* try { // try from 033d1474 to 034d15a3 has its CatchHandler @ 033d1474
                       catch() { ... } // from try @ 033d1474 with catch @ 033d1474
                       catch() { ... } // from try @ 033d1768 with catch @ 033d1474
                       catch() { ... } // from try @ 033d182c with catch @ 033d1474
                       catch() { ... } // from try @ 033d1834 with catch @ 033d1474
                       catch() { ... } // from try @ 033d193c with catch @ 033d1474 */
  if (pEVar5 == (EPFMFHDGMCE_o *)0x0) goto LAB_033d1674;
  __this_01 = (pEVar5->fields).GCHAMOPMNHF;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((__this_00 == (Roster_o *)0x0) ||
     (iVar4 = Roster__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0),
     __this_01 == (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0)) goto LAB_033d1674;
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_88,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<JLGNBOILFLN>_GetEnumerator__);
  local_70.fields._index = local_88.fields._index;
  local_70.fields._version = local_88.fields._version;
  local_70.fields._list = local_88.fields._list;
  local_70.fields._current = local_88.fields._current;
  JDEFJPHCNMM = -1;
  CDEABOAKDEJ = (JLGNBOILFLN_o *)0x0;
  iVar13 = -1;
  while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                           (&local_70,
                            Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_MoveNext__
                           ), bVar3) {
    if ((JLGNBOILFLN_o *)local_70.fields._current == (JLGNBOILFLN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((((JLGNBOILFLN_Fields *)((long)local_70.fields._current + 0x10))->OIKLOAGFFGO == 3) ||
       (iVar1 = ((JLGNBOILFLN_Fields *)((long)local_70.fields._current + 0x10))->GHPHFGBIPCI,
       iVar4 < iVar1)) break;
    if (iVar13 < iVar1) {
      JDEFJPHCNMM = JDEFJPHCNMM + 1;
      CDEABOAKDEJ = (JLGNBOILFLN_o *)local_70.fields._current;
      iVar13 = iVar1;
    }
  }
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_70,Method_System_Collections_Generic_List_Enumerator<JLGNBOILFLN>_Dispose__);
  if (JDEFJPHCNMM < 0) {
LAB_033d15b4:
    pNVar6 = (__this->fields).super._TableView;
    if (pNVar6 == (Nekki_SF2_GUI_TableView_o *)0x0) goto LAB_033d1674;
    JDEFJPHCNMM = 0;
  }
  else {
    pNVar6 = (__this->fields).super._TableView;
    if (pNVar6 == (Nekki_SF2_GUI_TableView_o *)0x0) goto LAB_033d1674;
    iVar4 = Nekki_SF2_GUI_TableView__NumberOfRows(pNVar6,(MethodInfo *)0x0);
    if (iVar4 <= JDEFJPHCNMM) goto LAB_033d15b4;
                    /* try { // try from 033d15a4 to 034d15cb has its CatchHandler @ 033d18a0 */
    pNVar6 = (__this->fields).super._TableView;
    if (pNVar6 == (Nekki_SF2_GUI_TableView_o *)0x0) goto LAB_033d1674;
  }
  method_00 = (MethodInfo *)0x0;
  Nekki_SF2_GUI_TableView__ScrollToCell(pNVar6,JDEFJPHCNMM,GGMALJLKHHB,(MethodInfo *)0x0);
  if (CDEABOAKDEJ != (JLGNBOILFLN_o *)0x0) {
    pPVar7 = CoroutineManager__get_Current((MethodInfo *)0x0);
    pSVar8 = Nekki_SF2_GUI_Profile_PerksController__CJICBFEJDON(__this,CDEABOAKDEJ,method_00);
    if (pPVar7 == (PBAKFOBIHEG_o *)0x0) {
LAB_033d1674:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pPVar10 = pPVar7->klass;
    uVar2._0_1_ = (pPVar10->_2).rank;
    uVar2._1_1_ = (pPVar10->_2).minimumAlignment;
    uVar11 = (ulong)uVar2;
    if (uVar11 != 0) {
                    /* try { // try from 033d1600 to 034d162b has its CatchHandler @ 033d189c */
      piVar12 = &((pPVar10->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
          pVVar9 = pPVar10->vtable + *piVar12;
          goto LAB_033d163c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    pVVar9 = (VirtualInvokeData *)FUN_01b81914(pPVar7,PBAKFOBIHEG_TypeInfo,0);
LAB_033d163c:
    (*pVVar9->methodPtr)(pPVar7,pSVar8,1,pVVar9->method);
  }
                    /* try { // try from 033d166c to 034d1673 has its CatchHandler @ 033d1884 */
  return;
}


// ===== private IEnumerator CJICBFEJDON(JLGNBOILFLN CDEABOAKDEJ)  [RVA 0x32D16E0]
// Nekki.SF2.GUI.Profile.PerksController$$CJICBFEJDON @ RVA 0x32D16E0

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Profile_PerksController__CJICBFEJDON
          (Nekki_SF2_GUI_Profile_PerksController_o *__this,JLGNBOILFLN_o *CDEABOAKDEJ,
          MethodInfo *method)

{
  Il2CppObject *__this_00;
  
                    /* try { // try from 033d16e0 to 034d16e7 has its CatchHandler @ 033d1860 */
                    /* try { // try from 033d16fc to 034d1703 has its CatchHandler @ 033d1844 */
  if ((DAT_04567555 & 1) == 0) {
                    /* try { // try from 033d170c to 034d1713 has its CatchHandler @ 033d1854 */
    FUN_01bab630(&Nekki_SF2_GUI_Profile_PerksController_NGLKEAEAKEO_TypeInfo);
                    /* try { // try from 033d1714 to 034d171f has its CatchHandler @ 033d1864 */
    DAT_04567555 = 1;
  }
                    /* try { // try from 033d1720 to 034d1727 has its CatchHandler @ 033d1880 */
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Profile_PerksController_NGLKEAEAKEO_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
                    /* try { // try from 033d1738 to 034d173f has its CatchHandler @ 033d1868 */
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
                    /* try { // try from 033d1748 to 034d174f has its CatchHandler @ 033d187c */
  __this_00[2].monitor = CDEABOAKDEJ;
                    /* try { // try from 033d1750 to 034d175b has its CatchHandler @ 033d1858 */
  thunk_FUN_01c20e04(&__this_00[2].monitor,CDEABOAKDEJ);
                    /* try { // try from 033d175c to 034d1767 has its CatchHandler @ 033d1874 */
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== public override bool get_IsRightSubItemSelected()  [RVA 0x32D1790]
// Nekki.SF2.GUI.Profile.PerksController$$get_IsRightSubItemSelected @ RVA 0x32D1790

bool Nekki_SF2_GUI_Profile_PerksController__get_IsRightSubItemSelected
               (Nekki_SF2_GUI_Profile_PerksController_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_04567556 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_ItemsController_DLHMNFBGOGN<PerkCell>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567556 = 1;
    method = extraout_x1;
  }
  iVar2 = Nekki_SF2_GUI_Profile_PerksController__get_LastPosition(__this,method);
  if ((iVar2 == 3) ||
     (iVar2 = Nekki_SF2_GUI_Profile_PerksController__get_LastPosition(__this,method_00), iVar2 == 1)
     ) {
    bVar1 = true;
  }
  else {
                    /* try { // try from 033d180c to 034d1813 has its CatchHandler @ 033d18a4 */
    x = (UnityEngine_Object_o *)
        Nekki_SF2_GUI_Profile_ItemsController__DLHMNFBGOGN<object>
                  ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this,
                   Method_Nekki_SF2_GUI_Profile_ItemsController_DLHMNFBGOGN<PerkCell>__);
                    /* try { // try from 033d1814 to 034d1817 has its CatchHandler @ 033d1890 */
                    /* try { // try from 033d1818 to 034d181b has its CatchHandler @ 033d188c */
                    /* try { // try from 033d181c to 034d181f has its CatchHandler @ 033d1878 */
                    /* try { // try from 033d1820 to 034d1823 has its CatchHandler @ 033d186c */
                    /* try { // try from 033d1824 to 034d1827 has its CatchHandler @ 033d1850 */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033d1828 to 034d182b has its CatchHandler @ 033d184c */
                    /* try { // try from 033d182c to 034d182f has its CatchHandler @ 033d1474 */
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
                    /* try { // try from 033d1830 to 034d1833 has its CatchHandler @ 033d183c */
                    /* try { // try from 033d1834 to 034d18bb has its CatchHandler @ 033d1474 */
                    /* catch() { ... } // from try @ 033d1830 with catch @ 033d183c */
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033d16bc with catch @ 033d1840 */
    if (bVar1) {
                    /* catch() { ... } // from try @ 033d16fc with catch @ 033d1844 */
                    /* catch() { ... } // from try @ 033d16cc with catch @ 033d1848 */
                    /* catch() { ... } // from try @ 033d1828 with catch @ 033d184c */
                    /* catch() { ... } // from try @ 033d1824 with catch @ 033d1850 */
                    /* catch() { ... } // from try @ 033d170c with catch @ 033d1854 */
                    /* catch() { ... } // from try @ 033d1750 with catch @ 033d1858 */
      if (((x == (UnityEngine_Object_o *)0x0) || (x[3].monitor == (UnityEngine_Component_o *)0x0))
         || (__this_00 = UnityEngine_Component__get_gameObject(x[3].monitor,(MethodInfo *)0x0),
            __this_00 == (UnityEngine_GameObject_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033d175c with catch @ 033d1874 */
        FUN_01bab8c8();
      }
                    /* catch() { ... } // from try @ 033d16d4 with catch @ 033d185c */
                    /* catch() { ... } // from try @ 033d16e0 with catch @ 033d1860 */
      bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033d1714 with catch @ 033d1864 */
      bVar1 = !bVar1;
                    /* catch() { ... } // from try @ 033d1738 with catch @ 033d1868 */
    }
    else {
                    /* catch() { ... } // from try @ 033d1820 with catch @ 033d186c */
      bVar1 = false;
                    /* catch() { ... } // from try @ 033d16a0 with catch @ 033d1870 */
    }
  }
  return bVar1;
}


// ===== public override bool ScrollToItem(string AFKICLAFDKC, float GGMALJLKHHB = 0)  [RVA 0x32D1878]
// Nekki.SF2.GUI.Profile.PerksController$$ScrollToItem @ RVA 0x32D1878

bool Nekki_SF2_GUI_Profile_PerksController__ScrollToItem
               (Nekki_SF2_GUI_Profile_PerksController_o *__this,System_String_o *AFKICLAFDKC,
               float GGMALJLKHHB,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t JDEFJPHCNMM;
  int32_t iVar3;
  Nekki_SF2_GUI_TableView_o *pNVar4;
  KELJDKIIHMM_o *__this_00;
  Nekki_SF2_GUI_Profile_PerkCell_o *__this_01;
  
                    /* catch() { ... } // from try @ 033d181c with catch @ 033d1878 */
                    /* catch() { ... } // from try @ 033d1748 with catch @ 033d187c */
                    /* catch() { ... } // from try @ 033d1720 with catch @ 033d1880 */
                    /* catch() { ... } // from try @ 033d166c with catch @ 033d1884 */
                    /* catch() { ... } // from try @ 033d167c with catch @ 033d1888 */
                    /* catch() { ... } // from try @ 033d1818 with catch @ 033d188c */
                    /* catch() { ... } // from try @ 033d1814 with catch @ 033d1890 */
                    /* catch() { ... } // from try @ 033d1694 with catch @ 033d1894 */
                    /* catch() { ... } // from try @ 033d1684 with catch @ 033d1898 */
  if ((DAT_04567557 & 1) == 0) {
                    /* catch() { ... } // from try @ 033d1600 with catch @ 033d189c */
                    /* catch() { ... } // from try @ 033d15a4 with catch @ 033d18a0 */
                    /* catch() { ... } // from try @ 033d180c with catch @ 033d18a4 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_PerkCell_TypeInfo);
    DAT_04567557 = 1;
  }
                    /* try { // try from 033d18bc to 034d18bf has its CatchHandler @ 033d18cc */
  JDEFJPHCNMM = Nekki_SF2_GUI_Profile_PerksController__HNJLAMEEFAD(__this,AFKICLAFDKC,method);
  if (JDEFJPHCNMM < 0) {
    return false;
  }
                    /* catch() { ... } // from try @ 033d18bc with catch @ 033d18cc */
  pNVar4 = (__this->fields).super._TableView;
                    /* try { // try from 033d18d4 to 034d193b has its CatchHandler @ 033d1950 */
  if (pNVar4 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    iVar3 = Nekki_SF2_GUI_TableView__NumberOfRows(pNVar4,(MethodInfo *)0x0);
    if (iVar3 <= JDEFJPHCNMM) {
      return false;
    }
    pNVar4 = (__this->fields).super._TableView;
    if (pNVar4 != (Nekki_SF2_GUI_TableView_o *)0x0) {
      Nekki_SF2_GUI_TableView__ScrollToCell(pNVar4,JDEFJPHCNMM,GGMALJLKHHB,(MethodInfo *)0x0);
      pNVar4 = (__this->fields).super._TableView;
      if ((pNVar4 != (Nekki_SF2_GUI_TableView_o *)0x0) &&
         (__this_00 = (pNVar4->fields)._LBHOKEBOIFN_k__BackingField,
         __this_00 != (KELJDKIIHMM_o *)0x0)) {
        __this_01 = (Nekki_SF2_GUI_Profile_PerkCell_o *)
                    KELJDKIIHMM__KHGEMIEPBJB(__this_00,JDEFJPHCNMM,(MethodInfo *)0x0);
        if (__this_01 != (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) {
          bVar1 = (Nekki_SF2_GUI_Profile_PerkCell_TypeInfo->_2).naturalAligment;
                    /* try { // try from 033d193c to 034d1947 has its CatchHandler @ 033d1474 */
                    /* try { // try from 033d1948 to 034d194f has its CatchHandler @ 033d1950 */
                    /* catch() { ... } // from try @ 033d18d4 with catch @ 033d1950
                       catch() { ... } // from try @ 033d1948 with catch @ 033d1950 */
                    /* try { // try from 033d1954 to 034d1a83 has its CatchHandler @ 033d1954
                       catch() { ... } // from try @ 033d1954 with catch @ 033d1954
                       catch() { ... } // from try @ 033d1b90 with catch @ 033d1954
                       catch() { ... } // from try @ 033d1bd0 with catch @ 033d1954
                       catch() { ... } // from try @ 033d1c18 with catch @ 033d1954
                       catch() { ... } // from try @ 033d1c58 with catch @ 033d1954 */
          if (((__this_01->klass->_2).naturalAligment < bVar1) ||
             ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)Nekki_SF2_GUI_Profile_PerkCell_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(__this_01);
          }
        }
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar2) {
          if (__this_01 == (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) goto LAB_033d19b4;
          Nekki_SF2_GUI_Profile_PerkCell__ChoosePerkByName(__this_01,AFKICLAFDKC,(MethodInfo *)0x0);
        }
        return true;
      }
    }
  }
LAB_033d19b4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public CMEMKGEPJMH get_LastPosition()  [RVA 0x32D0E50]
// Nekki.SF2.GUI.Profile.PerksController$$get_LastPosition @ RVA 0x32D0E50

int32_t Nekki_SF2_GUI_Profile_PerksController__get_LastPosition
                  (Nekki_SF2_GUI_Profile_PerksController_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  UnityEngine_Object_o *x;
  
  if ((DAT_04567558 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo);
    DAT_04567558 = 1;
  }
  iVar3 = (__this->fields).IGLNJPCAJOD;
  if (iVar3 != 0) {
    return iVar3;
  }
  x = (UnityEngine_Object_o *)
      (*(__this->klass->vtable)._25_get_CurrentSubItem.methodPtr)
                (__this,(__this->klass->vtable)._25_get_CurrentSubItem.method);
  if (x != (UnityEngine_Object_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo->_2).naturalAligment;
    if (bVar1 <= (x->klass->_2).naturalAligment) {
      if ((x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo) {
        x = (UnityEngine_Object_o *)0x0;
      }
      goto LAB_033d0ee4;
    }
  }
  x = (UnityEngine_Object_o *)0x0;
LAB_033d0ee4:
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    iVar3 = 2;
  }
  else {
    if (x == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar3 = 2;
    if (*(int *)&x[0x15].monitor != 1) {
      iVar3 = *(int *)&x[0x15].monitor;
    }
  }
  (__this->fields).IGLNJPCAJOD = iVar3;
  return iVar3;
}


// ===== public override bool SelectBottomSubItem()  [RVA 0x32D19C0]
// Nekki.SF2.GUI.Profile.PerksController$$SelectBottomSubItem @ RVA 0x32D19C0

bool Nekki_SF2_GUI_Profile_PerksController__SelectBottomSubItem
               (Nekki_SF2_GUI_Profile_PerksController_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t EHFBCDNCMDM;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  Nekki_SF2_GUI_Profile_PerkSubItem_o *GNFENDJPCFD;
  Nekki_SF2_GUI_Profile_PerkCell_o *__this_00;
  Nekki_SF2_GUI_Profile_PerkSubItem_o *x;
  MethodInfo *method_00;
  
  if ((DAT_04567559 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_ItemsController_DLHMNFBGOGN<PerkCell>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_PerkCell_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo);
    DAT_04567559 = 1;
  }
  LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  bVar2 = TutorialExtension__MNKFDLHJPAA(LAIGNDBNBJG,(MethodInfo *)0x0);
  if (bVar2) {
    return false;
  }
  GNFENDJPCFD = (Nekki_SF2_GUI_Profile_PerkSubItem_o *)
                (*(__this->klass->vtable)._25_get_CurrentSubItem.methodPtr)
                          (__this,(__this->klass->vtable)._25_get_CurrentSubItem.method);
  if (GNFENDJPCFD == (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
LAB_033d1a70:
    GNFENDJPCFD = (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0;
  }
  else {
    bVar1 = (Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo->_2).naturalAligment;
    if ((GNFENDJPCFD->klass->_2).naturalAligment < bVar1) goto LAB_033d1a70;
                    /* try { // try from 033d1a84 to 034d1a8b has its CatchHandler @ 033d1bfc */
    if ((GNFENDJPCFD->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo) {
      GNFENDJPCFD = (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0;
    }
  }
  __this_00 = (Nekki_SF2_GUI_Profile_PerkCell_o *)
              Nekki_SF2_GUI_Profile_ItemsController__DLHMNFBGOGN<object>
                        ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this,
                         Method_Nekki_SF2_GUI_Profile_ItemsController_DLHMNFBGOGN<PerkCell>__);
                    /* try { // try from 033d1aa8 to 034d1aaf has its CatchHandler @ 033d1bf8 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
                    /* try { // try from 033d1ac0 to 034d1ac7 has its CatchHandler @ 033d1bf0 */
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)GNFENDJPCFD,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar2) {
                    /* try { // try from 033d1ad4 to 034d1adf has its CatchHandler @ 033d1be0 */
    if (__this_00 == (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) goto LAB_033d1bd0;
    GNFENDJPCFD = (__this_00->fields)._LeftSubItem;
  }
  while( true ) {
                    /* try { // try from 033d1ae8 to 034d1af3 has its CatchHandler @ 033d1bdc */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (!bVar2) {
      return false;
    }
                    /* try { // try from 033d1b0c to 034d1b17 has its CatchHandler @ 033d1bd8 */
    EHFBCDNCMDM = Nekki_SF2_GUI_Profile_PerksController__get_LastPosition(__this,method_00);
    if (__this_00 == (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) goto LAB_033d1bd0;
                    /* try { // try from 033d1b18 to 034d1b3f has its CatchHandler @ 033d1bec */
    x = Nekki_SF2_GUI_Profile_PerkCell__GetSubItemByCurrentSubItemAndLastPosition
                  (__this_00,GNFENDJPCFD,EHFBCDNCMDM,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
                    /* try { // try from 033d1b40 to 034d1b67 has its CatchHandler @ 033d1be8 */
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) break;
    __this_00 = (Nekki_SF2_GUI_Profile_PerkCell_o *)
                Nekki_SF2_GUI_Profile_ItemsController__GetNextCell
                          ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this,
                           (Nekki_SF2_GUI_Profile_ProfileCell_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) {
                    /* try { // try from 033d1b6c to 034d1b8f has its CatchHandler @ 033d1be4 */
      bVar1 = (Nekki_SF2_GUI_Profile_PerkCell_TypeInfo->_2).naturalAligment;
                    /* try { // try from 033d1b90 to 034d1bc7 has its CatchHandler @ 033d1954 */
      if (((__this_00->klass->_2).naturalAligment < bVar1) ||
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Profile_PerkCell_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(__this_00);
      }
    }
  }
  if (x != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
    (*(x->klass->vtable)._59_Choose.methodPtr)(x,(x->klass->vtable)._59_Choose.method);
                    /* try { // try from 033d1bc8 to 034d1bcb has its CatchHandler @ 033d1bf4 */
                    /* try { // try from 033d1bcc to 034d1bcf has its CatchHandler @ 033d1bd4 */
    return true;
  }
LAB_033d1bd0:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033d1bd0 to 034d1c13 has its CatchHandler @ 033d1954 */
  FUN_01bab8c8();
}


// ===== public void set_LastPosition(CMEMKGEPJMH CJNHFNHJHPE)  [RVA 0x32D0554]
// Nekki.SF2.GUI.Profile.PerksController$$set_LastPosition @ RVA 0x32D0554

void Nekki_SF2_GUI_Profile_PerksController__set_LastPosition
               (Nekki_SF2_GUI_Profile_PerksController_o *__this,int32_t CJNHFNHJHPE,
               MethodInfo *method)

{
  if (CJNHFNHJHPE != 1) {
    (__this->fields).IGLNJPCAJOD = CJNHFNHJHPE;
  }
  return;
}


// ===== protected override string OHAHNMOBOOP()  [RVA 0x32D1BD4]
// Nekki.SF2.GUI.Profile.PerksController$$OHAHNMOBOOP @ RVA 0x32D1BD4

System_String_o *
Nekki_SF2_GUI_Profile_PerksController__OHAHNMOBOOP
          (Nekki_SF2_GUI_Profile_PerksController_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 033d1bcc with catch @ 033d1bd4 */
                    /* catch() { ... } // from try @ 033d1b0c with catch @ 033d1bd8 */
                    /* catch() { ... } // from try @ 033d1ae8 with catch @ 033d1bdc */
                    /* catch() { ... } // from try @ 033d1ad4 with catch @ 033d1be0 */
                    /* catch() { ... } // from try @ 033d1b6c with catch @ 033d1be4 */
                    /* catch() { ... } // from try @ 033d1b40 with catch @ 033d1be8 */
                    /* catch() { ... } // from try @ 033d1b18 with catch @ 033d1bec */
  if ((DAT_0456755a & 1) == 0) {
                    /* catch() { ... } // from try @ 033d1ac0 with catch @ 033d1bf0 */
                    /* catch() { ... } // from try @ 033d1bc8 with catch @ 033d1bf4 */
                    /* catch() { ... } // from try @ 033d1aa8 with catch @ 033d1bf8 */
    FUN_01bab630(&StringLiteral_10046/*"POWERLEVELING_SLIDER"*/);
                    /* catch() { ... } // from try @ 033d1a84 with catch @ 033d1bfc */
    DAT_0456755a = 1;
  }
  return StringLiteral_10046/*"POWERLEVELING_SLIDER"*/;
}


// ===== public override float SizeForRowInTableView(TableView GECPJPBIBPN, int HAJDGFPLGNK)  [RVA 0x32D1C14]
// Nekki.SF2.GUI.Profile.PerksController$$SizeForRowInTableView @ RVA 0x32D1C14

float Nekki_SF2_GUI_Profile_PerksController__SizeForRowInTableView
                (Nekki_SF2_GUI_Profile_PerksController_o *__this,
                Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,int32_t HAJDGFPLGNK,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  float fVar1;
  UnityEngine_Rect_o UVar2;
  
                    /* try { // try from 033d1c14 to 034d1c17 has its CatchHandler @ 033d1c40 */
                    /* try { // try from 033d1c18 to 034d1c4f has its CatchHandler @ 033d1954 */
  if ((DAT_0456755b & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo,GECPJPBIBPN,HAJDGFPLGNK);
    DAT_0456755b = 1;
  }
                    /* catch() { ... } // from try @ 033d1c14 with catch @ 033d1c40 */
  fVar1 = (__this->fields).PFDLJJBHELJ;
  if (fVar1 <= 0.0) {
    __this_00 = (__this->fields).super._CellPrefab;
                    /* try { // try from 033d1c50 to 034d1c57 has its CatchHandler @ 033d1c6c */
                    /* try { // try from 033d1c58 to 034d1c63 has its CatchHandler @ 033d1954 */
                    /* try { // try from 033d1c64 to 034d1c6b has its CatchHandler @ 033d1c6c */
                    /* catch() { ... } // from try @ 033d1c50 with catch @ 033d1c6c
                       catch() { ... } // from try @ 033d1c64 with catch @ 033d1c6c */
    if (((__this_00 == (UnityEngine_GameObject_o *)0x0) ||
        (__this_01 = (UnityEngine_RectTransform_o *)
                     UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
        __this_01 == (UnityEngine_RectTransform_o *)0x0)) ||
       (__this_01->klass != UnityEngine_RectTransform_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UVar2 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
    fVar1 = UVar2.fields.m_Height;
    (__this->fields).PFDLJJBHELJ = fVar1;
  }
  return fVar1;
}

