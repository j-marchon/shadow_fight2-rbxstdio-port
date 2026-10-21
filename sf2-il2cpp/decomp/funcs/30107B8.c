// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyPlayerCell$$SetKickable @ RVA 0x30107B8

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell__SetKickable
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyPlayerCell_o *__this,bool CKPLGFKDOHC
               ,MethodInfo *method)

{
  SFButton_o *pSVar1;
  UnityEngine_GameObject_o *__this_00;
  
                    /* try { // try from 031107b8 to 032107bb has its CatchHandler @ 031107bc */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031107b8 with catch @ 031107bc
                       try { // try from 031107bc to 032107eb has its CatchHandler @ 0311066c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031106c4 with catch @ 031107c0
                       catch(type#1 @ 03f99f68) { ... } // from try @ 03110700 with catch @ 031107c0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03110720 with catch @ 031107c4
                        */
  if ((__this->fields).DICNIMJBGML == (GKLPDMLELJF_o *)0x0) {
                    /* try { // try from 03110818 to 0321082f has its CatchHandler @ 03110844 */
    return;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031107b4 with catch @ 031107cc
                        */
  pSVar1 = (__this->fields)._kickButton;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031106d4 with catch @ 031107d0
                        */
  if ((pSVar1 != (SFButton_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pSVar1,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 031107ec to 032107ef has its CatchHandler @ 03110800 */
    UnityEngine_GameObject__SetActive(__this_00,CKPLGFKDOHC,(MethodInfo *)0x0);
    pSVar1 = (__this->fields)._kickButton;
    if (pSVar1 != (SFButton_o *)0x0) {
                    /* catch() { ... } // from try @ 031107ec with catch @ 03110800 */
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)pSVar1,CKPLGFKDOHC,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

