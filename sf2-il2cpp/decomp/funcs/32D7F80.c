// Nekki.SF2.GUI.Pvp.PhaseBox$$HidePhaseList @ RVA 0x32D7F80

void Nekki_SF2_GUI_Pvp_PhaseBox__HidePhaseList
               (Nekki_SF2_GUI_Pvp_PhaseBox_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *target;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_TweenCallback_o *action;
  UnityEngine_Coroutine_o *routine;
  
  if ((DAT_0456759e & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PhaseBox_DKKNHKPHJKJ__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    DAT_0456759e = 1;
  }
  routine = (__this->fields).CDABKLLENPE;
  if (routine != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields)._phaseList;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    target = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    t = DG_Tweening_ShortcutExtensions__DOLocalMoveY(target,400.0,0.5,false,(MethodInfo *)0x0);
    action = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo);
    DG_Tweening_TweenCallback___ctor();
    DG_Tweening_TweenSettingsExtensions__OnComplete<object>
              ((Il2CppObject *)t,action,
               Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
              );
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

