// Nekki.SF2.GUI.TableViewScroll$$set_SizeDelta @ RVA 0x3110E1C

void Nekki_SF2_GUI_TableViewScroll__set_SizeDelta
               (Nekki_SF2_GUI_TableViewScroll_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  int iVar1;
  UnityEngine_RectTransform_o *__this_00;
  float fVar2;
  UnityEngine_Vector2_o UVar3;
  
  __this_00 = (__this->fields).super.m_Content;
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar1 = (__this->fields).HBFGPJPFNBG;
  UVar3 = UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
  fVar2 = UVar3.fields.y;
  if (iVar1 != 1) {
    fVar2 = CJNHFNHJHPE;
    CJNHFNHJHPE = UVar3.fields.x;
  }
  UVar3.fields.y = fVar2;
  UVar3.fields.x = CJNHFNHJHPE;
  UnityEngine_RectTransform__set_sizeDelta(__this_00,UVar3,(MethodInfo *)0x0);
  return;
}

