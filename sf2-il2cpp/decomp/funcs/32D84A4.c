// Nekki.SF2.GUI.Pvp.PhaseBox.FBPENINHENE$$MoveNext @ RVA 0x32D84A4

bool Nekki_SF2_GUI_Pvp_PhaseBox_FBPENINHENE__MoveNext
               (Nekki_SF2_GUI_Pvp_PhaseBox_FBPENINHENE_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *target;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_TweenCallback_o *action;
  UnityEngine_WaitForSeconds_o *__this_01;
  MethodInfo *extraout_x1;
  Il2CppObject **ppIVar2;
  Nekki_SF2_GUI_Pvp_PhaseBox_o *__this_02;
  
  if ((DAT_045675a1 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Pvp_PhaseBox_JCKJFDLOGEF__);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    FUN_01bab630(&
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_045675a1 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  __this_02 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (__this_02 == (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) goto LAB_033d85f0;
    Nekki_SF2_GUI_Pvp_PhaseBox__HidePhaseList(__this_02,method);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if ((__this_02 != (Nekki_SF2_GUI_Pvp_PhaseBox_o *)0x0) &&
       (__this_00 = (__this_02->fields)._phaseList, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      target = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      t = DG_Tweening_ShortcutExtensions__DOLocalMoveY(target,-41.0,0.5,false,(MethodInfo *)0x0);
      action = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo)
      ;
      DG_Tweening_TweenCallback___ctor();
      DG_Tweening_TweenSettingsExtensions__OnComplete<object>
                ((Il2CppObject *)t,action,
                 Method_DG_Tweening_TweenSettingsExtensions_OnComplete<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
      __this_01 = (UnityEngine_WaitForSeconds_o *)
                  thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(__this_01,3.0,(MethodInfo *)0x0);
      ppIVar2 = &(__this->fields).__2__current;
      *ppIVar2 = (Il2CppObject *)__this_01;
      thunk_FUN_01c20e04(ppIVar2,__this_01);
      (__this->fields).__1__state = 1;
      return true;
    }
LAB_033d85f0:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}

