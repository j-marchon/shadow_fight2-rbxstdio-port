// TypeDefIndex 905
// Namespace: 
// [Serializable]
// private sealed class KIOBDEIAMOO.<>c
// Fields:
//   public static readonly KIOBDEIAMOO.<>c <>9; // 0x0
//   public static Action<Action<LevelPlayConfiguration>> <>9__4_0; // 0x8
//   public static Action<Action<LevelPlayConfiguration>> <>9__4_1; // 0x10
//   public static Action<Action<LevelPlayInitError>> <>9__4_3; // 0x18
//   public static Action<Action<LevelPlayInitError>> <>9__4_4; // 0x20

// ===== internal void LDMEHMEHANK(Action<LevelPlayInitError> h)  [RVA 0x30986D0]
// KIOBDEIAMOO.<>c$$LDMEHMEHANK @ RVA 0x30986D0

void KIOBDEIAMOO_<>c__LDMEHMEHANK
               (KIOBDEIAMOO___c_o *__this,System_Action_LevelPlayInitError__o *h,MethodInfo *method)

{
  if ((DAT_04566100 & 1) == 0) {
    FUN_01bab630(&Unity_Services_LevelPlay_LevelPlay_TypeInfo);
    DAT_04566100 = 1;
  }
  if ((Unity_Services_LevelPlay_LevelPlay_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Unity_Services_LevelPlay_LevelPlay__add_OnInitFailed(h,(MethodInfo *)0x0);
  return;
}


// ===== private static void .cctor()  [RVA 0x3098728]
// KIOBDEIAMOO.<>c$$.cctor @ RVA 0x3098728

void KIOBDEIAMOO_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04566101 & 1) == 0) {
    FUN_01bab630(&KIOBDEIAMOO_<>c_TypeInfo);
    DAT_04566101 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(KIOBDEIAMOO_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  KIOBDEIAMOO_<>c_TypeInfo->static_fields->__9 = (KIOBDEIAMOO___c_o *)__this;
  thunk_FUN_01c20e04(KIOBDEIAMOO_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== internal void OGEDAKAADIE(Action<LevelPlayInitError> h)  [RVA 0x3098798]
// KIOBDEIAMOO.<>c$$OGEDAKAADIE @ RVA 0x3098798

void KIOBDEIAMOO_<>c__OGEDAKAADIE
               (KIOBDEIAMOO___c_o *__this,System_Action_LevelPlayInitError__o *h,MethodInfo *method)

{
                    /* try { // try from 03198798 to 032987bf has its CatchHandler @ 03198d88 */
  if ((DAT_04566102 & 1) == 0) {
    FUN_01bab630(&Unity_Services_LevelPlay_LevelPlay_TypeInfo);
    DAT_04566102 = 1;
  }
  if ((Unity_Services_LevelPlay_LevelPlay_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Unity_Services_LevelPlay_LevelPlay__remove_OnInitFailed(h,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor()  [RVA 0x3098790]
// KIOBDEIAMOO.<>c$$.ctor @ RVA 0x3098790

void KIOBDEIAMOO_<>c___ctor(KIOBDEIAMOO___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void MIGBHIIKNKK(Action<LevelPlayConfiguration> h)  [RVA 0x30987F0]
// KIOBDEIAMOO.<>c$$MIGBHIIKNKK @ RVA 0x30987F0

void KIOBDEIAMOO_<>c__MIGBHIIKNKK
               (KIOBDEIAMOO___c_o *__this,System_Action_LevelPlayConfiguration__o *h,
               MethodInfo *method)

{
                    /* try { // try from 031987f4 to 0329881b has its CatchHandler @ 03198d80 */
  if ((DAT_04566103 & 1) == 0) {
    FUN_01bab630(&Unity_Services_LevelPlay_LevelPlay_TypeInfo);
    DAT_04566103 = 1;
  }
  if ((Unity_Services_LevelPlay_LevelPlay_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Unity_Services_LevelPlay_LevelPlay__remove_OnInitSuccess(h,(MethodInfo *)0x0);
  return;
}


// ===== internal void BEDDKHEOMPA(Action<LevelPlayConfiguration> h)  [RVA 0x3098848]
// KIOBDEIAMOO.<>c$$BEDDKHEOMPA @ RVA 0x3098848

void KIOBDEIAMOO_<>c__BEDDKHEOMPA
               (KIOBDEIAMOO___c_o *__this,System_Action_LevelPlayConfiguration__o *h,
               MethodInfo *method)

{
                    /* try { // try from 03198848 to 0329884b has its CatchHandler @ 03198d48 */
                    /* try { // try from 0319884c to 0329885b has its CatchHandler @ 03198d64 */
  if ((DAT_04566104 & 1) == 0) {
                    /* try { // try from 03198868 to 03298873 has its CatchHandler @ 03198d5c */
    FUN_01bab630(&Unity_Services_LevelPlay_LevelPlay_TypeInfo);
    DAT_04566104 = 1;
  }
                    /* try { // try from 03198880 to 0329888b has its CatchHandler @ 03198d7c */
  if ((Unity_Services_LevelPlay_LevelPlay_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Unity_Services_LevelPlay_LevelPlay__add_OnInitSuccess(h,(MethodInfo *)0x0);
  return;
}

