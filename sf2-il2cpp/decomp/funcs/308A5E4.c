// Nekki.SF2.GUI.LabelAliasLE$$FKKCJGFKKBO @ RVA 0x308A5E4

int32_t Nekki_SF2_GUI_LabelAliasLE__FKKCJGFKKBO
                  (Nekki_SF2_GUI_LabelAliasLE_o *__this,MethodInfo *method)

{
  uint16_t ch;
  int32_t iVar1;
  UnityEngine_Font_o *pUVar2;
  System_String_o *pSVar3;
  int iVar4;
  int index;
  UnityEngine_CharacterInfo_Fields local_80;
  
  local_80.flipped = false;
  local_80._49_3_ = 0;
  local_80.vert.fields.m_YMin = 0.0;
  local_80.vert.fields.m_Width = 0.0;
  local_80.uv.fields.m_Height = 0.0;
  local_80.vert.fields.m_XMin = 0.0;
  local_80.size = 0;
  local_80.style = 0;
  local_80.vert.fields.m_Height = 0.0;
  local_80.width = 0.0;
  local_80.uv.fields.m_YMin = 0.0;
  local_80.uv.fields.m_Width = 0.0;
  local_80.index = 0;
  local_80.uv.fields.m_XMin = 0.0;
  pUVar2 = UnityEngine_UI_Text__get_font((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
  pSVar3 = Nekki_SF2_GUI_LabelAlias__get_text
                     ((Nekki_SF2_GUI_LabelAlias_o *)__this,(MethodInfo *)0x0);
  iVar1 = UnityEngine_UI_Text__get_fontSize((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_Font_o *)0x0) {
    UnityEngine_Font__RequestCharactersInTexture(pUVar2,pSVar3,iVar1,(MethodInfo *)0x0);
    pSVar3 = Nekki_SF2_GUI_LabelAlias__get_text
                       ((Nekki_SF2_GUI_LabelAlias_o *)__this,(MethodInfo *)0x0);
    if (pSVar3 != (System_String_o *)0x0) {
      if ((pSVar3->fields)._stringLength < 1) {
        iVar4 = 0;
      }
      else {
        index = 0;
        iVar4 = 0;
        do {
          ch = System_String__get_Chars(pSVar3,index,(MethodInfo *)0x0);
          pUVar2 = UnityEngine_UI_Text__get_font((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
          iVar1 = UnityEngine_UI_Text__get_fontSize
                            ((UnityEngine_UI_Text_o *)__this,(MethodInfo *)0x0);
          if (pUVar2 == (UnityEngine_Font_o *)0x0) goto LAB_0318a704;
          UnityEngine_Font__GetCharacterInfo
                    (pUVar2,ch,(UnityEngine_CharacterInfo_o *)&local_80,iVar1,(MethodInfo *)0x0);
          iVar1 = UnityEngine_CharacterInfo__get_advance
                            ((UnityEngine_CharacterInfo_o *)&local_80,(MethodInfo *)0x0);
          index = index + 1;
          iVar4 = iVar1 + iVar4;
        } while (index < (pSVar3->fields)._stringLength);
      }
      return iVar4;
    }
  }
LAB_0318a704:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

