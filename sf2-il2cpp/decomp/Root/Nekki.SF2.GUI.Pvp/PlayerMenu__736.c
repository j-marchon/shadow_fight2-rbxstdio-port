// TypeDefIndex 736
// Namespace: Nekki.SF2.GUI.Pvp
// public class PlayerMenu : UIModule
// Fields:
//   private Button _PlayerOneInputSelector; // 0x28
//   private GameObject _PlayerOneGamepad; // 0x30
//   private GameObject _PlayerOneKeyboard; // 0x38
//   private LabelAlias _PlayerOneControlIndex; // 0x40
//   private Button _PlayerTwoInputSelector; // 0x48
//   private GameObject _PlayerTwoGamepad; // 0x50
//   private GameObject _PlayerTwoKeyboard; // 0x58
//   private LabelAlias _PlayerTwoControlIndex; // 0x60
//   private LabelAlias _PlayerOneLabel; // 0x68
//   private LabelAlias _PlayerTwoLabel; // 0x70
//   private LabelAlias _MenuHeader; // 0x78
//   private ResolutionImage _PlayerOneAvatar; // 0x80
//   private ResolutionImage _PlayerTwoAvatar; // 0x88

// ===== public void SetHeader(string JNKPNMPDGCA)  [RVA 0x3047840]
// Nekki.SF2.GUI.Pvp.PlayerMenu$$SetHeader @ RVA 0x3047840

void Nekki_SF2_GUI_Pvp_PlayerMenu__SetHeader
               (Nekki_SF2_GUI_Pvp_PlayerMenu_o *__this,System_String_o *JNKPNMPDGCA,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  
                    /* catch() { ... } // from try @ 0314785c with catch @ 03147840
                       catch() { ... } // from try @ 03147898 with catch @ 03147840
                       catch() { ... } // from try @ 031478e0 with catch @ 03147840 */
  __this_00 = (__this->fields)._MenuHeader;
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,JNKPNMPDGCA,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03147858 to 0324785b has its CatchHandler @ 03147868 */
  FUN_01bab8c8();
}


// ===== public void OnPlayerTwoSwitchInputClick()  [RVA 0x304785C]
// Nekki.SF2.GUI.Pvp.PlayerMenu$$OnPlayerTwoSwitchInputClick @ RVA 0x304785C

void Nekki_SF2_GUI_Pvp_PlayerMenu__OnPlayerTwoSwitchInputClick
               (Nekki_SF2_GUI_Pvp_PlayerMenu_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
                    /* try { // try from 0314785c to 0324787f has its CatchHandler @ 03147840 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03147858 with catch @ 03147868
                        */
  if ((DAT_04565dee & 1) == 0) {
                    /* try { // try from 03147880 to 03247897 has its CatchHandler @ 031478d8 */
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
    DAT_04565dee = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03147898 to 032478c7 has its CatchHandler @ 03147840 */
  if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo,method);
  }
  Nekki_SF2_GUI_Pvp_PvpScene__SwitchPlayerTwoInput((MethodInfo *)0x0);
  if (DAT_04565e5b == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
    DAT_04565e5b = '\x01';
  }
                    /* try { // try from 031478c8 to 032478d7 has its CatchHandler @ 031478d8 */
  if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 03147880 with catch @ 031478d8
                       catch() { ... } // from try @ 031478c8 with catch @ 031478d8 */
  }
                    /* try { // try from 031478dc to 032478df has its CatchHandler @ 031478e8 */
                    /* try { // try from 031478e0 to 032478eb has its CatchHandler @ 03147840 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031478dc with catch @ 031478e8
                        */
  Nekki_SF2_GUI_Pvp_PlayerMenu__RefreshControlUI
            (__this,Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->IHDCFNPHCHM,in_x2);
  return;
}


// ===== public void SetSecondPlayerAvailable(bool CJNHFNHJHPE)  [RVA 0x3047B74]
// Nekki.SF2.GUI.Pvp.PlayerMenu$$SetSecondPlayerAvailable @ RVA 0x3047B74

