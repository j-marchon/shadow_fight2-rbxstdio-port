// LabelButton$$get_Alias @ RVA 0x308AD94

System_String_o * LabelButton__get_Alias(LabelButton_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  
  pNVar1 = (__this->fields).Label;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    return *(System_String_o **)&(pNVar1->fields)._useLabelLineSpacing;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

