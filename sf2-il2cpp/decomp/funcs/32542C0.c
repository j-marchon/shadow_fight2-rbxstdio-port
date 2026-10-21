// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$CreateChatChannel @ RVA 0x32542C0

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__CreateChatChannel
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,int32_t BOFAKAEIMME,
               bool NCHOIJKHAOF,MethodInfo *method)

{
  bool bVar1;
  int32_t DPJIDNBJIBG;
  System_Collections_Generic_Dictionary_CKLIGNAPKFO__ChatSFViewController__o *pSVar2;
  AKOMJPINHEN_o *pAVar3;
  System_String_o *pSVar4;
  UnityEngine_GameObject_o *__this_00;
  FEKEAPCCOOB_o *pFVar5;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o *pNVar6;
  Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *DJIMJLMCAPI;
  System_Enum_o local_48;
  int32_t local_38;
  
  if ((DAT_0456714e & 1) == 0) {
    FUN_01bab630(&CKLIGNAPKFO_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_ChatSFViewController>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_ChatSFViewController>_ContainsKey__
                );
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_9215);
    DAT_0456714e = 1;
  }
  pSVar2 = (__this->fields).KGPGGBPLEFB;
  if (pSVar2 == (System_Collections_Generic_Dictionary_CKLIGNAPKFO__ChatSFViewController__o *)0x0) {
LAB_03354570:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = System_Collections_Generic_Dictionary<Int32Enum,_object>__ContainsKey
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,BOFAKAEIMME,
                     Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_ChatSFViewController>_ContainsKey__
                    );
  if (!bVar1) {
                    /* try { // try from 03354368 to 0345438f has its CatchHandler @ 033546d8 */
    if (BOFAKAEIMME == 2) {
      __this_01 = (__this->fields)._raidBattleChatViewController;
                    /* try { // try from 033543c4 to 034543ef has its CatchHandler @ 033546d4 */
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar3 = HJPEKDOPBHN__BMIEIJAJNAJ((MethodInfo *)0x0);
      if (__this_01 == (Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_o *)0x0)
      goto LAB_03354570;
      Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController__Init
                (__this_01,(KPBOJBLLKPJ_o *)pAVar3,(MKIDEJJPLCE_o *)__this,(MethodInfo *)0x0);
      pNVar6 = (Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o *)
               (__this->fields)._raidBattleChatViewController;
    }
    else if (BOFAKAEIMME == 3) {
      pNVar6 = (__this->fields)._clanChatViewController;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar3 = HJPEKDOPBHN__BMIEIJAJNAJ((MethodInfo *)0x0);
      if (pNVar6 == (Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o *)0x0) goto LAB_03354570;
      Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController__Init
                (pNVar6,(KPBOJBLLKPJ_o *)pAVar3,(MKIDEJJPLCE_o *)__this,(MethodInfo *)0x0);
      pNVar6 = (__this->fields)._clanChatViewController;
    }
    else {
      local_48.klass = (System_Enum_c *)CKLIGNAPKFO_TypeInfo;
      local_48.monitor = (void *)0xffffffffffffffff;
      local_38 = BOFAKAEIMME;
      pSVar4 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
                    /* try { // try from 03354430 to 03454437 has its CatchHandler @ 033546c4 */
      pSVar4 = System_String__Concat(StringLiteral_9215,pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 03354440 to 03454447 has its CatchHandler @ 033546c0 */
                    /* try { // try from 03354450 to 0345445b has its CatchHandler @ 033546d0 */
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 03354468 to 0345446f has its CatchHandler @ 033546a8 */
      pNVar6 = (Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o *)0x0;
    }
                    /* try { // try from 03354478 to 0345447f has its CatchHandler @ 033546a4 */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
                    /* try { // try from 03354494 to 034544af has its CatchHandler @ 033546c8 */
    if (bVar1) {
      if (pNVar6 != (Nekki_SF2_GUI_Dialogs_Raids_ClanChatViewController_o *)0x0) {
        DJIMJLMCAPI = (pNVar6->fields).super._tabButton;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)DJIMJLMCAPI,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
                    /* try { // try from 033544c0 to 034544fb has its CatchHandler @ 033546dc */
        if (!bVar1) {
          return;
        }
        (*(pNVar6->klass->vtable)._21_InitController.methodPtr)
                  (pNVar6,(pNVar6->klass->vtable)._21_InitController.method);
        if ((DJIMJLMCAPI != (Nekki_SF2_GUI_Dialogs_Raids_ChatSFTabButton_o *)0x0) &&
           (__this_00 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)DJIMJLMCAPI,(MethodInfo *)0x0),
           __this_00 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
          pFVar5 = (__this->fields).HIOOMAJPEJP;
          if (pFVar5 != (FEKEAPCCOOB_o *)0x0) {
            DPJIDNBJIBG = FEKEAPCCOOB__GDCPIEANEJF
                                    (pFVar5,(UnityEngine_UI_Button_o *)DJIMJLMCAPI,
                                     (TabView_o *)pNVar6,(MethodInfo *)0x0);
            pSVar2 = (__this->fields).KGPGGBPLEFB;
            if (pSVar2 != (System_Collections_Generic_Dictionary_CKLIGNAPKFO__ChatSFViewController__o
                           *)0x0) {
              System_Collections_Generic_Dictionary<Int32Enum,_object>__Add
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,BOFAKAEIMME
                         ,(Il2CppObject *)pNVar6,
                         Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_ChatSFViewController>_Add__
                        );
              if (!NCHOIJKHAOF) {
                Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__POIOFMEMHBP(__this,method_00);
                return;
              }
                    /* try { // try from 0335453c to 0345455f has its CatchHandler @ 033546b4 */
              pFVar5 = (__this->fields).HIOOMAJPEJP;
              if (pFVar5 != (FEKEAPCCOOB_o *)0x0) {
                FEKEAPCCOOB__AAOLKEFFIIN(pFVar5,DPJIDNBJIBG,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      goto LAB_03354570;
    }
  }
                    /* try { // try from 03354560 to 0345466f has its CatchHandler @ 033541e4 */
  return;
}

