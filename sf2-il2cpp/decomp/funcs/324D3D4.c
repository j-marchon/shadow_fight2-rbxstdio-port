// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$GIENGNEGHPJ @ RVA 0x324D3D4

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__GIENGNEGHPJ
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_Hints_HintList_o *pNVar2;
  Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_o *pNVar3;
  System_Collections_Generic_List_GeneralMenuList__o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *pMVar4;
  Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_o **ppNVar5;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if ((DAT_04567109 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GeneralMenuList>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GeneralMenuList>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GeneralMenuList>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GeneralMenuList>_GetEnumerator__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<ControlsInfoScroll>__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<HintList>__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<GeneralMenuScene>_GIENGNEGHPJ__);
    FUN_01bab630(&StringLiteral_19657);
    DAT_04567109 = 1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  pMVar4 = Method_Nekki_SF2_GUI_Scene<GeneralMenuScene>_GIENGNEGHPJ__;
  Nekki_SF2_GUI_Scene<object>__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Scene_T__o *)__this,IMMNELPBGIF,
             (MethodInfo_296FD38 *)Method_Nekki_SF2_GUI_Scene<GeneralMenuScene>_GIENGNEGHPJ__);
  pNVar2 = (Nekki_SF2_GUI_Common_Hints_HintList_o *)
           Nekki_SF2_GUI_ModuleHolder__GECHOKKEEKP<object>
                     ((Nekki_SF2_GUI_ModuleHolder_o *)__this,
                      Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<HintList>__);
  (__this->fields).GDOFPOGOFJB = pNVar2;
  thunk_FUN_01c20e04();
  pNVar3 = (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_o *)
           Nekki_SF2_GUI_ModuleHolder__GECHOKKEEKP<object>
                     ((Nekki_SF2_GUI_ModuleHolder_o *)__this,
                      Method_Nekki_SF2_GUI_ModuleHolder_GECHOKKEEKP<ControlsInfoScroll>__);
  ppNVar5 = &(__this->fields).NOJAHBHFOJL;
  *ppNVar5 = pNVar3;
  thunk_FUN_01c20e04(ppNVar5);
  __this_00 = (__this->fields).menuList;
  if (__this_00 != (System_Collections_Generic_List_GeneralMenuList__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<GeneralMenuList>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_58,
                         Method_System_Collections_Generic_List_Enumerator<GeneralMenuList>_MoveNext__
                        );
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_58,
                   Method_System_Collections_Generic_List_Enumerator<GeneralMenuList>_Dispose__);
        Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__CKOHHLKDFPJ(__this,method_00);
        Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__DADMLBCLHBI(__this,method_01);
        Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__LoadSection(__this,0,pMVar4);
        pMVar4 = extraout_x1;
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          pMVar4 = extraout_x1_00;
        }
        NLPJLHOEAOE_TypeInfo->static_fields->FBCOPFLPMED = 0;
        Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__FDIGBCFEHLG(__this,pMVar4);
        if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = PNLFHHJGDLI__FPPAOOIPKEO((MethodInfo *)0x0);
        if (!bVar1) {
          if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          PNLFHHJGDLI__ODFHMBHFNJB(StringLiteral_19657,true,(MethodInfo *)0x0);
        }
        return;
      }
      if ((Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *)local_58.fields._current ==
          (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *)0x0) break;
      Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__Init
                ((Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *)local_58.fields._current,
                 (MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

