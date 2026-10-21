// TypeDefIndex 209
// Namespace: Nekki.SF2.GUI.Profile
// public class SealsController : ItemsController
// Fields:
//   private SealsController.KEEJFFPGHMN _OnCellSelected; // 0x40
//   private List<IGFGDDANEPE> BMEJJFBFFIH; // 0x48
//   private float PFDLJJBHELJ; // 0x50

// ===== protected override string OHAHNMOBOOP()  [RVA 0x311DDD4]
// Nekki.SF2.GUI.Profile.SealsController$$OHAHNMOBOOP @ RVA 0x311DDD4

System_String_o *
Nekki_SF2_GUI_Profile_SealsController__OHAHNMOBOOP
          (Nekki_SF2_GUI_Profile_SealsController_o *__this,MethodInfo *method)

{
  if ((DAT_04566607 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11501/*"SEALS_SLIDER"*/);
    DAT_04566607 = 1;
  }
  return StringLiteral_11501/*"SEALS_SLIDER"*/;
}


// ===== public override void MarkItemsAsViewed()  [RVA 0x311DE14]
// Nekki.SF2.GUI.Profile.SealsController$$MarkItemsAsViewed @ RVA 0x311DE14

void Nekki_SF2_GUI_Profile_SealsController__MarkItemsAsViewed
               (Nekki_SF2_GUI_Profile_SealsController_o *__this,MethodInfo *method)

