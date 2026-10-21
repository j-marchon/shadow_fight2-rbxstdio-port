// TypeDefIndex 2281
// Namespace: 
// [CompilerGenerated]
// private sealed class QuestsManager.GOMALLHONAD
// Fields:
//   public List<string> list1; // 0x10

// ===== internal void MKOIIMINJJB(MEMHEPBAJJA.HIAEDCDJJDJ.DebugReport x)  [RVA 0x3308020]
// Nekki.SF2.Core.Quests.QuestsManager.GOMALLHONAD$$MKOIIMINJJB @ RVA 0x3308020

void Nekki_SF2_Core_Quests_QuestsManager_GOMALLHONAD__MKOIIMINJJB
               (Nekki_SF2_Core_Quests_QuestsManager_GOMALLHONAD_o *__this,
               MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport_o *x,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_String_array *pSVar3;
  System_String_o *item;
  System_Collections_Generic_List_string__o *__this_00;
  
  if ((DAT_0456776f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_167/*" "*/);
    DAT_0456776f = 1;
  }
  __this_00 = (__this->fields).list1;
  pSVar3 = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
  if ((x != (MEMHEPBAJJA_HIAEDCDJJDJ_DebugReport_o *)0x0) && (pSVar3 != (System_String_array *)0x0))
  {
    if ((int)pSVar3->max_length != 0) {
      pSVar3->m_Items[0] = (x->fields).Name;
      thunk_FUN_01c20e04(pSVar3->m_Items);
      if (1 < (uint)pSVar3->max_length) {
        pSVar3->m_Items[1] = StringLiteral_167/*" "*/;
        thunk_FUN_01c20e04(pSVar3->m_Items + 1);
        if (2 < (uint)pSVar3->max_length) {
                    /* try { // try from 034080e0 to 0350819f has its CatchHandler @ 034080e0
                       catch() { ... } // from try @ 034080e0 with catch @ 034080e0
                       catch() { ... } // from try @ 034081a8 with catch @ 034080e0
                       catch() { ... } // from try @ 03408214 with catch @ 034080e0
                       catch() { ... } // from try @ 03408244 with catch @ 034080e0 */
          pSVar3->m_Items[2] = (x->fields).Value;
          thunk_FUN_01c20e04(pSVar3->m_Items + 2);
          if (3 < (uint)pSVar3->max_length) {
            pSVar3->m_Items[3] = StringLiteral_167/*" "*/;
            thunk_FUN_01c20e04(pSVar3->m_Items + 3);
            if (4 < (uint)pSVar3->max_length) {
              pSVar3->m_Items[4] = (x->fields).Etc;
              thunk_FUN_01c20e04();
              item = System_String__Concat(pSVar3,(MethodInfo *)0x0);
              lVar2 = Method_System_Collections_Generic_List<string>_Add__;
              if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
                pSVar3 = (__this_00->fields)._items;
                (__this_00->fields)._version = (__this_00->fields)._version + 1;
                if (pSVar3 != (System_String_array *)0x0) {
                  uVar1 = (__this_00->fields)._size;
                  if (uVar1 < (uint)pSVar3->max_length) {
                    (__this_00->fields)._size = uVar1 + 1;
                    pSVar3->m_Items[(int)uVar1] = item;
                    thunk_FUN_01c20e04();
                    return;
                  }
                    /* try { // try from 034081a0 to 035081a7 has its CatchHandler @ 034081f8 */
                    /* try { // try from 034081a8 to 0350820f has its CatchHandler @ 034080e0 */
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_00,
                             (Il2CppObject *)item,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                  return;
                }
              }
              goto LAB_034081b8;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_034081b8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3305FAC]
// Nekki.SF2.Core.Quests.QuestsManager.GOMALLHONAD$$.ctor @ RVA 0x3305FAC

void Nekki_SF2_Core_Quests_QuestsManager_GOMALLHONAD___ctor
               (Nekki_SF2_Core_Quests_QuestsManager_GOMALLHONAD_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

