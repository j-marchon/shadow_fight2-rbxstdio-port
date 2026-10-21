// Nekki.SF2.GUI.Map.BattleButton$$set_Battle @ RVA 0x3474F24

void Nekki_SF2_GUI_Map_BattleButton__set_Battle
               (Nekki_SF2_GUI_Map_BattleButton_o *__this,OOMHDDBCBJP_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar1;
  OOMHDDBCBJP_o *pOVar2;
  Nekki_SF2_GUI_Tutorial_TutorialNode_o *pNVar3;
  System_String_o **ppSVar4;
  
  (__this->fields).CLMFOMEABFA = CJNHFNHJHPE;
  thunk_FUN_01c20e04(&(__this->fields).CLMFOMEABFA);
  __this_00 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pOVar2 = (__this->fields).CLMFOMEABFA;
  if ((pOVar2 != (OOMHDDBCBJP_o *)0x0) && (__this_00 != (UnityEngine_Object_o *)0x0)) {
    UnityEngine_Object__set_name(__this_00,(pOVar2->fields).DEKCPPOJFEH,(MethodInfo *)0x0);
    pOVar2 = (__this->fields).CLMFOMEABFA;
    if (pOVar2 != (OOMHDDBCBJP_o *)0x0) {
      pNVar3 = (__this->fields)._TutorialNode;
      pSVar1 = OOMHDDBCBJP__LOHPFCGCHNH(pOVar2,(MethodInfo *)0x0);
      if (pNVar3 != (Nekki_SF2_GUI_Tutorial_TutorialNode_o *)0x0) {
        ppSVar4 = &(pNVar3->fields)._ID;
        *ppSVar4 = pSVar1;
        thunk_FUN_01c20e04(ppSVar4,pSVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

