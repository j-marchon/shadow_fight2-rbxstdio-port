// Nekki.SF2.GUI.Map.ContentTourChallBoss$$Init @ RVA 0x3290C54

void Nekki_SF2_GUI_Map_ContentTourChallBoss__Init
               (Nekki_SF2_GUI_Map_ContentTourChallBoss_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,
               AFFHKININGD_o *AGONJKOMAAA,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  Nekki_SF2_GUI_Map_ProgressBricksPanel_o *__this_00;
  Nekki_SF2_GUI_Map_ContentTourChallBoss_o *__this_01;
  Nekki_SF2_GUI_Map_PrizePanel_o *__this_02;
  Nekki_SF2_GUI_Map_DifficultyPanel_o *pNVar3;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_CanvasGroup_o *__this_04;
  AFFHKININGD_o *pAVar4;
  float OEBANKNLEMN;
  
  if ((DAT_0456731b & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<CanvasGroup>__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
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
          if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          OEBANKNLEMN = MGNPHCAAEIO__HLFLDFDKDFN(AGONJKOMAAA,(MethodInfo *)0x0);
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

