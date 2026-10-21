// MainMenuRaidRatingPanel$$SetClanVisible @ RVA 0x32BCD24

void MainMenuRaidRatingPanel__SetClanVisible
               (MainMenuRaidRatingPanel_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Object_o *x;
  
  if ((DAT_045674a1 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045674a1 = 1;
  }
  x = (UnityEngine_Object_o *)(__this->fields)._clanPanel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields)._clanPanel;
    if ((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar2 = UnityEngine_GameObject__get_gameObject(pUVar2,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