{
  bool bVar1;
  GGHCLMEFIGO_o *__this_00;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  Roster_o *pAVar2;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04566608 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_11751/*"Seal"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566608 = 1;
    method = extraout_x1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
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
  pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (((pAVar2 != (Roster_o *)0x0) &&
      (__this_00 = (pAVar2->fields).OIDPLCLELEN, __this_00 != (GGHCLMEFIGO_o *)0x0)) &&
     (__this_01 = GGHCLMEFIGO__IAHEDEMPGPE
                            (__this_00,StringLiteral_11751/*"Seal"*/,StringLiteral_1/*""*/,true,(MethodInfo *)0x0),
     __this_01 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
    local_50.fields._list = local_68.fields._list;
    local_50.fields._current = local_68.fields._current;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
      if (!bVar1) break;
      if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (local_50.fields._current[1].monitor == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      HOOAAGABMBL__GEBIJFANLGH(local_50.fields._current[1].monitor,false,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_50,Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
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
    pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar2 != (Roster_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar2,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public SealsController.KEEJFFPGHMN get_OnCellSelected()  [RVA 0x311E084]
// Nekki.SF2.GUI.Profile.SealsController$$get_OnCellSelected @ RVA 0x311E084

Nekki_SF2_GUI_Profile_SealsController_KEEJFFPGHMN_o *
Nekki_SF2_GUI_Profile_SealsController__get_OnCellSelected
          (Nekki_SF2_GUI_Profile_SealsController_o *__this,MethodInfo *method)

{
  return (__this->fields)._OnCellSelected;
}


// ===== public override bool SelectTopSubItem()  [RVA 0x311E08C]
// Nekki.SF2.GUI.Profile.SealsController$$SelectTopSubItem @ RVA 0x311E08C

bool Nekki_SF2_GUI_Profile_SealsController__SelectTopSubItem
               (Nekki_SF2_GUI_Profile_SealsController_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  
  LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  bVar1 = TutorialExtension__MNKFDLHJPAA(LAIGNDBNBJG,(MethodInfo *)0x0);
  if (!bVar1) {
    Nekki_SF2_GUI_Profile_ItemsController__ScrollToPrevCell
              ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this,0.3,(MethodInfo *)0x0);
  }
  return (bool)(~bVar1 & 1);
}


// ===== protected override void EHPMHOHOPGA(TableViewCell AHICPBEJIKJ)  [RVA 0x311E0D8]
// Nekki.SF2.GUI.Profile.SealsController$$EHPMHOHOPGA @ RVA 0x311E0D8

void Nekki_SF2_GUI_Profile_SealsController__EHPMHOHOPGA
               (Nekki_SF2_GUI_Profile_SealsController_o *__this,
               Nekki_SF2_GUI_TableViewCell_o *AHICPBEJIKJ,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Nekki_SF2_GUI_Profile_SealsController_KEEJFFPGHMN_o *__this_00;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  Nekki_SF2_GUI_TableView_o *pNVar3;
  KELJDKIIHMM_o *pKVar4;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_48;
  
  if ((DAT_04566609 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_TableViewCell>_get_Values__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_TableViewCell>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_TableViewCell>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_TableViewCell>_get_Current__
                );
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_SealsTableViewCell_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<SealsTableViewCell>_Invoke__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<int,_TableViewCell>_GetEnumerator__
                );
    DAT_04566609 = 1;
  }
  local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._currentValue = (Il2CppObject *)0x0;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)AHICPBEJIKJ,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  Nekki_SF2_GUI_Profile_ItemsController__EHPMHOHOPGA
            ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this,AHICPBEJIKJ,(MethodInfo *)0x0);
  if (AHICPBEJIKJ != (Nekki_SF2_GUI_TableViewCell_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_Profile_SealsTableViewCell_TypeInfo->_2).naturalAligment;
    if (((AHICPBEJIKJ->klass->_2).naturalAligment < bVar1) ||
       ((AHICPBEJIKJ->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Profile_SealsTableViewCell_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(AHICPBEJIKJ);
    }
  }
  __this_00 = (__this->fields)._OnCellSelected;
  if (__this_00 != (Nekki_SF2_GUI_Profile_SealsController_KEEJFFPGHMN_o *)0x0) {
    UnityEngine_Events_UnityEvent<object>__Invoke
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,(Il2CppObject *)AHICPBEJIKJ,
               Method_UnityEngine_Events_UnityEvent<SealsTableViewCell>_Invoke__);
    pNVar3 = (__this->fields).super._TableView;
    if ((((pNVar3 != (Nekki_SF2_GUI_TableView_o *)0x0) &&
         (pKVar4 = (pNVar3->fields)._LBHOKEBOIFN_k__BackingField, pKVar4 != (KELJDKIIHMM_o *)0x0))
        && (__this_01 = (System_Collections_Generic_Dictionary_int__object__o *)
                        (pKVar4->fields)._IKBFEDMFOMJ_k__BackingField,
           __this_01 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) &&
       (__this_02 = System_Collections_Generic_Dictionary<int,_object>__get_Values
                              (__this_01,
                               Method_System_Collections_Generic_Dictionary<int,_TableViewCell>_get_Values__
                              ),
       __this_02 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_ValueCollection<int,_object>__GetEnumerator
                (&local_48,__this_02,
                 Method_System_Collections_Generic_Dictionary_ValueCollection<int,_TableViewCell>_GetEnumerator__
                );
      while (bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_object>__MoveNext
                               (&local_48,
                                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_TableViewCell>_MoveNext__
                               ), bVar2) {
        if (local_48.fields._currentValue == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (*(local_48.fields._currentValue)->klass->vtable[0xc].methodPtr)
                  (0x3f000000,local_48.fields._currentValue,
                   (local_48.fields._currentValue)->klass->vtable[0xc].method);
      }
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_object>__Dispose
                (&local_48,
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_TableViewCell>_Dispose__
                );
      if (AHICPBEJIKJ != (Nekki_SF2_GUI_TableViewCell_o *)0x0) {
        (*(AHICPBEJIKJ->klass->vtable)._12_set_Opacity.methodPtr)
                  (0x3f800000,AHICPBEJIKJ,(AHICPBEJIKJ->klass->vtable)._12_set_Opacity.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x311E33C]
// Nekki.SF2.GUI.Profile.SealsController$$.ctor @ RVA 0x311E33C

void Nekki_SF2_GUI_Profile_SealsController___ctor
               (Nekki_SF2_GUI_Profile_SealsController_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_SealsController_KEEJFFPGHMN_o *__this_00;
  Nekki_SF2_GUI_Profile_SealsController_KEEJFFPGHMN_o **ppNVar1;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_01;
  System_Collections_Generic_List_IGFGDDANEPE__o **ppSVar2;
  MethodInfo *extraout_x1;
  undefined1 auVar3 [16];
  
  if ((DAT_0456660a & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Profile_SealsController_KEEJFFPGHMN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IGFGDDANEPE>_TypeInfo);
    DAT_0456660a = 1;
    method = extraout_x1;
  }
  auVar3 = thunk_FUN_01bda818(Nekki_SF2_GUI_Profile_SealsController_KEEJFFPGHMN_TypeInfo,method);
  __this_00 = auVar3._0_8_;
  Nekki_SF2_GUI_Profile_SealsController_KEEJFFPGHMN___ctor(__this_00,auVar3._8_8_);
  ppNVar1 = &(__this->fields)._OnCellSelected;
  *ppNVar1 = __this_00;
  thunk_FUN_01c20e04(ppNVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_IGFGDDANEPE__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IGFGDDANEPE>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<IGFGDDANEPE>__ctor__);
  ppSVar2 = &(__this->fields).BMEJJFBFFIH;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  Nekki_SF2_GUI_Profile_ItemsController___ctor
            ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override int NumberOfRowsInTableView(TableView GECPJPBIBPN)  [RVA 0x311E440]
// Nekki.SF2.GUI.Profile.SealsController$$NumberOfRowsInTableView @ RVA 0x311E440

int32_t Nekki_SF2_GUI_Profile_SealsController__NumberOfRowsInTableView
                  (Nekki_SF2_GUI_Profile_SealsController_o *__this,
                  Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,MethodInfo *method)

{
  System_Collections_Generic_List_IGFGDDANEPE__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = GECPJPBIBPN;
  auVar2._0_8_ = __this;
  if ((DAT_0456660b & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_get_Count__);
    DAT_0456660b = 1;
  }
  pSVar1 = (__this->fields).BMEJJFBFFIH;
  if (pSVar1 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public override TableViewCell CellForRowInTableView(TableView GECPJPBIBPN, int HAJDGFPLGNK)  [RVA 0x311E488]
// Nekki.SF2.GUI.Profile.SealsController$$CellForRowInTableView @ RVA 0x311E488

Nekki_SF2_GUI_TableViewCell_o *
Nekki_SF2_GUI_Profile_SealsController__CellForRowInTableView
          (Nekki_SF2_GUI_Profile_SealsController_o *__this,Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,
          int32_t HAJDGFPLGNK,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_o *__this_00;
  Nekki_SF2_GUI_Profile_SealsTableViewCell_o *__this_01;
  Il2CppObject *pIVar1;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_02;
  
  if ((DAT_0456660c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_get_Item__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TableView_ReusableCellForRow<SealsTableViewCell>__);
    DAT_0456660c = 1;
  }
  __this_00 = (__this->fields).super._TableView;
  if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    __this_01 = (Nekki_SF2_GUI_Profile_SealsTableViewCell_o *)
                Nekki_SF2_GUI_TableView__ReusableCellForRow<object>
                          (__this_00,HAJDGFPLGNK,
                           Method_Nekki_SF2_GUI_TableView_ReusableCellForRow<SealsTableViewCell>__);
    __this_02 = (__this->fields).BMEJJFBFFIH;
    if (((__this_02 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) &&
        (pIVar1 = System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_02,HAJDGFPLGNK,
                             Method_System_Collections_Generic_List<IGFGDDANEPE>_get_Item__),
        pIVar1 != (Il2CppObject *)0x0)) &&
       (__this_01 != (Nekki_SF2_GUI_Profile_SealsTableViewCell_o *)0x0)) {
      Nekki_SF2_GUI_Profile_SealsTableViewCell__SetItemInfo
                (__this_01,pIVar1[1].monitor,(MethodInfo *)0x0);
      return (Nekki_SF2_GUI_TableViewCell_o *)__this_01;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void BACIFGCANEA()  [RVA 0x311E530]
// Nekki.SF2.GUI.Profile.SealsController$$BACIFGCANEA @ RVA 0x311E530

void Nekki_SF2_GUI_Profile_SealsController__BACIFGCANEA
               (Nekki_SF2_GUI_Profile_SealsController_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  int32_t iVar4;
  GGHCLMEFIGO_o *__this_00;
  System_Collections_Generic_List_IGFGDDANEPE__o *pSVar5;
  Roster_o *pAVar6;
  IGFGDDANEPE_array *pIVar7;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_0456660d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_11751/*"Seal"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456660d = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  pSVar5 = (__this->fields).BMEJJFBFFIH;
  if (pSVar5 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
    iVar4 = (pSVar5->fields)._size;
    (pSVar5->fields)._size = 0;
    (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
    if (0 < iVar4) {
      System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,iVar4,(MethodInfo *)0x0);
    }
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
    pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (((pAVar6 != (Roster_o *)0x0) &&
        (__this_00 = (pAVar6->fields).OIDPLCLELEN, __this_00 != (GGHCLMEFIGO_o *)0x0)) &&
       (pSVar5 = GGHCLMEFIGO__IAHEDEMPGPE
                           (__this_00,StringLiteral_11751/*"Seal"*/,StringLiteral_1/*""*/,true,(MethodInfo *)0x0),
       pSVar5 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0)) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,(System_Collections_Generic_List_object__o *)pSVar5,
                 Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      while( true ) {
        do {
          bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_50,
                             Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__
                            );
          item = local_50.fields._current;
          if (!bVar3) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
            return;
          }
          if ((IGFGDDANEPE_o *)local_50.fields._current == (IGFGDDANEPE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          iVar4 = IGFGDDANEPE__LDJLMEFOMLG
                            ((IGFGDDANEPE_o *)local_50.fields._current,(MethodInfo *)0x0);
          lVar2 = Method_System_Collections_Generic_List<IGFGDDANEPE>_Add__;
        } while (iVar4 < 1);
        pSVar5 = (__this->fields).BMEJJFBFFIH;
        if (pSVar5 == (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar7 = (pSVar5->fields)._items;
        (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
        if (pIVar7 == (IGFGDDANEPE_array *)0x0) break;
        uVar1 = (pSVar5->fields)._size;
        if (uVar1 < (uint)pIVar7->max_length) {
          (pSVar5->fields)._size = uVar1 + 1;
          pIVar7->m_Items[(int)uVar1] = (IGFGDDANEPE_o *)item;
          thunk_FUN_01c20e04(pIVar7->m_Items + (int)uVar1,item);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar5,item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool SelectBottomSubItem()  [RVA 0x311E7F4]
// Nekki.SF2.GUI.Profile.SealsController$$SelectBottomSubItem @ RVA 0x311E7F4

bool Nekki_SF2_GUI_Profile_SealsController__SelectBottomSubItem
               (Nekki_SF2_GUI_Profile_SealsController_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  
  LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  bVar1 = TutorialExtension__MNKFDLHJPAA(LAIGNDBNBJG,(MethodInfo *)0x0);
  if (!bVar1) {
    Nekki_SF2_GUI_Profile_ItemsController__ScrollToNextCell
              ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this,0.3,(MethodInfo *)0x0);
  }
  return (bool)(~bVar1 & 1);
}


// ===== public override void Init()  [RVA 0x311E840]
// Nekki.SF2.GUI.Profile.SealsController$$Init @ RVA 0x311E840

void Nekki_SF2_GUI_Profile_SealsController__Init
               (Nekki_SF2_GUI_Profile_SealsController_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_ItemsController__Init
            ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Profile_ItemsController__MBMAFJIBBAB
            ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public List<IGFGDDANEPE> get_SealItems()  [RVA 0x311E860]
// Nekki.SF2.GUI.Profile.SealsController$$get_SealItems @ RVA 0x311E860

System_Collections_Generic_List_IGFGDDANEPE__o *
Nekki_SF2_GUI_Profile_SealsController__get_SealItems
          (Nekki_SF2_GUI_Profile_SealsController_o *__this,MethodInfo *method)

{
  return (__this->fields).BMEJJFBFFIH;
}


// ===== public override bool ScrollToItem(string JEPIGCLHAMI, float GGMALJLKHHB)  [RVA 0x311E868]
// Nekki.SF2.GUI.Profile.SealsController$$ScrollToItem @ RVA 0x311E868

bool Nekki_SF2_GUI_Profile_SealsController__ScrollToItem
               (Nekki_SF2_GUI_Profile_SealsController_o *__this,System_String_o *JEPIGCLHAMI,
               float GGMALJLKHHB,MethodInfo *method)

{
  int32_t JDEFJPHCNMM;
  int32_t iVar1;
  Nekki_SF2_GUI_TableView_o *pNVar2;
  
  JDEFJPHCNMM = Nekki_SF2_GUI_Profile_SealsController__DJNMONPCOAP(__this,JEPIGCLHAMI,method);
  if (JDEFJPHCNMM < 0) {
    return false;
  }
  pNVar2 = (__this->fields).super._TableView;
  if (pNVar2 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    iVar1 = Nekki_SF2_GUI_TableView__NumberOfRows(pNVar2,(MethodInfo *)0x0);
    if (iVar1 <= JDEFJPHCNMM) {
      return false;
    }
    pNVar2 = (__this->fields).super._TableView;
    if (pNVar2 != (Nekki_SF2_GUI_TableView_o *)0x0) {
      Nekki_SF2_GUI_TableView__ScrollToCell(pNVar2,JDEFJPHCNMM,GGMALJLKHHB,(MethodInfo *)0x0);
      return true;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private int DJNMONPCOAP(string NMLDKOEOOLL)  [RVA 0x311E8D8]
// Nekki.SF2.GUI.Profile.SealsController$$DJNMONPCOAP @ RVA 0x311E8D8

int32_t Nekki_SF2_GUI_Profile_SealsController__DJNMONPCOAP
                  (Nekki_SF2_GUI_Profile_SealsController_o *__this,System_String_o *NMLDKOEOOLL,
                  MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_00;
  Il2CppObject *pIVar3;
  int index;
  
  if ((DAT_0456660e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_get_Item__);
    DAT_0456660e = 1;
  }
  __this_00 = (__this->fields).BMEJJFBFFIH;
  if (__this_00 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
    iVar1 = (__this_00->fields)._size;
    if (iVar1 < 1) {
      return -1;
    }
    index = 0;
    do {
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<IGFGDDANEPE>_get_Item__);
      if (pIVar3 == (Il2CppObject *)0x0) break;
      bVar2 = System_String__op_Equality
                        ((System_String_o *)pIVar3[1].klass,NMLDKOEOOLL,(MethodInfo *)0x0);
      if (bVar2) {
        return index;
      }
      if (iVar1 + -1 == index) {
        return -1;
      }
      __this_00 = (__this->fields).BMEJJFBFFIH;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override float SizeForRowInTableView(TableView GECPJPBIBPN, int HAJDGFPLGNK)  [RVA 0x311E98C]
// Nekki.SF2.GUI.Profile.SealsController$$SizeForRowInTableView @ RVA 0x311E98C

float Nekki_SF2_GUI_Profile_SealsController__SizeForRowInTableView
                (Nekki_SF2_GUI_Profile_SealsController_o *__this,
                Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,int32_t HAJDGFPLGNK,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  float fVar1;
  UnityEngine_Rect_o UVar2;
  
  if ((DAT_0456660f & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo,GECPJPBIBPN,HAJDGFPLGNK);
    DAT_0456660f = 1;
  }
  fVar1 = (__this->fields).PFDLJJBHELJ;
  if (fVar1 <= 0.0) {
    __this_00 = (__this->fields).super._CellPrefab;
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

