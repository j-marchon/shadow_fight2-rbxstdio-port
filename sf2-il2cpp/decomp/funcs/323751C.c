// Nekki.SF2.GUI.Fight.FightScene$$get_IsRealFightScene @ RVA 0x323751C

bool Nekki_SF2_GUI_Fight_FightScene__get_IsRealFightScene(MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  FCJBEKHDLAF_o *__this;
  UnityEngine_Object_o *x;
  
  if ((DAT_04567030 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__);
    DAT_04567030 = 1;
  }
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    if (**(long **)(lVar2 + 0xb8) == 0) {
LAB_03337654:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = false;
    if (*(long *)(**(long **)(lVar2 + 0xb8) + 0x90) != 0) {
      lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01b81620();
      }
      if ((**(long **)(lVar2 + 0xb8) == 0) ||
         (__this = *(FCJBEKHDLAF_o **)(**(long **)(lVar2 + 0xb8) + 0x90),
         __this == (FCJBEKHDLAF_o *)0x0)) goto LAB_03337654;
      bVar1 = FCJBEKHDLAF__DMJLAIKGJEH(__this,(MethodInfo *)0x0);
      bVar1 = !bVar1;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

