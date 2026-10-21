// Nekki.SF2.GUI.Scenes.LoaderScreen$$SceneOpened @ RVA 0x2FF4C3C

void Nekki_SF2_GUI_Scenes_LoaderScreen__SceneOpened
               (Nekki_SF2_GUI_Scenes_LoaderScreen_o *__this,int32_t AEHBGIIILDB,MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  UnityEngine_GameObject_array *pUVar3;
  MethodInfo *method_00;
  ulong uVar4;
  int index;
  UnityEngine_Object_o *obj;
  ulong uVar5;
  UnityEngine_SceneManagement_Scene_Fields local_48 [2];
  
  if ((DAT_04565a8f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo,AEHBGIIILDB);
    FUN_01bab630(&UnityEngine_SceneManagement_SceneManager_TypeInfo);
    DAT_04565a8f = 1;
  }
  index = 0;
  local_48[0].m_Handle = 0;
  (__this->fields).FAGMLMDNEHA = true;
  while( true ) {
    if ((UnityEngine_SceneManagement_SceneManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    uVar1 = UnityEngine_SceneManagement_SceneManager__get_sceneCount((MethodInfo *)0x0);
    if ((int)(uVar1 - 1) <= index) break;
    if ((UnityEngine_SceneManagement_SceneManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    local_48[0].m_Handle =
         (int32_t)UnityEngine_SceneManagement_SceneManager__GetSceneAt(index,(MethodInfo *)0x0);
    iVar2 = UnityEngine_SceneManagement_Scene__get_buildIndex
                      ((UnityEngine_SceneManagement_Scene_Fields)(int32_t)local_48,(MethodInfo *)0x0
                      );
    if (iVar2 != 1) {
      pUVar3 = UnityEngine_SceneManagement_Scene__GetRootGameObjects
                         ((UnityEngine_SceneManagement_Scene_Fields)(int32_t)local_48,
                          (MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_GameObject_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (0 < (int)pUVar3->max_length) {
        uVar5 = 0;
        uVar4 = pUVar3->max_length & 0xffffffff;
        do {
          if (uVar4 <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          obj = (UnityEngine_Object_o *)pUVar3->m_Items[uVar5];
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
          uVar1 = (uint)pUVar3->max_length;
          uVar4 = (ulong)uVar1;
          uVar5 = uVar5 + 1;
        } while ((long)uVar5 < (long)(int)uVar1);
      }
    }
    index = index + 1;
  }
  Nekki_SF2_GUI_Scenes_LoaderScreen__IIDHABFCKGG
            ((Nekki_SF2_GUI_Scenes_LoaderScreen_o *)(ulong)uVar1,method_00);
  return;
}

