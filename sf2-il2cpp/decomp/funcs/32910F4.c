// Nekki.SF2.GUI.Map.ContentTourChallBoss$$GNINCNCKFLA @ RVA 0x32910F4

void Nekki_SF2_GUI_Map_ContentTourChallBoss__GNINCNCKFLA
               (Nekki_SF2_GUI_Map_ContentTourChallBoss_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,
               AFFHKININGD_o *AGONJKOMAAA,MethodInfo *method)

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
      if (AGONJKOMAAA != (AFFHKININGD_o *)0x0) {
        CJNHFNHJHPE = AFFHKININGD__CJPIFPJMENP(AGONJKOMAAA,(MethodInfo *)0x0);
        bVar1 = AFFHKININGD__CAGKMGGOIOJ(AGONJKOMAAA,(MethodInfo *)0x0);
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

