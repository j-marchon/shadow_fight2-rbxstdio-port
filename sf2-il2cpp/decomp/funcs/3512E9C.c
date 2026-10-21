// Nekki.SF2.GUI.Dialogs.ShowLoot.ShowLootDialog$$DGBOGOINJHD @ RVA 0x3512E9C

void Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog__DGBOGOINJHD
               (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_o *__this,
               System_Action_LootCell__o *PIKFKFFINHC,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  OGNCMFBMBMB_o *__this_00;
  Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_o *x;
  UnityEngine_Transform_o *__this_01;
  System_Collections_Generic_List_LootCell__o *__this_02;
  UnityEngine_UI_ScrollRect_o *pUVar4;
  Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_array *pNVar5;
  
  if ((DAT_04568905 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<LootCell>_Add__);
    FUN_01bab630(&Method_OGNCMFBMBMB_KNMENIBLFGF<LootCell>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568905 = 1;
  }
  __this_00 = OGNCMFBMBMB__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 03612eec to 03712f7f has its CatchHandler @ 03612a50 */
  if (__this_00 != (OGNCMFBMBMB_o *)0x0) {
    x = (Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_o *)
        OGNCMFBMBMB__KNMENIBLFGF<object>
                  (__this_00,(__this->fields)._lootCellPrefab,
                   Method_OGNCMFBMBMB_KNMENIBLFGF<LootCell>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      return;
    }
    if (x != (Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_o *)0x0) {
      __this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._scroll;
      if ((pUVar4 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
         (__this_01 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent
                  (__this_01,(UnityEngine_Transform_o *)(pUVar4->fields).m_Content,false,
                   (MethodInfo *)0x0);
        if (PIKFKFFINHC != (System_Action_LootCell__o *)0x0) {
                    /* try { // try from 03612f80 to 03712f87 has its CatchHandler @ 03612fd4 */
          (*(code *)(PIKFKFFINHC->fields).super.super.invoke_impl)
                    ((PIKFKFFINHC->fields).super.super.method_code,x,
                     (PIKFKFFINHC->fields).super.super.method);
        }
        lVar2 = Method_System_Collections_Generic_List<LootCell>_Add__;
                    /* try { // try from 03612f88 to 03712f8b has its CatchHandler @ 03612fc8 */
        __this_02 = (__this->fields).ONENMEPPGMD;
                    /* try { // try from 03612f8c to 03712f8f has its CatchHandler @ 03612fbc */
        if (__this_02 != (System_Collections_Generic_List_LootCell__o *)0x0) {
                    /* try { // try from 03612f90 to 03712f93 has its CatchHandler @ 03612fac */
                    /* try { // try from 03612f94 to 03712f97 has its CatchHandler @ 03612fbc */
                    /* try { // try from 03612f98 to 03712f9b has its CatchHandler @ 03612a50 */
                    /* try { // try from 03612f9c to 03712f9f has its CatchHandler @ 03612fa8 */
          pNVar5 = (__this_02->fields)._items;
                    /* try { // try from 03612fa0 to 03712fe3 has its CatchHandler @ 03612a50 */
                    /* catch() { ... } // from try @ 03612f9c with catch @ 03612fa8 */
          (__this_02->fields)._version = (__this_02->fields)._version + 1;
                    /* catch() { ... } // from try @ 03612f90 with catch @ 03612fac */
          if (pNVar5 != (Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_array *)0x0) {
                    /* catch() { ... } // from try @ 03612e6c with catch @ 03612fb0 */
            uVar1 = (__this_02->fields)._size;
                    /* catch() { ... } // from try @ 03612e7c with catch @ 03612fb4 */
                    /* catch() { ... } // from try @ 03612e84 with catch @ 03612fb8 */
                    /* catch() { ... } // from try @ 03612f8c with catch @ 03612fbc
                       catch() { ... } // from try @ 03612f94 with catch @ 03612fbc */
            if (uVar1 < (uint)pNVar5->max_length) {
                    /* catch() { ... } // from try @ 03612e40 with catch @ 03612fc0 */
                    /* catch() { ... } // from try @ 03612e50 with catch @ 03612fc4 */
                    /* catch() { ... } // from try @ 03612f88 with catch @ 03612fc8 */
                    /* catch() { ... } // from try @ 03612dd8 with catch @ 03612fcc */
              (__this_02->fields)._size = uVar1 + 1;
                    /* catch() { ... } // from try @ 03612d7c with catch @ 03612fd0 */
              pNVar5->m_Items[(int)uVar1] = x;
                    /* catch() { ... } // from try @ 03612f80 with catch @ 03612fd4 */
              thunk_FUN_01c20e04(pNVar5->m_Items + (int)uVar1,x);
              return;
            }
                    /* try { // try from 03612fe4 to 03712fe7 has its CatchHandler @ 03612ff8 */
                    /* catch() { ... } // from try @ 03612fe4 with catch @ 03612ff8 */
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)x,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03613000 to 03713067 has its CatchHandler @ 0361307c */
  FUN_01bab8c8();
}

