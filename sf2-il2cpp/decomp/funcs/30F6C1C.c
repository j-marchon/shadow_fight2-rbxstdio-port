// Nekki.SF2.GUI.Dialogs.NotificationsGame$$LCDOGLFNFJM @ RVA 0x30F6C1C

bool Nekki_SF2_GUI_Dialogs_NotificationsGame__LCDOGLFNFJM
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  NDPMLPGANCI_o *__this_00;
  long lVar3;
  void *pvVar4;
  UnityEngine_Object_o *x;
  
  if ((DAT_04566464 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__);
    DAT_04566464 = 1;
  }
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 == (NDPMLPGANCI_o *)0x0) {
LAB_031f6d14:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar2 = NDPMLPGANCI__FFIOCEOHPEM(__this_00,(MethodInfo *)0x0);
  bVar1 = false;
  if ((iVar2 != 0) && (iVar2 != 10)) {
    if (iVar2 == 6) {
      lVar3 = *(long *)(Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__ + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      x = (UnityEngine_Object_o *)**(undefined8 **)(lVar3 + 0xb8);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if (x == (UnityEngine_Object_o *)0x0) goto LAB_031f6d14;
        if (((x[6].klass != (UnityEngine_Object_c *)0x0) &&
            (pvVar4 = ((x[6].klass)->_1).this_arg.data, pvVar4 != (void *)0x0)) &&
           (*(int *)((long)pvVar4 + 0x18) != 0)) {
          return false;
        }
      }
    }
    bVar1 = true;
  }
  return bVar1;
}

