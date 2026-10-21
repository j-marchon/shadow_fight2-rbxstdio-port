// Nekki.SF2.GUI.Dialogs.Raids.RaidPlayersRoll$$ShowNotEnoughDamageHint_ForPlayer @ RVA 0x3481154

void Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__ShowNotEnoughDamageHint_ForPlayer
               (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *__this,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *__this_00;
  bool bVar2;
  System_Collections_Generic_List_object__o *__this_01;
  undefined8 uVar3;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar4;
  undefined1 auVar5 [16];
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  auVar5._8_8_ = method;
  auVar5._0_8_ = __this;
  if ((DAT_04568381 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    auVar5 = FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo);
    DAT_04568381 = 1;
  }
  uVar3 = auVar5._0_8_;
                    /* try { // try from 035811b8 to 036811bb has its CatchHandler @ 035812fc */
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
                    /* try { // try from 035811bc to 036811bf has its CatchHandler @ 035812f8 */
  local_50.fields._current = (Il2CppObject *)0x0;
                    /* try { // try from 035811c0 to 036811c3 has its CatchHandler @ 035812f4 */
  pNVar4 = (__this->fields)._scroll;
                    /* try { // try from 035811c4 to 036811c7 has its CatchHandler @ 035812b8 */
                    /* try { // try from 035811c8 to 036811cb has its CatchHandler @ 03581290 */
                    /* try { // try from 035811cc to 036811cf has its CatchHandler @ 03581268 */
  if ((pNVar4 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) &&
     (__this_01 = *(System_Collections_Generic_List_object__o **)&(pNVar4->fields)._snapEase,
     uVar3 = 0, __this_01 != (System_Collections_Generic_List_object__o *)0x0)) {
                    /* try { // try from 035811d0 to 036811d3 has its CatchHandler @ 03581260 */
                    /* try { // try from 035811d4 to 036811d7 has its CatchHandler @ 03581224 */
                    /* try { // try from 035811d8 to 036811db has its CatchHandler @ 0358121c */
                    /* try { // try from 035811dc to 036811df has its CatchHandler @ 03581218 */
                    /* try { // try from 035811e0 to 036811e3 has its CatchHandler @ 03581204 */
                    /* try { // try from 035811e4 to 036811e7 has its CatchHandler @ 03580994 */
                    /* try { // try from 035811e8 to 036811eb has its CatchHandler @ 035811f4 */
                    /* try { // try from 035811ec to 0368132f has its CatchHandler @ 03580994 */
                    /* catch() { ... } // from try @ 035811e8 with catch @ 035811f4 */
                    /* catch() { ... } // from try @ 03581028 with catch @ 035811f8 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,__this_01,
               Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
                    /* catch() { ... } // from try @ 03581088 with catch @ 035811fc */
                    /* catch() { ... } // from try @ 03580ffc with catch @ 03581200 */
                    /* catch() { ... } // from try @ 035811e0 with catch @ 03581204 */
    local_50.fields._list = local_68.fields._list;
                    /* catch() { ... } // from try @ 035810cc with catch @ 03581208 */
    local_50.fields._current = local_68.fields._current;
    while( true ) {
                    /* catch() { ... } // from try @ 03581020 with catch @ 0358120c */
                    /* catch() { ... } // from try @ 035810c4 with catch @ 03581210 */
                    /* catch() { ... } // from try @ 035810e4 with catch @ 03581214 */
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__
                        );
      __this_00 = local_50.fields._current;
                    /* catch() { ... } // from try @ 035811dc with catch @ 03581218 */
      if (!bVar2) {
                    /* catch() { ... } // from try @ 03580f68 with catch @ 03581270 */
                    /* catch() { ... } // from try @ 03580f84 with catch @ 03581274 */
                    /* catch() { ... } // from try @ 03580eb4 with catch @ 03581278 */
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_50,
                   Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
                    /* catch() { ... } // from try @ 03580f48 with catch @ 0358127c */
                    /* catch() { ... } // from try @ 03580f30 with catch @ 03581280 */
                    /* catch() { ... } // from try @ 03580f0c with catch @ 03581284 */
                    /* catch() { ... } // from try @ 03580e68 with catch @ 03581288 */
                    /* catch() { ... } // from try @ 03580ee0 with catch @ 0358128c */
        return;
      }
                    /* catch() { ... } // from try @ 035811d8 with catch @ 0358121c */
                    /* catch() { ... } // from try @ 03581040 with catch @ 03581220 */
      if ((Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *)local_50.fields._current ==
          (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *)0x0) break;
                    /* catch() { ... } // from try @ 035811d4 with catch @ 03581224 */
                    /* catch() { ... } // from try @ 035810ac with catch @ 03581228 */
                    /* catch() { ... } // from try @ 0358111c with catch @ 0358122c */
                    /* catch() { ... } // from try @ 03581008 with catch @ 03581230 */
      bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo->_2).naturalAligment;
                    /* catch() { ... } // from try @ 035810a0 with catch @ 03581234 */
                    /* catch() { ... } // from try @ 03580fe4 with catch @ 03581238 */
                    /* catch() { ... } // from try @ 03581078 with catch @ 0358123c */
                    /* catch() { ... } // from try @ 03580fd4 with catch @ 03581240 */
                    /* catch() { ... } // from try @ 03580e44 with catch @ 03581244 */
                    /* catch() { ... } // from try @ 03580fb8 with catch @ 03581248 */
                    /* catch() { ... } // from try @ 0358104c with catch @ 0358124c */
      if (((((Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_c *)(local_50.fields._current)->klass)->_2).
           naturalAligment < bVar1) ||
         ((((Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_c *)(local_50.fields._current)->klass)->_2).
          typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_TypeInfo)) {
                    /* catch() { ... } // from try @ 035811c8 with catch @ 03581290 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03580f24 with catch @ 03581294 */
        FUN_01babc64(local_50.fields._current);
      }
                    /* catch() { ... } // from try @ 03580f94 with catch @ 03581250 */
                    /* catch() { ... } // from try @ 035810f0 with catch @ 03581254 */
                    /* catch() { ... } // from try @ 03580e48 with catch @ 03581258 */
      bVar2 = Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__get_IsPlayer
                        ((Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *)local_50.fields._current,
                         (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03580e28 with catch @ 0358125c */
      if (bVar2) {
                    /* catch() { ... } // from try @ 035811d0 with catch @ 03581260 */
                    /* catch() { ... } // from try @ 03580f74 with catch @ 03581264 */
                    /* catch() { ... } // from try @ 035811cc with catch @ 03581268 */
        Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__ShowDamageHint
                  ((Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *)__this_00,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03580f50 with catch @ 0358126c */
      }
    }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03580ed4 with catch @ 03581298 */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03580efc with catch @ 0358129c */
  FUN_01bab8c8(uVar3,auVar5._8_8_);
}

