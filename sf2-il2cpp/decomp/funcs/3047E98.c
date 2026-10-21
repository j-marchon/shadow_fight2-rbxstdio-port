// Nekki.SF2.GUI.Pvp.PlayerMenu$$OPJMMBKBCLC @ RVA 0x3047E98

UnityEngine_Sprite_o *
Nekki_SF2_GUI_Pvp_PlayerMenu__OPJMMBKBCLC(Nekki_SF2_GUI_Pvp_PlayerMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Sprite_o *pUVar1;
  
  if ((DAT_04565df5 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Resources_Load<Sprite>__);
    FUN_01bab630(&StringLiteral_12930);
    DAT_04565df5 = 1;
  }
  pUVar1 = (UnityEngine_Sprite_o *)
           UnityEngine_Resources__Load<object>
                     (StringLiteral_12930,Method_UnityEngine_Resources_Load<Sprite>__);
  return pUVar1;
}

