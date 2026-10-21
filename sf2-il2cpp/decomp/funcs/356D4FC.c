// Nekki.SF2.GUI.Menu.MainMenu$$DNLOKLACJHA @ RVA 0x356D4FC

bool Nekki_SF2_GUI_Menu_MainMenu__DNLOKLACJHA
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  long lVar2;
  MethodInfo *extraout_x1;
  UnityEngine_Object_o *x;
  
                    /* try { // try from 0366d510 to 0376d517 has its CatchHandler @ 0367388c */
  if ((DAT_04568c42 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 0366d528 to 0376d52f has its CatchHandler @ 0367386c */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
                    /* try { // try from 0366d53c to 0376d543 has its CatchHandler @ 03673888 */
    DAT_04568c42 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0366d54c to 0376d553 has its CatchHandler @ 03673878 */
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
                    /* try { // try from 0366d554 to 0376d567 has its CatchHandler @ 03673884 */
  method_00 = (MethodInfo *)HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (method_00 != (MethodInfo *)0x0) {
    if (*(char *)((long)&method_00->parameters + 4) == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = Nekki_SF2_GUI_Menu_MainMenu__get_CanShowRaidModeInShopScene(method_00);
                    /* try { // try from 0366d56c to 0376d59b has its CatchHandler @ 03673984 */
      if (!bVar1) {
        lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01b81620();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_01b81620();
        }
        x = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
                    /* try { // try from 0366d5cc to 0376d5cf has its CatchHandler @ 03673328 */
                    /* try { // try from 0366d5d0 to 0376d5d3 has its CatchHandler @ 0367331c */
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
                    /* try { // try from 0366d5e4 to 0376d5eb has its CatchHandler @ 0367328c */
        bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        return bVar1;
      }
      bVar1 = true;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

