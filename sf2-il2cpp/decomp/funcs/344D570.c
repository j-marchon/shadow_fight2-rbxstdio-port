// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$ChangeCoinsIcon @ RVA 0x344D570

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__ChangeCoinsIcon
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,System_String_o *HCAAAAMDCNO,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  
                    /* try { // try from 0354d578 to 0364d583 has its CatchHandler @ 0354d258 */
                    /* try { // try from 0354d584 to 0364d58b has its CatchHandler @ 0354d58c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0354d510 with catch @ 0354d58c
                       catch(type#2 @ 00000000) { ... } // from try @ 0354d584 with catch @ 0354d58c
                        */
                    /* try { // try from 0354d590 to 0364d86f has its CatchHandler @ 0354d590
                       catch() { ... } // from try @ 0354d590 with catch @ 0354d590
                       catch() { ... } // from try @ 0354d9a8 with catch @ 0354d590
                       catch() { ... } // from try @ 0354daa4 with catch @ 0354d590
                       catch() { ... } // from try @ 0354dab0 with catch @ 0354d590
                       catch() { ... } // from try @ 0354db7c with catch @ 0354d590 */
  if ((DAT_0456827f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456827f = 1;
  }
  pNVar2 = (__this->fields)._iconCoins;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar2,(MethodInfo *)0x0);
  if ((bVar1) && (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(HCAAAAMDCNO,(MethodInfo *)0x0), !bVar1)) {
    pNVar2 = (__this->fields)._iconCoins;
    if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar2,HCAAAAMDCNO,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

