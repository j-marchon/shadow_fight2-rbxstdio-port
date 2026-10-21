// Nekki.SF2.GUI.Scenes.GameLoaderScene$$Update @ RVA 0x31D2748

void Nekki_SF2_GUI_Scenes_GameLoaderScene__Update
               (Nekki_SF2_GUI_Scenes_GameLoaderScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  IGFJINHNIBB_o *pIVar2;
  
  if ((DAT_04566cb8 & 1) == 0) {
    FUN_01bab630(&EOOEOHKLOFJ_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<GameLoaderScene>_Update__);
    DAT_04566cb8 = 1;
  }
  Nekki_SF2_GUI_Scene<object>__Update
            ((Nekki_SF2_GUI_Scene_T__o *)__this,Method_Nekki_SF2_GUI_Scene<GameLoaderScene>_Update__
            );
  pIVar2 = (__this->fields).ECJIJIFLMBK;
  if (pIVar2 != (IGFJINHNIBB_o *)0x0) {
    IGFJINHNIBB__LLCONNGHGKD(pIVar2,(MethodInfo *)0x0);
    pIVar2 = (__this->fields).ECJIJIFLMBK;
    if (pIVar2 != (IGFJINHNIBB_o *)0x0) {
      if (((pIVar2->fields)._DGMNNLJEMIB_k__BackingField == false) ||
         (bVar1 = IGFJINHNIBB__KGGGJNCEPLF(pIVar2,(MethodInfo *)0x0), bVar1)) {
        return;
      }
      pIVar2 = (__this->fields).ECJIJIFLMBK;
      if (pIVar2 != (IGFJINHNIBB_o *)0x0) {
        IGFJINHNIBB__DGLJCGNHLIG(pIVar2,(MethodInfo *)0x0);
        if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        EOOEOHKLOFJ__EOJDBAHODGK((MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

