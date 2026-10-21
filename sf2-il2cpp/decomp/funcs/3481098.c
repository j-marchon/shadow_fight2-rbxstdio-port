// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$.ctor @ RVA 0x3481098

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_BEMANDGDHFJ_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_BEMANDGDHFJ_o **ppNVar1;
  CNIFAIKGHKO_o *__this_01;
  CNIFAIKGHKO_o **ppCVar2;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 035810a0 to 036810a7 has its CatchHandler @ 03581234 */
                    /* try { // try from 035810ac to 036810b3 has its CatchHandler @ 03581228 */
  if ((DAT_04568380 & 1) == 0) {
                    /* try { // try from 035810c4 to 036810cb has its CatchHandler @ 03581210 */
                    /* try { // try from 035810cc to 036810df has its CatchHandler @ 03581208 */
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_BEMANDGDHFJ_TypeInfo);
    FUN_01bab630(&CNIFAIKGHKO_TypeInfo);
    DAT_04568380 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 035810e4 to 036810ef has its CatchHandler @ 03581214 */
  __this_00 = (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_BEMANDGDHFJ_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_BEMANDGDHFJ_TypeInfo,
                                 method);
                    /* try { // try from 035810f0 to 0368110b has its CatchHandler @ 03581254 */
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  ppNVar1 = &(__this->fields).OMFKAKGPCCM;
  *ppNVar1 = __this_00;
  thunk_FUN_01c20e04(ppNVar1,__this_00);
  __this_01 = (CNIFAIKGHKO_o *)thunk_FUN_01bda818(CNIFAIKGHKO_TypeInfo);
  CNIFAIKGHKO___ctor(__this_01,(MethodInfo *)0x0);
  ppCVar2 = &(__this->fields).JECONAHEKIN;
                    /* try { // try from 0358111c to 03681127 has its CatchHandler @ 0358122c */
  *ppCVar2 = __this_01;
                    /* try { // try from 03581128 to 036811b7 has its CatchHandler @ 03580994 */
  thunk_FUN_01c20e04(ppCVar2,__this_01);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

