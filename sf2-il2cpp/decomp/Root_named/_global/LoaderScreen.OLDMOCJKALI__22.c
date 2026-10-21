// TypeDefIndex 22
// Namespace: 
// [CompilerGenerated]
// private sealed class LoaderScreen.OLDMOCJKALI : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public LoaderScreen <>4__this; // 0x20
//   private int <loadingScene>5__2; // 0x28

// ===== public void .ctor(int <>1__state)  [RVA 0x2FF4360]
// Nekki.SF2.GUI.Scenes.LoaderScreen.OLDMOCJKALI$$.ctor @ RVA 0x2FF4360

void Nekki_SF2_GUI_Scenes_LoaderScreen_OLDMOCJKALI___ctor
               (Nekki_SF2_GUI_Scenes_LoaderScreen_OLDMOCJKALI_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x2FF54B4]
// Nekki.SF2.GUI.Scenes.LoaderScreen.OLDMOCJKALI$$System.IDisposable.Dispose @ RVA 0x2FF54B4

void Nekki_SF2_GUI_Scenes_LoaderScreen_OLDMOCJKALI__System_IDisposable_Dispose
               (Nekki_SF2_GUI_Scenes_LoaderScreen_OLDMOCJKALI_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x2FF54B8]
// Nekki.SF2.GUI.Scenes.LoaderScreen.OLDMOCJKALI$$MoveNext @ RVA 0x2FF54B8

bool Nekki_SF2_GUI_Scenes_LoaderScreen_OLDMOCJKALI__MoveNext
               (Nekki_SF2_GUI_Scenes_LoaderScreen_OLDMOCJKALI_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t sceneBuildIndex;
  bool bVar2;
  UnityEngine_AsyncOperation_o *pUVar3;
  Nekki_SF2_GUI_Scenes_LoaderScreen_c *pNVar4;
  System_String_o *pSVar5;
  Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this_00;
  Il2CppObject *pIVar6;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  Il2CppObject **ppIVar7;
  Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this_01;
  System_Enum_o local_48;
  int32_t local_38;
  
  if ((DAT_04565a9c & 1) == 0) {
    FUN_01bab630(&DBMPKPJGIPI_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
    FUN_01bab630(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    FUN_01bab630(&StringLiteral_8572/*"LoaderScene::LoadLevel: scene: "*/);
    DAT_04565a9c = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  __this_01 = (__this->fields).__4__this;
  if (iVar1 == 2) {
    (__this->fields).__1__state = -1;
    if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo,method);
    }
    if (__this_01 == (Nekki_SF2_GUI_Scenes_LoaderScreen_o *)0x0) goto LAB_030f5734;
    UnityEngine_MonoBehaviour__StopCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this_01,
               Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->KCOCLOFNJIG,
               (MethodInfo *)0x0);
    Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->KCOCLOFNJIG =
         (UnityEngine_Coroutine_o *)0x0;
    thunk_FUN_01c20e04(Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields,0);
  }
  else {
    if (iVar1 == 1) {
      (__this->fields).__1__state = -1;
      sceneBuildIndex = (__this->fields)._loadingScene_5__2;
      if ((UnityEngine_SceneManagement_SceneManager_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_SceneManagement_SceneManager_TypeInfo,method);
      }
      pUVar3 = UnityEngine_SceneManagement_SceneManager__LoadSceneAsync
                         (sceneBuildIndex,1,(MethodInfo *)0x0);
      ppIVar7 = &(__this->fields).__2__current;
      *ppIVar7 = (Il2CppObject *)pUVar3;
      thunk_FUN_01c20e04(ppIVar7,pUVar3);
      (__this->fields).__1__state = 2;
      return true;
    }
    if (iVar1 == 0) {
      (__this->fields).__1__state = -1;
      if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo,method);
        method = extraout_x1_00;
      }
      if (DAT_04565b82 == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
        DAT_04565b82 = '\x01';
        method = extraout_x1_01;
      }
      if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo,method);
        bVar2 = DAT_04565b82 == '\0';
      }
      else {
        bVar2 = false;
      }
      pNVar4 = Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo;
      (__this->fields)._loadingScene_5__2 =
           Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->BJFGHDKLEKH;
      if (bVar2) {
        FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
        DAT_04565b82 = '\x01';
        pNVar4 = Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo;
      }
      if ((pNVar4->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pNVar4 = Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo;
      }
      local_38 = pNVar4->static_fields->BJFGHDKLEKH;
      local_48.klass = (System_Enum_c *)DBMPKPJGIPI_TypeInfo;
      local_48.monitor = (void *)0xffffffffffffffff;
      pSVar5 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat(StringLiteral_8572/*"LoaderScene::LoadLevel: scene: "*/,pSVar5,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__Log((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
      if (__this_01 != (Nekki_SF2_GUI_Scenes_LoaderScreen_o *)0x0) {
        pIVar6 = (Il2CppObject *)Nekki_SF2_GUI_Scenes_LoaderScreen__IJCLAIMBHLE(__this_00,method_00)
        ;
        ppIVar7 = &(__this->fields).__2__current;
        *ppIVar7 = pIVar6;
        thunk_FUN_01c20e04(ppIVar7,pIVar6);
        (__this->fields).__1__state = 1;
        return true;
      }
LAB_030f5734:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return false;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x2FF5738]
// Nekki.SF2.GUI.Scenes.LoaderScreen.OLDMOCJKALI$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x2FF5738

Il2CppObject *
Nekki_SF2_GUI_Scenes_LoaderScreen_OLDMOCJKALI__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Nekki_SF2_GUI_Scenes_LoaderScreen_OLDMOCJKALI_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x2FF5740]
// Nekki.SF2.GUI.Scenes.LoaderScreen.OLDMOCJKALI$$System.Collections.IEnumerator.Reset @ RVA 0x2FF5740

void Nekki_SF2_GUI_Scenes_LoaderScreen_OLDMOCJKALI__System_Collections_IEnumerator_Reset
               (Nekki_SF2_GUI_Scenes_LoaderScreen_OLDMOCJKALI_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = thunk_FUN_01bb9178(&
                             Method_Nekki_SF2_GUI_Scenes_LoaderScreen_OLDMOCJKALI_System_Collections_IEnumerator_Reset__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x2FF5778]
// Nekki.SF2.GUI.Scenes.LoaderScreen.OLDMOCJKALI$$System.Collections.IEnumerator.get_Current @ RVA 0x2FF5778

Il2CppObject *
Nekki_SF2_GUI_Scenes_LoaderScreen_OLDMOCJKALI__System_Collections_IEnumerator_get_Current
          (Nekki_SF2_GUI_Scenes_LoaderScreen_OLDMOCJKALI_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

