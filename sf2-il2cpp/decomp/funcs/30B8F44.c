// Nekki.SF2.GUI.TextPic$$.cctor @ RVA 0x30B8F44

void Nekki_SF2_GUI_TextPic___cctor(MethodInfo *method)

{
  UnityEngine_UIVertex_array *pUVar1;
  
  if ((DAT_0456620b & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_TextPic_TypeInfo);
    FUN_01bab630(&UnityEngine_UIVertex___TypeInfo);
    DAT_0456620b = 1;
  }
  pUVar1 = (UnityEngine_UIVertex_array *)FUN_01bab718(UnityEngine_UIVertex___TypeInfo,4);
  Nekki_SF2_GUI_TextPic_TypeInfo->static_fields->FDHHLOLJNFE = pUVar1;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_TextPic_TypeInfo->static_fields,pUVar1);
  return;
}

