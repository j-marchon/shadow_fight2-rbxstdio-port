// TypeDefIndex 223
// Namespace: Nekki.SF2.GUI.Profile
// public class AchievementsController : ItemsController
// Fields:
//   private AchievementsController.GBDHPKJIHJH _OnCellSelected; // 0x40
//   private List<MGNDHCBAPEN<KMJDCOABCCG, int>> OBNPKCCKLIJ; // 0x48
//   private float PFDLJJBHELJ; // 0x50

// ===== public bool IsAchievementWithReward()  [RVA 0x31244F4]
// Nekki.SF2.GUI.Profile.AchievementsController$$IsAchievementWithReward @ RVA 0x31244F4

bool Nekki_SF2_GUI_Profile_AchievementsController__IsAchievementWithReward
               (Nekki_SF2_GUI_Profile_AchievementsController_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *__this_00;
  Il2CppObject *pIVar2;
  int index;
  
                    /* catch() { ... } // from try @ 032244e4 with catch @ 032244f8 */
                    /* try { // try from 03224500 to 03324567 has its CatchHandler @ 0322457c */
  if ((DAT_04566649 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_get_Count__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_get_Item__);
    DAT_04566649 = 1;
  }
  __this_00 = (__this->fields).OBNPKCCKLIJ;
  if (__this_00 != (System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *)0x0) {
    index = 0;
    do {
      iVar1 = (__this_00->fields)._size;
      if (iVar1 <= index) {
LAB_03224580:
        return index < iVar1;
      }
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_get_Item__
                         );
      if ((pIVar2 == (Il2CppObject *)0x0) || (pIVar2[1].klass == (Il2CppClass *)0x0)) break;
                    /* try { // try from 03224568 to 03324573 has its CatchHandler @ 0322411c */
      if (*(char *)((long)&((pIVar2[1].klass)->_1).element_class + 3) != '\0') goto LAB_03224580;
      __this_00 = (__this->fields).OBNPKCCKLIJ;
                    /* try { // try from 03224574 to 0332457b has its CatchHandler @ 0322457c */
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03224500 with catch @ 0322457c
                       catch(type#2 @ 00000000) { ... } // from try @ 03224574 with catch @ 0322457c
                        */
  FUN_01bab8c8();
}


// ===== protected override string OHAHNMOBOOP()  [RVA 0x3124598]
// Nekki.SF2.GUI.Profile.AchievementsController$$OHAHNMOBOOP @ RVA 0x3124598

System_String_o *
Nekki_SF2_GUI_Profile_AchievementsController__OHAHNMOBOOP
          (Nekki_SF2_GUI_Profile_AchievementsController_o *__this,MethodInfo *method)

{
  if ((DAT_0456664a & 1) == 0) {
    FUN_01bab630(&StringLiteral_2615/*"ACHIEVEMENT_SLIDER"*/);
    DAT_0456664a = 1;
  }
  return StringLiteral_2615/*"ACHIEVEMENT_SLIDER"*/;
}


// ===== public override TableViewCell CellForRowInTableView(TableView GECPJPBIBPN, int HAJDGFPLGNK)  [RVA 0x31245D8]
// Nekki.SF2.GUI.Profile.AchievementsController$$CellForRowInTableView @ RVA 0x31245D8

Nekki_SF2_GUI_TableViewCell_o *
Nekki_SF2_GUI_Profile_AchievementsController__CellForRowInTableView
          (Nekki_SF2_GUI_Profile_AchievementsController_o *__this,
          Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,int32_t HAJDGFPLGNK,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_o *__this_00;
  Nekki_SF2_GUI_Profile_AchievementCell_o *__this_01;
  Il2CppObject *pIVar1;
  System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *pSVar2;
  Il2CppClass *IHEPDIFDBGK;
  
  if ((DAT_0456664b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_get_Item__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TableView_ReusableCellForRow<AchievementCell>__);
    DAT_0456664b = 1;
  }
  __this_00 = (__this->fields).super._TableView;
  if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    __this_01 = (Nekki_SF2_GUI_Profile_AchievementCell_o *)
                Nekki_SF2_GUI_TableView__ReusableCellForRow<object>
                          (__this_00,HAJDGFPLGNK,
                           Method_Nekki_SF2_GUI_TableView_ReusableCellForRow<AchievementCell>__);
    pSVar2 = (__this->fields).OBNPKCCKLIJ;
    if (pSVar2 != (System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *)0x0) {
      pIVar1 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,HAJDGFPLGNK,
                          Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_get_Item__
                         );
      if ((pIVar1 != (Il2CppObject *)0x0) &&
         (pSVar2 = (__this->fields).OBNPKCCKLIJ,
         pSVar2 != (System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *)0x0)) {
        IHEPDIFDBGK = pIVar1[1].klass;
        pIVar1 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar2,HAJDGFPLGNK,
                            Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_get_Item__
                           );
        if ((pIVar1 != (Il2CppObject *)0x0) &&
           (__this_01 != (Nekki_SF2_GUI_Profile_AchievementCell_o *)0x0)) {
          Nekki_SF2_GUI_Profile_AchievementCell__Init
                    (__this_01,(KMJDCOABCCG_o *)IHEPDIFDBGK,*(int32_t *)&pIVar1[1].monitor,
                     (JEIEEMKCNOJ_o *)__this,(MethodInfo *)0x0);
          return (Nekki_SF2_GUI_TableViewCell_o *)__this_01;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override int NumberOfRowsInTableView(TableView GECPJPBIBPN)  [RVA 0x31246B0]
// Nekki.SF2.GUI.Profile.AchievementsController$$NumberOfRowsInTableView @ RVA 0x31246B0

int32_t Nekki_SF2_GUI_Profile_AchievementsController__NumberOfRowsInTableView
                  (Nekki_SF2_GUI_Profile_AchievementsController_o *__this,
                  Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,MethodInfo *method)

{
  System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = GECPJPBIBPN;
  auVar2._0_8_ = __this;
  if ((DAT_0456664c & 1) == 0) {
    auVar2 = FUN_01bab630(&
                          Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_get_Count__
                         );
    DAT_0456664c = 1;
  }
  pSVar1 = (__this->fields).OBNPKCCKLIJ;
  if (pSVar1 != (System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}


// ===== public bool ScrollToItemWithReward(float PNEIGGOFIOA = 0)  [RVA 0x31246F8]
// Nekki.SF2.GUI.Profile.AchievementsController$$ScrollToItemWithReward @ RVA 0x31246F8

/* WARNING: Type propagation algorithm not settling */

bool Nekki_SF2_GUI_Profile_AchievementsController__ScrollToItemWithReward
               (Nekki_SF2_GUI_Profile_AchievementsController_o *__this,float PNEIGGOFIOA,
               MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *__this_00;
  Il2CppObject *pIVar2;
  Nekki_SF2_GUI_TableView_o *pNVar3;
  int index;
  
  if ((DAT_0456664d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_get_Count__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_get_Item__);
    DAT_0456664d = 1;
  }
  __this_00 = (__this->fields).OBNPKCCKLIJ;
  if (__this_00 != (System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        return false;
      }
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_get_Item__
                         );
      if ((pIVar2 == (Il2CppObject *)0x0) || (pIVar2[1].klass == (Il2CppClass *)0x0)) break;
      if (*(char *)((long)&((pIVar2[1].klass)->_1).element_class + 3) != '\0') {
        if (index < 0) {
          return false;
        }
        pNVar3 = (__this->fields).super._TableView;
        if (pNVar3 != (Nekki_SF2_GUI_TableView_o *)0x0) {
          iVar1 = Nekki_SF2_GUI_TableView__NumberOfRows(pNVar3,(MethodInfo *)0x0);
          if (iVar1 <= index) {
            return false;
          }
          pNVar3 = (__this->fields).super._TableView;
          if (pNVar3 != (Nekki_SF2_GUI_TableView_o *)0x0) {
            Nekki_SF2_GUI_TableView__ScrollToCell(pNVar3,index,PNEIGGOFIOA,(MethodInfo *)0x0);
            return true;
          }
        }
        break;
      }
      __this_00 = (__this->fields).OBNPKCCKLIJ;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void Free()  [RVA 0x31247DC]
// Nekki.SF2.GUI.Profile.AchievementsController$$Free @ RVA 0x31247DC

void Nekki_SF2_GUI_Profile_AchievementsController__Free
               (Nekki_SF2_GUI_Profile_AchievementsController_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_ItemsController__Free
            ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public AchievementCell GetCellByAchievement(KMJDCOABCCG HKCIMMBPDLP)  [RVA 0x31247E4]
// Nekki.SF2.GUI.Profile.AchievementsController$$GetCellByAchievement @ RVA 0x31247E4

Nekki_SF2_GUI_Profile_AchievementCell_o *
Nekki_SF2_GUI_Profile_AchievementsController__GetCellByAchievement
          (Nekki_SF2_GUI_Profile_AchievementsController_o *__this,KMJDCOABCCG_o *HKCIMMBPDLP,
          MethodInfo *method)

{
  byte bVar1;
  int32_t DPJIDNBJIBG;
  int32_t iVar2;
  Nekki_SF2_GUI_TableView_o *pNVar3;
  Nekki_SF2_GUI_Profile_AchievementCell_o *pNVar4;
  KELJDKIIHMM_o *__this_00;
  
  if ((DAT_0456664e & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Profile_AchievementCell_TypeInfo);
    DAT_0456664e = 1;
  }
  DPJIDNBJIBG = Nekki_SF2_GUI_Profile_AchievementsController__AOIGDMONJNJ(__this,HKCIMMBPDLP,method)
  ;
  if (DPJIDNBJIBG < 0) {
    pNVar4 = (Nekki_SF2_GUI_Profile_AchievementCell_o *)0x0;
  }
  else {
    pNVar3 = (__this->fields).super._TableView;
    if (pNVar3 == (Nekki_SF2_GUI_TableView_o *)0x0) {
LAB_032248ac:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar2 = Nekki_SF2_GUI_TableView__NumberOfRows(pNVar3,(MethodInfo *)0x0);
    pNVar4 = (Nekki_SF2_GUI_Profile_AchievementCell_o *)0x0;
    if (DPJIDNBJIBG < iVar2) {
      pNVar3 = (__this->fields).super._TableView;
      if ((pNVar3 == (Nekki_SF2_GUI_TableView_o *)0x0) ||
         (__this_00 = (pNVar3->fields)._LBHOKEBOIFN_k__BackingField,
         __this_00 == (KELJDKIIHMM_o *)0x0)) goto LAB_032248ac;
      pNVar4 = (Nekki_SF2_GUI_Profile_AchievementCell_o *)
               KELJDKIIHMM__KHGEMIEPBJB(__this_00,DPJIDNBJIBG,(MethodInfo *)0x0);
      if (pNVar4 != (Nekki_SF2_GUI_Profile_AchievementCell_o *)0x0) {
        bVar1 = (Nekki_SF2_GUI_Profile_AchievementCell_TypeInfo->_2).naturalAligment;
        if (((pNVar4->klass->_2).naturalAligment < bVar1) ||
           ((pNVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)Nekki_SF2_GUI_Profile_AchievementCell_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64();
        }
      }
    }
  }
  return pNVar4;
}


// ===== private int PMEHOIIMOHB(string LHPKDPOMOBM)  [RVA 0x312495C]
// Nekki.SF2.GUI.Profile.AchievementsController$$PMEHOIIMOHB @ RVA 0x312495C

int32_t Nekki_SF2_GUI_Profile_AchievementsController__PMEHOIIMOHB
                  (Nekki_SF2_GUI_Profile_AchievementsController_o *__this,
                  System_String_o *LHPKDPOMOBM,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *__this_00;
  Il2CppObject *pIVar3;
  int index;
  
  if ((DAT_0456664f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_get_Count__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_get_Item__);
    DAT_0456664f = 1;
  }
  __this_00 = (__this->fields).OBNPKCCKLIJ;
  if (__this_00 != (System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *)0x0) {
    iVar1 = (__this_00->fields)._size;
    if (iVar1 < 1) {
      return -1;
    }
    index = 0;
    do {
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_get_Item__
                         );
      if ((pIVar3 == (Il2CppObject *)0x0) || (pIVar3[1].klass == (Il2CppClass *)0x0)) break;
      bVar2 = System_String__op_Equality
                        (((pIVar3[1].klass)->_1).byval_arg.data,LHPKDPOMOBM,(MethodInfo *)0x0);
      if (bVar2) {
        return index;
      }
      if (iVar1 + -1 == index) {
        return -1;
      }
      __this_00 = (__this->fields).OBNPKCCKLIJ;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void BACIFGCANEA()  [RVA 0x3124A18]
// Nekki.SF2.GUI.Profile.AchievementsController$$BACIFGCANEA @ RVA 0x3124A18

void Nekki_SF2_GUI_Profile_AchievementsController__BACIFGCANEA
               (Nekki_SF2_GUI_Profile_AchievementsController_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *pIVar2;
  System_Collections_Generic_List_KMJDCOABCCG__o *IHEPDIFDBGK;
  MethodInfo *in_x4;
  System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *pSVar3;
  MGNPHCAAEIO_FGHBAEIKNBF_o *pMVar4;
  ACHLOMELAJE_o *pAVar5;
  FEPPOONJCGI_o *pFVar6;
  System_Collections_Generic_List_KFGGMKHNCGM__o *__this_01;
  int index;
  System_Collections_Generic_List_PANJAHAFBMD__o *collection;
  System_Collections_Generic_List_EKGDLIKHEMA__o *CNDKPFMIPHH;
  int32_t iVar7;
  Il2CppClass *a;
  int index_00;
  System_Collections_Generic_IEnumerable_T__o *collection_00;
  
  if ((DAT_04566650 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PANJAHAFBMD>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PANJAHAFBMD>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PANJAHAFBMD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KFGGMKHNCGM>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PANJAHAFBMD>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KFGGMKHNCGM>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<PANJAHAFBMD>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<KMJDCOABCCG>_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566650 = 1;
  }
  pSVar3 = (__this->fields).OBNPKCCKLIJ;
  if (pSVar3 != (System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *)0x0) {
    iVar7 = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
    if (0 < iVar7) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar7,(MethodInfo *)0x0);
    }
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pMVar4 = MGNPHCAAEIO_TypeInfo->static_fields->AIHLHCIPKJJ;
    if (pMVar4 != (MGNPHCAAEIO_FGHBAEIKNBF_o *)0x0) {
      __this_01 = (pMVar4->fields).BJGBOCFLEGO;
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
      pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if ((pAVar5 != (ACHLOMELAJE_o *)0x0) &&
         (pFVar6 = (pAVar5->fields).IMJJJJJMMHL, pFVar6 != (FEPPOONJCGI_o *)0x0)) {
        collection = (pFVar6->fields).MCDCFBOBJGI;
        __this_00 = (System_Collections_Generic_List_object__o *)
                    thunk_FUN_01bda818(System_Collections_Generic_List<PANJAHAFBMD>_TypeInfo);
        System_Collections_Generic_List<object>___ctor
                  (__this_00,(System_Collections_Generic_IEnumerable_T__o *)collection,
                   Method_System_Collections_Generic_List<PANJAHAFBMD>__ctor__);
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (((pAVar5 != (ACHLOMELAJE_o *)0x0) &&
            (pFVar6 = (pAVar5->fields).IMJJJJJMMHL, pFVar6 != (FEPPOONJCGI_o *)0x0)) &&
           (__this_01 != (System_Collections_Generic_List_KFGGMKHNCGM__o *)0x0)) {
          if (0 < (__this_01->fields)._size) {
            CNDKPFMIPHH = (pFVar6->fields).EBDCADCBPNM;
            index = 0;
            do {
              pIVar2 = System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)__this_01,index,
                                  Method_System_Collections_Generic_List<KFGGMKHNCGM>_get_Item__);
              if (pIVar2 == (Il2CppObject *)0x0) goto LAB_03224d40;
              a = pIVar2[1].klass;
              pIVar2 = System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)__this_01,index,
                                  Method_System_Collections_Generic_List<KFGGMKHNCGM>_get_Item__);
              if (pIVar2 == (Il2CppObject *)0x0) goto LAB_03224d40;
              collection_00 = pIVar2[1].monitor;
              IHEPDIFDBGK = (System_Collections_Generic_List_KMJDCOABCCG__o *)
                            thunk_FUN_01bda818(System_Collections_Generic_List<KMJDCOABCCG>_TypeInfo
                                              );
              System_Collections_Generic_List<object>___ctor
                        ((System_Collections_Generic_List_object__o *)IHEPDIFDBGK,collection_00,
                         Method_System_Collections_Generic_List<KMJDCOABCCG>__ctor__);
              if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03224d40;
              if (0 < (__this_00->fields)._size) {
                index_00 = 0;
                do {
                  pIVar2 = System_Collections_Generic_List<object>__get_Item
                                     (__this_00,index_00,
                                      Method_System_Collections_Generic_List<PANJAHAFBMD>_get_Item__
                                     );
                  if (pIVar2 == (Il2CppObject *)0x0) goto LAB_03224d40;
                  bVar1 = System_String__op_Equality
                                    ((System_String_o *)a,pIVar2[1].monitor,(MethodInfo *)0x0);
                  if (bVar1) {
                    iVar7 = *(int32_t *)&pIVar2[2].klass;
                    System_Collections_Generic_List<object>__RemoveAt
                              (__this_00,index_00,
                               Method_System_Collections_Generic_List<PANJAHAFBMD>_RemoveAt__);
                    goto LAB_03224cfc;
                  }
                  index_00 = index_00 + 1;
                } while (index_00 < (__this_00->fields)._size);
              }
              iVar7 = 0;
LAB_03224cfc:
              Nekki_SF2_GUI_Profile_AchievementsController__BNMNJNLMJGO
                        (__this,IHEPDIFDBGK,CNDKPFMIPHH,iVar7,in_x4);
              index = index + 1;
            } while (index < (__this_01->fields)._size);
          }
          return;
        }
      }
    }
  }
LAB_03224d40:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void Init()  [RVA 0x31250AC]
// Nekki.SF2.GUI.Profile.AchievementsController$$Init @ RVA 0x31250AC

void Nekki_SF2_GUI_Profile_AchievementsController__Init
               (Nekki_SF2_GUI_Profile_AchievementsController_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_ItemsController__Init
            ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Profile_ItemsController__MBMAFJIBBAB
            ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor()  [RVA 0x31250CC]
// Nekki.SF2.GUI.Profile.AchievementsController$$.ctor @ RVA 0x31250CC

void Nekki_SF2_GUI_Profile_AchievementsController___ctor
               (Nekki_SF2_GUI_Profile_AchievementsController_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Profile_AchievementsController_GBDHPKJIHJH_o *__this_00;
  Nekki_SF2_GUI_Profile_AchievementsController_GBDHPKJIHJH_o **ppNVar1;
  System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *__this_01;
  System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o **ppSVar2;
  MethodInfo *extraout_x1;
  undefined1 auVar3 [16];
  
  if ((DAT_04566651 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Profile_AchievementsController_GBDHPKJIHJH_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_TypeInfo);
    DAT_04566651 = 1;
    method = extraout_x1;
  }
  auVar3 = thunk_FUN_01bda818(Nekki_SF2_GUI_Profile_AchievementsController_GBDHPKJIHJH_TypeInfo,
                              method);
  __this_00 = auVar3._0_8_;
  Nekki_SF2_GUI_Profile_AchievementsController_GBDHPKJIHJH___ctor(__this_00,auVar3._8_8_);
  ppNVar1 = &(__this->fields)._OnCellSelected;
  *ppNVar1 = __this_00;
  thunk_FUN_01c20e04(ppNVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_TypeInfo
                                );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>__ctor__);
  ppSVar2 = &(__this->fields).OBNPKCCKLIJ;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  Nekki_SF2_GUI_Profile_ItemsController___ctor
            ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private int AOIGDMONJNJ(KMJDCOABCCG HKCIMMBPDLP)  [RVA 0x31248B0]
// Nekki.SF2.GUI.Profile.AchievementsController$$AOIGDMONJNJ @ RVA 0x31248B0

int32_t Nekki_SF2_GUI_Profile_AchievementsController__AOIGDMONJNJ
                  (Nekki_SF2_GUI_Profile_AchievementsController_o *__this,KMJDCOABCCG_o *HKCIMMBPDLP
                  ,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *__this_00;
  Il2CppObject *pIVar2;
  int index;
  
  if ((DAT_04566652 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_get_Count__)
    ;
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_get_Item__);
    DAT_04566652 = 1;
  }
  __this_00 = (__this->fields).OBNPKCCKLIJ;
  if (__this_00 != (System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *)0x0) {
    iVar1 = (__this_00->fields)._size;
    if (iVar1 < 1) {
      return -1;
    }
    index = 0;
    do {
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_get_Item__
                         );
      if (pIVar2 == (Il2CppObject *)0x0) break;
      if (pIVar2[1].klass == (Il2CppClass *)HKCIMMBPDLP) {
        return index;
      }
      if (iVar1 + -1 == index) {
        return -1;
      }
      __this_00 = (__this->fields).OBNPKCCKLIJ;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override float SizeForRowInTableView(TableView GECPJPBIBPN, int HAJDGFPLGNK)  [RVA 0x31251D0]
// Nekki.SF2.GUI.Profile.AchievementsController$$SizeForRowInTableView @ RVA 0x31251D0

float Nekki_SF2_GUI_Profile_AchievementsController__SizeForRowInTableView
                (Nekki_SF2_GUI_Profile_AchievementsController_o *__this,
                Nekki_SF2_GUI_TableView_o *GECPJPBIBPN,int32_t HAJDGFPLGNK,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  float fVar1;
  UnityEngine_Rect_o UVar2;
  
  if ((DAT_04566653 & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo,GECPJPBIBPN,HAJDGFPLGNK);
    DAT_04566653 = 1;
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


// ===== public override bool ScrollToItem(string JEPIGCLHAMI, float GGMALJLKHHB = 0)  [RVA 0x3125254]
// Nekki.SF2.GUI.Profile.AchievementsController$$ScrollToItem @ RVA 0x3125254

bool Nekki_SF2_GUI_Profile_AchievementsController__ScrollToItem
               (Nekki_SF2_GUI_Profile_AchievementsController_o *__this,System_String_o *JEPIGCLHAMI,
               float GGMALJLKHHB,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t JDEFJPHCNMM;
  int32_t iVar3;
  Nekki_SF2_GUI_TableView_o *pNVar4;
  KELJDKIIHMM_o *__this_00;
  Nekki_SF2_GUI_TableViewCell_o *x;
  long *plVar5;
  
  if ((DAT_04566654 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo);
    DAT_04566654 = 1;
  }
  JDEFJPHCNMM = Nekki_SF2_GUI_Profile_AchievementsController__PMEHOIIMOHB(__this,JEPIGCLHAMI,method)
  ;
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
        x = KELJDKIIHMM__KHGEMIEPBJB(__this_00,JDEFJPHCNMM,(MethodInfo *)0x0);
        if (x != (Nekki_SF2_GUI_TableViewCell_o *)0x0) {
          bVar1 = (Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo->_2).naturalAligment;
          if (((x->klass->_2).naturalAligment < bVar1) ||
             ((x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(x);
          }
        }
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          if ((x == (Nekki_SF2_GUI_TableViewCell_o *)0x0) ||
             (plVar5 = (long *)(*x->klass[1]._1.image)(x,x->klass[1]._1.gc_desc),
             plVar5 == (long *)0x0)) goto LAB_032253a8;
          (**(code **)(*plVar5 + 0x4e8))(plVar5,*(undefined8 *)(*plVar5 + 0x4f0));
        }
        return true;
      }
    }
  }
LAB_032253a8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public AchievementsController.GBDHPKJIHJH get_OnCellSelected()  [RVA 0x31253B4]
// Nekki.SF2.GUI.Profile.AchievementsController$$get_OnCellSelected @ RVA 0x31253B4

Nekki_SF2_GUI_Profile_AchievementsController_GBDHPKJIHJH_o *
Nekki_SF2_GUI_Profile_AchievementsController__get_OnCellSelected
          (Nekki_SF2_GUI_Profile_AchievementsController_o *__this,MethodInfo *method)

{
  return (__this->fields)._OnCellSelected;
}


// ===== private void BNMNJNLMJGO(List<KMJDCOABCCG> IHEPDIFDBGK, List<EKGDLIKHEMA> CNDKPFMIPHH, int MLNEFBDGKEK)  [RVA 0x3124D44]
// Nekki.SF2.GUI.Profile.AchievementsController$$BNMNJNLMJGO @ RVA 0x3124D44

void Nekki_SF2_GUI_Profile_AchievementsController__BNMNJNLMJGO
               (Nekki_SF2_GUI_Profile_AchievementsController_o *__this,
               System_Collections_Generic_List_KMJDCOABCCG__o *IHEPDIFDBGK,
               System_Collections_Generic_List_EKGDLIKHEMA__o *CNDKPFMIPHH,int32_t MLNEFBDGKEK,
               MethodInfo *method)

{
  int32_t JGGJNLLANAE;
  uint uVar1;
  long lVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  MGNDHCBAPEN_KMJDCOABCCG__int__o *pMVar5;
  MGNDHCBAPEN_KMJDCOABCCG__int__array *pMVar6;
  int iVar7;
  System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *pSVar8;
  int index;
  System_String_o *a;
  
  if ((DAT_04566655 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_RemoveAt__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EKGDLIKHEMA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EKGDLIKHEMA>_get_Item__);
    FUN_01bab630(&Method_MGNDHCBAPEN<KMJDCOABCCG,_int>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<KMJDCOABCCG,_int>_TypeInfo);
    DAT_04566655 = 1;
  }
  if (CNDKPFMIPHH != (System_Collections_Generic_List_EKGDLIKHEMA__o *)0x0) {
    if (0 < (CNDKPFMIPHH->fields)._size) {
      iVar7 = 0;
      do {
        pIVar4 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)CNDKPFMIPHH,iVar7,
                            Method_System_Collections_Generic_List<EKGDLIKHEMA>_get_Item__);
        if ((pIVar4 == (Il2CppObject *)0x0) ||
           (IHEPDIFDBGK == (System_Collections_Generic_List_KMJDCOABCCG__o *)0x0))
        goto LAB_032250a8;
        if (0 < (IHEPDIFDBGK->fields)._size) {
          a = pIVar4[1].monitor;
          index = 0;
          do {
            pIVar4 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)IHEPDIFDBGK,index,
                                Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Item__);
            if (pIVar4 == (Il2CppObject *)0x0) goto LAB_032250a8;
            if (((*(char *)((long)&pIVar4[4].klass + 2) == '\0') ||
                (*(char *)&pIVar4[4].klass != '\0')) &&
               (bVar3 = System_String__op_Equality
                                  (a,(System_String_o *)pIVar4[2].klass,(MethodInfo *)0x0), bVar3))
            {
              pSVar8 = (__this->fields).OBNPKCCKLIJ;
              JGGJNLLANAE = *(int32_t *)((long)&pIVar4[1].klass + 4);
              pMVar5 = (MGNDHCBAPEN_KMJDCOABCCG__int__o *)
                       thunk_FUN_01bda818(MGNDHCBAPEN<KMJDCOABCCG,_int>_TypeInfo);
              MGNDHCBAPEN<object,_int>___ctor
                        ((MGNDHCBAPEN_T1__T2__o *)pMVar5,pIVar4,JGGJNLLANAE,
                         Method_MGNDHCBAPEN<KMJDCOABCCG,_int>__ctor__);
              lVar2 = Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_Add__;
              if (pSVar8 == (System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *)0x0)
              goto LAB_032250a8;
              pMVar6 = (pSVar8->fields)._items;
              (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
              if (pMVar6 == (MGNDHCBAPEN_KMJDCOABCCG__int__array *)0x0) goto LAB_032250a8;
              uVar1 = (pSVar8->fields)._size;
              if (uVar1 < (uint)pMVar6->max_length) {
                (pSVar8->fields)._size = uVar1 + 1;
                pMVar6->m_Items[(int)uVar1] = pMVar5;
                thunk_FUN_01c20e04(pMVar6->m_Items + (int)uVar1,pMVar5);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar8,
                           (Il2CppObject *)pMVar5,
                           *(MethodInfo_26E4DAC **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
              System_Collections_Generic_List<object>__RemoveAt
                        ((System_Collections_Generic_List_object__o *)IHEPDIFDBGK,index,
                         Method_System_Collections_Generic_List<KMJDCOABCCG>_RemoveAt__);
              break;
            }
            index = index + 1;
          } while (index < (IHEPDIFDBGK->fields)._size);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (CNDKPFMIPHH->fields)._size);
    }
    if (IHEPDIFDBGK != (System_Collections_Generic_List_KMJDCOABCCG__o *)0x0) {
      if (0 < (IHEPDIFDBGK->fields)._size) {
        iVar7 = 0;
        do {
          pIVar4 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)IHEPDIFDBGK,iVar7,
                              Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Item__);
          if (pIVar4 == (Il2CppObject *)0x0) goto LAB_032250a8;
          if (*(char *)((long)&pIVar4[4].klass + 2) == '\0') {
LAB_03224fb8:
            pSVar8 = (__this->fields).OBNPKCCKLIJ;
            pIVar4 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)IHEPDIFDBGK,iVar7,
                                Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Item__);
            pMVar5 = (MGNDHCBAPEN_KMJDCOABCCG__int__o *)
                     thunk_FUN_01bda818(MGNDHCBAPEN<KMJDCOABCCG,_int>_TypeInfo);
            MGNDHCBAPEN<object,_int>___ctor
                      ((MGNDHCBAPEN_T1__T2__o *)pMVar5,pIVar4,MLNEFBDGKEK,
                       Method_MGNDHCBAPEN<KMJDCOABCCG,_int>__ctor__);
            lVar2 = Method_System_Collections_Generic_List<MGNDHCBAPEN<KMJDCOABCCG,_int>>_Add__;
            if (pSVar8 == (System_Collections_Generic_List_MGNDHCBAPEN_KMJDCOABCCG__int___o *)0x0)
            goto LAB_032250a8;
            pMVar6 = (pSVar8->fields)._items;
            (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
            if (pMVar6 == (MGNDHCBAPEN_KMJDCOABCCG__int__array *)0x0) goto LAB_032250a8;
            uVar1 = (pSVar8->fields)._size;
            if (uVar1 < (uint)pMVar6->max_length) {
              (pSVar8->fields)._size = uVar1 + 1;
              pMVar6->m_Items[(int)uVar1] = pMVar5;
              thunk_FUN_01c20e04(pMVar6->m_Items + (int)uVar1,pMVar5);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pMVar5,
                         *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70))
              ;
            }
            pIVar4 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)IHEPDIFDBGK,iVar7,
                                Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Item__);
            if (pIVar4 == (Il2CppObject *)0x0) goto LAB_032250a8;
            if (MLNEFBDGKEK < *(int *)((long)&pIVar4[1].klass + 4)) {
              return;
            }
          }
          else {
            pIVar4 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)IHEPDIFDBGK,iVar7,
                                Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Item__);
            if (pIVar4 == (Il2CppObject *)0x0) goto LAB_032250a8;
            if (*(char *)&pIVar4[4].klass != '\0') goto LAB_03224fb8;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < (IHEPDIFDBGK->fields)._size);
      }
      return;
    }
  }
LAB_032250a8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void EHPMHOHOPGA(TableViewCell AHICPBEJIKJ)  [RVA 0x31253BC]
// Nekki.SF2.GUI.Profile.AchievementsController$$EHPMHOHOPGA @ RVA 0x31253BC

void Nekki_SF2_GUI_Profile_AchievementsController__EHPMHOHOPGA
               (Nekki_SF2_GUI_Profile_AchievementsController_o *__this,
               Nekki_SF2_GUI_TableViewCell_o *AHICPBEJIKJ,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  Nekki_SF2_GUI_Profile_AchievementsController_GBDHPKJIHJH_o *__this_00;
  Nekki_SF2_GUI_TableViewCell_c *pNVar4;
  
  if ((DAT_04566656 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<ProfileCell>_Invoke__);
    DAT_04566656 = 1;
  }
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
    pNVar4 = AHICPBEJIKJ->klass;
    bVar1 = (Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo->_2).naturalAligment;
    if (((pNVar4->_2).naturalAligment < bVar1) ||
       ((pNVar4->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(AHICPBEJIKJ);
    }
    plVar3 = (long *)(*pNVar4[1]._1.image)(AHICPBEJIKJ,pNVar4[1]._1.gc_desc);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x4e8))(plVar3,*(undefined8 *)(*plVar3 + 0x4f0));
      __this_00 = (__this->fields)._OnCellSelected;
      if (__this_00 != (Nekki_SF2_GUI_Profile_AchievementsController_GBDHPKJIHJH_o *)0x0) {
        UnityEngine_Events_UnityEvent<object>__Invoke
                  ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,(Il2CppObject *)AHICPBEJIKJ,
                   Method_UnityEngine_Events_UnityEvent<ProfileCell>_Invoke__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

