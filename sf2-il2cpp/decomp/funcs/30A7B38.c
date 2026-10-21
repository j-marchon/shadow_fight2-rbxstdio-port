// Nekki.SF2.GUI.Fight.ScreenFight$$CreateWinner @ RVA 0x30A7B38

void Nekki_SF2_GUI_Fight_ScreenFight__CreateWinner
               (Nekki_SF2_GUI_Fight_ScreenFight_o *__this,bool MEDOMNAEFNH,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *pMVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  int32_t iVar4;
  System_String_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar5;
  
  pMVar3 = (MethodInfo *)(ulong)MEDOMNAEFNH;
  if ((DAT_04566180 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_6370);
    FUN_01bab630(&StringLiteral_6372);
    DAT_04566180 = 1;
    pMVar3 = extraout_x1;
  }
  Nekki_SF2_GUI_Fight_ScreenFight__ClearPictures(__this,pMVar3);
  if (__this != (Nekki_SF2_GUI_Fight_ScreenFight_o *)0x0) {
    iVar4 = 6;
    if (!MEDOMNAEFNH) {
      iVar4 = 7;
    }
    (__this->fields).Type = iVar4;
    pNVar5 = (__this->fields).image;
    puVar1 = &StringLiteral_6372;
    if (!MEDOMNAEFNH) {
      puVar1 = &StringLiteral_6370;
    }
    CJNHFNHJHPE = (System_String_o *)*puVar1;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    pMVar3 = extraout_x1_00;
    if (!bVar2) {
LAB_031a7c30:
      Nekki_SF2_GUI_Fight_ScreenFight__BMMLKHIHOEE(__this,1.166,pMVar3);
      return;
    }
    pNVar5 = (__this->fields).image;
    if (pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar5,CJNHFNHJHPE,(MethodInfo *)0x0);
      pNVar5 = (__this->fields).image;
      if (pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        (*(pNVar5->klass->vtable)._45_SetNativeSize.methodPtr)
                  (pNVar5,(pNVar5->klass->vtable)._45_SetNativeSize.method);
        pNVar5 = (__this->fields).image;
        if ((pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (__this_00 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
           __this_00 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
          pMVar3 = extraout_x1_01;
          goto LAB_031a7c30;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

