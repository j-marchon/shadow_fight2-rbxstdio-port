// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidSlider$$EJOCEINJHFN @ RVA 0x31C6E10

void Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__EJOCEINJHFN
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *__this,
               Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *LGCACNFAMOI,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  byte bVar2;
  bool bVar3;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_GEKCMGLDMEE__o *pSVar4;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar5;
  Il2CppClass *pIVar6;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
                    /* try { // try from 032c6e10 to 033c6e17 has its CatchHandler @ 032c71fc */
                    /* try { // try from 032c6e28 to 033c6e2f has its CatchHandler @ 032c7208 */
  if ((DAT_04566c3d & 1) == 0) {
                    /* try { // try from 032c6e34 to 033c6e3b has its CatchHandler @ 032c720c */
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
                    /* try { // try from 032c6e4c to 033c6e53 has its CatchHandler @ 032c7228 */
                    /* try { // try from 032c6e54 to 033c6e63 has its CatchHandler @ 032c71f8 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_get_Current__);
                    /* try { // try from 032c6e6c to 033c6e73 has its CatchHandler @ 032c722c */
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GEKCMGLDMEE>_get_Count__);
    DAT_04566c3d = 1;
  }
                    /* try { // try from 032c6e84 to 033c6e8b has its CatchHandler @ 032c7204 */
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  pSVar4 = (__this->fields).KNPKLNHJLEN;
                    /* try { // try from 032c6e90 to 033c6e97 has its CatchHandler @ 032c7210 */
  if (pSVar4 != (System_Collections_Generic_List_GEKCMGLDMEE__o *)0x0) {
    if ((pSVar4->fields)._size < 1) {
                    /* try { // try from 032c6f84 to 033c6f93 has its CatchHandler @ 032c7264 */
      return;
    }
    pNVar5 = (__this->fields)._scroll;
                    /* try { // try from 032c6ea8 to 033c6eaf has its CatchHandler @ 032c7200 */
    if ((pNVar5 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) &&
       (__this_00 = *(System_Collections_Generic_List_object__o **)&(pNVar5->fields)._snapEase,
       __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
                    /* try { // try from 032c6eb0 to 033c6ebf has its CatchHandler @ 032c721c */
                    /* try { // try from 032c6ec4 to 033c6edb has its CatchHandler @ 032c7248 */
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,__this_00,
                 Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
                    /* try { // try from 032c6ee4 to 033c6eeb has its CatchHandler @ 032c7238 */
      local_50.fields._list = local_68.fields._list;
      local_50.fields._current = local_68.fields._current;
      while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_50,
                                Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__
                               ), bVar3) {
                    /* try { // try from 032c6efc to 033c6f03 has its CatchHandler @ 032c7240 */
        if (local_50.fields._current == (Il2CppObject *)0x0) {
LAB_032c6f98:
                    /* try { // try from 032c6f98 to 033c6faf has its CatchHandler @ 032c72b8 */
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar6 = (local_50.fields._current)->klass;
                    /* try { // try from 032c6f08 to 033c6f0f has its CatchHandler @ 032c7278 */
        bVar2 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_TypeInfo->_2).naturalAligment;
                    /* try { // try from 032c6f20 to 033c6f27 has its CatchHandler @ 032c724c */
                    /* try { // try from 032c6f28 to 033c6f37 has its CatchHandler @ 032c723c */
        if (((pIVar6->_2).naturalAligment < bVar2) ||
           ((pIVar6->_2).typeHierarchy[(ulong)bVar2 - 1] !=
            (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_TypeInfo))
        goto LAB_032c6f98;
                    /* try { // try from 032c6f40 to 033c6f47 has its CatchHandler @ 032c7268 */
        pIVar1 = local_50.fields._current;
        if ((pIVar6->_2).typeHierarchy[(ulong)bVar2 - 1] !=
            (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_TypeInfo) {
          pIVar1 = (Il2CppObject *)0x0;
        }
        (*pIVar1->klass->vtable[0x34].methodPtr)
                  ((ulong)(uint)(__this->fields).JKOANJLODNP,pIVar1,
                   pIVar1->klass->vtable[0x34].method);
                    /* try { // try from 032c6f58 to 033c6f5f has its CatchHandler @ 032c7258 */
      }
                    /* try { // try from 032c6f64 to 033c6f6b has its CatchHandler @ 032c7234 */
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,
                 Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
      if (LGCACNFAMOI != (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *)0x0) {
                    /* try { // try from 032c6f7c to 033c6f83 has its CatchHandler @ 032c7270 */
        (*(LGCACNFAMOI->klass->vtable)._52_SetContentScale.methodPtr)
                  ((ulong)(uint)(__this->fields).FDMLNHPDHKJ,LGCACNFAMOI,
                   (LGCACNFAMOI->klass->vtable)._52_SetContentScale.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

