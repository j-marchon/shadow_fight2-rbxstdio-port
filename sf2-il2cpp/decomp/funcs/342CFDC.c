// MatchingDialog$$Init @ RVA 0x342CFDC

void MatchingDialog__Init(MatchingDialog_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  byte bVar1;
  int32_t OILECKFDMDB;
  uint32_t uVar2;
  CHDGOFBHAFI_o *__this_00;
  System_Action_KEFHDOHHHML__o *IELDNEAAPBE;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  Il2CppClass *__this_02;
  
  if ((DAT_0456814c & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&IKJOGLIBGJF_TypeInfo);
    FUN_01bab630(&Method_MatchingDialog_DCNEAIGAIME__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_3640);
    FUN_01bab630(&StringLiteral_1);
    DAT_0456814c = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *)__this,StringLiteral_1,
             StringLiteral_9679,StringLiteral_3640,2,(MethodInfo *)0x0);
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    bVar1 = (IKJOGLIBGJF_TypeInfo->_2).naturalAligment;
    if (((IMMNELPBGIF->klass->_2).naturalAligment < bVar1) ||
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)IKJOGLIBGJF_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    __this_02 = IMMNELPBGIF[1].klass;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
    if (__this_02 != (Il2CppClass *)0x0) {
      OILECKFDMDB = OHDDKGHEEPA__DCAKAGILMOF((OHDDKGHEEPA_o *)__this_02,(MethodInfo *)0x0);
      IELDNEAAPBE = (System_Action_KEFHDOHHHML__o *)
                    thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_00 != (CHDGOFBHAFI_o *)0x0) {
        CHDGOFBHAFI__KAKPCFDHFJM(__this_00,OILECKFDMDB,IELDNEAAPBE,(MethodInfo *)0x0);
        if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_01 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
        if (__this_01 != (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) {
          Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__RaidBattleChatTabEnable
                    (__this_01,false,(MethodInfo *)0x0);
          uVar2 = OHDDKGHEEPA__NLMMJCACKPC((OHDDKGHEEPA_o *)__this_02,(MethodInfo *)0x0);
          (__this->fields).JBMHJLNACKE = uVar2;
          MatchingDialog__DILGDEAECBG(__this,method_00);
          MatchingDialog__DAKEBOMPALG(__this,method_01);
          MatchingDialog__OJCPMPCFPJM(__this,method_02);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

