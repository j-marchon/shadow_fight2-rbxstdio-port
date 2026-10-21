// MGNPHCAAEIO$$BHMIDFLCAHJ @ RVA 0x340CEF4

void MGNPHCAAEIO__BHMIDFLCAHJ(MethodInfo *method)

{
  bool bVar1;
  NDPMLPGANCI_o *__this;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar2;
  
  if ((DAT_0456804c & 1) == 0) {
                    /* try { // try from 0350cf08 to 0360cf37 has its CatchHandler @ 0350cc64 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456804c = 1;
  }
  if (DAT_04565b84 == '\0') {
                    /* try { // try from 0350cf38 to 0360cf47 has its CatchHandler @ 0350cf48 */
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
    DAT_04565b84 = '\x01';
  }
                    /* catch() { ... } // from try @ 0350cef0 with catch @ 0350cf48
                       catch() { ... } // from try @ 0350cf38 with catch @ 0350cf48 */
                    /* try { // try from 0350cf4c to 0360cf4f has its CatchHandler @ 0350cf58 */
                    /* try { // try from 0350cf50 to 0360cf5b has its CatchHandler @ 0350cc64 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0350ce88 with catch @ 0350cf58
                       catch(type#2 @ 00000000) { ... } // from try @ 0350cf4c with catch @ 0350cf58
                        */
  pNVar2 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this != (NDPMLPGANCI_o *)0x0) {
      bVar1 = NDPMLPGANCI__FHLFKIOFBKL(__this,(MethodInfo *)0x0);
      if (DAT_04565b84 == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
        DAT_04565b84 = '\x01';
      }
      pNVar2 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
      if (pNVar2 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
        Nekki_SF2_GUI_Menu_MainMenu__ShowDojoAdvertiseButton(pNVar2,bVar1,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

