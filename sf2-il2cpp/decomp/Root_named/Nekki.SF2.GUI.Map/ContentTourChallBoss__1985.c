// TypeDefIndex 1985
// Namespace: Nekki.SF2.GUI.Map
// public class ContentTourChallBoss : ContentToggle
// Fields:
//   private LabelAlias _replaysLabel; // 0x58
//   private ProgressBricksPanel _bricksPanel; // 0x60
//   private DifficultyPanel _difficultyPanel; // 0x68
//   private PrizePanel _prizePanel; // 0x70
//   private LabelAlias _lblDescription; // 0x78

// ===== private void OBAGNONDCCB()  [RVA 0x32908E8]
// Nekki.SF2.GUI.Map.ContentTourChallBoss$$OBAGNONDCCB @ RVA 0x32908E8

void Nekki_SF2_GUI_Map_ContentTourChallBoss__OBAGNONDCCB
               (Nekki_SF2_GUI_Map_ContentTourChallBoss_o *__this,MethodInfo *method)

{
  int32_t length;
  uint uVar1;
  long lVar2;
  APJKDKCGNHG_o *pAVar3;
  APJKDKCGNHG_CCPCHLLGJJE_o *pAVar4;
  APJKDKCGNHG_CCPCHLLGJJE_o **ppAVar5;
  APJKDKCGNHG_PABADKLLFHB_o *pAVar6;
  Nekki_SF2_GUI_Map_DifficultyPanel_o *pNVar7;
  Il2CppObject *pIVar8;
  System_Object_array *pSVar9;
  MOAHCJAFGNJ_ODGLOLLAENF_o *pMVar10;
  System_Collections_Generic_List_object__o *pSVar11;
  Nekki_SF2_GUI_LabelAlias_o *pNVar12;
  
  if ((DAT_0456731a & 1) == 0) {
    FUN_01bab630(&APJKDKCGNHG_TypeInfo);
    FUN_01bab630(&APJKDKCGNHG_CCPCHLLGJJE_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<CanvasGroup>__);
    FUN_01bab630(&Method_LJLLAKHOFFF_EIJGFNBCPLK__);
    FUN_01bab630(&Method_LJLLAKHOFFF_EIJGFNBCPLK__);
    FUN_01bab630(&Method_LJLLAKHOFFF_IFBBIDIEBEL__);
    FUN_01bab630(&Method_LJLLAKHOFFF_IFBBIDIEBEL__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCEKMOECEJK>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCEKMOECEJK>_Clear__);
    FUN_01bab630(&MOAHCJAFGNJ_TypeInfo);
    FUN_01bab630(&APJKDKCGNHG_PABADKLLFHB_TypeInfo);
    DAT_0456731a = 1;
  }
  pSVar11 = (System_Collections_Generic_List_object__o *)(__this->fields).super.MAPPKOGKCBA;
  if (pSVar11 != (System_Collections_Generic_List_object__o *)0x0) {
    length = (pSVar11->fields)._size;
    (pSVar11->fields)._size = 0;
    (pSVar11->fields)._version = (pSVar11->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar11->fields)._items,0,length,(MethodInfo *)0x0);
      pSVar11 = (System_Collections_Generic_List_object__o *)(__this->fields).super.MAPPKOGKCBA;
    }
    pAVar3 = (APJKDKCGNHG_o *)thunk_FUN_01bda818(APJKDKCGNHG_TypeInfo);
    APJKDKCGNHG___ctor(pAVar3,(MethodInfo *)0x0);
    pNVar12 = (__this->fields)._lblDescription;
    pAVar4 = (APJKDKCGNHG_CCPCHLLGJJE_o *)thunk_FUN_01bda818(APJKDKCGNHG_CCPCHLLGJJE_TypeInfo);
    APJKDKCGNHG_CCPCHLLGJJE___ctor
              (pAVar4,(Il2CppObject *)pNVar12,Method_LJLLAKHOFFF_EIJGFNBCPLK__,(MethodInfo *)0x0);
    if (pAVar3 != (APJKDKCGNHG_o *)0x0) {
      ppAVar5 = &(pAVar3->fields).PJIACDFEPAP;
      *ppAVar5 = pAVar4;
      thunk_FUN_01c20e04(ppAVar5,pAVar4);
      pNVar12 = (__this->fields)._lblDescription;
      pAVar6 = (APJKDKCGNHG_PABADKLLFHB_o *)thunk_FUN_01bda818(APJKDKCGNHG_PABADKLLFHB_TypeInfo);
      APJKDKCGNHG_PABADKLLFHB___ctor
                (pAVar6,(Il2CppObject *)pNVar12,Method_LJLLAKHOFFF_IFBBIDIEBEL__,(MethodInfo *)0x0);
      (pAVar3->fields).GLGIFNCMMAK = pAVar6;
      thunk_FUN_01c20e04(&pAVar3->fields,pAVar6);
      lVar2 = Method_System_Collections_Generic_List<KCEKMOECEJK>_Add__;
      if (pSVar11 != (System_Collections_Generic_List_object__o *)0x0) {
        pSVar9 = (pSVar11->fields)._items;
        (pSVar11->fields)._version = (pSVar11->fields)._version + 1;
        if (pSVar9 != (System_Object_array *)0x0) {
          uVar1 = (pSVar11->fields)._size;
          if (uVar1 < (uint)pSVar9->max_length) {
            (pSVar11->fields)._size = uVar1 + 1;
            pSVar9->m_Items[(int)uVar1] = (Il2CppObject *)pAVar3;
            thunk_FUN_01c20e04(pSVar9->m_Items + (int)uVar1,pAVar3);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (pSVar11,(Il2CppObject *)pAVar3,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          pSVar11 = (System_Collections_Generic_List_object__o *)(__this->fields).super.MAPPKOGKCBA;
          pAVar3 = (APJKDKCGNHG_o *)thunk_FUN_01bda818(APJKDKCGNHG_TypeInfo);
          APJKDKCGNHG___ctor(pAVar3,(MethodInfo *)0x0);
          pNVar7 = (__this->fields)._difficultyPanel;
          if (pNVar7 != (Nekki_SF2_GUI_Map_DifficultyPanel_o *)0x0) {
            pIVar8 = UnityEngine_Component__GetComponent<object>
                               ((UnityEngine_Component_o *)pNVar7,
                                Method_UnityEngine_Component_GetComponent<CanvasGroup>__);
            pAVar4 = (APJKDKCGNHG_CCPCHLLGJJE_o *)
                     thunk_FUN_01bda818(APJKDKCGNHG_CCPCHLLGJJE_TypeInfo);
            APJKDKCGNHG_CCPCHLLGJJE___ctor
                      (pAVar4,pIVar8,Method_LJLLAKHOFFF_EIJGFNBCPLK__,(MethodInfo *)0x0);
            if (pAVar3 != (APJKDKCGNHG_o *)0x0) {
              ppAVar5 = &(pAVar3->fields).PJIACDFEPAP;
              *ppAVar5 = pAVar4;
              thunk_FUN_01c20e04(ppAVar5,pAVar4);
              pNVar7 = (__this->fields)._difficultyPanel;
              if (pNVar7 != (Nekki_SF2_GUI_Map_DifficultyPanel_o *)0x0) {
                pIVar8 = UnityEngine_Component__GetComponent<object>
                                   ((UnityEngine_Component_o *)pNVar7,
                                    Method_UnityEngine_Component_GetComponent<CanvasGroup>__);
                pAVar6 = (APJKDKCGNHG_PABADKLLFHB_o *)
                         thunk_FUN_01bda818(APJKDKCGNHG_PABADKLLFHB_TypeInfo);
                APJKDKCGNHG_PABADKLLFHB___ctor
                          (pAVar6,pIVar8,Method_LJLLAKHOFFF_IFBBIDIEBEL__,(MethodInfo *)0x0);
                (pAVar3->fields).GLGIFNCMMAK = pAVar6;
                thunk_FUN_01c20e04(&pAVar3->fields,pAVar6);
                lVar2 = Method_System_Collections_Generic_List<KCEKMOECEJK>_Add__;
                if (pSVar11 != (System_Collections_Generic_List_object__o *)0x0) {
                  pSVar9 = (pSVar11->fields)._items;
                  (pSVar11->fields)._version = (pSVar11->fields)._version + 1;
                  if (pSVar9 != (System_Object_array *)0x0) {
                    uVar1 = (pSVar11->fields)._size;
                    if (uVar1 < (uint)pSVar9->max_length) {
                      (pSVar11->fields)._size = uVar1 + 1;
                      pSVar9->m_Items[(int)uVar1] = (Il2CppObject *)pAVar3;
                      thunk_FUN_01c20e04(pSVar9->m_Items + (int)uVar1,pAVar3);
                    }
                    else {
                      System_Collections_Generic_List<object>__AddWithResize
                                (pSVar11,(Il2CppObject *)pAVar3,
                                 *(MethodInfo_26E4DAC **)
                                  (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                    }
                    if ((MOAHCJAFGNJ_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    pMVar10 = MOAHCJAFGNJ_TypeInfo->static_fields->AEPDOIPFMKD;
                    if (pMVar10 != (MOAHCJAFGNJ_ODGLOLLAENF_o *)0x0) {
                      (__this->fields).super.FDGAGAEIAOO =
                           (uint)((pMVar10->fields).CGEBFCBMLKC == 0);
                      Nekki_SF2_GUI_Map_ContentToggle__GGCAOINEJOF
                                ((Nekki_SF2_GUI_Map_ContentToggle_o *)__this,(MethodInfo *)0x0);
                      Nekki_SF2_GUI_Map_ContentToggle__JDPMKEABGPA
                                ((Nekki_SF2_GUI_Map_ContentToggle_o *)__this,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void Init(OOMHDDBCBJP BANHBMINMMP, FightList AGONJKOMAAA)  [RVA 0x3290C54]
// Nekki.SF2.GUI.Map.ContentTourChallBoss$$Init @ RVA 0x3290C54

void Nekki_SF2_GUI_Map_ContentTourChallBoss__Init
               (Nekki_SF2_GUI_Map_ContentTourChallBoss_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,
               FightList_o *AGONJKOMAAA,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  Nekki_SF2_GUI_Map_ProgressBricksPanel_o *__this_00;
  Nekki_SF2_GUI_Map_ContentTourChallBoss_o *__this_01;
  Nekki_SF2_GUI_Map_PrizePanel_o *__this_02;
  Nekki_SF2_GUI_Map_DifficultyPanel_o *pNVar3;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_CanvasGroup_o *__this_04;
  FightList_o *pAVar4;
  float OEBANKNLEMN;
  
  if ((DAT_0456731b & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<CanvasGroup>__);
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_0456731b = 1;
  }
  __this_00 = (__this->fields)._bricksPanel;
  if (__this_00 != (Nekki_SF2_GUI_Map_ProgressBricksPanel_o *)0x0) {
    pAVar4 = AGONJKOMAAA;
    Nekki_SF2_GUI_Map_ProgressBricksPanel__Init(__this_00,BANHBMINMMP,AGONJKOMAAA,(MethodInfo *)0x0)
    ;
    Nekki_SF2_GUI_Map_ContentTourChallBoss__HKCNMPNMAJA(__this,BANHBMINMMP,(MethodInfo *)pAVar4);
    bVar1 = Nekki_SF2_GUI_Map_ContentTourChallBoss__JEAINKCPKKN
                      (__this_01,AGONJKOMAAA,(MethodInfo *)pAVar4);
    if (bVar1) {
      if (BANHBMINMMP == (OOMHDDBCBJP_o *)0x0) goto LAB_03390de4;
      iVar2 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0);
      if ((iVar2 == 2) ||
         (iVar2 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0), iVar2 == 10)) {
        bVar1 = false;
      }
      else {
        iVar2 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0);
        bVar1 = iVar2 != 0x15;
      }
    }
    else {
      bVar1 = true;
    }
    __this_02 = (__this->fields)._prizePanel;
    if (__this_02 != (Nekki_SF2_GUI_Map_PrizePanel_o *)0x0) {
      pAVar4 = AGONJKOMAAA;
      Nekki_SF2_GUI_Map_PrizePanel__Init(__this_02,-1,bVar1,AGONJKOMAAA,(MethodInfo *)0x0);
      pNVar3 = (__this->fields)._difficultyPanel;
      if (((pNVar3 != (Nekki_SF2_GUI_Map_DifficultyPanel_o *)0x0) &&
          (__this_03 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
          BANHBMINMMP != (OOMHDDBCBJP_o *)0x0)) && (__this_03 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive
                  (__this_03,(BANHBMINMMP->fields).KIHDFNGKPGN != 0,(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._difficultyPanel;
        if ((pNVar3 != (Nekki_SF2_GUI_Map_DifficultyPanel_o *)0x0) &&
           (__this_04 = (UnityEngine_CanvasGroup_o *)
                        UnityEngine_Component__GetComponent<object>
                                  ((UnityEngine_Component_o *)pNVar3,
                                   Method_UnityEngine_Component_GetComponent<CanvasGroup>__),
           __this_04 != (UnityEngine_CanvasGroup_o *)0x0)) {
          UnityEngine_CanvasGroup__set_alpha(__this_04,1.0,(MethodInfo *)0x0);
          pNVar3 = (__this->fields)._difficultyPanel;
          if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          OEBANKNLEMN = GameUtils__HLFLDFDKDFN(AGONJKOMAAA,(MethodInfo *)0x0);
          if (pNVar3 != (Nekki_SF2_GUI_Map_DifficultyPanel_o *)0x0) {
            Nekki_SF2_GUI_Map_DifficultyPanel__Init(pNVar3,OEBANKNLEMN,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Map_ContentToggle__CCPABLFBFFA
                      ((Nekki_SF2_GUI_Map_ContentToggle_o *)__this,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Map_ContentTourChallBoss__GNINCNCKFLA
                      (__this,BANHBMINMMP,AGONJKOMAAA,(MethodInfo *)pAVar4);
            return;
          }
        }
      }
    }
  }
LAB_03390de4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HKCNMPNMAJA(OOMHDDBCBJP BANHBMINMMP)  [RVA 0x3290DE8]
// Nekki.SF2.GUI.Map.ContentTourChallBoss$$HKCNMPNMAJA @ RVA 0x3290DE8

void Nekki_SF2_GUI_Map_ContentTourChallBoss__HKCNMPNMAJA
               (Nekki_SF2_GUI_Map_ContentTourChallBoss_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,
               MethodInfo *method)

{
  byte bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  UnityEngine_GameObject_o *__this_00;
  bool value;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  int32_t local_24;
  
  if ((DAT_0456731c & 1) == 0) {
    FUN_01bab630(&PMFNDKKBEKN_TypeInfo);
    FUN_01bab630(&StringLiteral_15850/*"^replays^: {0}"*/);
    DAT_0456731c = 1;
  }
  if (BANHBMINMMP != (OOMHDDBCBJP_o *)0x0) {
    iVar2 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0);
    if ((iVar2 == 9) ||
       (iVar2 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0), iVar2 == 10)) {
      bVar1 = (PMFNDKKBEKN_TypeInfo->_2).naturalAligment;
      if (((BANHBMINMMP->klass->_2).naturalAligment < bVar1) ||
         ((BANHBMINMMP->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)PMFNDKKBEKN_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(BANHBMINMMP);
      }
      pNVar4 = (__this->fields)._replaysLabel;
      local_24 = PMFNDKKBEKN__EBDBABMAIAM((PMFNDKKBEKN_o *)BANHBMINMMP,(MethodInfo *)0x0);
      pSVar3 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
      pSVar3 = System_String__Format(StringLiteral_15850/*"^replays^: {0}"*/,(Il2CppObject *)pSVar3,(MethodInfo *)0x0);
      if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar4,pSVar3,(MethodInfo *)0x0);
        pNVar4 = (__this->fields)._replaysLabel;
        if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (__this_00 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
           __this_00 != (UnityEngine_GameObject_o *)0x0)) {
          value = true;
          goto LAB_03390f0c;
        }
      }
    }
    else {
      pNVar4 = (__this->fields)._replaysLabel;
      if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_GameObject_o *)0x0)) {
        value = false;
LAB_03390f0c:
        UnityEngine_GameObject__SetActive(__this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GNINCNCKFLA(OOMHDDBCBJP BANHBMINMMP, FightList AGONJKOMAAA)  [RVA 0x32910F4]
// Nekki.SF2.GUI.Map.ContentTourChallBoss$$GNINCNCKFLA @ RVA 0x32910F4

void Nekki_SF2_GUI_Map_ContentTourChallBoss__GNINCNCKFLA
               (Nekki_SF2_GUI_Map_ContentTourChallBoss_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,
               FightList_o *AGONJKOMAAA,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  int32_t iVar3;
  System_String_o *CJNHFNHJHPE;
  UnityEngine_GameObject_o *pUVar4;
  Nekki_SF2_GUI_Map_DifficultyPanel_o *__this_00;
  UnityEngine_CanvasGroup_o *__this_01;
  MethodInfo *method_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar5;
  
  if ((DAT_0456731d & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<CanvasGroup>__);
    DAT_0456731d = 1;
  }
  if (BANHBMINMMP != (OOMHDDBCBJP_o *)0x0) {
    iVar3 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0);
    if ((iVar3 == 1) ||
       (iVar3 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0), iVar3 == 9)) {
      if (AGONJKOMAAA != (FightList_o *)0x0) {
        CJNHFNHJHPE = FightList__CJPIFPJMENP(AGONJKOMAAA,(MethodInfo *)0x0);
        bVar1 = FightList__CAGKMGGOIOJ(AGONJKOMAAA,(MethodInfo *)0x0);
        bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
        pNVar5 = (__this->fields)._lblDescription;
        if ((pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (pUVar4 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
           pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar4,bVar1 && !bVar2,(MethodInfo *)0x0);
          if (bVar2) {
            return;
          }
          pNVar5 = (__this->fields)._lblDescription;
          if (pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
            Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar5,CJNHFNHJHPE,(MethodInfo *)0x0);
            Nekki_SF2_GUI_Map_ContentTourChallBoss__OBAGNONDCCB(__this,method_00);
            return;
          }
        }
      }
    }
    else {
      pNVar5 = (__this->fields)._lblDescription;
      if ((pNVar5 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
         pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
        __this_00 = (__this->fields)._difficultyPanel;
        if ((__this_00 != (Nekki_SF2_GUI_Map_DifficultyPanel_o *)0x0) &&
           (__this_01 = (UnityEngine_CanvasGroup_o *)
                        UnityEngine_Component__GetComponent<object>
                                  ((UnityEngine_Component_o *)__this_00,
                                   Method_UnityEngine_Component_GetComponent<CanvasGroup>__),
           __this_01 != (UnityEngine_CanvasGroup_o *)0x0)) {
          UnityEngine_CanvasGroup__set_alpha(__this_01,1.0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x329124C]
// Nekki.SF2.GUI.Map.ContentTourChallBoss$$.ctor @ RVA 0x329124C

void Nekki_SF2_GUI_Map_ContentTourChallBoss___ctor
               (Nekki_SF2_GUI_Map_ContentTourChallBoss_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_ContentToggle___ctor
            ((Nekki_SF2_GUI_Map_ContentToggle_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private bool JEAINKCPKKN(FightList AGONJKOMAAA)  [RVA 0x3290F30]
// Nekki.SF2.GUI.Map.ContentTourChallBoss$$JEAINKCPKKN @ RVA 0x3290F30

bool Nekki_SF2_GUI_Map_ContentTourChallBoss__JEAINKCPKKN
               (Nekki_SF2_GUI_Map_ContentTourChallBoss_o *__this,FightList_o *AGONJKOMAAA,
               MethodInfo *method)

{
  bool bVar1;
  int32_t JLAFGLDIFOC;
  System_Collections_Generic_List_JBCGDIEHOHH__o *__this_00;
  JBCGDIEHOHH_o *__this_01;
  Roster_o *__this_02;
  JHBHHHKEFOO_o *pJVar2;
  System_Collections_Generic_List_OCOEAJMJEOP__o *__this_03;
  Il2CppObject *pIVar3;
  Item_o *__this_04;
  HOOAAGABMBL_o *pHVar4;
  
  if ((DAT_0456731e & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<OCOEAJMJEOP>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JBCGDIEHOHH>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JBCGDIEHOHH>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OCOEAJMJEOP>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456731e = 1;
  }
  if (AGONJKOMAAA == (FightList_o *)0x0) {
    return false;
  }
  __this_00 = (AGONJKOMAAA->fields).FGAENDJJOGN;
  if (__this_00 != (System_Collections_Generic_List_JBCGDIEHOHH__o *)0x0) {
    __this_01 = (JBCGDIEHOHH_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)__this_00,
                           (__this_00->fields)._size + -1,
                           Method_System_Collections_Generic_List<JBCGDIEHOHH>_get_Item__);
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
    __this_02 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (((__this_02 != (Roster_o *)0x0) &&
        (JLAFGLDIFOC = Roster__EOEAKGGDBFH(__this_02,(MethodInfo *)0x0),
        __this_01 != (JBCGDIEHOHH_o *)0x0)) &&
       (pJVar2 = JBCGDIEHOHH__ALLFNDNBMCO(__this_01,JLAFGLDIFOC,(MethodInfo *)0x0),
       pJVar2 != (JHBHHHKEFOO_o *)0x0)) {
      bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                        ((System_Collections_Generic_List_T__o *)(pJVar2->fields).GHAAKPDHIJJ,
                         Method_DJNBJHPDKDP_OBECCOPBADO<OCOEAJMJEOP>__);
      if (bVar1) {
        return false;
      }
      __this_03 = (pJVar2->fields).GHAAKPDHIJJ;
      if ((__this_03 != (System_Collections_Generic_List_OCOEAJMJEOP__o *)0x0) &&
         (pIVar3 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_03,0,
                              Method_System_Collections_Generic_List<OCOEAJMJEOP>_get_Item__),
         pIVar3 != (Il2CppObject *)0x0)) {
        if (*(char *)((long)&pIVar3[1].klass + 5) == '\0') {
          return false;
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04563eaa == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04563eaa = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_04 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
        if (__this_04 != (Item_o *)0x0) {
          pHVar4 = Item__CKKIPBAIEMN(__this_04,pIVar3[1].monitor,(MethodInfo *)0x0);
          return pHVar4 != (HOOAAGABMBL_o *)0x0;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool IsParallelCrossFadeAlpha()  [RVA 0x3291254]
// Nekki.SF2.GUI.Map.ContentTourChallBoss$$IsParallelCrossFadeAlpha @ RVA 0x3291254

bool Nekki_SF2_GUI_Map_ContentTourChallBoss__IsParallelCrossFadeAlpha
               (Nekki_SF2_GUI_Map_ContentTourChallBoss_o *__this,MethodInfo *method)

{
  return true;
}

