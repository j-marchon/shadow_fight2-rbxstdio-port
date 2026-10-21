// Nekki.SF2.GUI.Dialogs.Raids.RaidSeasonFinishDialog$$Init @ RVA 0x30BDF70

void Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog__Init
               (Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_o *__this,
               NLBPJNEGNNM_o *BLLGOMMBCPF,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent_o *__this_00;
  UnityEngine_GameObject_o *pUVar1;
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinOldLeaderBoard_o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent_o *__this_02;
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinRewardContent_o *__this_03;
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent_o *__this_04;
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinTop100Message_o *__this_05;
  MethodInfo *method_00;
  
  if ((DAT_0456625d & 1) == 0) {
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_3640);
    FUN_01bab630(&StringLiteral_1);
    DAT_0456625d = 1;
  }
  (__this->fields).DFCJLLMHKLE = 0;
  (__this->fields).KDDIPMKKLIN = BLLGOMMBCPF;
  thunk_FUN_01c20e04(&(__this->fields).KDDIPMKKLIN,BLLGOMMBCPF);
  Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *)__this,StringLiteral_1,
             StringLiteral_9679,StringLiteral_3640,0,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._seasFinMessageContent;
  if ((__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent_o *)0x0) &&
     (pUVar1 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._seasFinOldLeaderBoard;
    if ((__this_01 != (Nekki_SF2_GUI_Dialogs_Raids_SeasFinOldLeaderBoard_o *)0x0) &&
       (pUVar1 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
      __this_02 = (__this->fields)._seasFinChestContent;
      if ((__this_02 != (Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent_o *)0x0) &&
         (pUVar1 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
         pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
        __this_03 = (__this->fields)._seasFinRewardContent;
        if ((__this_03 != (Nekki_SF2_GUI_Dialogs_Raids_SeasFinRewardContent_o *)0x0) &&
           (pUVar1 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0),
           pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
          __this_04 = (__this->fields)._seasFinNewDanContent;
          if ((__this_04 != (Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent_o *)0x0) &&
             (pUVar1 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0),
             pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
            __this_05 = (__this->fields)._seasFinTop100Message;
            if ((__this_05 != (Nekki_SF2_GUI_Dialogs_Raids_SeasFinTop100Message_o *)0x0) &&
               (pUVar1 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0),
               pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
              Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog__POIOFMEMHBP(__this,method_00);
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

