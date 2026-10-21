// TypeDefIndex 860
// Namespace: Nekki.SF2.GUI
// [RequireComponent(typeof(LayoutElement))]
// public class LabelAliasLE : LabelAlias
// Fields:
//   private LayoutElement _LayoutElement; // 0x1F0

// ===== public void set_LayoutElement(LayoutElement CJNHFNHJHPE)  [RVA 0x308A4FC]
// Nekki.SF2.GUI.LabelAliasLE$$set_LayoutElement @ RVA 0x308A4FC

void Nekki_SF2_GUI_LabelAliasLE__set_LayoutElement
               (Nekki_SF2_GUI_LabelAliasLE_o *__this,UnityEngine_UI_LayoutElement_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  *(UnityEngine_UI_LayoutElement_o **)&(__this->fields).super._ToUpperCase = CJNHFNHJHPE;
  thunk_FUN_01c20e04(&(__this->fields).super._ToUpperCase);
  return;
}


// ===== public LayoutElement get_LayoutElement()  [RVA 0x308A50C]
// Nekki.SF2.GUI.LabelAliasLE$$get_LayoutElement @ RVA 0x308A50C

UnityEngine_UI_LayoutElement_o *
Nekki_SF2_GUI_LabelAliasLE__get_LayoutElement
          (Nekki_SF2_GUI_LabelAliasLE_o *__this,MethodInfo *method)

{
  return *(UnityEngine_UI_LayoutElement_o **)&(__this->fields).super._ToUpperCase;
}


// ===== public void .ctor()  [RVA 0x308A514]
// Nekki.SF2.GUI.LabelAliasLE$$.ctor @ RVA 0x308A514

void Nekki_SF2_GUI_LabelAliasLE___ctor(Nekki_SF2_GUI_LabelAliasLE_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias___ctor((Nekki_SF2_GUI_LabelAlias_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public string get_text()  [RVA 0x308A51C]
// Nekki.SF2.GUI.LabelAliasLE$$get_text @ RVA 0x308A51C

System_String_o *
Nekki_SF2_GUI_LabelAliasLE__get_text(Nekki_SF2_GUI_LabelAliasLE_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = Nekki_SF2_GUI_LabelAlias__get_text
                     ((Nekki_SF2_GUI_LabelAlias_o *)__this,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== protected override void Awake()  [RVA 0x308A524]
// Nekki.SF2.GUI.LabelAliasLE$$Awake @ RVA 0x308A524

void Nekki_SF2_GUI_LabelAliasLE__Awake(Nekki_SF2_GUI_LabelAliasLE_o *__this,MethodInfo *method)

{
  bool_conflict *pbVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  Il2CppObject *pIVar3;
  UnityEngine_Object_o *x;
  
  if ((DAT_04566048 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<LayoutElement>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566048 = 1;
  }
  Nekki_SF2_GUI_LabelAlias__Awake((Nekki_SF2_GUI_LabelAlias_o *)__this,(MethodInfo *)0x0);
  x = *(UnityEngine_Object_o **)&(__this->fields).super._ToUpperCase;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    __this_00 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      pbVar1 = &(__this->fields).super._ToUpperCase;
      pIVar3 = UnityEngine_GameObject__GetComponent<object>
                         (__this_00,Method_UnityEngine_GameObject_GetComponent<LayoutElement>__);
      *(Il2CppObject **)pbVar1 = pIVar3;
      thunk_FUN_01c20e04(pbVar1,pIVar3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private int FKKCJGFKKBO()  [RVA 0x308A5E4]
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


// ===== public void set_text(string CJNHFNHJHPE)  [RVA 0x308A708]
// Nekki.SF2.GUI.LabelAliasLE$$set_text @ RVA 0x308A708

void Nekki_SF2_GUI_LabelAliasLE__set_text
               (Nekki_SF2_GUI_LabelAliasLE_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method
               )

{
  bool bVar1;
  int32_t iVar2;
  MethodInfo *method_00;
  UnityEngine_Object_o *x;
  long *plVar3;
  
  if ((DAT_04566049 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566049 = 1;
  }
  Nekki_SF2_GUI_LabelAlias__set_text
            ((Nekki_SF2_GUI_LabelAlias_o *)__this,CJNHFNHJHPE,(MethodInfo *)0x0);
  x = *(UnityEngine_Object_o **)&(__this->fields).super._ToUpperCase;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    plVar3 = *(long **)&(__this->fields).super._ToUpperCase;
    iVar2 = Nekki_SF2_GUI_LabelAliasLE__FKKCJGFKKBO(__this,method_00);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0318a7ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x338))((float)iVar2,plVar3,*(undefined8 *)(*plVar3 + 0x340));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

