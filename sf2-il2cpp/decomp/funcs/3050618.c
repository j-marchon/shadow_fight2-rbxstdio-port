// LIDDCJFOOOI$$GFECOLFOILC @ RVA 0x3050618

void LIDDCJFOOOI__GFECOLFOILC
               (LIDDCJFOOOI_o *__this,Nekki_SF2_GUI_Map_MapButton_o *BECCOGAMKJL,bool IJEAMEAFBME,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_Vector2_o UVar2;
  
  if ((BECCOGAMKJL != (Nekki_SF2_GUI_Map_MapButton_o *)0x0) &&
     (pUVar1 = Nekki_SF2_GUI_Map_MapButton__get_RectTransform(BECCOGAMKJL,(MethodInfo *)0x0),
     pUVar1 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar2 = UnityEngine_RectTransform__get_sizeDelta(pUVar1,(MethodInfo *)0x0);
    if (IJEAMEAFBME) {
      (__this->fields).KKJILEFHKAC = UVar2.fields.x + (__this->fields).KKJILEFHKAC;
    }
    else {
      pUVar1 = Nekki_SF2_GUI_Map_MapButton__get_RectTransform(BECCOGAMKJL,(MethodInfo *)0x0);
      if (pUVar1 == (UnityEngine_RectTransform_o *)0x0) goto LAB_0315068c;
      UVar2 = UnityEngine_RectTransform__get_sizeDelta(pUVar1,(MethodInfo *)0x0);
      (__this->fields).HBEMCBKLCOE = (__this->fields).HBEMCBKLCOE + UVar2.fields.y;
    }
    return;
  }
LAB_0315068c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

