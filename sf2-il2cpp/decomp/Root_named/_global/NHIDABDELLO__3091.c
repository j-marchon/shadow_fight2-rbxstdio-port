// TypeDefIndex 3091
// Namespace: 
// public class NHIDABDELLO : QuestAction
// Fields:

// ===== public void .ctor()  [RVA 0x34C9DE8]
// NHIDABDELLO$$.ctor @ RVA 0x34C9DE8

void NHIDABDELLO___ctor(NHIDABDELLO_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x34C9DF0]
// NHIDABDELLO$$MAHFCKJGBPP @ RVA 0x34C9DF0

void NHIDABDELLO__MAHFCKJGBPP(NHIDABDELLO_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  int32_t ELHAJJAHLHM;
  System_Action_o *LILIJINNGNC;
  
  if ((DAT_04568658 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_BOFEMGGNODC_FGNINNOOCCL__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapScene_TypeInfo);
    DAT_04568658 = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  if (AAJBIMFNMBB == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  ELHAJJAHLHM = MMOGKBGEPGM__GFLCMDMEOBN((AAJBIMFNMBB->fields).CHFDDNODLGP,(MethodInfo *)0x0);
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GameUtils_TypeInfo);
  }
  bVar1 = GameUtils__BIFPGEGFDLK(ELHAJJAHLHM,0x11,(MethodInfo *)0x0);
  if (bVar1) {
    QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
    return;
  }
  LILIJINNGNC = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if ((Nekki_SF2_GUI_Map_MapScene_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_SF2_GUI_Map_MapScene__SwitchToMapSceneAndOpenRaidMap(LILIJINNGNC,(MethodInfo *)0x0);
  return;
}

