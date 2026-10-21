// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$BNMHGMKOCNJ @ RVA 0x33F8F08

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__BNMHGMKOCNJ
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,
               MGDJPGGPDJI_o *LCOGPHINKHN,MethodInfo *method)

{
  bool bVar1;
  
                    /* try { // try from 034f8f08 to 035f8f2f has its CatchHandler @ 034f8f44 */
  bVar1 = UnityEngine_EventSystems_UIBehaviour__IsDestroyed
                    ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  if (!bVar1) {
    if (LCOGPHINKHN == (MGDJPGGPDJI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 034f8f30 to 035f8f3b has its CatchHandler @ 034f8be0 */
                    /* try { // try from 034f8f3c to 035f8f43 has its CatchHandler @ 034f8f44 */
    if (((LCOGPHINKHN->fields).ANAJGHJEEOC == (__this->fields).AMEAGHFFDFI) &&
       ((LCOGPHINKHN->fields).BDPMJNBHKIJ == 1)) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034f8f08 with catch @ 034f8f44
                       catch(type#2 @ 00000000) { ... } // from try @ 034f8f3c with catch @ 034f8f44
                        */
      JJPNLEPEAFM__PPDAJIKOKBE(false,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}