void Nekki_SF2_GUI_Pvp_PlayerMenu__SetSecondPlayerAvailable
               (Nekki_SF2_GUI_Pvp_PlayerMenu_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  undefined8 *puVar1;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  
                    /* try { // try from 03147b78 to 03247b83 has its CatchHandler @ 03147c84 */
                    /* try { // try from 03147b84 to 03247b8b has its CatchHandler @ 03147c80 */
  if ((DAT_04565def & 1) == 0) {
    FUN_01bab630(&StringLiteral_19794/*"nameBot"*/);
    FUN_01bab630(&StringLiteral_19795/*"namePlayer2"*/);
                    /* try { // try from 03147ba8 to 03247bab has its CatchHandler @ 03147c88 */
    DAT_04565def = 1;
  }
  __this_00 = (__this->fields)._PlayerTwoLabel;
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    puVar1 = &StringLiteral_19795/*"namePlayer2"*/;
                    /* try { // try from 03147bc8 to 03247be7 has its CatchHandler @ 03147c78 */
    if (!CJNHFNHJHPE) {
      puVar1 = &StringLiteral_19794/*"nameBot"*/;
    }
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,(System_String_o *)*puVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OnPlayerOneSwitchInputClick()  [RVA 0x3047BE8]
// Nekki.SF2.GUI.Pvp.PlayerMenu$$OnPlayerOneSwitchInputClick @ RVA 0x3047BE8

void Nekki_SF2_GUI_Pvp_PlayerMenu__OnPlayerOneSwitchInputClick
               (Nekki_SF2_GUI_Pvp_PlayerMenu_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
                    /* try { // try from 03147bf4 to 03247c0b has its CatchHandler @ 03147c74 */
  if ((DAT_04565df0 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
    DAT_04565df0 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03147c20 to 03247c3b has its CatchHandler @ 03147c7c */
  if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo,method);
  }
  Nekki_SF2_GUI_Pvp_PvpScene__SwitchPlayerOneInput((MethodInfo *)0x0);
  if (DAT_04565e5c == '\0') {
                    /* try { // try from 03147c40 to 03247c53 has its CatchHandler @ 03147c88 */
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
    DAT_04565e5c = '\x01';
  }
                    /* try { // try from 03147c54 to 03247c9f has its CatchHandler @ 03147b14 */
  if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03147bf4 with catch @ 03147c74
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03147bc8 with catch @ 03147c78
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03147c20 with catch @ 03147c7c
                        */
  Nekki_SF2_GUI_Pvp_PlayerMenu__RefreshControlUI
            (__this,Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->DHDNCFLOPNH,in_x2);
  return;
}


// ===== private string JMNFBBKKIDG()  [RVA 0x3047C80]
// Nekki.SF2.GUI.Pvp.PlayerMenu$$JMNFBBKKIDG @ RVA 0x3047C80

System_String_o *
Nekki_SF2_GUI_Pvp_PlayerMenu__JMNFBBKKIDG(Nekki_SF2_GUI_Pvp_PlayerMenu_o *__this,MethodInfo *method)

{
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03147b84 with catch @ 03147c80
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03147b78 with catch @ 03147c84
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03147ba8 with catch @ 03147c88
                       catch(type#1 @ 03f99f68) { ... } // from try @ 03147c40 with catch @ 03147c88
                        */
  if ((DAT_04565df1 & 1) == 0) {
                    /* try { // try from 03147ca0 to 03247ca3 has its CatchHandler @ 03147cdc */
                    /* try { // try from 03147ca4 to 03247ce3 has its CatchHandler @ 03147b14 */
    FUN_01bab630(&StringLiteral_20226/*"playerName"*/);
    DAT_04565df1 = 1;
  }
  return StringLiteral_20226/*"playerName"*/;
}


// ===== protected override void GIENGNEGHPJ()  [RVA 0x3047CC0]
// Nekki.SF2.GUI.Pvp.PlayerMenu$$GIENGNEGHPJ @ RVA 0x3047CC0

void Nekki_SF2_GUI_Pvp_PlayerMenu__GIENGNEGHPJ
               (Nekki_SF2_GUI_Pvp_PlayerMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Sprite_o *value;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_UI_Button_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *method_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  undefined1 auVar4 [16];
  
  if ((DAT_04565df2 & 1) == 0) {
                    /* catch() { ... } // from try @ 03147ca0 with catch @ 03147cdc */
                    /* try { // try from 03147ce4 to 03247cef has its CatchHandler @ 03147d04 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 03147cf0 to 03247cfb has its CatchHandler @ 03147b14 */
    FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
                    /* try { // try from 03147cfc to 03247d03 has its CatchHandler @ 03147d04 */
    FUN_01bab630(&StringLiteral_8708/*"MAGIC!"*/);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03147ce4 with catch @ 03147d04
                       catch(type#2 @ 00000000) { ... } // from try @ 03147cfc with catch @ 03147d04
                        */
    DAT_04565df2 = 1;
  }
  Nekki_SF2_GUI_UIModule__GIENGNEGHPJ((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  pNVar3 = (__this->fields)._PlayerOneLabel;
  if ((DAT_04565df1 & 1) == 0) {
    FUN_01bab630(&StringLiteral_20226/*"playerName"*/);
    DAT_04565df1 = 1;
  }
  if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    auVar4 = (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                       (pNVar3,StringLiteral_20226/*"playerName"*/,(pNVar3->klass->vtable)._75_set_text.method);
    value = Nekki_SF2_GUI_Pvp_PlayerMenu__OPJMMBKBCLC(auVar4._0_8_,auVar4._8_8_);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__Log(StringLiteral_8708/*"MAGIC!"*/,(MethodInfo *)0x0);
    __this_00 = (__this->fields)._PlayerOneAvatar;
    if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      UnityEngine_UI_Image__set_sprite((UnityEngine_UI_Image_o *)__this_00,value,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._PlayerOneInputSelector;
      if ((pUVar1 != (UnityEngine_UI_Button_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._PlayerTwoInputSelector;
        if ((pUVar1 != (UnityEngine_UI_Button_o *)0x0) &&
           (pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
          method_00 = (MethodInfo *)0x0;
          UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
          if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565e5c == '\0') {
            FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
            DAT_04565e5c = '\x01';
          }
          if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          Nekki_SF2_GUI_Pvp_PlayerMenu__RefreshControlUI
                    (__this,Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->DHDNCFLOPNH,
                     method_00);
          if (DAT_04565e5b == '\0') {
            FUN_01bab630(&Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo);
            DAT_04565e5b = '\x01';
          }
          if ((Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          Nekki_SF2_GUI_Pvp_PlayerMenu__RefreshControlUI
                    (__this,Nekki_SF2_GUI_Pvp_PvpScene_TypeInfo->static_fields->IHDCFNPHCHM,
                     method_00);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void RefreshControlUI(NLIDHEAMLMC KOPFEMILKAJ)  [RVA 0x30478F4]
// Nekki.SF2.GUI.Pvp.PlayerMenu$$RefreshControlUI @ RVA 0x30478F4

void Nekki_SF2_GUI_Pvp_PlayerMenu__RefreshControlUI
               (Nekki_SF2_GUI_Pvp_PlayerMenu_o *__this,NLIDHEAMLMC_o *KOPFEMILKAJ,MethodInfo *method
               )

{
  System_Object_array *args;
  Il2CppObject *pIVar1;
  long lVar2;
  UnityEngine_GameObject_o *pUVar3;
  System_String_o *CJNHFNHJHPE;
  undefined8 uVar4;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  int32_t *piVar5;
  int32_t local_4c;
  int32_t local_48;
  int32_t local_44;
  
  if ((DAT_04565df3 & 1) == 0) {
    FUN_01bab630(&ADINBPPGIOA_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_10332/*"Player[{0}]: InputType={1}, ControlIndex={2}"*/);
    DAT_04565df3 = 1;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,3);
  if (KOPFEMILKAJ != (NLIDHEAMLMC_o *)0x0) {
    local_44 = (KOPFEMILKAJ->fields).NJCMGCGNCLJ;
    pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_44);
    if (args != (System_Object_array *)0x0) {
      if ((pIVar1 != (Il2CppObject *)0x0) &&
         (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0)) {
LAB_03147b68:
        uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
        FUN_01bab798(uVar4,0);
      }
      if ((int)args->max_length == 0) {
LAB_03147b64:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      args->m_Items[0] = pIVar1;
      thunk_FUN_01c20e04(args->m_Items,pIVar1);
      local_48 = (KOPFEMILKAJ->fields).ELHIGHABJBJ;
      pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(ADINBPPGIOA_TypeInfo,&local_48);
      if ((pIVar1 != (Il2CppObject *)0x0) &&
         (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0))
      goto LAB_03147b68;
      if ((uint)args->max_length < 2) goto LAB_03147b64;
      args->m_Items[1] = pIVar1;
      thunk_FUN_01c20e04(args->m_Items + 1,pIVar1);
      piVar5 = &(KOPFEMILKAJ->fields).OFFPEKODFPE;
      local_4c = *piVar5;
      pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_4c);
      if ((pIVar1 != (Il2CppObject *)0x0) &&
         (lVar2 = thunk_FUN_01bda71c(pIVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0))
      goto LAB_03147b68;
      if ((uint)args->max_length < 3) goto LAB_03147b64;
      args->m_Items[2] = pIVar1;
      thunk_FUN_01c20e04(args->m_Items + 2,pIVar1);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogFormat(StringLiteral_10332/*"Player[{0}]: InputType={1}, ControlIndex={2}"*/,args,(MethodInfo *)0x0);
      if ((KOPFEMILKAJ->fields).NJCMGCGNCLJ == 0) {
        pUVar3 = (__this->fields)._PlayerOneGamepad;
        if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_03147b60;
        UnityEngine_GameObject__SetActive
                  (pUVar3,(KOPFEMILKAJ->fields).ELHIGHABJBJ == 2,(MethodInfo *)0x0);
        pUVar3 = (__this->fields)._PlayerOneKeyboard;
        if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_03147b60;
                    /* try { // try from 03147b14 to 03247b77 has its CatchHandler @ 03147b14
                       catch() { ... } // from try @ 03147b14 with catch @ 03147b14
                       catch() { ... } // from try @ 03147c54 with catch @ 03147b14
                       catch() { ... } // from try @ 03147ca4 with catch @ 03147b14
                       catch() { ... } // from try @ 03147cf0 with catch @ 03147b14 */
        UnityEngine_GameObject__SetActive
                  (pUVar3,(KOPFEMILKAJ->fields).ELHIGHABJBJ == 1,(MethodInfo *)0x0);
        __this_00 = (__this->fields)._PlayerOneControlIndex;
      }
      else {
        pUVar3 = (__this->fields)._PlayerTwoGamepad;
        if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_03147b60;
        UnityEngine_GameObject__SetActive
                  (pUVar3,(KOPFEMILKAJ->fields).ELHIGHABJBJ == 2,(MethodInfo *)0x0);
        pUVar3 = (__this->fields)._PlayerTwoKeyboard;
        if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_03147b60;
        UnityEngine_GameObject__SetActive
                  (pUVar3,(KOPFEMILKAJ->fields).ELHIGHABJBJ == 1,(MethodInfo *)0x0);
        __this_00 = (__this->fields)._PlayerTwoControlIndex;
      }
      CJNHFNHJHPE = System_Int32__ToString((int32_t)piVar5,(MethodInfo *)0x0);
      if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03147b60:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3047EF0]
// Nekki.SF2.GUI.Pvp.PlayerMenu$$.ctor @ RVA 0x3047EF0

void Nekki_SF2_GUI_Pvp_PlayerMenu___ctor(Nekki_SF2_GUI_Pvp_PlayerMenu_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04565df4 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_04565df4 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_UIModule_TypeInfo,method);
  }
  Nekki_SF2_GUI_UIModule___ctor((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private Sprite OPJMMBKBCLC()  [RVA 0x3047E98]
// Nekki.SF2.GUI.Pvp.PlayerMenu$$OPJMMBKBCLC @ RVA 0x3047E98

UnityEngine_Sprite_o *
Nekki_SF2_GUI_Pvp_PlayerMenu__OPJMMBKBCLC(Nekki_SF2_GUI_Pvp_PlayerMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Sprite_o *pUVar1;
  
  if ((DAT_04565df5 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Resources_Load<Sprite>__);
    FUN_01bab630(&StringLiteral_12930/*"Textures/buttons/debug_btn"*/);
    DAT_04565df5 = 1;
  }
  pUVar1 = (UnityEngine_Sprite_o *)
           UnityEngine_Resources__Load<object>
                     (StringLiteral_12930/*"Textures/buttons/debug_btn"*/,Method_UnityEngine_Resources_Load<Sprite>__);
  return pUVar1;
}

