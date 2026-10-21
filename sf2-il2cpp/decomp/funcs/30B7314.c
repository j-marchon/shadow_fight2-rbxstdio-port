// Nekki.SF2.GUI.TextPic.AIBKGOEIOLC$$ILAMEAMIMMP @ RVA 0x30B7314

int32_t Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__ILAMEAMIMMP
                  (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04566227 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_get_Count__);
                    /* try { // try from 031b7338 to 032b735b has its CatchHandler @ 031b73a0 */
    DAT_04566227 = 1;
  }
  pSVar1 = (__this->fields)._NNFPEOCIPFE_k__BackingField;
  if (pSVar1 != (System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

