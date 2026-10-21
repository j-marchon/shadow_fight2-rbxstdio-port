// Nekki.SF2.GUI.TextPic.AIBKGOEIOLC$$IKMLAEGCJHC @ RVA 0x30B9E38

int32_t Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__IKMLAEGCJHC
                  (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *pSVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04566225 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Count__);
    DAT_04566225 = 1;
  }
  pSVar1 = (__this->fields)._FEKFGIIMCOE_k__BackingField;
  if (pSVar1 != (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

