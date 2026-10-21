// TypeDefIndex 3003
// Namespace: Nekki.SF2.GUI.Profile
// public class UserPerksPanel : MonoBehaviour, JEIEEMKCNOJ, CPFMNHBNOEN, MLIIECFHJAM
// Fields:
//   private LabelAlias _NoPerksLabel; // 0x20
//   private TableView _TableView; // 0x28
//   private GameObject _CellPrefab; // 0x30
//   private List<EANNACPOJFA> MHOLLBLFLAH; // 0x38
//   private EANNACPOJFA FKDJMGJDOAG; // 0x40
//   private CMEMKGEPJMH IGLNJPCAJOD; // 0x48
//   private bool KCBIPKCIGMO; // 0x4C
//   private SubItem PFKHDCBBDOG; // 0x50

// ===== public virtual TableViewCell CellForRowInTableView(TableView GECPJPBIBPN, int HAJDGFPLGNK)  [RVA 0x34A7864]
// Nekki.SF2.GUI.Profile.UserPerksPanel$$CellForRowInTableView @ RVA 0x34A7864

Nekki_SF2_GUI_TableViewCell_o *
Nekki_SF2_GUI_Profile_UserPerksPanel__CellForRowInTableView
          (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,
          int32_t HAJDGFPLGNK,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_o *__this_00;
  Nekki_SF2_GUI_Profile_PerkCell_o *__this_01;
  EANNACPOJFA_o *PLKOKDEAMBE;
  System_Collections_Generic_List_EANNACPOJFA__o *__this_02;
  
                    /* try { // try from 035a7874 to 036a78e7 has its CatchHandler @ 035a8030 */
  if ((DAT_045684fe & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_get_Item__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TableView_ReusableCellForRow<PerkCell>__);
    DAT_045684fe = 1;
  }
  __this_00 = (__this->fields)._TableView;
  if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    __this_01 = (Nekki_SF2_GUI_Profile_PerkCell_o *)
                Nekki_SF2_GUI_TableView__ReusableCellForRow<object>
                          (__this_00,HAJDGFPLGNK,
                           Method_Nekki_SF2_GUI_TableView_ReusableCellForRow<PerkCell>__);
    __this_02 = (__this->fields).MHOLLBLFLAH;
    if ((__this_02 != (System_Collections_Generic_List_EANNACPOJFA__o *)0x0) &&
       (PLKOKDEAMBE = (EANNACPOJFA_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_02,HAJDGFPLGNK,
                                 Method_System_Collections_Generic_List<EANNACPOJFA>_get_Item__),
       __this_01 != (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0)) {
                    /* try { // try from 035a78e8 to 036a7a03 has its CatchHandler @ 035a7464 */
      Nekki_SF2_GUI_Profile_PerkCell__Init
                (__this_01,PLKOKDEAMBE,(JEIEEMKCNOJ_o *)__this,15.0,(MethodInfo *)0x0);
      return (Nekki_SF2_GUI_TableViewCell_o *)__this_01;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private PerkCell KFDAGNGDHNL(PerkCell AHICPBEJIKJ)  [RVA 0x34A7910]
// Nekki.SF2.GUI.Profile.UserPerksPanel$$KFDAGNGDHNL @ RVA 0x34A7910

Nekki_SF2_GUI_Profile_PerkCell_o *
Nekki_SF2_GUI_Profile_UserPerksPanel__KFDAGNGDHNL
          (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,
          Nekki_SF2_GUI_Profile_PerkCell_o *AHICPBEJIKJ,MethodInfo *method)

{
  int DPJIDNBJIBG;
  byte bVar1;
  bool bVar2;
  int32_t iVar3;
  Nekki_SF2_GUI_Profile_PerkCell_o *pNVar4;
  Nekki_SF2_GUI_TableView_o *pNVar5;
  KELJDKIIHMM_o *__this_00;
  
  if ((DAT_045684ff & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_PerkCell_TypeInfo);
    DAT_045684ff = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)AHICPBEJIKJ,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  pNVar4 = (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0;
  if (!bVar2) {
    if ((AHICPBEJIKJ == (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) ||
       (pNVar5 = (__this->fields)._TableView, pNVar5 == (Nekki_SF2_GUI_TableView_o *)0x0)) {
LAB_035a7a10:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    DPJIDNBJIBG = (AHICPBEJIKJ->fields).super.super.FIMCNHGPCNA + 1;
    iVar3 = Nekki_SF2_GUI_TableView__NumberOfRows(pNVar5,(MethodInfo *)0x0);
    pNVar4 = (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0;
    if (DPJIDNBJIBG < iVar3) {
      pNVar5 = (__this->fields)._TableView;
      if ((pNVar5 == (Nekki_SF2_GUI_TableView_o *)0x0) ||
         (__this_00 = (pNVar5->fields)._LBHOKEBOIFN_k__BackingField,
         __this_00 == (KELJDKIIHMM_o *)0x0)) goto LAB_035a7a10;
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
                    /* try { // try from 035a7a04 to 036a7a2b has its CatchHandler @ 035a7eb4 */
  return pNVar4;
}


// ===== private JLGNBOILFLN JMMDGEOBMOC(string AFKICLAFDKC)  [RVA 0x34A7A18]
// Nekki.SF2.GUI.Profile.UserPerksPanel$$JMMDGEOBMOC @ RVA 0x34A7A18

JLGNBOILFLN_o *
Nekki_SF2_GUI_Profile_UserPerksPanel__JMMDGEOBMOC
          (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,System_String_o *AFKICLAFDKC,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_EANNACPOJFA__o *__this_00;
  JLGNBOILFLN_o *pJVar3;
  System_String_o *pSVar4;
  System_Collections_Generic_List_object__o *pSVar5;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04568500 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EANNACPOJFA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EANNACPOJFA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EANNACPOJFA>_get_Current__);
                    /* try { // try from 035a7a60 to 036a7a8b has its CatchHandler @ 035a7eac */
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
    DAT_04568500 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).MHOLLBLFLAH;
  if (__this_00 == (System_Collections_Generic_List_EANNACPOJFA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<EANNACPOJFA>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
                    /* try { // try from 035a7ac8 to 036a7b3b has its CatchHandler @ 035a7f7c */
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
  while( true ) {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<EANNACPOJFA>_MoveNext__);
    pIVar1 = local_50.fields._current;
    if (!bVar2) {
      pJVar3 = (JLGNBOILFLN_o *)0x0;
      goto LAB_035a7b98;
    }
    if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (local_50.fields._current[1].monitor == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pJVar3 = (JLGNBOILFLN_o *)
             System_Collections_Generic_List<object>__get_Item
                       (local_50.fields._current[1].monitor,0,
                        Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
    if (pJVar3 == (JLGNBOILFLN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar4 = JLGNBOILFLN__GKMAFGODLLG(pJVar3,(MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(pSVar4,AFKICLAFDKC,(MethodInfo *)0x0);
    pSVar5 = pIVar1[1].monitor;
    if (bVar2) break;
    if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (1 < (pSVar5->fields)._size) {
                    /* try { // try from 035a7b3c to 036a7c5f has its CatchHandler @ 035a7464 */
      pJVar3 = (JLGNBOILFLN_o *)
               System_Collections_Generic_List<object>__get_Item
                         (pSVar5,1,Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
      if (pJVar3 == (JLGNBOILFLN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar4 = JLGNBOILFLN__GKMAFGODLLG(pJVar3,(MethodInfo *)0x0);
      bVar2 = System_String__op_Equality(pSVar4,AFKICLAFDKC,(MethodInfo *)0x0);
      if (bVar2) {
        pSVar5 = pIVar1[1].monitor;
        if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pJVar3 = (JLGNBOILFLN_o *)
                 System_Collections_Generic_List<object>__get_Item
                           (pSVar5,1,Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__)
        ;
LAB_035a7b98:
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_50,
                   Method_System_Collections_Generic_List_Enumerator<EANNACPOJFA>_Dispose__);
        return pJVar3;
      }
    }
  }
  if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pJVar3 = (JLGNBOILFLN_o *)
           System_Collections_Generic_List<object>__get_Item
                     (pSVar5,0,Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Item__);
  goto LAB_035a7b98;
}


// ===== public virtual int NumberOfRowsInTableView(TableView GECPJPBIBPN)  [RVA 0x34A7C94]
// Nekki.SF2.GUI.Profile.UserPerksPanel$$NumberOfRowsInTableView @ RVA 0x34A7C94

int32_t Nekki_SF2_GUI_Profile_UserPerksPanel__NumberOfRowsInTableView
                  (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,
                  Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,MethodInfo *method)

{
  System_Collections_Generic_List_EANNACPOJFA__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = GECPJPBIBPN;
  auVar2._0_8_ = __this;
  if ((DAT_04568501 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_get_Count__);
                    /* try { // try from 035a7cbc to 036a7ce7 has its CatchHandler @ 035a7e90 */
    DAT_04568501 = 1;
  }
  pSVar1 = (__this->fields).MHOLLBLFLAH;
  if (pSVar1 != (System_Collections_Generic_List_EANNACPOJFA__o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public List<EANNACPOJFA> get_PerkContainers()  [RVA 0x34A7CDC]
// Nekki.SF2.GUI.Profile.UserPerksPanel$$get_PerkContainers @ RVA 0x34A7CDC

System_Collections_Generic_List_EANNACPOJFA__o *
Nekki_SF2_GUI_Profile_UserPerksPanel__get_PerkContainers
          (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,MethodInfo *method)

{
  return (__this->fields).MHOLLBLFLAH;
}


// ===== public bool SelectTopSubItem()  [RVA 0x34A7CE4]
// Nekki.SF2.GUI.Profile.UserPerksPanel$$SelectTopSubItem @ RVA 0x34A7CE4

bool Nekki_SF2_GUI_Profile_UserPerksPanel__SelectTopSubItem
               (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t EHFBCDNCMDM;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  Nekki_SF2_GUI_Profile_PerkSubItem_o *GNFENDJPCFD;
  Nekki_SF2_GUI_Profile_PerkCell_o *__this_00;
  Nekki_SF2_GUI_Profile_PerkSubItem_o *x;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_04568502 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_UserPerksPanel_DLHMNFBGOGN<PerkCell>__);
                    /* try { // try from 035a7d24 to 036a7d97 has its CatchHandler @ 035a7ebc */
    DAT_04568502 = 1;
  }
  LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  bVar2 = TutorialExtension__MNKFDLHJPAA(LAIGNDBNBJG,(MethodInfo *)0x0);
  if (bVar2) {
    return false;
  }
  GNFENDJPCFD = (Nekki_SF2_GUI_Profile_PerkSubItem_o *)
                (*(__this->klass->vtable)._27_get_CurrentSubItem.methodPtr)
                          (__this,(__this->klass->vtable)._27_get_CurrentSubItem.method);
  if (GNFENDJPCFD == (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
LAB_035a7d7c:
    GNFENDJPCFD = (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0;
  }
  else {
    bVar1 = (Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo->_2).naturalAligment;
    if ((GNFENDJPCFD->klass->_2).naturalAligment < bVar1) goto LAB_035a7d7c;
    if ((GNFENDJPCFD->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo) {
      GNFENDJPCFD = (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0;
    }
  }
                    /* try { // try from 035a7d98 to 036a7e2f has its CatchHandler @ 035a7464 */
  __this_00 = (Nekki_SF2_GUI_Profile_PerkCell_o *)
              Nekki_SF2_GUI_Profile_UserPerksPanel__DLHMNFBGOGN<object>
                        (__this,Method_Nekki_SF2_GUI_Profile_UserPerksPanel_DLHMNFBGOGN<PerkCell>__)
  ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)GNFENDJPCFD,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar2) {
    if (__this_00 == (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) goto LAB_035a7ea0;
    GNFENDJPCFD = (__this_00->fields)._RightSubItem;
  }
  while( true ) {
                    /* try { // try from 035a7e48 to 036a7e4f has its CatchHandler @ 035a7f6c */
                    /* try { // try from 035a7e50 to 036a7e57 has its CatchHandler @ 035a7e8c */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 035a7e58 to 036a7e5f has its CatchHandler @ 035a7ea0 */
                    /* try { // try from 035a7e60 to 036a7e6b has its CatchHandler @ 035a7464 */
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (!bVar2) {
      return false;
    }
    EHFBCDNCMDM = Nekki_SF2_GUI_Profile_UserPerksPanel__get_LastPosition(__this,method_00);
    if (__this_00 == (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) goto LAB_035a7ea0;
    x = Nekki_SF2_GUI_Profile_PerkCell__GetSubItemByCurrentSubItemAndLastPosition
                  (__this_00,GNFENDJPCFD,EHFBCDNCMDM,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    method_01 = (MethodInfo *)0x0;
                    /* try { // try from 035a7e30 to 036a7e37 has its CatchHandler @ 035a7e9c */
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) break;
                    /* try { // try from 035a7e38 to 036a7e3f has its CatchHandler @ 035a7e98 */
                    /* try { // try from 035a7e40 to 036a7e47 has its CatchHandler @ 035a7f78 */
    __this_00 = Nekki_SF2_GUI_Profile_UserPerksPanel__HDIADKGHLNC(__this,__this_00,method_01);
  }
  if (x != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
                    /* try { // try from 035a7e78 to 036a7e7b has its CatchHandler @ 035a7e84 */
                    /* try { // try from 035a7e7c to 036a7e7f has its CatchHandler @ 035a7e80 */
                    /* catch() { ... } // from try @ 035a7e7c with catch @ 035a7e80
                       try { // try from 035a7e80 to 036a7ecb has its CatchHandler @ 035a7464 */
                    /* catch() { ... } // from try @ 035a7e78 with catch @ 035a7e84 */
                    /* catch() { ... } // from try @ 035a7e6c with catch @ 035a7e88 */
    (*(x->klass->vtable)._59_Choose.methodPtr)(x,(x->klass->vtable)._59_Choose.method);
                    /* catch() { ... } // from try @ 035a7e50 with catch @ 035a7e8c */
                    /* catch() { ... } // from try @ 035a7cbc with catch @ 035a7e90 */
                    /* catch() { ... } // from try @ 035a7c60 with catch @ 035a7e94 */
                    /* catch() { ... } // from try @ 035a7e38 with catch @ 035a7e98 */
                    /* catch() { ... } // from try @ 035a7e30 with catch @ 035a7e9c */
    return true;
  }
LAB_035a7ea0:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 035a7e58 with catch @ 035a7ea0 */
  FUN_01bab8c8();
}


// ===== public void set_IsSelected(bool CJNHFNHJHPE)  [RVA 0x34A8084]
// Nekki.SF2.GUI.Profile.UserPerksPanel$$set_IsSelected @ RVA 0x34A8084

void Nekki_SF2_GUI_Profile_UserPerksPanel__set_IsSelected
               (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).KCBIPKCIGMO = CJNHFNHJHPE;
  return;
}


// ===== public void .ctor()  [RVA 0x34A8090]
// Nekki.SF2.GUI.Profile.UserPerksPanel$$.ctor @ RVA 0x34A8090

void Nekki_SF2_GUI_Profile_UserPerksPanel___ctor
               (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_EANNACPOJFA__o *__this_00;
  System_Collections_Generic_List_EANNACPOJFA__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568503 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<EANNACPOJFA>_TypeInfo);
    DAT_04568503 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 035a80dc to 036a80e7 has its CatchHandler @ 035a7464 */
  __this_00 = (System_Collections_Generic_List_EANNACPOJFA__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<EANNACPOJFA>_TypeInfo,method);
                    /* try { // try from 035a80e8 to 036a80ef has its CatchHandler @ 035a80f0 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<EANNACPOJFA>__ctor__);
  ppSVar1 = &(__this->fields).MHOLLBLFLAH;
                    /* catch() { ... } // from try @ 035a7ef0 with catch @ 035a80f0
                       catch() { ... } // from try @ 035a7fb4 with catch @ 035a80f0
                       catch() { ... } // from try @ 035a806c with catch @ 035a80f0
                       catch() { ... } // from try @ 035a80e8 with catch @ 035a80f0 */
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void AddPerk(PerkInfoItem MNDCHBGOKMD, bool CELDNFDOLEH = True)  [RVA 0x34A8118]
// Nekki.SF2.GUI.Profile.UserPerksPanel$$AddPerk @ RVA 0x34A8118

void Nekki_SF2_GUI_Profile_UserPerksPanel__AddPerk
               (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,PerkInfoItem_o *MNDCHBGOKMD,
               bool CELDNFDOLEH,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  JLGNBOILFLN_o *pJVar4;
  System_String_o *value;
  EANNACPOJFA_o *pEVar5;
  System_Collections_Generic_List_JLGNBOILFLN__o *pSVar6;
  System_Collections_Generic_List_EANNACPOJFA__o *__this_00;
  Nekki_SF2_GUI_Profile_PerkCell_o *__this_01;
  Nekki_SF2_GUI_TableView_o *pNVar7;
  Nekki_SF2_GUI_LabelAlias_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  MethodInfo *method_00;
  MethodInfo *pMVar8;
  JLGNBOILFLN_array *pJVar9;
  EANNACPOJFA_array *pEVar10;
  EANNACPOJFA_o **ppEVar11;
  
  pMVar8 = (MethodInfo *)(ulong)CELDNFDOLEH;
  if ((DAT_04568504 & 1) == 0) {
    FUN_01bab630(&EANNACPOJFA_TypeInfo);
    FUN_01bab630(&JLGNBOILFLN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_Add__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568504 = 1;
  }
  if (MNDCHBGOKMD == (PerkInfoItem_o *)0x0) {
    return;
  }
  pJVar4 = Nekki_SF2_GUI_Profile_UserPerksPanel__JMMDGEOBMOC
                     (__this,(MNDCHBGOKMD->fields).JIJLBFGKNJK,pMVar8);
  if (pJVar4 != (JLGNBOILFLN_o *)0x0) {
    JLGNBOILFLN__LAAHJCGKKNK(pJVar4,MNDCHBGOKMD,(MethodInfo *)0x0);
                    /* try { // try from 035a81ac to 036a851f has its CatchHandler @ 035a81ac
                       catch() { ... } // from try @ 035a81ac with catch @ 035a81ac
                       catch() { ... } // from try @ 035a8a7c with catch @ 035a81ac
                       catch() { ... } // from try @ 035a8af8 with catch @ 035a81ac
                       catch() { ... } // from try @ 035a8c7c with catch @ 035a81ac
                       catch() { ... } // from try @ 035a8d98 with catch @ 035a81ac */
    JLGNBOILFLN__HLPHKOBKPML(pJVar4,(MNDCHBGOKMD->fields).BPCADJLKKGA,(MethodInfo *)0x0);
    return;
  }
  pJVar4 = (JLGNBOILFLN_o *)thunk_FUN_01bda818(JLGNBOILFLN_TypeInfo);
  pMVar8 = (MethodInfo *)0x0;
  JLGNBOILFLN___ctor(pJVar4,MNDCHBGOKMD,0,2,3,(MethodInfo *)0x0);
  if (pJVar4 == (JLGNBOILFLN_o *)0x0) goto LAB_035a8460;
  value = JLGNBOILFLN__KIEKFCEPGCO(pJVar4,(MethodInfo *)0x0);
  bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  bVar3 = Nekki_SF2_GUI_Profile_UserPerksPanel__KOFEHBPNEPA(__this,method_00);
  lVar2 = Method_System_Collections_Generic_List<JLGNBOILFLN>_Add__;
  if (bVar3) {
    pEVar5 = (EANNACPOJFA_o *)thunk_FUN_01bda818(EANNACPOJFA_TypeInfo);
    EANNACPOJFA___ctor(pEVar5,(MethodInfo *)0x0);
    ppEVar11 = &(__this->fields).FKDJMGJDOAG;
    *ppEVar11 = pEVar5;
    thunk_FUN_01c20e04(ppEVar11,pEVar5);
    lVar2 = Method_System_Collections_Generic_List<JLGNBOILFLN>_Add__;
    if ((*ppEVar11 == (EANNACPOJFA_o *)0x0) ||
       (pSVar6 = ((*ppEVar11)->fields).GJBLBEALOBO,
       pSVar6 == (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0)) goto LAB_035a8460;
    pJVar9 = (pSVar6->fields)._items;
    (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
    if (pJVar9 == (JLGNBOILFLN_array *)0x0) goto LAB_035a8460;
    uVar1 = (pSVar6->fields)._size;
    if (uVar1 < (uint)pJVar9->max_length) {
      (pSVar6->fields)._size = uVar1 + 1;
      pJVar9->m_Items[(int)uVar1] = pJVar4;
      thunk_FUN_01c20e04(pJVar9->m_Items + (int)uVar1,pJVar4);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pJVar4,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    lVar2 = Method_System_Collections_Generic_List<EANNACPOJFA>_Add__;
    __this_00 = (__this->fields).MHOLLBLFLAH;
    if (__this_00 == (System_Collections_Generic_List_EANNACPOJFA__o *)0x0) goto LAB_035a8460;
    pEVar5 = (__this->fields).FKDJMGJDOAG;
    pEVar10 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pEVar10 == (EANNACPOJFA_array *)0x0) goto LAB_035a8460;
    uVar1 = (__this_00->fields)._size;
    if (uVar1 < (uint)pEVar10->max_length) {
      (__this_00->fields)._size = uVar1 + 1;
      pEVar10->m_Items[(int)uVar1] = pEVar5;
      thunk_FUN_01c20e04(pEVar10->m_Items + (int)uVar1);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pEVar5,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    if (CELDNFDOLEH) {
      pNVar7 = (__this->fields)._TableView;
      if (pNVar7 == (Nekki_SF2_GUI_TableView_o *)0x0) goto LAB_035a8460;
      Nekki_SF2_GUI_TableView__ReloadData(pNVar7,(MethodInfo *)0x0);
      pNVar7 = (__this->fields)._TableView;
      if (pNVar7 == (Nekki_SF2_GUI_TableView_o *)0x0) goto LAB_035a8460;
      Nekki_SF2_GUI_TableView__SetPosition
                (pNVar7,(pNVar7->fields).GMCDBHFHFGF,0.0,(MethodInfo *)0x0);
    }
  }
  else {
    pEVar5 = (__this->fields).FKDJMGJDOAG;
    if ((pEVar5 == (EANNACPOJFA_o *)0x0) ||
       (pSVar6 = (pEVar5->fields).GJBLBEALOBO,
       pSVar6 == (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0)) goto LAB_035a8460;
    pJVar9 = (pSVar6->fields)._items;
    (pSVar6->fields)._version = (pSVar6->fields)._version + 1;
    if (pJVar9 == (JLGNBOILFLN_array *)0x0) goto LAB_035a8460;
    uVar1 = (pSVar6->fields)._size;
    if (uVar1 < (uint)pJVar9->max_length) {
      (pSVar6->fields)._size = uVar1 + 1;
      pJVar9->m_Items[(int)uVar1] = pJVar4;
      thunk_FUN_01c20e04(pJVar9->m_Items + (int)uVar1,pJVar4);
    }
    else {
      pMVar8 = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pJVar4,
                 (MethodInfo_26E4DAC *)pMVar8);
    }
    __this_01 = Nekki_SF2_GUI_Profile_UserPerksPanel__COKANBDIAPH
                          (__this,(__this->fields).FKDJMGJDOAG,pMVar8);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (bVar3) {
      if (__this_01 == (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) goto LAB_035a8460;
      Nekki_SF2_GUI_Profile_PerkCell__Init
                (__this_01,(__this->fields).FKDJMGJDOAG,(JEIEEMKCNOJ_o *)__this,15.0,
                 (MethodInfo *)0x0);
    }
  }
  __this_02 = (__this->fields)._NoPerksLabel;
  if ((__this_02 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (__this_03 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
     __this_03 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_03,false,(MethodInfo *)0x0);
    return;
  }
LAB_035a8460:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public CMEMKGEPJMH get_LastPosition()  [RVA 0x34A7EA4]
// Nekki.SF2.GUI.Profile.UserPerksPanel$$get_LastPosition @ RVA 0x34A7EA4

int32_t Nekki_SF2_GUI_Profile_UserPerksPanel__get_LastPosition
                  (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  UnityEngine_Object_o *x;
  
                    /* catch() { ... } // from try @ 035a7a60 with catch @ 035a7eac */
                    /* catch() { ... } // from try @ 035a780c with catch @ 035a7eb0 */
                    /* catch() { ... } // from try @ 035a7a04 with catch @ 035a7eb4 */
                    /* catch() { ... } // from try @ 035a77b0 with catch @ 035a7eb8 */
  if ((DAT_04568505 & 1) == 0) {
                    /* catch() { ... } // from try @ 035a7d24 with catch @ 035a7ebc */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 035a7ecc to 036a7ecf has its CatchHandler @ 035a7ee0 */
    FUN_01bab630(&Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo);
    DAT_04568505 = 1;
  }
  iVar3 = (__this->fields).IGLNJPCAJOD;
                    /* catch() { ... } // from try @ 035a7ecc with catch @ 035a7ee0 */
  if (iVar3 != 0) {
    return iVar3;
  }
                    /* try { // try from 035a7ef0 to 036a7f6b has its CatchHandler @ 035a80f0 */
  x = (UnityEngine_Object_o *)
      (*(__this->klass->vtable)._27_get_CurrentSubItem.methodPtr)
                (__this,(__this->klass->vtable)._27_get_CurrentSubItem.method);
  if (x != (UnityEngine_Object_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo->_2).naturalAligment;
    if (bVar1 <= (x->klass->_2).naturalAligment) {
      if ((x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo) {
        x = (UnityEngine_Object_o *)0x0;
      }
      goto LAB_035a7f38;
    }
  }
  x = (UnityEngine_Object_o *)0x0;
LAB_035a7f38:
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    iVar3 = 2;
  }
  else {
                    /* catch() { ... } // from try @ 035a7e48 with catch @ 035a7f6c
                       try { // try from 035a7f6c to 036a7f8b has its CatchHandler @ 035a7464 */
    if (x == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* catch() { ... } // from try @ 035a7e40 with catch @ 035a7f78 */
    iVar3 = 2;
                    /* catch() { ... } // from try @ 035a7ac8 with catch @ 035a7f7c */
    if (*(int *)&x[0x15].monitor != 1) {
      iVar3 = *(int *)&x[0x15].monitor;
    }
  }
  (__this->fields).IGLNJPCAJOD = iVar3;
                    /* try { // try from 035a7f8c to 036a7f8f has its CatchHandler @ 035a7fa4 */
  return iVar3;
}


// ===== private bool KOFEHBPNEPA()  [RVA 0x34A8464]
// Nekki.SF2.GUI.Profile.UserPerksPanel$$KOFEHBPNEPA @ RVA 0x34A8464

bool Nekki_SF2_GUI_Profile_UserPerksPanel__KOFEHBPNEPA
               (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  EANNACPOJFA_o *pEVar2;
  System_Collections_Generic_List_JLGNBOILFLN__o *pSVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
  if ((DAT_04568506 & 1) == 0) {
    auVar4 = FUN_01bab630(&Method_System_Collections_Generic_List<JLGNBOILFLN>_get_Count__);
    DAT_04568506 = 1;
  }
  pEVar2 = (__this->fields).FKDJMGJDOAG;
  if (pEVar2 == (EANNACPOJFA_o *)0x0) {
    bVar1 = true;
  }
  else {
    pSVar3 = (pEVar2->fields).GJBLBEALOBO;
    if (pSVar3 == (System_Collections_Generic_List_JLGNBOILFLN__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(auVar4._0_8_,auVar4._8_8_);
    }
    bVar1 = 1 < (pSVar3->fields)._size;
  }
  return bVar1;
}


// ===== public bool SelectLeftSubItem()  [RVA 0x34A85AC]
// Nekki.SF2.GUI.Profile.UserPerksPanel$$SelectLeftSubItem @ RVA 0x34A85AC

bool Nekki_SF2_GUI_Profile_UserPerksPanel__SelectLeftSubItem
               (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  Nekki_SF2_GUI_Profile_PerkCell_o *__this_00;
  Nekki_SF2_GUI_Profile_PerkSubItem_o *x;
  
                    /* try { // try from 035a85bc to 036a85c3 has its CatchHandler @ 035a8cb4 */
  if ((DAT_04568507 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 035a85d4 to 036a85db has its CatchHandler @ 035a8cb8 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_UserPerksPanel_DLHMNFBGOGN<PerkCell>__);
                    /* try { // try from 035a85dc to 036a85e7 has its CatchHandler @ 035a8cd0 */
    DAT_04568507 = 1;
  }
  LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  bVar1 = TutorialExtension__MNKFDLHJPAA(LAIGNDBNBJG,(MethodInfo *)0x0);
                    /* try { // try from 035a85f8 to 036a860f has its CatchHandler @ 035a8cf0 */
  if (!bVar1) {
    __this_00 = (Nekki_SF2_GUI_Profile_PerkCell_o *)
                Nekki_SF2_GUI_Profile_UserPerksPanel__DLHMNFBGOGN<object>
                          (__this,
                           Method_Nekki_SF2_GUI_Profile_UserPerksPanel_DLHMNFBGOGN<PerkCell>__);
                    /* try { // try from 035a861c to 036a8623 has its CatchHandler @ 035a8ccc */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
                    /* try { // try from 035a8630 to 036a864b has its CatchHandler @ 035a8cdc */
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (!bVar1) {
      if (__this_00 != (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) {
        x = Nekki_SF2_GUI_Profile_PerkCell__GetSubItemByPosition(__this_00,2,(MethodInfo *)0x0);
                    /* try { // try from 035a8664 to 036a866b has its CatchHandler @ 035a8c94 */
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
                    /* try { // try from 035a86b0 to 036a86b7 has its CatchHandler @ 035a8c98 */
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* try { // try from 035a8684 to 036a86a3 has its CatchHandler @ 035a8c9c */
  return false;
}


// ===== private PerkCell HDIADKGHLNC(PerkCell AHICPBEJIKJ)  [RVA 0x34A7F94]
// Nekki.SF2.GUI.Profile.UserPerksPanel$$HDIADKGHLNC @ RVA 0x34A7F94

Nekki_SF2_GUI_Profile_PerkCell_o *
Nekki_SF2_GUI_Profile_UserPerksPanel__HDIADKGHLNC
          (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,
          Nekki_SF2_GUI_Profile_PerkCell_o *AHICPBEJIKJ,MethodInfo *method)

{
  byte bVar1;
  int DPJIDNBJIBG;
  bool bVar2;
  Nekki_SF2_GUI_Profile_PerkCell_o *pNVar3;
  KELJDKIIHMM_o *__this_00;
  Nekki_SF2_GUI_TableView_o *pNVar4;
  
                    /* catch() { ... } // from try @ 035a7f8c with catch @ 035a7fa4 */
                    /* try { // try from 035a7fb4 to 036a802f has its CatchHandler @ 035a80f0 */
  if ((DAT_04568508 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_PerkCell_TypeInfo);
    DAT_04568508 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)AHICPBEJIKJ,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  pNVar3 = (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0;
  if (!bVar2) {
    if (AHICPBEJIKJ == (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) {
LAB_035a8080:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    DPJIDNBJIBG = (AHICPBEJIKJ->fields).super.super.FIMCNHGPCNA + -1;
    if (DPJIDNBJIBG < 0) {
                    /* try { // try from 035a806c to 036a80db has its CatchHandler @ 035a80f0 */
      pNVar3 = (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0;
    }
    else {
      pNVar4 = (__this->fields)._TableView;
      if ((pNVar4 == (Nekki_SF2_GUI_TableView_o *)0x0) ||
         (__this_00 = (pNVar4->fields)._LBHOKEBOIFN_k__BackingField,
         __this_00 == (KELJDKIIHMM_o *)0x0)) goto LAB_035a8080;
      pNVar3 = (Nekki_SF2_GUI_Profile_PerkCell_o *)
               KELJDKIIHMM__KHGEMIEPBJB(__this_00,DPJIDNBJIBG,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035a7874 with catch @ 035a8030
                       try { // try from 035a8030 to 036a8047 has its CatchHandler @ 035a7464 */
      if (pNVar3 != (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) {
                    /* try { // try from 035a8048 to 036a804b has its CatchHandler @ 035a805c */
        bVar1 = (Nekki_SF2_GUI_Profile_PerkCell_TypeInfo->_2).naturalAligment;
                    /* catch() { ... } // from try @ 035a8048 with catch @ 035a805c */
        if (((pNVar3->klass->_2).naturalAligment < bVar1) ||
           ((pNVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)Nekki_SF2_GUI_Profile_PerkCell_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64();
        }
      }
    }
  }
  return pNVar3;
}


// ===== public virtual float SizeForRowInTableView(TableView GECPJPBIBPN, int HAJDGFPLGNK)  [RVA 0x34A86B8]
// Nekki.SF2.GUI.Profile.UserPerksPanel$$SizeForRowInTableView @ RVA 0x34A86B8

float Nekki_SF2_GUI_Profile_UserPerksPanel__SizeForRowInTableView
                (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,
                Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,int32_t HAJDGFPLGNK,MethodInfo *method)

{
  return 200.0;
}


// ===== public virtual void TableViewDidHighlightCellForRow(TableView GECPJPBIBPN, int HAJDGFPLGNK)  [RVA 0x34A86C4]
// Nekki.SF2.GUI.Profile.UserPerksPanel$$TableViewDidHighlightCellForRow @ RVA 0x34A86C4

void Nekki_SF2_GUI_Profile_UserPerksPanel__TableViewDidHighlightCellForRow
               (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,
               Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,int32_t HAJDGFPLGNK,MethodInfo *method)

{
                    /* try { // try from 035a86c4 to 036a86cf has its CatchHandler @ 035a8cbc */
  return;
}


// ===== public virtual SubItem get_CurrentSubItem()  [RVA 0x34A86C8]
// Nekki.SF2.GUI.Profile.UserPerksPanel$$get_CurrentSubItem @ RVA 0x34A86C8

Nekki_SF2_GUI_Profile_SubItem_o *
Nekki_SF2_GUI_Profile_UserPerksPanel__get_CurrentSubItem
          (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_TableView_o *pNVar3;
  Nekki_SF2_GUI_TableViewCell_c *pNVar4;
  Nekki_SF2_GUI_Profile_SubItem_o **ppNVar5;
  Nekki_SF2_GUI_Profile_SubItem_o *pNVar6;
  Nekki_SF2_GUI_TableViewCell_o *pNVar7;
  
  if ((DAT_04568509 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo);
    DAT_04568509 = 1;
    method = extraout_x1;
  }
  ppNVar5 = &(__this->fields).PFKHDCBBDOG;
  pNVar6 = *ppNVar5;
                    /* try { // try from 035a8718 to 036a873f has its CatchHandler @ 035a8ce0 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pNVar3 = (__this->fields)._TableView;
    if (pNVar3 == (Nekki_SF2_GUI_TableView_o *)0x0) {
LAB_035a87dc:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pNVar7 = (pNVar3->fields)._LDAHBFIIBJJ_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar2) {
      pNVar3 = (__this->fields)._TableView;
      if ((pNVar3 == (Nekki_SF2_GUI_TableView_o *)0x0) ||
         (pNVar7 = (pNVar3->fields)._LDAHBFIIBJJ_k__BackingField,
         pNVar7 == (Nekki_SF2_GUI_TableViewCell_o *)0x0)) goto LAB_035a87dc;
                    /* try { // try from 035a8778 to 036a879f has its CatchHandler @ 035a8ad8 */
      pNVar4 = pNVar7->klass;
      bVar1 = (Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo->_2).naturalAligment;
      if (((pNVar4->_2).naturalAligment < bVar1) ||
         ((pNVar4->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
      pNVar6 = (Nekki_SF2_GUI_Profile_SubItem_o *)(*pNVar4[1]._1.image)(pNVar7,pNVar4[1]._1.gc_desc)
      ;
      *ppNVar5 = pNVar6;
      thunk_FUN_01c20e04(ppNVar5,pNVar6);
    }
  }
                    /* try { // try from 035a87d4 to 036a87fb has its CatchHandler @ 035a8ad4 */
  return *ppNVar5;
}


// ===== public bool SelectBottomSubItem()  [RVA 0x34A87E4]
// Nekki.SF2.GUI.Profile.UserPerksPanel$$SelectBottomSubItem @ RVA 0x34A87E4

bool Nekki_SF2_GUI_Profile_UserPerksPanel__SelectBottomSubItem
               (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t EHFBCDNCMDM;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  Nekki_SF2_GUI_Profile_PerkSubItem_o *GNFENDJPCFD;
  Nekki_SF2_GUI_Profile_PerkCell_o *__this_00;
  Nekki_SF2_GUI_Profile_PerkSubItem_o *x;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_0456850a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 035a8810 to 036a8817 has its CatchHandler @ 035a8ad0 */
    FUN_01bab630(&Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo);
                    /* try { // try from 035a8820 to 036a8827 has its CatchHandler @ 035a8ac0 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_UserPerksPanel_DLHMNFBGOGN<PerkCell>__);
    DAT_0456850a = 1;
  }
                    /* try { // try from 035a8834 to 036a883b has its CatchHandler @ 035a8acc */
  LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  bVar2 = TutorialExtension__MNKFDLHJPAA(LAIGNDBNBJG,(MethodInfo *)0x0);
                    /* try { // try from 035a8840 to 036a8847 has its CatchHandler @ 035a8abc */
  if (bVar2) {
    return false;
  }
  GNFENDJPCFD = (Nekki_SF2_GUI_Profile_PerkSubItem_o *)
                (*(__this->klass->vtable)._27_get_CurrentSubItem.methodPtr)
                          (__this,(__this->klass->vtable)._27_get_CurrentSubItem.method);
                    /* try { // try from 035a8858 to 036a885f has its CatchHandler @ 035a8ab0 */
  if (GNFENDJPCFD == (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
LAB_035a887c:
                    /* try { // try from 035a887c to 036a8883 has its CatchHandler @ 035a8aac */
    GNFENDJPCFD = (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0;
  }
  else {
                    /* try { // try from 035a8868 to 036a886f has its CatchHandler @ 035a8aa0 */
    bVar1 = (Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo->_2).naturalAligment;
    if ((GNFENDJPCFD->klass->_2).naturalAligment < bVar1) goto LAB_035a887c;
                    /* try { // try from 035a8888 to 036a888f has its CatchHandler @ 035a8a9c */
    if ((GNFENDJPCFD->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo) {
      GNFENDJPCFD = (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0;
    }
  }
                    /* try { // try from 035a8898 to 036a889f has its CatchHandler @ 035a8a90 */
  __this_00 = (Nekki_SF2_GUI_Profile_PerkCell_o *)
              Nekki_SF2_GUI_Profile_UserPerksPanel__DLHMNFBGOGN<object>
                        (__this,Method_Nekki_SF2_GUI_Profile_UserPerksPanel_DLHMNFBGOGN<PerkCell>__)
  ;
                    /* try { // try from 035a88b8 to 036a88c3 has its CatchHandler @ 035a8a98 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 035a88c8 to 036a88d3 has its CatchHandler @ 035a8aa4 */
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)GNFENDJPCFD,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar2) {
    if (__this_00 == (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) goto LAB_035a89a0;
    GNFENDJPCFD = (__this_00->fields)._LeftSubItem;
                    /* try { // try from 035a88e8 to 036a88ef has its CatchHandler @ 035a8ab4 */
  }
  while( true ) {
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 035a8958 to 036a8973 has its CatchHandler @ 035a8a8c */
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if (!bVar2) {
      return false;
    }
    EHFBCDNCMDM = Nekki_SF2_GUI_Profile_UserPerksPanel__get_LastPosition(__this,method_00);
    if (__this_00 == (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) goto LAB_035a89a0;
                    /* try { // try from 035a8900 to 036a891b has its CatchHandler @ 035a8ab8 */
    x = Nekki_SF2_GUI_Profile_PerkCell__GetSubItemByCurrentSubItemAndLastPosition
                  (__this_00,GNFENDJPCFD,EHFBCDNCMDM,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 035a8920 to 036a892b has its CatchHandler @ 035a8a84 */
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    method_01 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) break;
                    /* try { // try from 035a8940 to 036a8947 has its CatchHandler @ 035a8a88 */
    __this_00 = Nekki_SF2_GUI_Profile_UserPerksPanel__KFDAGNGDHNL(__this,__this_00,method_01);
  }
  if (x != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
    (*(x->klass->vtable)._59_Choose.methodPtr)(x,(x->klass->vtable)._59_Choose.method);
    return true;
  }
LAB_035a89a0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Clear()  [RVA 0x34A89A4]
// Nekki.SF2.GUI.Profile.UserPerksPanel$$Clear @ RVA 0x34A89A4

void Nekki_SF2_GUI_Profile_UserPerksPanel__Clear
               (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,MethodInfo *method)

{
  int32_t length;
  Nekki_SF2_GUI_TableView_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  System_Collections_Generic_List_EANNACPOJFA__o *pSVar1;
  EANNACPOJFA_o **ppEVar2;
  
  if ((DAT_0456850b & 1) == 0) {
                    /* try { // try from 035a89bc to 036a89e3 has its CatchHandler @ 035a8cd8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_Clear__);
    DAT_0456850b = 1;
  }
  ppEVar2 = &(__this->fields).FKDJMGJDOAG;
  *ppEVar2 = (EANNACPOJFA_o *)0x0;
  thunk_FUN_01c20e04(ppEVar2,0);
  pSVar1 = (__this->fields).MHOLLBLFLAH;
  if (pSVar1 != (System_Collections_Generic_List_EANNACPOJFA__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
                    /* try { // try from 035a8a00 to 036a8a0f has its CatchHandler @ 035a8cec */
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
    }
    __this_00 = (__this->fields)._TableView;
    if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
      Nekki_SF2_GUI_TableView__ReloadData(__this_00,(MethodInfo *)0x0);
      __this_01 = (__this->fields)._NoPerksLabel;
                    /* try { // try from 035a8a28 to 036a8a2f has its CatchHandler @ 035a8ca0 */
      if ((__this_01 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (__this_02 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
         __this_02 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(__this_02,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035a8a48 to 036a8a53 has its CatchHandler @ 035a8ca4 */
  FUN_01bab8c8();
}


// ===== private PerkCell COKANBDIAPH(EANNACPOJFA EOFJCNMEMNM)  [RVA 0x34A84C4]
// Nekki.SF2.GUI.Profile.UserPerksPanel$$COKANBDIAPH @ RVA 0x34A84C4

Nekki_SF2_GUI_Profile_PerkCell_o *
Nekki_SF2_GUI_Profile_UserPerksPanel__COKANBDIAPH
          (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,EANNACPOJFA_o *EOFJCNMEMNM,
          MethodInfo *method)

{
  byte bVar1;
  int32_t DPJIDNBJIBG;
  int32_t iVar2;
  System_Collections_Generic_List_EANNACPOJFA__o *__this_00;
  Nekki_SF2_GUI_TableView_o *pNVar3;
  Nekki_SF2_GUI_Profile_PerkCell_o *pNVar4;
  KELJDKIIHMM_o *__this_01;
  
  if ((DAT_0456850c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_IndexOf__);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_PerkCell_TypeInfo);
    DAT_0456850c = 1;
  }
  __this_00 = (__this->fields).MHOLLBLFLAH;
  if (__this_00 != (System_Collections_Generic_List_EANNACPOJFA__o *)0x0) {
    DPJIDNBJIBG = System_Collections_Generic_List<object>__IndexOf
                            ((System_Collections_Generic_List_object__o *)__this_00,
                             (Il2CppObject *)EOFJCNMEMNM,
                             Method_System_Collections_Generic_List<EANNACPOJFA>_IndexOf__);
    if (DPJIDNBJIBG < 0) {
      pNVar4 = (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0;
    }
    else {
                    /* try { // try from 035a8520 to 036a8547 has its CatchHandler @ 035a8ce8 */
      pNVar3 = (__this->fields)._TableView;
      if (pNVar3 == (Nekki_SF2_GUI_TableView_o *)0x0) goto LAB_035a85a8;
      iVar2 = Nekki_SF2_GUI_TableView__NumberOfRows(pNVar3,(MethodInfo *)0x0);
      pNVar4 = (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0;
      if (DPJIDNBJIBG < iVar2) {
        pNVar3 = (__this->fields)._TableView;
        if ((pNVar3 == (Nekki_SF2_GUI_TableView_o *)0x0) ||
           (__this_01 = (pNVar3->fields)._LBHOKEBOIFN_k__BackingField,
           __this_01 == (KELJDKIIHMM_o *)0x0)) goto LAB_035a85a8;
        pNVar4 = (Nekki_SF2_GUI_Profile_PerkCell_o *)
                 KELJDKIIHMM__KHGEMIEPBJB(__this_01,DPJIDNBJIBG,(MethodInfo *)0x0);
        if (pNVar4 != (Nekki_SF2_GUI_Profile_PerkCell_o *)0x0) {
          bVar1 = (Nekki_SF2_GUI_Profile_PerkCell_TypeInfo->_2).naturalAligment;
                    /* try { // try from 035a8580 to 036a85a7 has its CatchHandler @ 035a8ce4 */
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
LAB_035a85a8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool get_IsSelected()  [RVA 0x34A8A4C]
// Nekki.SF2.GUI.Profile.UserPerksPanel$$get_IsSelected @ RVA 0x34A8A4C

bool Nekki_SF2_GUI_Profile_UserPerksPanel__get_IsSelected
               (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,MethodInfo *method)

{
  return (__this->fields).KCBIPKCIGMO;
}


// ===== public bool get_IsTopSubItemSelected()  [RVA 0x34A8A54]
// Nekki.SF2.GUI.Profile.UserPerksPanel$$get_IsTopSubItemSelected @ RVA 0x34A8A54

bool Nekki_SF2_GUI_Profile_UserPerksPanel__get_IsTopSubItemSelected
               (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_TableView_o *pNVar2;
  Nekki_SF2_GUI_TableViewCell_o *pNVar3;
  
                    /* try { // try from 035a8a58 to 036a8a5b has its CatchHandler @ 035a8ac8 */
                    /* try { // try from 035a8a60 to 036a8a63 has its CatchHandler @ 035a8ac4 */
                    /* try { // try from 035a8a68 to 036a8a6b has its CatchHandler @ 035a8aa8 */
  if ((DAT_0456850d & 1) == 0) {
                    /* try { // try from 035a8a70 to 036a8a73 has its CatchHandler @ 035a8a94 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 035a8a78 to 036a8a7b has its CatchHandler @ 035a8a80 */
                    /* try { // try from 035a8a7c to 036a8af3 has its CatchHandler @ 035a81ac */
    DAT_0456850d = 1;
    method = extraout_x1;
  }
                    /* catch() { ... } // from try @ 035a8a78 with catch @ 035a8a80 */
  pNVar2 = (__this->fields)._TableView;
                    /* catch() { ... } // from try @ 035a8920 with catch @ 035a8a84 */
  if (pNVar2 != (Nekki_SF2_GUI_TableView_o *)0x0) {
                    /* catch() { ... } // from try @ 035a8940 with catch @ 035a8a88 */
                    /* catch() { ... } // from try @ 035a8958 with catch @ 035a8a8c */
                    /* catch() { ... } // from try @ 035a8898 with catch @ 035a8a90 */
    pNVar3 = (pNVar2->fields)._LDAHBFIIBJJ_k__BackingField;
                    /* catch() { ... } // from try @ 035a8a70 with catch @ 035a8a94 */
                    /* catch() { ... } // from try @ 035a88b8 with catch @ 035a8a98 */
                    /* catch() { ... } // from try @ 035a8888 with catch @ 035a8a9c */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 035a8868 with catch @ 035a8aa0 */
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
                    /* catch() { ... } // from try @ 035a88c8 with catch @ 035a8aa4 */
                    /* catch() { ... } // from try @ 035a8a68 with catch @ 035a8aa8 */
                    /* catch() { ... } // from try @ 035a887c with catch @ 035a8aac */
                    /* catch() { ... } // from try @ 035a8858 with catch @ 035a8ab0 */
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
                    /* catch() { ... } // from try @ 035a88e8 with catch @ 035a8ab4 */
    if (bVar1) {
                    /* catch() { ... } // from try @ 035a8900 with catch @ 035a8ab8 */
      pNVar2 = (__this->fields)._TableView;
                    /* catch() { ... } // from try @ 035a8840 with catch @ 035a8abc */
                    /* catch() { ... } // from try @ 035a8820 with catch @ 035a8ac0 */
                    /* catch() { ... } // from try @ 035a8a60 with catch @ 035a8ac4 */
      if ((pNVar2 == (Nekki_SF2_GUI_TableView_o *)0x0) ||
         (pNVar3 = (pNVar2->fields)._LDAHBFIIBJJ_k__BackingField,
         pNVar3 == (Nekki_SF2_GUI_TableViewCell_o *)0x0)) goto LAB_035a8ae8;
                    /* catch() { ... } // from try @ 035a8a58 with catch @ 035a8ac8 */
                    /* catch() { ... } // from try @ 035a8834 with catch @ 035a8acc */
      bVar1 = (pNVar3->fields).FIMCNHGPCNA == 0;
                    /* catch() { ... } // from try @ 035a8810 with catch @ 035a8ad0 */
                    /* catch() { ... } // from try @ 035a87d4 with catch @ 035a8ad4 */
    }
    else {
                    /* catch() { ... } // from try @ 035a8778 with catch @ 035a8ad8 */
      bVar1 = false;
    }
    return bVar1;
  }
LAB_035a8ae8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init()  [RVA 0x34A8AEC]
// Nekki.SF2.GUI.Profile.UserPerksPanel$$Init @ RVA 0x34A8AEC

void Nekki_SF2_GUI_Profile_UserPerksPanel__Init
               (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_o *pNVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
                    /* try { // try from 035a8af4 to 036a8af7 has its CatchHandler @ 035a8c88 */
  pNVar1 = (__this->fields)._TableView;
                    /* try { // try from 035a8af8 to 036a8c27 has its CatchHandler @ 035a81ac */
  if (pNVar1 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    (pNVar1->fields).KFCHMBGIPJK = (__this->fields)._CellPrefab;
    thunk_FUN_01c20e04();
    pNVar1 = (__this->fields)._TableView;
    method = extraout_x1;
    if (pNVar1 != (Nekki_SF2_GUI_TableView_o *)0x0) {
      Nekki_SF2_GUI_TableView__Init
                (pNVar1,(CPFMNHBNOEN_o *)__this,(MLIIECFHJAM_o *)__this,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Profile_UserPerksPanel__FMMCPKHOPFK(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}


// ===== public bool get_IsLeftSubItemSelected()  [RVA 0x34A8D18]
// Nekki.SF2.GUI.Profile.UserPerksPanel$$get_IsLeftSubItemSelected @ RVA 0x34A8D18

bool Nekki_SF2_GUI_Profile_UserPerksPanel__get_IsLeftSubItemSelected
               (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = Nekki_SF2_GUI_Profile_UserPerksPanel__get_LastPosition(__this,method);
                    /* catch() { ... } // from try @ 035a8d14 with catch @ 035a8d2c */
  return iVar1 == 2;
}


// ===== public bool get_IsSelectionCooldown()  [RVA 0x34A8D30]
// Nekki.SF2.GUI.Profile.UserPerksPanel$$get_IsSelectionCooldown @ RVA 0x34A8D30

bool Nekki_SF2_GUI_Profile_UserPerksPanel__get_IsSelectionCooldown
               (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_o *pNVar1;
  float fVar2;
  float fVar3;
  
  pNVar1 = (__this->fields)._TableView;
  if (pNVar1 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    fVar2 = Nekki_SF2_GUI_TableView__get_DistanceToTarget(pNVar1,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._TableView;
    if (pNVar1 != (Nekki_SF2_GUI_TableView_o *)0x0) {
      fVar3 = Nekki_SF2_GUI_TableView__CurrentRowSize(pNVar1,(MethodInfo *)0x0);
                    /* try { // try from 035a8d70 to 036a8d97 has its CatchHandler @ 035a8dac */
      return fVar3 * 0.25 < fVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual void TableViewDidSelectCellForRow(TableView GECPJPBIBPN, int HAJDGFPLGNK)  [RVA 0x34A8D80]
// Nekki.SF2.GUI.Profile.UserPerksPanel$$TableViewDidSelectCellForRow @ RVA 0x34A8D80

void Nekki_SF2_GUI_Profile_UserPerksPanel__TableViewDidSelectCellForRow
               (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,
               Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,int32_t HAJDGFPLGNK,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_o *__this_00;
  
  __this_00 = (__this->fields)._TableView;
  if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
                    /* try { // try from 035a8d98 to 036a8da3 has its CatchHandler @ 035a81ac */
    Nekki_SF2_GUI_TableView__ScrollToCell(__this_00,HAJDGFPLGNK,0.5,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual void TableViewDoubleClickCellForRow(TableView GECPJPBIBPN, int HAJDGFPLGNK)  [RVA 0x34A8DA4]
// Nekki.SF2.GUI.Profile.UserPerksPanel$$TableViewDoubleClickCellForRow @ RVA 0x34A8DA4

void Nekki_SF2_GUI_Profile_UserPerksPanel__TableViewDoubleClickCellForRow
               (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,
               Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,int32_t HAJDGFPLGNK,MethodInfo *method)

{
                    /* try { // try from 035a8da4 to 036a8dab has its CatchHandler @ 035a8dac */
  return;
}


// ===== public void set_LastPosition(CMEMKGEPJMH CJNHFNHJHPE)  [RVA 0x34A8DA8]
// Nekki.SF2.GUI.Profile.UserPerksPanel$$set_LastPosition @ RVA 0x34A8DA8

void Nekki_SF2_GUI_Profile_UserPerksPanel__set_LastPosition
               (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,int32_t CJNHFNHJHPE,
               MethodInfo *method)

{
                    /* catch() { ... } // from try @ 035a8c28 with catch @ 035a8dac
                       catch() { ... } // from try @ 035a8d70 with catch @ 035a8dac
                       catch() { ... } // from try @ 035a8da4 with catch @ 035a8dac */
  if (CJNHFNHJHPE != 1) {
    (__this->fields).IGLNJPCAJOD = CJNHFNHJHPE;
  }
  return;
}


// ===== public bool SelectRightSubItem()  [RVA 0x34A8DB8]
// Nekki.SF2.GUI.Profile.UserPerksPanel$$SelectRightSubItem @ RVA 0x34A8DB8

bool Nekki_SF2_GUI_Profile_UserPerksPanel__SelectRightSubItem
               (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  Nekki_SF2_GUI_Profile_PerkCell_o *__this_00;
  Nekki_SF2_GUI_Profile_PerkSubItem_o *x;
  
  if ((DAT_0456850e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_UserPerksPanel_DLHMNFBGOGN<PerkCell>__);
    DAT_0456850e = 1;
  }
  LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  bVar1 = TutorialExtension__MNKFDLHJPAA(LAIGNDBNBJG,(MethodInfo *)0x0);
  if (!bVar1) {
    __this_00 = (Nekki_SF2_GUI_Profile_PerkCell_o *)
                Nekki_SF2_GUI_Profile_UserPerksPanel__DLHMNFBGOGN<object>
                          (__this,
                           Method_Nekki_SF2_GUI_Profile_UserPerksPanel_DLHMNFBGOGN<PerkCell>__);
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


// ===== public bool get_IsRightSubItemSelected()  [RVA 0x34A8EC4]
// Nekki.SF2.GUI.Profile.UserPerksPanel$$get_IsRightSubItemSelected @ RVA 0x34A8EC4

bool Nekki_SF2_GUI_Profile_UserPerksPanel__get_IsRightSubItemSelected
               (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = Nekki_SF2_GUI_Profile_UserPerksPanel__get_LastPosition(__this,method);
  return iVar1 == 3;
}


// ===== public bool get_IsBottomSubItemSelected()  [RVA 0x34A8EDC]
// Nekki.SF2.GUI.Profile.UserPerksPanel$$get_IsBottomSubItemSelected @ RVA 0x34A8EDC

bool Nekki_SF2_GUI_Profile_UserPerksPanel__get_IsBottomSubItemSelected
               (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_TableView_o *pNVar4;
  Nekki_SF2_GUI_TableViewCell_o *pNVar5;
  
  if ((DAT_0456850f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456850f = 1;
    method = extraout_x1;
  }
  pNVar4 = (__this->fields)._TableView;
  if (pNVar4 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    pNVar5 = (pNVar4->fields)._LDAHBFIIBJJ_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar2) {
      pNVar4 = (__this->fields)._TableView;
      if ((pNVar4 == (Nekki_SF2_GUI_TableView_o *)0x0) ||
         (pNVar5 = (pNVar4->fields)._LDAHBFIIBJJ_k__BackingField,
         pNVar5 == (Nekki_SF2_GUI_TableViewCell_o *)0x0)) goto LAB_035a8f7c;
      iVar1 = (pNVar5->fields).FIMCNHGPCNA;
      iVar3 = Nekki_SF2_GUI_TableView__NumberOfRows(pNVar4,(MethodInfo *)0x0);
      bVar2 = iVar1 == iVar3 + -1;
    }
    else {
      bVar2 = false;
    }
    return bVar2;
  }
LAB_035a8f7c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FMMCPKHOPFK()  [RVA 0x34A8B30]
// Nekki.SF2.GUI.Profile.UserPerksPanel$$FMMCPKHOPFK @ RVA 0x34A8B30

void Nekki_SF2_GUI_Profile_UserPerksPanel__FMMCPKHOPFK
               (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_HNFFPPPDKDK__o *__this_00;
  Nekki_SF2_GUI_TableView_o *pNVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *in_x3;
  Roster_o *pAVar3;
  NFGLEDADCGL_o *pNVar4;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04568510 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HNFFPPPDKDK>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568510 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
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
  pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (((pAVar3 != (Roster_o *)0x0) &&
      (pNVar4 = (pAVar3->fields).CKJAGLDEMAE, pNVar4 != (NFGLEDADCGL_o *)0x0)) &&
     (__this_00 = (pNVar4->fields).PEJIOCBFEEE,
     __this_00 != (System_Collections_Generic_List_HNFFPPPDKDK__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<HNFFPPPDKDK>_GetEnumerator__);
    while( true ) {
                    /* try { // try from 035a8c28 to 036a8c5b has its CatchHandler @ 035a8dac */
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_MoveNext__);
      if (!bVar1) break;
      if (local_38.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 035a8664 with catch @ 035a8c94 */
        FUN_01bab8c8();
      }
      Nekki_SF2_GUI_Profile_UserPerksPanel__AddPerk
                (__this,(PerkInfoItem_o *)local_38.fields._current[2].klass,false,in_x3);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_Dispose__);
                    /* try { // try from 035a8c5c to 036a8c5f has its CatchHandler @ 035a8cd4 */
    pNVar2 = (__this->fields)._TableView;
                    /* try { // try from 035a8c60 to 036a8c63 has its CatchHandler @ 035a8cc8 */
    if (pNVar2 != (Nekki_SF2_GUI_TableView_o *)0x0) {
                    /* try { // try from 035a8c64 to 036a8c67 has its CatchHandler @ 035a8cc4 */
                    /* try { // try from 035a8c68 to 036a8c6b has its CatchHandler @ 035a8cc0 */
      Nekki_SF2_GUI_TableView__ReloadData(pNVar2,(MethodInfo *)0x0);
                    /* try { // try from 035a8c6c to 036a8c73 has its CatchHandler @ 035a8cb0 */
      pNVar2 = (__this->fields)._TableView;
      if (pNVar2 != (Nekki_SF2_GUI_TableView_o *)0x0) {
                    /* try { // try from 035a8c74 to 036a8c77 has its CatchHandler @ 035a8cac */
                    /* try { // try from 035a8c78 to 036a8c7b has its CatchHandler @ 035a8ca8 */
                    /* try { // try from 035a8c7c to 036a8d13 has its CatchHandler @ 035a81ac */
        Nekki_SF2_GUI_TableView__ScrollToCell(pNVar2,0,0.0,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035a8af4 with catch @ 035a8c88 */
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 035a86b0 with catch @ 035a8c98 */
  FUN_01bab8c8();
}


// ===== public bool get_IsUserPerksExists()  [RVA 0x34A8F80]
// Nekki.SF2.GUI.Profile.UserPerksPanel$$get_IsUserPerksExists @ RVA 0x34A8F80

bool Nekki_SF2_GUI_Profile_UserPerksPanel__get_IsUserPerksExists
               (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_GUI_TableView_o *__this_00;
  
  __this_00 = (__this->fields)._TableView;
  if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    iVar1 = Nekki_SF2_GUI_TableView__NumberOfRows(__this_00,(MethodInfo *)0x0);
    return 0 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual void set_CurrentSubItem(SubItem CJNHFNHJHPE)  [RVA 0x34A8FA8]
// Nekki.SF2.GUI.Profile.UserPerksPanel$$set_CurrentSubItem @ RVA 0x34A8FA8

void Nekki_SF2_GUI_Profile_UserPerksPanel__set_CurrentSubItem
               (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,
               Nekki_SF2_GUI_Profile_SubItem_o *CJNHFNHJHPE,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  Nekki_SF2_GUI_Profile_SubItem_o *x;
  Nekki_SF2_GUI_Profile_SubItem_o **ppNVar4;
  
  if ((DAT_04568511 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo);
    DAT_04568511 = 1;
  }
  ppNVar4 = &(__this->fields).PFKHDCBBDOG;
  *ppNVar4 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppNVar4,CJNHFNHJHPE);
  x = *ppNVar4;
  if (x != (Nekki_SF2_GUI_Profile_SubItem_o *)0x0) {
    bVar2 = (Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo->_2).naturalAligment;
    if (bVar2 <= (x->klass->_2).naturalAligment) {
      if ((x->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Profile_PerkSubItem_TypeInfo) {
        x = (Nekki_SF2_GUI_Profile_SubItem_o *)0x0;
      }
      goto LAB_035a9048;
    }
  }
  x = (Nekki_SF2_GUI_Profile_SubItem_o *)0x0;
LAB_035a9048:
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
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
  return;
}

