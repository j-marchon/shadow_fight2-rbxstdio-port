// TypeDefIndex 2283
// Namespace: 
// [CompilerGenerated]
// private sealed class QuestsManager.IGKFCNKEMFG
// Fields:
//   public Type actType; // 0x10
//   public Type showVideoType; // 0x18

// ===== public void .ctor()  [RVA 0x3307700]
// Nekki.SF2.Core.Quests.QuestsManager.IGKFCNKEMFG$$.ctor @ RVA 0x3307700

void Nekki_SF2_Core_Quests_QuestsManager_IGKFCNKEMFG___ctor
               (Nekki_SF2_Core_Quests_QuestsManager_IGKFCNKEMFG_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool INEIJPAINGL(FPPKHNNABAD quest)  [RVA 0x33081E4]
// Nekki.SF2.Core.Quests.QuestsManager.IGKFCNKEMFG$$INEIJPAINGL @ RVA 0x33081E4

bool Nekki_SF2_Core_Quests_QuestsManager_IGKFCNKEMFG__INEIJPAINGL
               (Nekki_SF2_Core_Quests_QuestsManager_IGKFCNKEMFG_o *__this,FPPKHNNABAD_o *quest,
               MethodInfo *method)

{
  bool bVar1;
  
  if (quest != (FPPKHNNABAD_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034081a0 with catch @ 034081f8
                        */
    bVar1 = FPPKHNNABAD__ICLGDHGNCBP(quest,(__this->fields).showVideoType,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal bool LJOECDLDGKP(FPPKHNNABAD quest)  [RVA 0x3308208]
// Nekki.SF2.Core.Quests.QuestsManager.IGKFCNKEMFG$$LJOECDLDGKP @ RVA 0x3308208

bool Nekki_SF2_Core_Quests_QuestsManager_IGKFCNKEMFG__LJOECDLDGKP
               (Nekki_SF2_Core_Quests_QuestsManager_IGKFCNKEMFG_o *__this,FPPKHNNABAD_o *quest,
               MethodInfo *method)

{
  bool bVar1;
  
  if (quest != (FPPKHNNABAD_o *)0x0) {
                    /* try { // try from 03408210 to 03508213 has its CatchHandler @ 03408234 */
                    /* try { // try from 03408214 to 0350823b has its CatchHandler @ 034080e0 */
    bVar1 = FPPKHNNABAD__ICLGDHGNCBP(quest,(__this->fields).actType,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

