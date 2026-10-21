// TypeDefIndex 24
// Namespace: 
// [CompilerGenerated]
// private sealed class LoaderScreen.KHJACEALBOI : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   private int <i>5__2; // 0x20

// ===== public void .ctor(int <>1__state)  [RVA 0x2FF4414]
// Nekki.SF2.GUI.Scenes.LoaderScreen.KHJACEALBOI$$.ctor @ RVA 0x2FF4414

void Nekki_SF2_GUI_Scenes_LoaderScreen_KHJACEALBOI___ctor
               (Nekki_SF2_GUI_Scenes_LoaderScreen_KHJACEALBOI_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x2FF5F30]
// Nekki.SF2.GUI.Scenes.LoaderScreen.KHJACEALBOI$$System.IDisposable.Dispose @ RVA 0x2FF5F30

void Nekki_SF2_GUI_Scenes_LoaderScreen_KHJACEALBOI__System_IDisposable_Dispose
               (Nekki_SF2_GUI_Scenes_LoaderScreen_KHJACEALBOI_o *__this,MethodInfo *method)

{
                    /* try { // try from 030f5f30 to 031f5f33 has its CatchHandler @ 030f5f60 */
  return;
}


// ===== private bool MoveNext()  [RVA 0x2FF5F34]
// Nekki.SF2.GUI.Scenes.LoaderScreen.KHJACEALBOI$$MoveNext @ RVA 0x2FF5F34

bool Nekki_SF2_GUI_Scenes_LoaderScreen_KHJACEALBOI__MoveNext
               (Nekki_SF2_GUI_Scenes_LoaderScreen_KHJACEALBOI_o *__this,MethodInfo *method)

