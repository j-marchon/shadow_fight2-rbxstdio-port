// TypeDefIndex 1859
// Namespace: 
// [CompilerGenerated]
// private sealed class ANLLODMHLHE.FFJFICKBACI
// Fields:
//   public QuestsManager questsManager; // 0x10
//   public object logContext; // 0x18
//   public string logTag; // 0x20
//   public Action callback; // 0x28
//   public SerialDisposable disposable; // 0x30

// ===== internal void OHFNPFMOKLM(Action h)  [RVA 0x32495D4]
// ANLLODMHLHE.FFJFICKBACI$$OHFNPFMOKLM @ RVA 0x32495D4

void ANLLODMHLHE_FFJFICKBACI__OHFNPFMOKLM
               (ANLLODMHLHE_FFJFICKBACI_o *__this,System_Action_o *h,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  
  __this_00 = (__this->fields).questsManager;
                    /* try { // try from 033495dc to 034495df has its CatchHandler @ 033498c8 */
  if (__this_00 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                    /* try { // try from 033495e0 to 034495e7 has its CatchHandler @ 0334990c */
    Nekki_SF2_Core_Quests_QuestsManager__add_OnQuestsListEmpty(__this_00,h,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x32492A0]
// ANLLODMHLHE.FFJFICKBACI$$.ctor @ RVA 0x32492A0

void ANLLODMHLHE_FFJFICKBACI___ctor(ANLLODMHLHE_FFJFICKBACI_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void AFBBIIMKGNP(Unit _)  [RVA 0x32495F0]
// ANLLODMHLHE.FFJFICKBACI$$AFBBIIMKGNP @ RVA 0x32495F0

void ANLLODMHLHE_FFJFICKBACI__AFBBIIMKGNP(long __this)

{
  Il2CppObject *ODHBNGEGFCJ;
  System_String_o *JLNPKGGFFDD;
  long lVar1;
  
                    /* try { // try from 033495f4 to 034495fb has its CatchHandler @ 03349908 */
  if ((DAT_045670df & 1) == 0) {
    FUN_01bab630(&StringLiteral_2092/*": ENDED!"*/);
                    /* try { // try from 03349620 to 03449623 has its CatchHandler @ 033498cc */
    DAT_045670df = 1;
  }
  ODHBNGEGFCJ = *(Il2CppObject **)(__this + 0x18);
                    /* try { // try from 03349630 to 0344963b has its CatchHandler @ 033498d0 */
  JLNPKGGFFDD = System_String__Concat
                          (*(System_String_o **)(__this + 0x20),StringLiteral_2092/*": ENDED!"*/,(MethodInfo *)0x0
                          );
  KFJJHMDIFIG__DHAAGKPHJLA(ODHBNGEGFCJ,JLNPKGGFFDD,(MethodInfo *)0x0);
                    /* try { // try from 03349644 to 0344966b has its CatchHandler @ 033498f8 */
  lVar1 = *(long *)(__this + 0x28);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
  }
  if (*(UniRx_SerialDisposable_o **)(__this + 0x30) != (UniRx_SerialDisposable_o *)0x0) {
                    /* try { // try from 0334966c to 034496b7 has its CatchHandler @ 03349364 */
    UniRx_SerialDisposable__Dispose(*(UniRx_SerialDisposable_o **)(__this + 0x30),(MethodInfo *)0x0)
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal void GDBFMOMFLIL(Action h)  [RVA 0x3249678]
// ANLLODMHLHE.FFJFICKBACI$$GDBFMOMFLIL @ RVA 0x3249678

void ANLLODMHLHE_FFJFICKBACI__GDBFMOMFLIL
               (ANLLODMHLHE_FFJFICKBACI_o *__this,System_Action_o *h,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  
  __this_00 = (__this->fields).questsManager;
  if (__this_00 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    Nekki_SF2_Core_Quests_QuestsManager__remove_OnQuestsListEmpty(__this_00,h,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

