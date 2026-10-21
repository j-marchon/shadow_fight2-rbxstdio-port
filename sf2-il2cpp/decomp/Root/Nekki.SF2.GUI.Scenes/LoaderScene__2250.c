// TypeDefIndex 2250
// Namespace: Nekki.SF2.GUI.Scenes
// public class LoaderScene : Scene<LoaderScene>
// Fields:
//   private LoaderScreen _LoaderScreenPrefab; // 0x90

// ===== protected override void GIENGNEGHPJ(object IMMNELPBGIF)  [RVA 0x32FCE9C]
// Nekki.SF2.GUI.Scenes.LoaderScene$$GIENGNEGHPJ @ RVA 0x32FCE9C

void Nekki_SF2_GUI_Scenes_LoaderScene__GIENGNEGHPJ
               (Nekki_SF2_GUI_Scenes_LoaderScene_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Scenes_LoaderScreen_o *pNVar2;
  
  if ((DAT_045676f3 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<LoaderScreen>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<LoaderScene>_GIENGNEGHPJ__);
    DAT_045676f3 = 1;
  }
  Nekki_SF2_GUI_Scene<object>__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Scene_T__o *)__this,IMMNELPBGIF,
             Method_Nekki_SF2_GUI_Scene<LoaderScene>_GIENGNEGHPJ__);
  if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_045624ed == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo);
    DAT_045624ed = '\x01';
  }
  if ((Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar2 = Nekki_SF2_GUI_Scenes_LoaderScreen_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._LoaderScreenPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar2 = (__this->fields)._LoaderScreenPrefab;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar2 = (Nekki_SF2_GUI_Scenes_LoaderScreen_o *)
               UnityEngine_Object__Instantiate<object>
                         ((Il2CppObject *)pNVar2,
                          Method_UnityEngine_Object_Instantiate<LoaderScreen>__);
      if (pNVar2 != (Nekki_SF2_GUI_Scenes_LoaderScreen_o *)0x0) {
        Nekki_SF2_GUI_Scenes_LoaderScreen__Init(pNVar2,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Scenes_LoaderScreen__Load(pNVar2,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}


// ===== public void .ctor()  [RVA 0x32FD01C]
// Nekki.SF2.GUI.Scenes.LoaderScene$$.ctor @ RVA 0x32FD01C

void Nekki_SF2_GUI_Scenes_LoaderScene___ctor
               (Nekki_SF2_GUI_Scenes_LoaderScene_o *__this,MethodInfo *method)

{
  if ((DAT_045676f4 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<LoaderScene>__ctor__);
    DAT_045676f4 = 1;
  }
  Nekki_SF2_GUI_Scene<object>___ctor
            ((Nekki_SF2_GUI_Scene_T__o *)__this,Method_Nekki_SF2_GUI_Scene<LoaderScene>__ctor__);
  return;
}


// ===== public override DBMPKPJGIPI get_SceneId()  [RVA 0x32FD064]
// Nekki.SF2.GUI.Scenes.LoaderScene$$get_SceneId @ RVA 0x32FD064

int32_t Nekki_SF2_GUI_Scenes_LoaderScene__get_SceneId
                  (Nekki_SF2_GUI_Scenes_LoaderScene_o *__this,MethodInfo *method)

{
  return 2;
}