{
  UnityEngine_SceneManagement_Scene_o scene;
  bool bVar1;
  int32_t iVar2;
  UnityEngine_AsyncOperation_o *pUVar3;
  Il2CppObject **ppIVar4;
  int iVar5;
  UnityEngine_SceneManagement_Scene_o local_28 [2];
  
                    /* try { // try from 030f5f34 to 031f5f37 has its CatchHandler @ 030f5f58 */
                    /* try { // try from 030f5f38 to 031f5f3b has its CatchHandler @ 030f5f50 */
                    /* try { // try from 030f5f3c to 031f5f3f has its CatchHandler @ 030f5f58 */
                    /* catch() { ... } // from try @ 030f5d94 with catch @ 030f5f40
                       try { // try from 030f5f40 to 031f5f7b has its CatchHandler @ 030f5bb4 */
                    /* catch() { ... } // from try @ 030f5d38 with catch @ 030f5f44 */
                    /* catch() { ... } // from try @ 030f5d98 with catch @ 030f5f48 */
                    /* catch() { ... } // from try @ 030f5d0c with catch @ 030f5f4c */
  if ((DAT_04565a9e & 1) == 0) {
                    /* catch() { ... } // from try @ 030f5e34 with catch @ 030f5f50
                       catch() { ... } // from try @ 030f5f38 with catch @ 030f5f50 */
                    /* catch() { ... } // from try @ 030f5d10 with catch @ 030f5f54 */
                    /* catch() { ... } // from try @ 030f5d68 with catch @ 030f5f58
                       catch() { ... } // from try @ 030f5dc0 with catch @ 030f5f58
                       catch() { ... } // from try @ 030f5f34 with catch @ 030f5f58
                       catch() { ... } // from try @ 030f5f3c with catch @ 030f5f58 */
    FUN_01bab630(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
                    /* catch() { ... } // from try @ 030f5cc8 with catch @ 030f5f5c */
                    /* catch() { ... } // from try @ 030f5f30 with catch @ 030f5f60 */
    DAT_04565a9e = 1;
  }
                    /* catch() { ... } // from try @ 030f5c8c with catch @ 030f5f64 */
  local_28[0].fields.m_Handle = (UnityEngine_SceneManagement_Scene_Fields)0;
  iVar5 = (__this->fields).__1__state;
  if (iVar5 == 2) {
                    /* try { // try from 030f5fb0 to 031f5fb7 has its CatchHandler @ 030f5fb8 */
    (__this->fields).__1__state = -1;
                    /* catch() { ... } // from try @ 030f5f98 with catch @ 030f5fb8
                       catch() { ... } // from try @ 030f5fb0 with catch @ 030f5fb8 */
    goto LAB_030f6008;
  }
  if (iVar5 == 1) {
    iVar5 = 0;
    (__this->fields).__1__state = -1;
    (__this->fields)._i_5__2 = 0;
    while( true ) {
      if ((UnityEngine_SceneManagement_SceneManager_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = UnityEngine_SceneManagement_SceneManager__get_sceneCount((MethodInfo *)0x0);
      if (iVar2 <= iVar5) {
        return false;
      }
      iVar2 = (__this->fields)._i_5__2;
      if ((UnityEngine_SceneManagement_SceneManager_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      local_28[0] = UnityEngine_SceneManagement_SceneManager__GetSceneAt(iVar2,(MethodInfo *)0x0);
      iVar2 = UnityEngine_SceneManagement_Scene__get_buildIndex
                        ((UnityEngine_SceneManagement_Scene_Fields)(int32_t)local_28,
                         (MethodInfo *)0x0);
      scene.fields.m_Handle = local_28[0].fields.m_Handle;
      if (iVar2 != 1) break;
LAB_030f6008:
      iVar5 = (__this->fields)._i_5__2 + 1;
      (__this->fields)._i_5__2 = iVar5;
    }
    if ((UnityEngine_SceneManagement_SceneManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar3 = UnityEngine_SceneManagement_SceneManager__UnloadSceneAsync(scene,(MethodInfo *)0x0);
    ppIVar4 = &(__this->fields).__2__current;
    *ppIVar4 = (Il2CppObject *)pUVar3;
    thunk_FUN_01c20e04(ppIVar4,pUVar3);
    (__this->fields).__1__state = 2;
    bVar1 = true;
  }
  else {
                    /* try { // try from 030f5f7c to 031f5f7f has its CatchHandler @ 030f5f8c */
    bVar1 = false;
    if (iVar5 == 0) {
                    /* catch() { ... } // from try @ 030f5f7c with catch @ 030f5f8c */
      (__this->fields).__1__state = -1;
      pUVar3 = UnityEngine_Resources__UnloadUnusedAssets((MethodInfo *)0x0);
                    /* try { // try from 030f5f98 to 031f5fa3 has its CatchHandler @ 030f5fb8 */
      (__this->fields).__2__current = (Il2CppObject *)pUVar3;
      thunk_FUN_01c20e04();
                    /* try { // try from 030f5fa4 to 031f5faf has its CatchHandler @ 030f5bb4 */
      bVar1 = true;
      (__this->fields).__1__state = 1;
    }
  }
  return bVar1;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x2FF6090]
// Nekki.SF2.GUI.Scenes.LoaderScreen.KHJACEALBOI$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x2FF6090

Il2CppObject *
Nekki_SF2_GUI_Scenes_LoaderScreen_KHJACEALBOI__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Nekki_SF2_GUI_Scenes_LoaderScreen_KHJACEALBOI_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x2FF6098]
// Nekki.SF2.GUI.Scenes.LoaderScreen.KHJACEALBOI$$System.Collections.IEnumerator.Reset @ RVA 0x2FF6098

void Nekki_SF2_GUI_Scenes_LoaderScreen_KHJACEALBOI__System_Collections_IEnumerator_Reset
               (Nekki_SF2_GUI_Scenes_LoaderScreen_KHJACEALBOI_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
                    /* catch() { ... } // from try @ 030f60b0 with catch @ 030f6098
                       catch() { ... } // from try @ 030f60e0 with catch @ 030f6098
                       catch() { ... } // from try @ 030f611c with catch @ 030f6098 */
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
                    /* try { // try from 030f60ac to 031f60af has its CatchHandler @ 030f60c4 */
                    /* try { // try from 030f60b0 to 031f60db has its CatchHandler @ 030f6098 */
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&
                             Method_Nekki_SF2_GUI_Scenes_LoaderScreen_KHJACEALBOI_System_Collections_IEnumerator_Reset__
                            );
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 030f60ac with catch @ 030f60c4
                        */
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x2FF60D0]
// Nekki.SF2.GUI.Scenes.LoaderScreen.KHJACEALBOI$$System.Collections.IEnumerator.get_Current @ RVA 0x2FF60D0

Il2CppObject *
Nekki_SF2_GUI_Scenes_LoaderScreen_KHJACEALBOI__System_Collections_IEnumerator_get_Current
          (Nekki_SF2_GUI_Scenes_LoaderScreen_KHJACEALBOI_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

